/*
** Automatically generated from `intermod.m'
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



#line 1612 "intermod.m"
struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0_s {
#line 1612 "intermod.m"
  MR_Word transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__TVars_4;
#line 1612 "intermod.m"
  MR_Word * transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__HeadVar__3_9;
#line 1612 "intermod.m"
  MR_Cont transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__cont;
#line 1612 "intermod.m"
  void * transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__cont_env_ptr;
#line 1612 "intermod.m"
  MR_Word transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__TypeInfo_13_13;
#line 1612 "intermod.m"
  MR_Integer transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__N_8;
#line 1613 "intermod.m"
  MR_Box transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__conv0_N_8;
#line 1612 "intermod.m"
};

#line 1612 "intermod.m"
struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s {
#line 1612 "intermod.m"
  MR_Box * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1;
#line 1612 "intermod.m"
  MR_Cont transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont;
#line 1612 "intermod.m"
  void * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr;
#line 1612 "intermod.m"
  MR_Word transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9;
#line 1612 "intermod.m"
};

#line 1612 "intermod.m"
struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s {
#line 1612 "intermod.m"
  MR_Box * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1;
#line 1612 "intermod.m"
  MR_Cont transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont;
#line 1612 "intermod.m"
  void * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr;
#line 1612 "intermod.m"
  MR_Word transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9;
#line 1612 "intermod.m"
};

#line 1245 "intermod.m"
struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s {
#line 1247 "intermod.m"
  MR_bool transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded;
#line 1261 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12;
#line 1267 "intermod.m"
  jmp_buf transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0;
#line 1267 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14;
#line 1267 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15;
#line 1267 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23;
#line 1267 "intermod.m"
  MR_Box transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23;
#line 1245 "intermod.m"
};

#line 636 "intermod.m"
struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s {
#line 639 "intermod.m"
  MR_bool transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded;
#line 639 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9;
#line 639 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11;
#line 669 "intermod.m"
  jmp_buf transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0;
#line 669 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_37_37;
#line 669 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38;
#line 669 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44;
#line 669 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14;
#line 669 "intermod.m"
  MR_Integer transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15;
#line 669 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16;
#line 669 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26;
#line 669 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41;
#line 670 "intermod.m"
  MR_Box transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15;
#line 636 "intermod.m"
};

#line 453 "intermod.m"
struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s {
#line 453 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1;
#line 453 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
#line 456 "intermod.m"
  MR_bool transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
#line 457 "intermod.m"
  jmp_buf transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0;
#line 457 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4;
#line 457 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8;
#line 453 "intermod.m"
};

#line 290 "intermod.m"
struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s {
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10;
#line 295 "intermod.m"
  MR_bool transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded;
#line 306 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20;
#line 435 "intermod.m"
  jmp_buf transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0;
#line 435 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61;
#line 435 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70;
#line 435 "intermod.m"
  MR_Box transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70;
#line 290 "intermod.m"
};


#line 287 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 290 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 293 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

#line 296 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 299 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 302 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 305 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 308 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 311 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 314 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 317 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 320 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 323 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 326 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 329 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 332 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 335 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 338 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 341 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 344 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 347 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 350 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

#line 353 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 356 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 359 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 362 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 365 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 368 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 371 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 374 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 377 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 380 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 383 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 386 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 389 "transform_hlds.intermod.c"
static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0[9];

#line 392 "transform_hlds.intermod.c"
static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0[9];

#line 395 "transform_hlds.intermod.c"
static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0;

#line 398 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1];

#line 401 "transform_hlds.intermod.c"
static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1];

#line 404 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1];

#line 407 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1];

#line 410 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0;

#line 413 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1;

#line 416 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_opt_file_type_0[2];

#line 419 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_opt_file_type_0[2];

#line 422 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_opt_file_type_0[2];

#line 425 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
#line 428 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 430 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 433 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
#line 436 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 438 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 440 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3);

#line 443 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____opt_file_type_0_0_10001(
#line 446 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 448 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 451 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____opt_file_type_0_0_10001(
#line 454 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 456 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 458 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3);

#line 2502 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_111_112_116_105_109_105_122_97_116_105_111_110_95_105_110_116_101_114_102_97_99_101_115_95_95_91_51_93_95_48_13_p_0(
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_1,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__Transitive_2,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__ModulesProcessed0_5,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Items_0_6,
#line 2502 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Items_7,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0_8,
#line 2502 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Specs_9,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_10,
#line 2502 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_11);

#line 1184 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
#line 1184 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1184 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1184 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1184 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1184 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1184 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6);

#line 223 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
#line 223 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 223 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_2,
#line 223 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_4,
#line 223 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_5,
#line 223 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_6,
#line 223 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_7,
#line 223 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_8);

#line 204 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
#line 204 "intermod.m"
  MR_Word transform_hlds__intermod__ExtraExportedPreds0_8,
#line 204 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_10,
#line 204 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_11,
#line 204 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_12,
#line 204 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_19,
#line 204 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_20);

#line 2281 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2281__1_2_p_0(
#line 2281 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_10,
#line 2281 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_11);

#line 2247 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2247__1_4_p_0(
#line 2247 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_4,
#line 2247 "intermod.m"
  MR_Word transform_hlds__intermod__SpecPredMap_8,
#line 2247 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_13,
#line 2247 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_14);

#line 1895 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1895__1_4_p_0(
#line 1895 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1895 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVarMap_15,
#line 1895 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_23,
#line 1895 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_24);

#line 1813 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1813__1_1_p_0(
#line 1813 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_67);

#line 1691 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1691__1_3_p_0(
#line 1691 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__1_45,
#line 1691 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__2_46,
#line 1691 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_47);

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_2(
#line 1613 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_1(
#line 1612 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0(
#line 1612 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1612 "intermod.m"
  MR_Word transform_hlds__intermod__Set_5,
#line 1612 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_9,
#line 1612 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1612 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1322 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1322__1_3_p_0(
#line 1322 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_48);

#line 994 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__994__1_1_f_0(
#line 994 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_54);

#line 981 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__981__1_1_f_0(
#line 981 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_50);

#line 836 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__836__1_2_p_0(
#line 836 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_44,
#line 836 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_45);

#line 2440 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__grab_opt_files__2440__1_3_p_0(
#line 2440 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_23,
#line 2440 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_24,
#line 2440 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_82);

#line 2073 "intermod.m"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
#line 2073 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__1_1,
#line 2073 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 2073 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3);

#line 2073 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0(
#line 2073 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2073 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 2368 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__import_status_to_write_1_p_0(
#line 2368 "intermod.m"
  MR_Word transform_hlds__intermod__Status_2);

#line 2337 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(
#line 2337 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2337 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0_2,
#line 2337 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Preds_3);

#line 2279 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0_1(
#line 2279 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2279 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2279 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2305 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0(
#line 2305 "intermod.m"
  MR_Word transform_hlds__intermod__Instance0_5,
#line 2305 "intermod.m"
  MR_Word * transform_hlds__intermod__Instance_6,
#line 2305 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20,
#line 2305 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21);

#line 2302 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0_1(
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

#line 2296 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0(
#line 2296 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2296 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2296 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9,
#line 2296 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10);

#line 2279 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0_1(
#line 2279 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2279 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2279 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2261 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0(
#line 2261 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2261 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2261 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10,
#line 2261 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11);

#line 2247 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0_1(
#line 2247 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2247 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2247 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2228 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0(
#line 2228 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_6,
#line 2228 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_7,
#line 2228 "intermod.m"
  MR_Word * transform_hlds__intermod__TypeDefn_8,
#line 2228 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11,
#line 2228 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12);

#line 2291 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3(
#line 2291 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2291 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2291 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2291 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2291 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2257 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2(
#line 2257 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2257 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2257 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2257 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2257 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2224 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1(
#line 2224 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2224 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2224 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2224 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3,
#line 2224 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_4,
#line 2224 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_5);

#line 2209 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(
#line 2209 "intermod.m"
  MR_Word transform_hlds__intermod__Info_4,
#line 2209 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8,
#line 2209 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9);

#line 2151 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(
#line 2151 "intermod.m"
  MR_Word transform_hlds__intermod__TVarSet_4,
#line 2151 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2151 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2147 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_write_header_2_p_0(
#line 2147 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2147 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2145 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_module_info_3_p_0(
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_4,
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2145 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2141 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
#line 2141 "intermod.m"
  MR_Word transform_hlds__intermod__Types_4,
#line 2141 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2141 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2134 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_preds_3_p_0(
#line 2134 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_4,
#line 2134 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2134 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2125 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_module_info_2_p_0(
#line 2125 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2125 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2118 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_preds_2_p_0(
#line 2118 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2118 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2036 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
#line 2036 "intermod.m"
  MR_Word transform_hlds__intermod__Args_6,
#line 2036 "intermod.m"
  MR_Word transform_hlds__intermod__Modes_7,
#line 2036 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26,
#line 2036 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_VarSet_27,
#line 2036 "intermod.m"
  MR_Word * transform_hlds__intermod__PragmaVars_9);

#line 1968 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(
#line 1968 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_1,
#line 1968 "intermod.m"
  MR_Integer transform_hlds__intermod__Arity_2,
#line 1968 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1968 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_4);

#line 1907 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
#line 1907 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 1907 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_2,
#line 1907 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1907 "intermod.m"
  MR_Word * transform_hlds__intermod__Goals_4,
#line 1907 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5,
#line 1907 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6);

#line 1891 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
#line 1891 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1891 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1891 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 1879 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
#line 1879 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_5,
#line 1879 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1879 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadTerms_7,
#line 1879 "intermod.m"
  MR_Word * transform_hlds__intermod__Clause_8);

#line 1842 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_11,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_12,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__PragmaImpl_13,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__Attributes_14,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__Args_15,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__ProgVarset0_16,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_17,
#line 1842 "intermod.m"
  MR_Integer transform_hlds__intermod__ProcId_18);

#line 1833 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
#line 1833 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1833 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1833 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1833 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1813 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
#line 1813 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1813 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 1787 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_12,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_13,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_14,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__VarSet_15,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_16,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_17,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_18,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__MaybeVarTypes_19,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_20);

#line 1781 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0_1(
#line 1781 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1781 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1781 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1781 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1736 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0(
#line 1736 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_1,
#line 1736 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_2,
#line 1736 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3);

#line 1704 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_modes_6_p_0(
#line 1704 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_1,
#line 1704 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_2,
#line 1704 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_3,
#line 1704 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4);

#line 1992 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_2(
#line 1992 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1992 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1992 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1992 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1691 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1(
#line 1691 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1691 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1691 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1691 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1639 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0(
#line 1639 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1639 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1623 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_4_p_0(
#line 1623 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1623 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1621 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0_1(
#line 1621 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1621 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1621 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1621 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1617 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0(
#line 1617 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1617 "intermod.m"
  MR_Word transform_hlds__intermod__Instances_6);

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3(
#line 1612 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4(
#line 1612 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1612 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1612 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1612 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
#line 1612 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2(
#line 1612 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1612 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1612 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1612 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1601 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
#line 1601 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1601 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1591 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0_1(
#line 1591 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1591 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 1579 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0(
#line 1579 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1579 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1579 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_9,
#line 1579 "intermod.m"
  MR_Word transform_hlds__intermod__ClassDefn_10);

#line 1577 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0_1(
#line 1577 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1577 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1577 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1577 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1577 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1571 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0(
#line 1571 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1571 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1545 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_6_p_0(
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__InstId_9,
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__InstDefn_10);

#line 1543 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0_1(
#line 1543 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1543 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1543 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1543 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1543 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1535 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0(
#line 1535 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1535 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1515 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_6_p_0(
#line 1515 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1515 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1515 "intermod.m"
  MR_Word transform_hlds__intermod__ModeId_9,
#line 1515 "intermod.m"
  MR_Word transform_hlds__intermod__ModeDefn_10);

#line 1513 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0_1(
#line 1513 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1513 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1513 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1513 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1513 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1506 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0(
#line 1506 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1506 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1489 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(
#line 1489 "intermod.m"
  MR_Word transform_hlds__intermod__ConsId_5,
#line 1489 "intermod.m"
  MR_Word transform_hlds__intermod__ConsTag_6,
#line 1489 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Values_0_14,
#line 1489 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Values_15);

#line 1478 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0_1(
#line 1478 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1478 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1478 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1478 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1478 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1354 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0(
#line 1354 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1354 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1334 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modules_3_p_0(
#line 1334 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1);

#line 1322 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_2(
#line 1322 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1322 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1322 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1322 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1352 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_1(
#line 1352 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1352 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1352 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1352 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1279 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0(
#line 1279 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4);

#line 1267 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_1(
#line 1267 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1267 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_3(
#line 1267 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1267 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_2(
#line 1267 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1267 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_4(
#line 1267 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1245 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0(
#line 1245 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4);

#line 1213 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
#line 1213 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1213 "intermod.m"
  MR_Word transform_hlds__intermod__SpecialId_2,
#line 1213 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_3,
#line 1213 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 1213 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__5_5,
#line 1213 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1213 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7);

#line 1196 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
#line 1196 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1196 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1196 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1196 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1196 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1196 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6);

#line 1102 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
#line 1102 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_7,
#line 1102 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_8,
#line 1102 "intermod.m"
  MR_Word transform_hlds__intermod__ForeignTypeBody0_9,
#line 1102 "intermod.m"
  MR_Word * transform_hlds__intermod__ForeignTypeBody_10,
#line 1102 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 1102 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25);

#line 1035 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_4_p_0(
#line 1035 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_5,
#line 1035 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_6,
#line 1035 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_33,
#line 1035 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_34);

#line 1033 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0_1(
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1033 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1028 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0(
#line 1028 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1028 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7);

#line 992 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
#line 992 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 992 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 979 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
#line 979 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 979 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 964 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_11,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceMethodName0_12,
#line 964 "intermod.m"
  MR_Integer transform_hlds__intermod__MethodArity_13,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallTVarSet_14,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallExistQTVars_15,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallArgTypes_16,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_17,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__MethodContext_18,
#line 964 "intermod.m"
  MR_Word * transform_hlds__intermod__MaybePredId_19,
#line 964 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethodName_20);

#line 896 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
#line 896 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 896 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 896 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethod_9,
#line 896 "intermod.m"
  MR_Word transform_hlds__intermod__PredIds0_10,
#line 896 "intermod.m"
  MR_Word * transform_hlds__intermod__PredIds_11);

#line 851 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_3(
#line 851 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 851 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 851 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 851 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 851 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 849 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_2(
#line 849 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 849 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 849 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 849 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 849 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 834 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_1(
#line 834 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 834 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 834 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 814 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0(
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefn_8,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_39,
#line 814 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_40);

#line 812 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0_1(
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 812 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 807 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0(
#line 807 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 807 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 807 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefns_8,
#line 807 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_10,
#line 807 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_11);

#line 805 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_p_0_1(
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 805 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 800 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_p_0(
#line 800 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 800 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7);

#line 760 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(
#line 760 "intermod.m"
  MR_Word transform_hlds__intermod__RHS0_6,
#line 760 "intermod.m"
  MR_Word * transform_hlds__intermod__RHS_7,
#line 760 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 760 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_28,
#line 760 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_29);

#line 669 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_1(
#line 669 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 670 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_3(
#line 670 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 669 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_2(
#line 669 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 669 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_4(
#line 669 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 636 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0(
#line 636 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 636 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 636 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 636 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25);

#line 623 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_4_p_0(
#line 623 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 623 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 623 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_8,
#line 623 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_9);

#line 596 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_cases_5_p_0(
#line 596 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 596 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 596 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 596 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 596 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 581 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(
#line 581 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 581 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 581 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 581 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 581 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 480 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(
#line 480 "intermod.m"
  MR_Word transform_hlds__intermod__GoalExpr0_6,
#line 480 "intermod.m"
  MR_Word * transform_hlds__intermod__GoalExpr_7,
#line 480 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 480 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_81,
#line 480 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_82);

#line 472 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_5_p_0(
#line 472 "intermod.m"
  MR_Word transform_hlds__intermod__Goal0_6,
#line 472 "intermod.m"
  MR_Word * transform_hlds__intermod__Goal_7,
#line 472 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 472 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_13,
#line 472 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_14);

#line 457 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
#line 457 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 457 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
#line 457 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 457 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
#line 457 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 453 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
#line 453 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 453 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 415 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__check_for_ho_input_args_4_p_0(
#line 415 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_5,
#line 415 "intermod.m"
  MR_Word transform_hlds__intermod__VarTypes_6,
#line 415 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 415 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4);

#line 389 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_clauses_5_p_0(
#line 389 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 389 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 389 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 389 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 389 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 378 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(
#line 378 "intermod.m"
  MR_Word transform_hlds__intermod__Target_1,
#line 378 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 435 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_1(
#line 435 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 435 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_3(
#line 435 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 435 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_2(
#line 435 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 435 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_4(
#line 435 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 290 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0(
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_9,
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_10,
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__PredInfo_11,
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__TypeSpecForcePreds_12,
#line 290 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_13,
#line 290 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_14,
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_15,
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_16);

#line 805 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_pred_import_status_2_p_0_1(
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 805 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2460 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_2(
#line 2460 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2460 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 2440 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_1(
#line 2440 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2440 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 1033 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_opt_file_4_p_0_1(
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1033 "intermod.m"
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_impl_0)),
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



#line 2506 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2514 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2522 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

#line 2531 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2539 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 2548 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2557 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  }
};

#line 2565 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2573 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2581 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2589 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2597 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2606 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2614 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2622 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2630 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2639 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 2647 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2655 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2664 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2672 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2680 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 2689 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2697 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2706 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 2715 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2724 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2732 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2740 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2749 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2757 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 2766 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 2774 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2783 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2791 "transform_hlds.intermod.c"
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

#line 2804 "transform_hlds.intermod.c"
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

#line 2817 "transform_hlds.intermod.c"
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

#line 2832 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

#line 2837 "transform_hlds.intermod.c"
static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0
  }
};

#line 2846 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

#line 2851 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1] = {
  (MR_Integer) 0
};

#line 2856 "transform_hlds.intermod.c"
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

#line 2877 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0 = {
  (MR_String) "opt_file",
  (MR_Integer) 0
};

#line 2883 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1 = {
  (MR_String) "trans_opt_file",
  (MR_Integer) 1
};

#line 2889 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_opt_file_type_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1
};

#line 2895 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_opt_file_type_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1
};

#line 2901 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_opt_file_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2907 "transform_hlds.intermod.c"
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

#line 2928 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
#line 2931 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2933 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2935 "transform_hlds.intermod.c"
{
#line 2937 "transform_hlds.intermod.c"
  {
#line 2939 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded;

#line 2942 "transform_hlds.intermod.c"
    {
#line 2944 "transform_hlds.intermod.c"
      transform_hlds__intermod__succeeded = transform_hlds__intermod____Unify____intermod_info_0_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2947 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 2949 "transform_hlds.intermod.c"
  }
#line 2951 "transform_hlds.intermod.c"
}

#line 2954 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
#line 2957 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 2959 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2961 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3)
#line 2963 "transform_hlds.intermod.c"
{
#line 2965 "transform_hlds.intermod.c"
  {
#line 2967 "transform_hlds.intermod.c"
    MR_Word transform_hlds__intermod__conv0_HeadVar__1_1;

#line 2970 "transform_hlds.intermod.c"
    {
#line 2972 "transform_hlds.intermod.c"
      transform_hlds__intermod____Compare____intermod_info_0_0(&transform_hlds__intermod__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3));
    }
#line 2975 "transform_hlds.intermod.c"
    *transform_hlds__intermod__wrapper_arg_1 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__1_1));
#line 2977 "transform_hlds.intermod.c"
  }
#line 2979 "transform_hlds.intermod.c"
}

#line 2982 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____opt_file_type_0_0_10001(
#line 2985 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2987 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2989 "transform_hlds.intermod.c"
{
#line 2991 "transform_hlds.intermod.c"
  {
#line 2993 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded;

#line 2996 "transform_hlds.intermod.c"
    {
#line 2998 "transform_hlds.intermod.c"
      transform_hlds__intermod__succeeded = transform_hlds__intermod____Unify____opt_file_type_0_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 3001 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 3003 "transform_hlds.intermod.c"
  }
#line 3005 "transform_hlds.intermod.c"
}

#line 3008 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____opt_file_type_0_0_10001(
#line 3011 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 3013 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 3015 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3)
#line 3017 "transform_hlds.intermod.c"
{
#line 3019 "transform_hlds.intermod.c"
  {
#line 3021 "transform_hlds.intermod.c"
    MR_Word transform_hlds__intermod__conv0_HeadVar__1_1;

#line 3024 "transform_hlds.intermod.c"
    {
#line 3026 "transform_hlds.intermod.c"
      transform_hlds__intermod____Compare____opt_file_type_0_0(&transform_hlds__intermod__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3));
    }
#line 3029 "transform_hlds.intermod.c"
    *transform_hlds__intermod__wrapper_arg_1 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__1_1));
#line 3031 "transform_hlds.intermod.c"
  }
#line 3033 "transform_hlds.intermod.c"
}

#line 2502 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_111_112_116_105_109_105_122_97_116_105_111_110_95_105_110_116_101_114_102_97_99_101_115_95_95_91_51_93_95_48_13_p_0(
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_1,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__Transitive_2,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__ModulesProcessed0_5,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Items_0_6,
#line 2502 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Items_7,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0_8,
#line 2502 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Specs_9,
#line 2502 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_10,
#line 2502 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_11)
#line 2502 "intermod.m"
{
#line 2508 "intermod.m"
  while (MR_TRUE)
#line 2508 "intermod.m"
    {
#line 2508 "intermod.m"
      /* tailcall optimized into a loop */
#line 2508 "intermod.m"
      {
#line 2508 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 2508 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2508 "intermod.m"
          {
#line 2508 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Error_11 = transform_hlds__intermod__STATE_VARIABLE_Error_0_10;
#line 2508 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Specs_9 = transform_hlds__intermod__STATE_VARIABLE_Specs_0_8;
#line 2508 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Items_7 = transform_hlds__intermod__STATE_VARIABLE_Items_0_6;
#line 2508 "intermod.m"
          }
#line 2508 "intermod.m"
        else
#line 2511 "intermod.m"
          {
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_96_96;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__ModuleToRead_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__ModulesToRead_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 1)));
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__VeryVerbose_40;
#line 2511 "intermod.m"
            MR_String transform_hlds__intermod__ModuleToReadString_41;
#line 2511 "intermod.m"
            MR_String transform_hlds__intermod__FileName_42;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__OptItems_43;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__OptSpecs_44;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__OptError_45;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__ModulesProcessed_53;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__NewDeps_54;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_64_64;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_78_78;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_79_79;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Items_80_80;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__V_81_81;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_82_82;
#line 2511 "intermod.m"
            MR_Word transform_hlds__intermod__V_91_91;

#line 2512 "intermod.m"
            {
#line 2512 "intermod.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_1, (MR_Integer) 45, &transform_hlds__intermod__VeryVerbose_40);
            }
#line 2513 "intermod.m"
            {
#line 2513 "intermod.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__intermod__VeryVerbose_40, transform_hlds__intermod__Globals_1, transform_hlds__intermod__STATE_VARIABLE_Specs_0_8, &transform_hlds__intermod__STATE_VARIABLE_Specs_64_64);
            }
#line 2514 "intermod.m"
            {
#line 2514 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_40, (MR_String) "% Reading optimization interface for module");
            }
#line 2516 "intermod.m"
            {
#line 2516 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_40, (MR_String) " \140");
            }
#line 2517 "intermod.m"
            {
#line 2517 "intermod.m"
              transform_hlds__intermod__ModuleToReadString_41 = mdbcomp__prim_data__sym_name_to_string_1_f_0(transform_hlds__intermod__ModuleToRead_33);
            }
#line 2518 "intermod.m"
            {
#line 2518 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_40, transform_hlds__intermod__ModuleToReadString_41);
            }
#line 2519 "intermod.m"
            {
#line 2519 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_40, (MR_String) "\'...\n");
            }
#line 2520 "intermod.m"
            {
#line 2520 "intermod.m"
              libs__file_util__maybe_flush_output_3_p_0(transform_hlds__intermod__VeryVerbose_40);
            }
#line 2522 "intermod.m"
            {
#line 2522 "intermod.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(transform_hlds__intermod__Globals_1, transform_hlds__intermod__ModuleToRead_33, (MR_String) ".opt", &transform_hlds__intermod__FileName_42);
            }
#line 2524 "intermod.m"
            {
#line 2524 "intermod.m"
              parse_tree__prog_io__actually_read_opt_file_8_p_0(transform_hlds__intermod__Globals_1, transform_hlds__intermod__FileName_42, transform_hlds__intermod__ModuleToRead_33, &transform_hlds__intermod__OptItems_43, &transform_hlds__intermod__OptSpecs_44, &transform_hlds__intermod__OptError_45);
            }
#line 2526 "intermod.m"
            {
#line 2526 "intermod.m"
              transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0((MR_Integer) 0, transform_hlds__intermod__FileName_42, transform_hlds__intermod__OptSpecs_44, transform_hlds__intermod__STATE_VARIABLE_Specs_64_64, &transform_hlds__intermod__STATE_VARIABLE_Specs_78_78, transform_hlds__intermod__OptError_45, transform_hlds__intermod__STATE_VARIABLE_Error_0_10, &transform_hlds__intermod__STATE_VARIABLE_Error_79_79);
            }
#line 3180 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 2528 "intermod.m"
            {
#line 2528 "intermod.m"
              transform_hlds__intermod__V_81_81 = mercury__cord__from_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_96_96, transform_hlds__intermod__OptItems_43);
            }
#line 2528 "intermod.m"
            {
#line 2528 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Items_80_80 = mercury__cord__f_43_43_2_f_0(transform_hlds__intermod__TypeCtorInfo_96_96, transform_hlds__intermod__STATE_VARIABLE_Items_0_6, transform_hlds__intermod__V_81_81);
            }
#line 2529 "intermod.m"
            {
#line 2529 "intermod.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__intermod__VeryVerbose_40, transform_hlds__intermod__Globals_1, transform_hlds__intermod__STATE_VARIABLE_Specs_78_78, &transform_hlds__intermod__STATE_VARIABLE_Specs_82_82);
            }
#line 2530 "intermod.m"
            {
#line 2530 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_40, (MR_String) "% done.\n");
            }
#line 2543 "intermod.m"
            if ((transform_hlds__intermod__Transitive_2 == (MR_Integer) 0))
#line 2544 "intermod.m"
              {
#line 2545 "intermod.m"
                transform_hlds__intermod__ModulesProcessed_53 = transform_hlds__intermod__ModulesProcessed0_5;
#line 2546 "intermod.m"
                transform_hlds__intermod__NewDeps_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2544 "intermod.m"
              }
#line 2543 "intermod.m"
            else
#line 2533 "intermod.m"
              {
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__TypeCtorInfo_97_97;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__NewImportDeps0_46;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__NewUseDeps0_47;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__NewImplicitImportDeps0_48;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__NewImplicitUseDeps0_49;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__NewDeps0_50;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__NewDepsSet0_51;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__NewDepsSet_52;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__V_86_86;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__V_87_87;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__V_88_88;
#line 2533 "intermod.m"
                MR_Word transform_hlds__intermod__V_89_89;

#line 2534 "intermod.m"
                {
#line 2534 "intermod.m"
                  parse_tree__module_imports__get_dependencies_3_p_0(transform_hlds__intermod__OptItems_43, &transform_hlds__intermod__NewImportDeps0_46, &transform_hlds__intermod__NewUseDeps0_47);
                }
#line 2535 "intermod.m"
                {
#line 2535 "intermod.m"
                  parse_tree__module_imports__get_implicit_dependencies_4_p_0(transform_hlds__intermod__OptItems_43, transform_hlds__intermod__Globals_1, &transform_hlds__intermod__NewImplicitImportDeps0_48, &transform_hlds__intermod__NewImplicitUseDeps0_49);
                }
#line 3251 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeCtorInfo_97_97 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 2538 "intermod.m"
                {
#line 2538 "intermod.m"
                  transform_hlds__intermod__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2538 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_89_89, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitUseDeps0_49));
#line 2538 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2538 "intermod.m"
                }
#line 2538 "intermod.m"
                {
#line 2538 "intermod.m"
                  transform_hlds__intermod__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2538 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_88_88, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitImportDeps0_48));
#line 2538 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_88_88, 1) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2538 "intermod.m"
                }
#line 2537 "intermod.m"
                {
#line 2537 "intermod.m"
                  transform_hlds__intermod__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2537 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_87_87, 0) = ((MR_Box) (transform_hlds__intermod__NewUseDeps0_47));
#line 2537 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_87_87, 1) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2537 "intermod.m"
                }
#line 2537 "intermod.m"
                {
#line 2537 "intermod.m"
                  transform_hlds__intermod__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2537 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_86_86, 0) = ((MR_Box) (transform_hlds__intermod__NewImportDeps0_46));
#line 2537 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_86_86, 1) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2537 "intermod.m"
                }
#line 2537 "intermod.m"
                {
#line 2537 "intermod.m"
                  transform_hlds__intermod__NewDeps0_50 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_97_97, transform_hlds__intermod__V_86_86);
                }
#line 2539 "intermod.m"
                {
#line 2539 "intermod.m"
                  mercury__set__list_to_set_2_p_0(transform_hlds__intermod__TypeCtorInfo_97_97, transform_hlds__intermod__NewDeps0_50, &transform_hlds__intermod__NewDepsSet0_51);
                }
#line 2540 "intermod.m"
                {
#line 2540 "intermod.m"
                  mercury__set__difference_3_p_0(transform_hlds__intermod__TypeCtorInfo_97_97, transform_hlds__intermod__NewDepsSet0_51, transform_hlds__intermod__ModulesProcessed0_5, &transform_hlds__intermod__NewDepsSet_52);
                }
#line 2541 "intermod.m"
                {
#line 2541 "intermod.m"
                  mercury__set__union_3_p_0(transform_hlds__intermod__TypeCtorInfo_97_97, transform_hlds__intermod__ModulesProcessed0_5, transform_hlds__intermod__NewDepsSet_52, &transform_hlds__intermod__ModulesProcessed_53);
                }
#line 2542 "intermod.m"
                {
#line 2542 "intermod.m"
                  mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_97_97, transform_hlds__intermod__NewDepsSet_52, &transform_hlds__intermod__NewDeps_54);
                }
#line 2533 "intermod.m"
              }
#line 2549 "intermod.m"
            {
#line 2549 "intermod.m"
              transform_hlds__intermod__V_91_91 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, transform_hlds__intermod__NewDeps_54, transform_hlds__intermod__ModulesToRead_34);
            }
#line 2548 "intermod.m"
            /* direct tailcall eliminated */
#line 2548 "intermod.m"
            {
#line 2548 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__4__tmp_copy_4 = transform_hlds__intermod__V_91_91;
#line 2548 "intermod.m"
              MR_Word transform_hlds__intermod__ModulesProcessed0__tmp_copy_5 = transform_hlds__intermod__ModulesProcessed_53;
#line 2548 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Items_0__tmp_copy_6 = transform_hlds__intermod__STATE_VARIABLE_Items_80_80;
#line 2548 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0__tmp_copy_8 = transform_hlds__intermod__STATE_VARIABLE_Specs_82_82;
#line 2548 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0__tmp_copy_10 = transform_hlds__intermod__STATE_VARIABLE_Error_79_79;

#line 2548 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Error_0_10 = transform_hlds__intermod__STATE_VARIABLE_Error_0__tmp_copy_10;
#line 2548 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Specs_0_8 = transform_hlds__intermod__STATE_VARIABLE_Specs_0__tmp_copy_8;
#line 2548 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Items_0_6 = transform_hlds__intermod__STATE_VARIABLE_Items_0__tmp_copy_6;
#line 2548 "intermod.m"
              transform_hlds__intermod__ModulesProcessed0_5 = transform_hlds__intermod__ModulesProcessed0__tmp_copy_5;
#line 2548 "intermod.m"
              transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__4__tmp_copy_4;
#line 2548 "intermod.m"
            }
#line 2548 "intermod.m"
            continue;
#line 2511 "intermod.m"
          }
#line 2508 "intermod.m"
      }
#line 2508 "intermod.m"
      break;
#line 2508 "intermod.m"
    }
#line 2502 "intermod.m"
}

#line 1184 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
#line 1184 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1184 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1184 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1184 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1184 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1184 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6)
#line 1184 "intermod.m"
{
#line 1188 "intermod.m"
  {
#line 1188 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1188 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "intermod.m"
      {
#line 1188 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1188 "intermod.m"
      }
#line 1188 "intermod.m"
    else
#line 1192 "intermod.m"
      {
#line 1192 "intermod.m"
        MR_Box transform_hlds__intermod__Body_14;
#line 1192 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1192 "intermod.m"
        MR_Word transform_hlds__intermod__Assertions_16;
#line 1192 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeUserEqComp_17;
#line 1192 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1192 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;

#line 1190 "intermod.m"
        transform_hlds__intermod__Body_14 = (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 0));
#line 1190 "intermod.m"
        transform_hlds__intermod__MaybeUserEqComp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 1)));
#line 1190 "intermod.m"
        transform_hlds__intermod__Assertions_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 2)));
#line 1200 "intermod.m"
        if ((transform_hlds__intermod__MaybeUserEqComp0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1200 "intermod.m"
          {
#line 1200 "intermod.m"
            transform_hlds__intermod__MaybeUserEqComp_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1200 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1200 "intermod.m"
          }
#line 1200 "intermod.m"
        else
#line 1200 "intermod.m"
          {
#line 1200 "intermod.m"
            MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEqComp0_15, (MR_Integer) 0)));

#line 1200 "intermod.m"
            if (((MR_tag((MR_Word) transform_hlds__intermod__V_53_53)) == (MR_mktag((MR_Integer) 1))))
#line 1201 "intermod.m"
              {
#line 1203 "intermod.m"
                transform_hlds__intermod__MaybeUserEqComp_17 = transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1203 "intermod.m"
                *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1201 "intermod.m"
              }
#line 1200 "intermod.m"
            else
#line 1206 "intermod.m"
              {
#line 1206 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserEq0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_53_53, (MR_Integer) 0)));
#line 1206 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserCompare0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_53_53, (MR_Integer) 1)));
#line 1206 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserEq_42;
#line 1206 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserCompare_43;
#line 1206 "intermod.m"
                MR_Word transform_hlds__intermod__V_48_48;
#line 1206 "intermod.m"
                MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_32_50;

#line 1217 "intermod.m"
                if ((transform_hlds__intermod__MaybeUserEq0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1217 "intermod.m"
                  {
#line 1217 "intermod.m"
                    transform_hlds__intermod__MaybeUserEq_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1217 "intermod.m"
                    transform_hlds__intermod__STATE_VARIABLE_Info_32_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1217 "intermod.m"
                  }
#line 1217 "intermod.m"
                else
#line 1219 "intermod.m"
                  {
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__Pred0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq0_40, (MR_Integer) 0)));
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__Pred_64;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__SpecialPreds_66;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__UnifyPredId_67;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__UnifyPredInfo_68;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__TVarSet_69;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__ExistQVars_70;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__ArgTypes_71;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__HeadTypeParams_72;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__Markers0_73;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__Markers_74;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__Context_75;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__UserEqPredId_76;
#line 1219 "intermod.m"
                    MR_Word transform_hlds__intermod__V_80_80;
#line 1221 "intermod.m"
                    MR_Box transform_hlds__intermod__conv0_UnifyPredId_67;
#line 627 "intermod.m"
                    MR_Word transform_hlds__intermod__V_91_91;

#line 1220 "intermod.m"
                    {
#line 1220 "intermod.m"
                      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_66);
                    }
#line 1221 "intermod.m"
                    {
#line 1221 "intermod.m"
                      transform_hlds__intermod__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "intermod.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1221 "intermod.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_2));
#line 1221 "intermod.m"
                    }
#line 1221 "intermod.m"
                    {
#line 1221 "intermod.m"
                      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[2], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_66, ((MR_Box) (transform_hlds__intermod__V_80_80)), &transform_hlds__intermod__conv0_UnifyPredId_67);
                    }
#line 1221 "intermod.m"
                    transform_hlds__intermod__UnifyPredId_67 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_67);
#line 1222 "intermod.m"
                    {
#line 1222 "intermod.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_67, &transform_hlds__intermod__UnifyPredInfo_68);
                    }
#line 1223 "intermod.m"
                    {
#line 1223 "intermod.m"
                      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__TVarSet_69, &transform_hlds__intermod__ExistQVars_70, &transform_hlds__intermod__ArgTypes_71);
                    }
#line 1224 "intermod.m"
                    {
#line 1224 "intermod.m"
                      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__HeadTypeParams_72);
                    }
#line 1225 "intermod.m"
                    {
#line 1225 "intermod.m"
                      hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_73);
                    }
#line 1226 "intermod.m"
                    {
#line 1226 "intermod.m"
                      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_73, &transform_hlds__intermod__Markers_74);
                    }
#line 1227 "intermod.m"
                    {
#line 1227 "intermod.m"
                      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__Context_75);
                    }
#line 1228 "intermod.m"
                    {
#line 1228 "intermod.m"
                      hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_74, transform_hlds__intermod__TVarSet_69, transform_hlds__intermod__ExistQVars_70, transform_hlds__intermod__ArgTypes_71, transform_hlds__intermod__HeadTypeParams_72, transform_hlds__intermod__Context_75, transform_hlds__intermod__Pred0_63, &transform_hlds__intermod__Pred_64, &transform_hlds__intermod__UserEqPredId_76);
                    }
#line 1219 "intermod.m"
                    {
#line 1219 "intermod.m"
                      transform_hlds__intermod__MaybeUserEq_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq_42, 0) = ((MR_Box) (transform_hlds__intermod__Pred_64));
#line 1219 "intermod.m"
                    }
#line 627 "intermod.m"
                    {
#line 627 "intermod.m"
                      transform_hlds__intermod__V_91_91 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                    }
#line 627 "intermod.m"
                    {
#line 627 "intermod.m"
                      transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_76, transform_hlds__intermod__V_91_91);
                    }
#line 632 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 631 "intermod.m"
                      transform_hlds__intermod__STATE_VARIABLE_Info_32_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 632 "intermod.m"
                    else
#line 633 "intermod.m"
                      {
#line 633 "intermod.m"
                        MR_Word transform_hlds__intermod__V_93_93;

#line 633 "intermod.m"
                        {
#line 633 "intermod.m"
                          transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_76, &transform_hlds__intermod__V_93_93, transform_hlds__intermod__STATE_VARIABLE_Info_0_5, &transform_hlds__intermod__STATE_VARIABLE_Info_32_50);
                        }
#line 633 "intermod.m"
                      }
#line 1219 "intermod.m"
                  }
#line 1209 "intermod.m"
                {
#line 1209 "intermod.m"
                  transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(transform_hlds__intermod__ModuleInfo_1, (MR_Integer) 2, transform_hlds__intermod__TypeCtor_2, transform_hlds__intermod__MaybeUserCompare0_41, &transform_hlds__intermod__MaybeUserCompare_43, transform_hlds__intermod__STATE_VARIABLE_Info_32_50, transform_hlds__intermod__STATE_VARIABLE_Info_6);
                }
#line 1206 "intermod.m"
                {
#line 1206 "intermod.m"
                  transform_hlds__intermod__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (transform_hlds__intermod__MaybeUserEq_42));
#line 1206 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_48_48, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserCompare_43));
#line 1206 "intermod.m"
                }
#line 1206 "intermod.m"
                {
#line 1206 "intermod.m"
                  transform_hlds__intermod__MaybeUserEqComp_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEqComp_17, 0) = ((MR_Box) (transform_hlds__intermod__V_48_48));
#line 1206 "intermod.m"
                }
#line 1206 "intermod.m"
              }
#line 1200 "intermod.m"
          }
#line 1191 "intermod.m"
        {
#line 1191 "intermod.m"
          transform_hlds__intermod__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 0) = transform_hlds__intermod__Body_14;
#line 1191 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_17));
#line 1191 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 2) = ((MR_Box) (transform_hlds__intermod__Assertions_16));
#line 1191 "intermod.m"
        }
#line 1191 "intermod.m"
        {
#line 1191 "intermod.m"
          MR_Word base;
#line 1191 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "intermod.m"
          *transform_hlds__intermod__HeadVar__4_4 = base;
#line 1191 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_22_22));
#line 1191 "intermod.m"
        }
#line 1192 "intermod.m"
      }
#line 1188 "intermod.m"
  }
#line 1184 "intermod.m"
}

#line 223 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
#line 223 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 223 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_2,
#line 223 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_4,
#line 223 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_5,
#line 223 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_6,
#line 223 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_7,
#line 223 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_8)
#line 223 "intermod.m"
{
#line 226 "intermod.m"
  while (MR_TRUE)
#line 226 "intermod.m"
    {
#line 226 "intermod.m"
      /* tailcall optimized into a loop */
#line 226 "intermod.m"
      {
#line 226 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 226 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 226 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_8 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 226 "intermod.m"
        else
#line 228 "intermod.m"
          {
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_62_62;
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_63_63;
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__ModuleInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__PredTable0_26;
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo0_27;
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecInfo_28;
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecForcePreds_30;
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesInfo0_33;
#line 228 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_60_60;
#line 2159 "intermod.m"
            MR_Word transform_hlds__intermod__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
#line 2159 "intermod.m"
            MR_Word transform_hlds__intermod__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 2159 "intermod.m"
            MR_Word transform_hlds__intermod__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 2159 "intermod.m"
            MR_Word transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 2159 "intermod.m"
            MR_Word transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 2159 "intermod.m"
            MR_Word transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 2159 "intermod.m"
            MR_Word transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 2159 "intermod.m"
            MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
#line 231 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_PredInfo0_27;
#line 233 "intermod.m"
            MR_Word transform_hlds__intermod__V_29_29;
#line 233 "intermod.m"
            MR_Word transform_hlds__intermod__V_31_31;
#line 233 "intermod.m"
            MR_Word transform_hlds__intermod__V_32_32;
#line 236 "intermod.m"
            MR_Word transform_hlds__intermod__ExplicitVarTypes_34;

#line 230 "intermod.m"
            {
#line 230 "intermod.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__PredTable0_26);
            }
#line 3756 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3758 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 231 "intermod.m"
            {
#line 231 "intermod.m"
              mercury__map__lookup_3_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, transform_hlds__intermod__TypeCtorInfo_63_63, transform_hlds__intermod__PredTable0_26, ((MR_Box) (transform_hlds__intermod__PredId_17)), &transform_hlds__intermod__conv0_PredInfo0_27);
            }
#line 231 "intermod.m"
            transform_hlds__intermod__PredInfo0_27 = ((MR_Word) transform_hlds__intermod__conv0_PredInfo0_27);
#line 232 "intermod.m"
            {
#line 232 "intermod.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__TypeSpecInfo_28);
            }
#line 233 "intermod.m"
            transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 0)));
#line 233 "intermod.m"
            transform_hlds__intermod__TypeSpecForcePreds_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 1)));
#line 233 "intermod.m"
            transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 2)));
#line 233 "intermod.m"
            transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 3)));
#line 234 "intermod.m"
            {
#line 234 "intermod.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__ClausesInfo0_33);
            }
#line 236 "intermod.m"
            {
#line 236 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ExplicitVarTypes_34);
            }
#line 237 "intermod.m"
            {
#line 237 "intermod.m"
              transform_hlds__intermod__succeeded = parse_tree__prog_data__vartypes_is_empty_1_p_0(transform_hlds__intermod__ExplicitVarTypes_34);
            }
#line 236 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 238 "intermod.m"
              {
#line 238 "intermod.m"
                transform_hlds__intermod__succeeded = transform_hlds__intermod__should_be_processed_8_p_0(transform_hlds__intermod__ProcessLocalPreds_2, transform_hlds__intermod__PredId_17, transform_hlds__intermod__PredInfo0_27, transform_hlds__intermod__TypeSpecForcePreds_30, transform_hlds__intermod__InlineThreshold_4, transform_hlds__intermod__HigherOrderSizeLimit_5, transform_hlds__intermod__Deforestation_6, transform_hlds__intermod__ModuleInfo0_25);
              }
#line 284 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 242 "intermod.m"
              {
#line 242 "intermod.m"
                MR_Word transform_hlds__intermod__ClausesRep0_37;
#line 242 "intermod.m"
                MR_Word transform_hlds__intermod__ItemNumbers0_38;
#line 627 "intermod.m"
                MR_Word transform_hlds__intermod__V_79_79;

#line 246 "intermod.m"
                {
#line 246 "intermod.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ClausesRep0_37, &transform_hlds__intermod__ItemNumbers0_38);
                }
#line 627 "intermod.m"
                {
#line 627 "intermod.m"
                  transform_hlds__intermod__V_79_79 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 627 "intermod.m"
                {
#line 627 "intermod.m"
                  transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_17, transform_hlds__intermod__V_79_79);
                }
#line 3828 "transform_hlds.intermod.c"
                if (transform_hlds__intermod__succeeded)
#line 282 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 3832 "transform_hlds.intermod.c"
                else
#line 3834 "transform_hlds.intermod.c"
                  {
#line 3836 "transform_hlds.intermod.c"
                    MR_Word transform_hlds__intermod__DoWrite0_92;
#line 3838 "transform_hlds.intermod.c"
                    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_53_93;

#line 633 "intermod.m"
                    {
#line 633 "intermod.m"
                      transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_17, &transform_hlds__intermod__DoWrite0_92, transform_hlds__intermod__STATE_VARIABLE_Info_0_7, &transform_hlds__intermod__STATE_VARIABLE_Info_53_93);
                    }
#line 3846 "transform_hlds.intermod.c"
                    if ((transform_hlds__intermod__DoWrite0_92 == (MR_Integer) 0))
#line 282 "intermod.m"
                      transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 3850 "transform_hlds.intermod.c"
                    else
#line 3852 "transform_hlds.intermod.c"
                      {
#line 3854 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__VarTypes_39;
#line 3856 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__TVarSet_40;
#line 3858 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__Clauses0_41;
#line 3860 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__Clauses_42;
#line 3862 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_54_54;
#line 3864 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_55_55;
#line 3866 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__DoWrite_97;
#line 3868 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__ClausesRep_98;
#line 3870 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_56_99;
#line 2173 "intermod.m"
                        MR_Word transform_hlds__intermod__V_83_83;
#line 2173 "intermod.m"
                        MR_Word transform_hlds__intermod__V_84_84;
#line 2173 "intermod.m"
                        MR_Word transform_hlds__intermod__V_85_85;
#line 2173 "intermod.m"
                        MR_Word transform_hlds__intermod__V_86_86;
#line 2173 "intermod.m"
                        MR_Word transform_hlds__intermod__V_87_87;
#line 2173 "intermod.m"
                        MR_Word transform_hlds__intermod__V_88_88;
#line 2173 "intermod.m"
                        MR_Word transform_hlds__intermod__V_89_89;
#line 2173 "intermod.m"
                        MR_Word transform_hlds__intermod__V_91_91;
#line 2173 "intermod.m"
                        MR_Word transform_hlds__intermod__V_90_90;

#line 249 "intermod.m"
                        {
#line 249 "intermod.m"
                          hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__VarTypes_39);
                        }
#line 250 "intermod.m"
                        {
#line 250 "intermod.m"
                          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__TVarSet_40);
                        }
#line 2173 "intermod.m"
                        transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 0)));
#line 2173 "intermod.m"
                        transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 1)));
#line 2173 "intermod.m"
                        transform_hlds__intermod__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 2)));
#line 2173 "intermod.m"
                        transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 3)));
#line 2173 "intermod.m"
                        transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 4)));
#line 2173 "intermod.m"
                        transform_hlds__intermod__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 5)));
#line 2173 "intermod.m"
                        transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 6)));
#line 2173 "intermod.m"
                        transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 7)));
#line 2173 "intermod.m"
                        transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 8)));
#line 2173 "intermod.m"
                        {
#line 2173 "intermod.m"
                          transform_hlds__intermod__STATE_VARIABLE_Info_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2173 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 0) = ((MR_Box) (transform_hlds__intermod__V_83_83));
#line 2173 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 1) = ((MR_Box) (transform_hlds__intermod__V_84_84));
#line 2173 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 2) = ((MR_Box) (transform_hlds__intermod__V_85_85));
#line 2173 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 3) = ((MR_Box) (transform_hlds__intermod__V_86_86));
#line 2173 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 4) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2173 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 5) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2173 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 6) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2173 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_39));
#line 2173 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 8) = ((MR_Box) (transform_hlds__intermod__V_91_91));
#line 2173 "intermod.m"
                        }
#line 252 "intermod.m"
                        {
#line 252 "intermod.m"
                          transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(transform_hlds__intermod__TVarSet_40, transform_hlds__intermod__STATE_VARIABLE_Info_54_54, &transform_hlds__intermod__STATE_VARIABLE_Info_55_55);
                        }
#line 253 "intermod.m"
                        {
#line 253 "intermod.m"
                          hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep0_37, &transform_hlds__intermod__Clauses0_41);
                        }
#line 254 "intermod.m"
                        {
#line 254 "intermod.m"
                          transform_hlds__intermod__intermod_traverse_clauses_5_p_0(transform_hlds__intermod__Clauses0_41, &transform_hlds__intermod__Clauses_42, &transform_hlds__intermod__DoWrite_97, transform_hlds__intermod__STATE_VARIABLE_Info_55_55, &transform_hlds__intermod__STATE_VARIABLE_Info_56_99);
                        }
#line 255 "intermod.m"
                        {
#line 255 "intermod.m"
                          hlds__hlds_clauses__set_clause_list_2_p_0(transform_hlds__intermod__Clauses_42, &transform_hlds__intermod__ClausesRep_98);
                        }
#line 279 "intermod.m"
                        if ((transform_hlds__intermod__DoWrite_97 == (MR_Integer) 0))
#line 282 "intermod.m"
                          transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 279 "intermod.m"
                        else
#line 262 "intermod.m"
                          {
#line 262 "intermod.m"
                            MR_Word transform_hlds__intermod__ClausesInfo_45;
#line 262 "intermod.m"
                            MR_Word transform_hlds__intermod__PredInfo_46;
#line 262 "intermod.m"
                            MR_Word transform_hlds__intermod__PredTable_47;
#line 262 "intermod.m"
                            MR_Word transform_hlds__intermod__ModuleInfo_48;
#line 262 "intermod.m"
                            MR_Word transform_hlds__intermod__Preds0_49;
#line 262 "intermod.m"
                            MR_Word transform_hlds__intermod__Preds_50;
#line 262 "intermod.m"
                            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_58_58;
#line 262 "intermod.m"
                            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_59_59;

#line 263 "intermod.m"
                            {
#line 263 "intermod.m"
                              hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(transform_hlds__intermod__ClausesRep_98, transform_hlds__intermod__ItemNumbers0_38, transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ClausesInfo_45);
                            }
#line 265 "intermod.m"
                            {
#line 265 "intermod.m"
                              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(transform_hlds__intermod__ClausesInfo_45, transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__PredInfo_46);
                            }
#line 266 "intermod.m"
                            {
#line 266 "intermod.m"
                              mercury__map__det_update_4_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, transform_hlds__intermod__TypeCtorInfo_63_63, ((MR_Box) (transform_hlds__intermod__PredId_17)), ((MR_Box) (transform_hlds__intermod__PredInfo_46)), transform_hlds__intermod__PredTable0_26, &transform_hlds__intermod__PredTable_47);
                            }
#line 267 "intermod.m"
                            {
#line 267 "intermod.m"
                              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__PredTable_47, transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__ModuleInfo_48);
                            }
#line 268 "intermod.m"
                            {
#line 268 "intermod.m"
                              transform_hlds__intermod__intermod_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_56_99, &transform_hlds__intermod__Preds0_49);
                            }
#line 269 "intermod.m"
                            {
#line 269 "intermod.m"
                              transform_hlds__intermod__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(transform_hlds__intermod__PredInfo_46);
                            }
#line 273 "intermod.m"
                            if (transform_hlds__intermod__succeeded)
#line 272 "intermod.m"
                              {
#line 272 "intermod.m"
                                transform_hlds__intermod__intermod_info_set_write_header_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_56_99, &transform_hlds__intermod__STATE_VARIABLE_Info_58_58);
                              }
#line 273 "intermod.m"
                            else
#line 272 "intermod.m"
                              transform_hlds__intermod__STATE_VARIABLE_Info_58_58 = transform_hlds__intermod__STATE_VARIABLE_Info_56_99;
#line 276 "intermod.m"
                            {
#line 276 "intermod.m"
                              mercury__set__insert_3_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, ((MR_Box) (transform_hlds__intermod__PredId_17)), transform_hlds__intermod__Preds0_49, &transform_hlds__intermod__Preds_50);
                            }
#line 277 "intermod.m"
                            {
#line 277 "intermod.m"
                              transform_hlds__intermod__intermod_info_set_preds_3_p_0(transform_hlds__intermod__Preds_50, transform_hlds__intermod__STATE_VARIABLE_Info_58_58, &transform_hlds__intermod__STATE_VARIABLE_Info_59_59);
                            }
#line 278 "intermod.m"
                            {
#line 278 "intermod.m"
                              transform_hlds__intermod__intermod_info_set_module_info_3_p_0(transform_hlds__intermod__ModuleInfo_48, transform_hlds__intermod__STATE_VARIABLE_Info_59_59, &transform_hlds__intermod__STATE_VARIABLE_Info_60_60);
                            }
#line 262 "intermod.m"
                          }
#line 4046 "transform_hlds.intermod.c"
                      }
#line 4048 "transform_hlds.intermod.c"
                  }
#line 242 "intermod.m"
              }
#line 284 "intermod.m"
            else
#line 282 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 287 "intermod.m"
            /* direct tailcall eliminated */
#line 287 "intermod.m"
            {
#line 287 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__PredIds_18;
#line 287 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_7 = transform_hlds__intermod__STATE_VARIABLE_Info_60_60;

#line 287 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_0_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 287 "intermod.m"
              transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 287 "intermod.m"
            }
#line 287 "intermod.m"
            continue;
#line 228 "intermod.m"
          }
#line 226 "intermod.m"
      }
#line 226 "intermod.m"
      break;
#line 226 "intermod.m"
    }
#line 223 "intermod.m"
}

#line 204 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
#line 204 "intermod.m"
  MR_Word transform_hlds__intermod__ExtraExportedPreds0_8,
#line 204 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_10,
#line 204 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_11,
#line 204 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_12,
#line 204 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_19,
#line 204 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_20)
#line 204 "intermod.m"
{
#line 208 "intermod.m"
  while (MR_TRUE)
#line 208 "intermod.m"
    {
#line 208 "intermod.m"
      /* tailcall optimized into a loop */
#line 208 "intermod.m"
      {
#line 208 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;
#line 208 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 208 "intermod.m"
        MR_Word transform_hlds__intermod__ExtraExportedPreds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 208 "intermod.m"
        MR_Word transform_hlds__intermod__NewlyExportedPreds_15;
#line 208 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21;
#line 2156 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 2156 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 2156 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 2156 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 2156 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 2156 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
#line 2156 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
#line 2156 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));

#line 211 "intermod.m"
        {
#line 211 "intermod.m"
          transform_hlds__intermod__V_21_21 = mercury__set__difference_2_f_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__ExtraExportedPreds_14, transform_hlds__intermod__ExtraExportedPreds0_8);
        }
#line 210 "intermod.m"
        {
#line 210 "intermod.m"
          transform_hlds__intermod__NewlyExportedPreds_15 = mercury__set__to_sorted_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__V_21_21);
        }
#line 214 "intermod.m"
        if ((transform_hlds__intermod__NewlyExportedPreds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 213 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_20 = transform_hlds__intermod__STATE_VARIABLE_Info_0_19;
#line 214 "intermod.m"
        else
#line 215 "intermod.m"
          {
#line 215 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_22_22;

#line 217 "intermod.m"
            {
#line 217 "intermod.m"
              transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__NewlyExportedPreds_15, (MR_Integer) 1, transform_hlds__intermod__InlineThreshold_10, transform_hlds__intermod__HigherOrderSizeLimit_11, transform_hlds__intermod__Deforestation_12, transform_hlds__intermod__STATE_VARIABLE_Info_0_19, &transform_hlds__intermod__STATE_VARIABLE_Info_22_22);
            }
#line 219 "intermod.m"
            /* direct tailcall eliminated */
#line 219 "intermod.m"
            {
#line 219 "intermod.m"
              MR_Word transform_hlds__intermod__ExtraExportedPreds0__tmp_copy_8 = transform_hlds__intermod__ExtraExportedPreds_14;
#line 219 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_19 = transform_hlds__intermod__STATE_VARIABLE_Info_22_22;

#line 219 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_0_19 = transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_19;
#line 219 "intermod.m"
              transform_hlds__intermod__ExtraExportedPreds0_8 = transform_hlds__intermod__ExtraExportedPreds0__tmp_copy_8;
#line 219 "intermod.m"
            }
#line 219 "intermod.m"
            continue;
#line 215 "intermod.m"
          }
#line 208 "intermod.m"
      }
#line 208 "intermod.m"
      break;
#line 208 "intermod.m"
    }
#line 204 "intermod.m"
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
#line 2555 "intermod.m"
  {
#line 2555 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2555 "intermod.m"
    if ((transform_hlds__intermod__ModuleError_15 == (MR_Integer) 2))
#line 2565 "intermod.m"
      {
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__WarningOption_17;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__Severity_18;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__Pieces_19;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__Msg_20;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__Spec_21;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__V_36_36;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__V_37_37;
#line 2565 "intermod.m"
        MR_Word transform_hlds__intermod__V_50_50;

#line 2578 "intermod.m"
        if ((transform_hlds__intermod__FileType_11 == (MR_Integer) 0))
#line 2577 "intermod.m"
          transform_hlds__intermod__WarningOption_17 = (MR_Integer) 12;
#line 2578 "intermod.m"
        else
#line 2580 "intermod.m"
          transform_hlds__intermod__WarningOption_17 = (MR_Integer) 13;
#line 2583 "intermod.m"
        {
#line 2583 "intermod.m"
          transform_hlds__intermod__Severity_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2583 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 0) = ((MR_Box) (transform_hlds__intermod__WarningOption_17));
#line 2583 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2583 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2583 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2583 "intermod.m"
        }
#line 2585 "intermod.m"
        {
#line 2585 "intermod.m"
          transform_hlds__intermod__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2585 "intermod.m"
          MR_hl_field(MR_mktag(2), transform_hlds__intermod__V_37_37, 0) = ((MR_Box) (transform_hlds__intermod__FileName_12));
#line 2585 "intermod.m"
        }
#line 2585 "intermod.m"
        {
#line 2585 "intermod.m"
          transform_hlds__intermod__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2585 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_36_36, 0) = ((MR_Box) (transform_hlds__intermod__V_37_37));
#line 2585 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_1[15])));
#line 2585 "intermod.m"
        }
#line 2585 "intermod.m"
        {
#line 2585 "intermod.m"
          transform_hlds__intermod__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2585 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__intermod_scalar_common_1[18])));
#line 2585 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, 1) = ((MR_Box) (transform_hlds__intermod__V_36_36));
#line 2585 "intermod.m"
        }
#line 2585 "intermod.m"
        {
#line 2585 "intermod.m"
          transform_hlds__intermod__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2585 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 0) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 2585 "intermod.m"
        }
#line 2586 "intermod.m"
        {
#line 2586 "intermod.m"
          transform_hlds__intermod__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2586 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_31_31, 0) = ((MR_Box) (transform_hlds__intermod__V_32_32));
#line 2586 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2586 "intermod.m"
        }
#line 2584 "intermod.m"
        {
#line 2584 "intermod.m"
          transform_hlds__intermod__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2584 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_29_29, 0) = ((MR_Box) ((transform_hlds__intermod__WarningOption_17 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 2584 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_29_29, 1) = ((MR_Box) (transform_hlds__intermod__V_31_31));
#line 2584 "intermod.m"
        }
#line 2586 "intermod.m"
        {
#line 2586 "intermod.m"
          transform_hlds__intermod__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2586 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Pieces_19, 0) = ((MR_Box) (transform_hlds__intermod__V_29_29));
#line 2586 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Pieces_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2586 "intermod.m"
        }
#line 2587 "intermod.m"
        {
#line 2587 "intermod.m"
          transform_hlds__intermod__Msg_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2587 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2587 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2587 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2587 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 3) = ((MR_Box) (transform_hlds__intermod__Pieces_19));
#line 2587 "intermod.m"
        }
#line 2588 "intermod.m"
        {
#line 2588 "intermod.m"
          transform_hlds__intermod__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2588 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_50_50, 0) = ((MR_Box) (transform_hlds__intermod__Msg_20));
#line 2588 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2588 "intermod.m"
        }
#line 2588 "intermod.m"
        {
#line 2588 "intermod.m"
          transform_hlds__intermod__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2588 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 0) = ((MR_Box) (transform_hlds__intermod__Severity_18));
#line 2588 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2588 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 2) = ((MR_Box) (transform_hlds__intermod__V_50_50));
#line 2588 "intermod.m"
        }
#line 2589 "intermod.m"
        {
#line 2589 "intermod.m"
          MR_Word base;
#line 2589 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2589 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = base;
#line 2589 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Spec_21));
#line 2589 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Specs_0_22));
#line 2589 "intermod.m"
        }
#line 2589 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Error_25 = transform_hlds__intermod__STATE_VARIABLE_Error_0_24;
#line 2565 "intermod.m"
      }
#line 2555 "intermod.m"
    else
#line 2555 "intermod.m"
      if ((transform_hlds__intermod__ModuleError_15 == (MR_Integer) 0))
#line 2555 "intermod.m"
        {
#line 2555 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = transform_hlds__intermod__STATE_VARIABLE_Specs_0_22;
#line 2555 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Error_25 = transform_hlds__intermod__STATE_VARIABLE_Error_0_24;
#line 2555 "intermod.m"
        }
#line 2555 "intermod.m"
      else
#line 2561 "intermod.m"
        {
#line 2562 "intermod.m"
          {
#line 2562 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__intermod__ModuleSpecs_13, transform_hlds__intermod__STATE_VARIABLE_Specs_0_22);
          }
#line 2563 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Error_25 = (MR_Integer) 1;
#line 2561 "intermod.m"
        }
#line 2555 "intermod.m"
  }
#line 91 "intermod.m"
}

#line 2281 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2281__1_2_p_0(
#line 2281 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_10,
#line 2281 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_11)
#line 2281 "intermod.m"
{
#line 2281 "intermod.m"
  {
#line 2281 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2281 "intermod.m"
    MR_Integer transform_hlds__intermod__V_7_7;

#line 2281 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_10, (MR_Integer) 0)));
#line 2281 "intermod.m"
    transform_hlds__intermod__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_10, (MR_Integer) 1)));
#line 2281 "intermod.m"
  }
#line 2281 "intermod.m"
}

#line 2247 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2247__1_4_p_0(
#line 2247 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_4,
#line 2247 "intermod.m"
  MR_Word transform_hlds__intermod__SpecPredMap_8,
#line 2247 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_13,
#line 2247 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_14)
#line 2247 "intermod.m"
{
#line 2247 "intermod.m"
  {
#line 2247 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2247 "intermod.m"
    MR_Word transform_hlds__intermod__V_15_15;
#line 2248 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_HeadVar__4_14;

#line 2248 "intermod.m"
    {
#line 2248 "intermod.m"
      transform_hlds__intermod__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2248 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_15_15, 0) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_13));
#line 2248 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_15_15, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_4));
#line 2248 "intermod.m"
    }
#line 2248 "intermod.m"
    {
#line 2248 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[2], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecPredMap_8, ((MR_Box) (transform_hlds__intermod__V_15_15)), &transform_hlds__intermod__conv0_HeadVar__4_14);
    }
#line 2248 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2248 "intermod.m"
      {
#line 2248 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_14 = ((MR_Word) transform_hlds__intermod__conv0_HeadVar__4_14);
#line 2248 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 2248 "intermod.m"
      }
#line 2247 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2247 "intermod.m"
  }
#line 2247 "intermod.m"
}

#line 1895 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1895__1_4_p_0(
#line 1895 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1895 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVarMap_15,
#line 1895 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_23,
#line 1895 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_24)
#line 1895 "intermod.m"
{
#line 1895 "intermod.m"
  {
#line 1895 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1895 "intermod.m"
    MR_Word transform_hlds__intermod__HeadTerm0_18;
#line 1893 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_HeadTerm0_18;

#line 1893 "intermod.m"
    {
#line 1893 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[6], (MR_Word) &transform_hlds__intermod_scalar_common_1[7], transform_hlds__intermod__HeadVarMap_15, ((MR_Box) (transform_hlds__intermod__HeadVar__3_23)), &transform_hlds__intermod__conv0_HeadTerm0_18);
    }
#line 1893 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1893 "intermod.m"
      {
#line 1893 "intermod.m"
        transform_hlds__intermod__HeadTerm0_18 = ((MR_Word) transform_hlds__intermod__conv0_HeadTerm0_18);
#line 1893 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1893 "intermod.m"
      }
#line 1895 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1894 "intermod.m"
      *transform_hlds__intermod__HeadVar__4_24 = transform_hlds__intermod__HeadTerm0_18;
#line 1895 "intermod.m"
    else
#line 1896 "intermod.m"
      {
#line 1896 "intermod.m"
        MR_Word transform_hlds__intermod__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 3)));
#line 1896 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 0)));
#line 1896 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 1)));
#line 1896 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 2)));
#line 1896 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 4)));

#line 1897 "intermod.m"
        {
#line 1897 "intermod.m"
          MR_Word base;
#line 1897 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1897 "intermod.m"
          *transform_hlds__intermod__HeadVar__4_24 = base;
#line 1897 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_23));
#line 1897 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Context_19));
#line 1897 "intermod.m"
        }
#line 1896 "intermod.m"
      }
#line 1895 "intermod.m"
  }
#line 1895 "intermod.m"
}

#line 1813 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1813__1_1_p_0(
#line 1813 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_67)
#line 1813 "intermod.m"
{
#line 1813 "intermod.m"
  {
#line 1813 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1813 "intermod.m"
    MR_Word transform_hlds__intermod__GE_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_67, (MR_Integer) 0)));
#line 1815 "intermod.m"
    MR_Word transform_hlds__intermod__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_67, (MR_Integer) 1)));
#line 1816 "intermod.m"
    MR_Word transform_hlds__intermod__V_39_39;
#line 1816 "intermod.m"
    MR_Word transform_hlds__intermod__V_40_40;
#line 1816 "intermod.m"
    MR_Integer transform_hlds__intermod__V_41_41;
#line 1816 "intermod.m"
    MR_Word transform_hlds__intermod__V_42_42;
#line 1816 "intermod.m"
    MR_Word transform_hlds__intermod__V_43_43;
#line 1816 "intermod.m"
    MR_Word transform_hlds__intermod__V_44_44;
#line 1816 "intermod.m"
    MR_Word transform_hlds__intermod__V_45_45;

#line 1816 "intermod.m"
    transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__GE_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1816 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1816 "intermod.m"
      {
#line 1816 "intermod.m"
        transform_hlds__intermod__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 1)));
#line 1816 "intermod.m"
        transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 2)));
#line 1816 "intermod.m"
        transform_hlds__intermod__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 3)));
#line 1816 "intermod.m"
        transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 4)));
#line 1816 "intermod.m"
        transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 5)));
#line 1816 "intermod.m"
        transform_hlds__intermod__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 6)));
#line 1816 "intermod.m"
        transform_hlds__intermod__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 7)));
#line 1816 "intermod.m"
      }
#line 1813 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 1813 "intermod.m"
  }
#line 1813 "intermod.m"
}

#line 1691 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1691__1_3_p_0(
#line 1691 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__1_45,
#line 1691 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__2_46,
#line 1691 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_47)
#line 1691 "intermod.m"
{
#line 1691 "intermod.m"
  {
#line 1691 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1691 "intermod.m"
    MR_Integer transform_hlds__intermod__ProcInt1_34;
#line 1691 "intermod.m"
    MR_Integer transform_hlds__intermod__ProcInt2_35;

#line 1693 "intermod.m"
    {
#line 1693 "intermod.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__intermod__HeadVar__1_45, &transform_hlds__intermod__ProcInt1_34);
    }
#line 1694 "intermod.m"
    {
#line 1694 "intermod.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__intermod__HeadVar__2_46, &transform_hlds__intermod__ProcInt2_35);
    }
#line 1695 "intermod.m"
    {
#line 1695 "intermod.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__intermod__HeadVar__3_47, transform_hlds__intermod__ProcInt1_34, transform_hlds__intermod__ProcInt2_35);
#line 1695 "intermod.m"
      return;
    }
#line 1691 "intermod.m"
  }
#line 1691 "intermod.m"
}

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_2(
#line 1613 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1613 "intermod.m"
{
#line 1613 "intermod.m"
  {
#line 1613 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1613 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__N_8 = ((MR_Integer) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__conv0_N_8);
#line 1613 "intermod.m"
    {
#line 1613 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_1(transform_hlds__intermod__env_ptr);
#line 1613 "intermod.m"
      return;
    }
#line 1613 "intermod.m"
  }
#line 1613 "intermod.m"
}

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_1(
#line 1612 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1612 "intermod.m"
{
#line 1612 "intermod.m"
  {
#line 1612 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1612 "intermod.m"
    {
#line 1614 "intermod.m"
      MR_Box transform_hlds__intermod__conv1_HeadVar__3_9;

#line 4717 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) &transform_hlds__intermod_scalar_common_1[5];
#line 1614 "intermod.m"
      {
#line 1614 "intermod.m"
        transform_hlds__intermod__conv1_HeadVar__3_9 = mercury__list__det_index1_2_f_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__TypeInfo_13_13, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__TVars_4, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__N_8);
      }
#line 1614 "intermod.m"
      *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__HeadVar__3_9) = ((MR_Word) transform_hlds__intermod__conv1_HeadVar__3_9);
#line 1614 "intermod.m"
      {
#line 1614 "intermod.m"
        ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__cont_env_ptr);
#line 1614 "intermod.m"
        return;
      }
#line 1612 "intermod.m"
    }
#line 1612 "intermod.m"
  }
#line 1612 "intermod.m"
}

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0(
#line 1612 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1612 "intermod.m"
  MR_Word transform_hlds__intermod__Set_5,
#line 1612 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_9,
#line 1612 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1612 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1612 "intermod.m"
{
#line 1612 "intermod.m"
  {
#line 1612 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0_s transform_hlds__intermod__env;

#line 1612 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__TVars_4 = transform_hlds__intermod__TVars_4;
#line 1612 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__HeadVar__3_9 = transform_hlds__intermod__HeadVar__3_9;
#line 1612 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__cont = transform_hlds__intermod__cont;
#line 1612 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1612 "intermod.m"
    {
#line 1612 "intermod.m"
      MR_bool transform_hlds__intermod__succeeded;

#line 1613 "intermod.m"
      {
#line 1613 "intermod.m"
        mercury__set__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &(transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_env_0__conv0_N_8, transform_hlds__intermod__Set_5, transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0_2, &transform_hlds__intermod__env);
      }
#line 1612 "intermod.m"
    }
#line 1612 "intermod.m"
  }
#line 1612 "intermod.m"
}

#line 1322 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1322__1_3_p_0(
#line 1322 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_48)
#line 1322 "intermod.m"
{
#line 1322 "intermod.m"
  {
#line 1322 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1322 "intermod.m"
    MR_Word transform_hlds__intermod__Lang_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_48, (MR_Integer) 0)));
#line 1322 "intermod.m"
    MR_Word transform_hlds__intermod__Import_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_48, (MR_Integer) 1)));
#line 1322 "intermod.m"
    MR_Word transform_hlds__intermod__FIMInfo_34;
#line 1324 "intermod.m"
    MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_48, (MR_Integer) 2)));

#line 1325 "intermod.m"
    {
#line 1325 "intermod.m"
      transform_hlds__intermod__FIMInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1325 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__FIMInfo_34, 0) = ((MR_Box) (transform_hlds__intermod__Lang_31));
#line 1325 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__FIMInfo_34, 1) = ((MR_Box) (transform_hlds__intermod__Import_32));
#line 1325 "intermod.m"
    }
#line 1326 "intermod.m"
    {
#line 1326 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_pragma_foreign_import_module_3_p_0(transform_hlds__intermod__FIMInfo_34);
#line 1326 "intermod.m"
      return;
    }
#line 1322 "intermod.m"
  }
#line 1322 "intermod.m"
}

#line 994 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__994__1_1_f_0(
#line 994 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_54)
#line 994 "intermod.m"
{
#line 994 "intermod.m"
  {
#line 994 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 994 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 0)));
#line 994 "intermod.m"
    MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 1)));
#line 994 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 2)));
#line 994 "intermod.m"
    MR_Word transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 3)));
#line 994 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 4)));
#line 994 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 5)));
#line 994 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 6)));
#line 994 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 7)));

#line 994 "intermod.m"
    return transform_hlds__intermod__HeadVar__2_55;
#line 994 "intermod.m"
  }
#line 994 "intermod.m"
}

#line 981 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__981__1_1_f_0(
#line 981 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_50)
#line 981 "intermod.m"
{
#line 981 "intermod.m"
  {
#line 981 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 981 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__2_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 2)));
#line 981 "intermod.m"
    MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 0)));
#line 981 "intermod.m"
    MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 1)));
#line 981 "intermod.m"
    MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 3)));
#line 981 "intermod.m"
    MR_Integer transform_hlds__intermod__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 4)));

#line 981 "intermod.m"
    return transform_hlds__intermod__HeadVar__2_51;
#line 981 "intermod.m"
  }
#line 981 "intermod.m"
}

#line 836 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__836__1_2_p_0(
#line 836 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_44,
#line 836 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_45)
#line 836 "intermod.m"
{
#line 836 "intermod.m"
  {
#line 836 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 836 "intermod.m"
    MR_Integer transform_hlds__intermod__V_27_27;

#line 836 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_44, (MR_Integer) 0)));
#line 836 "intermod.m"
    transform_hlds__intermod__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_44, (MR_Integer) 1)));
#line 836 "intermod.m"
  }
#line 836 "intermod.m"
}

#line 2440 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__grab_opt_files__2440__1_3_p_0(
#line 2440 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_23,
#line 2440 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_24,
#line 2440 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_82)
#line 2440 "intermod.m"
{
#line 2440 "intermod.m"
  {
#line 2440 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__3_82)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__HeadVar__3_82, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 2440 "intermod.m"
    MR_Word transform_hlds__intermod__ItemPragma_30;
#line 2440 "intermod.m"
    MR_Word transform_hlds__intermod__Pragma_32;
#line 2442 "intermod.m"
    MR_Word transform_hlds__intermod__V_31_31;
#line 2442 "intermod.m"
    MR_Word transform_hlds__intermod__V_33_33;
#line 2442 "intermod.m"
    MR_Integer transform_hlds__intermod__V_34_34;

#line 2441 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2441 "intermod.m"
      {
#line 2441 "intermod.m"
        transform_hlds__intermod__ItemPragma_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__HeadVar__3_82, (MR_Integer) 1)));
#line 2442 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma_30, (MR_Integer) 0)));
#line 2442 "intermod.m"
        transform_hlds__intermod__Pragma_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma_30, (MR_Integer) 1)));
#line 2442 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma_30, (MR_Integer) 2)));
#line 2442 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma_30, (MR_Integer) 3)));
#line 2446 "intermod.m"
        if (((((MR_tag((MR_Word) transform_hlds__intermod__Pragma_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Pragma_32, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 2447 "intermod.m"
          transform_hlds__intermod__succeeded = (transform_hlds__intermod__StructureReuse_24 == (MR_Integer) 1);
#line 2446 "intermod.m"
        else
#line 2446 "intermod.m"
          if (((((MR_tag((MR_Word) transform_hlds__intermod__Pragma_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Pragma_32, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2444 "intermod.m"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__UnusedArgs_23 == (MR_Integer) 1);
#line 2446 "intermod.m"
          else
#line 2446 "intermod.m"
            transform_hlds__intermod__succeeded = MR_FALSE;
#line 2441 "intermod.m"
      }
#line 2440 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2440 "intermod.m"
  }
#line 2440 "intermod.m"
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
#line 5020 "transform_hlds.intermod.c"
  {
#line 5022 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded = (transform_hlds__intermod__HeadVar__2_1 == transform_hlds__intermod__HeadVar__2_2);

#line 5025 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 5027 "transform_hlds.intermod.c"
  }
#line 74 "intermod.m"
}

#line 2073 "intermod.m"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
#line 2073 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__1_1,
#line 2073 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 2073 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3)
#line 2073 "intermod.m"
{
#line 2073 "intermod.m"
  {
#line 2073 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2073 "intermod.m"
    MR_Integer transform_hlds__intermod__CastX_30 = (MR_Integer) transform_hlds__intermod__HeadVar__2_2;
#line 2073 "intermod.m"
    MR_Integer transform_hlds__intermod__CastY_31 = (MR_Integer) transform_hlds__intermod__HeadVar__3_3;

#line 2073 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__CastX_30 == transform_hlds__intermod__CastY_31);
#line 2073 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 5056 "transform_hlds.intermod.c"
      *transform_hlds__intermod__HeadVar__1_1 = (MR_Integer) 0;
#line 2073 "intermod.m"
    else
#line 2073 "intermod.m"
      {
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 2)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 3)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 4)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 5)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 6)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 7)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 8)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 2)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 3)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 4)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 5)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 6)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 7)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 8)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;

#line 2073 "intermod.m"
        {
#line 2073 "intermod.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[8], &transform_hlds__intermod__V_22_22, ((MR_Box) (transform_hlds__intermod__V_4_4)), ((MR_Box) (transform_hlds__intermod__V_13_13)));
        }
#line 5106 "transform_hlds.intermod.c"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_22_22 == (MR_Integer) 0);
#line 2073 "intermod.m"
        transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2073 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
          *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_22_22;
#line 2073 "intermod.m"
        else
#line 2073 "intermod.m"
          {
#line 2073 "intermod.m"
            MR_Word transform_hlds__intermod__V_23_23;

#line 2073 "intermod.m"
            {
#line 2073 "intermod.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[9], &transform_hlds__intermod__V_23_23, ((MR_Box) (transform_hlds__intermod__V_5_5)), ((MR_Box) (transform_hlds__intermod__V_14_14)));
            }
#line 5126 "transform_hlds.intermod.c"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_23_23 == (MR_Integer) 0);
#line 2073 "intermod.m"
            transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2073 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
              *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_23_23;
#line 2073 "intermod.m"
            else
#line 2073 "intermod.m"
              {
#line 2073 "intermod.m"
                MR_Word transform_hlds__intermod__V_24_24;

#line 2073 "intermod.m"
                {
#line 2073 "intermod.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[9], &transform_hlds__intermod__V_24_24, ((MR_Box) (transform_hlds__intermod__V_6_6)), ((MR_Box) (transform_hlds__intermod__V_15_15)));
                }
#line 5146 "transform_hlds.intermod.c"
                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_24_24 == (MR_Integer) 0);
#line 2073 "intermod.m"
                transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2073 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                  *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_24_24;
#line 2073 "intermod.m"
                else
#line 2073 "intermod.m"
                  {
#line 2073 "intermod.m"
                    MR_Word transform_hlds__intermod__V_25_25;

#line 2073 "intermod.m"
                    {
#line 2073 "intermod.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[10], &transform_hlds__intermod__V_25_25, ((MR_Box) (transform_hlds__intermod__V_7_7)), ((MR_Box) (transform_hlds__intermod__V_16_16)));
                    }
#line 5166 "transform_hlds.intermod.c"
                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_25_25 == (MR_Integer) 0);
#line 2073 "intermod.m"
                    transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2073 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                      *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_25_25;
#line 2073 "intermod.m"
                    else
#line 2073 "intermod.m"
                      {
#line 2073 "intermod.m"
                        MR_Word transform_hlds__intermod__V_26_26;

#line 2073 "intermod.m"
                        {
#line 2073 "intermod.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[11], &transform_hlds__intermod__V_26_26, ((MR_Box) (transform_hlds__intermod__V_8_8)), ((MR_Box) (transform_hlds__intermod__V_17_17)));
                        }
#line 5186 "transform_hlds.intermod.c"
                        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_26_26 == (MR_Integer) 0);
#line 2073 "intermod.m"
                        transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2073 "intermod.m"
                        if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                          *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_26_26;
#line 2073 "intermod.m"
                        else
#line 2073 "intermod.m"
                          {
#line 2073 "intermod.m"
                            MR_Word transform_hlds__intermod__V_27_27;

#line 2073 "intermod.m"
                            {
#line 2073 "intermod.m"
                              hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__intermod__V_27_27, transform_hlds__intermod__V_9_9, transform_hlds__intermod__V_18_18);
                            }
#line 5206 "transform_hlds.intermod.c"
                            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_27_27 == (MR_Integer) 0);
#line 2073 "intermod.m"
                            transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2073 "intermod.m"
                            if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                              *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_27_27;
#line 2073 "intermod.m"
                            else
#line 2073 "intermod.m"
                              {
#line 2073 "intermod.m"
                                MR_Word transform_hlds__intermod__V_28_28;
#line 2073 "intermod.m"
                                MR_Integer transform_hlds__intermod__V_41_41 = (MR_Integer) transform_hlds__intermod__V_10_10;
#line 2073 "intermod.m"
                                MR_Integer transform_hlds__intermod__V_42_42 = (MR_Integer) transform_hlds__intermod__V_19_19;

#line 2073 "intermod.m"
                                {
#line 2073 "intermod.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__intermod__V_28_28, transform_hlds__intermod__V_41_41, transform_hlds__intermod__V_42_42);
                                }
#line 5230 "transform_hlds.intermod.c"
                                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_28_28 == (MR_Integer) 0);
#line 2073 "intermod.m"
                                transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2073 "intermod.m"
                                if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                                  *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_28_28;
#line 2073 "intermod.m"
                                else
#line 2073 "intermod.m"
                                  {
#line 2073 "intermod.m"
                                    MR_Word transform_hlds__intermod__V_29_29;

#line 2073 "intermod.m"
                                    {
#line 2073 "intermod.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__intermod__V_29_29, ((MR_Box) (transform_hlds__intermod__V_11_11)), ((MR_Box) (transform_hlds__intermod__V_20_20)));
                                    }
#line 5250 "transform_hlds.intermod.c"
                                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_29_29 == (MR_Integer) 0);
#line 2073 "intermod.m"
                                    transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2073 "intermod.m"
                                    if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                                      *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_29_29;
#line 2073 "intermod.m"
                                    else
#line 2073 "intermod.m"
                                      {
#line 2073 "intermod.m"
                                        {
#line 2073 "intermod.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[12], transform_hlds__intermod__HeadVar__1_1, ((MR_Box) (transform_hlds__intermod__V_12_12)), ((MR_Box) (transform_hlds__intermod__V_21_21)));
#line 2073 "intermod.m"
                                          return;
                                        }
#line 2073 "intermod.m"
                                      }
#line 2073 "intermod.m"
                                  }
#line 2073 "intermod.m"
                              }
#line 2073 "intermod.m"
                          }
#line 2073 "intermod.m"
                      }
#line 2073 "intermod.m"
                  }
#line 2073 "intermod.m"
              }
#line 2073 "intermod.m"
          }
#line 2073 "intermod.m"
      }
#line 2073 "intermod.m"
  }
#line 2073 "intermod.m"
}

#line 2073 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0(
#line 2073 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2073 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 2073 "intermod.m"
{
#line 2073 "intermod.m"
  {
#line 2073 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2073 "intermod.m"
    MR_Integer transform_hlds__intermod__CastX_21 = (MR_Integer) transform_hlds__intermod__HeadVar__1_1;
#line 2073 "intermod.m"
    MR_Integer transform_hlds__intermod__CastY_22 = (MR_Integer) transform_hlds__intermod__HeadVar__2_2;

#line 2073 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__CastX_21 == transform_hlds__intermod__CastY_22);
#line 2073 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
      transform_hlds__intermod__succeeded = MR_TRUE;
#line 2073 "intermod.m"
    else
#line 2073 "intermod.m"
      {
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_24_24;
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_25_25;
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_26_26;
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_27_27;
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_29_29;
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_30_30;
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 2)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 3)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 4)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 5)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 6)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 7)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 8)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 2)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 3)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 4)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 5)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 6)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 7)));
#line 2073 "intermod.m"
        MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 8)));

#line 5369 "transform_hlds.intermod.c"
        {
#line 5371 "transform_hlds.intermod.c"
          transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[8], ((MR_Box) (transform_hlds__intermod__V_3_3)), ((MR_Box) (transform_hlds__intermod__V_12_12)));
        }
#line 2073 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
          {
#line 5378 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeInfo_24_24 = (MR_Word) &transform_hlds__intermod_scalar_common_1[9];
#line 5380 "transform_hlds.intermod.c"
            {
#line 5382 "transform_hlds.intermod.c"
              transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_24_24, ((MR_Box) (transform_hlds__intermod__V_4_4)), ((MR_Box) (transform_hlds__intermod__V_13_13)));
            }
#line 2073 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
              {
#line 5389 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeInfo_25_25 = (MR_Word) &transform_hlds__intermod_scalar_common_1[9];
#line 5391 "transform_hlds.intermod.c"
                {
#line 5393 "transform_hlds.intermod.c"
                  transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_25_25, ((MR_Box) (transform_hlds__intermod__V_5_5)), ((MR_Box) (transform_hlds__intermod__V_14_14)));
                }
#line 2073 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                  {
#line 5400 "transform_hlds.intermod.c"
                    transform_hlds__intermod__TypeInfo_26_26 = (MR_Word) &transform_hlds__intermod_scalar_common_1[10];
#line 5402 "transform_hlds.intermod.c"
                    {
#line 5404 "transform_hlds.intermod.c"
                      transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_26_26, ((MR_Box) (transform_hlds__intermod__V_6_6)), ((MR_Box) (transform_hlds__intermod__V_15_15)));
                    }
#line 2073 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                      {
#line 5411 "transform_hlds.intermod.c"
                        transform_hlds__intermod__TypeInfo_27_27 = (MR_Word) &transform_hlds__intermod_scalar_common_1[11];
#line 5413 "transform_hlds.intermod.c"
                        {
#line 5415 "transform_hlds.intermod.c"
                          transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_27_27, ((MR_Box) (transform_hlds__intermod__V_7_7)), ((MR_Box) (transform_hlds__intermod__V_16_16)));
                        }
#line 2073 "intermod.m"
                        if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                          {
#line 5422 "transform_hlds.intermod.c"
                            {
#line 5424 "transform_hlds.intermod.c"
                              transform_hlds__intermod__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__intermod__V_8_8, transform_hlds__intermod__V_17_17);
                            }
#line 2073 "intermod.m"
                            if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                              {
#line 5431 "transform_hlds.intermod.c"
                                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_9_9 == transform_hlds__intermod__V_18_18);
#line 2073 "intermod.m"
                                if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                                  {
#line 5437 "transform_hlds.intermod.c"
                                    transform_hlds__intermod__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 5439 "transform_hlds.intermod.c"
                                    {
#line 5441 "transform_hlds.intermod.c"
                                      transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__intermod__V_10_10)), ((MR_Box) (transform_hlds__intermod__V_19_19)));
                                    }
#line 2073 "intermod.m"
                                    if (transform_hlds__intermod__succeeded)
#line 2073 "intermod.m"
                                      {
#line 5448 "transform_hlds.intermod.c"
                                        transform_hlds__intermod__TypeInfo_30_30 = (MR_Word) &transform_hlds__intermod_scalar_common_1[12];
#line 5450 "transform_hlds.intermod.c"
                                        {
#line 5452 "transform_hlds.intermod.c"
                                          return transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_30_30, ((MR_Box) (transform_hlds__intermod__V_11_11)), ((MR_Box) (transform_hlds__intermod__V_20_20)));
                                        }
#line 2073 "intermod.m"
                                      }
#line 2073 "intermod.m"
                                  }
#line 2073 "intermod.m"
                              }
#line 2073 "intermod.m"
                          }
#line 2073 "intermod.m"
                      }
#line 2073 "intermod.m"
                  }
#line 2073 "intermod.m"
              }
#line 2073 "intermod.m"
          }
#line 2073 "intermod.m"
      }
#line 2073 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2073 "intermod.m"
  }
#line 2073 "intermod.m"
}

#line 2368 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__import_status_to_write_1_p_0(
#line 2368 "intermod.m"
  MR_Word transform_hlds__intermod__Status_2)
#line 2368 "intermod.m"
{
#line 2375 "intermod.m"
  {
#line 2375 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2375 "intermod.m"
    if ((transform_hlds__intermod__Status_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 2381 "intermod.m"
      transform_hlds__intermod__succeeded = MR_TRUE;
#line 2375 "intermod.m"
    else
#line 2375 "intermod.m"
      if ((transform_hlds__intermod__Status_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 2383 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 2375 "intermod.m"
      else
#line 2375 "intermod.m"
        if ((transform_hlds__intermod__Status_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 2384 "intermod.m"
          transform_hlds__intermod__succeeded = MR_TRUE;
#line 2375 "intermod.m"
        else
#line 2375 "intermod.m"
          if ((transform_hlds__intermod__Status_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2380 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 2375 "intermod.m"
          else
#line 2375 "intermod.m"
            if (((MR_tag((MR_Word) transform_hlds__intermod__Status_2)) == (MR_mktag((MR_Integer) 1))))
#line 2385 "intermod.m"
              {
#line 2385 "intermod.m"
                MR_Word transform_hlds__intermod__Status_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_2, (MR_Integer) 0)));
#line 2385 "intermod.m"
                MR_Word transform_hlds__intermod__V_6_6;
#line 2385 "intermod.m"
                MR_Word transform_hlds__intermod__V_23_23;

#line 2386 "intermod.m"
                {
#line 2386 "intermod.m"
                  transform_hlds__intermod__V_6_6 = hlds__hlds_pred__status_is_exported_1_f_0(transform_hlds__intermod__Status_5);
                }
#line 2386 "intermod.m"
                {
#line 2386 "intermod.m"
                  transform_hlds__intermod__V_23_23 = mercury__bool__not_1_f_0(transform_hlds__intermod__V_6_6);
                }
#line 2371 "intermod.m"
                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_23_23 == (MR_Integer) 1);
#line 2385 "intermod.m"
              }
#line 2375 "intermod.m"
            else
#line 2375 "intermod.m"
              transform_hlds__intermod__succeeded = MR_FALSE;
#line 2375 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2375 "intermod.m"
  }
#line 2368 "intermod.m"
}

#line 2337 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(
#line 2337 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2337 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0_2,
#line 2337 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Preds_3)
#line 2337 "intermod.m"
{
#line 2340 "intermod.m"
  while (MR_TRUE)
#line 2340 "intermod.m"
    {
#line 2340 "intermod.m"
      /* tailcall optimized into a loop */
#line 2340 "intermod.m"
      {
#line 2340 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 2340 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2340 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Preds_3 = transform_hlds__intermod__STATE_VARIABLE_Preds_0_2;
#line 2340 "intermod.m"
        else
#line 2341 "intermod.m"
          {
#line 2341 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2341 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 2341 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2341 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2341 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo0_10;
#line 2341 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_22_22;
#line 2342 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_PredInfo0_10;
#line 2361 "intermod.m"
            MR_Word transform_hlds__intermod__Status_11;

#line 2342 "intermod.m"
            {
#line 2342 "intermod.m"
              mercury__map__lookup_3_p_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__STATE_VARIABLE_Preds_0_2, ((MR_Box) (transform_hlds__intermod__PredId_7)), &transform_hlds__intermod__conv0_PredInfo0_10);
            }
#line 2342 "intermod.m"
            transform_hlds__intermod__PredInfo0_10 = ((MR_Word) transform_hlds__intermod__conv0_PredInfo0_10);
#line 2344 "intermod.m"
            {
#line 2344 "intermod.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__Status_11);
            }
#line 2345 "intermod.m"
            {
#line 2345 "intermod.m"
              transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status_11);
            }
#line 2361 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2358 "intermod.m"
              {
#line 2358 "intermod.m"
                MR_Word transform_hlds__intermod__NewStatus_14;
#line 2358 "intermod.m"
                MR_Word transform_hlds__intermod__PredInfo_16;
#line 2348 "intermod.m"
                MR_Word transform_hlds__intermod__Origin_12;
#line 2348 "intermod.m"
                MR_Word transform_hlds__intermod__V_19_19;
#line 2348 "intermod.m"
                MR_Word transform_hlds__intermod__V_20_20;
#line 2349 "intermod.m"
                MR_Word transform_hlds__intermod__V_13_13;

#line 2348 "intermod.m"
                {
#line 2348 "intermod.m"
                  hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__Origin_12);
                }
#line 2349 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Origin_12)) == (MR_mktag((MR_Integer) 0)));
#line 2349 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2349 "intermod.m"
                  {
#line 2349 "intermod.m"
                    transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Origin_12, (MR_Integer) 0)));
#line 2349 "intermod.m"
                    transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_19_19, (MR_Integer) 0)));
#line 2349 "intermod.m"
                    transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_19_19, (MR_Integer) 1)));
#line 2349 "intermod.m"
                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_20_20 == (MR_Integer) 0);
#line 2349 "intermod.m"
                  }
#line 2352 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2351 "intermod.m"
                  transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 2352 "intermod.m"
                else
#line 2356 "intermod.m"
                  {
#line 2353 "intermod.m"
                    MR_Word transform_hlds__intermod__V_15_15;

#line 2353 "intermod.m"
                    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Status_11)) == (MR_mktag((MR_Integer) 1)));
#line 2353 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2353 "intermod.m"
                      {
#line 2353 "intermod.m"
                        transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_11, (MR_Integer) 0)));
#line 2355 "intermod.m"
                        transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_7[1]);
#line 2353 "intermod.m"
                      }
#line 2353 "intermod.m"
                    else
#line 2357 "intermod.m"
                      transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 2356 "intermod.m"
                  }
#line 2359 "intermod.m"
                {
#line 2359 "intermod.m"
                  hlds__hlds_pred__pred_info_set_import_status_3_p_0(transform_hlds__intermod__NewStatus_14, transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__PredInfo_16);
                }
#line 2360 "intermod.m"
                {
#line 2360 "intermod.m"
                  mercury__map__det_update_4_p_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__intermod__PredId_7)), ((MR_Box) (transform_hlds__intermod__PredInfo_16)), transform_hlds__intermod__STATE_VARIABLE_Preds_0_2, &transform_hlds__intermod__STATE_VARIABLE_Preds_22_22);
                }
#line 2358 "intermod.m"
              }
#line 2361 "intermod.m"
            else
#line 2360 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Preds_22_22 = transform_hlds__intermod__STATE_VARIABLE_Preds_0_2;
#line 2364 "intermod.m"
            /* direct tailcall eliminated */
#line 2364 "intermod.m"
            {
#line 2364 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__PredIds_8;
#line 2364 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0__tmp_copy_2 = transform_hlds__intermod__STATE_VARIABLE_Preds_22_22;

#line 2364 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Preds_0_2 = transform_hlds__intermod__STATE_VARIABLE_Preds_0__tmp_copy_2;
#line 2364 "intermod.m"
              transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 2364 "intermod.m"
            }
#line 2364 "intermod.m"
            continue;
#line 2341 "intermod.m"
          }
#line 2340 "intermod.m"
      }
#line 2340 "intermod.m"
      break;
#line 2340 "intermod.m"
    }
#line 2337 "intermod.m"
}

#line 2279 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0_1(
#line 2279 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2279 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2279 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2279 "intermod.m"
{
#line 2279 "intermod.m"
  {
#line 2279 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2279 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_11;

#line 2279 "intermod.m"
    {
#line 2279 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2281__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_11);
    }
#line 2279 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_11));
#line 2279 "intermod.m"
  }
#line 2279 "intermod.m"
}

#line 2305 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0(
#line 2305 "intermod.m"
  MR_Word transform_hlds__intermod__Instance0_5,
#line 2305 "intermod.m"
  MR_Word * transform_hlds__intermod__Instance_6,
#line 2305 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20,
#line 2305 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21)
#line 2305 "intermod.m"
{
#line 2308 "intermod.m"
  {
#line 2308 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2308 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceModule_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 0)));
#line 2308 "intermod.m"
    MR_Word transform_hlds__intermod__Status0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 1)));
#line 2308 "intermod.m"
    MR_Word transform_hlds__intermod__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 2)));
#line 2308 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 3)));
#line 2308 "intermod.m"
    MR_Word transform_hlds__intermod__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 4)));
#line 2308 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 5)));
#line 2308 "intermod.m"
    MR_Word transform_hlds__intermod__Body_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 6)));
#line 2308 "intermod.m"
    MR_Word transform_hlds__intermod__HLDSClassInterface_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 7)));
#line 2308 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 8)));
#line 2308 "intermod.m"
    MR_Word transform_hlds__intermod__ConstraintProofs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 9)));

#line 2312 "intermod.m"
    {
#line 2312 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status0_9);
    }
#line 2325 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2315 "intermod.m"
      {
#line 2313 "intermod.m"
        {
#line 2313 "intermod.m"
          MR_Word base;
#line 2313 "intermod.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 2313 "intermod.m"
          *transform_hlds__intermod__Instance_6 = base;
#line 2313 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__InstanceModule_8));
#line 2313 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2313 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__Context_10));
#line 2313 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__Constraints_11));
#line 2313 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__Types_12));
#line 2313 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_13));
#line 2313 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__Body_14));
#line 2313 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__HLDSClassInterface_15));
#line 2313 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_16));
#line 2313 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__intermod__ConstraintProofs_17));
#line 2313 "intermod.m"
        }
#line 2320 "intermod.m"
        if ((transform_hlds__intermod__HLDSClassInterface_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2323 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20;
#line 2320 "intermod.m"
        else
#line 2317 "intermod.m"
          {
#line 2317 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_15_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2317 "intermod.m"
            MR_Word transform_hlds__intermod__ClassInterface_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HLDSClassInterface_15, (MR_Integer) 0)));
#line 2317 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_19;
#line 2317 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds0_29;
#line 2317 "intermod.m"
            MR_Word transform_hlds__intermod__Preds0_41;
#line 2317 "intermod.m"
            MR_Word transform_hlds__intermod__Preds_42;

#line 2279 "intermod.m"
            {
#line 2279 "intermod.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_15_36, (MR_Word) &transform_hlds__intermod_scalar_common_2[23], transform_hlds__intermod__ClassInterface_18, &transform_hlds__intermod__PredIds0_29);
            }
#line 2284 "intermod.m"
            {
#line 2284 "intermod.m"
              mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_15_36, transform_hlds__intermod__PredIds0_29, &transform_hlds__intermod__PredIds_19);
            }
#line 2333 "intermod.m"
            {
#line 2333 "intermod.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__intermod__Preds0_41);
            }
#line 2334 "intermod.m"
            {
#line 2334 "intermod.m"
              transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_19, transform_hlds__intermod__Preds0_41, &transform_hlds__intermod__Preds_42);
            }
#line 2335 "intermod.m"
            {
#line 2335 "intermod.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_42, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21);
#line 2335 "intermod.m"
              return;
            }
#line 2317 "intermod.m"
          }
#line 2315 "intermod.m"
      }
#line 2325 "intermod.m"
    else
#line 2326 "intermod.m"
      {
#line 2326 "intermod.m"
        *transform_hlds__intermod__Instance_6 = transform_hlds__intermod__Instance0_5;
#line 2326 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20;
#line 2326 "intermod.m"
      }
#line 2308 "intermod.m"
  }
#line 2305 "intermod.m"
}

#line 2302 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0_1(
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
    MR_Word transform_hlds__intermod__conv1_Instance_6;
#line 2302 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21;

#line 2302 "intermod.m"
    {
#line 2302 "intermod.m"
      transform_hlds__intermod__adjust_instance_status_3_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv1_Instance_6, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21);
    }
#line 2302 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv1_Instance_6));
#line 2302 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21));
#line 2302 "intermod.m"
  }
#line 2302 "intermod.m"
}

#line 2296 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0(
#line 2296 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2296 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2296 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9,
#line 2296 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10)
#line 2296 "intermod.m"
{
#line 2301 "intermod.m"
  {
#line 2301 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2301 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 2301 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2301 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceList0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2301 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceList_7;
#line 2302 "intermod.m"
    MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10;

#line 2302 "intermod.m"
    {
#line 2302 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeCtorInfo_17_17, transform_hlds__intermod__TypeCtorInfo_17_17, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[22], transform_hlds__intermod__InstanceList0_6, &transform_hlds__intermod__InstanceList_7, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9)), &transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10);
    }
#line 2302 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10);
#line 2300 "intermod.m"
    {
#line 2300 "intermod.m"
      MR_Word base;
#line 2300 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2300 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2300 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_5));
#line 2300 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__InstanceList_7));
#line 2300 "intermod.m"
    }
#line 2301 "intermod.m"
  }
#line 2296 "intermod.m"
}

#line 2279 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0_1(
#line 2279 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2279 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2279 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2279 "intermod.m"
{
#line 2279 "intermod.m"
  {
#line 2279 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2279 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_11;

#line 2279 "intermod.m"
    {
#line 2279 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2281__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_11);
    }
#line 2279 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_11));
#line 2279 "intermod.m"
  }
#line 2279 "intermod.m"
}

#line 2261 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0(
#line 2261 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2261 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2261 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10,
#line 2261 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11)
#line 2261 "intermod.m"
{
#line 2266 "intermod.m"
  {
#line 2266 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2266 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2266 "intermod.m"
    MR_Word transform_hlds__intermod__ClassDefn0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2266 "intermod.m"
    MR_Word transform_hlds__intermod__ClassDefn_7;
#line 2267 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 0)));
#line 2267 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 1)));
#line 2267 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 2)));
#line 2267 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 3)));
#line 2267 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 4)));
#line 2267 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 5)));
#line 2267 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 6)));
#line 2267 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 7)));
#line 2267 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 8)));
#line 2267 "intermod.m"
    MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 9)));

#line 2267 "intermod.m"
    {
#line 2267 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__V_12_12);
    }
#line 2271 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2268 "intermod.m"
      {
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_15_56;
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_9;
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 7)));
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds0_49;
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__Preds0_61;
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__Preds_62;
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 1)));
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 2)));
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 3)));
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 4)));
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 5)));
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 6)));
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 8)));
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 9)));
#line 2268 "intermod.m"
        MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 0)));

#line 2268 "intermod.m"
        {
#line 2268 "intermod.m"
          transform_hlds__intermod__ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 2268 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2268 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 1) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 2268 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 2) = ((MR_Box) (transform_hlds__intermod__V_27_27));
#line 2268 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 3) = ((MR_Box) (transform_hlds__intermod__V_28_28));
#line 2268 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 4) = ((MR_Box) (transform_hlds__intermod__V_29_29));
#line 2268 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 5) = ((MR_Box) (transform_hlds__intermod__V_30_30));
#line 2268 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 6) = ((MR_Box) (transform_hlds__intermod__V_31_31));
#line 2268 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 7) = ((MR_Box) (transform_hlds__intermod__V_32_32));
#line 2268 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 8) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 2268 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 9) = ((MR_Box) (transform_hlds__intermod__V_34_34));
#line 2268 "intermod.m"
        }
#line 6133 "transform_hlds.intermod.c"
        transform_hlds__intermod__TypeCtorInfo_15_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2279 "intermod.m"
        {
#line 2279 "intermod.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_15_56, (MR_Word) &transform_hlds__intermod_scalar_common_2[21], transform_hlds__intermod__V_32_32, &transform_hlds__intermod__PredIds0_49);
        }
#line 2284 "intermod.m"
        {
#line 2284 "intermod.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_15_56, transform_hlds__intermod__PredIds0_49, &transform_hlds__intermod__PredIds_9);
        }
#line 2333 "intermod.m"
        {
#line 2333 "intermod.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__intermod__Preds0_61);
        }
#line 2334 "intermod.m"
        {
#line 2334 "intermod.m"
          transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_9, transform_hlds__intermod__Preds0_61, &transform_hlds__intermod__Preds_62);
        }
#line 2335 "intermod.m"
        {
#line 2335 "intermod.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_62, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11);
        }
#line 2268 "intermod.m"
      }
#line 2271 "intermod.m"
    else
#line 2272 "intermod.m"
      {
#line 2272 "intermod.m"
        transform_hlds__intermod__ClassDefn_7 = transform_hlds__intermod__ClassDefn0_6;
#line 2272 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10;
#line 2272 "intermod.m"
      }
#line 2265 "intermod.m"
    {
#line 2265 "intermod.m"
      MR_Word base;
#line 2265 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2265 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2265 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_5));
#line 2265 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__ClassDefn_7));
#line 2265 "intermod.m"
    }
#line 2266 "intermod.m"
  }
#line 2261 "intermod.m"
}

#line 2247 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0_1(
#line 2247 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2247 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2247 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2247 "intermod.m"
{
#line 2247 "intermod.m"
  {
#line 2247 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2247 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2247 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__4_14;

#line 2247 "intermod.m"
    {
#line 2247 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2247__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__4_14);
    }
#line 2247 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2247 "intermod.m"
      {
#line 2247 "intermod.m"
        *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__4_14));
#line 2247 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 2247 "intermod.m"
      }
#line 2247 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2247 "intermod.m"
  }
#line 2247 "intermod.m"
}

#line 2228 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0(
#line 2228 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_6,
#line 2228 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_7,
#line 2228 "intermod.m"
  MR_Word * transform_hlds__intermod__TypeDefn_8,
#line 2228 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11,
#line 2228 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12)
#line 2228 "intermod.m"
{
#line 2232 "intermod.m"
  {
#line 2232 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2232 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_10;
#line 1235 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_18;
#line 1235 "intermod.m"
    MR_Word transform_hlds__intermod__Name_19;
#line 1235 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22;
#line 1237 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_20;
#line 1238 "intermod.m"
    MR_String transform_hlds__intermod__V_21_21;

#line 2233 "intermod.m"
    {
#line 2233 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__ModuleName_10);
    }
#line 1236 "intermod.m"
    {
#line 1236 "intermod.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__intermod__TypeDefn0_7, &transform_hlds__intermod__ImportStatus_18);
    }
#line 1237 "intermod.m"
    transform_hlds__intermod__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 0)));
#line 1237 "intermod.m"
    transform_hlds__intermod___Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 1)));
#line 1238 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Name_19)) == (MR_mktag((MR_Integer) 1)));
#line 1238 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1238 "intermod.m"
      {
#line 1238 "intermod.m"
        transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_19, (MR_Integer) 0)));
#line 1238 "intermod.m"
        transform_hlds__intermod__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_19, (MR_Integer) 1)));
#line 1238 "intermod.m"
        {
#line 1238 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_10, transform_hlds__intermod__V_22_22);
        }
#line 1235 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1239 "intermod.m"
          {
#line 1239 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_18);
          }
#line 1238 "intermod.m"
      }
#line 2237 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2235 "intermod.m"
      {
#line 2235 "intermod.m"
        MR_Word transform_hlds__intermod__SpecialPredList_27;
#line 2235 "intermod.m"
        MR_Word transform_hlds__intermod__SpecPredMap_28;
#line 2235 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_31;
#line 2235 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 2235 "intermod.m"
        MR_Word transform_hlds__intermod__Preds0_46;
#line 2235 "intermod.m"
        MR_Word transform_hlds__intermod__Preds_47;

#line 2235 "intermod.m"
        {
#line 2235 "intermod.m"
          hlds__hlds_data__set_type_defn_status_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), transform_hlds__intermod__TypeDefn0_7, transform_hlds__intermod__TypeDefn_8);
        }
#line 2245 "intermod.m"
        {
#line 2245 "intermod.m"
          hlds__special_pred__special_pred_list_1_p_0(&transform_hlds__intermod__SpecialPredList_27);
        }
#line 2246 "intermod.m"
        {
#line 2246 "intermod.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__SpecPredMap_28);
        }
#line 2247 "intermod.m"
        {
#line 2247 "intermod.m"
          transform_hlds__intermod__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2247 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[9]));
#line 2247 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 1) = ((MR_Box) (transform_hlds__intermod__adjust_type_status_2_5_p_0_1));
#line 2247 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2247 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 3) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 2247 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 4) = ((MR_Box) (transform_hlds__intermod__SpecPredMap_28));
#line 2247 "intermod.m"
        }
#line 2247 "intermod.m"
        {
#line 2247 "intermod.m"
          mercury__list__filter_map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__V_32_32, transform_hlds__intermod__SpecialPredList_27, &transform_hlds__intermod__PredIds_31);
        }
#line 2333 "intermod.m"
        {
#line 2333 "intermod.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__Preds0_46);
        }
#line 2334 "intermod.m"
        {
#line 2334 "intermod.m"
          transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_31, transform_hlds__intermod__Preds0_46, &transform_hlds__intermod__Preds_47);
        }
#line 2335 "intermod.m"
        {
#line 2335 "intermod.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_47, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12);
#line 2335 "intermod.m"
          return;
        }
#line 2235 "intermod.m"
      }
#line 2237 "intermod.m"
    else
#line 2238 "intermod.m"
      {
#line 2238 "intermod.m"
        *transform_hlds__intermod__TypeDefn_8 = transform_hlds__intermod__TypeDefn0_7;
#line 2238 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11;
#line 2238 "intermod.m"
      }
#line 2232 "intermod.m"
  }
#line 2228 "intermod.m"
}

#line 2291 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3(
#line 2291 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2291 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2291 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2291 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2291 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2291 "intermod.m"
{
#line 2291 "intermod.m"
  {
#line 2291 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2291 "intermod.m"
    MR_Word transform_hlds__intermod__conv7_HeadVar__2_2;
#line 2291 "intermod.m"
    MR_Word transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10;

#line 2291 "intermod.m"
    {
#line 2291 "intermod.m"
      transform_hlds__intermod__adjust_instance_status_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv7_HeadVar__2_2, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10);
    }
#line 2291 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv7_HeadVar__2_2));
#line 2291 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10));
#line 2291 "intermod.m"
  }
#line 2291 "intermod.m"
}

#line 2257 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2(
#line 2257 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2257 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2257 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2257 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2257 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2257 "intermod.m"
{
#line 2257 "intermod.m"
  {
#line 2257 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2257 "intermod.m"
    MR_Word transform_hlds__intermod__conv4_HeadVar__2_2;
#line 2257 "intermod.m"
    MR_Word transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11;

#line 2257 "intermod.m"
    {
#line 2257 "intermod.m"
      transform_hlds__intermod__adjust_class_status_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv4_HeadVar__2_2, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11);
    }
#line 2257 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv4_HeadVar__2_2));
#line 2257 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11));
#line 2257 "intermod.m"
  }
#line 2257 "intermod.m"
}

#line 2224 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1(
#line 2224 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2224 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2224 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2224 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3,
#line 2224 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_4,
#line 2224 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_5)
#line 2224 "intermod.m"
{
#line 2224 "intermod.m"
  {
#line 2224 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2224 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_TypeDefn_8;
#line 2224 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12;

#line 2224 "intermod.m"
    {
#line 2224 "intermod.m"
      transform_hlds__intermod__adjust_type_status_2_5_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv1_TypeDefn_8, ((MR_Word) transform_hlds__intermod__wrapper_arg_4), &transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12);
    }
#line 2224 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv1_TypeDefn_8));
#line 2224 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_5 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12));
#line 2224 "intermod.m"
  }
#line 2224 "intermod.m"
}

#line 2209 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(
#line 2209 "intermod.m"
  MR_Word transform_hlds__intermod__Info_4,
#line 2209 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8,
#line 2209 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9)
#line 2209 "intermod.m"
{
#line 2212 "intermod.m"
  {
#line 2212 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_13_55;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_14_56;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_19_61;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_13_73;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_14_74;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_19_79;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 2)));
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls_7;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__Preds0_28;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__Preds_29;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable0_34;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable_35;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__Classes0_48;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__ClassAL0_49;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__ClassAL_50;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__Classes_51;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__Instances0_66;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceAL0_67;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceAL_68;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_69;
#line 2212 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71;
#line 2156 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 0)));
#line 2156 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 1)));
#line 2156 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 3)));
#line 2156 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 4)));
#line 2156 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 5)));
#line 2156 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 6)));
#line 2156 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 7)));
#line 2156 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 8)));
#line 2224 "intermod.m"
    MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37;
#line 2257 "intermod.m"
    MR_Box transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53;
#line 2291 "intermod.m"
    MR_Box transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71;

#line 2214 "intermod.m"
    {
#line 2214 "intermod.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__PredDecls0_6, &transform_hlds__intermod__PredDecls_7);
    }
#line 2333 "intermod.m"
    {
#line 2333 "intermod.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__intermod__Preds0_28);
    }
#line 2334 "intermod.m"
    {
#line 2334 "intermod.m"
      transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredDecls_7, transform_hlds__intermod__Preds0_28, &transform_hlds__intermod__Preds_29);
    }
#line 2335 "intermod.m"
    {
#line 2335 "intermod.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_29, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10);
    }
#line 2223 "intermod.m"
    {
#line 2223 "intermod.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10, &transform_hlds__intermod__TypeTable0_34);
    }
#line 2224 "intermod.m"
    {
#line 2224 "intermod.m"
      hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[18], transform_hlds__intermod__TypeTable0_34, &transform_hlds__intermod__TypeTable_35, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10)), &transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37);
    }
#line 2224 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37 = ((MR_Word) transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37);
#line 2226 "intermod.m"
    {
#line 2226 "intermod.m"
      hlds__hlds_module__module_info_set_type_table_3_p_0(transform_hlds__intermod__TypeTable_35, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11);
    }
#line 2255 "intermod.m"
    {
#line 2255 "intermod.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__intermod__Classes0_48);
    }
#line 6638 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_13_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 6640 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_14_56 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 2256 "intermod.m"
    {
#line 2256 "intermod.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_55, transform_hlds__intermod__TypeCtorInfo_14_56, transform_hlds__intermod__Classes0_48, &transform_hlds__intermod__ClassAL0_49);
    }
#line 6647 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_19_61 = (MR_Word) &transform_hlds__intermod_scalar_common_2[5];
#line 2257 "intermod.m"
    {
#line 2257 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeInfo_19_61, transform_hlds__intermod__TypeInfo_19_61, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[19], transform_hlds__intermod__ClassAL0_49, &transform_hlds__intermod__ClassAL_50, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11)), &transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53);
    }
#line 2257 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53 = ((MR_Word) transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53);
#line 2258 "intermod.m"
    {
#line 2258 "intermod.m"
      mercury__map__from_sorted_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_55, transform_hlds__intermod__TypeCtorInfo_14_56, transform_hlds__intermod__ClassAL_50, &transform_hlds__intermod__Classes_51);
    }
#line 2259 "intermod.m"
    {
#line 2259 "intermod.m"
      hlds__hlds_module__module_info_set_class_table_3_p_0(transform_hlds__intermod__Classes_51, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12);
    }
#line 2289 "intermod.m"
    {
#line 2289 "intermod.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12, &transform_hlds__intermod__Instances0_66);
    }
#line 6671 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_13_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 6673 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_14_74 = (MR_Word) &transform_hlds__intermod_scalar_common_1[1];
#line 2290 "intermod.m"
    {
#line 2290 "intermod.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_73, transform_hlds__intermod__TypeInfo_14_74, transform_hlds__intermod__Instances0_66, &transform_hlds__intermod__InstanceAL0_67);
    }
#line 6680 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_19_79 = (MR_Word) &transform_hlds__intermod_scalar_common_2[6];
#line 2291 "intermod.m"
    {
#line 2291 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeInfo_19_79, transform_hlds__intermod__TypeInfo_19_79, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[20], transform_hlds__intermod__InstanceAL0_67, &transform_hlds__intermod__InstanceAL_68, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12)), &transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71);
    }
#line 2291 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71 = ((MR_Word) transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71);
#line 2293 "intermod.m"
    {
#line 2293 "intermod.m"
      mercury__map__from_sorted_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_73, transform_hlds__intermod__TypeInfo_14_74, transform_hlds__intermod__InstanceAL_68, &transform_hlds__intermod__Instances_69);
    }
#line 2294 "intermod.m"
    {
#line 2294 "intermod.m"
      hlds__hlds_module__module_info_set_instance_table_3_p_0(transform_hlds__intermod__Instances_69, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9);
#line 2294 "intermod.m"
      return;
    }
#line 2212 "intermod.m"
  }
#line 2209 "intermod.m"
}

#line 2151 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(
#line 2151 "intermod.m"
  MR_Word transform_hlds__intermod__TVarSet_4,
#line 2151 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2151 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2151 "intermod.m"
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
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));

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
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_11_11));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_4));
#line 2174 "intermod.m"
    }
#line 2174 "intermod.m"
  }
#line 2151 "intermod.m"
}

#line 2147 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_write_header_2_p_0(
#line 2147 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2147 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2147 "intermod.m"
{
#line 2172 "intermod.m"
  {
#line 2172 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));

#line 2172 "intermod.m"
    {
#line 2172 "intermod.m"
      MR_Word base;
#line 2172 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2172 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_5_5));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2172 "intermod.m"
    }
#line 2172 "intermod.m"
  }
#line 2147 "intermod.m"
}

#line 2145 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_module_info_3_p_0(
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_4,
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2145 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2145 "intermod.m"
{
#line 2170 "intermod.m"
  {
#line 2170 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));

#line 2170 "intermod.m"
    {
#line 2170 "intermod.m"
      MR_Word base;
#line 2170 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2170 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2170 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2170 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2170 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2170 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2170 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2170 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_4));
#line 2170 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2170 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2170 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2170 "intermod.m"
    }
#line 2170 "intermod.m"
  }
#line 2145 "intermod.m"
}

#line 2141 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
#line 2141 "intermod.m"
  MR_Word transform_hlds__intermod__Types_4,
#line 2141 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2141 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2141 "intermod.m"
{
#line 2169 "intermod.m"
  {
#line 2169 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));

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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__Types_4));
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
#line 2141 "intermod.m"
}

#line 2134 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_preds_3_p_0(
#line 2134 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_4,
#line 2134 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2134 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2134 "intermod.m"
{
#line 2165 "intermod.m"
  {
#line 2165 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2165 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2165 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2165 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2165 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));
#line 2165 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2165 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2165 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2165 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2165 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));

#line 2165 "intermod.m"
    {
#line 2165 "intermod.m"
      MR_Word base;
#line 2165 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2165 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2165 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2165 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__Procs_4));
#line 2165 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2165 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2165 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2165 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_11_11));
#line 2165 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2165 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2165 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2165 "intermod.m"
    }
#line 2165 "intermod.m"
  }
#line 2134 "intermod.m"
}

#line 2125 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_module_info_2_p_0(
#line 2125 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2125 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2125 "intermod.m"
{
#line 2159 "intermod.m"
  {
#line 2159 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 2159 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2159 "intermod.m"
  }
#line 2125 "intermod.m"
}

#line 2118 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_preds_2_p_0(
#line 2118 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2118 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2118 "intermod.m"
{
#line 2155 "intermod.m"
  {
#line 2155 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2155 "intermod.m"
    MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2155 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5;
#line 2155 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6;
#line 2155 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7;
#line 2155 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8;
#line 2155 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 2155 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 2155 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 2155 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2155 "intermod.m"
    transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2155 "intermod.m"
    transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2155 "intermod.m"
    transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2155 "intermod.m"
    transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2155 "intermod.m"
    transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));
#line 2155 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2155 "intermod.m"
    transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2155 "intermod.m"
  }
#line 2118 "intermod.m"
}

#line 2036 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
#line 2036 "intermod.m"
  MR_Word transform_hlds__intermod__Args_6,
#line 2036 "intermod.m"
  MR_Word transform_hlds__intermod__Modes_7,
#line 2036 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26,
#line 2036 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_VarSet_27,
#line 2036 "intermod.m"
  MR_Word * transform_hlds__intermod__PragmaVars_9)
#line 2036 "intermod.m"
{
#line 2041 "intermod.m"
  {
#line 2041 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2041 "intermod.m"
    if ((transform_hlds__intermod__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2041 "intermod.m"
      if ((transform_hlds__intermod__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2056 "intermod.m"
        {
#line 2058 "intermod.m"
          *transform_hlds__intermod__PragmaVars_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2058 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_VarSet_27 = transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26;
#line 2056 "intermod.m"
        }
#line 2041 "intermod.m"
      else
#line 2060 "intermod.m"
        {
#line 2062 "intermod.m"
          {
#line 2062 "intermod.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
#line 2062 "intermod.m"
            return;
          }
#line 2060 "intermod.m"
        }
#line 2041 "intermod.m"
    else
#line 2041 "intermod.m"
      {
#line 2041 "intermod.m"
        MR_Word transform_hlds__intermod__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Args_6, (MR_Integer) 1)));
#line 2041 "intermod.m"
        MR_Word transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Args_6, (MR_Integer) 0)));

#line 2041 "intermod.m"
        if ((transform_hlds__intermod__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 2041 "intermod.m"
        else
#line 2041 "intermod.m"
          {
#line 2041 "intermod.m"
            MR_Word transform_hlds__intermod__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Modes_7, (MR_Integer) 0)));
#line 2041 "intermod.m"
            MR_Word transform_hlds__intermod__ModesTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Modes_7, (MR_Integer) 1)));
#line 2041 "intermod.m"
            MR_Word transform_hlds__intermod__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 0)));
#line 2041 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeNameAndMode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 1)));
#line 2041 "intermod.m"
            MR_String transform_hlds__intermod__Name_18;
#line 2041 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaVar_20;
#line 2041 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaVarsTail_21;
#line 2041 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36;
#line 2043 "intermod.m"
            MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 2)));
#line 2043 "intermod.m"
            MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 3)));

#line 2047 "intermod.m"
            if ((transform_hlds__intermod__MaybeNameAndMode_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2045 "intermod.m"
              transform_hlds__intermod__Name_18 = (MR_String) "_";
#line 2047 "intermod.m"
            else
#line 2048 "intermod.m"
              {
#line 2048 "intermod.m"
                MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeNameAndMode_15, (MR_Integer) 0)));
#line 2048 "intermod.m"
                MR_Word transform_hlds__intermod___Mode2_19;

#line 2048 "intermod.m"
                transform_hlds__intermod__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, (MR_Integer) 0)));
#line 2048 "intermod.m"
                transform_hlds__intermod___Mode2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, (MR_Integer) 1)));
#line 2048 "intermod.m"
              }
#line 2050 "intermod.m"
            {
#line 2050 "intermod.m"
              transform_hlds__intermod__PragmaVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2050 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 0) = ((MR_Box) (transform_hlds__intermod__Var_14));
#line 2050 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 1) = ((MR_Box) (transform_hlds__intermod__Name_18));
#line 2050 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 2) = ((MR_Box) (transform_hlds__intermod__Mode_12));
#line 2050 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2050 "intermod.m"
            }
#line 2051 "intermod.m"
            {
#line 2051 "intermod.m"
              mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__intermod__Var_14, transform_hlds__intermod__Name_18, transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26, &transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36);
            }
#line 2052 "intermod.m"
            {
#line 2052 "intermod.m"
              transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(transform_hlds__intermod__V_39_39, transform_hlds__intermod__ModesTail_13, transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36, transform_hlds__intermod__STATE_VARIABLE_VarSet_27, &transform_hlds__intermod__PragmaVarsTail_21);
            }
#line 2054 "intermod.m"
            {
#line 2054 "intermod.m"
              MR_Word base;
#line 2054 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2054 "intermod.m"
              *transform_hlds__intermod__PragmaVars_9 = base;
#line 2054 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PragmaVar_20));
#line 2054 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PragmaVarsTail_21));
#line 2054 "intermod.m"
            }
#line 2041 "intermod.m"
          }
#line 2041 "intermod.m"
      }
#line 2041 "intermod.m"
  }
#line 2036 "intermod.m"
}

#line 1968 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(
#line 1968 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_1,
#line 1968 "intermod.m"
  MR_Integer transform_hlds__intermod__Arity_2,
#line 1968 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1968 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_4)
#line 1968 "intermod.m"
{
#line 1971 "intermod.m"
  while (MR_TRUE)
#line 1971 "intermod.m"
    {
#line 1971 "intermod.m"
      /* tailcall optimized into a loop */
#line 1971 "intermod.m"
      {
#line 1971 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1971 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1971 "intermod.m"
          {
#line 1971 "intermod.m"
          }
#line 1971 "intermod.m"
        else
#line 1973 "intermod.m"
          {
#line 1973 "intermod.m"
            MR_Word transform_hlds__intermod__Marker_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1973 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));

#line 7330 "transform_hlds.intermod.c"
            if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 1))
#line 1980 "intermod.m"
              {
#line 1980 "intermod.m"
              }
#line 7336 "transform_hlds.intermod.c"
            else
#line 7338 "transform_hlds.intermod.c"
              if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 20))
#line 1980 "intermod.m"
                {
#line 1980 "intermod.m"
                }
#line 7344 "transform_hlds.intermod.c"
              else
#line 7346 "transform_hlds.intermod.c"
                if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 19))
#line 1980 "intermod.m"
                  {
#line 1980 "intermod.m"
                  }
#line 7352 "transform_hlds.intermod.c"
                else
#line 7354 "transform_hlds.intermod.c"
                  if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 10))
#line 1980 "intermod.m"
                    {
#line 1980 "intermod.m"
                    }
#line 7360 "transform_hlds.intermod.c"
                  else
#line 7362 "transform_hlds.intermod.c"
                    if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 9))
#line 1980 "intermod.m"
                      {
#line 1980 "intermod.m"
                      }
#line 7368 "transform_hlds.intermod.c"
                    else
#line 7370 "transform_hlds.intermod.c"
                      if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 18))
#line 7372 "transform_hlds.intermod.c"
                        {
#line 7374 "transform_hlds.intermod.c"
                          MR_String transform_hlds__intermod__Name_20;

#line 1977 "intermod.m"
                          {
#line 1977 "intermod.m"
                            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_20);
                          }
#line 1978 "intermod.m"
                          {
#line 1978 "intermod.m"
                            parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                          }
#line 7387 "transform_hlds.intermod.c"
                        }
#line 7389 "transform_hlds.intermod.c"
                      else
#line 7391 "transform_hlds.intermod.c"
                        if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 24))
#line 1980 "intermod.m"
                          {
#line 1980 "intermod.m"
                          }
#line 7397 "transform_hlds.intermod.c"
                        else
#line 7399 "transform_hlds.intermod.c"
                          if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 23))
#line 1980 "intermod.m"
                            {
#line 1980 "intermod.m"
                            }
#line 7405 "transform_hlds.intermod.c"
                          else
#line 7407 "transform_hlds.intermod.c"
                            if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 8))
#line 1980 "intermod.m"
                              {
#line 1980 "intermod.m"
                              }
#line 7413 "transform_hlds.intermod.c"
                            else
#line 7415 "transform_hlds.intermod.c"
                              if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 3))
#line 1980 "intermod.m"
                                {
#line 1980 "intermod.m"
                                }
#line 7421 "transform_hlds.intermod.c"
                              else
#line 7423 "transform_hlds.intermod.c"
                                if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 2))
#line 1980 "intermod.m"
                                  {
#line 1980 "intermod.m"
                                  }
#line 7429 "transform_hlds.intermod.c"
                                else
#line 7431 "transform_hlds.intermod.c"
                                  if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 12))
#line 1980 "intermod.m"
                                    {
#line 1980 "intermod.m"
                                    }
#line 7437 "transform_hlds.intermod.c"
                                  else
#line 7439 "transform_hlds.intermod.c"
                                    if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 13))
#line 1980 "intermod.m"
                                      {
#line 1980 "intermod.m"
                                      }
#line 7445 "transform_hlds.intermod.c"
                                    else
#line 7447 "transform_hlds.intermod.c"
                                      if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 21))
#line 7449 "transform_hlds.intermod.c"
                                        {
#line 7451 "transform_hlds.intermod.c"
                                          MR_String transform_hlds__intermod__Name_52;

#line 1977 "intermod.m"
                                          {
#line 1977 "intermod.m"
                                            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_52);
                                          }
#line 1978 "intermod.m"
                                          {
#line 1978 "intermod.m"
                                            parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_52, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                          }
#line 7464 "transform_hlds.intermod.c"
                                        }
#line 7466 "transform_hlds.intermod.c"
                                      else
#line 7468 "transform_hlds.intermod.c"
                                        if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 22))
#line 1980 "intermod.m"
                                          {
#line 1980 "intermod.m"
                                          }
#line 7474 "transform_hlds.intermod.c"
                                        else
#line 7476 "transform_hlds.intermod.c"
                                          if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 11))
#line 1980 "intermod.m"
                                            {
#line 1980 "intermod.m"
                                            }
#line 7482 "transform_hlds.intermod.c"
                                          else
#line 7484 "transform_hlds.intermod.c"
                                            if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 5))
#line 1980 "intermod.m"
                                              {
#line 1980 "intermod.m"
                                              }
#line 7490 "transform_hlds.intermod.c"
                                            else
#line 7492 "transform_hlds.intermod.c"
                                              if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 4))
#line 1980 "intermod.m"
                                                {
#line 1980 "intermod.m"
                                                }
#line 7498 "transform_hlds.intermod.c"
                                              else
#line 7500 "transform_hlds.intermod.c"
                                                if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 16))
#line 7502 "transform_hlds.intermod.c"
                                                  {
#line 7504 "transform_hlds.intermod.c"
                                                    MR_String transform_hlds__intermod__Name_64;

#line 1977 "intermod.m"
                                                    {
#line 1977 "intermod.m"
                                                      hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_64);
                                                    }
#line 1978 "intermod.m"
                                                    {
#line 1978 "intermod.m"
                                                      parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                    }
#line 7517 "transform_hlds.intermod.c"
                                                  }
#line 7519 "transform_hlds.intermod.c"
                                                else
#line 7521 "transform_hlds.intermod.c"
                                                  if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 14))
#line 7523 "transform_hlds.intermod.c"
                                                    {
#line 7525 "transform_hlds.intermod.c"
                                                      MR_String transform_hlds__intermod__Name_68;

#line 1977 "intermod.m"
                                                      {
#line 1977 "intermod.m"
                                                        hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_68);
                                                      }
#line 1978 "intermod.m"
                                                      {
#line 1978 "intermod.m"
                                                        parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                      }
#line 7538 "transform_hlds.intermod.c"
                                                    }
#line 7540 "transform_hlds.intermod.c"
                                                  else
#line 7542 "transform_hlds.intermod.c"
                                                    if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 15))
#line 7544 "transform_hlds.intermod.c"
                                                      {
#line 7546 "transform_hlds.intermod.c"
                                                        MR_String transform_hlds__intermod__Name_72;

#line 1977 "intermod.m"
                                                        {
#line 1977 "intermod.m"
                                                          hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_72);
                                                        }
#line 1978 "intermod.m"
                                                        {
#line 1978 "intermod.m"
                                                          parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                        }
#line 7559 "transform_hlds.intermod.c"
                                                      }
#line 7561 "transform_hlds.intermod.c"
                                                    else
#line 7563 "transform_hlds.intermod.c"
                                                      if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 0))
#line 1980 "intermod.m"
                                                        {
#line 1980 "intermod.m"
                                                        }
#line 7569 "transform_hlds.intermod.c"
                                                      else
#line 7571 "transform_hlds.intermod.c"
                                                        if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 17))
#line 7573 "transform_hlds.intermod.c"
                                                          {
#line 7575 "transform_hlds.intermod.c"
                                                            MR_String transform_hlds__intermod__Name_78;

#line 1977 "intermod.m"
                                                            {
#line 1977 "intermod.m"
                                                              hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_78);
                                                            }
#line 1978 "intermod.m"
                                                            {
#line 1978 "intermod.m"
                                                              parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                            }
#line 7588 "transform_hlds.intermod.c"
                                                          }
#line 7590 "transform_hlds.intermod.c"
                                                        else
#line 7592 "transform_hlds.intermod.c"
                                                          if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 6))
#line 7594 "transform_hlds.intermod.c"
                                                            {
#line 7596 "transform_hlds.intermod.c"
                                                              MR_String transform_hlds__intermod__Name_82;

#line 1977 "intermod.m"
                                                              {
#line 1977 "intermod.m"
                                                                hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_82);
                                                              }
#line 1978 "intermod.m"
                                                              {
#line 1978 "intermod.m"
                                                                parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                              }
#line 7609 "transform_hlds.intermod.c"
                                                            }
#line 7611 "transform_hlds.intermod.c"
                                                          else
#line 7613 "transform_hlds.intermod.c"
                                                            {
#line 7615 "transform_hlds.intermod.c"
                                                              MR_String transform_hlds__intermod__Name_86;

#line 1977 "intermod.m"
                                                              {
#line 1977 "intermod.m"
                                                                hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_86);
                                                              }
#line 1978 "intermod.m"
                                                              {
#line 1978 "intermod.m"
                                                                parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                              }
#line 7628 "transform_hlds.intermod.c"
                                                            }
#line 1982 "intermod.m"
            /* direct tailcall eliminated */
#line 1982 "intermod.m"
            {
#line 1982 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__Markers_16;

#line 1982 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1982 "intermod.m"
            }
#line 1982 "intermod.m"
            continue;
#line 1973 "intermod.m"
          }
#line 1971 "intermod.m"
      }
#line 1971 "intermod.m"
      break;
#line 1971 "intermod.m"
    }
#line 1968 "intermod.m"
}

#line 1907 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
#line 1907 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 1907 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_2,
#line 1907 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1907 "intermod.m"
  MR_Word * transform_hlds__intermod__Goals_4,
#line 1907 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5,
#line 1907 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6)
#line 1907 "intermod.m"
{
#line 1913 "intermod.m"
  while (MR_TRUE)
#line 1913 "intermod.m"
    {
#line 1913 "intermod.m"
      /* tailcall optimized into a loop */
#line 1913 "intermod.m"
      {
#line 1913 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1913 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1913 "intermod.m"
          {
#line 1914 "intermod.m"
            {
#line 1914 "intermod.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__Goals_4);
            }
#line 1913 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5;
#line 1913 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1913 "intermod.m"
          }
#line 1913 "intermod.m"
        else
#line 1916 "intermod.m"
          {
#line 1916 "intermod.m"
            MR_Word transform_hlds__intermod__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 1916 "intermod.m"
            MR_Word transform_hlds__intermod__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 1916 "intermod.m"
            MR_Word transform_hlds__intermod__RevGoals1_39;
#line 1916 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52;
#line 1950 "intermod.m"
            MR_Word transform_hlds__intermod__LHSVar_19;
#line 1950 "intermod.m"
            MR_Word transform_hlds__intermod__RHSTerm_27;
#line 1918 "intermod.m"
            MR_Word transform_hlds__intermod__TypeInfo_55_55;
#line 1918 "intermod.m"
            MR_Word transform_hlds__intermod__RHS_20;
#line 1918 "intermod.m"
            MR_Word transform_hlds__intermod__Context_25;
#line 1918 "intermod.m"
            MR_Word transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_13, (MR_Integer) 0)));
#line 1918 "intermod.m"
            MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_13, (MR_Integer) 1)));
#line 1918 "intermod.m"
            MR_Word transform_hlds__intermod__V_21_21;
#line 1918 "intermod.m"
            MR_Word transform_hlds__intermod__V_22_22;
#line 1918 "intermod.m"
            MR_Word transform_hlds__intermod__V_23_23;

#line 1918 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 1918 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1918 "intermod.m"
              {
#line 1918 "intermod.m"
                transform_hlds__intermod__LHSVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 0)));
#line 1918 "intermod.m"
                transform_hlds__intermod__RHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 1)));
#line 1918 "intermod.m"
                transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 2)));
#line 1918 "intermod.m"
                transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 3)));
#line 1918 "intermod.m"
                transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 4)));
#line 7746 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeInfo_55_55 = (MR_Word) &transform_hlds__intermod_scalar_common_1[6];
#line 1919 "intermod.m"
                {
#line 1919 "intermod.m"
                  transform_hlds__intermod__succeeded = mercury__list__member_2_p_0(transform_hlds__intermod__TypeInfo_55_55, ((MR_Box) (transform_hlds__intermod__LHSVar_19)), transform_hlds__intermod__HeadVars_2);
                }
#line 1918 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1918 "intermod.m"
                  {
#line 1920 "intermod.m"
                    {
#line 1920 "intermod.m"
                      mercury__term__context_init_1_p_0(&transform_hlds__intermod__Context_25);
                    }
#line 1924 "intermod.m"
                    if (((MR_tag((MR_Word) transform_hlds__intermod__RHS_20)) == (MR_mktag((MR_Integer) 1))))
#line 1925 "intermod.m"
                      {
#line 1925 "intermod.m"
                        MR_Word transform_hlds__intermod__ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 0)));
#line 1925 "intermod.m"
                        MR_Word transform_hlds__intermod__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 2)));
#line 1925 "intermod.m"
                        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 1)));

#line 1929 "intermod.m"
                        if (((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1933 "intermod.m"
                          {
#line 1933 "intermod.m"
                            MR_Char transform_hlds__intermod__Char_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1933 "intermod.m"
                            MR_Word transform_hlds__intermod__V_45_45;
#line 1933 "intermod.m"
                            MR_String transform_hlds__intermod__V_46_46;

#line 1934 "intermod.m"
                            {
#line 1934 "intermod.m"
                              transform_hlds__intermod__V_46_46 = mercury__string__from_char_1_f_0(transform_hlds__intermod__Char_33);
                            }
#line 1934 "intermod.m"
                            {
#line 1934 "intermod.m"
                              transform_hlds__intermod__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1934 "intermod.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_45_45, 0) = ((MR_Box) (transform_hlds__intermod__V_46_46));
#line 1934 "intermod.m"
                            }
#line 1934 "intermod.m"
                            {
#line 1934 "intermod.m"
                              transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1934 "intermod.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_45_45));
#line 1934 "intermod.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1934 "intermod.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1934 "intermod.m"
                            }
#line 1933 "intermod.m"
                            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1933 "intermod.m"
                          }
#line 1929 "intermod.m"
                        else
#line 1929 "intermod.m"
                          if (((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1940 "intermod.m"
                            {
#line 1940 "intermod.m"
                              MR_Word transform_hlds__intermod__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1940 "intermod.m"
                              MR_Word transform_hlds__intermod__SymName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1940 "intermod.m"
                              MR_Word transform_hlds__intermod__ArgTerms_38;
#line 1940 "intermod.m"
                              MR_Integer transform_hlds__intermod__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 2)));
#line 1940 "intermod.m"
                              MR_Word transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 3)));

#line 1941 "intermod.m"
                              {
#line 1941 "intermod.m"
                                mercury__term__var_list_to_term_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_56_56, transform_hlds__intermod__Args_30, &transform_hlds__intermod__ArgTerms_38);
                              }
#line 1942 "intermod.m"
                              {
#line 1942 "intermod.m"
                                parse_tree__prog_util__construct_qualified_term_3_p_0(transform_hlds__intermod__TypeCtorInfo_56_56, transform_hlds__intermod__SymName_35, transform_hlds__intermod__ArgTerms_38, &transform_hlds__intermod__RHSTerm_27);
                              }
#line 1940 "intermod.m"
                              transform_hlds__intermod__succeeded = MR_TRUE;
#line 1940 "intermod.m"
                            }
#line 1929 "intermod.m"
                          else
#line 1929 "intermod.m"
                            if (((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1930 "intermod.m"
                              {
#line 1930 "intermod.m"
                                MR_Float transform_hlds__intermod__Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1930 "intermod.m"
                                MR_Word transform_hlds__intermod__V_48_48;

#line 1931 "intermod.m"
                                {
#line 1931 "intermod.m"
                                  transform_hlds__intermod__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1931 "intermod.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1931 "intermod.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_48_48, 1) = MR_box_float(transform_hlds__intermod__Float_32);
#line 1931 "intermod.m"
                                }
#line 1931 "intermod.m"
                                {
#line 1931 "intermod.m"
                                  transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1931 "intermod.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_48_48));
#line 1931 "intermod.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1931 "intermod.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1931 "intermod.m"
                                }
#line 1930 "intermod.m"
                                transform_hlds__intermod__succeeded = MR_TRUE;
#line 1930 "intermod.m"
                              }
#line 1929 "intermod.m"
                            else
#line 1929 "intermod.m"
                              if (((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1927 "intermod.m"
                                {
#line 1927 "intermod.m"
                                  MR_Integer transform_hlds__intermod__Int_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1927 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_50_50;

#line 1928 "intermod.m"
                                  {
#line 1928 "intermod.m"
                                    transform_hlds__intermod__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1928 "intermod.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_50_50, 0) = ((MR_Box) (transform_hlds__intermod__Int_31));
#line 1928 "intermod.m"
                                  }
#line 1928 "intermod.m"
                                  {
#line 1928 "intermod.m"
                                    transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1928 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_50_50));
#line 1928 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1928 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1928 "intermod.m"
                                  }
#line 1927 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_TRUE;
#line 1927 "intermod.m"
                                }
#line 1929 "intermod.m"
                              else
#line 1929 "intermod.m"
                                if (((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1937 "intermod.m"
                                  {
#line 1937 "intermod.m"
                                    MR_String transform_hlds__intermod__String_34 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1937 "intermod.m"
                                    MR_Word transform_hlds__intermod__V_43_43;

#line 1938 "intermod.m"
                                    {
#line 1938 "intermod.m"
                                      transform_hlds__intermod__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1938 "intermod.m"
                                      MR_hl_field(MR_mktag(2), transform_hlds__intermod__V_43_43, 0) = ((MR_Box) (transform_hlds__intermod__String_34));
#line 1938 "intermod.m"
                                    }
#line 1938 "intermod.m"
                                    {
#line 1938 "intermod.m"
                                      transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1938 "intermod.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_43_43));
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
#line 1929 "intermod.m"
                                else
#line 1929 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_FALSE;
#line 1925 "intermod.m"
                      }
#line 1924 "intermod.m"
                    else
#line 1924 "intermod.m"
                      if (((MR_tag((MR_Word) transform_hlds__intermod__RHS_20)) == (MR_mktag((MR_Integer) 0))))
#line 1922 "intermod.m"
                        {
#line 1922 "intermod.m"
                          MR_Word transform_hlds__intermod__RHSVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHS_20, (MR_Integer) 0)));

#line 1923 "intermod.m"
                          {
#line 1923 "intermod.m"
                            transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "intermod.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__RHSVar_26));
#line 1923 "intermod.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1923 "intermod.m"
                          }
#line 1922 "intermod.m"
                          transform_hlds__intermod__succeeded = MR_TRUE;
#line 1922 "intermod.m"
                        }
#line 1924 "intermod.m"
                      else
#line 1924 "intermod.m"
                        transform_hlds__intermod__succeeded = MR_FALSE;
#line 1918 "intermod.m"
                  }
#line 1918 "intermod.m"
              }
#line 1950 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1948 "intermod.m"
              {
#line 1948 "intermod.m"
                {
#line 1948 "intermod.m"
                  transform_hlds__intermod__succeeded = mercury__map__insert_4_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[6], (MR_Word) &transform_hlds__intermod_scalar_common_1[7], ((MR_Box) (transform_hlds__intermod__LHSVar_19)), ((MR_Box) (transform_hlds__intermod__RHSTerm_27)), transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5, &transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52);
                }
#line 1948 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1948 "intermod.m"
                  {
#line 1949 "intermod.m"
                    transform_hlds__intermod__RevGoals1_39 = transform_hlds__intermod__HeadVar__3_3;
#line 1949 "intermod.m"
                    transform_hlds__intermod__succeeded = MR_TRUE;
#line 1948 "intermod.m"
                  }
#line 1948 "intermod.m"
              }
#line 1950 "intermod.m"
            else
#line 1951 "intermod.m"
              {
#line 1951 "intermod.m"
                {
#line 1951 "intermod.m"
                  transform_hlds__intermod__RevGoals1_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__RevGoals1_39, 0) = ((MR_Box) (transform_hlds__intermod__Goal_13));
#line 1951 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__RevGoals1_39, 1) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_3));
#line 1951 "intermod.m"
                }
#line 1951 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5;
#line 1951 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 1951 "intermod.m"
              }
#line 1916 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1953 "intermod.m"
              {
#line 1953 "intermod.m"
                /* direct tailcall eliminated */
#line 1953 "intermod.m"
                {
#line 1953 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__Goals0_14;
#line 1953 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__RevGoals1_39;
#line 1953 "intermod.m"
                  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0__tmp_copy_5 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52;

#line 1953 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0__tmp_copy_5;
#line 1953 "intermod.m"
                  transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1953 "intermod.m"
                  transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 1953 "intermod.m"
                }
#line 1953 "intermod.m"
                continue;
#line 1953 "intermod.m"
              }
#line 1916 "intermod.m"
          }
#line 1913 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 1913 "intermod.m"
      }
#line 1913 "intermod.m"
      break;
#line 1913 "intermod.m"
    }
#line 1907 "intermod.m"
}

#line 1891 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
#line 1891 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1891 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1891 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 1891 "intermod.m"
{
#line 1891 "intermod.m"
  {
#line 1891 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1891 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__4_24;

#line 1891 "intermod.m"
    {
#line 1891 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1895__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__4_24);
    }
#line 1891 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__4_24));
#line 1891 "intermod.m"
  }
#line 1891 "intermod.m"
}

#line 1879 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
#line 1879 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_5,
#line 1879 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1879 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadTerms_7,
#line 1879 "intermod.m"
  MR_Word * transform_hlds__intermod__Clause_8)
#line 1879 "intermod.m"
{
#line 1882 "intermod.m"
  {
#line 1882 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1882 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_36_36;
#line 1882 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_37_37;
#line 1882 "intermod.m"
    MR_Word transform_hlds__intermod__Goal0_9;
#line 1882 "intermod.m"
    MR_Word transform_hlds__intermod__GoalInfo0_11;
#line 1882 "intermod.m"
    MR_Word transform_hlds__intermod__Goals0_12;
#line 1882 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVarMap0_13;
#line 1884 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 1902 "intermod.m"
    MR_Word transform_hlds__intermod__Goals_14;
#line 1902 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVarMap_15;

#line 1883 "intermod.m"
    {
#line 1883 "intermod.m"
      transform_hlds__intermod__Goal0_9 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__Clause0_6);
    }
#line 1884 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 0)));
#line 1884 "intermod.m"
    transform_hlds__intermod__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 1)));
#line 1885 "intermod.m"
    {
#line 1885 "intermod.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__intermod__Goal0_9, &transform_hlds__intermod__Goals0_12);
    }
#line 8149 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_36_36 = (MR_Word) &transform_hlds__intermod_scalar_common_1[6];
#line 8151 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_37_37 = (MR_Word) &transform_hlds__intermod_scalar_common_1[7];
#line 1886 "intermod.m"
    {
#line 1886 "intermod.m"
      mercury__map__init_1_p_0(transform_hlds__intermod__TypeInfo_36_36, transform_hlds__intermod__TypeInfo_37_37, &transform_hlds__intermod__HeadVarMap0_13);
    }
#line 1888 "intermod.m"
    {
#line 1888 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(transform_hlds__intermod__Goals0_12, transform_hlds__intermod__HeadVars_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__Goals_14, transform_hlds__intermod__HeadVarMap0_13, &transform_hlds__intermod__HeadVarMap_15);
    }
#line 1902 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1899 "intermod.m"
      {
#line 1899 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_20;
#line 1899 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;
#line 1901 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 1901 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;
#line 1901 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34;
#line 1901 "intermod.m"
        MR_Word transform_hlds__intermod__V_35_35;
#line 1901 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;

#line 1891 "intermod.m"
        {
#line 1891 "intermod.m"
          transform_hlds__intermod__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1891 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[6]));
#line 1891 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 1) = ((MR_Box) (transform_hlds__intermod__strip_headvar_unifications_4_p_0_1));
#line 1891 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1891 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 3) = ((MR_Box) (transform_hlds__intermod__Clause0_6));
#line 1891 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 4) = ((MR_Box) (transform_hlds__intermod__HeadVarMap_15));
#line 1891 "intermod.m"
        }
#line 1891 "intermod.m"
        {
#line 1891 "intermod.m"
          mercury__list__map_3_p_0(transform_hlds__intermod__TypeInfo_36_36, transform_hlds__intermod__TypeInfo_37_37, transform_hlds__intermod__V_22_22, transform_hlds__intermod__HeadVars_5, transform_hlds__intermod__HeadTerms_7);
        }
#line 1900 "intermod.m"
        {
#line 1900 "intermod.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__intermod__Goals_14, transform_hlds__intermod__GoalInfo0_11, &transform_hlds__intermod__Goal_20);
        }
#line 1901 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 0)));
#line 1901 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 1)));
#line 1901 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 2)));
#line 1901 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 3)));
#line 1901 "intermod.m"
        transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 4)));
#line 1901 "intermod.m"
        {
#line 1901 "intermod.m"
          MR_Word base;
#line 1901 "intermod.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1901 "intermod.m"
          *transform_hlds__intermod__Clause_8 = base;
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_31_31));
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__Goal_20));
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_34_34));
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_35_35));
#line 1901 "intermod.m"
        }
#line 1899 "intermod.m"
      }
#line 1902 "intermod.m"
    else
#line 1903 "intermod.m"
      {
#line 1903 "intermod.m"
        {
#line 1903 "intermod.m"
          mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__intermod__HeadVars_5, transform_hlds__intermod__HeadTerms_7);
        }
#line 1904 "intermod.m"
        *transform_hlds__intermod__Clause_8 = transform_hlds__intermod__Clause0_6;
#line 1903 "intermod.m"
      }
#line 1882 "intermod.m"
  }
#line 1879 "intermod.m"
}

#line 1842 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_11,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_12,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__PragmaImpl_13,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__Attributes_14,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__Args_15,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__ProgVarset0_16,
#line 1842 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_17,
#line 1842 "intermod.m"
  MR_Integer transform_hlds__intermod__ProcId_18)
#line 1842 "intermod.m"
{
#line 1848 "intermod.m"
  {
#line 1848 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1848 "intermod.m"
    MR_Word transform_hlds__intermod__ProcInfo_20;
#line 1848 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeArgModes_21;
#line 1849 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_ProcInfo_20;

#line 1849 "intermod.m"
    {
#line 1849 "intermod.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__intermod__Procs_11, ((MR_Box) (transform_hlds__intermod__ProcId_18)), &transform_hlds__intermod__conv0_ProcInfo_20);
    }
#line 1849 "intermod.m"
    transform_hlds__intermod__ProcInfo_20 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_20);
#line 1850 "intermod.m"
    {
#line 1850 "intermod.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_20, &transform_hlds__intermod__MaybeArgModes_21);
    }
#line 1859 "intermod.m"
    if ((transform_hlds__intermod__MaybeArgModes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1860 "intermod.m"
      {
#line 1861 "intermod.m"
        {
#line 1861 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_foreign_clause\'/10", (MR_String) "no mode declaration");
#line 1861 "intermod.m"
          return;
        }
#line 1860 "intermod.m"
      }
#line 1859 "intermod.m"
    else
#line 1852 "intermod.m"
      {
#line 1852 "intermod.m"
        MR_Word transform_hlds__intermod__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeArgModes_21, (MR_Integer) 0)));
#line 1852 "intermod.m"
        MR_Word transform_hlds__intermod__ProgVarset_23;
#line 1852 "intermod.m"
        MR_Word transform_hlds__intermod__PragmaVars_24;
#line 1852 "intermod.m"
        MR_Word transform_hlds__intermod__InstVarset_25;
#line 1852 "intermod.m"
        MR_Word transform_hlds__intermod__FPInfo_26;

#line 1853 "intermod.m"
        {
#line 1853 "intermod.m"
          transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(transform_hlds__intermod__Args_15, transform_hlds__intermod__ArgModes_22, transform_hlds__intermod__ProgVarset0_16, &transform_hlds__intermod__ProgVarset_23, &transform_hlds__intermod__PragmaVars_24);
        }
#line 1855 "intermod.m"
        {
#line 1855 "intermod.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__intermod__ProcInfo_20, &transform_hlds__intermod__InstVarset_25);
        }
#line 1856 "intermod.m"
        {
#line 1856 "intermod.m"
          transform_hlds__intermod__FPInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1856 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 0) = ((MR_Box) (transform_hlds__intermod__Attributes_14));
#line 1856 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 1) = ((MR_Box) (transform_hlds__intermod__SymName_17));
#line 1856 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 2) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_12));
#line 1856 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 3) = ((MR_Box) (transform_hlds__intermod__PragmaVars_24));
#line 1856 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 4) = ((MR_Box) (transform_hlds__intermod__ProgVarset_23));
#line 1856 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 5) = ((MR_Box) (transform_hlds__intermod__InstVarset_25));
#line 1856 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 6) = ((MR_Box) (transform_hlds__intermod__PragmaImpl_13));
#line 1856 "intermod.m"
        }
#line 1858 "intermod.m"
        {
#line 1858 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_pragma_foreign_proc_3_p_0(transform_hlds__intermod__FPInfo_26);
#line 1858 "intermod.m"
          return;
        }
#line 1852 "intermod.m"
      }
#line 1848 "intermod.m"
  }
#line 1842 "intermod.m"
}

#line 1833 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
#line 1833 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1833 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1833 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1833 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1833 "intermod.m"
{
#line 1833 "intermod.m"
  {
#line 1833 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1833 "intermod.m"
    {
#line 1833 "intermod.m"
      transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 9))), ((MR_Integer) transform_hlds__intermod__wrapper_arg_1));
#line 1833 "intermod.m"
      return;
    }
#line 1833 "intermod.m"
  }
#line 1833 "intermod.m"
}

#line 1813 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
#line 1813 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1813 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 1813 "intermod.m"
{
#line 1813 "intermod.m"
  {
#line 1813 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1813 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1813 "intermod.m"
    {
#line 1813 "intermod.m"
      return transform_hlds__intermod__succeeded = transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1813__1_1_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 1813 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 1813 "intermod.m"
  }
#line 1813 "intermod.m"
}

#line 1787 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_12,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_13,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_14,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__VarSet_15,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_16,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_17,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_18,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__MaybeVarTypes_19,
#line 1787 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_20)
#line 1787 "intermod.m"
{
#line 1792 "intermod.m"
  {
#line 1792 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1792 "intermod.m"
    MR_Word transform_hlds__intermod__ApplicableProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 0)));
#line 1792 "intermod.m"
    MR_Word transform_hlds__intermod__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 1)));
#line 1792 "intermod.m"
    MR_Word transform_hlds__intermod__ImplLang_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 2)));
#line 1793 "intermod.m"
    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 3)));
#line 1793 "intermod.m"
    MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 4)));

#line 1805 "intermod.m"
    if ((transform_hlds__intermod__ImplLang_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1795 "intermod.m"
      {
#line 1795 "intermod.m"
        MR_Word transform_hlds__intermod__ClauseHeadVars_27;
#line 1795 "intermod.m"
        MR_Word transform_hlds__intermod__Clause_28;

#line 1796 "intermod.m"
        {
#line 1796 "intermod.m"
          transform_hlds__intermod__strip_headvar_unifications_4_p_0(transform_hlds__intermod__HeadVars_16, transform_hlds__intermod__Clause0_20, &transform_hlds__intermod__ClauseHeadVars_27, &transform_hlds__intermod__Clause_28);
        }
#line 1802 "intermod.m"
        {
#line 1802 "intermod.m"
          hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(transform_hlds__intermod__OutInfo_12, (MR_Integer) 0, (MR_Integer) 1, transform_hlds__intermod__ModuleInfo_13, transform_hlds__intermod__PredId_14, transform_hlds__intermod__VarSet_15, (MR_Integer) 1, transform_hlds__intermod__ClauseHeadVars_27, transform_hlds__intermod__PredOrFunc_17, transform_hlds__intermod__Clause_28, (MR_Integer) 1, transform_hlds__intermod__MaybeVarTypes_19);
#line 1802 "intermod.m"
          return;
        }
#line 1795 "intermod.m"
      }
#line 1805 "intermod.m"
    else
#line 1806 "intermod.m"
      {
#line 1806 "intermod.m"
        MR_Word transform_hlds__intermod__PredInfo_32;
#line 1806 "intermod.m"
        MR_Word transform_hlds__intermod__Procs_33;
#line 1837 "intermod.m"
        MR_Word transform_hlds__intermod__Attributes_49;
#line 1837 "intermod.m"
        MR_Word transform_hlds__intermod__Args_52;
#line 1837 "intermod.m"
        MR_Word transform_hlds__intermod__PragmaCode_55;
#line 1821 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 1812 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;

#line 1807 "intermod.m"
        {
#line 1807 "intermod.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_13, transform_hlds__intermod__PredId_14, &transform_hlds__intermod__PredInfo_32);
        }
#line 1808 "intermod.m"
        {
#line 1808 "intermod.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__intermod__PredInfo_32, &transform_hlds__intermod__Procs_33);
        }
#line 1812 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_23, (MR_Integer) 0)));
#line 1812 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_23, (MR_Integer) 1)));
#line 1821 "intermod.m"
        if (((((MR_tag((MR_Word) transform_hlds__intermod__V_93_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1823 "intermod.m"
          {
#line 1823 "intermod.m"
            MR_Word transform_hlds__intermod__V_58_58;
#line 1823 "intermod.m"
            MR_Integer transform_hlds__intermod__V_59_59;
#line 1823 "intermod.m"
            MR_Word transform_hlds__intermod___ExtraArgs_81;
#line 1823 "intermod.m"
            MR_Word transform_hlds__intermod___MaybeTraceRuntimeCond_82;

#line 1823 "intermod.m"
            transform_hlds__intermod__Attributes_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 1)));
#line 1823 "intermod.m"
            transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 2)));
#line 1823 "intermod.m"
            transform_hlds__intermod__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 3)));
#line 1823 "intermod.m"
            transform_hlds__intermod__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 4)));
#line 1823 "intermod.m"
            transform_hlds__intermod___ExtraArgs_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 5)));
#line 1823 "intermod.m"
            transform_hlds__intermod___MaybeTraceRuntimeCond_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 6)));
#line 1823 "intermod.m"
            transform_hlds__intermod__PragmaCode_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 7)));
#line 1823 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1823 "intermod.m"
          }
#line 1821 "intermod.m"
        else
#line 1821 "intermod.m"
          if (((((MR_tag((MR_Word) transform_hlds__intermod__V_93_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1812 "intermod.m"
            {
#line 1812 "intermod.m"
              MR_Word transform_hlds__intermod__TypeCtorInfo_85_85;
#line 1812 "intermod.m"
              MR_Word transform_hlds__intermod__TypeInfo_94_94;
#line 1812 "intermod.m"
              MR_Word transform_hlds__intermod__Goals_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 2)));
#line 1812 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignCodeGoal_46;
#line 1812 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignCodeGoalExpr_47;
#line 1812 "intermod.m"
              MR_Word transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 1)));
#line 1812 "intermod.m"
              MR_Word transform_hlds__intermod__V_65_65;
#line 1812 "intermod.m"
              MR_Word transform_hlds__intermod__V_66_66;
#line 1812 "intermod.m"
              MR_Word transform_hlds__intermod__V_68_68;
#line 1812 "intermod.m"
              MR_Word transform_hlds__intermod__V_91_91;
#line 1818 "intermod.m"
              MR_Word transform_hlds__intermod__V_48_48;
#line 1819 "intermod.m"
              MR_Word transform_hlds__intermod__V_50_50;
#line 1819 "intermod.m"
              MR_Integer transform_hlds__intermod__V_51_51;
#line 1819 "intermod.m"
              MR_Word transform_hlds__intermod___ExtraArgs_53;
#line 1819 "intermod.m"
              MR_Word transform_hlds__intermod___MaybeTraceRuntimeCond_54;

#line 1812 "intermod.m"
              transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_64_64 == (MR_Integer) 0);
#line 1812 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 1812 "intermod.m"
                {
#line 1813 "intermod.m"
                  transform_hlds__intermod__V_65_65 = (MR_Word) &transform_hlds__intermod_scalar_common_2[17];
#line 1817 "intermod.m"
                  transform_hlds__intermod__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8604 "transform_hlds.intermod.c"
                  transform_hlds__intermod__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1813 "intermod.m"
                  {
#line 1813 "intermod.m"
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
#line 8621 "transform_hlds.intermod.c"
                      transform_hlds__intermod__TypeInfo_94_94 = (MR_Word) &transform_hlds__intermod_scalar_common_1[17];
#line 1817 "intermod.m"
                      {
#line 1817 "intermod.m"
                        transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_94_94, ((MR_Box) (transform_hlds__intermod__V_68_68)), ((MR_Box) (transform_hlds__intermod__V_91_91)));
                      }
#line 1812 "intermod.m"
                      if (transform_hlds__intermod__succeeded)
#line 1812 "intermod.m"
                        {
#line 1818 "intermod.m"
                          transform_hlds__intermod__ForeignCodeGoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignCodeGoal_46, (MR_Integer) 0)));
#line 1818 "intermod.m"
                          transform_hlds__intermod__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignCodeGoal_46, (MR_Integer) 1)));
#line 1819 "intermod.m"
                          transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ForeignCodeGoalExpr_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1819 "intermod.m"
                          if (transform_hlds__intermod__succeeded)
#line 1819 "intermod.m"
                            {
#line 1819 "intermod.m"
                              transform_hlds__intermod__Attributes_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 1)));
#line 1819 "intermod.m"
                              transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 2)));
#line 1819 "intermod.m"
                              transform_hlds__intermod__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 3)));
#line 1819 "intermod.m"
                              transform_hlds__intermod__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 4)));
#line 1819 "intermod.m"
                              transform_hlds__intermod___ExtraArgs_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 5)));
#line 1819 "intermod.m"
                              transform_hlds__intermod___MaybeTraceRuntimeCond_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 6)));
#line 1819 "intermod.m"
                              transform_hlds__intermod__PragmaCode_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 7)));
#line 1819 "intermod.m"
                            }
#line 1812 "intermod.m"
                        }
#line 1817 "intermod.m"
                    }
#line 1812 "intermod.m"
                }
#line 1812 "intermod.m"
            }
#line 1821 "intermod.m"
          else
#line 1821 "intermod.m"
            transform_hlds__intermod__succeeded = MR_FALSE;
#line 1837 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1830 "intermod.m"
          if ((transform_hlds__intermod__ApplicableProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1828 "intermod.m"
            {
#line 1829 "intermod.m"
              {
#line 1829 "intermod.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "all_modes foreign_proc");
#line 1829 "intermod.m"
                return;
              }
#line 1828 "intermod.m"
            }
#line 1830 "intermod.m"
          else
#line 1831 "intermod.m"
            {
#line 1831 "intermod.m"
              MR_Word transform_hlds__intermod__ProcIds_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ApplicableProcIds_22, (MR_Integer) 0)));
#line 1831 "intermod.m"
              MR_Word transform_hlds__intermod__V_69_69;
#line 1832 "intermod.m"
              MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_62;

#line 1833 "intermod.m"
              {
#line 1833 "intermod.m"
                transform_hlds__intermod__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1833 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
#line 1833 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_2));
#line 1833 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1833 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 3) = ((MR_Box) (transform_hlds__intermod__Procs_33));
#line 1833 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 4) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_17));
#line 1833 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 5) = ((MR_Box) (transform_hlds__intermod__PragmaCode_55));
#line 1833 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 6) = ((MR_Box) (transform_hlds__intermod__Attributes_49));
#line 1833 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 7) = ((MR_Box) (transform_hlds__intermod__Args_52));
#line 1833 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 8) = ((MR_Box) (transform_hlds__intermod__VarSet_15));
#line 1833 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 9) = ((MR_Box) (transform_hlds__intermod__SymName_18));
#line 1833 "intermod.m"
              }
#line 1832 "intermod.m"
              {
#line 1832 "intermod.m"
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_69_69, transform_hlds__intermod__ProcIds_60, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_62);
              }
#line 1831 "intermod.m"
            }
#line 1837 "intermod.m"
        else
#line 1838 "intermod.m"
          {
#line 1838 "intermod.m"
            {
#line 1838 "intermod.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "did not find foreign_proc");
#line 1838 "intermod.m"
              return;
            }
#line 1838 "intermod.m"
          }
#line 1806 "intermod.m"
      }
#line 1792 "intermod.m"
  }
#line 1787 "intermod.m"
}

#line 1781 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0_1(
#line 1781 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1781 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1781 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1781 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1781 "intermod.m"
{
#line 1781 "intermod.m"
  {
#line 1781 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1781 "intermod.m"
    {
#line 1781 "intermod.m"
      transform_hlds__intermod__intermod_write_clause_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1781 "intermod.m"
      return;
    }
#line 1781 "intermod.m"
  }
#line 1781 "intermod.m"
}

#line 1736 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0(
#line 1736 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_1,
#line 1736 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_2,
#line 1736 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3)
#line 1736 "intermod.m"
{
#line 1739 "intermod.m"
  while (MR_TRUE)
#line 1739 "intermod.m"
    {
#line 1739 "intermod.m"
      /* tailcall optimized into a loop */
#line 1739 "intermod.m"
      {
#line 1739 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1739 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1739 "intermod.m"
          {
#line 1739 "intermod.m"
          }
#line 1739 "intermod.m"
        else
#line 1740 "intermod.m"
          {
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo_16;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__Module_17;
#line 1740 "intermod.m"
            MR_String transform_hlds__intermod__Name_18;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_19;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_20;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesInfo_21;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__VarSet_22;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__HeadVars_23;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesRep_24;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__VarTypes_26;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__Clauses_27;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__GoalType_28;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__Module_68;
#line 1740 "intermod.m"
            MR_String transform_hlds__intermod__Name_69;
#line 1740 "intermod.m"
            MR_Integer transform_hlds__intermod__Arity_70;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_71;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_72;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_73;
#line 1740 "intermod.m"
            MR_Word transform_hlds__intermod__MarkerList_74;
#line 1753 "intermod.m"
            MR_Word transform_hlds__intermod___ItemNumbers_25;

#line 1741 "intermod.m"
            {
#line 1741 "intermod.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_2, transform_hlds__intermod__PredId_13, &transform_hlds__intermod__PredInfo_16);
            }
#line 1742 "intermod.m"
            {
#line 1742 "intermod.m"
              transform_hlds__intermod__Module_17 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1743 "intermod.m"
            {
#line 1743 "intermod.m"
              transform_hlds__intermod__Name_18 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1744 "intermod.m"
            {
#line 1744 "intermod.m"
              transform_hlds__intermod__SymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1744 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_19, 0) = ((MR_Box) (transform_hlds__intermod__Module_17));
#line 1744 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_19, 1) = ((MR_Box) (transform_hlds__intermod__Name_18));
#line 1744 "intermod.m"
            }
#line 1745 "intermod.m"
            {
#line 1745 "intermod.m"
              transform_hlds__intermod__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1959 "intermod.m"
            {
#line 1959 "intermod.m"
              transform_hlds__intermod__Module_68 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1960 "intermod.m"
            {
#line 1960 "intermod.m"
              transform_hlds__intermod__Name_69 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1961 "intermod.m"
            {
#line 1961 "intermod.m"
              transform_hlds__intermod__Arity_70 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1962 "intermod.m"
            {
#line 1962 "intermod.m"
              transform_hlds__intermod__PredOrFunc_71 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1963 "intermod.m"
            {
#line 1963 "intermod.m"
              transform_hlds__intermod__SymName_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_72, 0) = ((MR_Box) (transform_hlds__intermod__Module_68));
#line 1963 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_72, 1) = ((MR_Box) (transform_hlds__intermod__Name_69));
#line 1963 "intermod.m"
            }
#line 1964 "intermod.m"
            {
#line 1964 "intermod.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__Markers_73);
            }
#line 1965 "intermod.m"
            {
#line 1965 "intermod.m"
              hlds__hlds_pred__markers_to_marker_list_2_p_0(transform_hlds__intermod__Markers_73, &transform_hlds__intermod__MarkerList_74);
            }
#line 1966 "intermod.m"
            {
#line 1966 "intermod.m"
              transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(transform_hlds__intermod__SymName_72, transform_hlds__intermod__Arity_70, transform_hlds__intermod__MarkerList_74, transform_hlds__intermod__PredOrFunc_71);
            }
#line 1750 "intermod.m"
            {
#line 1750 "intermod.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__ClausesInfo_21);
            }
#line 1751 "intermod.m"
            {
#line 1751 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_varset_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__VarSet_22);
            }
#line 1752 "intermod.m"
            {
#line 1752 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__HeadVars_23);
            }
#line 1753 "intermod.m"
            {
#line 1753 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__ClausesRep_24, &transform_hlds__intermod___ItemNumbers_25);
            }
#line 1754 "intermod.m"
            {
#line 1754 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__VarTypes_26);
            }
#line 1755 "intermod.m"
            {
#line 1755 "intermod.m"
              hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep_24, &transform_hlds__intermod__Clauses_27);
            }
#line 1757 "intermod.m"
            {
#line 1757 "intermod.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__GoalType_28);
            }
#line 1772 "intermod.m"
            if (((MR_tag((MR_Word) transform_hlds__intermod__GoalType_28)) == (MR_mktag((MR_Integer) 1))))
#line 1759 "intermod.m"
              {
#line 1759 "intermod.m"
                MR_Word transform_hlds__intermod__PromiseType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalType_28, (MR_Integer) 0)));

#line 1766 "intermod.m"
                if ((transform_hlds__intermod__Clauses_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1769 "intermod.m"
                  {
#line 1770 "intermod.m"
                    {
#line 1770 "intermod.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_preds\'/5", (MR_String) "assertion not a single clause.");
#line 1770 "intermod.m"
                      return;
                    }
#line 1769 "intermod.m"
                  }
#line 1766 "intermod.m"
                else
#line 1766 "intermod.m"
                  {
#line 1766 "intermod.m"
                    MR_Word transform_hlds__intermod__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Clauses_27, (MR_Integer) 1)));
#line 1766 "intermod.m"
                    MR_Word transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Clauses_27, (MR_Integer) 0)));

#line 1766 "intermod.m"
                    if ((transform_hlds__intermod__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1761 "intermod.m"
                      {
#line 1763 "intermod.m"
                        {
#line 1763 "intermod.m"
                          hlds__hlds_out__hlds_out_module__write_promise_13_p_0(transform_hlds__intermod__OutInfo_1, transform_hlds__intermod__PromiseType_29, (MR_Integer) 0, transform_hlds__intermod__ModuleInfo_2, transform_hlds__intermod__PredId_13, transform_hlds__intermod__VarSet_22, (MR_Integer) 0, transform_hlds__intermod__HeadVars_23, transform_hlds__intermod__PredOrFunc_20, transform_hlds__intermod__V_63_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                        }
#line 1761 "intermod.m"
                      }
#line 1766 "intermod.m"
                    else
#line 1769 "intermod.m"
                      {
#line 1770 "intermod.m"
                        {
#line 1770 "intermod.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_preds\'/5", (MR_String) "assertion not a single clause.");
#line 1770 "intermod.m"
                          return;
                        }
#line 1769 "intermod.m"
                      }
#line 1766 "intermod.m"
                  }
#line 1759 "intermod.m"
              }
#line 1772 "intermod.m"
            else
#line 1777 "intermod.m"
              {
#line 1777 "intermod.m"
                MR_Word transform_hlds__intermod__TypeVarset_35;
#line 1777 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeVarTypes_36;
#line 1777 "intermod.m"
                MR_Word transform_hlds__intermod__V_40_40;
#line 1780 "intermod.m"
                MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_49_49;

#line 1778 "intermod.m"
                {
#line 1778 "intermod.m"
                  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__TypeVarset_35);
                }
#line 1779 "intermod.m"
                {
#line 1779 "intermod.m"
                  transform_hlds__intermod__MaybeVarTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1779 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeVarTypes_36, 0) = ((MR_Box) (transform_hlds__intermod__TypeVarset_35));
#line 1779 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeVarTypes_36, 1) = ((MR_Box) (transform_hlds__intermod__VarTypes_26));
#line 1779 "intermod.m"
                }
#line 1781 "intermod.m"
                {
#line 1781 "intermod.m"
                  transform_hlds__intermod__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_10[0]));
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_preds_5_p_0_1));
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_1));
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 4) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_2));
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 5) = ((MR_Box) (transform_hlds__intermod__PredId_13));
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 6) = ((MR_Box) (transform_hlds__intermod__VarSet_22));
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 7) = ((MR_Box) (transform_hlds__intermod__HeadVars_23));
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 8) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_20));
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 9) = ((MR_Box) (transform_hlds__intermod__SymName_19));
#line 1781 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 10) = ((MR_Box) (transform_hlds__intermod__MaybeVarTypes_36));
#line 1781 "intermod.m"
                }
#line 1780 "intermod.m"
                {
#line 1780 "intermod.m"
                  mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_40_40, transform_hlds__intermod__Clauses_27, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_49_49);
                }
#line 1777 "intermod.m"
              }
#line 1785 "intermod.m"
            /* direct tailcall eliminated */
#line 1785 "intermod.m"
            {
#line 1785 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__PredIds_14;

#line 1785 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1785 "intermod.m"
            }
#line 1785 "intermod.m"
            continue;
#line 1740 "intermod.m"
          }
#line 1739 "intermod.m"
      }
#line 1739 "intermod.m"
      break;
#line 1739 "intermod.m"
    }
#line 1736 "intermod.m"
}

#line 1704 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_modes_6_p_0(
#line 1704 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_1,
#line 1704 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_2,
#line 1704 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_3,
#line 1704 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4)
#line 1704 "intermod.m"
{
#line 1707 "intermod.m"
  while (MR_TRUE)
#line 1707 "intermod.m"
    {
#line 1707 "intermod.m"
      /* tailcall optimized into a loop */
#line 1707 "intermod.m"
      {
#line 1707 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1707 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1707 "intermod.m"
          {
#line 1707 "intermod.m"
          }
#line 1707 "intermod.m"
        else
#line 1709 "intermod.m"
          {
#line 1709 "intermod.m"
            MR_Integer transform_hlds__intermod__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 1709 "intermod.m"
            MR_Word transform_hlds__intermod__ProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 1)));
#line 1709 "intermod.m"
            MR_Word transform_hlds__intermod__ProcInfo_19;
#line 1709 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeArgModes_20;
#line 1709 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeDetism_21;
#line 1709 "intermod.m"
            MR_Word transform_hlds__intermod__ArgModes_24;
#line 1709 "intermod.m"
            MR_Word transform_hlds__intermod__Detism_25;
#line 1709 "intermod.m"
            MR_Word transform_hlds__intermod__Context_26;
#line 1709 "intermod.m"
            MR_Word transform_hlds__intermod__Varset_27;
#line 1710 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_ProcInfo_19;
#line 1719 "intermod.m"
            MR_Word transform_hlds__intermod__ArgModes0_22;
#line 1719 "intermod.m"
            MR_Word transform_hlds__intermod__Detism0_23;

#line 1710 "intermod.m"
            {
#line 1710 "intermod.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__intermod__Procs_1, ((MR_Box) (transform_hlds__intermod__ProcId_16)), &transform_hlds__intermod__conv0_ProcInfo_19);
            }
#line 1710 "intermod.m"
            transform_hlds__intermod__ProcInfo_19 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_19);
#line 1711 "intermod.m"
            {
#line 1711 "intermod.m"
              hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__MaybeArgModes_20);
            }
#line 1712 "intermod.m"
            {
#line 1712 "intermod.m"
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__MaybeDetism_21);
            }
#line 1714 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeArgModes_20)) == (MR_mktag((MR_Integer) 1)));
#line 1714 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1714 "intermod.m"
              {
#line 1714 "intermod.m"
                transform_hlds__intermod__ArgModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeArgModes_20, (MR_Integer) 0)));
#line 1715 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeDetism_21)) == (MR_mktag((MR_Integer) 1)));
#line 1715 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1715 "intermod.m"
                  transform_hlds__intermod__Detism0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeDetism_21, (MR_Integer) 0)));
#line 1714 "intermod.m"
              }
#line 1719 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1717 "intermod.m"
              {
#line 1717 "intermod.m"
                transform_hlds__intermod__ArgModes_24 = transform_hlds__intermod__ArgModes0_22;
#line 1718 "intermod.m"
                transform_hlds__intermod__Detism_25 = transform_hlds__intermod__Detism0_23;
#line 1717 "intermod.m"
              }
#line 1719 "intermod.m"
            else
#line 1720 "intermod.m"
              {
#line 1720 "intermod.m"
                {
#line 1720 "intermod.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_modes\'/6", (MR_String) "attempt to write undeclared mode");
#line 1720 "intermod.m"
                  return;
                }
#line 1720 "intermod.m"
              }
#line 1722 "intermod.m"
            {
#line 1722 "intermod.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__Context_26);
            }
#line 1723 "intermod.m"
            {
#line 1723 "intermod.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &transform_hlds__intermod__Varset_27);
            }
#line 1729 "intermod.m"
            if ((transform_hlds__intermod__PredOrFunc_3 == (MR_Integer) 1))
#line 1725 "intermod.m"
              {
#line 1725 "intermod.m"
                MR_Word transform_hlds__intermod__FuncArgModes_28;
#line 1725 "intermod.m"
                MR_Word transform_hlds__intermod__FuncRetMode_29;
#line 1725 "intermod.m"
                MR_Word transform_hlds__intermod__V_37_37;
#line 1726 "intermod.m"
                MR_Box transform_hlds__intermod__conv1_FuncRetMode_29;

#line 1726 "intermod.m"
                {
#line 1726 "intermod.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__intermod__ArgModes_24, &transform_hlds__intermod__FuncArgModes_28, &transform_hlds__intermod__conv1_FuncRetMode_29);
                }
#line 1726 "intermod.m"
                transform_hlds__intermod__FuncRetMode_29 = ((MR_Word) transform_hlds__intermod__conv1_FuncRetMode_29);
#line 1728 "intermod.m"
                {
#line 1728 "intermod.m"
                  transform_hlds__intermod__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1728 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_37_37, 0) = ((MR_Box) (transform_hlds__intermod__Detism_25));
#line 1728 "intermod.m"
                }
#line 1727 "intermod.m"
                {
#line 1727 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_8_p_0(transform_hlds__intermod__Varset_27, transform_hlds__intermod__SymName_2, transform_hlds__intermod__FuncArgModes_28, transform_hlds__intermod__FuncRetMode_29, transform_hlds__intermod__V_37_37, transform_hlds__intermod__Context_26);
                }
#line 1725 "intermod.m"
              }
#line 1729 "intermod.m"
            else
#line 1730 "intermod.m"
              {
#line 1730 "intermod.m"
                MR_Word transform_hlds__intermod__V_35_35;

#line 1732 "intermod.m"
                {
#line 1732 "intermod.m"
                  transform_hlds__intermod__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1732 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_35_35, 0) = ((MR_Box) (transform_hlds__intermod__Detism_25));
#line 1732 "intermod.m"
                }
#line 1731 "intermod.m"
                {
#line 1731 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_7_p_0(transform_hlds__intermod__Varset_27, transform_hlds__intermod__SymName_2, transform_hlds__intermod__ArgModes_24, transform_hlds__intermod__V_35_35, transform_hlds__intermod__Context_26);
                }
#line 1730 "intermod.m"
              }
#line 1734 "intermod.m"
            /* direct tailcall eliminated */
#line 1734 "intermod.m"
            {
#line 1734 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__4__tmp_copy_4 = transform_hlds__intermod__ProcIds_17;

#line 1734 "intermod.m"
              transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__4__tmp_copy_4;
#line 1734 "intermod.m"
            }
#line 1734 "intermod.m"
            continue;
#line 1709 "intermod.m"
          }
#line 1707 "intermod.m"
      }
#line 1707 "intermod.m"
      break;
#line 1707 "intermod.m"
    }
#line 1704 "intermod.m"
}

#line 1992 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_2(
#line 1992 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1992 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1992 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1992 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1992 "intermod.m"
{
#line 1992 "intermod.m"
  {
#line 1992 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1992 "intermod.m"
    {
#line 1992 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_pragma_type_spec_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1992 "intermod.m"
      return;
    }
#line 1992 "intermod.m"
  }
#line 1992 "intermod.m"
}

#line 1691 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1(
#line 1691 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1691 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1691 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1691 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1691 "intermod.m"
{
#line 1691 "intermod.m"
  {
#line 1691 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1691 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__3_47;

#line 1691 "intermod.m"
    {
#line 1691 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1691__1_3_p_0(((MR_Integer) transform_hlds__intermod__wrapper_arg_1), ((MR_Integer) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv1_HeadVar__3_47);
    }
#line 1691 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__3_47));
#line 1691 "intermod.m"
  }
#line 1691 "intermod.m"
}

#line 1639 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0(
#line 1639 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1639 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1639 "intermod.m"
{
#line 1642 "intermod.m"
  while (MR_TRUE)
#line 1642 "intermod.m"
    {
#line 1642 "intermod.m"
      /* tailcall optimized into a loop */
#line 1642 "intermod.m"
      {
#line 1642 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1642 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1642 "intermod.m"
          {
#line 1642 "intermod.m"
          }
#line 1642 "intermod.m"
        else
#line 1643 "intermod.m"
          {
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo_13;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__Module_14;
#line 1643 "intermod.m"
            MR_String transform_hlds__intermod__Name_15;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_16;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__TVarSet_17;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__ExistQVars_18;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__ArgTypes_19;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__Context_20;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__Purity_21;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__ClassContext_22;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__GoalType_23;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__AppendVarNums_24;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__Procs_28;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__ProcIds_29;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__SortedProcIds_36;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__V_48_48;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__Module_63;
#line 1643 "intermod.m"
            MR_String transform_hlds__intermod__Name_64;
#line 1643 "intermod.m"
            MR_Integer transform_hlds__intermod__Arity_65;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_66;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_67;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_68;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__MarkerList_69;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecInfo_76;
#line 1643 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaMap_77;
#line 1989 "intermod.m"
            MR_Word transform_hlds__intermod__V_82_82;
#line 1989 "intermod.m"
            MR_Word transform_hlds__intermod__V_83_83;
#line 1989 "intermod.m"
            MR_Word transform_hlds__intermod__V_84_84;
#line 1994 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecPragmas_78;

#line 1644 "intermod.m"
            {
#line 1644 "intermod.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__PredId_10, &transform_hlds__intermod__PredInfo_13);
            }
#line 1645 "intermod.m"
            {
#line 1645 "intermod.m"
              transform_hlds__intermod__Module_14 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1646 "intermod.m"
            {
#line 1646 "intermod.m"
              transform_hlds__intermod__Name_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1647 "intermod.m"
            {
#line 1647 "intermod.m"
              transform_hlds__intermod__PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1648 "intermod.m"
            {
#line 1648 "intermod.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__TVarSet_17, &transform_hlds__intermod__ExistQVars_18, &transform_hlds__intermod__ArgTypes_19);
            }
#line 1649 "intermod.m"
            {
#line 1649 "intermod.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Context_20);
            }
#line 1650 "intermod.m"
            {
#line 1650 "intermod.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Purity_21);
            }
#line 1651 "intermod.m"
            {
#line 1651 "intermod.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__ClassContext_22);
            }
#line 1652 "intermod.m"
            {
#line 1652 "intermod.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__GoalType_23);
            }
#line 1660 "intermod.m"
            if ((transform_hlds__intermod__GoalType_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1667 "intermod.m"
              transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1660 "intermod.m"
            else
#line 1660 "intermod.m"
              if ((transform_hlds__intermod__GoalType_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1664 "intermod.m"
                transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 0;
#line 1660 "intermod.m"
              else
#line 1660 "intermod.m"
                if ((transform_hlds__intermod__GoalType_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1659 "intermod.m"
                  transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 0;
#line 1660 "intermod.m"
                else
#line 1660 "intermod.m"
                  if ((transform_hlds__intermod__GoalType_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1673 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1660 "intermod.m"
                  else
#line 1670 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1679 "intermod.m"
            if ((transform_hlds__intermod__PredOrFunc_16 == (MR_Integer) 1))
#line 1680 "intermod.m"
              {
#line 1680 "intermod.m"
                MR_Word transform_hlds__intermod__FuncArgTypes_26;
#line 1680 "intermod.m"
                MR_Word transform_hlds__intermod__FuncRetType_27;
#line 1680 "intermod.m"
                MR_Word transform_hlds__intermod__V_39_39;
#line 1681 "intermod.m"
                MR_Box transform_hlds__intermod__conv0_FuncRetType_27;

#line 1681 "intermod.m"
                {
#line 1681 "intermod.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__intermod__ArgTypes_19, &transform_hlds__intermod__FuncArgTypes_26, &transform_hlds__intermod__conv0_FuncRetType_27);
                }
#line 1681 "intermod.m"
                transform_hlds__intermod__FuncRetType_27 = ((MR_Word) transform_hlds__intermod__conv0_FuncRetType_27);
#line 1682 "intermod.m"
                {
#line 1682 "intermod.m"
                  transform_hlds__intermod__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1682 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_39_39, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1682 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_39_39, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1682 "intermod.m"
                }
#line 1682 "intermod.m"
                {
#line 1682 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_func_type_12_p_0(transform_hlds__intermod__TVarSet_17, transform_hlds__intermod__ExistQVars_18, transform_hlds__intermod__V_39_39, transform_hlds__intermod__FuncArgTypes_26, transform_hlds__intermod__FuncRetType_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__intermod__Purity_21, transform_hlds__intermod__ClassContext_22, transform_hlds__intermod__Context_20, transform_hlds__intermod__AppendVarNums_24);
                }
#line 1680 "intermod.m"
              }
#line 1679 "intermod.m"
            else
#line 1676 "intermod.m"
              {
#line 1676 "intermod.m"
                MR_Word transform_hlds__intermod__V_42_42;

#line 1677 "intermod.m"
                {
#line 1677 "intermod.m"
                  transform_hlds__intermod__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1677 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1677 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1677 "intermod.m"
                }
#line 1677 "intermod.m"
                {
#line 1677 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_pred_type_11_p_0(transform_hlds__intermod__TVarSet_17, transform_hlds__intermod__ExistQVars_18, transform_hlds__intermod__V_42_42, transform_hlds__intermod__ArgTypes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__intermod__Purity_21, transform_hlds__intermod__ClassContext_22, transform_hlds__intermod__Context_20, transform_hlds__intermod__AppendVarNums_24);
                }
#line 1676 "intermod.m"
              }
#line 1686 "intermod.m"
            {
#line 1686 "intermod.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Procs_28);
            }
#line 1687 "intermod.m"
            {
#line 1687 "intermod.m"
              transform_hlds__intermod__ProcIds_29 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1697 "intermod.m"
            {
#line 1697 "intermod.m"
              mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[16], transform_hlds__intermod__ProcIds_29, &transform_hlds__intermod__SortedProcIds_36);
            }
#line 1698 "intermod.m"
            {
#line 1698 "intermod.m"
              transform_hlds__intermod__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1698 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1698 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1698 "intermod.m"
            }
#line 1698 "intermod.m"
            {
#line 1698 "intermod.m"
              transform_hlds__intermod__intermod_write_pred_modes_6_p_0(transform_hlds__intermod__Procs_28, transform_hlds__intermod__V_48_48, transform_hlds__intermod__PredOrFunc_16, transform_hlds__intermod__SortedProcIds_36);
            }
#line 1959 "intermod.m"
            {
#line 1959 "intermod.m"
              transform_hlds__intermod__Module_63 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1960 "intermod.m"
            {
#line 1960 "intermod.m"
              transform_hlds__intermod__Name_64 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1961 "intermod.m"
            {
#line 1961 "intermod.m"
              transform_hlds__intermod__Arity_65 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1962 "intermod.m"
            {
#line 1962 "intermod.m"
              transform_hlds__intermod__PredOrFunc_66 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1963 "intermod.m"
            {
#line 1963 "intermod.m"
              transform_hlds__intermod__SymName_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_67, 0) = ((MR_Box) (transform_hlds__intermod__Module_63));
#line 1963 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_67, 1) = ((MR_Box) (transform_hlds__intermod__Name_64));
#line 1963 "intermod.m"
            }
#line 1964 "intermod.m"
            {
#line 1964 "intermod.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Markers_68);
            }
#line 1965 "intermod.m"
            {
#line 1965 "intermod.m"
              hlds__hlds_pred__markers_to_marker_list_2_p_0(transform_hlds__intermod__Markers_68, &transform_hlds__intermod__MarkerList_69);
            }
#line 1966 "intermod.m"
            {
#line 1966 "intermod.m"
              transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(transform_hlds__intermod__SymName_67, transform_hlds__intermod__Arity_65, transform_hlds__intermod__MarkerList_69, transform_hlds__intermod__PredOrFunc_66);
            }
#line 1988 "intermod.m"
            {
#line 1988 "intermod.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__TypeSpecInfo_76);
            }
#line 1989 "intermod.m"
            transform_hlds__intermod__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 0)));
#line 1989 "intermod.m"
            transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 1)));
#line 1989 "intermod.m"
            transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 2)));
#line 1989 "intermod.m"
            transform_hlds__intermod__PragmaMap_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 3)));
#line 1990 "intermod.m"
            {
#line 1990 "intermod.m"
              transform_hlds__intermod__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, transform_hlds__intermod__PragmaMap_77, ((MR_Box) (transform_hlds__intermod__PredId_10)), &transform_hlds__intermod__TypeSpecPragmas_78);
            }
#line 1994 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1991 "intermod.m"
              {
#line 1992 "intermod.m"
                MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_IO_51_51;

#line 1992 "intermod.m"
                {
#line 1992 "intermod.m"
                  mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_9[0], transform_hlds__intermod__TypeSpecPragmas_78, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv2_STATE_VARIABLE_IO_51_51);
                }
#line 1991 "intermod.m"
              }
#line 1994 "intermod.m"
            else
#line 1992 "intermod.m"
              {
#line 1992 "intermod.m"
              }
#line 1702 "intermod.m"
            /* direct tailcall eliminated */
#line 1702 "intermod.m"
            {
#line 1702 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__2__tmp_copy_2 = transform_hlds__intermod__PredIds_11;

#line 1702 "intermod.m"
              transform_hlds__intermod__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2__tmp_copy_2;
#line 1702 "intermod.m"
            }
#line 1702 "intermod.m"
            continue;
#line 1643 "intermod.m"
          }
#line 1642 "intermod.m"
      }
#line 1642 "intermod.m"
      break;
#line 1642 "intermod.m"
    }
#line 1639 "intermod.m"
}

#line 1623 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_4_p_0(
#line 1623 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1623 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1623 "intermod.m"
{
#line 1626 "intermod.m"
  {
#line 1626 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 0)));
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 2)));
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 3)));
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 4)));
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 5)));
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__Body_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 6)));
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 8)));
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__ClassName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_6, (MR_Integer) 0)));
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__ItemInstance_21;
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__Item_22;
#line 1626 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_23;
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 1)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 7)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 9)));
#line 1629 "intermod.m"
    MR_Integer transform_hlds__intermod__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_6, (MR_Integer) 1)));
#line 1633 "intermod.m"
    MR_String transform_hlds__intermod__V_28_28;
#line 1633 "intermod.m"
    MR_String transform_hlds__intermod__V_29_29;
#line 1633 "intermod.m"
    MR_Word transform_hlds__intermod__V_30_30;
#line 1633 "intermod.m"
    MR_Word transform_hlds__intermod__V_31_31;

#line 1630 "intermod.m"
    {
#line 1630 "intermod.m"
      transform_hlds__intermod__ItemInstance_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1630 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 0) = ((MR_Box) (transform_hlds__intermod__Constraints_12));
#line 1630 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 1) = ((MR_Box) (transform_hlds__intermod__ClassName_19));
#line 1630 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 2) = ((MR_Box) (transform_hlds__intermod__Types_13));
#line 1630 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 3) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_14));
#line 1630 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 4) = ((MR_Box) (transform_hlds__intermod__Body_15));
#line 1630 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 5) = ((MR_Box) (transform_hlds__intermod__TVarSet_17));
#line 1630 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 6) = ((MR_Box) (transform_hlds__intermod__ModuleName_9));
#line 1630 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 7) = ((MR_Box) (transform_hlds__intermod__Context_11));
#line 1630 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 8) = ((MR_Box) ((MR_Integer) -1));
#line 1630 "intermod.m"
    }
#line 1632 "intermod.m"
    {
#line 1632 "intermod.m"
      transform_hlds__intermod__Item_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1632 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1632 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_22, 1) = ((MR_Box) (transform_hlds__intermod__ItemInstance_21));
#line 1632 "intermod.m"
    }
#line 1633 "intermod.m"
    transform_hlds__intermod__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 0)));
#line 1633 "intermod.m"
    transform_hlds__intermod__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 1)));
#line 1633 "intermod.m"
    transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 2)));
#line 1633 "intermod.m"
    transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 3)));
#line 1633 "intermod.m"
    transform_hlds__intermod__MercInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 4)));
#line 1634 "intermod.m"
    {
#line 1634 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_23, transform_hlds__intermod__Item_22);
#line 1634 "intermod.m"
      return;
    }
#line 1626 "intermod.m"
  }
#line 1623 "intermod.m"
}

#line 1621 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0_1(
#line 1621 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1621 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1621 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1621 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1621 "intermod.m"
{
#line 1621 "intermod.m"
  {
#line 1621 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1621 "intermod.m"
    {
#line 1621 "intermod.m"
      transform_hlds__intermod__intermod_write_instance_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1621 "intermod.m"
      return;
    }
#line 1621 "intermod.m"
  }
#line 1621 "intermod.m"
}

#line 1617 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0(
#line 1617 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1617 "intermod.m"
  MR_Word transform_hlds__intermod__Instances_6)
#line 1617 "intermod.m"
{
#line 1620 "intermod.m"
  {
#line 1620 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1620 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 1621 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_9;

#line 1621 "intermod.m"
    {
#line 1621 "intermod.m"
      transform_hlds__intermod__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1621 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[4]));
#line 1621 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_instances_4_p_0_1));
#line 1621 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1621 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1621 "intermod.m"
    }
#line 1621 "intermod.m"
    {
#line 1621 "intermod.m"
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__intermod_scalar_common_2[4], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_10_10, transform_hlds__intermod__Instances_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_9);
    }
#line 1620 "intermod.m"
  }
#line 1617 "intermod.m"
}

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3(
#line 1612 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1612 "intermod.m"
{
#line 1612 "intermod.m"
  {
#line 1612 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1612 "intermod.m"
    *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9));
#line 1612 "intermod.m"
    {
#line 1612 "intermod.m"
      ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr);
#line 1612 "intermod.m"
      return;
    }
#line 1612 "intermod.m"
  }
#line 1612 "intermod.m"
}

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4(
#line 1612 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1612 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1612 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1612 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1612 "intermod.m"
{
#line 1612 "intermod.m"
  {
#line 1612 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s transform_hlds__intermod__env;

#line 1612 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1 = transform_hlds__intermod__wrapper_arg_1;
#line 1612 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont = transform_hlds__intermod__cont;
#line 1612 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1612 "intermod.m"
    {
#line 1612 "intermod.m"
      MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1612 "intermod.m"
      {
#line 1612 "intermod.m"
        transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), &(transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9, transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3, &transform_hlds__intermod__env);
      }
#line 1612 "intermod.m"
    }
#line 1612 "intermod.m"
  }
#line 1612 "intermod.m"
}

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
#line 1612 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1612 "intermod.m"
{
#line 1612 "intermod.m"
  {
#line 1612 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1612 "intermod.m"
    *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9));
#line 1612 "intermod.m"
    {
#line 1612 "intermod.m"
      ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr);
#line 1612 "intermod.m"
      return;
    }
#line 1612 "intermod.m"
  }
#line 1612 "intermod.m"
}

#line 1612 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2(
#line 1612 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1612 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1612 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1612 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1612 "intermod.m"
{
#line 1612 "intermod.m"
  {
#line 1612 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s transform_hlds__intermod__env;

#line 1612 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1 = transform_hlds__intermod__wrapper_arg_1;
#line 1612 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont = transform_hlds__intermod__cont;
#line 1612 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1612 "intermod.m"
    {
#line 1612 "intermod.m"
      MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1612 "intermod.m"
      {
#line 1612 "intermod.m"
        transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1612__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), &(transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9, transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1, &transform_hlds__intermod__env);
      }
#line 1612 "intermod.m"
    }
#line 1612 "intermod.m"
  }
#line 1612 "intermod.m"
}

#line 1601 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
#line 1601 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1601 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1601 "intermod.m"
{
#line 1604 "intermod.m"
  {
#line 1604 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1604 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__3_3;
#line 1604 "intermod.m"
    MR_Word transform_hlds__intermod__Domain0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1604 "intermod.m"
    MR_Word transform_hlds__intermod__Range0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1604 "intermod.m"
    MR_Word transform_hlds__intermod__Domain_7;
#line 1604 "intermod.m"
    MR_Word transform_hlds__intermod__Range_8;
#line 1604 "intermod.m"
    MR_Word transform_hlds__intermod__P_11;
#line 1604 "intermod.m"
    MR_Word transform_hlds__intermod__P_21;

#line 1612 "intermod.m"
    {
#line 1612 "intermod.m"
      transform_hlds__intermod__P_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3]));
#line 1612 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2));
#line 1612 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1612 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 3) = ((MR_Box) (transform_hlds__intermod__TVars_4));
#line 1612 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 4) = ((MR_Box) (transform_hlds__intermod__Domain0_5));
#line 1612 "intermod.m"
    }
#line 1611 "intermod.m"
    {
#line 1611 "intermod.m"
      transform_hlds__intermod__Domain_7 = mercury__solutions__solutions_1_f_1((MR_Word) &transform_hlds__intermod_scalar_common_1[5], transform_hlds__intermod__P_11);
    }
#line 1612 "intermod.m"
    {
#line 1612 "intermod.m"
      transform_hlds__intermod__P_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3]));
#line 1612 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4));
#line 1612 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1612 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 3) = ((MR_Box) (transform_hlds__intermod__TVars_4));
#line 1612 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 4) = ((MR_Box) (transform_hlds__intermod__Range0_6));
#line 1612 "intermod.m"
    }
#line 1611 "intermod.m"
    {
#line 1611 "intermod.m"
      transform_hlds__intermod__Range_8 = mercury__solutions__solutions_1_f_1((MR_Word) &transform_hlds__intermod_scalar_common_1[5], transform_hlds__intermod__P_21);
    }
#line 1604 "intermod.m"
    {
#line 1604 "intermod.m"
      transform_hlds__intermod__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1604 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__intermod__Domain_7));
#line 1604 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__intermod__Range_8));
#line 1604 "intermod.m"
    }
#line 1604 "intermod.m"
    return transform_hlds__intermod__HeadVar__3_3;
#line 1604 "intermod.m"
  }
#line 1601 "intermod.m"
}

#line 1591 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0_1(
#line 1591 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1591 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 1591 "intermod.m"
{
#line 1591 "intermod.m"
  {
#line 1591 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 1591 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1591 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__3_3;

#line 1591 "intermod.m"
    {
#line 1591 "intermod.m"
      transform_hlds__intermod__conv0_HeadVar__3_3 = transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 1591 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__3_3));
#line 1591 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 1591 "intermod.m"
  }
#line 1591 "intermod.m"
}

#line 1579 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0(
#line 1579 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1579 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1579 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_9,
#line 1579 "intermod.m"
  MR_Word transform_hlds__intermod__ClassDefn_10)
#line 1579 "intermod.m"
{
#line 1582 "intermod.m"
  {
#line 1582 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1582 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 0)));
#line 1582 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 1)));
#line 1582 "intermod.m"
    MR_Word transform_hlds__intermod__HLDSFunDeps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 2)));
#line 1582 "intermod.m"
    MR_Word transform_hlds__intermod__TVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 4)));
#line 1582 "intermod.m"
    MR_Word transform_hlds__intermod__Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 6)));
#line 1582 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 8)));
#line 1582 "intermod.m"
    MR_Word transform_hlds__intermod__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 9)));
#line 1582 "intermod.m"
    MR_Word transform_hlds__intermod__QualifiedClassName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_9, (MR_Integer) 0)));
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod___Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 3)));
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod___Kinds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 5)));
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod___HLDSClassInterface_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 7)));
#line 1586 "intermod.m"
    MR_Integer transform_hlds__intermod__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_9, (MR_Integer) 1)));
#line 1588 "intermod.m"
    MR_Word transform_hlds__intermod__V_42_42;
#line 1588 "intermod.m"
    MR_String transform_hlds__intermod__V_24_24;

#line 1588 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__QualifiedClassName_22)) == (MR_mktag((MR_Integer) 1)));
#line 1588 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1588 "intermod.m"
      {
#line 1588 "intermod.m"
        transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__QualifiedClassName_22, (MR_Integer) 0)));
#line 1588 "intermod.m"
        transform_hlds__intermod__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__QualifiedClassName_22, (MR_Integer) 1)));
#line 1588 "intermod.m"
        {
#line 1588 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_42_42);
        }
#line 1588 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1589 "intermod.m"
          {
#line 1589 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_12);
          }
#line 1588 "intermod.m"
      }
#line 1597 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1591 "intermod.m"
      {
#line 1591 "intermod.m"
        MR_Word transform_hlds__intermod__FunDeps_25;
#line 1591 "intermod.m"
        MR_Word transform_hlds__intermod__ItemTypeClass_26;
#line 1591 "intermod.m"
        MR_Word transform_hlds__intermod__Item_27;
#line 1591 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_28;
#line 1591 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 1595 "intermod.m"
        MR_String transform_hlds__intermod__V_34_34;
#line 1595 "intermod.m"
        MR_String transform_hlds__intermod__V_35_35;
#line 1595 "intermod.m"
        MR_Word transform_hlds__intermod__V_36_36;
#line 1595 "intermod.m"
        MR_Word transform_hlds__intermod__V_37_37;

#line 1591 "intermod.m"
        {
#line 1591 "intermod.m"
          transform_hlds__intermod__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1591 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2]));
#line 1591 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_class_6_p_0_1));
#line 1591 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1591 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 3) = ((MR_Box) (transform_hlds__intermod__TVars_16));
#line 1591 "intermod.m"
        }
#line 1591 "intermod.m"
        {
#line 1591 "intermod.m"
          transform_hlds__intermod__FunDeps_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, transform_hlds__intermod__V_31_31, transform_hlds__intermod__HLDSFunDeps_14);
        }
#line 1592 "intermod.m"
        {
#line 1592 "intermod.m"
          transform_hlds__intermod__ItemTypeClass_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 0) = ((MR_Box) (transform_hlds__intermod__Constraints_13));
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 1) = ((MR_Box) (transform_hlds__intermod__FunDeps_25));
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 2) = ((MR_Box) (transform_hlds__intermod__QualifiedClassName_22));
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 3) = ((MR_Box) (transform_hlds__intermod__TVars_16));
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 4) = ((MR_Box) (transform_hlds__intermod__Interface_18));
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 5) = ((MR_Box) (transform_hlds__intermod__TVarSet_20));
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 6) = ((MR_Box) (transform_hlds__intermod__Context_21));
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 7) = ((MR_Box) ((MR_Integer) -1));
#line 1592 "intermod.m"
        }
#line 1594 "intermod.m"
        {
#line 1594 "intermod.m"
          transform_hlds__intermod__Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1594 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1594 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_27, 1) = ((MR_Box) (transform_hlds__intermod__ItemTypeClass_26));
#line 1594 "intermod.m"
        }
#line 1595 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1595 "intermod.m"
        transform_hlds__intermod__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1595 "intermod.m"
        transform_hlds__intermod__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1595 "intermod.m"
        transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1595 "intermod.m"
        transform_hlds__intermod__MercInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1596 "intermod.m"
        {
#line 1596 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_28, transform_hlds__intermod__Item_27);
#line 1596 "intermod.m"
          return;
        }
#line 1591 "intermod.m"
      }
#line 1597 "intermod.m"
    else
#line 1596 "intermod.m"
      {
#line 1596 "intermod.m"
      }
#line 1582 "intermod.m"
  }
#line 1579 "intermod.m"
}

#line 1577 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0_1(
#line 1577 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1577 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1577 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1577 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1577 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1577 "intermod.m"
{
#line 1577 "intermod.m"
  {
#line 1577 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1577 "intermod.m"
    {
#line 1577 "intermod.m"
      transform_hlds__intermod__intermod_write_class_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1577 "intermod.m"
      return;
    }
#line 1577 "intermod.m"
  }
#line 1577 "intermod.m"
}

#line 1571 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0(
#line 1571 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1571 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1571 "intermod.m"
{
#line 1574 "intermod.m"
  {
#line 1574 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1574 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1574 "intermod.m"
    MR_Word transform_hlds__intermod__Classes_9;
#line 1574 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12;
#line 1577 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_11;

#line 1575 "intermod.m"
    {
#line 1575 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1576 "intermod.m"
    {
#line 1576 "intermod.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Classes_9);
    }
#line 1577 "intermod.m"
    {
#line 1577 "intermod.m"
      transform_hlds__intermod__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1577 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[2]));
#line 1577 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_classes_4_p_0_1));
#line 1577 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1577 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1577 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1577 "intermod.m"
    }
#line 1577 "intermod.m"
    {
#line 1577 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_12_12, transform_hlds__intermod__Classes_9, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_11);
    }
#line 1574 "intermod.m"
  }
#line 1571 "intermod.m"
}

#line 1545 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_6_p_0(
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__InstId_9,
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__InstDefn_10)
#line 1545 "intermod.m"
{
#line 1548 "intermod.m"
  {
#line 1548 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstId_9, (MR_Integer) 0)));
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__Varset_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 0)));
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 1)));
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__Body_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 2)));
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 3)));
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 4)));
#line 1549 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstId_9, (MR_Integer) 1)));
#line 1552 "intermod.m"
    MR_Word transform_hlds__intermod__V_34_34;
#line 1552 "intermod.m"
    MR_String transform_hlds__intermod__V_19_19;

#line 1552 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1552 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1552 "intermod.m"
      {
#line 1552 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 0)));
#line 1552 "intermod.m"
        transform_hlds__intermod__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 1)));
#line 1552 "intermod.m"
        {
#line 1552 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_34_34);
        }
#line 1552 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1553 "intermod.m"
          {
#line 1553 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_18);
          }
#line 1552 "intermod.m"
      }
#line 1567 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1561 "intermod.m"
      {
#line 1561 "intermod.m"
        MR_Word transform_hlds__intermod__InstBody_21;
#line 1561 "intermod.m"
        MR_Word transform_hlds__intermod__ItemInstDefn_22;
#line 1561 "intermod.m"
        MR_Word transform_hlds__intermod__Item_23;
#line 1561 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_24;
#line 1565 "intermod.m"
        MR_String transform_hlds__intermod__V_30_30;
#line 1565 "intermod.m"
        MR_String transform_hlds__intermod__V_31_31;
#line 1565 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 1565 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;

#line 1558 "intermod.m"
        if ((transform_hlds__intermod__Body_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1560 "intermod.m"
          transform_hlds__intermod__InstBody_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1558 "intermod.m"
        else
#line 1556 "intermod.m"
          {
#line 1556 "intermod.m"
            MR_Word transform_hlds__intermod__Inst2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_16, (MR_Integer) 0)));

#line 1557 "intermod.m"
            {
#line 1557 "intermod.m"
              transform_hlds__intermod__InstBody_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__InstBody_21, 0) = ((MR_Box) (transform_hlds__intermod__Inst2_20));
#line 1557 "intermod.m"
            }
#line 1556 "intermod.m"
          }
#line 1562 "intermod.m"
        {
#line 1562 "intermod.m"
          transform_hlds__intermod__ItemInstDefn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1562 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 0) = ((MR_Box) (transform_hlds__intermod__Varset_14));
#line 1562 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 1) = ((MR_Box) (transform_hlds__intermod__SymName_12));
#line 1562 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 2) = ((MR_Box) (transform_hlds__intermod__Args_15));
#line 1562 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 3) = ((MR_Box) (transform_hlds__intermod__InstBody_21));
#line 1562 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1562 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 5) = ((MR_Box) (transform_hlds__intermod__Context_17));
#line 1562 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1562 "intermod.m"
        }
#line 1564 "intermod.m"
        {
#line 1564 "intermod.m"
          transform_hlds__intermod__Item_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1564 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1564 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_23, 1) = ((MR_Box) (transform_hlds__intermod__ItemInstDefn_22));
#line 1564 "intermod.m"
        }
#line 1565 "intermod.m"
        transform_hlds__intermod__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1565 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1565 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1565 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1565 "intermod.m"
        transform_hlds__intermod__MercInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1566 "intermod.m"
        {
#line 1566 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_24, transform_hlds__intermod__Item_23);
#line 1566 "intermod.m"
          return;
        }
#line 1561 "intermod.m"
      }
#line 1567 "intermod.m"
    else
#line 1566 "intermod.m"
      {
#line 1566 "intermod.m"
      }
#line 1548 "intermod.m"
  }
#line 1545 "intermod.m"
}

#line 1543 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0_1(
#line 1543 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1543 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1543 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1543 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1543 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1543 "intermod.m"
{
#line 1543 "intermod.m"
  {
#line 1543 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1543 "intermod.m"
    {
#line 1543 "intermod.m"
      transform_hlds__intermod__intermod_write_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1543 "intermod.m"
      return;
    }
#line 1543 "intermod.m"
  }
#line 1543 "intermod.m"
}

#line 1535 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0(
#line 1535 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1535 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1535 "intermod.m"
{
#line 1538 "intermod.m"
  {
#line 1538 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1538 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1538 "intermod.m"
    MR_Word transform_hlds__intermod__Insts_9;
#line 1538 "intermod.m"
    MR_Word transform_hlds__intermod__UserInsts_10;
#line 1538 "intermod.m"
    MR_Word transform_hlds__intermod__InstDefns_11;
#line 1538 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14;
#line 1543 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_13;

#line 1539 "intermod.m"
    {
#line 1539 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1540 "intermod.m"
    {
#line 1540 "intermod.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Insts_9);
    }
#line 1541 "intermod.m"
    {
#line 1541 "intermod.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(transform_hlds__intermod__Insts_9, &transform_hlds__intermod__UserInsts_10);
    }
#line 1542 "intermod.m"
    {
#line 1542 "intermod.m"
      hlds__hlds_data__user_inst_table_get_inst_defns_2_p_0(transform_hlds__intermod__UserInsts_10, &transform_hlds__intermod__InstDefns_11);
    }
#line 1543 "intermod.m"
    {
#line 1543 "intermod.m"
      transform_hlds__intermod__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1543 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_14_14, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[1]));
#line 1543 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_14_14, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_insts_4_p_0_1));
#line 1543 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1543 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_14_14, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1543 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_14_14, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1543 "intermod.m"
    }
#line 1543 "intermod.m"
    {
#line 1543 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_14_14, transform_hlds__intermod__InstDefns_11, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_13);
    }
#line 1538 "intermod.m"
  }
#line 1535 "intermod.m"
}

#line 1515 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_6_p_0(
#line 1515 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1515 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1515 "intermod.m"
  MR_Word transform_hlds__intermod__ModeId_9,
#line 1515 "intermod.m"
  MR_Word transform_hlds__intermod__ModeDefn_10)
#line 1515 "intermod.m"
{
#line 1518 "intermod.m"
  {
#line 1518 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1518 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeId_9, (MR_Integer) 0)));
#line 1518 "intermod.m"
    MR_Word transform_hlds__intermod__Varset_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 0)));
#line 1518 "intermod.m"
    MR_Word transform_hlds__intermod__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 1)));
#line 1518 "intermod.m"
    MR_Word transform_hlds__intermod__Mode_16;
#line 1518 "intermod.m"
    MR_Word transform_hlds__intermod__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 3)));
#line 1518 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 4)));
#line 1518 "intermod.m"
    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 2)));
#line 1519 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeId_9, (MR_Integer) 1)));
#line 1523 "intermod.m"
    MR_Word transform_hlds__intermod__V_34_34;
#line 1523 "intermod.m"
    MR_String transform_hlds__intermod__V_19_19;

#line 1520 "intermod.m"
    transform_hlds__intermod__Mode_16 = (MR_Word) transform_hlds__intermod__V_25_25;
#line 1523 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1523 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1523 "intermod.m"
      {
#line 1523 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 0)));
#line 1523 "intermod.m"
        transform_hlds__intermod__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 1)));
#line 1523 "intermod.m"
        {
#line 1523 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_34_34);
        }
#line 1523 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1524 "intermod.m"
          {
#line 1524 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_18);
          }
#line 1523 "intermod.m"
      }
#line 1531 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1527 "intermod.m"
      {
#line 1527 "intermod.m"
        MR_Word transform_hlds__intermod__ItemModeDefn_20;
#line 1527 "intermod.m"
        MR_Word transform_hlds__intermod__Item_21;
#line 1527 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_22;
#line 1527 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = (MR_Word) transform_hlds__intermod__Mode_16;
#line 1529 "intermod.m"
        MR_String transform_hlds__intermod__V_30_30;
#line 1529 "intermod.m"
        MR_String transform_hlds__intermod__V_31_31;
#line 1529 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 1529 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;

#line 1526 "intermod.m"
        {
#line 1526 "intermod.m"
          transform_hlds__intermod__ItemModeDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1526 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 0) = ((MR_Box) (transform_hlds__intermod__Varset_14));
#line 1526 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 1) = ((MR_Box) (transform_hlds__intermod__SymName_12));
#line 1526 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 2) = ((MR_Box) (transform_hlds__intermod__Args_15));
#line 1526 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 3) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 1526 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1526 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 5) = ((MR_Box) (transform_hlds__intermod__Context_17));
#line 1526 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1526 "intermod.m"
        }
#line 1528 "intermod.m"
        {
#line 1528 "intermod.m"
          transform_hlds__intermod__Item_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1528 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_21, 1) = ((MR_Box) (transform_hlds__intermod__ItemModeDefn_20));
#line 1528 "intermod.m"
        }
#line 1529 "intermod.m"
        transform_hlds__intermod__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1529 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1529 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1529 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1529 "intermod.m"
        transform_hlds__intermod__MercInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1530 "intermod.m"
        {
#line 1530 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_22, transform_hlds__intermod__Item_21);
#line 1530 "intermod.m"
          return;
        }
#line 1527 "intermod.m"
      }
#line 1531 "intermod.m"
    else
#line 1530 "intermod.m"
      {
#line 1530 "intermod.m"
      }
#line 1518 "intermod.m"
  }
#line 1515 "intermod.m"
}

#line 1513 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0_1(
#line 1513 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1513 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1513 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1513 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1513 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1513 "intermod.m"
{
#line 1513 "intermod.m"
  {
#line 1513 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1513 "intermod.m"
    {
#line 1513 "intermod.m"
      transform_hlds__intermod__intermod_write_mode_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1513 "intermod.m"
      return;
    }
#line 1513 "intermod.m"
  }
#line 1513 "intermod.m"
}

#line 1506 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0(
#line 1506 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1506 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1506 "intermod.m"
{
#line 1509 "intermod.m"
  {
#line 1509 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1509 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1509 "intermod.m"
    MR_Word transform_hlds__intermod__Modes_9;
#line 1509 "intermod.m"
    MR_Word transform_hlds__intermod__ModeDefns_10;
#line 1509 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13;
#line 1513 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12;

#line 1510 "intermod.m"
    {
#line 1510 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1511 "intermod.m"
    {
#line 1511 "intermod.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Modes_9);
    }
#line 1512 "intermod.m"
    {
#line 1512 "intermod.m"
      hlds__hlds_data__mode_table_get_mode_defns_2_p_0(transform_hlds__intermod__Modes_9, &transform_hlds__intermod__ModeDefns_10);
    }
#line 1513 "intermod.m"
    {
#line 1513 "intermod.m"
      transform_hlds__intermod__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[0]));
#line 1513 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_modes_4_p_0_1));
#line 1513 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1513 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1513 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1513 "intermod.m"
    }
#line 1513 "intermod.m"
    {
#line 1513 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_13_13, transform_hlds__intermod__ModeDefns_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12);
    }
#line 1509 "intermod.m"
  }
#line 1506 "intermod.m"
}

#line 1489 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(
#line 1489 "intermod.m"
  MR_Word transform_hlds__intermod__ConsId_5,
#line 1489 "intermod.m"
  MR_Word transform_hlds__intermod__ConsTag_6,
#line 1489 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Values_0_14,
#line 1489 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Values_15)
#line 1489 "intermod.m"
{
#line 1493 "intermod.m"
  {
#line 1493 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1493 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_10;
#line 1493 "intermod.m"
    MR_String transform_hlds__intermod__ForeignTag_13;
#line 1493 "intermod.m"
    MR_Word transform_hlds__intermod__V_24_24;
#line 1496 "intermod.m"
    MR_Word transform_hlds__intermod__SymName0_8;
#line 1494 "intermod.m"
    MR_Integer transform_hlds__intermod__V_16_16;
#line 1494 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 1501 "intermod.m"
    MR_String transform_hlds__intermod__ForeignTag0_12;
#line 1499 "intermod.m"
    MR_Word transform_hlds__intermod___ForeignLang_11;

#line 1494 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1494 "intermod.m"
      {
#line 1494 "intermod.m"
        transform_hlds__intermod__SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 1)));
#line 1494 "intermod.m"
        transform_hlds__intermod__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 2)));
#line 1494 "intermod.m"
        transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 3)));
#line 1494 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_16_16 == (MR_Integer) 0);
#line 1494 "intermod.m"
      }
#line 1496 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1495 "intermod.m"
      transform_hlds__intermod__SymName_10 = transform_hlds__intermod__SymName0_8;
#line 1496 "intermod.m"
    else
#line 1497 "intermod.m"
      {
#line 1497 "intermod.m"
        {
#line 1497 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/4", (MR_String) "expected enumeration constant");
#line 1497 "intermod.m"
          return;
        }
#line 1497 "intermod.m"
      }
#line 1499 "intermod.m"
    transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ConsTag_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1499 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1499 "intermod.m"
      {
#line 1499 "intermod.m"
        transform_hlds__intermod___ForeignLang_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 1)));
#line 1499 "intermod.m"
        transform_hlds__intermod__ForeignTag0_12 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 2)));
#line 1500 "intermod.m"
        transform_hlds__intermod__ForeignTag_13 = transform_hlds__intermod__ForeignTag0_12;
#line 1499 "intermod.m"
      }
#line 1499 "intermod.m"
    else
#line 1502 "intermod.m"
      {
#line 1502 "intermod.m"
        {
#line 1502 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/4", (MR_String) "expected foreign tag");
#line 1502 "intermod.m"
          return;
        }
#line 1502 "intermod.m"
      }
#line 1504 "intermod.m"
    {
#line 1504 "intermod.m"
      transform_hlds__intermod__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_24_24, 0) = ((MR_Box) (transform_hlds__intermod__SymName_10));
#line 1504 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_24_24, 1) = ((MR_Box) (transform_hlds__intermod__ForeignTag_13));
#line 1504 "intermod.m"
    }
#line 1504 "intermod.m"
    {
#line 1504 "intermod.m"
      MR_Word base;
#line 1504 "intermod.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "intermod.m"
      *transform_hlds__intermod__STATE_VARIABLE_Values_15 = base;
#line 1504 "intermod.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_24_24));
#line 1504 "intermod.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Values_0_14));
#line 1504 "intermod.m"
    }
#line 1493 "intermod.m"
  }
#line 1489 "intermod.m"
}

#line 1478 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0_1(
#line 1478 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1478 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1478 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1478 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1478 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1478 "intermod.m"
{
#line 1478 "intermod.m"
  {
#line 1478 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1478 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15;

#line 1478 "intermod.m"
    {
#line 1478 "intermod.m"
      transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15);
    }
#line 1478 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15));
#line 1478 "intermod.m"
  }
#line 1478 "intermod.m"
}

#line 1354 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0(
#line 1354 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1354 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1354 "intermod.m"
{
#line 1357 "intermod.m"
  {
#line 1357 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__VarSet_9;
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__Args_10;
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__Body_11;
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__Context_12;
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__Name_13;
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__TypeBody_24;
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__MainItemTypeDefn_29;
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__MainItem_30;
#line 1357 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_31;
#line 1362 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_14;
#line 1385 "intermod.m"
    MR_String transform_hlds__intermod__V_128_128;
#line 1385 "intermod.m"
    MR_String transform_hlds__intermod__V_129_129;
#line 1385 "intermod.m"
    MR_Word transform_hlds__intermod__V_130_130;
#line 1385 "intermod.m"
    MR_Word transform_hlds__intermod__V_131_131;
#line 1459 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL_33;
#line 1459 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC_34;
#line 1459 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava_35;
#line 1459 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp_36;
#line 1459 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang_37;
#line 1390 "intermod.m"
    MR_Word transform_hlds__intermod__ForeignTypeBody_32;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__ReservedTag_68;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__V_140_140;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__V_141_141;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__V_142_142;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__V_143_143;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__V_144_144;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__V_145_145;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__V_146_146;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__V_147_147;
#line 1485 "intermod.m"
    MR_Word transform_hlds__intermod__ConsTagVals_72;
#line 1485 "intermod.m"
    MR_Word transform_hlds__intermod__Lang_80;
#line 1475 "intermod.m"
    MR_Word transform_hlds__intermod__DuTypeKind_74;
#line 1475 "intermod.m"
    MR_Word transform_hlds__intermod__V_71_71;
#line 1475 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73;
#line 1475 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75;
#line 1475 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76;
#line 1475 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77;
#line 1475 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78;
#line 1475 "intermod.m"
    MR_Word transform_hlds__intermod__V_79_79;

#line 1358 "intermod.m"
    {
#line 1358 "intermod.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__VarSet_9);
    }
#line 1359 "intermod.m"
    {
#line 1359 "intermod.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Args_10);
    }
#line 1360 "intermod.m"
    {
#line 1360 "intermod.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Body_11);
    }
#line 1361 "intermod.m"
    {
#line 1361 "intermod.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Context_12);
    }
#line 1362 "intermod.m"
    transform_hlds__intermod__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 0)));
#line 1362 "intermod.m"
    transform_hlds__intermod___Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 1)));
#line 1369 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1))))
#line 1366 "intermod.m"
      {
#line 1366 "intermod.m"
        MR_Word transform_hlds__intermod__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1366 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeUserEqComp_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1366 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeDirectArgCtors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1364 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1364 "intermod.m"
        MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1364 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1364 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1364 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1364 "intermod.m"
        MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));

#line 1367 "intermod.m"
        {
#line 1367 "intermod.m"
          transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__Ctors_15));
#line 1367 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_19));
#line 1367 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 2) = ((MR_Box) (transform_hlds__intermod__MaybeDirectArgCtors_20));
#line 1367 "intermod.m"
        }
#line 1366 "intermod.m"
      }
#line 1369 "intermod.m"
    else
#line 1369 "intermod.m"
      if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 2))))
#line 1370 "intermod.m"
        {
#line 1370 "intermod.m"
          MR_Word transform_hlds__intermod__EqvType_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__Body_11, (MR_Integer) 0)));

#line 1371 "intermod.m"
          {
#line 1371 "intermod.m"
            transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1371 "intermod.m"
            MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__EqvType_25));
#line 1371 "intermod.m"
          }
#line 1370 "intermod.m"
        }
#line 1369 "intermod.m"
      else
#line 1369 "intermod.m"
        if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 0))))
#line 1376 "intermod.m"
          {
#line 1377 "intermod.m"
            transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__intermod_scalar_common_7[0]);
#line 1376 "intermod.m"
          }
#line 1369 "intermod.m"
        else
#line 1369 "intermod.m"
          if (((((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1373 "intermod.m"
            {
#line 1373 "intermod.m"
              MR_Word transform_hlds__intermod__Details_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 1)));

#line 1374 "intermod.m"
              {
#line 1374 "intermod.m"
                transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1374 "intermod.m"
                MR_hl_field(MR_mktag(2), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__Details_26));
#line 1374 "intermod.m"
              }
#line 1373 "intermod.m"
            }
#line 1369 "intermod.m"
          else
#line 1379 "intermod.m"
            {
#line 1379 "intermod.m"
              MR_Word transform_hlds__intermod__SolverTypeDetails_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1379 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeUserEqComp_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 2)));

#line 1380 "intermod.m"
              {
#line 1380 "intermod.m"
                transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1380 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 1) = ((MR_Box) (transform_hlds__intermod__SolverTypeDetails_28));
#line 1380 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 2) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_127));
#line 1380 "intermod.m"
              }
#line 1379 "intermod.m"
            }
#line 1382 "intermod.m"
    {
#line 1382 "intermod.m"
      transform_hlds__intermod__MainItemTypeDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1382 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1382 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1382 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1382 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 3) = ((MR_Box) (transform_hlds__intermod__TypeBody_24));
#line 1382 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1382 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1382 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1382 "intermod.m"
    }
#line 1384 "intermod.m"
    {
#line 1384 "intermod.m"
      transform_hlds__intermod__MainItem_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__MainItem_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1384 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__MainItem_30, 1) = ((MR_Box) (transform_hlds__intermod__MainItemTypeDefn_29));
#line 1384 "intermod.m"
    }
#line 1385 "intermod.m"
    transform_hlds__intermod__V_128_128 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 0)));
#line 1385 "intermod.m"
    transform_hlds__intermod__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 1)));
#line 1385 "intermod.m"
    transform_hlds__intermod__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 2)));
#line 1385 "intermod.m"
    transform_hlds__intermod__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 3)));
#line 1385 "intermod.m"
    transform_hlds__intermod__MercInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 4)));
#line 1386 "intermod.m"
    {
#line 1386 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__MainItem_30);
    }
#line 1389 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1))))
#line 1389 "intermod.m"
      {
#line 1389 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1389 "intermod.m"
        MR_Word transform_hlds__intermod__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1389 "intermod.m"
        MR_Word transform_hlds__intermod__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1389 "intermod.m"
        MR_Word transform_hlds__intermod__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1389 "intermod.m"
        MR_Word transform_hlds__intermod__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1389 "intermod.m"
        MR_Word transform_hlds__intermod__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1389 "intermod.m"
        MR_Word transform_hlds__intermod__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1389 "intermod.m"
        MR_Word transform_hlds__intermod__V_138_138 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1389 "intermod.m"
        MR_Word transform_hlds__intermod__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1389 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_92_92)) == (MR_mktag((MR_Integer) 1)));
#line 1389 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1389 "intermod.m"
          transform_hlds__intermod__ForeignTypeBody_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_92_92, (MR_Integer) 0)));
#line 1389 "intermod.m"
      }
#line 1389 "intermod.m"
    else
#line 1389 "intermod.m"
      if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 0))))
#line 1388 "intermod.m"
        {
#line 1388 "intermod.m"
          transform_hlds__intermod__ForeignTypeBody_32 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__Body_11), (MR_Integer) 0);
#line 1388 "intermod.m"
          transform_hlds__intermod__succeeded = MR_TRUE;
#line 1388 "intermod.m"
        }
#line 1389 "intermod.m"
      else
#line 1389 "intermod.m"
        transform_hlds__intermod__succeeded = MR_FALSE;
#line 1390 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1390 "intermod.m"
      {
#line 1391 "intermod.m"
        transform_hlds__intermod__MaybeIL_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 0)));
#line 1391 "intermod.m"
        transform_hlds__intermod__MaybeC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 1)));
#line 1391 "intermod.m"
        transform_hlds__intermod__MaybeJava_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 2)));
#line 1391 "intermod.m"
        transform_hlds__intermod__MaybeCSharp_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 3)));
#line 1391 "intermod.m"
        transform_hlds__intermod__MaybeErlang_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 4)));
#line 1391 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1390 "intermod.m"
      }
#line 1459 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1406 "intermod.m"
      {
#line 1404 "intermod.m"
        if ((transform_hlds__intermod__MaybeIL_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1405 "intermod.m"
          {
#line 1405 "intermod.m"
          }
#line 1404 "intermod.m"
        else
#line 1395 "intermod.m"
          {
#line 1395 "intermod.m"
            MR_Word transform_hlds__intermod__DataIL_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeIL_33, (MR_Integer) 0)));
#line 1395 "intermod.m"
            MR_Word transform_hlds__intermod__ILForeignType_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 0)));
#line 1395 "intermod.m"
            MR_Word transform_hlds__intermod__ILMaybeUserEqComp_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 1)));
#line 1395 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsIL_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 2)));
#line 1395 "intermod.m"
            MR_Word transform_hlds__intermod__ILItemTypeDefn_42;
#line 1395 "intermod.m"
            MR_Word transform_hlds__intermod__ILItem_43;
#line 1395 "intermod.m"
            MR_Word transform_hlds__intermod__V_93_93;
#line 1395 "intermod.m"
            MR_Word transform_hlds__intermod__V_94_94 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__ILForeignType_39);

#line 1399 "intermod.m"
            {
#line 1399 "intermod.m"
              transform_hlds__intermod__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1399 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, 1) = ((MR_Box) (transform_hlds__intermod__V_94_94));
#line 1399 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, 2) = ((MR_Box) (transform_hlds__intermod__ILMaybeUserEqComp_40));
#line 1399 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsIL_41));
#line 1399 "intermod.m"
            }
#line 1398 "intermod.m"
            {
#line 1398 "intermod.m"
              transform_hlds__intermod__ILItemTypeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1398 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1398 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1398 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1398 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 3) = ((MR_Box) (transform_hlds__intermod__V_93_93));
#line 1398 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1398 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1398 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1398 "intermod.m"
            }
#line 1402 "intermod.m"
            {
#line 1402 "intermod.m"
              transform_hlds__intermod__ILItem_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__ILItem_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__ILItem_43, 1) = ((MR_Box) (transform_hlds__intermod__ILItemTypeDefn_42));
#line 1402 "intermod.m"
            }
#line 1403 "intermod.m"
            {
#line 1403 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ILItem_43);
            }
#line 1395 "intermod.m"
          }
#line 1417 "intermod.m"
        if ((transform_hlds__intermod__MaybeC_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1418 "intermod.m"
          {
#line 1418 "intermod.m"
          }
#line 1417 "intermod.m"
        else
#line 1408 "intermod.m"
          {
#line 1408 "intermod.m"
            MR_Word transform_hlds__intermod__DataC_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeC_34, (MR_Integer) 0)));
#line 1408 "intermod.m"
            MR_Word transform_hlds__intermod__CForeignType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 0)));
#line 1408 "intermod.m"
            MR_Word transform_hlds__intermod__CMaybeUserEqComp_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 1)));
#line 1408 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsC_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 2)));
#line 1408 "intermod.m"
            MR_Word transform_hlds__intermod__CItemTypeDefn_48;
#line 1408 "intermod.m"
            MR_Word transform_hlds__intermod__CItem_49;
#line 1408 "intermod.m"
            MR_Word transform_hlds__intermod__V_98_98;
#line 1408 "intermod.m"
            MR_Word transform_hlds__intermod__V_99_99;

#line 1412 "intermod.m"
            {
#line 1412 "intermod.m"
              transform_hlds__intermod__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_99_99, 0) = ((MR_Box) (transform_hlds__intermod__CForeignType_45));
#line 1412 "intermod.m"
            }
#line 1412 "intermod.m"
            {
#line 1412 "intermod.m"
              transform_hlds__intermod__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1412 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_98_98, 1) = ((MR_Box) (transform_hlds__intermod__V_99_99));
#line 1412 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_98_98, 2) = ((MR_Box) (transform_hlds__intermod__CMaybeUserEqComp_46));
#line 1412 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_98_98, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsC_47));
#line 1412 "intermod.m"
            }
#line 1411 "intermod.m"
            {
#line 1411 "intermod.m"
              transform_hlds__intermod__CItemTypeDefn_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1411 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1411 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1411 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 3) = ((MR_Box) (transform_hlds__intermod__V_98_98));
#line 1411 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1411 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1411 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1411 "intermod.m"
            }
#line 1415 "intermod.m"
            {
#line 1415 "intermod.m"
              transform_hlds__intermod__CItem_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__CItem_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__CItem_49, 1) = ((MR_Box) (transform_hlds__intermod__CItemTypeDefn_48));
#line 1415 "intermod.m"
            }
#line 1416 "intermod.m"
            {
#line 1416 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__CItem_49);
            }
#line 1408 "intermod.m"
          }
#line 1430 "intermod.m"
        if ((transform_hlds__intermod__MaybeJava_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1431 "intermod.m"
          {
#line 1431 "intermod.m"
          }
#line 1430 "intermod.m"
        else
#line 1421 "intermod.m"
          {
#line 1421 "intermod.m"
            MR_Word transform_hlds__intermod__DataJava_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeJava_35, (MR_Integer) 0)));
#line 1421 "intermod.m"
            MR_Word transform_hlds__intermod__JavaForeignType_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 0)));
#line 1421 "intermod.m"
            MR_Word transform_hlds__intermod__JavaMaybeUserEqComp_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 1)));
#line 1421 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsJava_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 2)));
#line 1421 "intermod.m"
            MR_Word transform_hlds__intermod__JavaItemTypeDefn_54;
#line 1421 "intermod.m"
            MR_Word transform_hlds__intermod__JavaItem_55;
#line 1421 "intermod.m"
            MR_Word transform_hlds__intermod__V_103_103;
#line 1421 "intermod.m"
            MR_Word transform_hlds__intermod__V_104_104;

#line 1425 "intermod.m"
            {
#line 1425 "intermod.m"
              transform_hlds__intermod__V_104_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "intermod.m"
              MR_hl_field(MR_mktag(2), transform_hlds__intermod__V_104_104, 0) = ((MR_Box) (transform_hlds__intermod__JavaForeignType_51));
#line 1425 "intermod.m"
            }
#line 1425 "intermod.m"
            {
#line 1425 "intermod.m"
              transform_hlds__intermod__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1425 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_103_103, 1) = ((MR_Box) (transform_hlds__intermod__V_104_104));
#line 1425 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_103_103, 2) = ((MR_Box) (transform_hlds__intermod__JavaMaybeUserEqComp_52));
#line 1425 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_103_103, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsJava_53));
#line 1425 "intermod.m"
            }
#line 1424 "intermod.m"
            {
#line 1424 "intermod.m"
              transform_hlds__intermod__JavaItemTypeDefn_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1424 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1424 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1424 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1424 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 3) = ((MR_Box) (transform_hlds__intermod__V_103_103));
#line 1424 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1424 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1424 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1424 "intermod.m"
            }
#line 1428 "intermod.m"
            {
#line 1428 "intermod.m"
              transform_hlds__intermod__JavaItem_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__JavaItem_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__JavaItem_55, 1) = ((MR_Box) (transform_hlds__intermod__JavaItemTypeDefn_54));
#line 1428 "intermod.m"
            }
#line 1429 "intermod.m"
            {
#line 1429 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__JavaItem_55);
            }
#line 1421 "intermod.m"
          }
#line 1443 "intermod.m"
        if ((transform_hlds__intermod__MaybeCSharp_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1444 "intermod.m"
          {
#line 1444 "intermod.m"
          }
#line 1443 "intermod.m"
        else
#line 1434 "intermod.m"
          {
#line 1434 "intermod.m"
            MR_Word transform_hlds__intermod__DataCSharp_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeCSharp_36, (MR_Integer) 0)));
#line 1434 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpForeignType_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 0)));
#line 1434 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpMaybeUserEqComp_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 1)));
#line 1434 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsCSharp_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 2)));
#line 1434 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpItemTypeDefn_60;
#line 1434 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpItem_61;
#line 1434 "intermod.m"
            MR_Word transform_hlds__intermod__V_108_108;
#line 1434 "intermod.m"
            MR_Word transform_hlds__intermod__V_109_109;

#line 1438 "intermod.m"
            {
#line 1438 "intermod.m"
              transform_hlds__intermod__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1438 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_109_109, 1) = ((MR_Box) (transform_hlds__intermod__CSharpForeignType_57));
#line 1438 "intermod.m"
            }
#line 1438 "intermod.m"
            {
#line 1438 "intermod.m"
              transform_hlds__intermod__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1438 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 1) = ((MR_Box) (transform_hlds__intermod__V_109_109));
#line 1438 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 2) = ((MR_Box) (transform_hlds__intermod__CSharpMaybeUserEqComp_58));
#line 1438 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsCSharp_59));
#line 1438 "intermod.m"
            }
#line 1437 "intermod.m"
            {
#line 1437 "intermod.m"
              transform_hlds__intermod__CSharpItemTypeDefn_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1437 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1437 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1437 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 3) = ((MR_Box) (transform_hlds__intermod__V_108_108));
#line 1437 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1437 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1437 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1437 "intermod.m"
            }
#line 1441 "intermod.m"
            {
#line 1441 "intermod.m"
              transform_hlds__intermod__CSharpItem_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__CSharpItem_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__CSharpItem_61, 1) = ((MR_Box) (transform_hlds__intermod__CSharpItemTypeDefn_60));
#line 1441 "intermod.m"
            }
#line 1442 "intermod.m"
            {
#line 1442 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__CSharpItem_61);
            }
#line 1434 "intermod.m"
          }
#line 1456 "intermod.m"
        if ((transform_hlds__intermod__MaybeErlang_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1457 "intermod.m"
          {
#line 1457 "intermod.m"
          }
#line 1456 "intermod.m"
        else
#line 1447 "intermod.m"
          {
#line 1447 "intermod.m"
            MR_Word transform_hlds__intermod__DataErlang_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeErlang_37, (MR_Integer) 0)));
#line 1447 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangMaybeUserEqComp_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataErlang_62, (MR_Integer) 1)));
#line 1447 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsErlang_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataErlang_62, (MR_Integer) 2)));
#line 1447 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangItemTypeDefn_66;
#line 1447 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangItem_67;
#line 1447 "intermod.m"
            MR_Word transform_hlds__intermod__V_113_113;
#line 1447 "intermod.m"
            MR_Word transform_hlds__intermod__V_114_114;

#line 1451 "intermod.m"
            {
#line 1451 "intermod.m"
              transform_hlds__intermod__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1451 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_114_114, 1) = NULL;
#line 1451 "intermod.m"
            }
#line 1451 "intermod.m"
            {
#line 1451 "intermod.m"
              transform_hlds__intermod__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1451 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_113_113, 1) = ((MR_Box) (transform_hlds__intermod__V_114_114));
#line 1451 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_113_113, 2) = ((MR_Box) (transform_hlds__intermod__ErlangMaybeUserEqComp_64));
#line 1451 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_113_113, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsErlang_65));
#line 1451 "intermod.m"
            }
#line 1450 "intermod.m"
            {
#line 1450 "intermod.m"
              transform_hlds__intermod__ErlangItemTypeDefn_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1450 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1450 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1450 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 3) = ((MR_Box) (transform_hlds__intermod__V_113_113));
#line 1450 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1450 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1450 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1450 "intermod.m"
            }
#line 1454 "intermod.m"
            {
#line 1454 "intermod.m"
              transform_hlds__intermod__ErlangItem_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__ErlangItem_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__ErlangItem_67, 1) = ((MR_Box) (transform_hlds__intermod__ErlangItemTypeDefn_66));
#line 1454 "intermod.m"
            }
#line 1455 "intermod.m"
            {
#line 1455 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ErlangItem_67);
            }
#line 1447 "intermod.m"
          }
#line 1406 "intermod.m"
      }
#line 1459 "intermod.m"
    else
#line 1457 "intermod.m"
      {
#line 1457 "intermod.m"
      }
#line 1463 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1)));
#line 1463 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1463 "intermod.m"
      {
#line 1463 "intermod.m"
        transform_hlds__intermod__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1463 "intermod.m"
        transform_hlds__intermod__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1463 "intermod.m"
        transform_hlds__intermod__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1463 "intermod.m"
        transform_hlds__intermod__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1463 "intermod.m"
        transform_hlds__intermod__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1463 "intermod.m"
        transform_hlds__intermod__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1463 "intermod.m"
        transform_hlds__intermod__ReservedTag_68 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1463 "intermod.m"
        transform_hlds__intermod__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1463 "intermod.m"
        transform_hlds__intermod__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1464 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__ReservedTag_68 == (MR_Integer) 0);
#line 1463 "intermod.m"
      }
#line 1471 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1468 "intermod.m"
      {
#line 1468 "intermod.m"
        MR_Word transform_hlds__intermod__ReserveItemPragma_69;
#line 1468 "intermod.m"
        MR_Word transform_hlds__intermod__ReserveItem_70;
#line 1468 "intermod.m"
        MR_Word transform_hlds__intermod__V_119_119;

#line 1468 "intermod.m"
        {
#line 1468 "intermod.m"
          transform_hlds__intermod__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1468 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 1468 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_119_119, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 1468 "intermod.m"
        }
#line 1467 "intermod.m"
        {
#line 1467 "intermod.m"
          transform_hlds__intermod__ReserveItemPragma_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1467 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 1) = ((MR_Box) (transform_hlds__intermod__V_119_119));
#line 1467 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1467 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 3) = ((MR_Box) ((MR_Integer) -1));
#line 1467 "intermod.m"
        }
#line 1469 "intermod.m"
        {
#line 1469 "intermod.m"
          transform_hlds__intermod__ReserveItem_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ReserveItem_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1469 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ReserveItem_70, 1) = ((MR_Box) (transform_hlds__intermod__ReserveItemPragma_69));
#line 1469 "intermod.m"
        }
#line 1470 "intermod.m"
        {
#line 1470 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ReserveItem_70);
        }
#line 1468 "intermod.m"
      }
#line 1471 "intermod.m"
    else
#line 1470 "intermod.m"
      {
#line 1470 "intermod.m"
      }
#line 1475 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1)));
#line 1475 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1475 "intermod.m"
      {
#line 1475 "intermod.m"
        transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1475 "intermod.m"
        transform_hlds__intermod__ConsTagVals_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1475 "intermod.m"
        transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1475 "intermod.m"
        transform_hlds__intermod__DuTypeKind_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1475 "intermod.m"
        transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1475 "intermod.m"
        transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1475 "intermod.m"
        transform_hlds__intermod__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1475 "intermod.m"
        transform_hlds__intermod__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1475 "intermod.m"
        transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1476 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__DuTypeKind_74)) == (MR_mktag((MR_Integer) 1)));
#line 1476 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1476 "intermod.m"
          transform_hlds__intermod__Lang_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__DuTypeKind_74, (MR_Integer) 0)));
#line 1475 "intermod.m"
      }
#line 1485 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1479 "intermod.m"
      {
#line 1479 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignEnumVals_81;
#line 1479 "intermod.m"
        MR_Word transform_hlds__intermod__FEInfo_82;
#line 1479 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignPragma_83;
#line 1479 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignItemPragma_84;
#line 1479 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignItem_85;
#line 1478 "intermod.m"
        MR_Box transform_hlds__intermod__conv1_ForeignEnumVals_81;

#line 1478 "intermod.m"
        {
#line 1478 "intermod.m"
          mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[4], (MR_Word) &transform_hlds__intermod_scalar_common_2[15], transform_hlds__intermod__ConsTagVals_72, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__intermod__conv1_ForeignEnumVals_81);
        }
#line 1478 "intermod.m"
        transform_hlds__intermod__ForeignEnumVals_81 = ((MR_Word) transform_hlds__intermod__conv1_ForeignEnumVals_81);
#line 1480 "intermod.m"
        {
#line 1480 "intermod.m"
          transform_hlds__intermod__FEInfo_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 0) = ((MR_Box) (transform_hlds__intermod__Lang_80));
#line 1480 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 1480 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 2) = ((MR_Box) (transform_hlds__intermod__ForeignEnumVals_81));
#line 1480 "intermod.m"
        }
#line 1481 "intermod.m"
        {
#line 1481 "intermod.m"
          transform_hlds__intermod__ForeignPragma_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignPragma_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1481 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignPragma_83, 1) = ((MR_Box) (transform_hlds__intermod__FEInfo_82));
#line 1481 "intermod.m"
        }
#line 1482 "intermod.m"
        {
#line 1482 "intermod.m"
          transform_hlds__intermod__ForeignItemPragma_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1482 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1482 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 1) = ((MR_Box) (transform_hlds__intermod__ForeignPragma_83));
#line 1482 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1482 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 3) = ((MR_Box) ((MR_Integer) -1));
#line 1482 "intermod.m"
        }
#line 1483 "intermod.m"
        {
#line 1483 "intermod.m"
          transform_hlds__intermod__ForeignItem_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignItem_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1483 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignItem_85, 1) = ((MR_Box) (transform_hlds__intermod__ForeignItemPragma_84));
#line 1483 "intermod.m"
        }
#line 1484 "intermod.m"
        {
#line 1484 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ForeignItem_85);
#line 1484 "intermod.m"
          return;
        }
#line 1479 "intermod.m"
      }
#line 1485 "intermod.m"
    else
#line 1484 "intermod.m"
      {
#line 1484 "intermod.m"
      }
#line 1357 "intermod.m"
  }
#line 1354 "intermod.m"
}

#line 1334 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modules_3_p_0(
#line 1334 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1)
#line 1334 "intermod.m"
{
#line 1336 "intermod.m"
  while (MR_TRUE)
#line 1336 "intermod.m"
    {
#line 1336 "intermod.m"
      /* tailcall optimized into a loop */
#line 1336 "intermod.m"
      {
#line 1336 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1336 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1336 "intermod.m"
          {
#line 1336 "intermod.m"
          }
#line 1336 "intermod.m"
        else
#line 1337 "intermod.m"
          {
#line 1337 "intermod.m"
            MR_Word transform_hlds__intermod__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 1337 "intermod.m"
            MR_Word transform_hlds__intermod__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));

#line 1338 "intermod.m"
            {
#line 1338 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__Module_7);
            }
#line 1342 "intermod.m"
            if ((transform_hlds__intermod__Rest_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1340 "intermod.m"
              {
#line 1341 "intermod.m"
                {
#line 1341 "intermod.m"
                  mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1341 "intermod.m"
                  return;
                }
#line 1340 "intermod.m"
              }
#line 1342 "intermod.m"
            else
#line 1343 "intermod.m"
              {
#line 1343 "intermod.m"
                MR_Word transform_hlds__intermod__Module_23;
#line 1343 "intermod.m"
                MR_Word transform_hlds__intermod__Rest_24;

#line 1344 "intermod.m"
                {
#line 1344 "intermod.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1337 "intermod.m"
                transform_hlds__intermod__Module_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Rest_8, (MR_Integer) 0)));
#line 1337 "intermod.m"
                transform_hlds__intermod__Rest_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Rest_8, (MR_Integer) 1)));
#line 1338 "intermod.m"
                {
#line 1338 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__Module_23);
                }
#line 1342 "intermod.m"
                if ((transform_hlds__intermod__Rest_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1340 "intermod.m"
                  {
#line 1341 "intermod.m"
                    {
#line 1341 "intermod.m"
                      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1341 "intermod.m"
                      return;
                    }
#line 1340 "intermod.m"
                  }
#line 1342 "intermod.m"
                else
#line 1343 "intermod.m"
                  {
#line 1344 "intermod.m"
                    {
#line 1344 "intermod.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1345 "intermod.m"
                    /* direct tailcall eliminated */
#line 1345 "intermod.m"
                    {
#line 1345 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__Rest_24;

#line 1345 "intermod.m"
                      transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 1345 "intermod.m"
                    }
#line 1345 "intermod.m"
                    continue;
#line 1343 "intermod.m"
                  }
#line 1343 "intermod.m"
              }
#line 1337 "intermod.m"
          }
#line 1336 "intermod.m"
      }
#line 1336 "intermod.m"
      break;
#line 1336 "intermod.m"
    }
#line 1334 "intermod.m"
}

#line 1322 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_2(
#line 1322 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1322 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1322 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1322 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1322 "intermod.m"
{
#line 1322 "intermod.m"
  {
#line 1322 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1322 "intermod.m"
    {
#line 1322 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1322__1_3_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1322 "intermod.m"
      return;
    }
#line 1322 "intermod.m"
  }
#line 1322 "intermod.m"
}

#line 1352 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_1(
#line 1352 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1352 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1352 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1352 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1352 "intermod.m"
{
#line 1352 "intermod.m"
  {
#line 1352 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1352 "intermod.m"
    {
#line 1352 "intermod.m"
      transform_hlds__intermod__intermod_write_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1352 "intermod.m"
      return;
    }
#line 1352 "intermod.m"
  }
#line 1352 "intermod.m"
}

#line 1279 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0(
#line 1279 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4)
#line 1279 "intermod.m"
{
#line 1281 "intermod.m"
  {
#line 1281 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__Preds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__Types_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__WriteHeader_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__Preds_15;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls_16;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__Modules0_17;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__Modules_18;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_21;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfo0_22;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo0_23;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_24;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfo_25;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfoForPreds_26;
#line 1281 "intermod.m"
    MR_Word transform_hlds__intermod__V_79_79;
#line 1282 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 1282 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 1282 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 1305 "intermod.m"
    MR_String transform_hlds__intermod__V_56_56;
#line 1305 "intermod.m"
    MR_String transform_hlds__intermod__V_57_57;
#line 1305 "intermod.m"
    MR_Word transform_hlds__intermod__V_58_58;
#line 1305 "intermod.m"
    MR_Word transform_hlds__intermod__V_59_59;
#line 1307 "intermod.m"
    MR_String transform_hlds__intermod__V_60_60;
#line 1307 "intermod.m"
    MR_String transform_hlds__intermod__V_61_61;
#line 1307 "intermod.m"
    MR_Word transform_hlds__intermod__V_62_62;
#line 1307 "intermod.m"
    MR_Word transform_hlds__intermod__V_63_63;
#line 1307 "intermod.m"
    MR_Word transform_hlds__intermod__V_64_64;
#line 1352 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_40_40;
#line 1316 "intermod.m"
    MR_String transform_hlds__intermod__V_66_66;
#line 1316 "intermod.m"
    MR_Word transform_hlds__intermod__V_67_67;
#line 1316 "intermod.m"
    MR_Word transform_hlds__intermod__V_68_68;
#line 1316 "intermod.m"
    MR_Word transform_hlds__intermod__V_69_69;
#line 1316 "intermod.m"
    MR_String transform_hlds__intermod__V_65_65;

#line 1284 "intermod.m"
    {
#line 1284 "intermod.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_70_70, transform_hlds__intermod__Preds0_7, &transform_hlds__intermod__Preds_15);
    }
#line 1285 "intermod.m"
    {
#line 1285 "intermod.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_70_70, transform_hlds__intermod__PredDecls0_8, &transform_hlds__intermod__PredDecls_16);
    }
#line 1287 "intermod.m"
    {
#line 1287 "intermod.m"
      hlds__hlds_module__module_info_get_imported_module_specifiers_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Modules0_17);
    }
#line 1288 "intermod.m"
    {
#line 1288 "intermod.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, transform_hlds__intermod__Modules0_17, &transform_hlds__intermod__Modules_18);
    }
#line 1295 "intermod.m"
    if ((transform_hlds__intermod__Modules_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1296 "intermod.m"
      {
#line 1296 "intermod.m"
      }
#line 1295 "intermod.m"
    else
#line 1290 "intermod.m"
      {
#line 1293 "intermod.m"
        {
#line 1293 "intermod.m"
          mercury__io__write_string_3_p_0((MR_String) ":- use_module ");
        }
#line 1294 "intermod.m"
        {
#line 1294 "intermod.m"
          transform_hlds__intermod__intermod_write_modules_3_p_0(transform_hlds__intermod__Modules_18);
        }
#line 1290 "intermod.m"
      }
#line 1299 "intermod.m"
    {
#line 1299 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Globals_21);
    }
#line 1300 "intermod.m"
    {
#line 1300 "intermod.m"
      transform_hlds__intermod__OutInfo0_22 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(transform_hlds__intermod__Globals_21);
    }
#line 1305 "intermod.m"
    transform_hlds__intermod__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 0)));
#line 1305 "intermod.m"
    transform_hlds__intermod__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 1)));
#line 1305 "intermod.m"
    transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 2)));
#line 1305 "intermod.m"
    transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 3)));
#line 1305 "intermod.m"
    transform_hlds__intermod__MercInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 4)));
#line 1306 "intermod.m"
    {
#line 1306 "intermod.m"
      transform_hlds__intermod__MercInfo_24 = parse_tree__mercury_to_mercury__merc_out_info_disable_line_numbers_1_f_0(transform_hlds__intermod__MercInfo0_23);
    }
#line 1307 "intermod.m"
    transform_hlds__intermod__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 0)));
#line 1307 "intermod.m"
    transform_hlds__intermod__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 1)));
#line 1307 "intermod.m"
    transform_hlds__intermod__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 2)));
#line 1307 "intermod.m"
    transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 3)));
#line 1307 "intermod.m"
    transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 4)));
#line 1307 "intermod.m"
    {
#line 1307 "intermod.m"
      transform_hlds__intermod__OutInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1307 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 0) = ((MR_Box) (transform_hlds__intermod__V_60_60));
#line 1307 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 1) = ((MR_Box) (transform_hlds__intermod__V_61_61));
#line 1307 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 2) = ((MR_Box) (transform_hlds__intermod__V_62_62));
#line 1307 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 3) = ((MR_Box) (transform_hlds__intermod__V_63_63));
#line 1307 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 4) = ((MR_Box) (transform_hlds__intermod__MercInfo_24));
#line 1307 "intermod.m"
    }
#line 1352 "intermod.m"
    {
#line 1352 "intermod.m"
      transform_hlds__intermod__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_79_79, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[2]));
#line 1352 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_79_79, 1) = ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_1));
#line 1352 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1352 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_79_79, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_25));
#line 1352 "intermod.m"
    }
#line 1352 "intermod.m"
    {
#line 1352 "intermod.m"
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__intermod_scalar_common_2[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_79_79, transform_hlds__intermod__Types_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_40_40);
    }
#line 1310 "intermod.m"
    {
#line 1310 "intermod.m"
      transform_hlds__intermod__intermod_write_insts_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1311 "intermod.m"
    {
#line 1311 "intermod.m"
      transform_hlds__intermod__intermod_write_modes_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1312 "intermod.m"
    {
#line 1312 "intermod.m"
      transform_hlds__intermod__intermod_write_classes_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1313 "intermod.m"
    {
#line 1313 "intermod.m"
      transform_hlds__intermod__intermod_write_instances_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__Instances_9);
    }
#line 1316 "intermod.m"
    transform_hlds__intermod__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 0)));
#line 1316 "intermod.m"
    transform_hlds__intermod__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 1)));
#line 1316 "intermod.m"
    transform_hlds__intermod__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 2)));
#line 1316 "intermod.m"
    transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 3)));
#line 1316 "intermod.m"
    transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 4)));
#line 1316 "intermod.m"
    {
#line 1316 "intermod.m"
      transform_hlds__intermod__OutInfoForPreds_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1316 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 0) = ((MR_Box) ((MR_String) ""));
#line 1316 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 1) = ((MR_Box) (transform_hlds__intermod__V_66_66));
#line 1316 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 2) = ((MR_Box) (transform_hlds__intermod__V_67_67));
#line 1316 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 3) = ((MR_Box) (transform_hlds__intermod__V_68_68));
#line 1316 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 4) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 1316 "intermod.m"
    }
#line 1328 "intermod.m"
    if ((transform_hlds__intermod__WriteHeader_12 == (MR_Integer) 0))
#line 1329 "intermod.m"
      {
#line 1329 "intermod.m"
      }
#line 1328 "intermod.m"
    else
#line 1318 "intermod.m"
      {
#line 1318 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_72_72;
#line 1318 "intermod.m"
        MR_Word transform_hlds__intermod__RevForeignImports_27;
#line 1318 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignImports_28;
#line 1322 "intermod.m"
        MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_IO_47_47;

#line 1319 "intermod.m"
        {
#line 1319 "intermod.m"
          hlds__hlds_module__module_info_get_foreign_import_module_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__RevForeignImports_27);
        }
#line 12536 "transform_hlds.intermod.c"
        transform_hlds__intermod__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 1320 "intermod.m"
        {
#line 1320 "intermod.m"
          transform_hlds__intermod__ForeignImports_28 = mercury__list__reverse_1_f_0(transform_hlds__intermod__TypeCtorInfo_72_72, transform_hlds__intermod__RevForeignImports_27);
        }
#line 1322 "intermod.m"
        {
#line 1322 "intermod.m"
          mercury__list__foldl_4_p_2(transform_hlds__intermod__TypeCtorInfo_72_72, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[14], transform_hlds__intermod__ForeignImports_28, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv1_STATE_VARIABLE_IO_47_47);
        }
#line 1318 "intermod.m"
      }
#line 1331 "intermod.m"
    {
#line 1331 "intermod.m"
      transform_hlds__intermod__intermod_write_pred_decls_4_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__PredDecls_16);
    }
#line 1332 "intermod.m"
    {
#line 1332 "intermod.m"
      transform_hlds__intermod__intermod_write_preds_5_p_0(transform_hlds__intermod__OutInfoForPreds_26, transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__Preds_15);
#line 1332 "intermod.m"
      return;
    }
#line 1281 "intermod.m"
  }
#line 1279 "intermod.m"
}

#line 1267 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_1(
#line 1267 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1267 "intermod.m"
{
#line 1267 "intermod.m"
  {
#line 1267 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1267 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0, 1);
#line 1267 "intermod.m"
  }
#line 1267 "intermod.m"
}

#line 1267 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_3(
#line 1267 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1267 "intermod.m"
{
#line 1267 "intermod.m"
  {
#line 1267 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1267 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23 = ((MR_Word) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23);
#line 1267 "intermod.m"
    {
#line 1267 "intermod.m"
      transform_hlds__intermod__write_intermod_info_3_p_0_2(transform_hlds__intermod__env_ptr);
#line 1267 "intermod.m"
      return;
    }
#line 1267 "intermod.m"
  }
#line 1267 "intermod.m"
}

#line 1267 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_2(
#line 1267 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1267 "intermod.m"
{
#line 1267 "intermod.m"
  {
#line 1267 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1267 "intermod.m"
    {
#line 1267 "intermod.m"
      MR_Word transform_hlds__intermod___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23, (MR_Integer) 0)));

#line 1267 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23, (MR_Integer) 1)));
#line 1268 "intermod.m"
      {
#line 1268 "intermod.m"
        hlds__hlds_data__get_type_defn_status_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15);
      }
#line 1270 "intermod.m"
      if (((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1269 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1270 "intermod.m"
      else
#line 1270 "intermod.m"
        if (((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1270 "intermod.m"
          (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1270 "intermod.m"
        else
#line 1270 "intermod.m"
          (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_FALSE;
#line 1270 "intermod.m"
      if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1270 "intermod.m"
        {
#line 1270 "intermod.m"
          transform_hlds__intermod__write_intermod_info_3_p_0_1(transform_hlds__intermod__env_ptr);
#line 1270 "intermod.m"
          return;
        }
#line 1267 "intermod.m"
    }
#line 1267 "intermod.m"
  }
#line 1267 "intermod.m"
}

#line 1267 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_4(
#line 1267 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1267 "intermod.m"
{
#line 1267 "intermod.m"
  {
#line 1267 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1267 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0) == 0)
#line 1267 "intermod.m"
      {
#line 1267 "intermod.m"
        {
#line 1267 "intermod.m"
          {
#line 1267 "intermod.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__intermod_scalar_common_2[3], &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12, transform_hlds__intermod__write_intermod_info_3_p_0_3, transform_hlds__intermod__env_ptr);
          }
#line 1267 "intermod.m"
        }
#line 1267 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_FALSE;
#line 1267 "intermod.m"
      }
#line 1267 "intermod.m"
    else
#line 1267 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1267 "intermod.m"
  }
#line 1267 "intermod.m"
}

#line 1245 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0(
#line 1245 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4)
#line 1245 "intermod.m"
{
#line 1245 "intermod.m"
  {
#line 1245 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s transform_hlds__intermod__env;

#line 1247 "intermod.m"
    {
#line 1247 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 1247 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleName_7;
#line 1247 "intermod.m"
      MR_Word transform_hlds__intermod__Preds_8;
#line 1247 "intermod.m"
      MR_Word transform_hlds__intermod__PredDecls_9;
#line 1247 "intermod.m"
      MR_Word transform_hlds__intermod__Instances_10;
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 2155 "intermod.m"
      MR_Word transform_hlds__intermod__V_37_37;
#line 2155 "intermod.m"
      MR_Word transform_hlds__intermod__V_40_40;
#line 2155 "intermod.m"
      MR_Word transform_hlds__intermod__V_41_41;
#line 2155 "intermod.m"
      MR_Word transform_hlds__intermod__V_42_42;
#line 2155 "intermod.m"
      MR_Word transform_hlds__intermod__V_43_43;
#line 2155 "intermod.m"
      MR_Word transform_hlds__intermod__V_44_44;
#line 1261 "intermod.m"
      MR_Word transform_hlds__intermod__TypeCtorInfo_25_25;
#line 1261 "intermod.m"
      MR_Word transform_hlds__intermod__TypeTable_11;

#line 1249 "intermod.m"
      {
#line 1249 "intermod.m"
        hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_7);
      }
#line 1250 "intermod.m"
      {
#line 1250 "intermod.m"
        mercury__io__write_string_3_p_0((MR_String) ":- module ");
      }
#line 1251 "intermod.m"
      {
#line 1251 "intermod.m"
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__ModuleName_7);
      }
#line 1252 "intermod.m"
      {
#line 1252 "intermod.m"
        mercury__io__write_string_3_p_0((MR_String) ".\n");
      }
#line 2155 "intermod.m"
      transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 2155 "intermod.m"
      transform_hlds__intermod__Preds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 2155 "intermod.m"
      transform_hlds__intermod__PredDecls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 2155 "intermod.m"
      transform_hlds__intermod__Instances_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 2155 "intermod.m"
      transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 2155 "intermod.m"
      transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 2155 "intermod.m"
      transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 2155 "intermod.m"
      transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 2155 "intermod.m"
      transform_hlds__intermod__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 12799 "transform_hlds.intermod.c"
      transform_hlds__intermod__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1261 "intermod.m"
      {
#line 1261 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = mercury__set__empty_1_p_0(transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__Preds_8);
      }
#line 1261 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1261 "intermod.m"
        {
#line 1262 "intermod.m"
          {
#line 1262 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = mercury__set__empty_1_p_0(transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__PredDecls_9);
          }
#line 1261 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1261 "intermod.m"
            {
#line 1263 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = (transform_hlds__intermod__Instances_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1261 "intermod.m"
                {
#line 1264 "intermod.m"
                  {
#line 1264 "intermod.m"
                    hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__TypeTable_11);
                  }
#line 1265 "intermod.m"
                  {
#line 1265 "intermod.m"
                    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(transform_hlds__intermod__TypeTable_11, &(transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12);
                  }
#line 1267 "intermod.m"
                  {
#line 1267 "intermod.m"
                    transform_hlds__intermod__write_intermod_info_3_p_0_4(&transform_hlds__intermod__env);
                  }
#line 1266 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded);
#line 1261 "intermod.m"
                }
#line 1261 "intermod.m"
            }
#line 1261 "intermod.m"
        }
#line 1275 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1270 "intermod.m"
        {
#line 1270 "intermod.m"
        }
#line 1275 "intermod.m"
      else
#line 1276 "intermod.m"
        {
#line 1276 "intermod.m"
          transform_hlds__intermod__write_intermod_info_body_3_p_0(transform_hlds__intermod__IntermodInfo_4);
#line 1276 "intermod.m"
          return;
        }
#line 1247 "intermod.m"
    }
#line 1245 "intermod.m"
  }
#line 1245 "intermod.m"
}

#line 1213 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
#line 1213 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1213 "intermod.m"
  MR_Word transform_hlds__intermod__SpecialId_2,
#line 1213 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_3,
#line 1213 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 1213 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__5_5,
#line 1213 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1213 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7)
#line 1213 "intermod.m"
{
#line 1217 "intermod.m"
  {
#line 1217 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1217 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1217 "intermod.m"
      {
#line 1217 "intermod.m"
        *transform_hlds__intermod__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1217 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0_6;
#line 1217 "intermod.m"
      }
#line 1217 "intermod.m"
    else
#line 1219 "intermod.m"
      {
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__Pred0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__Pred_18;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__SpecialPreds_20;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__UnifyPredId_21;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__UnifyPredInfo_22;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__TVarSet_23;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__ExistQVars_24;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__ArgTypes_25;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__HeadTypeParams_26;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__Markers0_27;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__Markers_28;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__Context_29;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__UserEqPredId_30;
#line 1219 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34;
#line 1221 "intermod.m"
        MR_Box transform_hlds__intermod__conv0_UnifyPredId_21;
#line 627 "intermod.m"
        MR_Word transform_hlds__intermod__V_45_45;

#line 1220 "intermod.m"
        {
#line 1220 "intermod.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_20);
        }
#line 1221 "intermod.m"
        {
#line 1221 "intermod.m"
          transform_hlds__intermod__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, 0) = ((MR_Box) (transform_hlds__intermod__SpecialId_2));
#line 1221 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_3));
#line 1221 "intermod.m"
        }
#line 1221 "intermod.m"
        {
#line 1221 "intermod.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[2], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_20, ((MR_Box) (transform_hlds__intermod__V_34_34)), &transform_hlds__intermod__conv0_UnifyPredId_21);
        }
#line 1221 "intermod.m"
        transform_hlds__intermod__UnifyPredId_21 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_21);
#line 1222 "intermod.m"
        {
#line 1222 "intermod.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_21, &transform_hlds__intermod__UnifyPredInfo_22);
        }
#line 1223 "intermod.m"
        {
#line 1223 "intermod.m"
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__TVarSet_23, &transform_hlds__intermod__ExistQVars_24, &transform_hlds__intermod__ArgTypes_25);
        }
#line 1224 "intermod.m"
        {
#line 1224 "intermod.m"
          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__HeadTypeParams_26);
        }
#line 1225 "intermod.m"
        {
#line 1225 "intermod.m"
          hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_27);
        }
#line 1226 "intermod.m"
        {
#line 1226 "intermod.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_27, &transform_hlds__intermod__Markers_28);
        }
#line 1227 "intermod.m"
        {
#line 1227 "intermod.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__Context_29);
        }
#line 1228 "intermod.m"
        {
#line 1228 "intermod.m"
          hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_28, transform_hlds__intermod__TVarSet_23, transform_hlds__intermod__ExistQVars_24, transform_hlds__intermod__ArgTypes_25, transform_hlds__intermod__HeadTypeParams_26, transform_hlds__intermod__Context_29, transform_hlds__intermod__Pred0_17, &transform_hlds__intermod__Pred_18, &transform_hlds__intermod__UserEqPredId_30);
        }
#line 1219 "intermod.m"
        {
#line 1219 "intermod.m"
          MR_Word base;
#line 1219 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "intermod.m"
          *transform_hlds__intermod__HeadVar__5_5 = base;
#line 1219 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Pred_18));
#line 1219 "intermod.m"
        }
#line 627 "intermod.m"
        {
#line 627 "intermod.m"
          transform_hlds__intermod__V_45_45 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 627 "intermod.m"
        {
#line 627 "intermod.m"
          transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_30, transform_hlds__intermod__V_45_45);
        }
#line 632 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 631 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0_6;
#line 632 "intermod.m"
        else
#line 633 "intermod.m"
          {
#line 633 "intermod.m"
            MR_Word transform_hlds__intermod__V_47_47;

#line 633 "intermod.m"
            {
#line 633 "intermod.m"
              transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_30, &transform_hlds__intermod__V_47_47, transform_hlds__intermod__STATE_VARIABLE_Info_0_6, transform_hlds__intermod__STATE_VARIABLE_Info_7);
            }
#line 633 "intermod.m"
          }
#line 1219 "intermod.m"
      }
#line 1217 "intermod.m"
  }
#line 1213 "intermod.m"
}

#line 1196 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
#line 1196 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1196 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1196 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1196 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1196 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1196 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6)
#line 1196 "intermod.m"
{
#line 1200 "intermod.m"
  {
#line 1200 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1200 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1200 "intermod.m"
      {
#line 1200 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1200 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1200 "intermod.m"
      }
#line 1200 "intermod.m"
    else
#line 1200 "intermod.m"
      {
#line 1200 "intermod.m"
        MR_Word transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));

#line 1200 "intermod.m"
        if (((MR_tag((MR_Word) transform_hlds__intermod__V_35_35)) == (MR_mktag((MR_Integer) 1))))
#line 1201 "intermod.m"
          {
#line 1203 "intermod.m"
            *transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__3_3;
#line 1203 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1201 "intermod.m"
          }
#line 1200 "intermod.m"
        else
#line 1206 "intermod.m"
          {
#line 1206 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEq0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_35_35, (MR_Integer) 0)));
#line 1206 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserCompare0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_35_35, (MR_Integer) 1)));
#line 1206 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEq_24;
#line 1206 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserCompare_25;
#line 1206 "intermod.m"
            MR_Word transform_hlds__intermod__V_30_30;
#line 1206 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_32_32;

#line 1217 "intermod.m"
            if ((transform_hlds__intermod__MaybeUserEq0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1217 "intermod.m"
              {
#line 1217 "intermod.m"
                transform_hlds__intermod__MaybeUserEq_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1217 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_32_32 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1217 "intermod.m"
              }
#line 1217 "intermod.m"
            else
#line 1219 "intermod.m"
              {
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__Pred0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq0_22, (MR_Integer) 0)));
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__Pred_46;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__SpecialPreds_48;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__UnifyPredId_49;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__UnifyPredInfo_50;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__TVarSet_51;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__ExistQVars_52;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__ArgTypes_53;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__HeadTypeParams_54;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__Markers0_55;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__Markers_56;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__Context_57;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__UserEqPredId_58;
#line 1219 "intermod.m"
                MR_Word transform_hlds__intermod__V_62_62;
#line 1221 "intermod.m"
                MR_Box transform_hlds__intermod__conv0_UnifyPredId_49;
#line 627 "intermod.m"
                MR_Word transform_hlds__intermod__V_73_73;

#line 1220 "intermod.m"
                {
#line 1220 "intermod.m"
                  hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_48);
                }
#line 1221 "intermod.m"
                {
#line 1221 "intermod.m"
                  transform_hlds__intermod__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1221 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_2));
#line 1221 "intermod.m"
                }
#line 1221 "intermod.m"
                {
#line 1221 "intermod.m"
                  mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[2], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_48, ((MR_Box) (transform_hlds__intermod__V_62_62)), &transform_hlds__intermod__conv0_UnifyPredId_49);
                }
#line 1221 "intermod.m"
                transform_hlds__intermod__UnifyPredId_49 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_49);
#line 1222 "intermod.m"
                {
#line 1222 "intermod.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_49, &transform_hlds__intermod__UnifyPredInfo_50);
                }
#line 1223 "intermod.m"
                {
#line 1223 "intermod.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__TVarSet_51, &transform_hlds__intermod__ExistQVars_52, &transform_hlds__intermod__ArgTypes_53);
                }
#line 1224 "intermod.m"
                {
#line 1224 "intermod.m"
                  hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__HeadTypeParams_54);
                }
#line 1225 "intermod.m"
                {
#line 1225 "intermod.m"
                  hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_55);
                }
#line 1226 "intermod.m"
                {
#line 1226 "intermod.m"
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_55, &transform_hlds__intermod__Markers_56);
                }
#line 1227 "intermod.m"
                {
#line 1227 "intermod.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__Context_57);
                }
#line 1228 "intermod.m"
                {
#line 1228 "intermod.m"
                  hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_56, transform_hlds__intermod__TVarSet_51, transform_hlds__intermod__ExistQVars_52, transform_hlds__intermod__ArgTypes_53, transform_hlds__intermod__HeadTypeParams_54, transform_hlds__intermod__Context_57, transform_hlds__intermod__Pred0_45, &transform_hlds__intermod__Pred_46, &transform_hlds__intermod__UserEqPredId_58);
                }
#line 1219 "intermod.m"
                {
#line 1219 "intermod.m"
                  transform_hlds__intermod__MaybeUserEq_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq_24, 0) = ((MR_Box) (transform_hlds__intermod__Pred_46));
#line 1219 "intermod.m"
                }
#line 627 "intermod.m"
                {
#line 627 "intermod.m"
                  transform_hlds__intermod__V_73_73 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 627 "intermod.m"
                {
#line 627 "intermod.m"
                  transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_58, transform_hlds__intermod__V_73_73);
                }
#line 632 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 631 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_Info_32_32 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 632 "intermod.m"
                else
#line 633 "intermod.m"
                  {
#line 633 "intermod.m"
                    MR_Word transform_hlds__intermod__V_75_75;

#line 633 "intermod.m"
                    {
#line 633 "intermod.m"
                      transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_58, &transform_hlds__intermod__V_75_75, transform_hlds__intermod__STATE_VARIABLE_Info_0_5, &transform_hlds__intermod__STATE_VARIABLE_Info_32_32);
                    }
#line 633 "intermod.m"
                  }
#line 1219 "intermod.m"
              }
#line 1209 "intermod.m"
            {
#line 1209 "intermod.m"
              transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(transform_hlds__intermod__ModuleInfo_1, (MR_Integer) 2, transform_hlds__intermod__TypeCtor_2, transform_hlds__intermod__MaybeUserCompare0_23, &transform_hlds__intermod__MaybeUserCompare_25, transform_hlds__intermod__STATE_VARIABLE_Info_32_32, transform_hlds__intermod__STATE_VARIABLE_Info_6);
            }
#line 1206 "intermod.m"
            {
#line 1206 "intermod.m"
              transform_hlds__intermod__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, 0) = ((MR_Box) (transform_hlds__intermod__MaybeUserEq_24));
#line 1206 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserCompare_25));
#line 1206 "intermod.m"
            }
#line 1206 "intermod.m"
            {
#line 1206 "intermod.m"
              MR_Word base;
#line 1206 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "intermod.m"
              *transform_hlds__intermod__HeadVar__4_4 = base;
#line 1206 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_30_30));
#line 1206 "intermod.m"
            }
#line 1206 "intermod.m"
          }
#line 1200 "intermod.m"
      }
#line 1200 "intermod.m"
  }
#line 1196 "intermod.m"
}

#line 1102 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
#line 1102 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_7,
#line 1102 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_8,
#line 1102 "intermod.m"
  MR_Word transform_hlds__intermod__ForeignTypeBody0_9,
#line 1102 "intermod.m"
  MR_Word * transform_hlds__intermod__ForeignTypeBody_10,
#line 1102 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 1102 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25)
#line 1102 "intermod.m"
{
#line 1107 "intermod.m"
  {
#line 1107 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 0)));
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 1)));
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 2)));
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 3)));
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 4)));
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_17;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__Target_18;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC_19;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL_20;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp_21;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava_22;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang_23;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_26_26;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_27_27;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_28_28;
#line 1107 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_29_29;

#line 1110 "intermod.m"
    {
#line 1110 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_7, &transform_hlds__intermod__Globals_17);
    }
#line 1111 "intermod.m"
    {
#line 1111 "intermod.m"
      libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_17, &transform_hlds__intermod__Target_18);
    }
#line 1126 "intermod.m"
    if ((((transform_hlds__intermod__Target_18 == (MR_Integer) 0)) || ((transform_hlds__intermod__Target_18 == (MR_Integer) 4))))
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
#line 1142 "intermod.m"
      {
#line 1143 "intermod.m"
        transform_hlds__intermod__MaybeIL_20 = transform_hlds__intermod__MaybeIL0_12;
#line 1143 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_Info_27_27 = transform_hlds__intermod__STATE_VARIABLE_Info_26_26;
#line 1142 "intermod.m"
      }
#line 1149 "intermod.m"
    if ((transform_hlds__intermod__Target_18 == (MR_Integer) 2))
#line 1147 "intermod.m"
      {
#line 1147 "intermod.m"
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeCSharp0_15, &transform_hlds__intermod__MaybeCSharp_21, transform_hlds__intermod__STATE_VARIABLE_Info_27_27, &transform_hlds__intermod__STATE_VARIABLE_Info_28_28);
      }
#line 1149 "intermod.m"
    else
#line 1154 "intermod.m"
      {
#line 1155 "intermod.m"
        transform_hlds__intermod__MaybeCSharp_21 = transform_hlds__intermod__MaybeCSharp0_15;
#line 1155 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_Info_28_28 = transform_hlds__intermod__STATE_VARIABLE_Info_27_27;
#line 1154 "intermod.m"
      }
#line 1161 "intermod.m"
    if ((transform_hlds__intermod__Target_18 == (MR_Integer) 3))
#line 1159 "intermod.m"
      {
#line 1159 "intermod.m"
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeJava0_14, &transform_hlds__intermod__MaybeJava_22, transform_hlds__intermod__STATE_VARIABLE_Info_28_28, &transform_hlds__intermod__STATE_VARIABLE_Info_29_29);
      }
#line 1161 "intermod.m"
    else
#line 1166 "intermod.m"
      {
#line 1167 "intermod.m"
        transform_hlds__intermod__MaybeJava_22 = transform_hlds__intermod__MaybeJava0_14;
#line 1167 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_Info_29_29 = transform_hlds__intermod__STATE_VARIABLE_Info_28_28;
#line 1166 "intermod.m"
      }
#line 1173 "intermod.m"
    if ((transform_hlds__intermod__Target_18 == (MR_Integer) 4))
#line 1171 "intermod.m"
      {
#line 1171 "intermod.m"
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeErlang0_16, &transform_hlds__intermod__MaybeErlang_23, transform_hlds__intermod__STATE_VARIABLE_Info_29_29, transform_hlds__intermod__STATE_VARIABLE_Info_25);
      }
#line 1173 "intermod.m"
    else
#line 1178 "intermod.m"
      {
#line 1179 "intermod.m"
        transform_hlds__intermod__MaybeErlang_23 = transform_hlds__intermod__MaybeErlang0_16;
#line 1179 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_29_29;
#line 1178 "intermod.m"
      }
#line 1181 "intermod.m"
    {
#line 1181 "intermod.m"
      MR_Word base;
#line 1181 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "intermod.m"
      *transform_hlds__intermod__ForeignTypeBody_10 = base;
#line 1181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__MaybeIL_20));
#line 1181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__MaybeC_19));
#line 1181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__MaybeJava_22));
#line 1181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__MaybeCSharp_21));
#line 1181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__MaybeErlang_23));
#line 1181 "intermod.m"
    }
#line 1107 "intermod.m"
  }
#line 1102 "intermod.m"
}

#line 1035 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_4_p_0(
#line 1035 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_5,
#line 1035 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_6,
#line 1035 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_33,
#line 1035 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_34)
#line 1035 "intermod.m"
{
#line 1038 "intermod.m"
  {
#line 1038 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1038 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 1038 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_9;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 1235 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_60;
#line 1235 "intermod.m"
    MR_Word transform_hlds__intermod__Name_61;
#line 1235 "intermod.m"
    MR_Word transform_hlds__intermod__V_64_64;
#line 1237 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_62;
#line 1238 "intermod.m"
    MR_String transform_hlds__intermod__V_63_63;

#line 1040 "intermod.m"
    {
#line 1040 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_8, &transform_hlds__intermod__ModuleName_9);
    }
#line 1236 "intermod.m"
    {
#line 1236 "intermod.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__ImportStatus_60);
    }
#line 1237 "intermod.m"
    transform_hlds__intermod__Name_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_5, (MR_Integer) 0)));
#line 1237 "intermod.m"
    transform_hlds__intermod___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_5, (MR_Integer) 1)));
#line 1238 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Name_61)) == (MR_mktag((MR_Integer) 1)));
#line 1238 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1238 "intermod.m"
      {
#line 1238 "intermod.m"
        transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_61, (MR_Integer) 0)));
#line 1238 "intermod.m"
        transform_hlds__intermod__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_61, (MR_Integer) 1)));
#line 1238 "intermod.m"
        {
#line 1238 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_9, transform_hlds__intermod__V_64_64);
        }
#line 1235 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1239 "intermod.m"
          {
#line 1239 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_60);
          }
#line 1238 "intermod.m"
      }
#line 1098 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1042 "intermod.m"
      {
#line 1042 "intermod.m"
        MR_Word transform_hlds__intermod__TypeBody0_10;
#line 1042 "intermod.m"
        MR_Word transform_hlds__intermod__TypeDefn_27;
#line 1042 "intermod.m"
        MR_Word transform_hlds__intermod__Types0_32;
#line 1042 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_39_39;
#line 1042 "intermod.m"
        MR_Word transform_hlds__intermod__V_41_41;
#line 1042 "intermod.m"
        MR_Word transform_hlds__intermod__V_43_43;
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_89_89;
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_90_90;
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_91_91;
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_94_94;
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_95_95;
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_96_96;

#line 1042 "intermod.m"
        {
#line 1042 "intermod.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeBody0_10);
        }
#line 1080 "intermod.m"
        if (((MR_tag((MR_Word) transform_hlds__intermod__TypeBody0_10)) == (MR_mktag((MR_Integer) 1))))
#line 1046 "intermod.m"
          {
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 0)));
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__Tags_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 1)));
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__CheaperTagTest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 2)));
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__Enum_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 3)));
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEqComp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 4)));
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeDirectArgCtors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 5)));
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__ReservedTag_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__ReservedAddr_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeForeign0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 7)));
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__Globals_20;
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__Target_21;
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeForeign_24;
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEqComp_25;
#line 1046 "intermod.m"
            MR_Word transform_hlds__intermod__TypeBody_26;
#line 1071 "intermod.m"
            MR_Word transform_hlds__intermod__ForeignTypeBody0_22;
#line 1061 "intermod.m"
            MR_Word transform_hlds__intermod__V_37_37;
#line 1061 "intermod.m"
            MR_Word transform_hlds__intermod__V_47_47;

#line 1047 "intermod.m"
            {
#line 1047 "intermod.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_8, &transform_hlds__intermod__Globals_20);
            }
#line 1048 "intermod.m"
            {
#line 1048 "intermod.m"
              libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_20, &transform_hlds__intermod__Target_21);
            }
#line 1061 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeForeign0_19)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1061 "intermod.m"
              {
#line 1061 "intermod.m"
                transform_hlds__intermod__ForeignTypeBody0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeForeign0_19, (MR_Integer) 0)));
#line 1062 "intermod.m"
                transform_hlds__intermod__V_37_37 = (MR_Integer) 1;
#line 1062 "intermod.m"
                {
#line 1062 "intermod.m"
                  backend_libs__foreign__have_foreign_type_for_backend_3_p_0(transform_hlds__intermod__Target_21, transform_hlds__intermod__ForeignTypeBody0_22, &transform_hlds__intermod__V_47_47);
                }
#line 1062 "intermod.m"
                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_37_37 == transform_hlds__intermod__V_47_47);
#line 1061 "intermod.m"
              }
#line 1071 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1066 "intermod.m"
              {
#line 1066 "intermod.m"
                MR_Word transform_hlds__intermod__ForeignTypeBody_23;
#line 1066 "intermod.m"
                MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_38_38;
#line 2172 "intermod.m"
                MR_Word transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2172 "intermod.m"
                MR_Word transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2172 "intermod.m"
                MR_Word transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2172 "intermod.m"
                MR_Word transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2172 "intermod.m"
                MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2172 "intermod.m"
                MR_Word transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 2172 "intermod.m"
                MR_Word transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2172 "intermod.m"
                MR_Word transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 2172 "intermod.m"
                MR_Word transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));

#line 2172 "intermod.m"
                {
#line 2172 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2172 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (transform_hlds__intermod__V_68_68));
#line 2172 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 2172 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (transform_hlds__intermod__V_70_70));
#line 2172 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (transform_hlds__intermod__V_71_71));
#line 2172 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (transform_hlds__intermod__V_72_72));
#line 2172 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 5) = ((MR_Box) (transform_hlds__intermod__V_73_73));
#line 2172 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2172 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 7) = ((MR_Box) (transform_hlds__intermod__V_75_75));
#line 2172 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 8) = ((MR_Box) (transform_hlds__intermod__V_76_76));
#line 2172 "intermod.m"
                }
#line 1067 "intermod.m"
                {
#line 1067 "intermod.m"
                  transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__ForeignTypeBody0_22, &transform_hlds__intermod__ForeignTypeBody_23, transform_hlds__intermod__STATE_VARIABLE_Info_38_38, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
                }
#line 1069 "intermod.m"
                {
#line 1069 "intermod.m"
                  transform_hlds__intermod__MaybeForeign_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeForeign_24, 0) = ((MR_Box) (transform_hlds__intermod__ForeignTypeBody_23));
#line 1069 "intermod.m"
                }
#line 1070 "intermod.m"
                transform_hlds__intermod__MaybeUserEqComp_25 = transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1066 "intermod.m"
              }
#line 1071 "intermod.m"
            else
#line 1073 "intermod.m"
              {
#line 1072 "intermod.m"
                {
#line 1072 "intermod.m"
                  transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__MaybeUserEqComp0_15, &transform_hlds__intermod__MaybeUserEqComp_25, transform_hlds__intermod__STATE_VARIABLE_Info_0_33, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
                }
#line 1074 "intermod.m"
                transform_hlds__intermod__MaybeForeign_24 = transform_hlds__intermod__MaybeForeign0_19;
#line 1073 "intermod.m"
              }
#line 1076 "intermod.m"
            {
#line 1076 "intermod.m"
              transform_hlds__intermod__TypeBody_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 0) = ((MR_Box) (transform_hlds__intermod__Ctors_11));
#line 1076 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 1) = ((MR_Box) (transform_hlds__intermod__Tags_12));
#line 1076 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 2) = ((MR_Box) (transform_hlds__intermod__CheaperTagTest_13));
#line 1076 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 3) = ((MR_Box) (transform_hlds__intermod__Enum_14));
#line 1076 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 4) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_25));
#line 1076 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 5) = ((MR_Box) (transform_hlds__intermod__MaybeDirectArgCtors_16));
#line 1076 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 6) = ((MR_Box) ((transform_hlds__intermod__ReservedTag_17 | ((transform_hlds__intermod__ReservedAddr_18 << (MR_Integer) 1)))));
#line 1076 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 7) = ((MR_Box) (transform_hlds__intermod__MaybeForeign_24));
#line 1076 "intermod.m"
            }
#line 1079 "intermod.m"
            {
#line 1079 "intermod.m"
              hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__intermod__TypeBody_26, transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeDefn_27);
            }
#line 1046 "intermod.m"
          }
#line 1080 "intermod.m"
        else
#line 1080 "intermod.m"
          if (((MR_tag((MR_Word) transform_hlds__intermod__TypeBody0_10)) == (MR_mktag((MR_Integer) 0))))
#line 1081 "intermod.m"
            {
#line 1081 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_35_35;
#line 1081 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignTypeBody0_44 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__TypeBody0_10), (MR_Integer) 0);
#line 1081 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignTypeBody_45;
#line 1081 "intermod.m"
              MR_Word transform_hlds__intermod__TypeBody_46;
#line 2172 "intermod.m"
              MR_Word transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2172 "intermod.m"
              MR_Word transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2172 "intermod.m"
              MR_Word transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2172 "intermod.m"
              MR_Word transform_hlds__intermod__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2172 "intermod.m"
              MR_Word transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2172 "intermod.m"
              MR_Word transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 2172 "intermod.m"
              MR_Word transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2172 "intermod.m"
              MR_Word transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 2172 "intermod.m"
              MR_Word transform_hlds__intermod__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));

#line 2172 "intermod.m"
              {
#line 2172 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2172 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (transform_hlds__intermod__V_79_79));
#line 2172 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (transform_hlds__intermod__V_80_80));
#line 2172 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (transform_hlds__intermod__V_81_81));
#line 2172 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (transform_hlds__intermod__V_82_82));
#line 2172 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (transform_hlds__intermod__V_83_83));
#line 2172 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (transform_hlds__intermod__V_84_84));
#line 2172 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2172 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (transform_hlds__intermod__V_86_86));
#line 2172 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 8) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2172 "intermod.m"
              }
#line 1085 "intermod.m"
              {
#line 1085 "intermod.m"
                transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__ForeignTypeBody0_44, &transform_hlds__intermod__ForeignTypeBody_45, transform_hlds__intermod__STATE_VARIABLE_Info_35_35, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
              }
#line 1087 "intermod.m"
              transform_hlds__intermod__TypeBody_46 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__ForeignTypeBody_45);
#line 1088 "intermod.m"
              {
#line 1088 "intermod.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__intermod__TypeBody_46, transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeDefn_27);
              }
#line 1081 "intermod.m"
            }
#line 1080 "intermod.m"
          else
#line 1093 "intermod.m"
            {
#line 1094 "intermod.m"
              transform_hlds__intermod__TypeDefn_27 = transform_hlds__intermod__TypeDefn0_6;
#line 1094 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_39_39 = transform_hlds__intermod__STATE_VARIABLE_Info_0_33;
#line 1093 "intermod.m"
            }
#line 2158 "intermod.m"
        transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 2158 "intermod.m"
        transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 2158 "intermod.m"
        transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 2158 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 2158 "intermod.m"
        transform_hlds__intermod__Types0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 2158 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 2158 "intermod.m"
        transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 2158 "intermod.m"
        transform_hlds__intermod__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 2158 "intermod.m"
        transform_hlds__intermod__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 8)));
#line 1097 "intermod.m"
        {
#line 1097 "intermod.m"
          transform_hlds__intermod__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_43_43, 0) = ((MR_Box) (transform_hlds__intermod__TypeCtor_5));
#line 1097 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_43_43, 1) = ((MR_Box) (transform_hlds__intermod__TypeDefn_27));
#line 1097 "intermod.m"
        }
#line 1097 "intermod.m"
        {
#line 1097 "intermod.m"
          transform_hlds__intermod__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_41_41, 0) = ((MR_Box) (transform_hlds__intermod__V_43_43));
#line 1097 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_41_41, 1) = ((MR_Box) (transform_hlds__intermod__Types0_32));
#line 1097 "intermod.m"
        }
#line 1097 "intermod.m"
        {
#line 1097 "intermod.m"
          transform_hlds__intermod__intermod_info_set_types_3_p_0(transform_hlds__intermod__V_41_41, transform_hlds__intermod__STATE_VARIABLE_Info_39_39, transform_hlds__intermod__STATE_VARIABLE_Info_34);
#line 1097 "intermod.m"
          return;
        }
#line 1042 "intermod.m"
      }
#line 1098 "intermod.m"
    else
#line 1097 "intermod.m"
      *transform_hlds__intermod__STATE_VARIABLE_Info_34 = transform_hlds__intermod__STATE_VARIABLE_Info_0_33;
#line 1038 "intermod.m"
  }
#line 1035 "intermod.m"
}

#line 1033 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0_1(
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1033 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1033 "intermod.m"
{
#line 1033 "intermod.m"
  {
#line 1033 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1033 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34;

#line 1033 "intermod.m"
    {
#line 1033 "intermod.m"
      transform_hlds__intermod__gather_types_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34);
    }
#line 1033 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34));
#line 1033 "intermod.m"
  }
#line 1033 "intermod.m"
}

#line 1028 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0(
#line 1028 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1028 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7)
#line 1028 "intermod.m"
{
#line 1030 "intermod.m"
  {
#line 1030 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1030 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 1030 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable_5;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 1033 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7;

#line 1032 "intermod.m"
    {
#line 1032 "intermod.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__ModuleInfo_4, &transform_hlds__intermod__TypeTable_5);
    }
#line 1033 "intermod.m"
    {
#line 1033 "intermod.m"
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[13], transform_hlds__intermod__TypeTable_5, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_6)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
    }
#line 1033 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_Info_7 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
#line 1030 "intermod.m"
  }
#line 1028 "intermod.m"
}

#line 992 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
#line 992 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 992 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 992 "intermod.m"
{
#line 992 "intermod.m"
  {
#line 992 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 992 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 992 "intermod.m"
    MR_Word transform_hlds__intermod__conv2_HeadVar__2_55;

#line 992 "intermod.m"
    {
#line 992 "intermod.m"
      transform_hlds__intermod__conv2_HeadVar__2_55 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__994__1_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 992 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv2_HeadVar__2_55));
#line 992 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 992 "intermod.m"
  }
#line 992 "intermod.m"
}

#line 979 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
#line 979 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 979 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 979 "intermod.m"
{
#line 979 "intermod.m"
  {
#line 979 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 979 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 979 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__2_51;

#line 979 "intermod.m"
    {
#line 979 "intermod.m"
      transform_hlds__intermod__conv1_HeadVar__2_51 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__981__1_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 979 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__2_51));
#line 979 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 979 "intermod.m"
  }
#line 979 "intermod.m"
}

#line 964 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_11,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceMethodName0_12,
#line 964 "intermod.m"
  MR_Integer transform_hlds__intermod__MethodArity_13,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallTVarSet_14,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallExistQTVars_15,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallArgTypes_16,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_17,
#line 964 "intermod.m"
  MR_Word transform_hlds__intermod__MethodContext_18,
#line 964 "intermod.m"
  MR_Word * transform_hlds__intermod__MaybePredId_19,
#line 964 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethodName_20)
#line 964 "intermod.m"
{
#line 972 "intermod.m"
  {
#line 972 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 972 "intermod.m"
    MR_Word transform_hlds__intermod__CtorFieldTable_21;
#line 972 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors0_25;
#line 972 "intermod.m"
    MR_Word transform_hlds__intermod__Ctors_32;
#line 972 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors1_35;
#line 972 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors_37;
#line 972 "intermod.m"
    MR_Word transform_hlds__intermod__PredicateTable_38;
#line 972 "intermod.m"
    MR_Word transform_hlds__intermod__PredIds_39;
#line 983 "intermod.m"
    MR_Word transform_hlds__intermod__FieldDefns_24;
#line 976 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_79_79;
#line 976 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_80_80;
#line 976 "intermod.m"
    MR_Word transform_hlds__intermod__FieldName_23;
#line 976 "intermod.m"
    MR_Integer transform_hlds__intermod__V_86_86;
#line 975 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22;
#line 977 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_FieldDefns_24;
#line 996 "intermod.m"
    MR_Word transform_hlds__intermod__MatchingConstructors_34;
#line 989 "intermod.m"
    MR_Word transform_hlds__intermod__ConsId_33;
#line 989 "intermod.m"
    MR_Word transform_hlds__intermod__V_52_52;
#line 1014 "intermod.m"
    MR_Word transform_hlds__intermod__PredId_42;
#line 1014 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodFuncName_43;
#line 1005 "intermod.m"
    MR_Word transform_hlds__intermod__V_57_57;
#line 1005 "intermod.m"
    MR_Word transform_hlds__intermod__V_40_40;
#line 1005 "intermod.m"
    MR_Word transform_hlds__intermod__V_41_41;

#line 973 "intermod.m"
    {
#line 973 "intermod.m"
      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__CtorFieldTable_21);
    }
#line 975 "intermod.m"
    {
#line 975 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__InstanceMethodName0_12, &transform_hlds__intermod__V_86_86, &transform_hlds__intermod__V_22_22, &transform_hlds__intermod__FieldName_23);
    }
#line 976 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 976 "intermod.m"
      {
#line 975 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__MethodArity_13 == transform_hlds__intermod__V_86_86);
#line 976 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 976 "intermod.m"
          {
#line 14147 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 14149 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeInfo_80_80 = (MR_Word) &transform_hlds__intermod_scalar_common_1[3];
#line 977 "intermod.m"
            {
#line 977 "intermod.m"
              transform_hlds__intermod__succeeded = mercury__map__search_3_p_0(transform_hlds__intermod__TypeCtorInfo_79_79, transform_hlds__intermod__TypeInfo_80_80, transform_hlds__intermod__CtorFieldTable_21, ((MR_Box) (transform_hlds__intermod__FieldName_23)), &transform_hlds__intermod__conv0_FieldDefns_24);
            }
#line 977 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 977 "intermod.m"
              {
#line 977 "intermod.m"
                transform_hlds__intermod__FieldDefns_24 = ((MR_Word) transform_hlds__intermod__conv0_FieldDefns_24);
#line 977 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 977 "intermod.m"
              }
#line 976 "intermod.m"
          }
#line 976 "intermod.m"
      }
#line 983 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 979 "intermod.m"
      {
#line 979 "intermod.m"
        {
#line 979 "intermod.m"
          transform_hlds__intermod__TypeCtors0_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[11], transform_hlds__intermod__FieldDefns_24);
        }
#line 979 "intermod.m"
      }
#line 983 "intermod.m"
    else
#line 984 "intermod.m"
      transform_hlds__intermod__TypeCtors0_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "intermod.m"
    {
#line 986 "intermod.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Ctors_32);
    }
#line 989 "intermod.m"
    {
#line 989 "intermod.m"
      transform_hlds__intermod__V_52_52 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 988 "intermod.m"
    {
#line 988 "intermod.m"
      transform_hlds__intermod__ConsId_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 988 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 988 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 1) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName0_12));
#line 988 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 2) = ((MR_Box) (transform_hlds__intermod__MethodArity_13));
#line 988 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 3) = ((MR_Box) (transform_hlds__intermod__V_52_52));
#line 988 "intermod.m"
    }
#line 990 "intermod.m"
    {
#line 990 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_data__search_cons_table_3_p_0(transform_hlds__intermod__Ctors_32, transform_hlds__intermod__ConsId_33, &transform_hlds__intermod__MatchingConstructors_34);
    }
#line 996 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 992 "intermod.m"
      {
#line 992 "intermod.m"
        {
#line 992 "intermod.m"
          transform_hlds__intermod__TypeCtors1_35 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[12], transform_hlds__intermod__MatchingConstructors_34);
        }
#line 992 "intermod.m"
      }
#line 996 "intermod.m"
    else
#line 997 "intermod.m"
      transform_hlds__intermod__TypeCtors1_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 999 "intermod.m"
    {
#line 999 "intermod.m"
      transform_hlds__intermod__TypeCtors_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__intermod__TypeCtors0_25, transform_hlds__intermod__TypeCtors1_35);
    }
#line 1001 "intermod.m"
    {
#line 1001 "intermod.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__PredicateTable_38);
    }
#line 1002 "intermod.m"
    {
#line 1002 "intermod.m"
      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(transform_hlds__intermod__PredicateTable_38, (MR_Integer) 1, transform_hlds__intermod__InstanceMethodName0_12, transform_hlds__intermod__MethodArity_13, &transform_hlds__intermod__PredIds_39);
    }
#line 1005 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__PredIds_39)) == (MR_mktag((MR_Integer) 1)));
#line 1005 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1005 "intermod.m"
      {
#line 1005 "intermod.m"
        transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__PredIds_39, (MR_Integer) 0)));
#line 1005 "intermod.m"
        transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__PredIds_39, (MR_Integer) 1)));
#line 1008 "intermod.m"
        transform_hlds__intermod__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1006 "intermod.m"
        {
#line 1006 "intermod.m"
          transform_hlds__intermod__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__PredIds_39, transform_hlds__intermod__MethodCallTVarSet_14, transform_hlds__intermod__MethodCallExistQTVars_15, transform_hlds__intermod__MethodCallArgTypes_16, transform_hlds__intermod__MethodCallHeadTypeParams_17, transform_hlds__intermod__V_57_57, transform_hlds__intermod__MethodContext_18, &transform_hlds__intermod__PredId_42, &transform_hlds__intermod__InstanceMethodFuncName_43);
        }
#line 1005 "intermod.m"
      }
#line 1014 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1011 "intermod.m"
      {
#line 1011 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__TypeCtors_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1011 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1011 "intermod.m"
          {
#line 1013 "intermod.m"
            *transform_hlds__intermod__InstanceMethodName_20 = transform_hlds__intermod__InstanceMethodFuncName_43;
#line 1012 "intermod.m"
            {
#line 1012 "intermod.m"
              MR_Word base;
#line 1012 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "intermod.m"
              *transform_hlds__intermod__MaybePredId_19 = base;
#line 1012 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_42));
#line 1012 "intermod.m"
            }
#line 1012 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1011 "intermod.m"
          }
#line 1011 "intermod.m"
      }
#line 1014 "intermod.m"
    else
#line 1015 "intermod.m"
      {
#line 1015 "intermod.m"
        MR_Word transform_hlds__intermod__TheTypeCtor_44;
#line 1015 "intermod.m"
        MR_Word transform_hlds__intermod__V_58_58;
#line 1020 "intermod.m"
        MR_Word transform_hlds__intermod__TypeModule_45;
#line 1017 "intermod.m"
        MR_Word transform_hlds__intermod__V_59_59;
#line 1017 "intermod.m"
        MR_Integer transform_hlds__intermod__V_47_47;
#line 1017 "intermod.m"
        MR_String transform_hlds__intermod__V_46_46;

#line 1015 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__TypeCtors_37)) == (MR_mktag((MR_Integer) 1)));
#line 1015 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1015 "intermod.m"
          {
#line 1015 "intermod.m"
            transform_hlds__intermod__TheTypeCtor_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeCtors_37, (MR_Integer) 0)));
#line 1015 "intermod.m"
            transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeCtors_37, (MR_Integer) 1)));
#line 1015 "intermod.m"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1015 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1015 "intermod.m"
              {
#line 1016 "intermod.m"
                *transform_hlds__intermod__MaybePredId_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "intermod.m"
                transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TheTypeCtor_44, (MR_Integer) 0)));
#line 1017 "intermod.m"
                transform_hlds__intermod__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TheTypeCtor_44, (MR_Integer) 1)));
#line 1017 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 1017 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1017 "intermod.m"
                  {
#line 1017 "intermod.m"
                    transform_hlds__intermod__TypeModule_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, (MR_Integer) 0)));
#line 1017 "intermod.m"
                    transform_hlds__intermod__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, (MR_Integer) 1)));
#line 1018 "intermod.m"
                    {
#line 1018 "intermod.m"
                      MR_String transform_hlds__intermod__UnqualMethodName_48;

#line 1018 "intermod.m"
                      {
#line 1018 "intermod.m"
                        transform_hlds__intermod__UnqualMethodName_48 = mdbcomp__prim_data__unqualify_name_1_f_0(transform_hlds__intermod__InstanceMethodName0_12);
                      }
#line 1019 "intermod.m"
                      {
#line 1019 "intermod.m"
                        MR_Word base;
#line 1019 "intermod.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "intermod.m"
                        *transform_hlds__intermod__InstanceMethodName_20 = base;
#line 1019 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__TypeModule_45));
#line 1019 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__UnqualMethodName_48));
#line 1019 "intermod.m"
                      }
#line 1018 "intermod.m"
                    }
#line 1017 "intermod.m"
                  }
#line 1017 "intermod.m"
                else
#line 1021 "intermod.m"
                  {
#line 1021 "intermod.m"
                    {
#line 1021 "intermod.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.find_func_matching_instance_method\'/10", (MR_String) "unqualified type_ctor in hlds_cons_defn or hlds_ctor_field_defn");
                    }
#line 1021 "intermod.m"
                  }
#line 1020 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 1015 "intermod.m"
              }
#line 1015 "intermod.m"
          }
#line 1015 "intermod.m"
      }
#line 972 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 972 "intermod.m"
  }
#line 964 "intermod.m"
}

#line 896 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
#line 896 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 896 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 896 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethod_9,
#line 896 "intermod.m"
  MR_Word transform_hlds__intermod__PredIds0_10,
#line 896 "intermod.m"
  MR_Word * transform_hlds__intermod__PredIds_11)
#line 896 "intermod.m"
{
#line 901 "intermod.m"
  {
#line 901 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallPredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethod0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallPredInfo_12;
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallTVarSet_13;
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallExistQTVars_14;
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallArgTypes_15;
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_16;
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__PredOrFunc_17;
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__MethodName_18;
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodDefn0_19;
#line 901 "intermod.m"
    MR_Integer transform_hlds__intermod__MethodArity_20;
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__MethodContext_21;
#line 901 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodDefn_26;

#line 902 "intermod.m"
    {
#line 902 "intermod.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__MethodCallPredId_7, &transform_hlds__intermod__MethodCallPredInfo_12);
    }
#line 903 "intermod.m"
    {
#line 903 "intermod.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__MethodCallPredInfo_12, &transform_hlds__intermod__MethodCallTVarSet_13, &transform_hlds__intermod__MethodCallExistQTVars_14, &transform_hlds__intermod__MethodCallArgTypes_15);
    }
#line 905 "intermod.m"
    {
#line 905 "intermod.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__MethodCallPredInfo_12, &transform_hlds__intermod__MethodCallHeadTypeParams_16);
    }
#line 907 "intermod.m"
    transform_hlds__intermod__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 0)));
#line 907 "intermod.m"
    transform_hlds__intermod__MethodName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 1)));
#line 907 "intermod.m"
    transform_hlds__intermod__InstanceMethodDefn0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 2)));
#line 907 "intermod.m"
    transform_hlds__intermod__MethodArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 3)));
#line 907 "intermod.m"
    transform_hlds__intermod__MethodContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 4)));
#line 934 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__InstanceMethodDefn0_19)) == (MR_mktag((MR_Integer) 1))))
#line 945 "intermod.m"
      {
#line 945 "intermod.m"
        MR_Word transform_hlds__intermod__PredId_33;

#line 952 "intermod.m"
        {
#line 952 "intermod.m"
          transform_hlds__intermod__PredId_33 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 953 "intermod.m"
        {
#line 953 "intermod.m"
          MR_Word base;
#line 953 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "intermod.m"
          *transform_hlds__intermod__PredIds_11 = base;
#line 953 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_33));
#line 953 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 953 "intermod.m"
        }
#line 955 "intermod.m"
        transform_hlds__intermod__InstanceMethodDefn_26 = transform_hlds__intermod__InstanceMethodDefn0_19;
#line 945 "intermod.m"
      }
#line 934 "intermod.m"
    else
#line 934 "intermod.m"
      {
#line 934 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn0_19, (MR_Integer) 0)));

#line 934 "intermod.m"
        if ((transform_hlds__intermod__PredOrFunc_17 == (MR_Integer) 1))
#line 926 "intermod.m"
          {
#line 926 "intermod.m"
            MR_Word transform_hlds__intermod__MaybePredId_23;
#line 926 "intermod.m"
            MR_Word transform_hlds__intermod__InstanceMethodName_24;

#line 913 "intermod.m"
            {
#line 913 "intermod.m"
              transform_hlds__intermod__succeeded = transform_hlds__intermod__find_func_matching_instance_method_10_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__V_34_34, transform_hlds__intermod__MethodArity_20, transform_hlds__intermod__MethodCallTVarSet_13, transform_hlds__intermod__MethodCallExistQTVars_14, transform_hlds__intermod__MethodCallArgTypes_15, transform_hlds__intermod__MethodCallHeadTypeParams_16, transform_hlds__intermod__MethodContext_21, &transform_hlds__intermod__MaybePredId_23, &transform_hlds__intermod__InstanceMethodName_24);
            }
#line 926 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 924 "intermod.m"
              {
#line 921 "intermod.m"
                if ((transform_hlds__intermod__MaybePredId_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 922 "intermod.m"
                  *transform_hlds__intermod__PredIds_11 = transform_hlds__intermod__PredIds0_10;
#line 921 "intermod.m"
                else
#line 919 "intermod.m"
                  {
#line 919 "intermod.m"
                    MR_Word transform_hlds__intermod__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybePredId_23, (MR_Integer) 0)));

#line 920 "intermod.m"
                    {
#line 920 "intermod.m"
                      MR_Word base;
#line 920 "intermod.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "intermod.m"
                      *transform_hlds__intermod__PredIds_11 = base;
#line 920 "intermod.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_25));
#line 920 "intermod.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 920 "intermod.m"
                    }
#line 919 "intermod.m"
                  }
#line 925 "intermod.m"
                {
#line 925 "intermod.m"
                  transform_hlds__intermod__InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 925 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn_26, 0) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName_24));
#line 925 "intermod.m"
                }
#line 924 "intermod.m"
              }
#line 926 "intermod.m"
            else
#line 928 "intermod.m"
              {
#line 928 "intermod.m"
                MR_Word transform_hlds__intermod__PredId_29;

#line 928 "intermod.m"
                {
#line 928 "intermod.m"
                  transform_hlds__intermod__PredId_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 929 "intermod.m"
                {
#line 929 "intermod.m"
                  MR_Word base;
#line 929 "intermod.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "intermod.m"
                  *transform_hlds__intermod__PredIds_11 = base;
#line 929 "intermod.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_29));
#line 929 "intermod.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 929 "intermod.m"
                }
#line 932 "intermod.m"
                transform_hlds__intermod__InstanceMethodDefn_26 = transform_hlds__intermod__InstanceMethodDefn0_19;
#line 928 "intermod.m"
              }
#line 926 "intermod.m"
          }
#line 934 "intermod.m"
        else
#line 935 "intermod.m"
          {
#line 935 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_27;
#line 935 "intermod.m"
            MR_Word transform_hlds__intermod__InstanceMethodName_31;
#line 935 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_32;

#line 937 "intermod.m"
            {
#line 937 "intermod.m"
              hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers_27);
            }
#line 938 "intermod.m"
            {
#line 938 "intermod.m"
              hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__Markers_27, transform_hlds__intermod__MethodCallTVarSet_13, transform_hlds__intermod__MethodCallExistQTVars_14, transform_hlds__intermod__MethodCallArgTypes_15, transform_hlds__intermod__MethodCallHeadTypeParams_16, transform_hlds__intermod__MethodContext_21, transform_hlds__intermod__V_34_34, &transform_hlds__intermod__InstanceMethodName_31, &transform_hlds__intermod__PredId_32);
            }
#line 942 "intermod.m"
            {
#line 942 "intermod.m"
              MR_Word base;
#line 942 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "intermod.m"
              *transform_hlds__intermod__PredIds_11 = base;
#line 942 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_32));
#line 942 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 942 "intermod.m"
            }
#line 943 "intermod.m"
            {
#line 943 "intermod.m"
              transform_hlds__intermod__InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 943 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn_26, 0) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName_31));
#line 943 "intermod.m"
            }
#line 935 "intermod.m"
          }
#line 934 "intermod.m"
      }
#line 957 "intermod.m"
    {
#line 957 "intermod.m"
      MR_Word base;
#line 957 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 957 "intermod.m"
      *transform_hlds__intermod__InstanceMethod_9 = base;
#line 957 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_17));
#line 957 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__MethodName_18));
#line 957 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__InstanceMethodDefn_26));
#line 957 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__MethodArity_20));
#line 957 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__MethodContext_21));
#line 957 "intermod.m"
    }
#line 901 "intermod.m"
  }
#line 896 "intermod.m"
}

#line 851 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_3(
#line 851 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 851 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 851 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 851 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 851 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 851 "intermod.m"
{
#line 851 "intermod.m"
  {
#line 851 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 851 "intermod.m"
    MR_Word transform_hlds__intermod__conv5_DoWrite_6;
#line 851 "intermod.m"
    MR_Word transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9;

#line 851 "intermod.m"
    {
#line 851 "intermod.m"
      transform_hlds__intermod__add_proc_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv5_DoWrite_6, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9);
    }
#line 851 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv5_DoWrite_6));
#line 851 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9));
#line 851 "intermod.m"
  }
#line 851 "intermod.m"
}

#line 849 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_2(
#line 849 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 849 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 849 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 849 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 849 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 849 "intermod.m"
{
#line 849 "intermod.m"
  {
#line 849 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 849 "intermod.m"
    MR_Word transform_hlds__intermod__conv2_InstanceMethod_9;
#line 849 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_PredIds_11;

#line 849 "intermod.m"
    {
#line 849 "intermod.m"
      transform_hlds__intermod__qualify_instance_method_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv2_InstanceMethod_9, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv1_PredIds_11);
    }
#line 849 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv2_InstanceMethod_9));
#line 849 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv1_PredIds_11));
#line 849 "intermod.m"
  }
#line 849 "intermod.m"
}

#line 834 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_1(
#line 834 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 834 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 834 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 834 "intermod.m"
{
#line 834 "intermod.m"
  {
#line 834 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 834 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_45;

#line 834 "intermod.m"
    {
#line 834 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__836__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_45);
    }
#line 834 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_45));
#line 834 "intermod.m"
  }
#line 834 "intermod.m"
}

#line 814 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0(
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefn_8,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_39,
#line 814 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_40)
#line 814 "intermod.m"
{
#line 817 "intermod.m"
  {
#line 817 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 0)));
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 1)));
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 2)));
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceConstraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 3)));
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 4)));
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 5)));
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__Interface0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 6)));
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__MaybePredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 7)));
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 8)));
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__Proofs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 9)));
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__DefinedThisModule_20;

#line 821 "intermod.m"
    {
#line 821 "intermod.m"
      transform_hlds__intermod__DefinedThisModule_20 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__intermod__Status_11);
    }
#line 889 "intermod.m"
    if ((transform_hlds__intermod__DefinedThisModule_20 == (MR_Integer) 0))
#line 890 "intermod.m"
      *transform_hlds__intermod__STATE_VARIABLE_Info_40 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 889 "intermod.m"
    else
#line 823 "intermod.m"
      {
#line 823 "intermod.m"
        MR_Word transform_hlds__intermod__Interface_35;
#line 823 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_50_50;
#line 877 "intermod.m"
        MR_Word transform_hlds__intermod__V_51_51;

#line 867 "intermod.m"
        if ((transform_hlds__intermod__Interface0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "intermod.m"
          {
#line 869 "intermod.m"
            transform_hlds__intermod__Interface_35 = transform_hlds__intermod__Interface0_16;
#line 869 "intermod.m"
            transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 868 "intermod.m"
          }
#line 867 "intermod.m"
        else
#line 831 "intermod.m"
          {
#line 831 "intermod.m"
            MR_Word transform_hlds__intermod__Methods0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Interface0_16, (MR_Integer) 0)));
#line 831 "intermod.m"
            MR_Word transform_hlds__intermod__MethodAL_30;
#line 831 "intermod.m"
            MR_Word transform_hlds__intermod__Methods_31;
#line 831 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_32;
#line 831 "intermod.m"
            MR_Word transform_hlds__intermod__DoWriteMethodsList_33;
#line 831 "intermod.m"
            MR_Word transform_hlds__intermod__DoWriteMethods_34;
#line 831 "intermod.m"
            MR_Word transform_hlds__intermod__V_46_46;
#line 831 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_49_49;
#line 849 "intermod.m"
            MR_Box transform_hlds__intermod__conv3_PredIds_32;
#line 851 "intermod.m"
            MR_Box transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49;

#line 844 "intermod.m"
            if ((transform_hlds__intermod__MaybePredProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 845 "intermod.m"
              {
#line 846 "intermod.m"
                {
#line 846 "intermod.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_instances_3\'/5", (MR_String) "method pred_proc_ids not filled in");
#line 846 "intermod.m"
                  return;
                }
#line 845 "intermod.m"
              }
#line 844 "intermod.m"
            else
#line 833 "intermod.m"
              {
#line 833 "intermod.m"
                MR_Word transform_hlds__intermod__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 833 "intermod.m"
                MR_Word transform_hlds__intermod__ClassProcs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybePredProcIds_17, (MR_Integer) 0)));
#line 833 "intermod.m"
                MR_Word transform_hlds__intermod__ClassPreds0_28;
#line 833 "intermod.m"
                MR_Word transform_hlds__intermod__ClassPreds_29;

#line 838 "intermod.m"
                {
#line 838 "intermod.m"
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_57_57, (MR_Word) &transform_hlds__intermod_scalar_common_2[9], transform_hlds__intermod__ClassProcs_23, &transform_hlds__intermod__ClassPreds0_28);
                }
#line 841 "intermod.m"
                {
#line 841 "intermod.m"
                  mercury__list__remove_adjacent_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_57_57, transform_hlds__intermod__ClassPreds0_28, &transform_hlds__intermod__ClassPreds_29);
                }
#line 842 "intermod.m"
                {
#line 842 "intermod.m"
                  mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__intermod__TypeCtorInfo_57_57, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, transform_hlds__intermod__ClassPreds_29, transform_hlds__intermod__Methods0_22, &transform_hlds__intermod__MethodAL_30);
                }
#line 833 "intermod.m"
              }
#line 849 "intermod.m"
            {
#line 849 "intermod.m"
              transform_hlds__intermod__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 849 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[2]));
#line 849 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 1) = ((MR_Box) (transform_hlds__intermod__gather_instances_3_5_p_0_2));
#line 849 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 849 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_6));
#line 849 "intermod.m"
            }
#line 849 "intermod.m"
            {
#line 849 "intermod.m"
              mercury__list__map_foldl_5_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[2], transform_hlds__intermod__V_46_46, transform_hlds__intermod__MethodAL_30, &transform_hlds__intermod__Methods_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__intermod__conv3_PredIds_32);
            }
#line 849 "intermod.m"
            transform_hlds__intermod__PredIds_32 = ((MR_Word) transform_hlds__intermod__conv3_PredIds_32);
#line 851 "intermod.m"
            {
#line 851 "intermod.m"
              mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[10], transform_hlds__intermod__PredIds_32, &transform_hlds__intermod__DoWriteMethodsList_33, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_39)), &transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49);
            }
#line 851 "intermod.m"
            transform_hlds__intermod__STATE_VARIABLE_Info_49_49 = ((MR_Word) transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49);
#line 852 "intermod.m"
            {
#line 852 "intermod.m"
              mercury__bool__and_list_2_p_0(transform_hlds__intermod__DoWriteMethodsList_33, &transform_hlds__intermod__DoWriteMethods_34);
            }
#line 856 "intermod.m"
            if ((transform_hlds__intermod__DoWriteMethods_34 == (MR_Integer) 0))
#line 857 "intermod.m"
              {
#line 861 "intermod.m"
                transform_hlds__intermod__Interface_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 857 "intermod.m"
              }
#line 856 "intermod.m"
            else
#line 854 "intermod.m"
              {
#line 855 "intermod.m"
                {
#line 855 "intermod.m"
                  transform_hlds__intermod__Interface_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 855 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__Interface_35, 0) = ((MR_Box) (transform_hlds__intermod__Methods_31));
#line 855 "intermod.m"
                }
#line 855 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_49_49;
#line 854 "intermod.m"
              }
#line 831 "intermod.m"
          }
#line 875 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__Interface_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 876 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 876 "intermod.m"
          {
#line 877 "intermod.m"
            {
#line 877 "intermod.m"
              transform_hlds__intermod__V_51_51 = hlds__hlds_pred__status_is_exported_1_f_0(transform_hlds__intermod__Status_11);
            }
#line 877 "intermod.m"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_51_51 == (MR_Integer) 0);
#line 876 "intermod.m"
            transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 876 "intermod.m"
          }
#line 876 "intermod.m"
        transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 886 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 882 "intermod.m"
          {
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__InstanceDefnToWrite_36;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__Instances0_37;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__Instances_38;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__V_52_52;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__V_74_74;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__V_75_75;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__V_76_76;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__V_77_77;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__V_78_78;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__V_79_79;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__V_80_80;
#line 882 "intermod.m"
            MR_Word transform_hlds__intermod__V_81_81;

#line 880 "intermod.m"
            {
#line 880 "intermod.m"
              transform_hlds__intermod__InstanceDefnToWrite_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 880 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 0) = ((MR_Box) (transform_hlds__intermod__ModuleName_10));
#line 880 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 1) = ((MR_Box) (transform_hlds__intermod__Status_11));
#line 880 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 880 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 3) = ((MR_Box) (transform_hlds__intermod__InstanceConstraints_13));
#line 880 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 4) = ((MR_Box) (transform_hlds__intermod__Types_14));
#line 880 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 5) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_15));
#line 880 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 6) = ((MR_Box) (transform_hlds__intermod__Interface_35));
#line 880 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 7) = ((MR_Box) (transform_hlds__intermod__MaybePredProcIds_17));
#line 880 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_18));
#line 880 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 9) = ((MR_Box) (transform_hlds__intermod__Proofs_19));
#line 880 "intermod.m"
            }
#line 2157 "intermod.m"
            transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 2157 "intermod.m"
            transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
#line 2157 "intermod.m"
            transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 2157 "intermod.m"
            transform_hlds__intermod__Instances0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 2157 "intermod.m"
            transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 2157 "intermod.m"
            transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 2157 "intermod.m"
            transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 2157 "intermod.m"
            transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 2157 "intermod.m"
            transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 884 "intermod.m"
            {
#line 884 "intermod.m"
              transform_hlds__intermod__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 884 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_52_52, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_7));
#line 884 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_52_52, 1) = ((MR_Box) (transform_hlds__intermod__InstanceDefnToWrite_36));
#line 884 "intermod.m"
            }
#line 884 "intermod.m"
            {
#line 884 "intermod.m"
              transform_hlds__intermod__Instances_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Instances_38, 0) = ((MR_Box) (transform_hlds__intermod__V_52_52));
#line 884 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Instances_38, 1) = ((MR_Box) (transform_hlds__intermod__Instances0_37));
#line 884 "intermod.m"
            }
#line 2168 "intermod.m"
            {
#line 2168 "intermod.m"
              MR_Word base;
#line 2168 "intermod.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2168 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_40 = base;
#line 2168 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_74_74));
#line 2168 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_75_75));
#line 2168 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_76_76));
#line 2168 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__Instances_38));
#line 2168 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_77_77));
#line 2168 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_78_78));
#line 2168 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_79_79));
#line 2168 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_80_80));
#line 2168 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_81_81));
#line 2168 "intermod.m"
            }
#line 882 "intermod.m"
          }
#line 886 "intermod.m"
        else
#line 885 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_40 = transform_hlds__intermod__STATE_VARIABLE_Info_50_50;
#line 823 "intermod.m"
      }
#line 817 "intermod.m"
  }
#line 814 "intermod.m"
}

#line 812 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0_1(
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 812 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 812 "intermod.m"
{
#line 812 "intermod.m"
  {
#line 812 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 812 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40;

#line 812 "intermod.m"
    {
#line 812 "intermod.m"
      transform_hlds__intermod__gather_instances_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40);
    }
#line 812 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40));
#line 812 "intermod.m"
  }
#line 812 "intermod.m"
}

#line 807 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0(
#line 807 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 807 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 807 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefns_8,
#line 807 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_10,
#line 807 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_11)
#line 807 "intermod.m"
{
#line 811 "intermod.m"
  {
#line 811 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 811 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12;
#line 812 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11;

#line 812 "intermod.m"
    {
#line 812 "intermod.m"
      transform_hlds__intermod__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 812 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[1]));
#line 812 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 1) = ((MR_Box) (transform_hlds__intermod__gather_instances_2_5_p_0_1));
#line 812 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 812 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_6));
#line 812 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 4) = ((MR_Box) (transform_hlds__intermod__ClassId_7));
#line 812 "intermod.m"
    }
#line 812 "intermod.m"
    {
#line 812 "intermod.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_12_12, transform_hlds__intermod__InstanceDefns_8, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_10)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11);
    }
#line 812 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_Info_11 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11);
#line 811 "intermod.m"
  }
#line 807 "intermod.m"
}

#line 805 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_p_0_1(
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 805 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 805 "intermod.m"
{
#line 805 "intermod.m"
  {
#line 805 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 805 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11;

#line 805 "intermod.m"
    {
#line 805 "intermod.m"
      transform_hlds__intermod__gather_instances_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11);
    }
#line 805 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11));
#line 805 "intermod.m"
  }
#line 805 "intermod.m"
}

#line 800 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_p_0(
#line 800 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 800 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7)
#line 800 "intermod.m"
{
#line 802 "intermod.m"
  {
#line 802 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 802 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 802 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_5;
#line 802 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 805 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7;

#line 804 "intermod.m"
    {
#line 804 "intermod.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__ModuleInfo_4, &transform_hlds__intermod__Instances_5);
    }
#line 805 "intermod.m"
    {
#line 805 "intermod.m"
      transform_hlds__intermod__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 805 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_8_8, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[0]));
#line 805 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_8_8, 1) = ((MR_Box) (transform_hlds__intermod__gather_instances_2_p_0_1));
#line 805 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 805 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_8_8, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_4));
#line 805 "intermod.m"
    }
#line 805 "intermod.m"
    {
#line 805 "intermod.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[1], (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_8_8, transform_hlds__intermod__Instances_5, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_6)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
    }
#line 805 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_Info_7 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
#line 802 "intermod.m"
  }
#line 800 "intermod.m"
}

#line 760 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(
#line 760 "intermod.m"
  MR_Word transform_hlds__intermod__RHS0_6,
#line 760 "intermod.m"
  MR_Word * transform_hlds__intermod__RHS_7,
#line 760 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 760 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_28,
#line 760 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_29)
#line 760 "intermod.m"
{
#line 765 "intermod.m"
  {
#line 765 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 765 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__RHS0_6)) == (MR_mktag((MR_Integer) 1))))
#line 775 "intermod.m"
      {
#line 775 "intermod.m"
        MR_Word transform_hlds__intermod__Functor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)));
#line 775 "intermod.m"
        MR_Word transform_hlds__intermod___Exist_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 1)));
#line 775 "intermod.m"
        MR_Word transform_hlds__intermod___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 2)));
#line 784 "intermod.m"
        MR_Word transform_hlds__intermod__ShroudedPredProcId_24;

#line 776 "intermod.m"
        *transform_hlds__intermod__RHS_7 = transform_hlds__intermod__RHS0_6;
#line 778 "intermod.m"
        transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__Functor_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Functor_21, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 778 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 778 "intermod.m"
          {
#line 778 "intermod.m"
            transform_hlds__intermod__ShroudedPredProcId_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Functor_21, (MR_Integer) 1)));
#line 782 "intermod.m"
            {
#line 782 "intermod.m"
              MR_Word transform_hlds__intermod__PredId_26;
#line 782 "intermod.m"
              MR_Word transform_hlds__intermod__V_30_30;
#line 782 "intermod.m"
              MR_Integer transform_hlds__intermod__V_27_27;
#line 627 "intermod.m"
              MR_Word transform_hlds__intermod__V_39_39;

#line 782 "intermod.m"
              {
#line 782 "intermod.m"
                transform_hlds__intermod__V_30_30 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__intermod__ShroudedPredProcId_24);
              }
#line 782 "intermod.m"
              transform_hlds__intermod__PredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, (MR_Integer) 0)));
#line 782 "intermod.m"
              transform_hlds__intermod__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, (MR_Integer) 1)));
#line 627 "intermod.m"
              {
#line 627 "intermod.m"
                transform_hlds__intermod__V_39_39 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              }
#line 627 "intermod.m"
              {
#line 627 "intermod.m"
                transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_26, transform_hlds__intermod__V_39_39);
              }
#line 632 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 631 "intermod.m"
                {
#line 631 "intermod.m"
                  *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 631 "intermod.m"
                  *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 631 "intermod.m"
                }
#line 632 "intermod.m"
              else
#line 633 "intermod.m"
                {
#line 633 "intermod.m"
                  transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_26, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_28, transform_hlds__intermod__STATE_VARIABLE_Info_29);
#line 633 "intermod.m"
                  return;
                }
#line 782 "intermod.m"
            }
#line 778 "intermod.m"
          }
#line 778 "intermod.m"
        else
#line 794 "intermod.m"
          {
#line 794 "intermod.m"
            *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 794 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 794 "intermod.m"
          }
#line 775 "intermod.m"
      }
#line 765 "intermod.m"
    else
#line 765 "intermod.m"
      if (((MR_tag((MR_Word) transform_hlds__intermod__RHS0_6)) == (MR_mktag((MR_Integer) 2))))
#line 770 "intermod.m"
        {
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__Purity_11 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__HOGroundness_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__PorF_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 2)));
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__QuantVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 3)));
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 4)));
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 5)));
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__Goal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 6)));
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__Goal_20;
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_19, (MR_Integer) 0)));
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_19, (MR_Integer) 1)));
#line 770 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr_49;

#line 477 "intermod.m"
          {
#line 477 "intermod.m"
            transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_47, &transform_hlds__intermod__GoalExpr_49, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_28, transform_hlds__intermod__STATE_VARIABLE_Info_29);
          }
#line 478 "intermod.m"
          {
#line 478 "intermod.m"
            transform_hlds__intermod__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_20, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_49));
#line 478 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_20, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_48));
#line 478 "intermod.m"
          }
#line 772 "intermod.m"
          {
#line 772 "intermod.m"
            MR_Word base;
#line 772 "intermod.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 772 "intermod.m"
            *transform_hlds__intermod__RHS_7 = base;
#line 772 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((transform_hlds__intermod__Purity_11 | ((((transform_hlds__intermod__HOGroundness_12 << (MR_Integer) 2)) | ((transform_hlds__intermod__PorF_13 << (MR_Integer) 3)))))));
#line 772 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 772 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__intermod__NonLocals_15));
#line 772 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__intermod__QuantVars_16));
#line 772 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__intermod__Modes_17));
#line 772 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__intermod__Detism_18));
#line 772 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (transform_hlds__intermod__Goal_20));
#line 772 "intermod.m"
          }
#line 770 "intermod.m"
        }
#line 765 "intermod.m"
      else
#line 765 "intermod.m"
        {
#line 766 "intermod.m"
          *transform_hlds__intermod__RHS_7 = transform_hlds__intermod__RHS0_6;
#line 767 "intermod.m"
          *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 767 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 765 "intermod.m"
        }
#line 765 "intermod.m"
  }
#line 760 "intermod.m"
}

#line 669 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_1(
#line 669 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 669 "intermod.m"
{
#line 669 "intermod.m"
  {
#line 669 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 669 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0, 1);
#line 669 "intermod.m"
  }
#line 669 "intermod.m"
}

#line 670 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_3(
#line 670 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 670 "intermod.m"
{
#line 670 "intermod.m"
  {
#line 670 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 670 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15 = ((MR_Integer) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15);
#line 670 "intermod.m"
    {
#line 670 "intermod.m"
      transform_hlds__intermod__add_proc_2_4_p_0_2(transform_hlds__intermod__env_ptr);
#line 670 "intermod.m"
      return;
    }
#line 670 "intermod.m"
  }
#line 670 "intermod.m"
}

#line 669 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_2(
#line 669 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 669 "intermod.m"
{
#line 669 "intermod.m"
  {
#line 669 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 669 "intermod.m"
    {
#line 671 "intermod.m"
      MR_Box transform_hlds__intermod__conv1_ProcInfo_16;

#line 15569 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 671 "intermod.m"
      {
#line 671 "intermod.m"
        mercury__map__lookup_3_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_37_37, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14, ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15)), &transform_hlds__intermod__conv1_ProcInfo_16);
      }
#line 671 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16 = ((MR_Word) transform_hlds__intermod__conv1_ProcInfo_16);
#line 672 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "intermod.m"
      {
#line 672 "intermod.m"
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41);
      }
#line 15585 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44 = (MR_Word) &transform_hlds__intermod_scalar_common_1[16];
#line 672 "intermod.m"
      {
#line 672 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44, ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26)), ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41)));
      }
#line 672 "intermod.m"
      if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 672 "intermod.m"
        {
#line 672 "intermod.m"
          transform_hlds__intermod__add_proc_2_4_p_0_1(transform_hlds__intermod__env_ptr);
#line 672 "intermod.m"
          return;
        }
#line 669 "intermod.m"
    }
#line 669 "intermod.m"
  }
#line 669 "intermod.m"
}

#line 669 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_4(
#line 669 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 669 "intermod.m"
{
#line 669 "intermod.m"
  {
#line 669 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 669 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0) == 0)
#line 669 "intermod.m"
      {
#line 669 "intermod.m"
        {
#line 669 "intermod.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14);
        }
#line 15629 "transform_hlds.intermod.c"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 670 "intermod.m"
        {
#line 670 "intermod.m"
          mercury__list__member_2_p_1((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_37_37, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11, transform_hlds__intermod__add_proc_2_4_p_0_3, transform_hlds__intermod__env_ptr);
        }
#line 669 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 669 "intermod.m"
      }
#line 669 "intermod.m"
    else
#line 669 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 669 "intermod.m"
  }
#line 669 "intermod.m"
}

#line 636 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0(
#line 636 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 636 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 636 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 636 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25)
#line 636 "intermod.m"
{
#line 636 "intermod.m"
  {
#line 636 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s transform_hlds__intermod__env;

#line 639 "intermod.m"
    {
#line 639 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 639 "intermod.m"
      MR_Word transform_hlds__intermod__Status_10;
#line 639 "intermod.m"
      MR_Word transform_hlds__intermod__Markers_12;
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));

#line 641 "intermod.m"
      {
#line 641 "intermod.m"
        hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__PredId_5, &(transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 642 "intermod.m"
      {
#line 642 "intermod.m"
        hlds__hlds_pred__pred_info_get_import_status_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__Status_10);
      }
#line 643 "intermod.m"
      {
#line 643 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 644 "intermod.m"
      {
#line 644 "intermod.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__Markers_12);
      }
#line 651 "intermod.m"
      {
#line 651 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 652 "intermod.m"
      if (!((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded))
#line 652 "intermod.m"
        {
#line 652 "intermod.m"
          MR_Word transform_hlds__intermod__V_13_13;

#line 652 "intermod.m"
          {
#line 652 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_13_13);
          }
#line 652 "intermod.m"
        }
#line 656 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 655 "intermod.m"
        {
#line 655 "intermod.m"
          *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 655 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 655 "intermod.m"
        }
#line 656 "intermod.m"
      else
#line 676 "intermod.m"
        {
#line 667 "intermod.m"
          {
#line 667 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, (MR_Integer) 3);
          }
#line 668 "intermod.m"
          if (!((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded))
#line 669 "intermod.m"
            {
#line 669 "intermod.m"
              {
#line 669 "intermod.m"
                transform_hlds__intermod__add_proc_2_4_p_0_4(&transform_hlds__intermod__env);
              }
#line 669 "intermod.m"
            }
#line 676 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 675 "intermod.m"
            {
#line 675 "intermod.m"
              *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 675 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 675 "intermod.m"
            }
#line 676 "intermod.m"
          else
#line 706 "intermod.m"
            {
#line 702 "intermod.m"
              MR_Word transform_hlds__intermod__V_42_42;
#line 703 "intermod.m"
              MR_Word transform_hlds__intermod__V_29_29;

#line 702 "intermod.m"
              {
#line 702 "intermod.m"
                hlds__hlds_pred__pred_info_get_purity_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_42_42);
              }
#line 702 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = ((MR_Integer) 2 == transform_hlds__intermod__V_42_42);
#line 702 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 702 "intermod.m"
                {
#line 703 "intermod.m"
                  transform_hlds__intermod__V_29_29 = (MR_Integer) 22;
#line 703 "intermod.m"
                  {
#line 703 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, transform_hlds__intermod__V_29_29);
                  }
#line 703 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded);
#line 702 "intermod.m"
                }
#line 706 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 705 "intermod.m"
                {
#line 705 "intermod.m"
                  *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 705 "intermod.m"
                  *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 705 "intermod.m"
                }
#line 706 "intermod.m"
              else
#line 719 "intermod.m"
                {
#line 713 "intermod.m"
                  if ((transform_hlds__intermod__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 712 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 713 "intermod.m"
                  else
#line 713 "intermod.m"
                    if (((MR_tag((MR_Word) transform_hlds__intermod__Status_10)) == (MR_mktag((MR_Integer) 1))))
#line 714 "intermod.m"
                      {
#line 714 "intermod.m"
                        MR_Word transform_hlds__intermod__ExternalStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_10, (MR_Integer) 0)));
#line 714 "intermod.m"
                        MR_Word transform_hlds__intermod__V_30_30;

#line 715 "intermod.m"
                        {
#line 715 "intermod.m"
                          transform_hlds__intermod__V_30_30 = hlds__hlds_pred__status_is_exported_1_f_0(transform_hlds__intermod__ExternalStatus_17);
                        }
#line 715 "intermod.m"
                        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = (transform_hlds__intermod__V_30_30 == (MR_Integer) 1);
#line 714 "intermod.m"
                      }
#line 713 "intermod.m"
                    else
#line 713 "intermod.m"
                      (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 719 "intermod.m"
                  if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 718 "intermod.m"
                    {
#line 718 "intermod.m"
                      *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 718 "intermod.m"
                      *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 718 "intermod.m"
                    }
#line 719 "intermod.m"
                  else
#line 728 "intermod.m"
                    {
#line 724 "intermod.m"
                      MR_Word transform_hlds__intermod__V_31_31;
#line 724 "intermod.m"
                      MR_Word transform_hlds__intermod__V_43_43;

#line 724 "intermod.m"
                      {
#line 724 "intermod.m"
                        hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_43_43);
                      }
#line 724 "intermod.m"
                      {
#line 724 "intermod.m"
                        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0, ((MR_Box) (transform_hlds__intermod__Markers_12)), ((MR_Box) (transform_hlds__intermod__V_43_43)));
                      }
#line 724 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 724 "intermod.m"
                        {
#line 725 "intermod.m"
                          transform_hlds__intermod__V_31_31 = (MR_Integer) 9;
#line 725 "intermod.m"
                          {
#line 725 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, transform_hlds__intermod__V_31_31);
                          }
#line 724 "intermod.m"
                        }
#line 728 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 727 "intermod.m"
                        {
#line 727 "intermod.m"
                          *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 727 "intermod.m"
                          *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 727 "intermod.m"
                        }
#line 728 "intermod.m"
                      else
#line 739 "intermod.m"
                        {
#line 733 "intermod.m"
                          {
#line 733 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status_10);
                          }
#line 739 "intermod.m"
                          if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 735 "intermod.m"
                            {
#line 735 "intermod.m"
                              MR_Word transform_hlds__intermod__PredDecls0_18;
#line 735 "intermod.m"
                              MR_Word transform_hlds__intermod__PredDecls_19;
#line 2156 "intermod.m"
                              MR_Word transform_hlds__intermod__V_56_56;
#line 2156 "intermod.m"
                              MR_Word transform_hlds__intermod__V_57_57;
#line 2156 "intermod.m"
                              MR_Word transform_hlds__intermod__V_58_58;
#line 2156 "intermod.m"
                              MR_Word transform_hlds__intermod__V_59_59;
#line 2156 "intermod.m"
                              MR_Word transform_hlds__intermod__V_60_60;
#line 2156 "intermod.m"
                              MR_Word transform_hlds__intermod__V_61_61;
#line 2156 "intermod.m"
                              MR_Word transform_hlds__intermod__V_62_62;
#line 2156 "intermod.m"
                              MR_Word transform_hlds__intermod__V_63_63;
#line 2166 "intermod.m"
                              MR_Word transform_hlds__intermod__V_66_66;
#line 2166 "intermod.m"
                              MR_Word transform_hlds__intermod__V_67_67;
#line 2166 "intermod.m"
                              MR_Word transform_hlds__intermod__V_69_69;
#line 2166 "intermod.m"
                              MR_Word transform_hlds__intermod__V_70_70;
#line 2166 "intermod.m"
                              MR_Word transform_hlds__intermod__V_71_71;
#line 2166 "intermod.m"
                              MR_Word transform_hlds__intermod__V_72_72;
#line 2166 "intermod.m"
                              MR_Word transform_hlds__intermod__V_73_73;
#line 2166 "intermod.m"
                              MR_Word transform_hlds__intermod__V_74_74;
#line 2166 "intermod.m"
                              MR_Word transform_hlds__intermod__V_68_68;

#line 735 "intermod.m"
                              *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 2156 "intermod.m"
                              transform_hlds__intermod__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2156 "intermod.m"
                              transform_hlds__intermod__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2156 "intermod.m"
                              transform_hlds__intermod__PredDecls0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2156 "intermod.m"
                              transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2156 "intermod.m"
                              transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2156 "intermod.m"
                              transform_hlds__intermod__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2156 "intermod.m"
                              transform_hlds__intermod__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2156 "intermod.m"
                              transform_hlds__intermod__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2156 "intermod.m"
                              transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 737 "intermod.m"
                              {
#line 737 "intermod.m"
                                mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__intermod__PredId_5)), transform_hlds__intermod__PredDecls0_18, &transform_hlds__intermod__PredDecls_19);
                              }
#line 2166 "intermod.m"
                              transform_hlds__intermod__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2166 "intermod.m"
                              transform_hlds__intermod__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2166 "intermod.m"
                              transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2166 "intermod.m"
                              transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2166 "intermod.m"
                              transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2166 "intermod.m"
                              transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2166 "intermod.m"
                              transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2166 "intermod.m"
                              transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2166 "intermod.m"
                              transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 2166 "intermod.m"
                              {
#line 2166 "intermod.m"
                                MR_Word base;
#line 2166 "intermod.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2166 "intermod.m"
                                *transform_hlds__intermod__STATE_VARIABLE_Info_25 = base;
#line 2166 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_66_66));
#line 2166 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_67_67));
#line 2166 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__PredDecls_19));
#line 2166 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 2166 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_70_70));
#line 2166 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_71_71));
#line 2166 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_72_72));
#line 2166 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_73_73));
#line 2166 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_74_74));
#line 2166 "intermod.m"
                              }
#line 735 "intermod.m"
                            }
#line 739 "intermod.m"
                          else
#line 751 "intermod.m"
                            {
#line 741 "intermod.m"
                              if ((transform_hlds__intermod__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 741 "intermod.m"
                              else
#line 741 "intermod.m"
                                if (((MR_tag((MR_Word) transform_hlds__intermod__Status_10)) == (MR_mktag((MR_Integer) 2))))
#line 740 "intermod.m"
                                  (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 741 "intermod.m"
                                else
#line 741 "intermod.m"
                                  (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 751 "intermod.m"
                              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 746 "intermod.m"
                                {
#line 746 "intermod.m"
                                  MR_Word transform_hlds__intermod__PredModule_21;
#line 746 "intermod.m"
                                  MR_Word transform_hlds__intermod__Modules0_22;
#line 746 "intermod.m"
                                  MR_Word transform_hlds__intermod__Modules_23;
#line 2154 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_76_76;
#line 2154 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_77_77;
#line 2154 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_78_78;
#line 2154 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_79_79;
#line 2154 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_80_80;
#line 2154 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_81_81;
#line 2154 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_82_82;
#line 2154 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_83_83;
#line 2164 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_87_87;
#line 2164 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_88_88;
#line 2164 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_89_89;
#line 2164 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_90_90;
#line 2164 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_91_91;
#line 2164 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_92_92;
#line 2164 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_93_93;
#line 2164 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_94_94;
#line 2164 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_86_86;

#line 746 "intermod.m"
                                  *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 747 "intermod.m"
                                  {
#line 747 "intermod.m"
                                    transform_hlds__intermod__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
                                  }
#line 2154 "intermod.m"
                                  transform_hlds__intermod__Modules0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2154 "intermod.m"
                                  transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2154 "intermod.m"
                                  transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2154 "intermod.m"
                                  transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2154 "intermod.m"
                                  transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2154 "intermod.m"
                                  transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2154 "intermod.m"
                                  transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2154 "intermod.m"
                                  transform_hlds__intermod__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2154 "intermod.m"
                                  transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 749 "intermod.m"
                                  {
#line 749 "intermod.m"
                                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__intermod__PredModule_21)), transform_hlds__intermod__Modules0_22, &transform_hlds__intermod__Modules_23);
                                  }
#line 2164 "intermod.m"
                                  transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2164 "intermod.m"
                                  transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2164 "intermod.m"
                                  transform_hlds__intermod__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2164 "intermod.m"
                                  transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2164 "intermod.m"
                                  transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2164 "intermod.m"
                                  transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2164 "intermod.m"
                                  transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2164 "intermod.m"
                                  transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2164 "intermod.m"
                                  transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 2164 "intermod.m"
                                  {
#line 2164 "intermod.m"
                                    MR_Word base;
#line 2164 "intermod.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2164 "intermod.m"
                                    *transform_hlds__intermod__STATE_VARIABLE_Info_25 = base;
#line 2164 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__Modules_23));
#line 2164 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2164 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2164 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2164 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_90_90));
#line 2164 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_91_91));
#line 2164 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_92_92));
#line 2164 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_93_93));
#line 2164 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_94_94));
#line 2164 "intermod.m"
                                  }
#line 746 "intermod.m"
                                }
#line 751 "intermod.m"
                              else
#line 752 "intermod.m"
                                {
#line 752 "intermod.m"
                                  {
#line 752 "intermod.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.add_proc_2\'/4", (MR_String) "unexpected status");
#line 752 "intermod.m"
                                    return;
                                  }
#line 752 "intermod.m"
                                }
#line 751 "intermod.m"
                            }
#line 739 "intermod.m"
                        }
#line 728 "intermod.m"
                    }
#line 719 "intermod.m"
                }
#line 706 "intermod.m"
            }
#line 676 "intermod.m"
        }
#line 639 "intermod.m"
    }
#line 636 "intermod.m"
  }
#line 636 "intermod.m"
}

#line 623 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_4_p_0(
#line 623 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 623 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 623 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_8,
#line 623 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_9)
#line 623 "intermod.m"
{
#line 632 "intermod.m"
  {
#line 632 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 627 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 627 "intermod.m"
    {
#line 627 "intermod.m"
      transform_hlds__intermod__V_11_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 627 "intermod.m"
    {
#line 627 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_5, transform_hlds__intermod__V_11_11);
    }
#line 632 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 631 "intermod.m"
      {
#line 631 "intermod.m"
        *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 631 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_9 = transform_hlds__intermod__STATE_VARIABLE_Info_0_8;
#line 631 "intermod.m"
      }
#line 632 "intermod.m"
    else
#line 633 "intermod.m"
      {
#line 633 "intermod.m"
        transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_5, transform_hlds__intermod__DoWrite_6, transform_hlds__intermod__STATE_VARIABLE_Info_0_8, transform_hlds__intermod__STATE_VARIABLE_Info_9);
#line 633 "intermod.m"
        return;
      }
#line 632 "intermod.m"
  }
#line 623 "intermod.m"
}

#line 596 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_cases_5_p_0(
#line 596 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 596 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 596 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 596 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 596 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 596 "intermod.m"
{
#line 599 "intermod.m"
  {
#line 599 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 599 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "intermod.m"
      {
#line 599 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 599 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 599 "intermod.m"
      }
#line 599 "intermod.m"
    else
#line 600 "intermod.m"
      {
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__Case_11;
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__Cases_12;
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 0)));
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 1)));
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 2)));
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_18;
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22;
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_23_23;
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_17, (MR_Integer) 0)));
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_17, (MR_Integer) 1)));
#line 600 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_34;

#line 477 "intermod.m"
        {
#line 477 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_32, &transform_hlds__intermod__GoalExpr_34, &transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_23_23);
        }
#line 478 "intermod.m"
        {
#line 478 "intermod.m"
          transform_hlds__intermod__Goal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_18, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_34));
#line 478 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_18, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_33));
#line 478 "intermod.m"
        }
#line 603 "intermod.m"
        {
#line 603 "intermod.m"
          transform_hlds__intermod__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 603 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 0) = ((MR_Box) (transform_hlds__intermod__MainConsId_15));
#line 603 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 1) = ((MR_Box) (transform_hlds__intermod__OtherConsIds_16));
#line 603 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 2) = ((MR_Box) (transform_hlds__intermod__Goal_18));
#line 603 "intermod.m"
        }
#line 607 "intermod.m"
        if ((transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22 == (MR_Integer) 0))
#line 608 "intermod.m"
          {
#line 609 "intermod.m"
            transform_hlds__intermod__Cases_12 = transform_hlds__intermod__Cases0_10;
#line 609 "intermod.m"
            *transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22;
#line 609 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_23_23;
#line 608 "intermod.m"
          }
#line 607 "intermod.m"
        else
#line 606 "intermod.m"
          {
#line 606 "intermod.m"
            transform_hlds__intermod__intermod_traverse_cases_5_p_0(transform_hlds__intermod__Cases0_10, &transform_hlds__intermod__Cases_12, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__STATE_VARIABLE_Info_23_23, transform_hlds__intermod__STATE_VARIABLE_Info_5);
          }
#line 600 "intermod.m"
        {
#line 600 "intermod.m"
          MR_Word base;
#line 600 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "intermod.m"
          *transform_hlds__intermod__HeadVar__2_2 = base;
#line 600 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Case_11));
#line 600 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Cases_12));
#line 600 "intermod.m"
        }
#line 600 "intermod.m"
      }
#line 599 "intermod.m"
  }
#line 596 "intermod.m"
}

#line 581 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(
#line 581 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 581 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 581 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 581 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 581 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 581 "intermod.m"
{
#line 584 "intermod.m"
  {
#line 584 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 584 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "intermod.m"
      {
#line 584 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 584 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 584 "intermod.m"
      }
#line 584 "intermod.m"
    else
#line 586 "intermod.m"
      {
#line 586 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 586 "intermod.m"
        MR_Word transform_hlds__intermod__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 586 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_11;
#line 586 "intermod.m"
        MR_Word transform_hlds__intermod__Goals_12;
#line 586 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18;
#line 586 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_19_19;
#line 586 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 0)));
#line 586 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 1)));
#line 586 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_30;

#line 477 "intermod.m"
        {
#line 477 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_28, &transform_hlds__intermod__GoalExpr_30, &transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_19_19);
        }
#line 478 "intermod.m"
        {
#line 478 "intermod.m"
          transform_hlds__intermod__Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_11, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_30));
#line 478 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_11, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_29));
#line 478 "intermod.m"
        }
#line 591 "intermod.m"
        if ((transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18 == (MR_Integer) 0))
#line 592 "intermod.m"
          {
#line 593 "intermod.m"
            transform_hlds__intermod__Goals_12 = transform_hlds__intermod__Goals0_10;
#line 593 "intermod.m"
            *transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18;
#line 593 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_19_19;
#line 592 "intermod.m"
          }
#line 591 "intermod.m"
        else
#line 590 "intermod.m"
          {
#line 590 "intermod.m"
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
#line 586 "intermod.m"
      }
#line 584 "intermod.m"
  }
#line 581 "intermod.m"
}

#line 480 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(
#line 480 "intermod.m"
  MR_Word transform_hlds__intermod__GoalExpr0_6,
#line 480 "intermod.m"
  MR_Word * transform_hlds__intermod__GoalExpr_7,
#line 480 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 480 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_81,
#line 480 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_82)
#line 480 "intermod.m"
{
#line 485 "intermod.m"
  {
#line 485 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 485 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 0))))
#line 547 "intermod.m"
      {
#line 547 "intermod.m"
        MR_Word transform_hlds__intermod__SubGoal0_63 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__GoalExpr0_6), (MR_Integer) 0);
#line 547 "intermod.m"
        MR_Word transform_hlds__intermod__SubGoal_64;

#line 548 "intermod.m"
        {
#line 548 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_63, &transform_hlds__intermod__SubGoal_64, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
        }
#line 549 "intermod.m"
        *transform_hlds__intermod__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__SubGoal_64);
#line 547 "intermod.m"
      }
#line 485 "intermod.m"
    else
#line 485 "intermod.m"
      if (((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 2))))
#line 491 "intermod.m"
        {
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)));
#line 491 "intermod.m"
          MR_Integer transform_hlds__intermod__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));

#line 493 "intermod.m"
          {
#line 493 "intermod.m"
            transform_hlds__intermod__add_proc_4_p_0(transform_hlds__intermod__PredId_16, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
          }
#line 494 "intermod.m"
          *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 491 "intermod.m"
        }
#line 485 "intermod.m"
      else
#line 485 "intermod.m"
        if (((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 1))))
#line 485 "intermod.m"
          {
#line 485 "intermod.m"
            MR_Word transform_hlds__intermod__LVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)));
#line 485 "intermod.m"
            MR_Word transform_hlds__intermod__RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 485 "intermod.m"
            MR_Word transform_hlds__intermod__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 485 "intermod.m"
            MR_Word transform_hlds__intermod__Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 485 "intermod.m"
            MR_Word transform_hlds__intermod__UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 485 "intermod.m"
            MR_Word transform_hlds__intermod__RHS_15;

#line 488 "intermod.m"
            {
#line 488 "intermod.m"
              transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(transform_hlds__intermod__RHS0_11, &transform_hlds__intermod__RHS_15, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
            }
#line 489 "intermod.m"
            {
#line 489 "intermod.m"
              MR_Word base;
#line 489 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 489 "intermod.m"
              *transform_hlds__intermod__GoalExpr_7 = base;
#line 489 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__LVar_10));
#line 489 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__RHS_15));
#line 489 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__intermod__Mode_12));
#line 489 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__intermod__Kind_13));
#line 489 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__intermod__UnifyContext_14));
#line 489 "intermod.m"
            }
#line 485 "intermod.m"
          }
#line 485 "intermod.m"
        else
#line 485 "intermod.m"
          if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 509 "intermod.m"
            {
#line 509 "intermod.m"
              MR_Word transform_hlds__intermod__Attrs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 509 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeMayDuplicate_44;
#line 509 "intermod.m"
              MR_Word transform_hlds__intermod__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 509 "intermod.m"
              MR_Integer transform_hlds__intermod__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 509 "intermod.m"
              MR_Word transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 509 "intermod.m"
              MR_Word transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));
#line 509 "intermod.m"
              MR_Word transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 6)));
#line 509 "intermod.m"
              MR_Word transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 7)));

#line 510 "intermod.m"
              *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 513 "intermod.m"
              {
#line 513 "intermod.m"
                transform_hlds__intermod__MaybeMayDuplicate_44 = parse_tree__prog_data__get_may_duplicate_1_f_0(transform_hlds__intermod__Attrs_37);
              }
#line 523 "intermod.m"
              if ((transform_hlds__intermod__MaybeMayDuplicate_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "intermod.m"
                *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 523 "intermod.m"
              else
#line 515 "intermod.m"
                {
#line 515 "intermod.m"
                  MR_Word transform_hlds__intermod__MayDuplicate_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeMayDuplicate_44, (MR_Integer) 0)));

#line 519 "intermod.m"
                  if ((transform_hlds__intermod__MayDuplicate_45 == (MR_Integer) 0))
#line 518 "intermod.m"
                    *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 519 "intermod.m"
                  else
#line 521 "intermod.m"
                    *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 515 "intermod.m"
                }
#line 525 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_82 = transform_hlds__intermod__STATE_VARIABLE_Info_0_81;
#line 509 "intermod.m"
            }
#line 485 "intermod.m"
          else
#line 485 "intermod.m"
            if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 528 "intermod.m"
              {
#line 528 "intermod.m"
                MR_Word transform_hlds__intermod__ConjType_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 528 "intermod.m"
                MR_Word transform_hlds__intermod__Goals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 528 "intermod.m"
                MR_Word transform_hlds__intermod__Goals_48;

#line 529 "intermod.m"
                {
#line 529 "intermod.m"
                  transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_47, &transform_hlds__intermod__Goals_48, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                }
#line 530 "intermod.m"
                {
#line 530 "intermod.m"
                  MR_Word base;
#line 530 "intermod.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 530 "intermod.m"
                  *transform_hlds__intermod__GoalExpr_7 = base;
#line 530 "intermod.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 530 "intermod.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__ConjType_46));
#line 530 "intermod.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__Goals_48));
#line 530 "intermod.m"
                }
#line 528 "intermod.m"
              }
#line 485 "intermod.m"
            else
#line 485 "intermod.m"
              if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 532 "intermod.m"
                {
#line 532 "intermod.m"
                  MR_Word transform_hlds__intermod__Goals0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 532 "intermod.m"
                  MR_Word transform_hlds__intermod__Goals_104;

#line 533 "intermod.m"
                  {
#line 533 "intermod.m"
                    transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_103, &transform_hlds__intermod__Goals_104, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                  }
#line 534 "intermod.m"
                  {
#line 534 "intermod.m"
                    MR_Word base;
#line 534 "intermod.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "intermod.m"
                    *transform_hlds__intermod__GoalExpr_7 = base;
#line 534 "intermod.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 534 "intermod.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Goals_104));
#line 534 "intermod.m"
                  }
#line 532 "intermod.m"
                }
#line 485 "intermod.m"
              else
#line 485 "intermod.m"
                if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 496 "intermod.m"
                  {
#line 496 "intermod.m"
                    MR_Word transform_hlds__intermod__CallType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 496 "intermod.m"
                    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 496 "intermod.m"
                    MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 496 "intermod.m"
                    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 496 "intermod.m"
                    MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));

#line 497 "intermod.m"
                    *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 501 "intermod.m"
                    if (((MR_tag((MR_Word) transform_hlds__intermod__CallType_22)) == (MR_mktag((MR_Integer) 0))))
#line 500 "intermod.m"
                      *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 501 "intermod.m"
                    else
#line 506 "intermod.m"
                      *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 506 "intermod.m"
                    *transform_hlds__intermod__STATE_VARIABLE_Info_82 = transform_hlds__intermod__STATE_VARIABLE_Info_0_81;
#line 496 "intermod.m"
                  }
#line 485 "intermod.m"
                else
#line 485 "intermod.m"
                  if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 540 "intermod.m"
                    {
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__Cond0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__Then0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__Else0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__Cond_57;
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__DoWrite1_58;
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__Then_59;
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__DoWrite2_60;
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__Else_61;
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__DoWrite3_62;
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_91_91;
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_92_92;
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__V_94_94;
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__V_95_95;
#line 540 "intermod.m"
                      MR_Word transform_hlds__intermod__V_96_96;

#line 541 "intermod.m"
                      {
#line 541 "intermod.m"
                        transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Cond0_54, &transform_hlds__intermod__Cond_57, &transform_hlds__intermod__DoWrite1_58, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, &transform_hlds__intermod__STATE_VARIABLE_Info_91_91);
                      }
#line 542 "intermod.m"
                      {
#line 542 "intermod.m"
                        transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Then0_55, &transform_hlds__intermod__Then_59, &transform_hlds__intermod__DoWrite2_60, transform_hlds__intermod__STATE_VARIABLE_Info_91_91, &transform_hlds__intermod__STATE_VARIABLE_Info_92_92);
                      }
#line 543 "intermod.m"
                      {
#line 543 "intermod.m"
                        transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Else0_56, &transform_hlds__intermod__Else_61, &transform_hlds__intermod__DoWrite3_62, transform_hlds__intermod__STATE_VARIABLE_Info_92_92, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                      }
#line 544 "intermod.m"
                      {
#line 544 "intermod.m"
                        transform_hlds__intermod__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_96_96, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite3_62));
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "intermod.m"
                      }
#line 544 "intermod.m"
                      {
#line 544 "intermod.m"
                        transform_hlds__intermod__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_95_95, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite2_60));
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_95_95, 1) = ((MR_Box) (transform_hlds__intermod__V_96_96));
#line 544 "intermod.m"
                      }
#line 544 "intermod.m"
                      {
#line 544 "intermod.m"
                        transform_hlds__intermod__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_94_94, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite1_58));
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_94_94, 1) = ((MR_Box) (transform_hlds__intermod__V_95_95));
#line 544 "intermod.m"
                      }
#line 544 "intermod.m"
                      {
#line 544 "intermod.m"
                        mercury__bool__and_list_2_p_0(transform_hlds__intermod__V_94_94, transform_hlds__intermod__DoWrite_8);
                      }
#line 545 "intermod.m"
                      {
#line 545 "intermod.m"
                        MR_Word base;
#line 545 "intermod.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 545 "intermod.m"
                        *transform_hlds__intermod__GoalExpr_7 = base;
#line 545 "intermod.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 545 "intermod.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Vars_53));
#line 545 "intermod.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__Cond_57));
#line 545 "intermod.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__intermod__Then_59));
#line 545 "intermod.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__intermod__Else_61));
#line 545 "intermod.m"
                      }
#line 540 "intermod.m"
                    }
#line 485 "intermod.m"
                  else
#line 485 "intermod.m"
                    if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 551 "intermod.m"
                      {
#line 551 "intermod.m"
                        MR_Word transform_hlds__intermod__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 551 "intermod.m"
                        MR_Word transform_hlds__intermod__SubGoal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 551 "intermod.m"
                        MR_Word transform_hlds__intermod__SubGoal_106;

#line 556 "intermod.m"
                        {
#line 556 "intermod.m"
                          transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_105, &transform_hlds__intermod__SubGoal_106, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                        }
#line 557 "intermod.m"
                        {
#line 557 "intermod.m"
                          MR_Word base;
#line 557 "intermod.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 557 "intermod.m"
                          *transform_hlds__intermod__GoalExpr_7 = base;
#line 557 "intermod.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 557 "intermod.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Reason_65));
#line 557 "intermod.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__SubGoal_106));
#line 557 "intermod.m"
                        }
#line 551 "intermod.m"
                      }
#line 485 "intermod.m"
                    else
#line 485 "intermod.m"
                      if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 559 "intermod.m"
                        {
#line 559 "intermod.m"
                          MR_Word transform_hlds__intermod__ShortHand0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 559 "intermod.m"
                          MR_Word transform_hlds__intermod__ShortHand_76;

#line 569 "intermod.m"
                          if (((MR_tag((MR_Word) transform_hlds__intermod__ShortHand0_66)) == (MR_mktag((MR_Integer) 1))))
#line 562 "intermod.m"
                            {
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__GoalType_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 0)));
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__Outer_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 1)));
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__Inner_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 2)));
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__MaybeOutputVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 3)));
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__MainGoal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 4)));
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__OrElseGoals0_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 5)));
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__OrElseInners_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 6)));
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__MainGoal_74;
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__OrElseGoals_75;
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_87_87;
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__DoWrite1_107;
#line 562 "intermod.m"
                              MR_Word transform_hlds__intermod__DoWrite2_108;

#line 563 "intermod.m"
                              {
#line 563 "intermod.m"
                                transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__MainGoal0_71, &transform_hlds__intermod__MainGoal_74, &transform_hlds__intermod__DoWrite1_107, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, &transform_hlds__intermod__STATE_VARIABLE_Info_87_87);
                              }
#line 564 "intermod.m"
                              {
#line 564 "intermod.m"
                                transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__OrElseGoals0_72, &transform_hlds__intermod__OrElseGoals_75, &transform_hlds__intermod__DoWrite2_108, transform_hlds__intermod__STATE_VARIABLE_Info_87_87, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                              }
#line 566 "intermod.m"
                              {
#line 566 "intermod.m"
                                mercury__bool__and_3_p_0(transform_hlds__intermod__DoWrite1_107, transform_hlds__intermod__DoWrite2_108, transform_hlds__intermod__DoWrite_8);
                              }
#line 567 "intermod.m"
                              {
#line 567 "intermod.m"
                                transform_hlds__intermod__ShortHand_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 567 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 0) = ((MR_Box) (transform_hlds__intermod__GoalType_67));
#line 567 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 1) = ((MR_Box) (transform_hlds__intermod__Outer_68));
#line 567 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 2) = ((MR_Box) (transform_hlds__intermod__Inner_69));
#line 567 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 3) = ((MR_Box) (transform_hlds__intermod__MaybeOutputVars_70));
#line 567 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 4) = ((MR_Box) (transform_hlds__intermod__MainGoal_74));
#line 567 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 5) = ((MR_Box) (transform_hlds__intermod__OrElseGoals_75));
#line 567 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 6) = ((MR_Box) (transform_hlds__intermod__OrElseInners_73));
#line 567 "intermod.m"
                              }
#line 562 "intermod.m"
                            }
#line 569 "intermod.m"
                          else
#line 569 "intermod.m"
                            if (((MR_tag((MR_Word) transform_hlds__intermod__ShortHand0_66)) == (MR_mktag((MR_Integer) 0))))
#line 574 "intermod.m"
                              {
#line 576 "intermod.m"
                                {
#line 576 "intermod.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_traverse_goal_expr\'/5", (MR_String) "bi_implication");
#line 576 "intermod.m"
                                  return;
                                }
#line 574 "intermod.m"
                              }
#line 569 "intermod.m"
                            else
#line 570 "intermod.m"
                              {
#line 570 "intermod.m"
                                MR_Word transform_hlds__intermod__MaybeIO_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 0)));
#line 570 "intermod.m"
                                MR_Word transform_hlds__intermod__ResultVar_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 1)));
#line 570 "intermod.m"
                                MR_Word transform_hlds__intermod__SubGoal0_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 2)));
#line 570 "intermod.m"
                                MR_Word transform_hlds__intermod__SubGoal_110;

#line 571 "intermod.m"
                                {
#line 571 "intermod.m"
                                  transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_109, &transform_hlds__intermod__SubGoal_110, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                                }
#line 572 "intermod.m"
                                {
#line 572 "intermod.m"
                                  transform_hlds__intermod__ShortHand_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 572 "intermod.m"
                                  MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 0) = ((MR_Box) (transform_hlds__intermod__MaybeIO_77));
#line 572 "intermod.m"
                                  MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 1) = ((MR_Box) (transform_hlds__intermod__ResultVar_78));
#line 572 "intermod.m"
                                  MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 2) = ((MR_Box) (transform_hlds__intermod__SubGoal_110));
#line 572 "intermod.m"
                                }
#line 570 "intermod.m"
                              }
#line 578 "intermod.m"
                          {
#line 578 "intermod.m"
                            MR_Word base;
#line 578 "intermod.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "intermod.m"
                            *transform_hlds__intermod__GoalExpr_7 = base;
#line 578 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 578 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__ShortHand_76));
#line 578 "intermod.m"
                          }
#line 559 "intermod.m"
                        }
#line 485 "intermod.m"
                      else
#line 536 "intermod.m"
                        {
#line 536 "intermod.m"
                          MR_Word transform_hlds__intermod__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 536 "intermod.m"
                          MR_Word transform_hlds__intermod__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 536 "intermod.m"
                          MR_Word transform_hlds__intermod__Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 536 "intermod.m"
                          MR_Word transform_hlds__intermod__Cases_52;

#line 537 "intermod.m"
                          {
#line 537 "intermod.m"
                            transform_hlds__intermod__intermod_traverse_cases_5_p_0(transform_hlds__intermod__Cases0_51, &transform_hlds__intermod__Cases_52, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                          }
#line 538 "intermod.m"
                          {
#line 538 "intermod.m"
                            MR_Word base;
#line 538 "intermod.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 538 "intermod.m"
                            *transform_hlds__intermod__GoalExpr_7 = base;
#line 538 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 538 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Var_49));
#line 538 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__CanFail_50));
#line 538 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__intermod__Cases_52));
#line 538 "intermod.m"
                          }
#line 536 "intermod.m"
                        }
#line 485 "intermod.m"
  }
#line 480 "intermod.m"
}

#line 472 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_5_p_0(
#line 472 "intermod.m"
  MR_Word transform_hlds__intermod__Goal0_6,
#line 472 "intermod.m"
  MR_Word * transform_hlds__intermod__Goal_7,
#line 472 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 472 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_13,
#line 472 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_14)
#line 472 "intermod.m"
{
#line 475 "intermod.m"
  {
#line 475 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 475 "intermod.m"
    MR_Word transform_hlds__intermod__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_6, (MR_Integer) 0)));
#line 475 "intermod.m"
    MR_Word transform_hlds__intermod__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_6, (MR_Integer) 1)));
#line 475 "intermod.m"
    MR_Word transform_hlds__intermod__GoalExpr_12;

#line 477 "intermod.m"
    {
#line 477 "intermod.m"
      transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_10, &transform_hlds__intermod__GoalExpr_12, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_13, transform_hlds__intermod__STATE_VARIABLE_Info_14);
    }
#line 478 "intermod.m"
    {
#line 478 "intermod.m"
      MR_Word base;
#line 478 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "intermod.m"
      *transform_hlds__intermod__Goal_7 = base;
#line 478 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_12));
#line 478 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_11));
#line 478 "intermod.m"
    }
#line 475 "intermod.m"
  }
#line 472 "intermod.m"
}

#line 457 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
#line 457 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 457 "intermod.m"
{
#line 457 "intermod.m"
  {
#line 457 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 457 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0, 1);
#line 457 "intermod.m"
  }
#line 457 "intermod.m"
}

#line 457 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
#line 457 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 457 "intermod.m"
{
#line 457 "intermod.m"
  {
#line 457 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 467 "intermod.m"
    {
#line 467 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8);
    }
#line 467 "intermod.m"
    if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 467 "intermod.m"
      {
#line 467 "intermod.m"
        transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(transform_hlds__intermod__env_ptr);
#line 467 "intermod.m"
        return;
      }
#line 457 "intermod.m"
  }
#line 457 "intermod.m"
}

#line 457 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
#line 457 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 457 "intermod.m"
{
#line 457 "intermod.m"
  {
#line 457 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 457 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0) == 0)
#line 457 "intermod.m"
      {
#line 457 "intermod.m"
        {
#line 457 "intermod.m"
          MR_Word transform_hlds__intermod__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)));
#line 457 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr_6;
#line 458 "intermod.m"
          MR_Word transform_hlds__intermod__V_7_7;

#line 457 "intermod.m"
          (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 458 "intermod.m"
          transform_hlds__intermod__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_3, (MR_Integer) 0)));
#line 458 "intermod.m"
          transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_3, (MR_Integer) 1)));
#line 460 "intermod.m"
          {
#line 460 "intermod.m"
            (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__intermod__GoalExpr_6);
          }
#line 460 "intermod.m"
          if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 460 "intermod.m"
            {
#line 461 "intermod.m"
              (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 0);
#line 460 "intermod.m"
              if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 460 "intermod.m"
                {
#line 462 "intermod.m"
                  (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (MR_Integer) 1;
#line 462 "intermod.m"
                  (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 460 "intermod.m"
                }
#line 460 "intermod.m"
            }
#line 460 "intermod.m"
          if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 460 "intermod.m"
            {
#line 460 "intermod.m"
              transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(transform_hlds__intermod__env_ptr);
            }
#line 464 "intermod.m"
          {
#line 464 "intermod.m"
            MR_Word transform_hlds__intermod__V_9_9;

#line 464 "intermod.m"
            {
#line 464 "intermod.m"
              transform_hlds__intermod__V_9_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__intermod__GoalExpr_6);
            }
#line 464 "intermod.m"
            (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = (transform_hlds__intermod__V_9_9 == (MR_Integer) 1);
#line 464 "intermod.m"
            if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 464 "intermod.m"
              {
#line 465 "intermod.m"
                (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
#line 465 "intermod.m"
                (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 464 "intermod.m"
              }
#line 464 "intermod.m"
            if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 464 "intermod.m"
              {
#line 464 "intermod.m"
                transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(transform_hlds__intermod__env_ptr);
              }
#line 464 "intermod.m"
          }
#line 457 "intermod.m"
        }
#line 457 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_FALSE;
#line 457 "intermod.m"
      }
#line 457 "intermod.m"
    else
#line 457 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 457 "intermod.m"
  }
#line 457 "intermod.m"
}

#line 453 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
#line 453 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 453 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 453 "intermod.m"
{
#line 453 "intermod.m"
  {
#line 453 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s transform_hlds__intermod__env;

#line 453 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1_1;
#line 453 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2_2;
#line 456 "intermod.m"
    if (((transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 456 "intermod.m"
      (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 1);
#line 456 "intermod.m"
    else
#line 457 "intermod.m"
      {
#line 457 "intermod.m"
        {
#line 457 "intermod.m"
          transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(&transform_hlds__intermod__env);
        }
#line 457 "intermod.m"
      }
#line 456 "intermod.m"
    return (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
#line 453 "intermod.m"
  }
#line 453 "intermod.m"
}

#line 415 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__check_for_ho_input_args_4_p_0(
#line 415 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_5,
#line 415 "intermod.m"
  MR_Word transform_hlds__intermod__VarTypes_6,
#line 415 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 415 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4)
#line 415 "intermod.m"
{
#line 419 "intermod.m"
  while (MR_TRUE)
#line 419 "intermod.m"
    {
#line 419 "intermod.m"
      /* tailcall optimized into a loop */
#line 419 "intermod.m"
      {
#line 419 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 419 "intermod.m"
        MR_Word transform_hlds__intermod__HeadVar_7;
#line 419 "intermod.m"
        MR_Word transform_hlds__intermod__HeadVars_8;
#line 419 "intermod.m"
        MR_Word transform_hlds__intermod__ArgMode_9;
#line 419 "intermod.m"
        MR_Word transform_hlds__intermod__ArgModes_10;

#line 419 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 419 "intermod.m"
          {
#line 419 "intermod.m"
            transform_hlds__intermod__HeadVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 419 "intermod.m"
            transform_hlds__intermod__HeadVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 419 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 419 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 419 "intermod.m"
              {
#line 419 "intermod.m"
                transform_hlds__intermod__ArgMode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 419 "intermod.m"
                transform_hlds__intermod__ArgModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 1)));
#line 421 "intermod.m"
                {
#line 421 "intermod.m"
                  MR_Word transform_hlds__intermod__Type_11;
#line 421 "intermod.m"
                  MR_Word transform_hlds__intermod__V_12_12;

#line 421 "intermod.m"
                  {
#line 421 "intermod.m"
                    transform_hlds__intermod__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__intermod__ModuleInfo_5, transform_hlds__intermod__ArgMode_9);
                  }
#line 421 "intermod.m"
                  if (transform_hlds__intermod__succeeded)
#line 421 "intermod.m"
                    {
#line 422 "intermod.m"
                      {
#line 422 "intermod.m"
                        parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__intermod__VarTypes_6, transform_hlds__intermod__HeadVar_7, &transform_hlds__intermod__Type_11);
                      }
#line 423 "intermod.m"
                      {
#line 423 "intermod.m"
                        transform_hlds__intermod__V_12_12 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__intermod__ModuleInfo_5, transform_hlds__intermod__Type_11);
                      }
#line 423 "intermod.m"
                      transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 421 "intermod.m"
                    }
#line 421 "intermod.m"
                }
#line 424 "intermod.m"
                if (!(transform_hlds__intermod__succeeded))
#line 425 "intermod.m"
                  {
#line 425 "intermod.m"
                    /* direct tailcall eliminated */
#line 425 "intermod.m"
                    {
#line 425 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__HeadVars_8;
#line 425 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__4__tmp_copy_4 = transform_hlds__intermod__ArgModes_10;

#line 425 "intermod.m"
                      transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__4__tmp_copy_4;
#line 425 "intermod.m"
                      transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 425 "intermod.m"
                    }
#line 425 "intermod.m"
                    continue;
#line 425 "intermod.m"
                  }
#line 419 "intermod.m"
              }
#line 419 "intermod.m"
          }
#line 419 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 419 "intermod.m"
      }
#line 419 "intermod.m"
      break;
#line 419 "intermod.m"
    }
#line 415 "intermod.m"
}

#line 389 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_clauses_5_p_0(
#line 389 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 389 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 389 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 389 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 389 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 389 "intermod.m"
{
#line 392 "intermod.m"
  {
#line 392 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 392 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "intermod.m"
      {
#line 392 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 392 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 392 "intermod.m"
      }
#line 392 "intermod.m"
    else
#line 394 "intermod.m"
      {
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__Clause0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__Clauses0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__Clause_11;
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__Clauses_12;
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_15;
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_16;
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__DoWrite1_17;
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_20_20;
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_33;
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_34;
#line 394 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_35;
#line 397 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;
#line 397 "intermod.m"
        MR_Word transform_hlds__intermod__V_24_24;
#line 397 "intermod.m"
        MR_Word transform_hlds__intermod__V_25_25;
#line 397 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26;
#line 397 "intermod.m"
        MR_Word transform_hlds__intermod__V_23_23;

#line 395 "intermod.m"
        {
#line 395 "intermod.m"
          transform_hlds__intermod__Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__Clause0_9);
        }
#line 476 "intermod.m"
        transform_hlds__intermod__GoalExpr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_15, (MR_Integer) 0)));
#line 476 "intermod.m"
        transform_hlds__intermod__GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_15, (MR_Integer) 1)));
#line 477 "intermod.m"
        {
#line 477 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_33, &transform_hlds__intermod__GoalExpr_35, &transform_hlds__intermod__DoWrite1_17, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_20_20);
        }
#line 478 "intermod.m"
        {
#line 478 "intermod.m"
          transform_hlds__intermod__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_16, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_35));
#line 478 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_16, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_34));
#line 478 "intermod.m"
        }
#line 397 "intermod.m"
        transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 0)));
#line 397 "intermod.m"
        transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 1)));
#line 397 "intermod.m"
        transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 2)));
#line 397 "intermod.m"
        transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 3)));
#line 397 "intermod.m"
        transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 4)));
#line 397 "intermod.m"
        {
#line 397 "intermod.m"
          transform_hlds__intermod__Clause_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 397 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 0) = ((MR_Box) (transform_hlds__intermod__V_22_22));
#line 397 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 1) = ((MR_Box) (transform_hlds__intermod__Goal_16));
#line 397 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 2) = ((MR_Box) (transform_hlds__intermod__V_24_24));
#line 397 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 3) = ((MR_Box) (transform_hlds__intermod__V_25_25));
#line 397 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 4) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 397 "intermod.m"
        }
#line 401 "intermod.m"
        if ((transform_hlds__intermod__DoWrite1_17 == (MR_Integer) 0))
#line 402 "intermod.m"
          {
#line 403 "intermod.m"
            transform_hlds__intermod__Clauses_12 = transform_hlds__intermod__Clauses0_10;
#line 404 "intermod.m"
            *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 0;
#line 404 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_20_20;
#line 402 "intermod.m"
          }
#line 401 "intermod.m"
        else
#line 400 "intermod.m"
          {
#line 400 "intermod.m"
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
#line 394 "intermod.m"
      }
#line 392 "intermod.m"
  }
#line 389 "intermod.m"
}

#line 378 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(
#line 378 "intermod.m"
  MR_Word transform_hlds__intermod__Target_1,
#line 378 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 378 "intermod.m"
{
#line 381 "intermod.m"
  while (MR_TRUE)
#line 381 "intermod.m"
    {
#line 381 "intermod.m"
      /* tailcall optimized into a loop */
#line 381 "intermod.m"
      {
#line 381 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 381 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15;
#line 381 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16;

#line 381 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 381 "intermod.m"
          {
#line 381 "intermod.m"
            transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 381 "intermod.m"
            transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 381 "intermod.m"
            {
#line 381 "intermod.m"
              MR_Word transform_hlds__intermod__Lang_6;
#line 381 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignLang_7;
#line 383 "intermod.m"
              MR_Word transform_hlds__intermod__V_11_11;
#line 383 "intermod.m"
              MR_Word transform_hlds__intermod__V_12_12;
#line 383 "intermod.m"
              MR_Word transform_hlds__intermod__V_13_13;
#line 383 "intermod.m"
              MR_Word transform_hlds__intermod__V_14_14;

#line 382 "intermod.m"
              transform_hlds__intermod__succeeded = (transform_hlds__intermod__Target_1 == (MR_Integer) 1);
#line 381 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 381 "intermod.m"
                {
#line 383 "intermod.m"
                  transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 0)));
#line 383 "intermod.m"
                  transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 1)));
#line 383 "intermod.m"
                  transform_hlds__intermod__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 2)));
#line 383 "intermod.m"
                  transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 3)));
#line 383 "intermod.m"
                  transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 4)));
#line 384 "intermod.m"
                  transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Lang_6)) == (MR_mktag((MR_Integer) 1)));
#line 384 "intermod.m"
                  if (transform_hlds__intermod__succeeded)
#line 384 "intermod.m"
                    {
#line 384 "intermod.m"
                      transform_hlds__intermod__ForeignLang_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Lang_6, (MR_Integer) 0)));
#line 385 "intermod.m"
                      transform_hlds__intermod__succeeded = (transform_hlds__intermod__ForeignLang_7 == (MR_Integer) 1);
#line 384 "intermod.m"
                    }
#line 381 "intermod.m"
                }
#line 381 "intermod.m"
            }
#line 381 "intermod.m"
            if (!(transform_hlds__intermod__succeeded))
#line 387 "intermod.m"
              {
#line 387 "intermod.m"
                /* direct tailcall eliminated */
#line 387 "intermod.m"
                {
#line 387 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__2__tmp_copy_2 = transform_hlds__intermod__V_15_15;

#line 387 "intermod.m"
                  transform_hlds__intermod__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2__tmp_copy_2;
#line 387 "intermod.m"
                }
#line 387 "intermod.m"
                continue;
#line 387 "intermod.m"
              }
#line 381 "intermod.m"
          }
#line 381 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 381 "intermod.m"
      }
#line 381 "intermod.m"
      break;
#line 381 "intermod.m"
    }
#line 378 "intermod.m"
}

#line 435 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_1(
#line 435 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 435 "intermod.m"
{
#line 435 "intermod.m"
  {
#line 435 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 435 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0, 1);
#line 435 "intermod.m"
  }
#line 435 "intermod.m"
}

#line 435 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_3(
#line 435 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 435 "intermod.m"
{
#line 435 "intermod.m"
  {
#line 435 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 435 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70 = ((MR_Word) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70);
#line 435 "intermod.m"
    {
#line 435 "intermod.m"
      transform_hlds__intermod__should_be_processed_8_p_0_2(transform_hlds__intermod__env_ptr);
#line 435 "intermod.m"
      return;
    }
#line 435 "intermod.m"
  }
#line 435 "intermod.m"
}

#line 435 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_2(
#line 435 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 435 "intermod.m"
{
#line 435 "intermod.m"
  {
#line 435 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 436 "intermod.m"
    {
#line 436 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61 = hlds__hlds_clauses__clause_body_1_f_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70);
    }
#line 437 "intermod.m"
    {
#line 437 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10);
    }
#line 437 "intermod.m"
    if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 437 "intermod.m"
      {
#line 437 "intermod.m"
        transform_hlds__intermod__should_be_processed_8_p_0_1(transform_hlds__intermod__env_ptr);
#line 437 "intermod.m"
        return;
      }
#line 435 "intermod.m"
  }
#line 435 "intermod.m"
}

#line 435 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_4(
#line 435 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 435 "intermod.m"
{
#line 435 "intermod.m"
  {
#line 435 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 435 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0) == 0)
#line 435 "intermod.m"
      {
#line 435 "intermod.m"
        {
#line 435 "intermod.m"
          {
#line 435 "intermod.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__should_be_processed_8_p_0_3, transform_hlds__intermod__env_ptr);
          }
#line 435 "intermod.m"
        }
#line 435 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_FALSE;
#line 435 "intermod.m"
      }
#line 435 "intermod.m"
    else
#line 435 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_TRUE;
#line 435 "intermod.m"
  }
#line 435 "intermod.m"
}

#line 290 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0(
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_9,
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_10,
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__PredInfo_11,
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__TypeSpecForcePreds_12,
#line 290 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_13,
#line 290 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_14,
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_15,
#line 290 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_16)
#line 290 "intermod.m"
{
#line 290 "intermod.m"
  {
#line 290 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s transform_hlds__intermod__env;

#line 290 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10 = transform_hlds__intermod__PredId_10;
#line 301 "intermod.m"
    if ((transform_hlds__intermod__ProcessLocalPreds_9 == (MR_Integer) 0))
#line 299 "intermod.m"
      {
#line 298 "intermod.m"
        {
#line 298 "intermod.m"
          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__intermod__PredInfo_11);
        }
#line 299 "intermod.m"
        if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 299 "intermod.m"
          {
#line 299 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(transform_hlds__intermod__PredInfo_11);
          }
#line 299 "intermod.m"
      }
#line 301 "intermod.m"
    else
#line 302 "intermod.m"
      {
#line 302 "intermod.m"
        MR_Word transform_hlds__intermod__V_49_49;

#line 303 "intermod.m"
        {
#line 303 "intermod.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__V_49_49);
        }
#line 303 "intermod.m"
        {
#line 303 "intermod.m"
          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred____Unify____import_status_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__intermod__V_49_49);
        }
#line 302 "intermod.m"
      }
#line 295 "intermod.m"
    if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 295 "intermod.m"
      {
#line 306 "intermod.m"
        {
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_46_46;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_47_47;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__ClauseInfo_17;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__ClausesRep_18;
#line 306 "intermod.m"
          MR_Integer transform_hlds__intermod__ProcId_21;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__Procs_23;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__ProcInfo_24;
#line 306 "intermod.m"
          MR_Integer transform_hlds__intermod__Arity_25;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__Markers_26;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__Globals_27;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__Target_28;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__V_33_33;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__V_38_38;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod__V_50_50;
#line 307 "intermod.m"
          MR_Word transform_hlds__intermod___ItemNumbers_19;
#line 310 "intermod.m"
          MR_Word transform_hlds__intermod___ProcIds_22;
#line 312 "intermod.m"
          MR_Box transform_hlds__intermod__conv0_ProcInfo_24;
#line 323 "intermod.m"
          MR_Word transform_hlds__intermod__V_34_34;
#line 324 "intermod.m"
          MR_Word transform_hlds__intermod__V_35_35;
#line 327 "intermod.m"
          MR_Word transform_hlds__intermod__V_36_36;
#line 335 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_48_48;
#line 338 "intermod.m"
          MR_Word transform_hlds__intermod__V_37_37;

#line 306 "intermod.m"
          {
#line 306 "intermod.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__ClauseInfo_17);
          }
#line 307 "intermod.m"
          {
#line 307 "intermod.m"
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClauseInfo_17, &transform_hlds__intermod__ClausesRep_18, &transform_hlds__intermod___ItemNumbers_19);
          }
#line 308 "intermod.m"
          {
#line 308 "intermod.m"
            hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep_18, &(transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20);
          }
#line 310 "intermod.m"
          {
#line 310 "intermod.m"
            transform_hlds__intermod__V_33_33 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__intermod__PredInfo_11);
          }
#line 310 "intermod.m"
          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 310 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 310 "intermod.m"
            {
#line 310 "intermod.m"
              transform_hlds__intermod__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, (MR_Integer) 0)));
#line 310 "intermod.m"
              transform_hlds__intermod___ProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, (MR_Integer) 1)));
#line 311 "intermod.m"
              {
#line 311 "intermod.m"
                hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__Procs_23);
              }
#line 17989 "transform_hlds.intermod.c"
              transform_hlds__intermod__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 17991 "transform_hlds.intermod.c"
              transform_hlds__intermod__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 312 "intermod.m"
              {
#line 312 "intermod.m"
                mercury__map__lookup_3_p_0(transform_hlds__intermod__TypeCtorInfo_46_46, transform_hlds__intermod__TypeCtorInfo_47_47, transform_hlds__intermod__Procs_23, ((MR_Box) (transform_hlds__intermod__ProcId_21)), &transform_hlds__intermod__conv0_ProcInfo_24);
              }
#line 312 "intermod.m"
              transform_hlds__intermod__ProcInfo_24 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_24);
#line 317 "intermod.m"
              {
#line 317 "intermod.m"
                transform_hlds__intermod__Arity_25 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_11);
              }
#line 322 "intermod.m"
              {
#line 322 "intermod.m"
                hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__Markers_26);
              }
#line 323 "intermod.m"
              transform_hlds__intermod__V_34_34 = (MR_Integer) 9;
#line 323 "intermod.m"
              {
#line 323 "intermod.m"
                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_34_34);
              }
#line 323 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 306 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 306 "intermod.m"
                {
#line 324 "intermod.m"
                  transform_hlds__intermod__V_35_35 = (MR_Integer) 10;
#line 324 "intermod.m"
                  {
#line 324 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_35_35);
                  }
#line 324 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 306 "intermod.m"
                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 306 "intermod.m"
                    {
#line 327 "intermod.m"
                      transform_hlds__intermod__V_36_36 = (MR_Integer) 0;
#line 327 "intermod.m"
                      {
#line 327 "intermod.m"
                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_36_36);
                      }
#line 327 "intermod.m"
                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 306 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 306 "intermod.m"
                        {
#line 331 "intermod.m"
                          {
#line 331 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__intermod__PredInfo_11);
                          }
#line 331 "intermod.m"
                          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 306 "intermod.m"
                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 306 "intermod.m"
                            {
#line 332 "intermod.m"
                              {
#line 332 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__intermod__PredInfo_11);
                              }
#line 332 "intermod.m"
                              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 306 "intermod.m"
                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 306 "intermod.m"
                                {
#line 18071 "transform_hlds.intermod.c"
                                  transform_hlds__intermod__TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 335 "intermod.m"
                                  {
#line 335 "intermod.m"
                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(transform_hlds__intermod__TypeCtorInfo_48_48, ((MR_Box) ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10)), transform_hlds__intermod__TypeSpecForcePreds_12);
                                  }
#line 335 "intermod.m"
                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 306 "intermod.m"
                                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 306 "intermod.m"
                                    {
#line 338 "intermod.m"
                                      transform_hlds__intermod__V_37_37 = (MR_Integer) 7;
#line 338 "intermod.m"
                                      {
#line 338 "intermod.m"
                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_37_37);
                                      }
#line 338 "intermod.m"
                                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 306 "intermod.m"
                                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 306 "intermod.m"
                                        {
#line 341 "intermod.m"
                                          {
#line 341 "intermod.m"
                                            hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_16, &transform_hlds__intermod__Globals_27);
                                          }
#line 342 "intermod.m"
                                          {
#line 342 "intermod.m"
                                            libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_27, &transform_hlds__intermod__Target_28);
                                          }
#line 343 "intermod.m"
                                          {
#line 343 "intermod.m"
                                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(transform_hlds__intermod__Target_28, (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20);
                                          }
#line 343 "intermod.m"
                                          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 306 "intermod.m"
                                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 306 "intermod.m"
                                            {
#line 346 "intermod.m"
                                              transform_hlds__intermod__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 346 "intermod.m"
                                              {
#line 346 "intermod.m"
                                                hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__V_50_50);
                                              }
#line 346 "intermod.m"
                                              {
#line 346 "intermod.m"
                                                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(transform_hlds__intermod__V_38_38, transform_hlds__intermod__V_50_50);
                                              }
#line 306 "intermod.m"
                                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 306 "intermod.m"
                                                {
#line 349 "intermod.m"
                                                  {
#line 349 "intermod.m"
                                                    MR_Integer transform_hlds__intermod__V_45_45 = (transform_hlds__intermod__InlineThreshold_13 + transform_hlds__intermod__Arity_25);

#line 349 "intermod.m"
                                                    {
#line 349 "intermod.m"
                                                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__V_45_45);
                                                    }
#line 349 "intermod.m"
                                                  }
#line 350 "intermod.m"
                                                  if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 350 "intermod.m"
                                                    {
#line 351 "intermod.m"
                                                      {
#line 351 "intermod.m"
                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(transform_hlds__intermod__PredInfo_11);
                                                      }
#line 350 "intermod.m"
                                                      if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 350 "intermod.m"
                                                        {
#line 355 "intermod.m"
                                                          {
#line 355 "intermod.m"
                                                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, (MR_Integer) 22);
                                                          }
#line 350 "intermod.m"
                                                          if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 350 "intermod.m"
                                                            {
#line 357 "intermod.m"
                                                              {
#line 357 "intermod.m"
                                                                MR_Integer transform_hlds__intermod__GoalSize_29;
#line 357 "intermod.m"
                                                                MR_Integer transform_hlds__intermod__V_43_43;
#line 357 "intermod.m"
                                                                MR_Word transform_hlds__intermod__HeadVars_55;
#line 357 "intermod.m"
                                                                MR_Word transform_hlds__intermod__ArgModes_56;
#line 357 "intermod.m"
                                                                MR_Word transform_hlds__intermod__VarTypes_57;

#line 410 "intermod.m"
                                                                {
#line 410 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__HeadVars_55);
                                                                }
#line 411 "intermod.m"
                                                                {
#line 411 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__ArgModes_56);
                                                                }
#line 412 "intermod.m"
                                                                {
#line 412 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__VarTypes_57);
                                                                }
#line 413 "intermod.m"
                                                                {
#line 413 "intermod.m"
                                                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__check_for_ho_input_args_4_p_0(transform_hlds__intermod__ModuleInfo_16, transform_hlds__intermod__VarTypes_57, transform_hlds__intermod__HeadVars_55, transform_hlds__intermod__ArgModes_56);
                                                                }
#line 357 "intermod.m"
                                                                if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 357 "intermod.m"
                                                                  {
#line 358 "intermod.m"
                                                                    {
#line 358 "intermod.m"
                                                                      hlds__goal_util__clause_list_size_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, &transform_hlds__intermod__GoalSize_29);
                                                                    }
#line 359 "intermod.m"
                                                                    transform_hlds__intermod__V_43_43 = (transform_hlds__intermod__HigherOrderSizeLimit_14 + transform_hlds__intermod__Arity_25);
#line 359 "intermod.m"
                                                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = (transform_hlds__intermod__GoalSize_29 <= transform_hlds__intermod__V_43_43);
#line 357 "intermod.m"
                                                                  }
#line 357 "intermod.m"
                                                              }
#line 350 "intermod.m"
                                                              if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 361 "intermod.m"
                                                                {
#line 361 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__DeforestThreshold_30;
#line 361 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_39_39;
#line 361 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_40_40;
#line 361 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_41_41;
#line 361 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_42_42;
#line 361 "intermod.m"
                                                                  MR_Word transform_hlds__intermod__V_72_72;
#line 361 "intermod.m"
                                                                  MR_Word transform_hlds__intermod__V_73_73;

#line 361 "intermod.m"
                                                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = (transform_hlds__intermod__Deforestation_15 == (MR_Integer) 1);
#line 361 "intermod.m"
                                                                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 361 "intermod.m"
                                                                    {
#line 366 "intermod.m"
                                                                      transform_hlds__intermod__V_40_40 = (MR_Integer) 2;
#line 366 "intermod.m"
                                                                      transform_hlds__intermod__V_39_39 = (transform_hlds__intermod__InlineThreshold_13 * transform_hlds__intermod__V_40_40);
#line 366 "intermod.m"
                                                                      transform_hlds__intermod__V_41_41 = (MR_Integer) 1;
#line 366 "intermod.m"
                                                                      transform_hlds__intermod__DeforestThreshold_30 = (transform_hlds__intermod__V_39_39 + transform_hlds__intermod__V_41_41);
#line 367 "intermod.m"
                                                                      transform_hlds__intermod__V_42_42 = (transform_hlds__intermod__DeforestThreshold_30 + transform_hlds__intermod__Arity_25);
#line 367 "intermod.m"
                                                                      {
#line 367 "intermod.m"
                                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__V_42_42);
                                                                      }
#line 361 "intermod.m"
                                                                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 361 "intermod.m"
                                                                        {
#line 435 "intermod.m"
                                                                          {
#line 435 "intermod.m"
                                                                            transform_hlds__intermod__should_be_processed_8_p_0_4(&transform_hlds__intermod__env);
                                                                          }
#line 361 "intermod.m"
                                                                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 361 "intermod.m"
                                                                            {
#line 440 "intermod.m"
                                                                              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20)) == (MR_mktag((MR_Integer) 1)));
#line 440 "intermod.m"
                                                                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 440 "intermod.m"
                                                                                {
#line 440 "intermod.m"
                                                                                  transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, (MR_Integer) 0)));
#line 440 "intermod.m"
                                                                                  transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, (MR_Integer) 1)));
#line 441 "intermod.m"
                                                                                  if ((transform_hlds__intermod__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "intermod.m"
                                                                                    {
#line 442 "intermod.m"
                                                                                      MR_Word transform_hlds__intermod__Goal2_66;
#line 442 "intermod.m"
                                                                                      MR_Word transform_hlds__intermod__GoalList_67;

#line 443 "intermod.m"
                                                                                      {
#line 443 "intermod.m"
                                                                                        transform_hlds__intermod__Goal2_66 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__V_73_73);
                                                                                      }
#line 444 "intermod.m"
                                                                                      {
#line 444 "intermod.m"
                                                                                        hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__intermod__Goal2_66, &transform_hlds__intermod__GoalList_67);
                                                                                      }
#line 451 "intermod.m"
                                                                                      {
#line 451 "intermod.m"
                                                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(transform_hlds__intermod__GoalList_67, (MR_Integer) 0);
                                                                                      }
#line 442 "intermod.m"
                                                                                    }
#line 441 "intermod.m"
                                                                                  else
#line 440 "intermod.m"
                                                                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_TRUE;
#line 440 "intermod.m"
                                                                                }
#line 361 "intermod.m"
                                                                            }
#line 361 "intermod.m"
                                                                        }
#line 361 "intermod.m"
                                                                    }
#line 361 "intermod.m"
                                                                }
#line 350 "intermod.m"
                                                            }
#line 350 "intermod.m"
                                                        }
#line 350 "intermod.m"
                                                    }
#line 306 "intermod.m"
                                                }
#line 306 "intermod.m"
                                            }
#line 306 "intermod.m"
                                        }
#line 306 "intermod.m"
                                    }
#line 306 "intermod.m"
                                }
#line 306 "intermod.m"
                            }
#line 306 "intermod.m"
                        }
#line 306 "intermod.m"
                    }
#line 306 "intermod.m"
                }
#line 310 "intermod.m"
            }
#line 306 "intermod.m"
        }
#line 370 "intermod.m"
        if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 372 "intermod.m"
          {
#line 372 "intermod.m"
            MR_Word transform_hlds__intermod__V_31_31;

#line 372 "intermod.m"
            {
#line 372 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__V_31_31);
            }
#line 372 "intermod.m"
          }
#line 295 "intermod.m"
      }
#line 295 "intermod.m"
    return (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded;
#line 290 "intermod.m"
  }
#line 290 "intermod.m"
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
#line 2555 "intermod.m"
  {
#line 2555 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2555 "intermod.m"
    {
#line 2555 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0(transform_hlds__intermod__FileType_11, transform_hlds__intermod__FileName_12, transform_hlds__intermod__ModuleSpecs_13, transform_hlds__intermod__STATE_VARIABLE_Specs_0_22, transform_hlds__intermod__STATE_VARIABLE_Specs_23, transform_hlds__intermod__ModuleError_15, transform_hlds__intermod__STATE_VARIABLE_Error_0_24, transform_hlds__intermod__STATE_VARIABLE_Error_25);
#line 2555 "intermod.m"
      return;
    }
#line 2555 "intermod.m"
  }
#line 91 "intermod.m"
}

#line 805 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_pred_import_status_2_p_0_1(
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 805 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 805 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 805 "intermod.m"
{
#line 805 "intermod.m"
  {
#line 805 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 805 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11;

#line 805 "intermod.m"
    {
#line 805 "intermod.m"
      transform_hlds__intermod__gather_instances_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11);
    }
#line 805 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11));
#line 805 "intermod.m"
  }
#line 805 "intermod.m"
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
#line 2182 "intermod.m"
  {
#line 2182 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_14_42;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_4;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__VeryVerbose_5;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__PredIds_7;
#line 2182 "intermod.m"
    MR_Integer transform_hlds__intermod__Threshold_8;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__Deforestation_9;
#line 2182 "intermod.m"
    MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_10;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_18_18;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_22_22;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_24_24;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_25_25;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_26_26;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__Modules_33;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__Procs_34;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__ProcDecls_35;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__VarTypes_36;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_37;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__ExtraExportedPreds0_53;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_18_54;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_60;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_61;
#line 2182 "intermod.m"
    MR_Word transform_hlds__intermod__V_62_62;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_72_72;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_74_74;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_79_79;
#line 805 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_25_25;

#line 2183 "intermod.m"
    {
#line 2183 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__intermod__Globals_4);
    }
#line 2184 "intermod.m"
    {
#line 2184 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 45, &transform_hlds__intermod__VeryVerbose_5);
    }
#line 2186 "intermod.m"
    {
#line 2186 "intermod.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_5, (MR_String) "% Adjusting import status of predicates in the \140.opt\' file...");
    }
#line 2191 "intermod.m"
    {
#line 2191 "intermod.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__intermod__PredIds_7, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_18_18);
    }
#line 2192 "intermod.m"
    {
#line 2192 "intermod.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 340, &transform_hlds__intermod__Threshold_8);
    }
#line 2194 "intermod.m"
    {
#line 2194 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 385, &transform_hlds__intermod__Deforestation_9);
    }
#line 2195 "intermod.m"
    {
#line 2195 "intermod.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 350, &transform_hlds__intermod__HigherOrderSizeLimit_10);
    }
#line 2106 "intermod.m"
    {
#line 2106 "intermod.m"
      mercury__set__init_1_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, &transform_hlds__intermod__Modules_33);
    }
#line 18562 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_14_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2107 "intermod.m"
    {
#line 2107 "intermod.m"
      mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_42, &transform_hlds__intermod__Procs_34);
    }
#line 2108 "intermod.m"
    {
#line 2108 "intermod.m"
      mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_42, &transform_hlds__intermod__ProcDecls_35);
    }
#line 2109 "intermod.m"
    {
#line 2109 "intermod.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&transform_hlds__intermod__VarTypes_36);
    }
#line 2110 "intermod.m"
    {
#line 2110 "intermod.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__intermod__TVarSet_37);
    }
#line 2113 "intermod.m"
    {
#line 2113 "intermod.m"
      transform_hlds__intermod__STATE_VARIABLE_Info_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2113 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 0) = ((MR_Box) (transform_hlds__intermod__Modules_33));
#line 2113 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 1) = ((MR_Box) (transform_hlds__intermod__Procs_34));
#line 2113 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 2) = ((MR_Box) (transform_hlds__intermod__ProcDecls_35));
#line 2113 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2113 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2113 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 5) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_18_18));
#line 2113 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 6) = ((MR_Box) ((MR_Integer) 0));
#line 2113 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_36));
#line 2113 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_37));
#line 2113 "intermod.m"
    }
#line 196 "intermod.m"
    {
#line 196 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__PredIds_7, (MR_Integer) 0, transform_hlds__intermod__Threshold_8, transform_hlds__intermod__HigherOrderSizeLimit_10, transform_hlds__intermod__Deforestation_9, transform_hlds__intermod__STATE_VARIABLE_Info_22_22, &transform_hlds__intermod__STATE_VARIABLE_Info_18_54);
    }
#line 200 "intermod.m"
    {
#line 200 "intermod.m"
      mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__intermod__ExtraExportedPreds0_53);
    }
#line 201 "intermod.m"
    {
#line 201 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(transform_hlds__intermod__ExtraExportedPreds0_53, transform_hlds__intermod__Threshold_8, transform_hlds__intermod__HigherOrderSizeLimit_10, transform_hlds__intermod__Deforestation_9, transform_hlds__intermod__STATE_VARIABLE_Info_18_54, &transform_hlds__intermod__STATE_VARIABLE_Info_24_24);
    }
#line 2159 "intermod.m"
    transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 1)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
#line 2159 "intermod.m"
    transform_hlds__intermod__ModuleInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
#line 804 "intermod.m"
    {
#line 804 "intermod.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__ModuleInfo_60, &transform_hlds__intermod__Instances_61);
    }
#line 805 "intermod.m"
    {
#line 805 "intermod.m"
      transform_hlds__intermod__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 805 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[0]));
#line 805 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 1) = ((MR_Box) (transform_hlds__intermod__adjust_pred_import_status_2_p_0_1));
#line 805 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 805 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_60));
#line 805 "intermod.m"
    }
#line 805 "intermod.m"
    {
#line 805 "intermod.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[1], (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_62_62, transform_hlds__intermod__Instances_61, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_24_24)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_25_25);
    }
#line 805 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_Info_25_25 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_25_25);
#line 2202 "intermod.m"
    {
#line 2202 "intermod.m"
      transform_hlds__intermod__gather_types_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_25_25, &transform_hlds__intermod__STATE_VARIABLE_Info_26_26);
    }
#line 2203 "intermod.m"
    {
#line 2203 "intermod.m"
      transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_26_26, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_18_18, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_13);
    }
#line 2206 "intermod.m"
    {
#line 2206 "intermod.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_5, (MR_String) " done\n");
#line 2206 "intermod.m"
      return;
    }
#line 2182 "intermod.m"
  }
#line 72 "intermod.m"
}

#line 2460 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_2(
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
      transform_hlds__intermod__conv0_HeadVar__2_2 = mdbcomp__prim_data__get_ancestors_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 2460 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_2));
#line 2460 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 2460 "intermod.m"
  }
#line 2460 "intermod.m"
}

#line 2440 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_1(
#line 2440 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2440 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 2440 "intermod.m"
{
#line 2440 "intermod.m"
  {
#line 2440 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2440 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 2440 "intermod.m"
    {
#line 2440 "intermod.m"
      return transform_hlds__intermod__succeeded = transform_hlds__intermod__IntroducedFrom__pred__grab_opt_files__2440__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 2440 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2440 "intermod.m"
  }
#line 2440 "intermod.m"
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
#line 2392 "intermod.m"
  {
#line 2392 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_203_203 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_204_204;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 2)));
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__Ancestors0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 3)));
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__InterfaceDeps0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 4)));
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__ImplementationDeps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 5)));
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptFiles_15;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__Transitive_16;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__ModulesProcessed_17;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptItemsCord_18;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptSpecs_19;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptError_20;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptItems_21;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__AddedItems_22;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__UnusedArgs_23;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__StructureReuse_24;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__UA_SR_Error_27;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__Int0Files_38;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__ReadModules_39;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__AncestorImports1_40;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__AncestorImports2_41;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewImportDeps0_42;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewUseDeps0_43;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplicitImportDeps0_44;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplicitUseDeps0_45;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewDeps_46;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewIndirectDeps_47;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplIndirectDeps_48;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__FoundError0_51;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_56_56;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_57_57;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_58_58;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_59_59;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_62_62;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_63_63;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_67_67;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_69_69;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_70_70;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_71_71;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_84_84;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_85_85;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_86_86;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_88_88;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_89_89;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_92_92;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_96_96;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_97_97;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_98_98;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_99_99;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_100_100;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_101_101;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_102_102;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_106_106;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_107_107;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_110_110;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_114_114;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_116_116;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_117_117;
#line 2394 "intermod.m"
    MR_String transform_hlds__intermod__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 0)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 1)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 6)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 7)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 8)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 9)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 10)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 11)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 12)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 13)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 14)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 15)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 16)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 17)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 18)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 19)));
#line 2394 "intermod.m"
    MR_String transform_hlds__intermod__V_142_142 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 20)));
#line 2490 "intermod.m"
    MR_Word transform_hlds__intermod___Items_49;
#line 2490 "intermod.m"
    MR_Word transform_hlds__intermod___Specs_50;

#line 2399 "intermod.m"
    {
#line 2399 "intermod.m"
      transform_hlds__intermod__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2399 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, 0) = ((MR_Box) (transform_hlds__intermod__ImplementationDeps0_14));
#line 2399 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2399 "intermod.m"
    }
#line 2399 "intermod.m"
    {
#line 2399 "intermod.m"
      transform_hlds__intermod__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2399 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_58_58, 0) = ((MR_Box) (transform_hlds__intermod__InterfaceDeps0_13));
#line 2399 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_58_58, 1) = ((MR_Box) (transform_hlds__intermod__V_59_59));
#line 2399 "intermod.m"
    }
#line 2399 "intermod.m"
    {
#line 2399 "intermod.m"
      transform_hlds__intermod__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2399 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_57_57, 0) = ((MR_Box) (transform_hlds__intermod__Ancestors0_12));
#line 2399 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_57_57, 1) = ((MR_Box) (transform_hlds__intermod__V_58_58));
#line 2399 "intermod.m"
    }
#line 2398 "intermod.m"
    {
#line 2398 "intermod.m"
      transform_hlds__intermod__V_56_56 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_203_203, transform_hlds__intermod__V_57_57);
    }
#line 2398 "intermod.m"
    {
#line 2398 "intermod.m"
      transform_hlds__intermod__OptFiles_15 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__intermod__TypeCtorInfo_203_203, transform_hlds__intermod__V_56_56);
    }
#line 2400 "intermod.m"
    {
#line 2400 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 324, &transform_hlds__intermod__Transitive_16);
    }
#line 2402 "intermod.m"
    {
#line 2402 "intermod.m"
      transform_hlds__intermod__V_62_62 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__intermod__TypeCtorInfo_203_203, transform_hlds__intermod__OptFiles_15);
    }
#line 2402 "intermod.m"
    {
#line 2402 "intermod.m"
      transform_hlds__intermod__ModulesProcessed_17 = mercury__set__insert_2_f_0(transform_hlds__intermod__TypeCtorInfo_203_203, transform_hlds__intermod__V_62_62, ((MR_Box) (transform_hlds__intermod__ModuleName_11)));
    }
#line 18976 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_204_204 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 2405 "intermod.m"
    {
#line 2405 "intermod.m"
      transform_hlds__intermod__V_63_63 = mercury__cord__empty_0_f_0(transform_hlds__intermod__TypeCtorInfo_204_204);
    }
#line 2404 "intermod.m"
    {
#line 2404 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_111_112_116_105_109_105_122_97_116_105_111_110_95_105_110_116_101_114_102_97_99_101_115_95_95_91_51_93_95_48_13_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__Transitive_16, transform_hlds__intermod__OptFiles_15, transform_hlds__intermod__ModulesProcessed_17, transform_hlds__intermod__V_63_63, &transform_hlds__intermod__OptItemsCord_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__OptSpecs_19, (MR_Integer) 0, &transform_hlds__intermod__OptError_20);
    }
#line 2413 "intermod.m"
    {
#line 2413 "intermod.m"
      transform_hlds__intermod__OptItems_21 = mercury__cord__list_1_f_0(transform_hlds__intermod__TypeCtorInfo_204_204, transform_hlds__intermod__OptItemsCord_18);
    }
#line 2414 "intermod.m"
    {
#line 2414 "intermod.m"
      transform_hlds__intermod__V_67_67 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2414 "intermod.m"
    {
#line 2414 "intermod.m"
      transform_hlds__intermod__AddedItems_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2414 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__AddedItems_22, 0) = ((MR_Box) (transform_hlds__intermod__V_67_67));
#line 2414 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__AddedItems_22, 1) = ((MR_Box) (transform_hlds__intermod__OptItems_21));
#line 2414 "intermod.m"
    }
#line 2415 "intermod.m"
    {
#line 2415 "intermod.m"
      transform_hlds__intermod__V_69_69 = mercury__cord__from_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_204_204, transform_hlds__intermod__AddedItems_22);
    }
#line 2415 "intermod.m"
    {
#line 2415 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_items_3_p_0(transform_hlds__intermod__V_69_69, transform_hlds__intermod__STATE_VARIABLE_Module_0_52, &transform_hlds__intermod__STATE_VARIABLE_Module_70_70);
    }
#line 2416 "intermod.m"
    {
#line 2416 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(transform_hlds__intermod__OptSpecs_19, transform_hlds__intermod__STATE_VARIABLE_Module_70_70, &transform_hlds__intermod__STATE_VARIABLE_Module_71_71);
    }
#line 2429 "intermod.m"
    {
#line 2429 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 348, &transform_hlds__intermod__UnusedArgs_23);
    }
#line 2430 "intermod.m"
    {
#line 2430 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 405, &transform_hlds__intermod__StructureReuse_24);
    }
#line 2433 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__UnusedArgs_23 == (MR_Integer) 1);
#line 2434 "intermod.m"
    if (!(transform_hlds__intermod__succeeded))
#line 2434 "intermod.m"
      transform_hlds__intermod__succeeded = (transform_hlds__intermod__StructureReuse_24 == (MR_Integer) 1);
#line 2454 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2439 "intermod.m"
      {
#line 2439 "intermod.m"
        MR_Word transform_hlds__intermod__LocalItemsCord_25;
#line 2439 "intermod.m"
        MR_Word transform_hlds__intermod__LocalSpecs_26;
#line 2439 "intermod.m"
        MR_Word transform_hlds__intermod__KeepPragma_28;
#line 2439 "intermod.m"
        MR_Word transform_hlds__intermod__PragmaItemsCord_37;
#line 2439 "intermod.m"
        MR_Word transform_hlds__intermod__V_75_75;
#line 2439 "intermod.m"
        MR_Word transform_hlds__intermod__V_76_76;
#line 2439 "intermod.m"
        MR_Word transform_hlds__intermod__V_77_77;
#line 2439 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_83_83;

#line 2437 "intermod.m"
        {
#line 2437 "intermod.m"
          transform_hlds__intermod__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2437 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_75_75, 0) = ((MR_Box) (transform_hlds__intermod__ModuleName_11));
#line 2437 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2437 "intermod.m"
        }
#line 2438 "intermod.m"
        {
#line 2438 "intermod.m"
          transform_hlds__intermod__V_76_76 = mercury__set__init_0_f_0(transform_hlds__intermod__TypeCtorInfo_203_203);
        }
#line 2438 "intermod.m"
        {
#line 2438 "intermod.m"
          transform_hlds__intermod__V_77_77 = mercury__cord__empty_0_f_0(transform_hlds__intermod__TypeCtorInfo_204_204);
        }
#line 2437 "intermod.m"
        {
#line 2437 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_111_112_116_105_109_105_122_97_116_105_111_110_95_105_110_116_101_114_102_97_99_101_115_95_95_91_51_93_95_48_13_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 0, transform_hlds__intermod__V_75_75, transform_hlds__intermod__V_76_76, transform_hlds__intermod__V_77_77, &transform_hlds__intermod__LocalItemsCord_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__LocalSpecs_26, (MR_Integer) 0, &transform_hlds__intermod__UA_SR_Error_27);
        }
#line 2440 "intermod.m"
        {
#line 2440 "intermod.m"
          transform_hlds__intermod__KeepPragma_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2440 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__KeepPragma_28, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[0]));
#line 2440 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__KeepPragma_28, 1) = ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_1));
#line 2440 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__KeepPragma_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2440 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__KeepPragma_28, 3) = ((MR_Box) (transform_hlds__intermod__UnusedArgs_23));
#line 2440 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__KeepPragma_28, 4) = ((MR_Box) (transform_hlds__intermod__StructureReuse_24));
#line 2440 "intermod.m"
        }
#line 2451 "intermod.m"
        {
#line 2451 "intermod.m"
          mercury__cord__filter_3_p_0(transform_hlds__intermod__TypeCtorInfo_204_204, transform_hlds__intermod__KeepPragma_28, transform_hlds__intermod__LocalItemsCord_25, &transform_hlds__intermod__PragmaItemsCord_37);
        }
#line 2452 "intermod.m"
        {
#line 2452 "intermod.m"
          parse_tree__module_imports__module_and_imports_add_items_3_p_0(transform_hlds__intermod__PragmaItemsCord_37, transform_hlds__intermod__STATE_VARIABLE_Module_71_71, &transform_hlds__intermod__STATE_VARIABLE_Module_83_83);
        }
#line 2453 "intermod.m"
        {
#line 2453 "intermod.m"
          parse_tree__module_imports__module_and_imports_add_specs_3_p_0(transform_hlds__intermod__LocalSpecs_26, transform_hlds__intermod__STATE_VARIABLE_Module_83_83, &transform_hlds__intermod__STATE_VARIABLE_Module_84_84);
        }
#line 2439 "intermod.m"
      }
#line 2454 "intermod.m"
    else
#line 2455 "intermod.m"
      {
#line 2455 "intermod.m"
        transform_hlds__intermod__UA_SR_Error_27 = (MR_Integer) 0;
#line 2455 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_Module_84_84 = transform_hlds__intermod__STATE_VARIABLE_Module_71_71;
#line 2455 "intermod.m"
      }
#line 2460 "intermod.m"
    {
#line 2460 "intermod.m"
      transform_hlds__intermod__V_86_86 = mercury__list__map_2_f_0(transform_hlds__intermod__TypeCtorInfo_203_203, (MR_Word) &transform_hlds__intermod_scalar_common_1[0], (MR_Word) &transform_hlds__intermod_scalar_common_2[8], transform_hlds__intermod__OptFiles_15);
    }
#line 2460 "intermod.m"
    {
#line 2460 "intermod.m"
      transform_hlds__intermod__V_85_85 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_203_203, transform_hlds__intermod__V_86_86);
    }
#line 2459 "intermod.m"
    {
#line 2459 "intermod.m"
      transform_hlds__intermod__Int0Files_38 = mercury__list__delete_all_2_f_0(transform_hlds__intermod__TypeCtorInfo_203_203, transform_hlds__intermod__V_85_85, ((MR_Box) (transform_hlds__intermod__ModuleName_11)));
    }
#line 2462 "intermod.m"
    {
#line 2462 "intermod.m"
      transform_hlds__intermod__V_88_88 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2463 "intermod.m"
    {
#line 2463 "intermod.m"
      transform_hlds__intermod__V_89_89 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2468 "intermod.m"
    {
#line 2468 "intermod.m"
      parse_tree__module_imports__get_dependencies_3_p_0(transform_hlds__intermod__OptItems_21, &transform_hlds__intermod__NewImportDeps0_42, &transform_hlds__intermod__NewUseDeps0_43);
    }
#line 2469 "intermod.m"
    {
#line 2469 "intermod.m"
      parse_tree__module_imports__get_implicit_dependencies_4_p_0(transform_hlds__intermod__OptItems_21, transform_hlds__intermod__Globals_7, &transform_hlds__intermod__NewImplicitImportDeps0_44, &transform_hlds__intermod__NewImplicitUseDeps0_45);
    }
#line 2477 "intermod.m"
    {
#line 2477 "intermod.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &transform_hlds__intermod__ReadModules_39);
    }
#line 2461 "intermod.m"
    {
#line 2461 "intermod.m"
      parse_tree__modules__process_module_private_interfaces_13_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__ReadModules_39, transform_hlds__intermod__Int0Files_38, transform_hlds__intermod__V_88_88, transform_hlds__intermod__V_89_89, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__AncestorImports1_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__AncestorImports2_41, transform_hlds__intermod__STATE_VARIABLE_Module_84_84, &transform_hlds__intermod__STATE_VARIABLE_Module_92_92);
    }
#line 2474 "intermod.m"
    {
#line 2474 "intermod.m"
      transform_hlds__intermod__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2474 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_102_102, 0) = ((MR_Box) (transform_hlds__intermod__AncestorImports2_41));
#line 2474 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2474 "intermod.m"
    }
#line 2474 "intermod.m"
    {
#line 2474 "intermod.m"
      transform_hlds__intermod__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2474 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_101_101, 0) = ((MR_Box) (transform_hlds__intermod__AncestorImports1_40));
#line 2474 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_101_101, 1) = ((MR_Box) (transform_hlds__intermod__V_102_102));
#line 2474 "intermod.m"
    }
#line 2473 "intermod.m"
    {
#line 2473 "intermod.m"
      transform_hlds__intermod__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2473 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_100_100, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitUseDeps0_45));
#line 2473 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_100_100, 1) = ((MR_Box) (transform_hlds__intermod__V_101_101));
#line 2473 "intermod.m"
    }
#line 2473 "intermod.m"
    {
#line 2473 "intermod.m"
      transform_hlds__intermod__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2473 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_99_99, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitImportDeps0_44));
#line 2473 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_99_99, 1) = ((MR_Box) (transform_hlds__intermod__V_100_100));
#line 2473 "intermod.m"
    }
#line 2472 "intermod.m"
    {
#line 2472 "intermod.m"
      transform_hlds__intermod__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2472 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_98_98, 0) = ((MR_Box) (transform_hlds__intermod__NewUseDeps0_43));
#line 2472 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_98_98, 1) = ((MR_Box) (transform_hlds__intermod__V_99_99));
#line 2472 "intermod.m"
    }
#line 2472 "intermod.m"
    {
#line 2472 "intermod.m"
      transform_hlds__intermod__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2472 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_97_97, 0) = ((MR_Box) (transform_hlds__intermod__NewImportDeps0_42));
#line 2472 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_97_97, 1) = ((MR_Box) (transform_hlds__intermod__V_98_98));
#line 2472 "intermod.m"
    }
#line 2471 "intermod.m"
    {
#line 2471 "intermod.m"
      transform_hlds__intermod__V_96_96 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_203_203, transform_hlds__intermod__V_97_97);
    }
#line 2471 "intermod.m"
    {
#line 2471 "intermod.m"
      transform_hlds__intermod__NewDeps_46 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__intermod__TypeCtorInfo_203_203, transform_hlds__intermod__V_96_96);
    }
#line 2480 "intermod.m"
    {
#line 2480 "intermod.m"
      transform_hlds__intermod__V_106_106 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2480 "intermod.m"
    {
#line 2480 "intermod.m"
      transform_hlds__intermod__V_107_107 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2478 "intermod.m"
    {
#line 2478 "intermod.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__ReadModules_39, (MR_Integer) 0, transform_hlds__intermod__NewDeps_46, (MR_String) ".int", transform_hlds__intermod__V_106_106, transform_hlds__intermod__V_107_107, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__NewIndirectDeps_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__NewImplIndirectDeps_48, transform_hlds__intermod__STATE_VARIABLE_Module_92_92, &transform_hlds__intermod__STATE_VARIABLE_Module_110_110);
    }
#line 2483 "intermod.m"
    {
#line 2483 "intermod.m"
      transform_hlds__intermod__V_114_114 = mercury__list__f_43_43_2_f_0(transform_hlds__intermod__TypeCtorInfo_203_203, transform_hlds__intermod__NewIndirectDeps_47, transform_hlds__intermod__NewImplIndirectDeps_48);
    }
#line 2484 "intermod.m"
    {
#line 2484 "intermod.m"
      transform_hlds__intermod__V_116_116 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2484 "intermod.m"
    {
#line 2484 "intermod.m"
      transform_hlds__intermod__V_117_117 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2482 "intermod.m"
    {
#line 2482 "intermod.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively_10_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__ReadModules_39, transform_hlds__intermod__V_114_114, (MR_String) ".int2", transform_hlds__intermod__V_116_116, transform_hlds__intermod__V_117_117, transform_hlds__intermod__STATE_VARIABLE_Module_110_110, transform_hlds__intermod__STATE_VARIABLE_Module_53);
    }
#line 2490 "intermod.m"
    {
#line 2490 "intermod.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(*transform_hlds__intermod__STATE_VARIABLE_Module_53, &transform_hlds__intermod___Items_49, &transform_hlds__intermod___Specs_50, &transform_hlds__intermod__FoundError0_51);
    }
#line 2492 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__FoundError0_51 == (MR_Integer) 0);
#line 2492 "intermod.m"
    transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2493 "intermod.m"
    if (!(transform_hlds__intermod__succeeded))
#line 2493 "intermod.m"
      {
#line 2493 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__OptError_20 == (MR_Integer) 1);
#line 2493 "intermod.m"
        if (!(transform_hlds__intermod__succeeded))
#line 2494 "intermod.m"
          transform_hlds__intermod__succeeded = (transform_hlds__intermod__UA_SR_Error_27 == (MR_Integer) 1);
#line 2493 "intermod.m"
      }
#line 2498 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2497 "intermod.m"
      *transform_hlds__intermod__FoundError_9 = (MR_Integer) 1;
#line 2498 "intermod.m"
    else
#line 2499 "intermod.m"
      *transform_hlds__intermod__FoundError_9 = (MR_Integer) 0;
#line 2392 "intermod.m"
  }
#line 65 "intermod.m"
}

#line 1033 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_opt_file_4_p_0_1(
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1033 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1033 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1033 "intermod.m"
{
#line 1033 "intermod.m"
  {
#line 1033 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1033 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34;

#line 1033 "intermod.m"
    {
#line 1033 "intermod.m"
      transform_hlds__intermod__gather_types_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34);
    }
#line 1033 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34));
#line 1033 "intermod.m"
  }
#line 1033 "intermod.m"
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
#line 147 "intermod.m"
  {
#line 147 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 147 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_7;
#line 147 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 147 "intermod.m"
    MR_String transform_hlds__intermod__TmpName_9;
#line 147 "intermod.m"
    MR_Word transform_hlds__intermod__Result_10;

#line 148 "intermod.m"
    {
#line 148 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__Globals_7);
    }
#line 149 "intermod.m"
    {
#line 149 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__ModuleName_8);
    }
#line 150 "intermod.m"
    {
#line 150 "intermod.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__ModuleName_8, (MR_String) ".opt.tmp", (MR_Integer) 0, &transform_hlds__intermod__TmpName_9);
    }
#line 152 "intermod.m"
    {
#line 152 "intermod.m"
      mercury__io__open_output_4_p_0(transform_hlds__intermod__TmpName_9, &transform_hlds__intermod__Result_10);
    }
#line 158 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Result_10)) == (MR_mktag((MR_Integer) 1))))
#line 154 "intermod.m"
      {
#line 154 "intermod.m"
        MR_Word transform_hlds__intermod__Err_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Result_10, (MR_Integer) 0)));
#line 154 "intermod.m"
        MR_String transform_hlds__intermod__Msg_12;

#line 155 "intermod.m"
        {
#line 155 "intermod.m"
          transform_hlds__intermod__Msg_12 = mercury__io__error_message_1_f_0(transform_hlds__intermod__Err_11);
        }
#line 156 "intermod.m"
        {
#line 156 "intermod.m"
          mercury__io__write_string_3_p_0(transform_hlds__intermod__Msg_12);
        }
#line 157 "intermod.m"
        {
#line 157 "intermod.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 157 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_25 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24;
#line 154 "intermod.m"
      }
#line 158 "intermod.m"
    else
#line 159 "intermod.m"
      {
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_14_62;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__FileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Result_10, (MR_Integer) 0)));
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__OutputStream_14;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__RealPredIds_15;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__AssertionTable_16;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__AssertPredIds_17;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_18;
#line 159 "intermod.m"
        MR_Integer transform_hlds__intermod__Threshold_19;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__Deforestation_20;
#line 159 "intermod.m"
        MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_21;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_33_33;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_41_41;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_43_43;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__Modules_53;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__Procs_54;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__ProcDecls_55;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__VarTypes_56;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__TVarSet_57;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__ExtraExportedPreds0_73;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_18_74;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__ModuleInfo_80;
#line 159 "intermod.m"
        MR_Word transform_hlds__intermod__TypeTable_81;
#line 2159 "intermod.m"
        MR_Word transform_hlds__intermod__V_90_90;
#line 2159 "intermod.m"
        MR_Word transform_hlds__intermod__V_91_91;
#line 2159 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;
#line 2159 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 2159 "intermod.m"
        MR_Word transform_hlds__intermod__V_94_94;
#line 2159 "intermod.m"
        MR_Word transform_hlds__intermod__V_95_95;
#line 2159 "intermod.m"
        MR_Word transform_hlds__intermod__V_96_96;
#line 2159 "intermod.m"
        MR_Word transform_hlds__intermod__V_97_97;
#line 1033 "intermod.m"
        MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_41_41;
#line 178 "intermod.m"
        MR_Word transform_hlds__intermod__V_23_23;

#line 160 "intermod.m"
        {
#line 160 "intermod.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__intermod__FileStream_13, &transform_hlds__intermod__OutputStream_14);
        }
#line 161 "intermod.m"
        {
#line 161 "intermod.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__intermod__RealPredIds_15, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_33_33);
        }
#line 162 "intermod.m"
        {
#line 162 "intermod.m"
          hlds__hlds_module__module_info_get_assertion_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_33_33, &transform_hlds__intermod__AssertionTable_16);
        }
#line 163 "intermod.m"
        {
#line 163 "intermod.m"
          hlds__hlds_data__assertion_table_pred_ids_2_p_0(transform_hlds__intermod__AssertionTable_16, &transform_hlds__intermod__AssertPredIds_17);
        }
#line 164 "intermod.m"
        {
#line 164 "intermod.m"
          transform_hlds__intermod__PredIds_18 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__AssertPredIds_17, transform_hlds__intermod__RealPredIds_15);
        }
#line 165 "intermod.m"
        {
#line 165 "intermod.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 340, &transform_hlds__intermod__Threshold_19);
        }
#line 167 "intermod.m"
        {
#line 167 "intermod.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 385, &transform_hlds__intermod__Deforestation_20);
        }
#line 168 "intermod.m"
        {
#line 168 "intermod.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 350, &transform_hlds__intermod__HigherOrderSizeLimit_21);
        }
#line 2106 "intermod.m"
        {
#line 2106 "intermod.m"
          mercury__set__init_1_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, &transform_hlds__intermod__Modules_53);
        }
#line 19536 "transform_hlds.intermod.c"
        transform_hlds__intermod__TypeCtorInfo_14_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2107 "intermod.m"
        {
#line 2107 "intermod.m"
          mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_62, &transform_hlds__intermod__Procs_54);
        }
#line 2108 "intermod.m"
        {
#line 2108 "intermod.m"
          mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_62, &transform_hlds__intermod__ProcDecls_55);
        }
#line 2109 "intermod.m"
        {
#line 2109 "intermod.m"
          parse_tree__prog_data__init_vartypes_1_p_0(&transform_hlds__intermod__VarTypes_56);
        }
#line 2110 "intermod.m"
        {
#line 2110 "intermod.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__intermod__TVarSet_57);
        }
#line 2113 "intermod.m"
        {
#line 2113 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2113 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 0) = ((MR_Box) (transform_hlds__intermod__Modules_53));
#line 2113 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 1) = ((MR_Box) (transform_hlds__intermod__Procs_54));
#line 2113 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 2) = ((MR_Box) (transform_hlds__intermod__ProcDecls_55));
#line 2113 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2113 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2113 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 5) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_33_33));
#line 2113 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 6) = ((MR_Box) ((MR_Integer) 0));
#line 2113 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_56));
#line 2113 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_57));
#line 2113 "intermod.m"
        }
#line 196 "intermod.m"
        {
#line 196 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__PredIds_18, (MR_Integer) 0, transform_hlds__intermod__Threshold_19, transform_hlds__intermod__HigherOrderSizeLimit_21, transform_hlds__intermod__Deforestation_20, transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, &transform_hlds__intermod__STATE_VARIABLE_Info_18_74);
        }
#line 200 "intermod.m"
        {
#line 200 "intermod.m"
          mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__intermod__ExtraExportedPreds0_73);
        }
#line 201 "intermod.m"
        {
#line 201 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(transform_hlds__intermod__ExtraExportedPreds0_73, transform_hlds__intermod__Threshold_19, transform_hlds__intermod__HigherOrderSizeLimit_21, transform_hlds__intermod__Deforestation_20, transform_hlds__intermod__STATE_VARIABLE_Info_18_74, &transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39);
        }
#line 174 "intermod.m"
        {
#line 174 "intermod.m"
          transform_hlds__intermod__gather_instances_2_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39, &transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40);
        }
#line 2159 "intermod.m"
        transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 0)));
#line 2159 "intermod.m"
        transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 1)));
#line 2159 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 2)));
#line 2159 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 3)));
#line 2159 "intermod.m"
        transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 4)));
#line 2159 "intermod.m"
        transform_hlds__intermod__ModuleInfo_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 5)));
#line 2159 "intermod.m"
        transform_hlds__intermod__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 6)));
#line 2159 "intermod.m"
        transform_hlds__intermod__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 7)));
#line 2159 "intermod.m"
        transform_hlds__intermod__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 8)));
#line 1032 "intermod.m"
        {
#line 1032 "intermod.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__ModuleInfo_80, &transform_hlds__intermod__TypeTable_81);
        }
#line 1033 "intermod.m"
        {
#line 1033 "intermod.m"
          hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[7], transform_hlds__intermod__TypeTable_81, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40)), &transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_41_41);
        }
#line 1033 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_41_41 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_41_41);
#line 176 "intermod.m"
        {
#line 176 "intermod.m"
          transform_hlds__intermod__write_intermod_info_3_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_41_41);
        }
#line 177 "intermod.m"
        {
#line 177 "intermod.m"
          transform_hlds__intermod__intermod_info_get_module_info_2_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_41_41, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_43_43);
        }
#line 178 "intermod.m"
        {
#line 178 "intermod.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__intermod__OutputStream_14, &transform_hlds__intermod__V_23_23);
        }
#line 179 "intermod.m"
        {
#line 179 "intermod.m"
          mercury__io__close_output_3_p_0(transform_hlds__intermod__FileStream_13);
        }
#line 180 "intermod.m"
        {
#line 180 "intermod.m"
          transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_41_41, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_43_43, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_25);
#line 180 "intermod.m"
          return;
        }
#line 159 "intermod.m"
      }
#line 147 "intermod.m"
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
