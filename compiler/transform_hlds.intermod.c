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
#include "hlds.vartypes.mih"
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
#include "parse_tree.prog_rename.mih"
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



#line 1613 "intermod.m"
struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0_s {
#line 1613 "intermod.m"
  MR_Word transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__TVars_4;
#line 1613 "intermod.m"
  MR_Word * transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__HeadVar__3_9;
#line 1613 "intermod.m"
  MR_Cont transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__cont;
#line 1613 "intermod.m"
  void * transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__cont_env_ptr;
#line 1613 "intermod.m"
  MR_Word transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__TypeInfo_13_13;
#line 1613 "intermod.m"
  MR_Integer transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__N_8;
#line 1614 "intermod.m"
  MR_Box transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__conv0_N_8;
#line 1613 "intermod.m"
};

#line 1613 "intermod.m"
struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s {
#line 1613 "intermod.m"
  MR_Box * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1;
#line 1613 "intermod.m"
  MR_Cont transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont;
#line 1613 "intermod.m"
  void * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr;
#line 1613 "intermod.m"
  MR_Word transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9;
#line 1613 "intermod.m"
};

#line 1613 "intermod.m"
struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s {
#line 1613 "intermod.m"
  MR_Box * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1;
#line 1613 "intermod.m"
  MR_Cont transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont;
#line 1613 "intermod.m"
  void * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr;
#line 1613 "intermod.m"
  MR_Word transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9;
#line 1613 "intermod.m"
};

#line 1252 "intermod.m"
struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s {
#line 1254 "intermod.m"
  MR_bool transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded;
#line 1268 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12;
#line 1274 "intermod.m"
  jmp_buf transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0;
#line 1274 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14;
#line 1274 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15;
#line 1274 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23;
#line 1274 "intermod.m"
  MR_Box transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23;
#line 1252 "intermod.m"
};

#line 643 "intermod.m"
struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s {
#line 646 "intermod.m"
  MR_bool transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded;
#line 646 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9;
#line 646 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11;
#line 676 "intermod.m"
  jmp_buf transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0;
#line 676 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38;
#line 676 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44;
#line 676 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14;
#line 676 "intermod.m"
  MR_Integer transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15;
#line 676 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16;
#line 676 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26;
#line 676 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41;
#line 677 "intermod.m"
  MR_Box transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15;
#line 643 "intermod.m"
};

#line 460 "intermod.m"
struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s {
#line 460 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1;
#line 460 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
#line 463 "intermod.m"
  MR_bool transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
#line 464 "intermod.m"
  jmp_buf transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0;
#line 464 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4;
#line 464 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8;
#line 460 "intermod.m"
};

#line 297 "intermod.m"
struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s {
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10;
#line 302 "intermod.m"
  MR_bool transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded;
#line 313 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20;
#line 442 "intermod.m"
  jmp_buf transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0;
#line 442 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61;
#line 442 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70;
#line 442 "intermod.m"
  MR_Box transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70;
#line 297 "intermod.m"
};


#line 293 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 296 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 299 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0;

#line 302 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0;

#line 305 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

#line 308 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 311 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 314 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 317 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 320 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 323 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 326 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 329 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 332 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 335 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 338 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 341 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 344 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 347 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 350 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 353 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 356 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 359 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 362 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

#line 365 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 368 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 371 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 374 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 377 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 380 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 383 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 386 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 389 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 392 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 395 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 398 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 401 "transform_hlds.intermod.c"
static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0[9];

#line 404 "transform_hlds.intermod.c"
static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0[9];

#line 407 "transform_hlds.intermod.c"
static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0;

#line 410 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1];

#line 413 "transform_hlds.intermod.c"
static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1];

#line 416 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1];

#line 419 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1];

#line 422 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0;

#line 425 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1;

#line 428 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_opt_file_type_0[2];

#line 431 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_opt_file_type_0[2];

#line 434 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_opt_file_type_0[2];

#line 437 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
#line 440 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 442 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 445 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
#line 448 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 450 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 452 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3);

#line 455 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____opt_file_type_0_0_10001(
#line 458 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 460 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 463 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____opt_file_type_0_0_10001(
#line 466 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 468 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 470 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3);

#line 2495 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
#line 2495 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_1,
#line 2495 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_2,
#line 2495 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2495 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4);

#line 1191 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
#line 1191 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1191 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1191 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1191 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1191 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1191 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6);

#line 230 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
#line 230 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 230 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_2,
#line 230 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_4,
#line 230 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_5,
#line 230 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_6,
#line 230 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_7,
#line 230 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_8);

#line 211 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
#line 211 "intermod.m"
  MR_Word transform_hlds__intermod__ExtraExportedPreds0_8,
#line 211 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_10,
#line 211 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_11,
#line 211 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_12,
#line 211 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_19,
#line 211 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_20);

#line 2283 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2283__1_2_p_0(
#line 2283 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_10,
#line 2283 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_11);

#line 2249 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2249__1_4_p_0(
#line 2249 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_4,
#line 2249 "intermod.m"
  MR_Word transform_hlds__intermod__SpecPredMap_8,
#line 2249 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_13,
#line 2249 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_14);

#line 1896 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1896__1_4_p_0(
#line 1896 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1896 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVarMap_15,
#line 1896 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_23,
#line 1896 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_24);

#line 1814 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1814__1_1_p_0(
#line 1814 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_67);

#line 1692 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1692__1_3_p_0(
#line 1692 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__1_45,
#line 1692 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__2_46,
#line 1692 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_47);

#line 1614 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_2(
#line 1614 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_1(
#line 1613 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0(
#line 1613 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1613 "intermod.m"
  MR_Word transform_hlds__intermod__Set_5,
#line 1613 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_9,
#line 1613 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1613 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1326 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1326__1_3_p_0(
#line 1326 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_45);

#line 1001 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1001__1_1_f_0(
#line 1001 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_54);

#line 988 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__988__1_1_f_0(
#line 988 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_50);

#line 843 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__843__1_2_p_0(
#line 843 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_44,
#line 843 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_45);

#line 2075 "intermod.m"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
#line 2075 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__1_1,
#line 2075 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 2075 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3);

#line 2075 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0(
#line 2075 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2075 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 2575 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__read_optimization_interfaces_12_p_0_2(
#line 2575 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2575 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 2563 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__read_optimization_interfaces_12_p_0_1(
#line 2563 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2563 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 2535 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__read_optimization_interfaces_12_p_0(
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_1,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__Transitive_2,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__ModulesProcessed0_4,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__5_5,
#line 2535 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__6_6,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0_7,
#line 2535 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Specs_8,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_9,
#line 2535 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_10);

#line 2511 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__keep_only_unused_and_reuse_pragmas_acc_5_p_0(
#line 2511 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_1,
#line 2511 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_2,
#line 2511 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2511 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4,
#line 2511 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ItemCord_5);

#line 2370 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__import_status_to_write_1_p_0(
#line 2370 "intermod.m"
  MR_Word transform_hlds__intermod__Status_2);

#line 2339 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(
#line 2339 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2339 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0_2,
#line 2339 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Preds_3);

#line 2281 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0_1(
#line 2281 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2281 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2281 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2307 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0(
#line 2307 "intermod.m"
  MR_Word transform_hlds__intermod__Instance0_5,
#line 2307 "intermod.m"
  MR_Word * transform_hlds__intermod__Instance_6,
#line 2307 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20,
#line 2307 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21);

#line 2304 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0_1(
#line 2304 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2304 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2304 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2304 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2304 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2298 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0(
#line 2298 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2298 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2298 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9,
#line 2298 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10);

#line 2281 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0_1(
#line 2281 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2281 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2281 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2263 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0(
#line 2263 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2263 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2263 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10,
#line 2263 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11);

#line 2249 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0_1(
#line 2249 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2249 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2249 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2230 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0(
#line 2230 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_6,
#line 2230 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_7,
#line 2230 "intermod.m"
  MR_Word * transform_hlds__intermod__TypeDefn_8,
#line 2230 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11,
#line 2230 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12);

#line 2293 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3(
#line 2293 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2293 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2293 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2293 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2293 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2259 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2(
#line 2259 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2259 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2259 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2259 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2259 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2226 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1(
#line 2226 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2226 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2226 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2226 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3,
#line 2226 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_4,
#line 2226 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_5);

#line 2211 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(
#line 2211 "intermod.m"
  MR_Word transform_hlds__intermod__Info_4,
#line 2211 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8,
#line 2211 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9);

#line 2153 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(
#line 2153 "intermod.m"
  MR_Word transform_hlds__intermod__TVarSet_4,
#line 2153 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2153 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2149 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_write_header_2_p_0(
#line 2149 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2149 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2147 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_module_info_3_p_0(
#line 2147 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_4,
#line 2147 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2147 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2143 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
#line 2143 "intermod.m"
  MR_Word transform_hlds__intermod__Types_4,
#line 2143 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2143 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2136 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_preds_3_p_0(
#line 2136 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_4,
#line 2136 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2136 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2127 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_module_info_2_p_0(
#line 2127 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2127 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2120 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_preds_2_p_0(
#line 2120 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2120 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2038 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
#line 2038 "intermod.m"
  MR_Word transform_hlds__intermod__Args_6,
#line 2038 "intermod.m"
  MR_Word transform_hlds__intermod__Modes_7,
#line 2038 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26,
#line 2038 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_VarSet_27,
#line 2038 "intermod.m"
  MR_Word * transform_hlds__intermod__PragmaVars_9);

#line 1969 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(
#line 1969 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_1,
#line 1969 "intermod.m"
  MR_Integer transform_hlds__intermod__Arity_2,
#line 1969 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1969 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_4);

#line 1908 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
#line 1908 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 1908 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_2,
#line 1908 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1908 "intermod.m"
  MR_Word * transform_hlds__intermod__Goals_4,
#line 1908 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5,
#line 1908 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6);

#line 1892 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
#line 1892 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1892 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1892 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 1880 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
#line 1880 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_5,
#line 1880 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1880 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadTerms_7,
#line 1880 "intermod.m"
  MR_Word * transform_hlds__intermod__Clause_8);

#line 1843 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_11,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_12,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__PragmaImpl_13,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__Attributes_14,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__Args_15,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__ProgVarset0_16,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_17,
#line 1843 "intermod.m"
  MR_Integer transform_hlds__intermod__ProcId_18);

#line 1834 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
#line 1834 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1834 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1834 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1834 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1814 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
#line 1814 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1814 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 1788 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_12,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_13,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_14,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__VarSet_15,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_16,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_17,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_18,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__MaybeVarTypes_19,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_20);

#line 1782 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0_1(
#line 1782 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1782 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1782 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1782 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1737 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0(
#line 1737 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_1,
#line 1737 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_2,
#line 1737 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3);

#line 1705 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_modes_6_p_0(
#line 1705 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_1,
#line 1705 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_2,
#line 1705 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_3,
#line 1705 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4);

#line 1994 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_2(
#line 1994 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1994 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1994 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1994 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1692 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1(
#line 1692 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1692 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1692 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1692 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1640 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0(
#line 1640 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1640 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1624 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_4_p_0(
#line 1624 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1624 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0_1(
#line 1622 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1622 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1622 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1622 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1618 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0(
#line 1618 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1618 "intermod.m"
  MR_Word transform_hlds__intermod__Instances_6);

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3(
#line 1613 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4(
#line 1613 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1613 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1613 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1613 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
#line 1613 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2(
#line 1613 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1613 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1613 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1613 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1602 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
#line 1602 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1602 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1592 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0_1(
#line 1592 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1592 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 1580 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0(
#line 1580 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1580 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1580 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_9,
#line 1580 "intermod.m"
  MR_Word transform_hlds__intermod__ClassDefn_10);

#line 1578 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0_1(
#line 1578 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1578 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1578 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1578 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1578 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1572 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0(
#line 1572 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1572 "intermod.m"
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

#line 1536 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0(
#line 1536 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1536 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1516 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_6_p_0(
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__ModeId_9,
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__ModeDefn_10);

#line 1514 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0_1(
#line 1514 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1514 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1514 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1514 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1514 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1507 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0(
#line 1507 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1507 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1490 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(
#line 1490 "intermod.m"
  MR_Word transform_hlds__intermod__ConsId_5,
#line 1490 "intermod.m"
  MR_Word transform_hlds__intermod__ConsTag_6,
#line 1490 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Values_0_14,
#line 1490 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Values_15);

#line 1476 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0_1(
#line 1476 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1476 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1351 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0(
#line 1351 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1351 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1338 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_use_module_3_p_0(
#line 1338 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_4);

#line 1326 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_3(
#line 1326 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1326 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1326 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1326 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1349 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_2(
#line 1349 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1349 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1349 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1349 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1300 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_1(
#line 1300 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1300 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1300 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1300 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1286 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0(
#line 1286 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4);

#line 1274 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_1(
#line 1274 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1274 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_3(
#line 1274 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1274 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_2(
#line 1274 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1274 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_4(
#line 1274 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1252 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0(
#line 1252 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4);

#line 1220 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
#line 1220 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1220 "intermod.m"
  MR_Word transform_hlds__intermod__SpecialId_2,
#line 1220 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_3,
#line 1220 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 1220 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__5_5,
#line 1220 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1220 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7);

#line 1203 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
#line 1203 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1203 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1203 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1203 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1203 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1203 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6);

#line 1109 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
#line 1109 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_7,
#line 1109 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_8,
#line 1109 "intermod.m"
  MR_Word transform_hlds__intermod__ForeignTypeBody0_9,
#line 1109 "intermod.m"
  MR_Word * transform_hlds__intermod__ForeignTypeBody_10,
#line 1109 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 1109 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25);

#line 1042 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_4_p_0(
#line 1042 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_5,
#line 1042 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_6,
#line 1042 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_33,
#line 1042 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_34);

#line 1040 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0_1(
#line 1040 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1040 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1040 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1040 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1040 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1035 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0(
#line 1035 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1035 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7);

#line 999 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
#line 999 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 999 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 986 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
#line 986 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 986 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 971 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_11,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceMethodName0_12,
#line 971 "intermod.m"
  MR_Integer transform_hlds__intermod__MethodArity_13,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallTVarSet_14,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallExistQTVars_15,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallArgTypes_16,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_17,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__MethodContext_18,
#line 971 "intermod.m"
  MR_Word * transform_hlds__intermod__MaybePredId_19,
#line 971 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethodName_20);

#line 903 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
#line 903 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 903 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 903 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethod_9,
#line 903 "intermod.m"
  MR_Word transform_hlds__intermod__PredIds0_10,
#line 903 "intermod.m"
  MR_Word * transform_hlds__intermod__PredIds_11);

#line 858 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_3(
#line 858 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 858 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 858 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 858 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 858 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 856 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_2(
#line 856 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 856 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 856 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 856 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 856 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 841 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_1(
#line 841 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 841 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 841 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 821 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0(
#line 821 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 821 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 821 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefn_8,
#line 821 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_39,
#line 821 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_40);

#line 819 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0_1(
#line 819 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 819 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 819 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 819 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 814 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0(
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefns_8,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_10,
#line 814 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_11);

#line 767 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(
#line 767 "intermod.m"
  MR_Word transform_hlds__intermod__RHS0_6,
#line 767 "intermod.m"
  MR_Word * transform_hlds__intermod__RHS_7,
#line 767 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 767 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_28,
#line 767 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_29);

#line 676 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_1(
#line 676 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 677 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_3(
#line 677 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 676 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_2(
#line 676 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 676 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_4(
#line 676 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 643 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0(
#line 643 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 643 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 643 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 643 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25);

#line 630 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_4_p_0(
#line 630 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 630 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 630 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_8,
#line 630 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_9);

#line 603 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_cases_5_p_0(
#line 603 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 603 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 603 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 603 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 603 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 588 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(
#line 588 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 588 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 588 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 588 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 588 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 487 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(
#line 487 "intermod.m"
  MR_Word transform_hlds__intermod__GoalExpr0_6,
#line 487 "intermod.m"
  MR_Word * transform_hlds__intermod__GoalExpr_7,
#line 487 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 487 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_81,
#line 487 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_82);

#line 479 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_5_p_0(
#line 479 "intermod.m"
  MR_Word transform_hlds__intermod__Goal0_6,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__Goal_7,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 479 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_13,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_14);

#line 464 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
#line 464 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 464 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
#line 464 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 464 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
#line 464 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 460 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
#line 460 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 460 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 422 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__check_for_ho_input_args_4_p_0(
#line 422 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_5,
#line 422 "intermod.m"
  MR_Word transform_hlds__intermod__VarTypes_6,
#line 422 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 422 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4);

#line 396 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_clauses_5_p_0(
#line 396 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 396 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 396 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 396 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 396 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 385 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(
#line 385 "intermod.m"
  MR_Word transform_hlds__intermod__Target_1,
#line 385 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 442 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_1(
#line 442 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 442 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_3(
#line 442 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 442 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_2(
#line 442 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 442 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_4(
#line 442 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 297 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0(
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_9,
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_10,
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__PredInfo_11,
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__TypeSpecForcePreds_12,
#line 297 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_13,
#line 297 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_14,
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_15,
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_16);

#line 812 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_pred_import_status_2_p_0_1(
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 812 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2477 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_10(
#line 2477 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2477 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2477 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2477 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 2476 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_9(
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2476 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_8(
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2471 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_7(
#line 2471 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2471 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2471 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2471 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 2470 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_6(
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2470 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_5(
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2453 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_4(
#line 2453 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2453 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2453 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2453 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 2452 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_3(
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2452 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_2(
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2449 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_1(
#line 2449 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2449 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 812 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_opt_file_4_p_0_1(
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 812 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);


static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[26][2];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[36][3];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[5][8];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[7][5];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[7][6];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[10][7];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[2][1];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[3][9];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][14];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[1][4];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_11[1][13];




static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[26][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_opt_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[4]))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[2]))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__intermod_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[36][3] = {
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
    ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_type_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[6])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[6])),
    ((MR_Box) (transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[7])),
    ((MR_Box) (transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__intermod__adjust_class_status_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[9])),
    ((MR_Box) (transform_hlds__intermod__adjust_instance_status_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__intermod__adjust_instance_status_3_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[5])),
    ((MR_Box) (transform_hlds__intermod__read_optimization_interfaces_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[6])),
    ((MR_Box) (transform_hlds__intermod__read_optimization_interfaces_12_p_0_2)),
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

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[7][6] = {
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
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
    ((MR_Box) (&hlds__vartypes__hlds__vartypes__type_ctor_info_maybe_vartypes_0)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2763 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2771 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2779 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_int_for_opt_module_section_0
  }
};

#line 2787 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0
  }
};

#line 2795 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

#line 2804 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2812 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 2821 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2830 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  }
};

#line 2838 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2846 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2854 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2862 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2870 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2879 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2887 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2895 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2903 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2912 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 2920 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2928 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2937 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2945 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2953 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 2962 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2970 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2979 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 2988 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2997 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3005 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 3013 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 3022 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 3030 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 3039 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 3047 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 3056 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 3064 "transform_hlds.intermod.c"
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

#line 3077 "transform_hlds.intermod.c"
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

#line 3090 "transform_hlds.intermod.c"
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

#line 3105 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

#line 3110 "transform_hlds.intermod.c"
static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0
  }
};

#line 3119 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

#line 3124 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1] = {
  (MR_Integer) 0
};

#line 3129 "transform_hlds.intermod.c"
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

#line 3146 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0 = {
  (MR_String) "opt_file",
  (MR_Integer) 0
};

#line 3152 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1 = {
  (MR_String) "trans_opt_file",
  (MR_Integer) 1
};

#line 3158 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_opt_file_type_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1
};

#line 3164 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_opt_file_type_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1
};

#line 3170 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_opt_file_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3176 "transform_hlds.intermod.c"
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

#line 3193 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
#line 3196 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 3198 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 3200 "transform_hlds.intermod.c"
{
#line 3202 "transform_hlds.intermod.c"
  {
#line 3204 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded;

#line 3207 "transform_hlds.intermod.c"
    {
#line 3209 "transform_hlds.intermod.c"
      transform_hlds__intermod__succeeded = transform_hlds__intermod____Unify____intermod_info_0_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 3212 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 3214 "transform_hlds.intermod.c"
  }
#line 3216 "transform_hlds.intermod.c"
}

#line 3219 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
#line 3222 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 3224 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 3226 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3)
#line 3228 "transform_hlds.intermod.c"
{
#line 3230 "transform_hlds.intermod.c"
  {
#line 3232 "transform_hlds.intermod.c"
    MR_Word transform_hlds__intermod__conv0_HeadVar__1_1;

#line 3235 "transform_hlds.intermod.c"
    {
#line 3237 "transform_hlds.intermod.c"
      transform_hlds__intermod____Compare____intermod_info_0_0(&transform_hlds__intermod__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3));
    }
#line 3240 "transform_hlds.intermod.c"
    *transform_hlds__intermod__wrapper_arg_1 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__1_1));
#line 3242 "transform_hlds.intermod.c"
  }
#line 3244 "transform_hlds.intermod.c"
}

#line 3247 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____opt_file_type_0_0_10001(
#line 3250 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 3252 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 3254 "transform_hlds.intermod.c"
{
#line 3256 "transform_hlds.intermod.c"
  {
#line 3258 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded;

#line 3261 "transform_hlds.intermod.c"
    {
#line 3263 "transform_hlds.intermod.c"
      transform_hlds__intermod__succeeded = transform_hlds__intermod____Unify____opt_file_type_0_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 3266 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 3268 "transform_hlds.intermod.c"
  }
#line 3270 "transform_hlds.intermod.c"
}

#line 3273 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____opt_file_type_0_0_10001(
#line 3276 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 3278 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 3280 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3)
#line 3282 "transform_hlds.intermod.c"
{
#line 3284 "transform_hlds.intermod.c"
  {
#line 3286 "transform_hlds.intermod.c"
    MR_Word transform_hlds__intermod__conv0_HeadVar__1_1;

#line 3289 "transform_hlds.intermod.c"
    {
#line 3291 "transform_hlds.intermod.c"
      transform_hlds__intermod____Compare____opt_file_type_0_0(&transform_hlds__intermod__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3));
    }
#line 3294 "transform_hlds.intermod.c"
    *transform_hlds__intermod__wrapper_arg_1 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__1_1));
#line 3296 "transform_hlds.intermod.c"
  }
#line 3298 "transform_hlds.intermod.c"
}

#line 2495 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
#line 2495 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_1,
#line 2495 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_2,
#line 2495 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2495 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4)
#line 2495 "intermod.m"
{
#line 2498 "intermod.m"
  {
#line 2498 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2498 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2498 "intermod.m"
      *transform_hlds__intermod__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2498 "intermod.m"
    else
#line 2500 "intermod.m"
      {
#line 2500 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 2500 "intermod.m"
        MR_Word transform_hlds__intermod__ItemBlock0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 2500 "intermod.m"
        MR_Word transform_hlds__intermod__ItemBlocks0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 2500 "intermod.m"
        MR_Word transform_hlds__intermod__ItemBlock_11;
#line 2500 "intermod.m"
        MR_Word transform_hlds__intermod__ItemBlocks_12;
#line 2500 "intermod.m"
        MR_Box transform_hlds__intermod__Section_13 = (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock0_9, (MR_Integer) 0));
#line 2500 "intermod.m"
        MR_Word transform_hlds__intermod__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock0_9, (MR_Integer) 1)));
#line 2500 "intermod.m"
        MR_Word transform_hlds__intermod__Items0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock0_9, (MR_Integer) 4)));
#line 2500 "intermod.m"
        MR_Word transform_hlds__intermod__ItemCord_20;
#line 2500 "intermod.m"
        MR_Word transform_hlds__intermod__Items_21;
#line 2500 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;
#line 2501 "intermod.m"
        MR_Word transform_hlds__intermod___Incls0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock0_9, (MR_Integer) 2)));
#line 2501 "intermod.m"
        MR_Word transform_hlds__intermod___Imports0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock0_9, (MR_Integer) 3)));

#line 2505 "intermod.m"
        {
#line 2505 "intermod.m"
          transform_hlds__intermod__V_22_22 = mercury__cord__init_0_f_0(transform_hlds__intermod__TypeCtorInfo_24_24);
        }
#line 2504 "intermod.m"
        {
#line 2504 "intermod.m"
          transform_hlds__intermod__keep_only_unused_and_reuse_pragmas_acc_5_p_0(transform_hlds__intermod__UnusedArgs_1, transform_hlds__intermod__StructureReuse_2, transform_hlds__intermod__Items0_17, transform_hlds__intermod__V_22_22, &transform_hlds__intermod__ItemCord_20);
        }
#line 2506 "intermod.m"
        {
#line 2506 "intermod.m"
          transform_hlds__intermod__Items_21 = mercury__cord__list_1_f_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__ItemCord_20);
        }
#line 2507 "intermod.m"
        {
#line 2507 "intermod.m"
          transform_hlds__intermod__ItemBlock_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2507 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock_11, 0) = transform_hlds__intermod__Section_13;
#line 2507 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock_11, 1) = ((MR_Box) (transform_hlds__intermod__Context_14));
#line 2507 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2507 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock_11, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2507 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock_11, 4) = ((MR_Box) (transform_hlds__intermod__Items_21));
#line 2507 "intermod.m"
        }
#line 2508 "intermod.m"
        {
#line 2508 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(transform_hlds__intermod__UnusedArgs_1, transform_hlds__intermod__StructureReuse_2, transform_hlds__intermod__ItemBlocks0_10, &transform_hlds__intermod__ItemBlocks_12);
        }
#line 2500 "intermod.m"
        {
#line 2500 "intermod.m"
          MR_Word base;
#line 2500 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2500 "intermod.m"
          *transform_hlds__intermod__HeadVar__4_4 = base;
#line 2500 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__ItemBlock_11));
#line 2500 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__ItemBlocks_12));
#line 2500 "intermod.m"
        }
#line 2500 "intermod.m"
      }
#line 2498 "intermod.m"
  }
#line 2495 "intermod.m"
}

#line 1191 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
#line 1191 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1191 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1191 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1191 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1191 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1191 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6)
#line 1191 "intermod.m"
{
#line 1195 "intermod.m"
  {
#line 1195 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1195 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "intermod.m"
      {
#line 1195 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1195 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1195 "intermod.m"
      }
#line 1195 "intermod.m"
    else
#line 1199 "intermod.m"
      {
#line 1199 "intermod.m"
        MR_Box transform_hlds__intermod__Body_14;
#line 1199 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1199 "intermod.m"
        MR_Word transform_hlds__intermod__Assertions_16;
#line 1199 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeUserEqComp_17;
#line 1199 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1199 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;

#line 1197 "intermod.m"
        transform_hlds__intermod__Body_14 = (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 0));
#line 1197 "intermod.m"
        transform_hlds__intermod__MaybeUserEqComp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 1)));
#line 1197 "intermod.m"
        transform_hlds__intermod__Assertions_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 2)));
#line 1207 "intermod.m"
        if ((transform_hlds__intermod__MaybeUserEqComp0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1207 "intermod.m"
          {
#line 1207 "intermod.m"
            transform_hlds__intermod__MaybeUserEqComp_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1207 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1207 "intermod.m"
          }
#line 1207 "intermod.m"
        else
#line 1207 "intermod.m"
          {
#line 1207 "intermod.m"
            MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEqComp0_15, (MR_Integer) 0)));

#line 1207 "intermod.m"
            if (((MR_tag((MR_Word) transform_hlds__intermod__V_53_53)) == (MR_mktag((MR_Integer) 1))))
#line 1208 "intermod.m"
              {
#line 1210 "intermod.m"
                transform_hlds__intermod__MaybeUserEqComp_17 = transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1210 "intermod.m"
                *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1208 "intermod.m"
              }
#line 1207 "intermod.m"
            else
#line 1213 "intermod.m"
              {
#line 1213 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserEq0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_53_53, (MR_Integer) 0)));
#line 1213 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserCompare0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_53_53, (MR_Integer) 1)));
#line 1213 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserEq_42;
#line 1213 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserCompare_43;
#line 1213 "intermod.m"
                MR_Word transform_hlds__intermod__V_48_48;
#line 1213 "intermod.m"
                MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_32_50;

#line 1224 "intermod.m"
                if ((transform_hlds__intermod__MaybeUserEq0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1224 "intermod.m"
                  {
#line 1224 "intermod.m"
                    transform_hlds__intermod__MaybeUserEq_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1224 "intermod.m"
                    transform_hlds__intermod__STATE_VARIABLE_Info_32_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1224 "intermod.m"
                  }
#line 1224 "intermod.m"
                else
#line 1226 "intermod.m"
                  {
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__Pred0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq0_40, (MR_Integer) 0)));
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__Pred_64;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__SpecialPreds_66;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__UnifyPredId_67;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__UnifyPredInfo_68;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__TVarSet_69;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__ExistQVars_70;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__ArgTypes_71;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__HeadTypeParams_72;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__Markers0_73;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__Markers_74;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__Context_75;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__UserEqPredId_76;
#line 1226 "intermod.m"
                    MR_Word transform_hlds__intermod__V_80_80;
#line 1228 "intermod.m"
                    MR_Box transform_hlds__intermod__conv0_UnifyPredId_67;
#line 634 "intermod.m"
                    MR_Word transform_hlds__intermod__V_91_91;

#line 1227 "intermod.m"
                    {
#line 1227 "intermod.m"
                      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_66);
                    }
#line 1228 "intermod.m"
                    {
#line 1228 "intermod.m"
                      transform_hlds__intermod__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "intermod.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1228 "intermod.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_2));
#line 1228 "intermod.m"
                    }
#line 1228 "intermod.m"
                    {
#line 1228 "intermod.m"
                      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_66, ((MR_Box) (transform_hlds__intermod__V_80_80)), &transform_hlds__intermod__conv0_UnifyPredId_67);
                    }
#line 1228 "intermod.m"
                    transform_hlds__intermod__UnifyPredId_67 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_67);
#line 1229 "intermod.m"
                    {
#line 1229 "intermod.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_67, &transform_hlds__intermod__UnifyPredInfo_68);
                    }
#line 1230 "intermod.m"
                    {
#line 1230 "intermod.m"
                      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__TVarSet_69, &transform_hlds__intermod__ExistQVars_70, &transform_hlds__intermod__ArgTypes_71);
                    }
#line 1231 "intermod.m"
                    {
#line 1231 "intermod.m"
                      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__HeadTypeParams_72);
                    }
#line 1232 "intermod.m"
                    {
#line 1232 "intermod.m"
                      hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_73);
                    }
#line 1233 "intermod.m"
                    {
#line 1233 "intermod.m"
                      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_73, &transform_hlds__intermod__Markers_74);
                    }
#line 1234 "intermod.m"
                    {
#line 1234 "intermod.m"
                      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__Context_75);
                    }
#line 1235 "intermod.m"
                    {
#line 1235 "intermod.m"
                      hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_74, transform_hlds__intermod__TVarSet_69, transform_hlds__intermod__ExistQVars_70, transform_hlds__intermod__ArgTypes_71, transform_hlds__intermod__HeadTypeParams_72, transform_hlds__intermod__Context_75, transform_hlds__intermod__Pred0_63, &transform_hlds__intermod__Pred_64, &transform_hlds__intermod__UserEqPredId_76);
                    }
#line 1226 "intermod.m"
                    {
#line 1226 "intermod.m"
                      transform_hlds__intermod__MaybeUserEq_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq_42, 0) = ((MR_Box) (transform_hlds__intermod__Pred_64));
#line 1226 "intermod.m"
                    }
#line 634 "intermod.m"
                    {
#line 634 "intermod.m"
                      transform_hlds__intermod__V_91_91 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                    }
#line 634 "intermod.m"
                    {
#line 634 "intermod.m"
                      transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_76, transform_hlds__intermod__V_91_91);
                    }
#line 639 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 638 "intermod.m"
                      transform_hlds__intermod__STATE_VARIABLE_Info_32_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 639 "intermod.m"
                    else
#line 640 "intermod.m"
                      {
#line 640 "intermod.m"
                        MR_Word transform_hlds__intermod__V_93_93;

#line 640 "intermod.m"
                        {
#line 640 "intermod.m"
                          transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_76, &transform_hlds__intermod__V_93_93, transform_hlds__intermod__STATE_VARIABLE_Info_0_5, &transform_hlds__intermod__STATE_VARIABLE_Info_32_50);
                        }
#line 640 "intermod.m"
                      }
#line 1226 "intermod.m"
                  }
#line 1216 "intermod.m"
                {
#line 1216 "intermod.m"
                  transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(transform_hlds__intermod__ModuleInfo_1, (MR_Integer) 2, transform_hlds__intermod__TypeCtor_2, transform_hlds__intermod__MaybeUserCompare0_41, &transform_hlds__intermod__MaybeUserCompare_43, transform_hlds__intermod__STATE_VARIABLE_Info_32_50, transform_hlds__intermod__STATE_VARIABLE_Info_6);
                }
#line 1213 "intermod.m"
                {
#line 1213 "intermod.m"
                  transform_hlds__intermod__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (transform_hlds__intermod__MaybeUserEq_42));
#line 1213 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_48_48, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserCompare_43));
#line 1213 "intermod.m"
                }
#line 1213 "intermod.m"
                {
#line 1213 "intermod.m"
                  transform_hlds__intermod__MaybeUserEqComp_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEqComp_17, 0) = ((MR_Box) (transform_hlds__intermod__V_48_48));
#line 1213 "intermod.m"
                }
#line 1213 "intermod.m"
              }
#line 1207 "intermod.m"
          }
#line 1198 "intermod.m"
        {
#line 1198 "intermod.m"
          transform_hlds__intermod__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1198 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 0) = transform_hlds__intermod__Body_14;
#line 1198 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_17));
#line 1198 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 2) = ((MR_Box) (transform_hlds__intermod__Assertions_16));
#line 1198 "intermod.m"
        }
#line 1198 "intermod.m"
        {
#line 1198 "intermod.m"
          MR_Word base;
#line 1198 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "intermod.m"
          *transform_hlds__intermod__HeadVar__4_4 = base;
#line 1198 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_22_22));
#line 1198 "intermod.m"
        }
#line 1199 "intermod.m"
      }
#line 1195 "intermod.m"
  }
#line 1191 "intermod.m"
}

#line 230 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
#line 230 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 230 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_2,
#line 230 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_4,
#line 230 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_5,
#line 230 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_6,
#line 230 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_7,
#line 230 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_8)
#line 230 "intermod.m"
{
#line 233 "intermod.m"
  while (MR_TRUE)
#line 233 "intermod.m"
    {
#line 233 "intermod.m"
      /* tailcall optimized into a loop */
#line 233 "intermod.m"
      {
#line 233 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 233 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 233 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_8 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 233 "intermod.m"
        else
#line 235 "intermod.m"
          {
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_62_62;
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_63_63;
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__ModuleInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__PredTable0_26;
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo0_27;
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecInfo_28;
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecForcePreds_30;
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesInfo0_33;
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_60_60;
#line 2161 "intermod.m"
            MR_Word transform_hlds__intermod__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
#line 2161 "intermod.m"
            MR_Word transform_hlds__intermod__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 2161 "intermod.m"
            MR_Word transform_hlds__intermod__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 2161 "intermod.m"
            MR_Word transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 2161 "intermod.m"
            MR_Word transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 2161 "intermod.m"
            MR_Word transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 2161 "intermod.m"
            MR_Word transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 2161 "intermod.m"
            MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
#line 238 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_PredInfo0_27;
#line 240 "intermod.m"
            MR_Word transform_hlds__intermod__V_29_29;
#line 240 "intermod.m"
            MR_Word transform_hlds__intermod__V_31_31;
#line 240 "intermod.m"
            MR_Word transform_hlds__intermod__V_32_32;
#line 243 "intermod.m"
            MR_Word transform_hlds__intermod__ExplicitVarTypes_34;

#line 237 "intermod.m"
            {
#line 237 "intermod.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__PredTable0_26);
            }
#line 3802 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3804 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 238 "intermod.m"
            {
#line 238 "intermod.m"
              mercury__map__lookup_3_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, transform_hlds__intermod__TypeCtorInfo_63_63, transform_hlds__intermod__PredTable0_26, ((MR_Box) (transform_hlds__intermod__PredId_17)), &transform_hlds__intermod__conv0_PredInfo0_27);
            }
#line 238 "intermod.m"
            transform_hlds__intermod__PredInfo0_27 = ((MR_Word) transform_hlds__intermod__conv0_PredInfo0_27);
#line 239 "intermod.m"
            {
#line 239 "intermod.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__TypeSpecInfo_28);
            }
#line 240 "intermod.m"
            transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 0)));
#line 240 "intermod.m"
            transform_hlds__intermod__TypeSpecForcePreds_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 1)));
#line 240 "intermod.m"
            transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 2)));
#line 240 "intermod.m"
            transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 3)));
#line 241 "intermod.m"
            {
#line 241 "intermod.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__ClausesInfo0_33);
            }
#line 243 "intermod.m"
            {
#line 243 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ExplicitVarTypes_34);
            }
#line 244 "intermod.m"
            {
#line 244 "intermod.m"
              transform_hlds__intermod__succeeded = hlds__vartypes__vartypes_is_empty_1_p_0(transform_hlds__intermod__ExplicitVarTypes_34);
            }
#line 243 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 245 "intermod.m"
              {
#line 245 "intermod.m"
                transform_hlds__intermod__succeeded = transform_hlds__intermod__should_be_processed_8_p_0(transform_hlds__intermod__ProcessLocalPreds_2, transform_hlds__intermod__PredId_17, transform_hlds__intermod__PredInfo0_27, transform_hlds__intermod__TypeSpecForcePreds_30, transform_hlds__intermod__InlineThreshold_4, transform_hlds__intermod__HigherOrderSizeLimit_5, transform_hlds__intermod__Deforestation_6, transform_hlds__intermod__ModuleInfo0_25);
              }
#line 291 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 249 "intermod.m"
              {
#line 249 "intermod.m"
                MR_Word transform_hlds__intermod__ClausesRep0_37;
#line 249 "intermod.m"
                MR_Word transform_hlds__intermod__ItemNumbers0_38;
#line 634 "intermod.m"
                MR_Word transform_hlds__intermod__V_79_79;

#line 253 "intermod.m"
                {
#line 253 "intermod.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ClausesRep0_37, &transform_hlds__intermod__ItemNumbers0_38);
                }
#line 634 "intermod.m"
                {
#line 634 "intermod.m"
                  transform_hlds__intermod__V_79_79 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 634 "intermod.m"
                {
#line 634 "intermod.m"
                  transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_17, transform_hlds__intermod__V_79_79);
                }
#line 3874 "transform_hlds.intermod.c"
                if (transform_hlds__intermod__succeeded)
#line 289 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 3878 "transform_hlds.intermod.c"
                else
#line 3880 "transform_hlds.intermod.c"
                  {
#line 3882 "transform_hlds.intermod.c"
                    MR_Word transform_hlds__intermod__DoWrite0_92;
#line 3884 "transform_hlds.intermod.c"
                    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_53_93;

#line 640 "intermod.m"
                    {
#line 640 "intermod.m"
                      transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_17, &transform_hlds__intermod__DoWrite0_92, transform_hlds__intermod__STATE_VARIABLE_Info_0_7, &transform_hlds__intermod__STATE_VARIABLE_Info_53_93);
                    }
#line 3892 "transform_hlds.intermod.c"
#line 3893 "transform_hlds.intermod.c"
                    switch (transform_hlds__intermod__DoWrite0_92) {
#line 3895 "transform_hlds.intermod.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 3897 "transform_hlds.intermod.c"
                      case (MR_Integer) 0:
#line 289 "intermod.m"
                        transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 3901 "transform_hlds.intermod.c"
                        break;
#line 3903 "transform_hlds.intermod.c"
                      case (MR_Integer) 1:
#line 3905 "transform_hlds.intermod.c"
                        {
#line 3907 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__VarTypes_39;
#line 3909 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__TVarSet_40;
#line 3911 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__Clauses0_41;
#line 3913 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__Clauses_42;
#line 3915 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_54_54;
#line 3917 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_55_55;
#line 3919 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__DoWrite_97;
#line 3921 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__ClausesRep_98;
#line 3923 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_56_99;
#line 2175 "intermod.m"
                          MR_Word transform_hlds__intermod__V_83_83;
#line 2175 "intermod.m"
                          MR_Word transform_hlds__intermod__V_84_84;
#line 2175 "intermod.m"
                          MR_Word transform_hlds__intermod__V_85_85;
#line 2175 "intermod.m"
                          MR_Word transform_hlds__intermod__V_86_86;
#line 2175 "intermod.m"
                          MR_Word transform_hlds__intermod__V_87_87;
#line 2175 "intermod.m"
                          MR_Word transform_hlds__intermod__V_88_88;
#line 2175 "intermod.m"
                          MR_Word transform_hlds__intermod__V_89_89;
#line 2175 "intermod.m"
                          MR_Word transform_hlds__intermod__V_91_91;
#line 2175 "intermod.m"
                          MR_Word transform_hlds__intermod__V_90_90;

#line 256 "intermod.m"
                          {
#line 256 "intermod.m"
                            hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__VarTypes_39);
                          }
#line 257 "intermod.m"
                          {
#line 257 "intermod.m"
                            hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__TVarSet_40);
                          }
#line 2175 "intermod.m"
                          transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 0)));
#line 2175 "intermod.m"
                          transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 1)));
#line 2175 "intermod.m"
                          transform_hlds__intermod__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 2)));
#line 2175 "intermod.m"
                          transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 3)));
#line 2175 "intermod.m"
                          transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 4)));
#line 2175 "intermod.m"
                          transform_hlds__intermod__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 5)));
#line 2175 "intermod.m"
                          transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 6)));
#line 2175 "intermod.m"
                          transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 7)));
#line 2175 "intermod.m"
                          transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 8)));
#line 2175 "intermod.m"
                          {
#line 2175 "intermod.m"
                            transform_hlds__intermod__STATE_VARIABLE_Info_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2175 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 0) = ((MR_Box) (transform_hlds__intermod__V_83_83));
#line 2175 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 1) = ((MR_Box) (transform_hlds__intermod__V_84_84));
#line 2175 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 2) = ((MR_Box) (transform_hlds__intermod__V_85_85));
#line 2175 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 3) = ((MR_Box) (transform_hlds__intermod__V_86_86));
#line 2175 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 4) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2175 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 5) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2175 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 6) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2175 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_39));
#line 2175 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 8) = ((MR_Box) (transform_hlds__intermod__V_91_91));
#line 2175 "intermod.m"
                          }
#line 259 "intermod.m"
                          {
#line 259 "intermod.m"
                            transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(transform_hlds__intermod__TVarSet_40, transform_hlds__intermod__STATE_VARIABLE_Info_54_54, &transform_hlds__intermod__STATE_VARIABLE_Info_55_55);
                          }
#line 260 "intermod.m"
                          {
#line 260 "intermod.m"
                            hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep0_37, &transform_hlds__intermod__Clauses0_41);
                          }
#line 261 "intermod.m"
                          {
#line 261 "intermod.m"
                            transform_hlds__intermod__intermod_traverse_clauses_5_p_0(transform_hlds__intermod__Clauses0_41, &transform_hlds__intermod__Clauses_42, &transform_hlds__intermod__DoWrite_97, transform_hlds__intermod__STATE_VARIABLE_Info_55_55, &transform_hlds__intermod__STATE_VARIABLE_Info_56_99);
                          }
#line 262 "intermod.m"
                          {
#line 262 "intermod.m"
                            hlds__hlds_clauses__set_clause_list_2_p_0(transform_hlds__intermod__Clauses_42, &transform_hlds__intermod__ClausesRep_98);
                          }
#line 286 "intermod.m"
#line 286 "intermod.m"
                          switch (transform_hlds__intermod__DoWrite_97) {
#line 286 "intermod.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 286 "intermod.m"
                            case (MR_Integer) 0:
#line 289 "intermod.m"
                              transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 286 "intermod.m"
                              break;
#line 286 "intermod.m"
                            case (MR_Integer) 1:
#line 269 "intermod.m"
                              {
#line 269 "intermod.m"
                                MR_Word transform_hlds__intermod__ClausesInfo_45;
#line 269 "intermod.m"
                                MR_Word transform_hlds__intermod__PredInfo_46;
#line 269 "intermod.m"
                                MR_Word transform_hlds__intermod__PredTable_47;
#line 269 "intermod.m"
                                MR_Word transform_hlds__intermod__ModuleInfo_48;
#line 269 "intermod.m"
                                MR_Word transform_hlds__intermod__Preds0_49;
#line 269 "intermod.m"
                                MR_Word transform_hlds__intermod__Preds_50;
#line 269 "intermod.m"
                                MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_58_58;
#line 269 "intermod.m"
                                MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_59_59;

#line 270 "intermod.m"
                                {
#line 270 "intermod.m"
                                  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(transform_hlds__intermod__ClausesRep_98, transform_hlds__intermod__ItemNumbers0_38, transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ClausesInfo_45);
                                }
#line 272 "intermod.m"
                                {
#line 272 "intermod.m"
                                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(transform_hlds__intermod__ClausesInfo_45, transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__PredInfo_46);
                                }
#line 273 "intermod.m"
                                {
#line 273 "intermod.m"
                                  mercury__map__det_update_4_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, transform_hlds__intermod__TypeCtorInfo_63_63, ((MR_Box) (transform_hlds__intermod__PredId_17)), ((MR_Box) (transform_hlds__intermod__PredInfo_46)), transform_hlds__intermod__PredTable0_26, &transform_hlds__intermod__PredTable_47);
                                }
#line 274 "intermod.m"
                                {
#line 274 "intermod.m"
                                  hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__PredTable_47, transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__ModuleInfo_48);
                                }
#line 275 "intermod.m"
                                {
#line 275 "intermod.m"
                                  transform_hlds__intermod__intermod_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_56_99, &transform_hlds__intermod__Preds0_49);
                                }
#line 276 "intermod.m"
                                {
#line 276 "intermod.m"
                                  transform_hlds__intermod__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(transform_hlds__intermod__PredInfo_46);
                                }
#line 280 "intermod.m"
                                if (transform_hlds__intermod__succeeded)
#line 279 "intermod.m"
                                  {
#line 279 "intermod.m"
                                    transform_hlds__intermod__intermod_info_set_write_header_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_56_99, &transform_hlds__intermod__STATE_VARIABLE_Info_58_58);
                                  }
#line 280 "intermod.m"
                                else
#line 280 "intermod.m"
                                  transform_hlds__intermod__STATE_VARIABLE_Info_58_58 = transform_hlds__intermod__STATE_VARIABLE_Info_56_99;
#line 283 "intermod.m"
                                {
#line 283 "intermod.m"
                                  mercury__set__insert_3_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, ((MR_Box) (transform_hlds__intermod__PredId_17)), transform_hlds__intermod__Preds0_49, &transform_hlds__intermod__Preds_50);
                                }
#line 284 "intermod.m"
                                {
#line 284 "intermod.m"
                                  transform_hlds__intermod__intermod_info_set_preds_3_p_0(transform_hlds__intermod__Preds_50, transform_hlds__intermod__STATE_VARIABLE_Info_58_58, &transform_hlds__intermod__STATE_VARIABLE_Info_59_59);
                                }
#line 285 "intermod.m"
                                {
#line 285 "intermod.m"
                                  transform_hlds__intermod__intermod_info_set_module_info_3_p_0(transform_hlds__intermod__ModuleInfo_48, transform_hlds__intermod__STATE_VARIABLE_Info_59_59, &transform_hlds__intermod__STATE_VARIABLE_Info_60_60);
                                }
#line 269 "intermod.m"
                              }
#line 286 "intermod.m"
                              break;
#line 286 "intermod.m"
                          }
#line 4110 "transform_hlds.intermod.c"
                        }
#line 4112 "transform_hlds.intermod.c"
                        break;
#line 4114 "transform_hlds.intermod.c"
                    }
#line 4116 "transform_hlds.intermod.c"
                  }
#line 249 "intermod.m"
              }
#line 291 "intermod.m"
            else
#line 291 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 294 "intermod.m"
            /* direct tailcall eliminated */
#line 294 "intermod.m"
            {
#line 294 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__PredIds_18;
#line 294 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_7 = transform_hlds__intermod__STATE_VARIABLE_Info_60_60;

#line 294 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_0_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 294 "intermod.m"
              transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 294 "intermod.m"
            }
#line 294 "intermod.m"
            continue;
#line 235 "intermod.m"
          }
#line 233 "intermod.m"
      }
#line 233 "intermod.m"
      break;
#line 233 "intermod.m"
    }
#line 230 "intermod.m"
}

#line 211 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
#line 211 "intermod.m"
  MR_Word transform_hlds__intermod__ExtraExportedPreds0_8,
#line 211 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_10,
#line 211 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_11,
#line 211 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_12,
#line 211 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_19,
#line 211 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_20)
#line 211 "intermod.m"
{
#line 215 "intermod.m"
  while (MR_TRUE)
#line 215 "intermod.m"
    {
#line 215 "intermod.m"
      /* tailcall optimized into a loop */
#line 215 "intermod.m"
      {
#line 215 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;
#line 215 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 215 "intermod.m"
        MR_Word transform_hlds__intermod__ExtraExportedPreds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 215 "intermod.m"
        MR_Word transform_hlds__intermod__NewlyExportedPreds_15;
#line 215 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21;
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
#line 2158 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));

#line 218 "intermod.m"
        {
#line 218 "intermod.m"
          transform_hlds__intermod__V_21_21 = mercury__set__difference_2_f_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__ExtraExportedPreds_14, transform_hlds__intermod__ExtraExportedPreds0_8);
        }
#line 217 "intermod.m"
        {
#line 217 "intermod.m"
          transform_hlds__intermod__NewlyExportedPreds_15 = mercury__set__to_sorted_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__V_21_21);
        }
#line 221 "intermod.m"
        if ((transform_hlds__intermod__NewlyExportedPreds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_20 = transform_hlds__intermod__STATE_VARIABLE_Info_0_19;
#line 221 "intermod.m"
        else
#line 222 "intermod.m"
          {
#line 222 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_22_22;

#line 224 "intermod.m"
            {
#line 224 "intermod.m"
              transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__NewlyExportedPreds_15, (MR_Integer) 1, transform_hlds__intermod__InlineThreshold_10, transform_hlds__intermod__HigherOrderSizeLimit_11, transform_hlds__intermod__Deforestation_12, transform_hlds__intermod__STATE_VARIABLE_Info_0_19, &transform_hlds__intermod__STATE_VARIABLE_Info_22_22);
            }
#line 226 "intermod.m"
            /* direct tailcall eliminated */
#line 226 "intermod.m"
            {
#line 226 "intermod.m"
              MR_Word transform_hlds__intermod__ExtraExportedPreds0__tmp_copy_8 = transform_hlds__intermod__ExtraExportedPreds_14;
#line 226 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_19 = transform_hlds__intermod__STATE_VARIABLE_Info_22_22;

#line 226 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_0_19 = transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_19;
#line 226 "intermod.m"
              transform_hlds__intermod__ExtraExportedPreds0_8 = transform_hlds__intermod__ExtraExportedPreds0__tmp_copy_8;
#line 226 "intermod.m"
            }
#line 226 "intermod.m"
            continue;
#line 222 "intermod.m"
          }
#line 215 "intermod.m"
      }
#line 215 "intermod.m"
      break;
#line 215 "intermod.m"
    }
#line 211 "intermod.m"
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
#line 2600 "intermod.m"
  {
#line 2600 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2594 "intermod.m"
    {
#line 2594 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, transform_hlds__intermod__ModuleErrors_15);
    }
#line 2600 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2599 "intermod.m"
      {
#line 2599 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Error_25 = transform_hlds__intermod__STATE_VARIABLE_Error_0_24;
#line 2599 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = transform_hlds__intermod__STATE_VARIABLE_Specs_0_22;
#line 2599 "intermod.m"
      }
#line 2600 "intermod.m"
    else
#line 2628 "intermod.m"
      {
#line 2600 "intermod.m"
        {
#line 2600 "intermod.m"
          transform_hlds__intermod__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, transform_hlds__intermod__ModuleErrors_15, ((MR_Box) ((MR_Integer) 0)));
        }
#line 2628 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 2617 "intermod.m"
          {
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__WarningOption_17;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__Severity_18;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__Pieces_19;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__Msg_20;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__Spec_21;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__V_30_30;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__V_32_32;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__V_33_33;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__V_34_34;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__V_37_37;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__V_38_38;
#line 2617 "intermod.m"
            MR_Word transform_hlds__intermod__V_51_51;

#line 2614 "intermod.m"
#line 2614 "intermod.m"
            switch (transform_hlds__intermod__FileType_11) {
#line 2614 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2614 "intermod.m"
              case (MR_Integer) 0:
#line 2613 "intermod.m"
                transform_hlds__intermod__WarningOption_17 = (MR_Integer) 12;
#line 2614 "intermod.m"
                break;
#line 2614 "intermod.m"
              case (MR_Integer) 1:
#line 2616 "intermod.m"
                transform_hlds__intermod__WarningOption_17 = (MR_Integer) 13;
#line 2614 "intermod.m"
                break;
#line 2614 "intermod.m"
            }
#line 2619 "intermod.m"
            {
#line 2619 "intermod.m"
              transform_hlds__intermod__Severity_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2619 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 0) = ((MR_Box) (transform_hlds__intermod__WarningOption_17));
#line 2619 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2619 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2619 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2619 "intermod.m"
            }
#line 2621 "intermod.m"
            {
#line 2621 "intermod.m"
              transform_hlds__intermod__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2621 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2621 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_38_38, 1) = ((MR_Box) (transform_hlds__intermod__FileName_12));
#line 2621 "intermod.m"
            }
#line 2621 "intermod.m"
            {
#line 2621 "intermod.m"
              transform_hlds__intermod__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2621 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_37_37, 0) = ((MR_Box) (transform_hlds__intermod__V_38_38));
#line 2621 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_1[21])));
#line 2621 "intermod.m"
            }
#line 2621 "intermod.m"
            {
#line 2621 "intermod.m"
              transform_hlds__intermod__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2621 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__intermod_scalar_common_1[25])));
#line 2621 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_34_34, 1) = ((MR_Box) (transform_hlds__intermod__V_37_37));
#line 2621 "intermod.m"
            }
#line 2621 "intermod.m"
            {
#line 2621 "intermod.m"
              transform_hlds__intermod__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2621 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_33_33, 0) = ((MR_Box) (transform_hlds__intermod__V_34_34));
#line 2621 "intermod.m"
            }
#line 2622 "intermod.m"
            {
#line 2622 "intermod.m"
              transform_hlds__intermod__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2622 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_32_32, 0) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 2622 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2622 "intermod.m"
            }
#line 2620 "intermod.m"
            {
#line 2620 "intermod.m"
              transform_hlds__intermod__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2620 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_30_30, 0) = ((MR_Box) ((transform_hlds__intermod__WarningOption_17 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 2620 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_30_30, 1) = ((MR_Box) (transform_hlds__intermod__V_32_32));
#line 2620 "intermod.m"
            }
#line 2622 "intermod.m"
            {
#line 2622 "intermod.m"
              transform_hlds__intermod__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2622 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Pieces_19, 0) = ((MR_Box) (transform_hlds__intermod__V_30_30));
#line 2622 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Pieces_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2622 "intermod.m"
            }
#line 2623 "intermod.m"
            {
#line 2623 "intermod.m"
              transform_hlds__intermod__Msg_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2623 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2623 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2623 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2623 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 3) = ((MR_Box) (transform_hlds__intermod__Pieces_19));
#line 2623 "intermod.m"
            }
#line 2624 "intermod.m"
            {
#line 2624 "intermod.m"
              transform_hlds__intermod__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2624 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_51_51, 0) = ((MR_Box) (transform_hlds__intermod__Msg_20));
#line 2624 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2624 "intermod.m"
            }
#line 2624 "intermod.m"
            {
#line 2624 "intermod.m"
              transform_hlds__intermod__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2624 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 0) = ((MR_Box) (transform_hlds__intermod__Severity_18));
#line 2624 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2624 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 2) = ((MR_Box) (transform_hlds__intermod__V_51_51));
#line 2624 "intermod.m"
            }
#line 2625 "intermod.m"
            {
#line 2625 "intermod.m"
              MR_Word base;
#line 2625 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2625 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = base;
#line 2625 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Spec_21));
#line 2625 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Specs_0_22));
#line 2625 "intermod.m"
            }
#line 2617 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Error_25 = transform_hlds__intermod__STATE_VARIABLE_Error_0_24;
#line 2617 "intermod.m"
          }
#line 2628 "intermod.m"
        else
#line 2631 "intermod.m"
          {
#line 2631 "intermod.m"
            {
#line 2631 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__intermod__ModuleSpecs_13, transform_hlds__intermod__STATE_VARIABLE_Specs_0_22);
            }
#line 2632 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Error_25 = (MR_Integer) 1;
#line 2631 "intermod.m"
          }
#line 2628 "intermod.m"
      }
#line 2600 "intermod.m"
  }
#line 91 "intermod.m"
}

#line 2283 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2283__1_2_p_0(
#line 2283 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_10,
#line 2283 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_11)
#line 2283 "intermod.m"
{
#line 2283 "intermod.m"
  {
#line 2283 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2283 "intermod.m"
    MR_Integer transform_hlds__intermod__V_7_7;

#line 2283 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_10, (MR_Integer) 0)));
#line 2283 "intermod.m"
    transform_hlds__intermod__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_10, (MR_Integer) 1)));
#line 2283 "intermod.m"
  }
#line 2283 "intermod.m"
}

#line 2249 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2249__1_4_p_0(
#line 2249 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_4,
#line 2249 "intermod.m"
  MR_Word transform_hlds__intermod__SpecPredMap_8,
#line 2249 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_13,
#line 2249 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_14)
#line 2249 "intermod.m"
{
#line 2249 "intermod.m"
  {
#line 2249 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2249 "intermod.m"
    MR_Word transform_hlds__intermod__V_15_15;
#line 2250 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_HeadVar__4_14;

#line 2250 "intermod.m"
    {
#line 2250 "intermod.m"
      transform_hlds__intermod__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2250 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_15_15, 0) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_13));
#line 2250 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_15_15, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_4));
#line 2250 "intermod.m"
    }
#line 2250 "intermod.m"
    {
#line 2250 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecPredMap_8, ((MR_Box) (transform_hlds__intermod__V_15_15)), &transform_hlds__intermod__conv0_HeadVar__4_14);
    }
#line 2250 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2250 "intermod.m"
      {
#line 2250 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_14 = ((MR_Word) transform_hlds__intermod__conv0_HeadVar__4_14);
#line 2250 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 2250 "intermod.m"
      }
#line 2249 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2249 "intermod.m"
  }
#line 2249 "intermod.m"
}

#line 1896 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1896__1_4_p_0(
#line 1896 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1896 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVarMap_15,
#line 1896 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_23,
#line 1896 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_24)
#line 1896 "intermod.m"
{
#line 1896 "intermod.m"
  {
#line 1896 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1896 "intermod.m"
    MR_Word transform_hlds__intermod__HeadTerm0_18;
#line 1894 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_HeadTerm0_18;

#line 1894 "intermod.m"
    {
#line 1894 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[13], (MR_Word) &transform_hlds__intermod_scalar_common_1[14], transform_hlds__intermod__HeadVarMap_15, ((MR_Box) (transform_hlds__intermod__HeadVar__3_23)), &transform_hlds__intermod__conv0_HeadTerm0_18);
    }
#line 1894 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1894 "intermod.m"
      {
#line 1894 "intermod.m"
        transform_hlds__intermod__HeadTerm0_18 = ((MR_Word) transform_hlds__intermod__conv0_HeadTerm0_18);
#line 1894 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1894 "intermod.m"
      }
#line 1896 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1895 "intermod.m"
      *transform_hlds__intermod__HeadVar__4_24 = transform_hlds__intermod__HeadTerm0_18;
#line 1896 "intermod.m"
    else
#line 1897 "intermod.m"
      {
#line 1897 "intermod.m"
        MR_Word transform_hlds__intermod__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 3)));
#line 1897 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 0)));
#line 1897 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 1)));
#line 1897 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 2)));
#line 1897 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 4)));

#line 1898 "intermod.m"
        {
#line 1898 "intermod.m"
          MR_Word base;
#line 1898 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1898 "intermod.m"
          *transform_hlds__intermod__HeadVar__4_24 = base;
#line 1898 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_23));
#line 1898 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Context_19));
#line 1898 "intermod.m"
        }
#line 1897 "intermod.m"
      }
#line 1896 "intermod.m"
  }
#line 1896 "intermod.m"
}

#line 1814 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1814__1_1_p_0(
#line 1814 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_67)
#line 1814 "intermod.m"
{
#line 1814 "intermod.m"
  {
#line 1814 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1814 "intermod.m"
    MR_Word transform_hlds__intermod__GE_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_67, (MR_Integer) 0)));
#line 1816 "intermod.m"
    MR_Word transform_hlds__intermod__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_67, (MR_Integer) 1)));
#line 1817 "intermod.m"
    MR_Word transform_hlds__intermod__V_39_39;
#line 1817 "intermod.m"
    MR_Word transform_hlds__intermod__V_40_40;
#line 1817 "intermod.m"
    MR_Integer transform_hlds__intermod__V_41_41;
#line 1817 "intermod.m"
    MR_Word transform_hlds__intermod__V_42_42;
#line 1817 "intermod.m"
    MR_Word transform_hlds__intermod__V_43_43;
#line 1817 "intermod.m"
    MR_Word transform_hlds__intermod__V_44_44;
#line 1817 "intermod.m"
    MR_Word transform_hlds__intermod__V_45_45;

#line 1817 "intermod.m"
    transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__GE_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1817 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1817 "intermod.m"
      {
#line 1817 "intermod.m"
        transform_hlds__intermod__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 1)));
#line 1817 "intermod.m"
        transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 2)));
#line 1817 "intermod.m"
        transform_hlds__intermod__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 3)));
#line 1817 "intermod.m"
        transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 4)));
#line 1817 "intermod.m"
        transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 5)));
#line 1817 "intermod.m"
        transform_hlds__intermod__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 6)));
#line 1817 "intermod.m"
        transform_hlds__intermod__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 7)));
#line 1817 "intermod.m"
      }
#line 1814 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 1814 "intermod.m"
  }
#line 1814 "intermod.m"
}

#line 1692 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1692__1_3_p_0(
#line 1692 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__1_45,
#line 1692 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__2_46,
#line 1692 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_47)
#line 1692 "intermod.m"
{
#line 1692 "intermod.m"
  {
#line 1692 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1692 "intermod.m"
    MR_Integer transform_hlds__intermod__ProcInt1_34;
#line 1692 "intermod.m"
    MR_Integer transform_hlds__intermod__ProcInt2_35;

#line 1694 "intermod.m"
    {
#line 1694 "intermod.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__intermod__HeadVar__1_45, &transform_hlds__intermod__ProcInt1_34);
    }
#line 1695 "intermod.m"
    {
#line 1695 "intermod.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__intermod__HeadVar__2_46, &transform_hlds__intermod__ProcInt2_35);
    }
#line 1696 "intermod.m"
    {
#line 1696 "intermod.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__intermod__HeadVar__3_47, transform_hlds__intermod__ProcInt1_34, transform_hlds__intermod__ProcInt2_35);
#line 1696 "intermod.m"
      return;
    }
#line 1692 "intermod.m"
  }
#line 1692 "intermod.m"
}

#line 1614 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_2(
#line 1614 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1614 "intermod.m"
{
#line 1614 "intermod.m"
  {
#line 1614 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1614 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__N_8 = ((MR_Integer) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__conv0_N_8);
#line 1614 "intermod.m"
    {
#line 1614 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_1(transform_hlds__intermod__env_ptr);
#line 1614 "intermod.m"
      return;
    }
#line 1614 "intermod.m"
  }
#line 1614 "intermod.m"
}

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_1(
#line 1613 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1613 "intermod.m"
{
#line 1613 "intermod.m"
  {
#line 1613 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1613 "intermod.m"
    {
#line 1615 "intermod.m"
      MR_Box transform_hlds__intermod__conv1_HeadVar__3_9;

#line 4812 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) &transform_hlds__intermod_scalar_common_1[12];
#line 1615 "intermod.m"
      {
#line 1615 "intermod.m"
        transform_hlds__intermod__conv1_HeadVar__3_9 = mercury__list__det_index1_2_f_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__TypeInfo_13_13, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__TVars_4, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__N_8);
      }
#line 1615 "intermod.m"
      *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__HeadVar__3_9) = ((MR_Word) transform_hlds__intermod__conv1_HeadVar__3_9);
#line 1615 "intermod.m"
      {
#line 1615 "intermod.m"
        ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__cont_env_ptr);
#line 1615 "intermod.m"
        return;
      }
#line 1613 "intermod.m"
    }
#line 1613 "intermod.m"
  }
#line 1613 "intermod.m"
}

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0(
#line 1613 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1613 "intermod.m"
  MR_Word transform_hlds__intermod__Set_5,
#line 1613 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_9,
#line 1613 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1613 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1613 "intermod.m"
{
#line 1613 "intermod.m"
  {
#line 1613 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0_s transform_hlds__intermod__env;

#line 1613 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__TVars_4 = transform_hlds__intermod__TVars_4;
#line 1613 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__HeadVar__3_9 = transform_hlds__intermod__HeadVar__3_9;
#line 1613 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__cont = transform_hlds__intermod__cont;
#line 1613 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1613 "intermod.m"
    {
#line 1613 "intermod.m"
      MR_bool transform_hlds__intermod__succeeded;

#line 1614 "intermod.m"
      {
#line 1614 "intermod.m"
        mercury__set__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &(transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_env_0__conv0_N_8, transform_hlds__intermod__Set_5, transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0_2, &transform_hlds__intermod__env);
      }
#line 1613 "intermod.m"
    }
#line 1613 "intermod.m"
  }
#line 1613 "intermod.m"
}

#line 1326 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1326__1_3_p_0(
#line 1326 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_45)
#line 1326 "intermod.m"
{
#line 1326 "intermod.m"
  {
#line 1326 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1326 "intermod.m"
    MR_Word transform_hlds__intermod__Lang_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_45, (MR_Integer) 0)));
#line 1326 "intermod.m"
    MR_Word transform_hlds__intermod__Import_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_45, (MR_Integer) 1)));
#line 1326 "intermod.m"
    MR_Word transform_hlds__intermod__FIMInfo_31;
#line 1328 "intermod.m"
    MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_45, (MR_Integer) 2)));

#line 1329 "intermod.m"
    {
#line 1329 "intermod.m"
      transform_hlds__intermod__FIMInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__FIMInfo_31, 0) = ((MR_Box) (transform_hlds__intermod__Lang_28));
#line 1329 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__FIMInfo_31, 1) = ((MR_Box) (transform_hlds__intermod__Import_29));
#line 1329 "intermod.m"
    }
#line 1330 "intermod.m"
    {
#line 1330 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_pragma_foreign_import_module_3_p_0(transform_hlds__intermod__FIMInfo_31);
#line 1330 "intermod.m"
      return;
    }
#line 1326 "intermod.m"
  }
#line 1326 "intermod.m"
}

#line 1001 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1001__1_1_f_0(
#line 1001 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_54)
#line 1001 "intermod.m"
{
#line 1001 "intermod.m"
  {
#line 1001 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1001 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 0)));
#line 1001 "intermod.m"
    MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 1)));
#line 1001 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 2)));
#line 1001 "intermod.m"
    MR_Word transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 3)));
#line 1001 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 4)));
#line 1001 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 5)));
#line 1001 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 6)));
#line 1001 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 7)));

#line 1001 "intermod.m"
    return transform_hlds__intermod__HeadVar__2_55;
#line 1001 "intermod.m"
  }
#line 1001 "intermod.m"
}

#line 988 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__988__1_1_f_0(
#line 988 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_50)
#line 988 "intermod.m"
{
#line 988 "intermod.m"
  {
#line 988 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 988 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__2_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 2)));
#line 988 "intermod.m"
    MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 0)));
#line 988 "intermod.m"
    MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 1)));
#line 988 "intermod.m"
    MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 3)));
#line 988 "intermod.m"
    MR_Integer transform_hlds__intermod__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 4)));

#line 988 "intermod.m"
    return transform_hlds__intermod__HeadVar__2_51;
#line 988 "intermod.m"
  }
#line 988 "intermod.m"
}

#line 843 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__843__1_2_p_0(
#line 843 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_44,
#line 843 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_45)
#line 843 "intermod.m"
{
#line 843 "intermod.m"
  {
#line 843 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 843 "intermod.m"
    MR_Integer transform_hlds__intermod__V_27_27;

#line 843 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_44, (MR_Integer) 0)));
#line 843 "intermod.m"
    transform_hlds__intermod__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_44, (MR_Integer) 1)));
#line 843 "intermod.m"
  }
#line 843 "intermod.m"
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
#line 5052 "transform_hlds.intermod.c"
  {
#line 5054 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded = (transform_hlds__intermod__HeadVar__2_1 == transform_hlds__intermod__HeadVar__2_2);

#line 5057 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 5059 "transform_hlds.intermod.c"
  }
#line 74 "intermod.m"
}

#line 2075 "intermod.m"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
#line 2075 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__1_1,
#line 2075 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 2075 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3)
#line 2075 "intermod.m"
{
#line 2075 "intermod.m"
  {
#line 2075 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2075 "intermod.m"
    MR_Integer transform_hlds__intermod__CastX_30 = (MR_Integer) transform_hlds__intermod__HeadVar__2_2;
#line 2075 "intermod.m"
    MR_Integer transform_hlds__intermod__CastY_31 = (MR_Integer) transform_hlds__intermod__HeadVar__3_3;

#line 2075 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__CastX_30 == transform_hlds__intermod__CastY_31);
#line 2075 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 5088 "transform_hlds.intermod.c"
      *transform_hlds__intermod__HeadVar__1_1 = (MR_Integer) 0;
#line 2075 "intermod.m"
    else
#line 2075 "intermod.m"
      {
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 2)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 3)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 4)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 5)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 6)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 7)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 8)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 2)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 3)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 4)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 5)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 6)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 7)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 8)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;

#line 2075 "intermod.m"
        {
#line 2075 "intermod.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[7], &transform_hlds__intermod__V_22_22, ((MR_Box) (transform_hlds__intermod__V_4_4)), ((MR_Box) (transform_hlds__intermod__V_13_13)));
        }
#line 5138 "transform_hlds.intermod.c"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_22_22 == (MR_Integer) 0);
#line 2075 "intermod.m"
        transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2075 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
          *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_22_22;
#line 2075 "intermod.m"
        else
#line 2075 "intermod.m"
          {
#line 2075 "intermod.m"
            MR_Word transform_hlds__intermod__V_23_23;

#line 2075 "intermod.m"
            {
#line 2075 "intermod.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[15], &transform_hlds__intermod__V_23_23, ((MR_Box) (transform_hlds__intermod__V_5_5)), ((MR_Box) (transform_hlds__intermod__V_14_14)));
            }
#line 5158 "transform_hlds.intermod.c"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_23_23 == (MR_Integer) 0);
#line 2075 "intermod.m"
            transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2075 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
              *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_23_23;
#line 2075 "intermod.m"
            else
#line 2075 "intermod.m"
              {
#line 2075 "intermod.m"
                MR_Word transform_hlds__intermod__V_24_24;

#line 2075 "intermod.m"
                {
#line 2075 "intermod.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[15], &transform_hlds__intermod__V_24_24, ((MR_Box) (transform_hlds__intermod__V_6_6)), ((MR_Box) (transform_hlds__intermod__V_15_15)));
                }
#line 5178 "transform_hlds.intermod.c"
                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_24_24 == (MR_Integer) 0);
#line 2075 "intermod.m"
                transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2075 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                  *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_24_24;
#line 2075 "intermod.m"
                else
#line 2075 "intermod.m"
                  {
#line 2075 "intermod.m"
                    MR_Word transform_hlds__intermod__V_25_25;

#line 2075 "intermod.m"
                    {
#line 2075 "intermod.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[16], &transform_hlds__intermod__V_25_25, ((MR_Box) (transform_hlds__intermod__V_7_7)), ((MR_Box) (transform_hlds__intermod__V_16_16)));
                    }
#line 5198 "transform_hlds.intermod.c"
                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_25_25 == (MR_Integer) 0);
#line 2075 "intermod.m"
                    transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2075 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                      *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_25_25;
#line 2075 "intermod.m"
                    else
#line 2075 "intermod.m"
                      {
#line 2075 "intermod.m"
                        MR_Word transform_hlds__intermod__V_26_26;

#line 2075 "intermod.m"
                        {
#line 2075 "intermod.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[17], &transform_hlds__intermod__V_26_26, ((MR_Box) (transform_hlds__intermod__V_8_8)), ((MR_Box) (transform_hlds__intermod__V_17_17)));
                        }
#line 5218 "transform_hlds.intermod.c"
                        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_26_26 == (MR_Integer) 0);
#line 2075 "intermod.m"
                        transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2075 "intermod.m"
                        if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                          *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_26_26;
#line 2075 "intermod.m"
                        else
#line 2075 "intermod.m"
                          {
#line 2075 "intermod.m"
                            MR_Word transform_hlds__intermod__V_27_27;

#line 2075 "intermod.m"
                            {
#line 2075 "intermod.m"
                              hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__intermod__V_27_27, transform_hlds__intermod__V_9_9, transform_hlds__intermod__V_18_18);
                            }
#line 5238 "transform_hlds.intermod.c"
                            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_27_27 == (MR_Integer) 0);
#line 2075 "intermod.m"
                            transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2075 "intermod.m"
                            if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                              *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_27_27;
#line 2075 "intermod.m"
                            else
#line 2075 "intermod.m"
                              {
#line 2075 "intermod.m"
                                MR_Word transform_hlds__intermod__V_28_28;
#line 2075 "intermod.m"
                                MR_Integer transform_hlds__intermod__V_41_41 = (MR_Integer) transform_hlds__intermod__V_10_10;
#line 2075 "intermod.m"
                                MR_Integer transform_hlds__intermod__V_42_42 = (MR_Integer) transform_hlds__intermod__V_19_19;

#line 2075 "intermod.m"
                                {
#line 2075 "intermod.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__intermod__V_28_28, transform_hlds__intermod__V_41_41, transform_hlds__intermod__V_42_42);
                                }
#line 5262 "transform_hlds.intermod.c"
                                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_28_28 == (MR_Integer) 0);
#line 2075 "intermod.m"
                                transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2075 "intermod.m"
                                if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                                  *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_28_28;
#line 2075 "intermod.m"
                                else
#line 2075 "intermod.m"
                                  {
#line 2075 "intermod.m"
                                    MR_Word transform_hlds__intermod__V_29_29;

#line 2075 "intermod.m"
                                    {
#line 2075 "intermod.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[7], &transform_hlds__intermod__V_29_29, ((MR_Box) (transform_hlds__intermod__V_11_11)), ((MR_Box) (transform_hlds__intermod__V_20_20)));
                                    }
#line 5282 "transform_hlds.intermod.c"
                                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_29_29 == (MR_Integer) 0);
#line 2075 "intermod.m"
                                    transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2075 "intermod.m"
                                    if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                                      *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_29_29;
#line 2075 "intermod.m"
                                    else
#line 2075 "intermod.m"
                                      {
#line 2075 "intermod.m"
                                        {
#line 2075 "intermod.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[18], transform_hlds__intermod__HeadVar__1_1, ((MR_Box) (transform_hlds__intermod__V_12_12)), ((MR_Box) (transform_hlds__intermod__V_21_21)));
#line 2075 "intermod.m"
                                          return;
                                        }
#line 2075 "intermod.m"
                                      }
#line 2075 "intermod.m"
                                  }
#line 2075 "intermod.m"
                              }
#line 2075 "intermod.m"
                          }
#line 2075 "intermod.m"
                      }
#line 2075 "intermod.m"
                  }
#line 2075 "intermod.m"
              }
#line 2075 "intermod.m"
          }
#line 2075 "intermod.m"
      }
#line 2075 "intermod.m"
  }
#line 2075 "intermod.m"
}

#line 2075 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0(
#line 2075 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2075 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 2075 "intermod.m"
{
#line 2075 "intermod.m"
  {
#line 2075 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2075 "intermod.m"
    MR_Integer transform_hlds__intermod__CastX_21 = (MR_Integer) transform_hlds__intermod__HeadVar__1_1;
#line 2075 "intermod.m"
    MR_Integer transform_hlds__intermod__CastY_22 = (MR_Integer) transform_hlds__intermod__HeadVar__2_2;

#line 2075 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__CastX_21 == transform_hlds__intermod__CastY_22);
#line 2075 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
      transform_hlds__intermod__succeeded = MR_TRUE;
#line 2075 "intermod.m"
    else
#line 2075 "intermod.m"
      {
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_24_24;
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_25_25;
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_26_26;
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_27_27;
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_29_29;
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_30_30;
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 2)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 3)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 4)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 5)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 6)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 7)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 8)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 2)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 3)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 4)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 5)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 6)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 7)));
#line 2075 "intermod.m"
        MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 8)));

#line 5401 "transform_hlds.intermod.c"
        {
#line 5403 "transform_hlds.intermod.c"
          transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[7], ((MR_Box) (transform_hlds__intermod__V_3_3)), ((MR_Box) (transform_hlds__intermod__V_12_12)));
        }
#line 2075 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
          {
#line 5410 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeInfo_24_24 = (MR_Word) &transform_hlds__intermod_scalar_common_1[15];
#line 5412 "transform_hlds.intermod.c"
            {
#line 5414 "transform_hlds.intermod.c"
              transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_24_24, ((MR_Box) (transform_hlds__intermod__V_4_4)), ((MR_Box) (transform_hlds__intermod__V_13_13)));
            }
#line 2075 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
              {
#line 5421 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeInfo_25_25 = (MR_Word) &transform_hlds__intermod_scalar_common_1[15];
#line 5423 "transform_hlds.intermod.c"
                {
#line 5425 "transform_hlds.intermod.c"
                  transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_25_25, ((MR_Box) (transform_hlds__intermod__V_5_5)), ((MR_Box) (transform_hlds__intermod__V_14_14)));
                }
#line 2075 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                  {
#line 5432 "transform_hlds.intermod.c"
                    transform_hlds__intermod__TypeInfo_26_26 = (MR_Word) &transform_hlds__intermod_scalar_common_1[16];
#line 5434 "transform_hlds.intermod.c"
                    {
#line 5436 "transform_hlds.intermod.c"
                      transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_26_26, ((MR_Box) (transform_hlds__intermod__V_6_6)), ((MR_Box) (transform_hlds__intermod__V_15_15)));
                    }
#line 2075 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                      {
#line 5443 "transform_hlds.intermod.c"
                        transform_hlds__intermod__TypeInfo_27_27 = (MR_Word) &transform_hlds__intermod_scalar_common_1[17];
#line 5445 "transform_hlds.intermod.c"
                        {
#line 5447 "transform_hlds.intermod.c"
                          transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_27_27, ((MR_Box) (transform_hlds__intermod__V_7_7)), ((MR_Box) (transform_hlds__intermod__V_16_16)));
                        }
#line 2075 "intermod.m"
                        if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                          {
#line 5454 "transform_hlds.intermod.c"
                            {
#line 5456 "transform_hlds.intermod.c"
                              transform_hlds__intermod__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__intermod__V_8_8, transform_hlds__intermod__V_17_17);
                            }
#line 2075 "intermod.m"
                            if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                              {
#line 5463 "transform_hlds.intermod.c"
                                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_9_9 == transform_hlds__intermod__V_18_18);
#line 2075 "intermod.m"
                                if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                                  {
#line 5469 "transform_hlds.intermod.c"
                                    transform_hlds__intermod__TypeInfo_29_29 = (MR_Word) &transform_hlds__intermod_scalar_common_2[7];
#line 5471 "transform_hlds.intermod.c"
                                    {
#line 5473 "transform_hlds.intermod.c"
                                      transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_29_29, ((MR_Box) (transform_hlds__intermod__V_10_10)), ((MR_Box) (transform_hlds__intermod__V_19_19)));
                                    }
#line 2075 "intermod.m"
                                    if (transform_hlds__intermod__succeeded)
#line 2075 "intermod.m"
                                      {
#line 5480 "transform_hlds.intermod.c"
                                        transform_hlds__intermod__TypeInfo_30_30 = (MR_Word) &transform_hlds__intermod_scalar_common_1[18];
#line 5482 "transform_hlds.intermod.c"
                                        {
#line 5484 "transform_hlds.intermod.c"
                                          return transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_30_30, ((MR_Box) (transform_hlds__intermod__V_11_11)), ((MR_Box) (transform_hlds__intermod__V_20_20)));
                                        }
#line 2075 "intermod.m"
                                      }
#line 2075 "intermod.m"
                                  }
#line 2075 "intermod.m"
                              }
#line 2075 "intermod.m"
                          }
#line 2075 "intermod.m"
                      }
#line 2075 "intermod.m"
                  }
#line 2075 "intermod.m"
              }
#line 2075 "intermod.m"
          }
#line 2075 "intermod.m"
      }
#line 2075 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2075 "intermod.m"
  }
#line 2075 "intermod.m"
}

#line 2575 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__read_optimization_interfaces_12_p_0_2(
#line 2575 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2575 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 2575 "intermod.m"
{
#line 2575 "intermod.m"
  {
#line 2575 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 2575 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2575 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__2_2;

#line 2575 "intermod.m"
    {
#line 2575 "intermod.m"
      transform_hlds__intermod__conv1_HeadVar__2_2 = parse_tree__prog_item__avail_use_info_module_name_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 2575 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__2_2));
#line 2575 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 2575 "intermod.m"
  }
#line 2575 "intermod.m"
}

#line 2563 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__read_optimization_interfaces_12_p_0_1(
#line 2563 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2563 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 2563 "intermod.m"
{
#line 2563 "intermod.m"
  {
#line 2563 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 2563 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2563 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_2;

#line 2563 "intermod.m"
    {
#line 2563 "intermod.m"
      transform_hlds__intermod__conv0_HeadVar__2_2 = parse_tree__prog_item__wrap_avail_use_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 2563 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_2));
#line 2563 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 2563 "intermod.m"
  }
#line 2563 "intermod.m"
}

#line 2535 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__read_optimization_interfaces_12_p_0(
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_1,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__Transitive_2,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__ModulesProcessed0_4,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__5_5,
#line 2535 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__6_6,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0_7,
#line 2535 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Specs_8,
#line 2535 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_9,
#line 2535 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_10)
#line 2535 "intermod.m"
{
#line 2541 "intermod.m"
  while (MR_TRUE)
#line 2541 "intermod.m"
    {
#line 2541 "intermod.m"
      /* tailcall optimized into a loop */
#line 2541 "intermod.m"
      {
#line 2541 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 2541 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2541 "intermod.m"
          {
#line 2542 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Error_10 = transform_hlds__intermod__STATE_VARIABLE_Error_0_9;
#line 2542 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Specs_8 = transform_hlds__intermod__STATE_VARIABLE_Specs_0_7;
#line 2541 "intermod.m"
            *transform_hlds__intermod__HeadVar__6_6 = transform_hlds__intermod__HeadVar__5_5;
#line 2541 "intermod.m"
          }
#line 2541 "intermod.m"
        else
#line 2545 "intermod.m"
          {
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_102_102;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__ModuleToRead_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__ModulesToRead_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__VeryVerbose_37;
#line 2545 "intermod.m"
            MR_String transform_hlds__intermod__ModuleToReadString_38;
#line 2545 "intermod.m"
            MR_String transform_hlds__intermod__FileName_39;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__ParseTreeOpt_40;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__OptSpecs_41;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__OptError_42;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__OptModuleName_43;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__OptFileKind_44;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__OptModuleContext_45;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__OptUses_46;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__OptItems_47;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__OptSection_48;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__OptAvails_49;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__OptItemBlock_50;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__ModulesProcessed_56;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__NewDeps_57;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_67_67;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_OptItemBlocksCord_83_83;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_85_85;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_86_86;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_87_87;
#line 2545 "intermod.m"
            MR_Word transform_hlds__intermod__V_97_97;

#line 2546 "intermod.m"
            {
#line 2546 "intermod.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_1, (MR_Integer) 46, &transform_hlds__intermod__VeryVerbose_37);
            }
#line 2547 "intermod.m"
            {
#line 2547 "intermod.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__intermod__VeryVerbose_37, transform_hlds__intermod__Globals_1, transform_hlds__intermod__STATE_VARIABLE_Specs_0_7, &transform_hlds__intermod__STATE_VARIABLE_Specs_67_67);
            }
#line 2548 "intermod.m"
            {
#line 2548 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_37, (MR_String) "% Reading optimization interface for module");
            }
#line 2550 "intermod.m"
            {
#line 2550 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_37, (MR_String) " \140");
            }
#line 2551 "intermod.m"
            {
#line 2551 "intermod.m"
              transform_hlds__intermod__ModuleToReadString_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__intermod__ModuleToRead_30);
            }
#line 2552 "intermod.m"
            {
#line 2552 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_37, transform_hlds__intermod__ModuleToReadString_38);
            }
#line 2553 "intermod.m"
            {
#line 2553 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_37, (MR_String) "\'...\n");
            }
#line 2554 "intermod.m"
            {
#line 2554 "intermod.m"
              libs__file_util__maybe_flush_output_3_p_0(transform_hlds__intermod__VeryVerbose_37);
            }
#line 2556 "intermod.m"
            {
#line 2556 "intermod.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(transform_hlds__intermod__Globals_1, transform_hlds__intermod__ModuleToRead_30, (MR_String) ".opt", &transform_hlds__intermod__FileName_39);
            }
#line 2558 "intermod.m"
            {
#line 2558 "intermod.m"
              parse_tree__prog_io__actually_read_module_opt_9_p_0((MR_Integer) 0, transform_hlds__intermod__Globals_1, transform_hlds__intermod__FileName_39, transform_hlds__intermod__ModuleToRead_30, &transform_hlds__intermod__ParseTreeOpt_40, &transform_hlds__intermod__OptSpecs_41, &transform_hlds__intermod__OptError_42);
            }
#line 2560 "intermod.m"
            transform_hlds__intermod__OptModuleName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ParseTreeOpt_40, (MR_Integer) 0)));
#line 2560 "intermod.m"
            transform_hlds__intermod__OptFileKind_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ParseTreeOpt_40, (MR_Integer) 1)));
#line 2560 "intermod.m"
            transform_hlds__intermod__OptModuleContext_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ParseTreeOpt_40, (MR_Integer) 2)));
#line 2560 "intermod.m"
            transform_hlds__intermod__OptUses_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ParseTreeOpt_40, (MR_Integer) 3)));
#line 2560 "intermod.m"
            transform_hlds__intermod__OptItems_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ParseTreeOpt_40, (MR_Integer) 4)));
#line 2562 "intermod.m"
            {
#line 2562 "intermod.m"
              transform_hlds__intermod__OptSection_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2562 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptSection_48, 0) = ((MR_Box) (transform_hlds__intermod__OptModuleName_43));
#line 2562 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptSection_48, 1) = ((MR_Box) (transform_hlds__intermod__OptFileKind_44));
#line 2562 "intermod.m"
            }
#line 5749 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_102_102 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0;
#line 2563 "intermod.m"
            {
#line 2563 "intermod.m"
              transform_hlds__intermod__OptAvails_49 = mercury__list__map_2_f_0(transform_hlds__intermod__TypeCtorInfo_102_102, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[34], transform_hlds__intermod__OptUses_46);
            }
#line 2564 "intermod.m"
            {
#line 2564 "intermod.m"
              transform_hlds__intermod__OptItemBlock_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2564 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptItemBlock_50, 0) = ((MR_Box) (transform_hlds__intermod__OptSection_48));
#line 2564 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptItemBlock_50, 1) = ((MR_Box) (transform_hlds__intermod__OptModuleContext_45));
#line 2564 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptItemBlock_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2564 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptItemBlock_50, 3) = ((MR_Box) (transform_hlds__intermod__OptAvails_49));
#line 2564 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptItemBlock_50, 4) = ((MR_Box) (transform_hlds__intermod__OptItems_47));
#line 2564 "intermod.m"
            }
#line 2566 "intermod.m"
            {
#line 2566 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_OptItemBlocksCord_83_83 = mercury__cord__snoc_2_f_0((MR_Word) &transform_hlds__intermod_scalar_common_1[0], transform_hlds__intermod__HeadVar__5_5, ((MR_Box) (transform_hlds__intermod__OptItemBlock_50)));
            }
#line 2567 "intermod.m"
            {
#line 2567 "intermod.m"
              transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0((MR_Integer) 0, transform_hlds__intermod__FileName_39, transform_hlds__intermod__OptSpecs_41, transform_hlds__intermod__STATE_VARIABLE_Specs_67_67, &transform_hlds__intermod__STATE_VARIABLE_Specs_85_85, transform_hlds__intermod__OptError_42, transform_hlds__intermod__STATE_VARIABLE_Error_0_9, &transform_hlds__intermod__STATE_VARIABLE_Error_86_86);
            }
#line 2569 "intermod.m"
            {
#line 2569 "intermod.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__intermod__VeryVerbose_37, transform_hlds__intermod__Globals_1, transform_hlds__intermod__STATE_VARIABLE_Specs_85_85, &transform_hlds__intermod__STATE_VARIABLE_Specs_87_87);
            }
#line 2570 "intermod.m"
            {
#line 2570 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_37, (MR_String) "% done.\n");
            }
#line 2583 "intermod.m"
#line 2583 "intermod.m"
            switch (transform_hlds__intermod__Transitive_2) {
#line 2583 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2583 "intermod.m"
              case (MR_Integer) 0:
#line 2584 "intermod.m"
                {
#line 2585 "intermod.m"
                  transform_hlds__intermod__ModulesProcessed_56 = transform_hlds__intermod__ModulesProcessed0_4;
#line 2586 "intermod.m"
                  transform_hlds__intermod__NewDeps_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2584 "intermod.m"
                }
#line 2583 "intermod.m"
                break;
#line 2583 "intermod.m"
              case (MR_Integer) 1:
#line 2573 "intermod.m"
                {
#line 2573 "intermod.m"
                  MR_Word transform_hlds__intermod__TypeCtorInfo_107_107 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2573 "intermod.m"
                  MR_Word transform_hlds__intermod__NewUseDeps0_51;
#line 2573 "intermod.m"
                  MR_Word transform_hlds__intermod__NewImplicitImportDeps0_52;
#line 2573 "intermod.m"
                  MR_Word transform_hlds__intermod__NewImplicitUseDeps0_53;
#line 2573 "intermod.m"
                  MR_Word transform_hlds__intermod__NewDepsSet0_54;
#line 2573 "intermod.m"
                  MR_Word transform_hlds__intermod__NewDepsSet_55;
#line 2573 "intermod.m"
                  MR_Word transform_hlds__intermod__V_91_91;
#line 2573 "intermod.m"
                  MR_Word transform_hlds__intermod__V_93_93;
#line 2573 "intermod.m"
                  MR_Word transform_hlds__intermod__V_94_94;
#line 2573 "intermod.m"
                  MR_Word transform_hlds__intermod__V_95_95;

#line 2575 "intermod.m"
                  {
#line 2575 "intermod.m"
                    transform_hlds__intermod__V_91_91 = mercury__list__map_2_f_0(transform_hlds__intermod__TypeCtorInfo_102_102, transform_hlds__intermod__TypeCtorInfo_107_107, (MR_Word) &transform_hlds__intermod_scalar_common_2[35], transform_hlds__intermod__OptUses_46);
                  }
#line 2574 "intermod.m"
                  {
#line 2574 "intermod.m"
                    transform_hlds__intermod__NewUseDeps0_51 = mercury__set__list_to_set_1_f_0(transform_hlds__intermod__TypeCtorInfo_107_107, transform_hlds__intermod__V_91_91);
                  }
#line 2576 "intermod.m"
                  {
#line 2576 "intermod.m"
                    parse_tree__get_dependencies__get_implicit_dependencies_in_items_4_p_0(transform_hlds__intermod__Globals_1, transform_hlds__intermod__OptItems_47, &transform_hlds__intermod__NewImplicitImportDeps0_52, &transform_hlds__intermod__NewImplicitUseDeps0_53);
                  }
#line 2579 "intermod.m"
                  {
#line 2579 "intermod.m"
                    transform_hlds__intermod__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2579 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_95_95, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitUseDeps0_53));
#line 2579 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2579 "intermod.m"
                  }
#line 2579 "intermod.m"
                  {
#line 2579 "intermod.m"
                    transform_hlds__intermod__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2579 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_94_94, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitImportDeps0_52));
#line 2579 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_94_94, 1) = ((MR_Box) (transform_hlds__intermod__V_95_95));
#line 2579 "intermod.m"
                  }
#line 2578 "intermod.m"
                  {
#line 2578 "intermod.m"
                    transform_hlds__intermod__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2578 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_93_93, 0) = ((MR_Box) (transform_hlds__intermod__NewUseDeps0_51));
#line 2578 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_93_93, 1) = ((MR_Box) (transform_hlds__intermod__V_94_94));
#line 2578 "intermod.m"
                  }
#line 2578 "intermod.m"
                  {
#line 2578 "intermod.m"
                    transform_hlds__intermod__NewDepsSet0_54 = mercury__set__union_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_107_107, transform_hlds__intermod__V_93_93);
                  }
#line 2580 "intermod.m"
                  {
#line 2580 "intermod.m"
                    mercury__set__difference_3_p_0(transform_hlds__intermod__TypeCtorInfo_107_107, transform_hlds__intermod__NewDepsSet0_54, transform_hlds__intermod__ModulesProcessed0_4, &transform_hlds__intermod__NewDepsSet_55);
                  }
#line 2581 "intermod.m"
                  {
#line 2581 "intermod.m"
                    mercury__set__union_3_p_0(transform_hlds__intermod__TypeCtorInfo_107_107, transform_hlds__intermod__ModulesProcessed0_4, transform_hlds__intermod__NewDepsSet_55, &transform_hlds__intermod__ModulesProcessed_56);
                  }
#line 2582 "intermod.m"
                  {
#line 2582 "intermod.m"
                    mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_107_107, transform_hlds__intermod__NewDepsSet_55, &transform_hlds__intermod__NewDeps_57);
                  }
#line 2573 "intermod.m"
                }
#line 2583 "intermod.m"
                break;
#line 2583 "intermod.m"
            }
#line 2589 "intermod.m"
            {
#line 2589 "intermod.m"
              transform_hlds__intermod__V_97_97 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, transform_hlds__intermod__NewDeps_57, transform_hlds__intermod__ModulesToRead_31);
            }
#line 2588 "intermod.m"
            /* direct tailcall eliminated */
#line 2588 "intermod.m"
            {
#line 2588 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__V_97_97;
#line 2588 "intermod.m"
              MR_Word transform_hlds__intermod__ModulesProcessed0__tmp_copy_4 = transform_hlds__intermod__ModulesProcessed_56;
#line 2588 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__5__tmp_copy_5 = transform_hlds__intermod__STATE_VARIABLE_OptItemBlocksCord_83_83;
#line 2588 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0__tmp_copy_7 = transform_hlds__intermod__STATE_VARIABLE_Specs_87_87;
#line 2588 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0__tmp_copy_9 = transform_hlds__intermod__STATE_VARIABLE_Error_86_86;

#line 2588 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Error_0_9 = transform_hlds__intermod__STATE_VARIABLE_Error_0__tmp_copy_9;
#line 2588 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Specs_0_7 = transform_hlds__intermod__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 2588 "intermod.m"
              transform_hlds__intermod__HeadVar__5_5 = transform_hlds__intermod__HeadVar__5__tmp_copy_5;
#line 2588 "intermod.m"
              transform_hlds__intermod__ModulesProcessed0_4 = transform_hlds__intermod__ModulesProcessed0__tmp_copy_4;
#line 2588 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 2588 "intermod.m"
            }
#line 2588 "intermod.m"
            continue;
#line 2545 "intermod.m"
          }
#line 2541 "intermod.m"
      }
#line 2541 "intermod.m"
      break;
#line 2541 "intermod.m"
    }
#line 2535 "intermod.m"
}

#line 2511 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__keep_only_unused_and_reuse_pragmas_acc_5_p_0(
#line 2511 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_1,
#line 2511 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_2,
#line 2511 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2511 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4,
#line 2511 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ItemCord_5)
#line 2511 "intermod.m"
{
#line 2514 "intermod.m"
  while (MR_TRUE)
#line 2514 "intermod.m"
    {
#line 2514 "intermod.m"
      /* tailcall optimized into a loop */
#line 2514 "intermod.m"
      {
#line 2514 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 2514 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2514 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_ItemCord_5 = transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4;
#line 2514 "intermod.m"
        else
#line 2516 "intermod.m"
          {
#line 2516 "intermod.m"
            MR_Word transform_hlds__intermod__Item0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 2516 "intermod.m"
            MR_Word transform_hlds__intermod__Items0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 2516 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_ItemCord_25_25;
#line 2518 "intermod.m"
            MR_Word transform_hlds__intermod__ItemPragma0_16;
#line 2518 "intermod.m"
            MR_Word transform_hlds__intermod__Pragma0_17;
#line 2519 "intermod.m"
            MR_Word transform_hlds__intermod__V_18_18;
#line 2519 "intermod.m"
            MR_Word transform_hlds__intermod__V_19_19;
#line 2519 "intermod.m"
            MR_Integer transform_hlds__intermod__V_20_20;

#line 2518 "intermod.m"
            transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__Item0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item0_13, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 2518 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2518 "intermod.m"
              {
#line 2518 "intermod.m"
                transform_hlds__intermod__ItemPragma0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item0_13, (MR_Integer) 1)));
#line 2519 "intermod.m"
                transform_hlds__intermod__Pragma0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma0_16, (MR_Integer) 0)));
#line 2519 "intermod.m"
                transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma0_16, (MR_Integer) 1)));
#line 2519 "intermod.m"
                transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma0_16, (MR_Integer) 2)));
#line 2519 "intermod.m"
                transform_hlds__intermod__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma0_16, (MR_Integer) 3)));
#line 2523 "intermod.m"
                if (((((MR_tag((MR_Word) transform_hlds__intermod__Pragma0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Pragma0_17, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 2524 "intermod.m"
                  transform_hlds__intermod__succeeded = (transform_hlds__intermod__StructureReuse_2 == (MR_Integer) 1);
#line 2523 "intermod.m"
                else
#line 2523 "intermod.m"
                if (((((MR_tag((MR_Word) transform_hlds__intermod__Pragma0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Pragma0_17, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2521 "intermod.m"
                  transform_hlds__intermod__succeeded = (transform_hlds__intermod__UnusedArgs_1 == (MR_Integer) 1);
#line 2523 "intermod.m"
                else
#line 2523 "intermod.m"
                  transform_hlds__intermod__succeeded = MR_FALSE;
#line 2518 "intermod.m"
              }
#line 2529 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2528 "intermod.m"
              {
#line 2528 "intermod.m"
                {
#line 2528 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_ItemCord_25_25 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4, ((MR_Box) (transform_hlds__intermod__Item0_13)));
                }
#line 2528 "intermod.m"
              }
#line 2529 "intermod.m"
            else
#line 2529 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_ItemCord_25_25 = transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4;
#line 2532 "intermod.m"
            /* direct tailcall eliminated */
#line 2532 "intermod.m"
            {
#line 2532 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__Items0_14;
#line 2532 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_ItemCord_0__tmp_copy_4 = transform_hlds__intermod__STATE_VARIABLE_ItemCord_25_25;

#line 2532 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4 = transform_hlds__intermod__STATE_VARIABLE_ItemCord_0__tmp_copy_4;
#line 2532 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 2532 "intermod.m"
            }
#line 2532 "intermod.m"
            continue;
#line 2516 "intermod.m"
          }
#line 2514 "intermod.m"
      }
#line 2514 "intermod.m"
      break;
#line 2514 "intermod.m"
    }
#line 2511 "intermod.m"
}

#line 2370 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__import_status_to_write_1_p_0(
#line 2370 "intermod.m"
  MR_Word transform_hlds__intermod__Status_2)
#line 2370 "intermod.m"
{
#line 2377 "intermod.m"
  {
#line 2377 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2377 "intermod.m"
#line 2377 "intermod.m"
    switch (MR_tag((MR_Word) transform_hlds__intermod__Status_2)) {
#line 2377 "intermod.m"
      default:
#line 2377 "intermod.m"
        transform_hlds__intermod__succeeded = MR_FALSE;
#line 2377 "intermod.m"
        break;
#line 2377 "intermod.m"
      case (MR_Integer) 0:
#line 2377 "intermod.m"
#line 2377 "intermod.m"
        switch (MR_unmkbody(transform_hlds__intermod__Status_2)) {
#line 2377 "intermod.m"
          default:
#line 2377 "intermod.m"
            transform_hlds__intermod__succeeded = MR_FALSE;
#line 2377 "intermod.m"
            break;
#line 2377 "intermod.m"
          case (MR_Integer) 4:
#line 2382 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 2377 "intermod.m"
            break;
#line 2377 "intermod.m"
          case (MR_Integer) 5:
#line 2383 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 2377 "intermod.m"
            break;
#line 2377 "intermod.m"
          case (MR_Integer) 7:
#line 2385 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 2377 "intermod.m"
            break;
#line 2377 "intermod.m"
          case (MR_Integer) 8:
#line 2386 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 2377 "intermod.m"
            break;
#line 2377 "intermod.m"
        }
#line 2377 "intermod.m"
        break;
#line 2377 "intermod.m"
      case (MR_Integer) 1:
#line 2387 "intermod.m"
        {
#line 2387 "intermod.m"
          MR_Word transform_hlds__intermod__Status_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_2, (MR_Integer) 0)));
#line 2387 "intermod.m"
          MR_Word transform_hlds__intermod__V_6_6;
#line 2387 "intermod.m"
          MR_Word transform_hlds__intermod__V_23_23;

#line 2388 "intermod.m"
          {
#line 2388 "intermod.m"
            transform_hlds__intermod__V_6_6 = parse_tree__status__status_is_exported_1_f_0(transform_hlds__intermod__Status_5);
          }
#line 2388 "intermod.m"
          {
#line 2388 "intermod.m"
            transform_hlds__intermod__V_23_23 = mercury__bool__not_1_f_0(transform_hlds__intermod__V_6_6);
          }
#line 2373 "intermod.m"
          transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_23_23 == (MR_Integer) 1);
#line 2387 "intermod.m"
        }
#line 2377 "intermod.m"
        break;
#line 2377 "intermod.m"
    }
#line 2377 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2377 "intermod.m"
  }
#line 2370 "intermod.m"
}

#line 2339 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(
#line 2339 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2339 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0_2,
#line 2339 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Preds_3)
#line 2339 "intermod.m"
{
#line 2342 "intermod.m"
  while (MR_TRUE)
#line 2342 "intermod.m"
    {
#line 2342 "intermod.m"
      /* tailcall optimized into a loop */
#line 2342 "intermod.m"
      {
#line 2342 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 2342 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2342 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Preds_3 = transform_hlds__intermod__STATE_VARIABLE_Preds_0_2;
#line 2342 "intermod.m"
        else
#line 2343 "intermod.m"
          {
#line 2343 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2343 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 2343 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2343 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2343 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo0_10;
#line 2343 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_22_22;
#line 2344 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_PredInfo0_10;
#line 2363 "intermod.m"
            MR_Word transform_hlds__intermod__Status_11;

#line 2344 "intermod.m"
            {
#line 2344 "intermod.m"
              mercury__map__lookup_3_p_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__STATE_VARIABLE_Preds_0_2, ((MR_Box) (transform_hlds__intermod__PredId_7)), &transform_hlds__intermod__conv0_PredInfo0_10);
            }
#line 2344 "intermod.m"
            transform_hlds__intermod__PredInfo0_10 = ((MR_Word) transform_hlds__intermod__conv0_PredInfo0_10);
#line 2346 "intermod.m"
            {
#line 2346 "intermod.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__Status_11);
            }
#line 2347 "intermod.m"
            {
#line 2347 "intermod.m"
              transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status_11);
            }
#line 2363 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2360 "intermod.m"
              {
#line 2360 "intermod.m"
                MR_Word transform_hlds__intermod__NewStatus_14;
#line 2360 "intermod.m"
                MR_Word transform_hlds__intermod__PredInfo_16;
#line 2350 "intermod.m"
                MR_Word transform_hlds__intermod__Origin_12;
#line 2350 "intermod.m"
                MR_Word transform_hlds__intermod__V_19_19;
#line 2350 "intermod.m"
                MR_Word transform_hlds__intermod__V_20_20;
#line 2351 "intermod.m"
                MR_Word transform_hlds__intermod__V_13_13;

#line 2350 "intermod.m"
                {
#line 2350 "intermod.m"
                  hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__Origin_12);
                }
#line 2351 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Origin_12)) == (MR_mktag((MR_Integer) 0)));
#line 2351 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2351 "intermod.m"
                  {
#line 2351 "intermod.m"
                    transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Origin_12, (MR_Integer) 0)));
#line 2351 "intermod.m"
                    transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_19_19, (MR_Integer) 0)));
#line 2351 "intermod.m"
                    transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_19_19, (MR_Integer) 1)));
#line 2351 "intermod.m"
                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_20_20 == (MR_Integer) 0);
#line 2351 "intermod.m"
                  }
#line 2354 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2353 "intermod.m"
                  transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 2354 "intermod.m"
                else
#line 2358 "intermod.m"
                  {
#line 2355 "intermod.m"
                    MR_Word transform_hlds__intermod__V_15_15;

#line 2355 "intermod.m"
                    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Status_11)) == (MR_mktag((MR_Integer) 1)));
#line 2355 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2355 "intermod.m"
                      {
#line 2355 "intermod.m"
                        transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_11, (MR_Integer) 0)));
#line 2357 "intermod.m"
                        transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_7[1]);
#line 2355 "intermod.m"
                      }
#line 2355 "intermod.m"
                    else
#line 2359 "intermod.m"
                      transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 2358 "intermod.m"
                  }
#line 2361 "intermod.m"
                {
#line 2361 "intermod.m"
                  hlds__hlds_pred__pred_info_set_import_status_3_p_0(transform_hlds__intermod__NewStatus_14, transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__PredInfo_16);
                }
#line 2362 "intermod.m"
                {
#line 2362 "intermod.m"
                  mercury__map__det_update_4_p_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__intermod__PredId_7)), ((MR_Box) (transform_hlds__intermod__PredInfo_16)), transform_hlds__intermod__STATE_VARIABLE_Preds_0_2, &transform_hlds__intermod__STATE_VARIABLE_Preds_22_22);
                }
#line 2360 "intermod.m"
              }
#line 2363 "intermod.m"
            else
#line 2363 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Preds_22_22 = transform_hlds__intermod__STATE_VARIABLE_Preds_0_2;
#line 2366 "intermod.m"
            /* direct tailcall eliminated */
#line 2366 "intermod.m"
            {
#line 2366 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__PredIds_8;
#line 2366 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0__tmp_copy_2 = transform_hlds__intermod__STATE_VARIABLE_Preds_22_22;

#line 2366 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Preds_0_2 = transform_hlds__intermod__STATE_VARIABLE_Preds_0__tmp_copy_2;
#line 2366 "intermod.m"
              transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 2366 "intermod.m"
            }
#line 2366 "intermod.m"
            continue;
#line 2343 "intermod.m"
          }
#line 2342 "intermod.m"
      }
#line 2342 "intermod.m"
      break;
#line 2342 "intermod.m"
    }
#line 2339 "intermod.m"
}

#line 2281 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0_1(
#line 2281 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2281 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2281 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2281 "intermod.m"
{
#line 2281 "intermod.m"
  {
#line 2281 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2281 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_11;

#line 2281 "intermod.m"
    {
#line 2281 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2283__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_11);
    }
#line 2281 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_11));
#line 2281 "intermod.m"
  }
#line 2281 "intermod.m"
}

#line 2307 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0(
#line 2307 "intermod.m"
  MR_Word transform_hlds__intermod__Instance0_5,
#line 2307 "intermod.m"
  MR_Word * transform_hlds__intermod__Instance_6,
#line 2307 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20,
#line 2307 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21)
#line 2307 "intermod.m"
{
#line 2310 "intermod.m"
  {
#line 2310 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2310 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceModule_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 0)));
#line 2310 "intermod.m"
    MR_Word transform_hlds__intermod__Status0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 1)));
#line 2310 "intermod.m"
    MR_Word transform_hlds__intermod__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 2)));
#line 2310 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 3)));
#line 2310 "intermod.m"
    MR_Word transform_hlds__intermod__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 4)));
#line 2310 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 5)));
#line 2310 "intermod.m"
    MR_Word transform_hlds__intermod__Body_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 6)));
#line 2310 "intermod.m"
    MR_Word transform_hlds__intermod__HLDSClassInterface_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 7)));
#line 2310 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 8)));
#line 2310 "intermod.m"
    MR_Word transform_hlds__intermod__ConstraintProofs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 9)));

#line 2314 "intermod.m"
    {
#line 2314 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status0_9);
    }
#line 2327 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2317 "intermod.m"
      {
#line 2315 "intermod.m"
        {
#line 2315 "intermod.m"
          MR_Word base;
#line 2315 "intermod.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 2315 "intermod.m"
          *transform_hlds__intermod__Instance_6 = base;
#line 2315 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__InstanceModule_8));
#line 2315 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2315 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__Context_10));
#line 2315 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__Constraints_11));
#line 2315 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__Types_12));
#line 2315 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_13));
#line 2315 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__Body_14));
#line 2315 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__HLDSClassInterface_15));
#line 2315 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_16));
#line 2315 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__intermod__ConstraintProofs_17));
#line 2315 "intermod.m"
        }
#line 2322 "intermod.m"
        if ((transform_hlds__intermod__HLDSClassInterface_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2325 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20;
#line 2322 "intermod.m"
        else
#line 2319 "intermod.m"
          {
#line 2319 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_15_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2319 "intermod.m"
            MR_Word transform_hlds__intermod__ClassInterface_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HLDSClassInterface_15, (MR_Integer) 0)));
#line 2319 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_19;
#line 2319 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds0_29;
#line 2319 "intermod.m"
            MR_Word transform_hlds__intermod__Preds0_41;
#line 2319 "intermod.m"
            MR_Word transform_hlds__intermod__Preds_42;

#line 2281 "intermod.m"
            {
#line 2281 "intermod.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_15_36, (MR_Word) &transform_hlds__intermod_scalar_common_2[33], transform_hlds__intermod__ClassInterface_18, &transform_hlds__intermod__PredIds0_29);
            }
#line 2286 "intermod.m"
            {
#line 2286 "intermod.m"
              mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_15_36, transform_hlds__intermod__PredIds0_29, &transform_hlds__intermod__PredIds_19);
            }
#line 2335 "intermod.m"
            {
#line 2335 "intermod.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__intermod__Preds0_41);
            }
#line 2336 "intermod.m"
            {
#line 2336 "intermod.m"
              transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_19, transform_hlds__intermod__Preds0_41, &transform_hlds__intermod__Preds_42);
            }
#line 2337 "intermod.m"
            {
#line 2337 "intermod.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_42, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21);
#line 2337 "intermod.m"
              return;
            }
#line 2319 "intermod.m"
          }
#line 2317 "intermod.m"
      }
#line 2327 "intermod.m"
    else
#line 2328 "intermod.m"
      {
#line 2328 "intermod.m"
        *transform_hlds__intermod__Instance_6 = transform_hlds__intermod__Instance0_5;
#line 2328 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20;
#line 2328 "intermod.m"
      }
#line 2310 "intermod.m"
  }
#line 2307 "intermod.m"
}

#line 2304 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0_1(
#line 2304 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2304 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2304 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2304 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2304 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2304 "intermod.m"
{
#line 2304 "intermod.m"
  {
#line 2304 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2304 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_Instance_6;
#line 2304 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21;

#line 2304 "intermod.m"
    {
#line 2304 "intermod.m"
      transform_hlds__intermod__adjust_instance_status_3_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv1_Instance_6, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21);
    }
#line 2304 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv1_Instance_6));
#line 2304 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21));
#line 2304 "intermod.m"
  }
#line 2304 "intermod.m"
}

#line 2298 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0(
#line 2298 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2298 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2298 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9,
#line 2298 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10)
#line 2298 "intermod.m"
{
#line 2303 "intermod.m"
  {
#line 2303 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2303 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 2303 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2303 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceList0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2303 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceList_7;
#line 2304 "intermod.m"
    MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10;

#line 2304 "intermod.m"
    {
#line 2304 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeCtorInfo_17_17, transform_hlds__intermod__TypeCtorInfo_17_17, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[32], transform_hlds__intermod__InstanceList0_6, &transform_hlds__intermod__InstanceList_7, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9)), &transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10);
    }
#line 2304 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10);
#line 2302 "intermod.m"
    {
#line 2302 "intermod.m"
      MR_Word base;
#line 2302 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2302 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2302 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_5));
#line 2302 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__InstanceList_7));
#line 2302 "intermod.m"
    }
#line 2303 "intermod.m"
  }
#line 2298 "intermod.m"
}

#line 2281 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0_1(
#line 2281 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2281 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2281 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2281 "intermod.m"
{
#line 2281 "intermod.m"
  {
#line 2281 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2281 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_11;

#line 2281 "intermod.m"
    {
#line 2281 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2283__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_11);
    }
#line 2281 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_11));
#line 2281 "intermod.m"
  }
#line 2281 "intermod.m"
}

#line 2263 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0(
#line 2263 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2263 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2263 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10,
#line 2263 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11)
#line 2263 "intermod.m"
{
#line 2268 "intermod.m"
  {
#line 2268 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2268 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2268 "intermod.m"
    MR_Word transform_hlds__intermod__ClassDefn0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2268 "intermod.m"
    MR_Word transform_hlds__intermod__ClassDefn_7;
#line 2269 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 0)));
#line 2269 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 1)));
#line 2269 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 2)));
#line 2269 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 3)));
#line 2269 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 4)));
#line 2269 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 5)));
#line 2269 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 6)));
#line 2269 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 7)));
#line 2269 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 8)));
#line 2269 "intermod.m"
    MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 9)));

#line 2269 "intermod.m"
    {
#line 2269 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__V_12_12);
    }
#line 2273 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2270 "intermod.m"
      {
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_15_56;
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_9;
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 7)));
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds0_49;
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__Preds0_61;
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__Preds_62;
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 1)));
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 2)));
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 3)));
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 4)));
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 5)));
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 6)));
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 8)));
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 9)));
#line 2270 "intermod.m"
        MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 0)));

#line 2270 "intermod.m"
        {
#line 2270 "intermod.m"
          transform_hlds__intermod__ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 2270 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2270 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 1) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 2270 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 2) = ((MR_Box) (transform_hlds__intermod__V_27_27));
#line 2270 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 3) = ((MR_Box) (transform_hlds__intermod__V_28_28));
#line 2270 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 4) = ((MR_Box) (transform_hlds__intermod__V_29_29));
#line 2270 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 5) = ((MR_Box) (transform_hlds__intermod__V_30_30));
#line 2270 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 6) = ((MR_Box) (transform_hlds__intermod__V_31_31));
#line 2270 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 7) = ((MR_Box) (transform_hlds__intermod__V_32_32));
#line 2270 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 8) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 2270 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 9) = ((MR_Box) (transform_hlds__intermod__V_34_34));
#line 2270 "intermod.m"
        }
#line 6753 "transform_hlds.intermod.c"
        transform_hlds__intermod__TypeCtorInfo_15_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2281 "intermod.m"
        {
#line 2281 "intermod.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_15_56, (MR_Word) &transform_hlds__intermod_scalar_common_2[31], transform_hlds__intermod__V_32_32, &transform_hlds__intermod__PredIds0_49);
        }
#line 2286 "intermod.m"
        {
#line 2286 "intermod.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_15_56, transform_hlds__intermod__PredIds0_49, &transform_hlds__intermod__PredIds_9);
        }
#line 2335 "intermod.m"
        {
#line 2335 "intermod.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__intermod__Preds0_61);
        }
#line 2336 "intermod.m"
        {
#line 2336 "intermod.m"
          transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_9, transform_hlds__intermod__Preds0_61, &transform_hlds__intermod__Preds_62);
        }
#line 2337 "intermod.m"
        {
#line 2337 "intermod.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_62, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11);
        }
#line 2270 "intermod.m"
      }
#line 2273 "intermod.m"
    else
#line 2274 "intermod.m"
      {
#line 2274 "intermod.m"
        transform_hlds__intermod__ClassDefn_7 = transform_hlds__intermod__ClassDefn0_6;
#line 2274 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10;
#line 2274 "intermod.m"
      }
#line 2267 "intermod.m"
    {
#line 2267 "intermod.m"
      MR_Word base;
#line 2267 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2267 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2267 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_5));
#line 2267 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__ClassDefn_7));
#line 2267 "intermod.m"
    }
#line 2268 "intermod.m"
  }
#line 2263 "intermod.m"
}

#line 2249 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0_1(
#line 2249 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2249 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2249 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2249 "intermod.m"
{
#line 2249 "intermod.m"
  {
#line 2249 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2249 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2249 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__4_14;

#line 2249 "intermod.m"
    {
#line 2249 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2249__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__4_14);
    }
#line 2249 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2249 "intermod.m"
      {
#line 2249 "intermod.m"
        *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__4_14));
#line 2249 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 2249 "intermod.m"
      }
#line 2249 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2249 "intermod.m"
  }
#line 2249 "intermod.m"
}

#line 2230 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0(
#line 2230 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_6,
#line 2230 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_7,
#line 2230 "intermod.m"
  MR_Word * transform_hlds__intermod__TypeDefn_8,
#line 2230 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11,
#line 2230 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12)
#line 2230 "intermod.m"
{
#line 2234 "intermod.m"
  {
#line 2234 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2234 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_10;
#line 1242 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_18;
#line 1242 "intermod.m"
    MR_Word transform_hlds__intermod__Name_19;
#line 1242 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22;
#line 1244 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_20;
#line 1245 "intermod.m"
    MR_String transform_hlds__intermod__V_21_21;

#line 2235 "intermod.m"
    {
#line 2235 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__ModuleName_10);
    }
#line 1243 "intermod.m"
    {
#line 1243 "intermod.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__intermod__TypeDefn0_7, &transform_hlds__intermod__ImportStatus_18);
    }
#line 1244 "intermod.m"
    transform_hlds__intermod__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 0)));
#line 1244 "intermod.m"
    transform_hlds__intermod___Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 1)));
#line 1245 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Name_19)) == (MR_mktag((MR_Integer) 1)));
#line 1245 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1245 "intermod.m"
      {
#line 1245 "intermod.m"
        transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_19, (MR_Integer) 0)));
#line 1245 "intermod.m"
        transform_hlds__intermod__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_19, (MR_Integer) 1)));
#line 1245 "intermod.m"
        {
#line 1245 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_10, transform_hlds__intermod__V_22_22);
        }
#line 1242 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1246 "intermod.m"
          {
#line 1246 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_18);
          }
#line 1245 "intermod.m"
      }
#line 2239 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2237 "intermod.m"
      {
#line 2237 "intermod.m"
        MR_Word transform_hlds__intermod__SpecialPredList_27;
#line 2237 "intermod.m"
        MR_Word transform_hlds__intermod__SpecPredMap_28;
#line 2237 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_31;
#line 2237 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 2237 "intermod.m"
        MR_Word transform_hlds__intermod__Preds0_46;
#line 2237 "intermod.m"
        MR_Word transform_hlds__intermod__Preds_47;

#line 2237 "intermod.m"
        {
#line 2237 "intermod.m"
          hlds__hlds_data__set_type_defn_status_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), transform_hlds__intermod__TypeDefn0_7, transform_hlds__intermod__TypeDefn_8);
        }
#line 2247 "intermod.m"
        {
#line 2247 "intermod.m"
          hlds__special_pred__special_pred_list_1_p_0(&transform_hlds__intermod__SpecialPredList_27);
        }
#line 2248 "intermod.m"
        {
#line 2248 "intermod.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__SpecPredMap_28);
        }
#line 2249 "intermod.m"
        {
#line 2249 "intermod.m"
          transform_hlds__intermod__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2249 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[8]));
#line 2249 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 1) = ((MR_Box) (transform_hlds__intermod__adjust_type_status_2_5_p_0_1));
#line 2249 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2249 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 3) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 2249 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 4) = ((MR_Box) (transform_hlds__intermod__SpecPredMap_28));
#line 2249 "intermod.m"
        }
#line 2249 "intermod.m"
        {
#line 2249 "intermod.m"
          mercury__list__filter_map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__V_32_32, transform_hlds__intermod__SpecialPredList_27, &transform_hlds__intermod__PredIds_31);
        }
#line 2335 "intermod.m"
        {
#line 2335 "intermod.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__Preds0_46);
        }
#line 2336 "intermod.m"
        {
#line 2336 "intermod.m"
          transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_31, transform_hlds__intermod__Preds0_46, &transform_hlds__intermod__Preds_47);
        }
#line 2337 "intermod.m"
        {
#line 2337 "intermod.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_47, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12);
#line 2337 "intermod.m"
          return;
        }
#line 2237 "intermod.m"
      }
#line 2239 "intermod.m"
    else
#line 2240 "intermod.m"
      {
#line 2240 "intermod.m"
        *transform_hlds__intermod__TypeDefn_8 = transform_hlds__intermod__TypeDefn0_7;
#line 2240 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11;
#line 2240 "intermod.m"
      }
#line 2234 "intermod.m"
  }
#line 2230 "intermod.m"
}

#line 2293 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3(
#line 2293 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2293 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2293 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2293 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2293 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2293 "intermod.m"
{
#line 2293 "intermod.m"
  {
#line 2293 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2293 "intermod.m"
    MR_Word transform_hlds__intermod__conv7_HeadVar__2_2;
#line 2293 "intermod.m"
    MR_Word transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10;

#line 2293 "intermod.m"
    {
#line 2293 "intermod.m"
      transform_hlds__intermod__adjust_instance_status_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv7_HeadVar__2_2, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10);
    }
#line 2293 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv7_HeadVar__2_2));
#line 2293 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10));
#line 2293 "intermod.m"
  }
#line 2293 "intermod.m"
}

#line 2259 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2(
#line 2259 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2259 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2259 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2259 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2259 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2259 "intermod.m"
{
#line 2259 "intermod.m"
  {
#line 2259 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2259 "intermod.m"
    MR_Word transform_hlds__intermod__conv4_HeadVar__2_2;
#line 2259 "intermod.m"
    MR_Word transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11;

#line 2259 "intermod.m"
    {
#line 2259 "intermod.m"
      transform_hlds__intermod__adjust_class_status_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv4_HeadVar__2_2, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11);
    }
#line 2259 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv4_HeadVar__2_2));
#line 2259 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11));
#line 2259 "intermod.m"
  }
#line 2259 "intermod.m"
}

#line 2226 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1(
#line 2226 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2226 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2226 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2226 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3,
#line 2226 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_4,
#line 2226 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_5)
#line 2226 "intermod.m"
{
#line 2226 "intermod.m"
  {
#line 2226 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2226 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_TypeDefn_8;
#line 2226 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12;

#line 2226 "intermod.m"
    {
#line 2226 "intermod.m"
      transform_hlds__intermod__adjust_type_status_2_5_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv1_TypeDefn_8, ((MR_Word) transform_hlds__intermod__wrapper_arg_4), &transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12);
    }
#line 2226 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv1_TypeDefn_8));
#line 2226 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_5 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12));
#line 2226 "intermod.m"
  }
#line 2226 "intermod.m"
}

#line 2211 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(
#line 2211 "intermod.m"
  MR_Word transform_hlds__intermod__Info_4,
#line 2211 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8,
#line 2211 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9)
#line 2211 "intermod.m"
{
#line 2214 "intermod.m"
  {
#line 2214 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_13_55;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_14_56;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_19_61;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_13_73;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_14_74;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_19_79;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 2)));
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls_7;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__Preds0_28;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__Preds_29;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable0_34;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable_35;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__Classes0_48;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__ClassAL0_49;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__ClassAL_50;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__Classes_51;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__Instances0_66;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceAL0_67;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceAL_68;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_69;
#line 2214 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71;
#line 2158 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 0)));
#line 2158 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 1)));
#line 2158 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 3)));
#line 2158 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 4)));
#line 2158 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 5)));
#line 2158 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 6)));
#line 2158 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 7)));
#line 2158 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 8)));
#line 2226 "intermod.m"
    MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37;
#line 2259 "intermod.m"
    MR_Box transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53;
#line 2293 "intermod.m"
    MR_Box transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71;

#line 2216 "intermod.m"
    {
#line 2216 "intermod.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__PredDecls0_6, &transform_hlds__intermod__PredDecls_7);
    }
#line 2335 "intermod.m"
    {
#line 2335 "intermod.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__intermod__Preds0_28);
    }
#line 2336 "intermod.m"
    {
#line 2336 "intermod.m"
      transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredDecls_7, transform_hlds__intermod__Preds0_28, &transform_hlds__intermod__Preds_29);
    }
#line 2337 "intermod.m"
    {
#line 2337 "intermod.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_29, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10);
    }
#line 2225 "intermod.m"
    {
#line 2225 "intermod.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10, &transform_hlds__intermod__TypeTable0_34);
    }
#line 2226 "intermod.m"
    {
#line 2226 "intermod.m"
      hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[28], transform_hlds__intermod__TypeTable0_34, &transform_hlds__intermod__TypeTable_35, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10)), &transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37);
    }
#line 2226 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37 = ((MR_Word) transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37);
#line 2228 "intermod.m"
    {
#line 2228 "intermod.m"
      hlds__hlds_module__module_info_set_type_table_3_p_0(transform_hlds__intermod__TypeTable_35, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11);
    }
#line 2257 "intermod.m"
    {
#line 2257 "intermod.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__intermod__Classes0_48);
    }
#line 7258 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_13_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 7260 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_14_56 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 2258 "intermod.m"
    {
#line 2258 "intermod.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_55, transform_hlds__intermod__TypeCtorInfo_14_56, transform_hlds__intermod__Classes0_48, &transform_hlds__intermod__ClassAL0_49);
    }
#line 7267 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_19_61 = (MR_Word) &transform_hlds__intermod_scalar_common_2[5];
#line 2259 "intermod.m"
    {
#line 2259 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeInfo_19_61, transform_hlds__intermod__TypeInfo_19_61, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[29], transform_hlds__intermod__ClassAL0_49, &transform_hlds__intermod__ClassAL_50, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11)), &transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53);
    }
#line 2259 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53 = ((MR_Word) transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53);
#line 2260 "intermod.m"
    {
#line 2260 "intermod.m"
      mercury__map__from_sorted_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_55, transform_hlds__intermod__TypeCtorInfo_14_56, transform_hlds__intermod__ClassAL_50, &transform_hlds__intermod__Classes_51);
    }
#line 2261 "intermod.m"
    {
#line 2261 "intermod.m"
      hlds__hlds_module__module_info_set_class_table_3_p_0(transform_hlds__intermod__Classes_51, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12);
    }
#line 2291 "intermod.m"
    {
#line 2291 "intermod.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12, &transform_hlds__intermod__Instances0_66);
    }
#line 7291 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_13_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 7293 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_14_74 = (MR_Word) &transform_hlds__intermod_scalar_common_1[8];
#line 2292 "intermod.m"
    {
#line 2292 "intermod.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_73, transform_hlds__intermod__TypeInfo_14_74, transform_hlds__intermod__Instances0_66, &transform_hlds__intermod__InstanceAL0_67);
    }
#line 7300 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_19_79 = (MR_Word) &transform_hlds__intermod_scalar_common_2[6];
#line 2293 "intermod.m"
    {
#line 2293 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeInfo_19_79, transform_hlds__intermod__TypeInfo_19_79, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[30], transform_hlds__intermod__InstanceAL0_67, &transform_hlds__intermod__InstanceAL_68, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12)), &transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71);
    }
#line 2293 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71 = ((MR_Word) transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71);
#line 2295 "intermod.m"
    {
#line 2295 "intermod.m"
      mercury__map__from_sorted_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_73, transform_hlds__intermod__TypeInfo_14_74, transform_hlds__intermod__InstanceAL_68, &transform_hlds__intermod__Instances_69);
    }
#line 2296 "intermod.m"
    {
#line 2296 "intermod.m"
      hlds__hlds_module__module_info_set_instance_table_3_p_0(transform_hlds__intermod__Instances_69, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9);
#line 2296 "intermod.m"
      return;
    }
#line 2214 "intermod.m"
  }
#line 2211 "intermod.m"
}

#line 2153 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(
#line 2153 "intermod.m"
  MR_Word transform_hlds__intermod__TVarSet_4,
#line 2153 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2153 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2153 "intermod.m"
{
#line 2176 "intermod.m"
  {
#line 2176 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
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
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_4));
#line 2176 "intermod.m"
    }
#line 2176 "intermod.m"
  }
#line 2153 "intermod.m"
}

#line 2149 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_write_header_2_p_0(
#line 2149 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2149 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2149 "intermod.m"
{
#line 2174 "intermod.m"
  {
#line 2174 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));

#line 2174 "intermod.m"
    {
#line 2174 "intermod.m"
      MR_Word base;
#line 2174 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2174 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_5_5));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2174 "intermod.m"
    }
#line 2174 "intermod.m"
  }
#line 2149 "intermod.m"
}

#line 2147 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_module_info_3_p_0(
#line 2147 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_4,
#line 2147 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2147 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2147 "intermod.m"
{
#line 2172 "intermod.m"
  {
#line 2172 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2172 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));

#line 2172 "intermod.m"
    {
#line 2172 "intermod.m"
      MR_Word base;
#line 2172 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2172 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_4));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2172 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2172 "intermod.m"
    }
#line 2172 "intermod.m"
  }
#line 2147 "intermod.m"
}

#line 2143 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
#line 2143 "intermod.m"
  MR_Word transform_hlds__intermod__Types_4,
#line 2143 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2143 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2143 "intermod.m"
{
#line 2171 "intermod.m"
  {
#line 2171 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2171 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2171 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
#line 2171 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2171 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2171 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2171 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2171 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2171 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2171 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));

#line 2171 "intermod.m"
    {
#line 2171 "intermod.m"
      MR_Word base;
#line 2171 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2171 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2171 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2171 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2171 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2171 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2171 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__Types_4));
#line 2171 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_11_11));
#line 2171 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2171 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2171 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2171 "intermod.m"
    }
#line 2171 "intermod.m"
  }
#line 2143 "intermod.m"
}

#line 2136 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_preds_3_p_0(
#line 2136 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_4,
#line 2136 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2136 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2136 "intermod.m"
{
#line 2167 "intermod.m"
  {
#line 2167 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));

#line 2167 "intermod.m"
    {
#line 2167 "intermod.m"
      MR_Word base;
#line 2167 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2167 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2167 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2167 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__Procs_4));
#line 2167 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2167 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2167 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2167 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_11_11));
#line 2167 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2167 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2167 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2167 "intermod.m"
    }
#line 2167 "intermod.m"
  }
#line 2136 "intermod.m"
}

#line 2127 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_module_info_2_p_0(
#line 2127 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2127 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2127 "intermod.m"
{
#line 2161 "intermod.m"
  {
#line 2161 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 2161 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2161 "intermod.m"
    transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));
#line 2161 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2161 "intermod.m"
    transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2161 "intermod.m"
  }
#line 2127 "intermod.m"
}

#line 2120 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_preds_2_p_0(
#line 2120 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2120 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2120 "intermod.m"
{
#line 2157 "intermod.m"
  {
#line 2157 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2157 "intermod.m"
    MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2157 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5;
#line 2157 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6;
#line 2157 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7;
#line 2157 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8;
#line 2157 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 2157 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 2157 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 2157 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2157 "intermod.m"
    transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2157 "intermod.m"
    transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2157 "intermod.m"
    transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2157 "intermod.m"
    transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2157 "intermod.m"
    transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));
#line 2157 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2157 "intermod.m"
    transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2157 "intermod.m"
  }
#line 2120 "intermod.m"
}

#line 2038 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
#line 2038 "intermod.m"
  MR_Word transform_hlds__intermod__Args_6,
#line 2038 "intermod.m"
  MR_Word transform_hlds__intermod__Modes_7,
#line 2038 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26,
#line 2038 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_VarSet_27,
#line 2038 "intermod.m"
  MR_Word * transform_hlds__intermod__PragmaVars_9)
#line 2038 "intermod.m"
{
#line 2043 "intermod.m"
  {
#line 2043 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2043 "intermod.m"
    if ((transform_hlds__intermod__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2043 "intermod.m"
      if ((transform_hlds__intermod__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2058 "intermod.m"
        {
#line 2060 "intermod.m"
          *transform_hlds__intermod__PragmaVars_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2058 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_VarSet_27 = transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26;
#line 2058 "intermod.m"
        }
#line 2043 "intermod.m"
      else
#line 2062 "intermod.m"
        {
#line 2064 "intermod.m"
          {
#line 2064 "intermod.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
#line 2064 "intermod.m"
            return;
          }
#line 2062 "intermod.m"
        }
#line 2043 "intermod.m"
    else
#line 2043 "intermod.m"
      {
#line 2043 "intermod.m"
        MR_Word transform_hlds__intermod__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Args_6, (MR_Integer) 1)));
#line 2043 "intermod.m"
        MR_Word transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Args_6, (MR_Integer) 0)));

#line 2043 "intermod.m"
        if ((transform_hlds__intermod__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2066 "intermod.m"
          {
#line 2068 "intermod.m"
            {
#line 2068 "intermod.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
#line 2068 "intermod.m"
              return;
            }
#line 2066 "intermod.m"
          }
#line 2043 "intermod.m"
        else
#line 2043 "intermod.m"
          {
#line 2043 "intermod.m"
            MR_Word transform_hlds__intermod__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Modes_7, (MR_Integer) 0)));
#line 2043 "intermod.m"
            MR_Word transform_hlds__intermod__ModesTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Modes_7, (MR_Integer) 1)));
#line 2043 "intermod.m"
            MR_Word transform_hlds__intermod__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 0)));
#line 2043 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeNameAndMode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 1)));
#line 2043 "intermod.m"
            MR_String transform_hlds__intermod__Name_18;
#line 2043 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaVar_20;
#line 2043 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaVarsTail_21;
#line 2043 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36;
#line 2045 "intermod.m"
            MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 2)));
#line 2045 "intermod.m"
            MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 3)));

#line 2049 "intermod.m"
            if ((transform_hlds__intermod__MaybeNameAndMode_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2047 "intermod.m"
              transform_hlds__intermod__Name_18 = (MR_String) "_";
#line 2049 "intermod.m"
            else
#line 2050 "intermod.m"
              {
#line 2050 "intermod.m"
                MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeNameAndMode_15, (MR_Integer) 0)));
#line 2050 "intermod.m"
                MR_Word transform_hlds__intermod___Mode2_19;

#line 2050 "intermod.m"
                transform_hlds__intermod__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, (MR_Integer) 0)));
#line 2050 "intermod.m"
                transform_hlds__intermod___Mode2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, (MR_Integer) 1)));
#line 2050 "intermod.m"
              }
#line 2052 "intermod.m"
            {
#line 2052 "intermod.m"
              transform_hlds__intermod__PragmaVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2052 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 0) = ((MR_Box) (transform_hlds__intermod__Var_14));
#line 2052 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 1) = ((MR_Box) (transform_hlds__intermod__Name_18));
#line 2052 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 2) = ((MR_Box) (transform_hlds__intermod__Mode_12));
#line 2052 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2052 "intermod.m"
            }
#line 2053 "intermod.m"
            {
#line 2053 "intermod.m"
              mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__intermod__Var_14, transform_hlds__intermod__Name_18, transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26, &transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36);
            }
#line 2054 "intermod.m"
            {
#line 2054 "intermod.m"
              transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(transform_hlds__intermod__V_39_39, transform_hlds__intermod__ModesTail_13, transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36, transform_hlds__intermod__STATE_VARIABLE_VarSet_27, &transform_hlds__intermod__PragmaVarsTail_21);
            }
#line 2056 "intermod.m"
            {
#line 2056 "intermod.m"
              MR_Word base;
#line 2056 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2056 "intermod.m"
              *transform_hlds__intermod__PragmaVars_9 = base;
#line 2056 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PragmaVar_20));
#line 2056 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PragmaVarsTail_21));
#line 2056 "intermod.m"
            }
#line 2043 "intermod.m"
          }
#line 2043 "intermod.m"
      }
#line 2043 "intermod.m"
  }
#line 2038 "intermod.m"
}

#line 1969 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(
#line 1969 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_1,
#line 1969 "intermod.m"
  MR_Integer transform_hlds__intermod__Arity_2,
#line 1969 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1969 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_4)
#line 1969 "intermod.m"
{
#line 1972 "intermod.m"
  while (MR_TRUE)
#line 1972 "intermod.m"
    {
#line 1972 "intermod.m"
      /* tailcall optimized into a loop */
#line 1972 "intermod.m"
      {
#line 1972 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1972 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1972 "intermod.m"
          {
#line 1972 "intermod.m"
          }
#line 1972 "intermod.m"
        else
#line 1974 "intermod.m"
          {
#line 1974 "intermod.m"
            MR_Word transform_hlds__intermod__Marker_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1974 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));

#line 7950 "transform_hlds.intermod.c"
#line 7951 "transform_hlds.intermod.c"
            switch (transform_hlds__intermod__Marker_15) {
#line 7953 "transform_hlds.intermod.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 7955 "transform_hlds.intermod.c"
              case (MR_Integer) 1:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 7961 "transform_hlds.intermod.c"
                break;
#line 7963 "transform_hlds.intermod.c"
              case (MR_Integer) 20:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 7969 "transform_hlds.intermod.c"
                break;
#line 7971 "transform_hlds.intermod.c"
              case (MR_Integer) 19:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 7977 "transform_hlds.intermod.c"
                break;
#line 7979 "transform_hlds.intermod.c"
              case (MR_Integer) 10:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 7985 "transform_hlds.intermod.c"
                break;
#line 7987 "transform_hlds.intermod.c"
              case (MR_Integer) 9:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 7993 "transform_hlds.intermod.c"
                break;
#line 7995 "transform_hlds.intermod.c"
              case (MR_Integer) 18:
#line 7997 "transform_hlds.intermod.c"
                {
#line 7999 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_20;

#line 1978 "intermod.m"
                  {
#line 1978 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_20);
                  }
#line 1979 "intermod.m"
                  {
#line 1979 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8012 "transform_hlds.intermod.c"
                }
#line 8014 "transform_hlds.intermod.c"
                break;
#line 8016 "transform_hlds.intermod.c"
              case (MR_Integer) 24:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8022 "transform_hlds.intermod.c"
                break;
#line 8024 "transform_hlds.intermod.c"
              case (MR_Integer) 23:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8030 "transform_hlds.intermod.c"
                break;
#line 8032 "transform_hlds.intermod.c"
              case (MR_Integer) 8:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8038 "transform_hlds.intermod.c"
                break;
#line 8040 "transform_hlds.intermod.c"
              case (MR_Integer) 3:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8046 "transform_hlds.intermod.c"
                break;
#line 8048 "transform_hlds.intermod.c"
              case (MR_Integer) 2:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8054 "transform_hlds.intermod.c"
                break;
#line 8056 "transform_hlds.intermod.c"
              case (MR_Integer) 12:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8062 "transform_hlds.intermod.c"
                break;
#line 8064 "transform_hlds.intermod.c"
              case (MR_Integer) 13:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8070 "transform_hlds.intermod.c"
                break;
#line 8072 "transform_hlds.intermod.c"
              case (MR_Integer) 21:
#line 8074 "transform_hlds.intermod.c"
                {
#line 8076 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_52;

#line 1978 "intermod.m"
                  {
#line 1978 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_52);
                  }
#line 1979 "intermod.m"
                  {
#line 1979 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_52, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8089 "transform_hlds.intermod.c"
                }
#line 8091 "transform_hlds.intermod.c"
                break;
#line 8093 "transform_hlds.intermod.c"
              case (MR_Integer) 22:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8099 "transform_hlds.intermod.c"
                break;
#line 8101 "transform_hlds.intermod.c"
              case (MR_Integer) 11:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8107 "transform_hlds.intermod.c"
                break;
#line 8109 "transform_hlds.intermod.c"
              case (MR_Integer) 5:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8115 "transform_hlds.intermod.c"
                break;
#line 8117 "transform_hlds.intermod.c"
              case (MR_Integer) 4:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8123 "transform_hlds.intermod.c"
                break;
#line 8125 "transform_hlds.intermod.c"
              case (MR_Integer) 16:
#line 8127 "transform_hlds.intermod.c"
                {
#line 8129 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_64;

#line 1978 "intermod.m"
                  {
#line 1978 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_64);
                  }
#line 1979 "intermod.m"
                  {
#line 1979 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8142 "transform_hlds.intermod.c"
                }
#line 8144 "transform_hlds.intermod.c"
                break;
#line 8146 "transform_hlds.intermod.c"
              case (MR_Integer) 14:
#line 8148 "transform_hlds.intermod.c"
                {
#line 8150 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_68;

#line 1978 "intermod.m"
                  {
#line 1978 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_68);
                  }
#line 1979 "intermod.m"
                  {
#line 1979 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8163 "transform_hlds.intermod.c"
                }
#line 8165 "transform_hlds.intermod.c"
                break;
#line 8167 "transform_hlds.intermod.c"
              case (MR_Integer) 15:
#line 8169 "transform_hlds.intermod.c"
                {
#line 8171 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_72;

#line 1978 "intermod.m"
                  {
#line 1978 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_72);
                  }
#line 1979 "intermod.m"
                  {
#line 1979 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8184 "transform_hlds.intermod.c"
                }
#line 8186 "transform_hlds.intermod.c"
                break;
#line 8188 "transform_hlds.intermod.c"
              case (MR_Integer) 0:
#line 1981 "intermod.m"
                {
#line 1981 "intermod.m"
                }
#line 8194 "transform_hlds.intermod.c"
                break;
#line 8196 "transform_hlds.intermod.c"
              case (MR_Integer) 17:
#line 8198 "transform_hlds.intermod.c"
                {
#line 8200 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_78;

#line 1978 "intermod.m"
                  {
#line 1978 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_78);
                  }
#line 1979 "intermod.m"
                  {
#line 1979 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8213 "transform_hlds.intermod.c"
                }
#line 8215 "transform_hlds.intermod.c"
                break;
#line 8217 "transform_hlds.intermod.c"
              case (MR_Integer) 6:
#line 8219 "transform_hlds.intermod.c"
                {
#line 8221 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_82;

#line 1978 "intermod.m"
                  {
#line 1978 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_82);
                  }
#line 1979 "intermod.m"
                  {
#line 1979 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8234 "transform_hlds.intermod.c"
                }
#line 8236 "transform_hlds.intermod.c"
                break;
#line 8238 "transform_hlds.intermod.c"
              case (MR_Integer) 7:
#line 8240 "transform_hlds.intermod.c"
                {
#line 8242 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_86;

#line 1978 "intermod.m"
                  {
#line 1978 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_86);
                  }
#line 1979 "intermod.m"
                  {
#line 1979 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8255 "transform_hlds.intermod.c"
                }
#line 8257 "transform_hlds.intermod.c"
                break;
#line 8259 "transform_hlds.intermod.c"
            }
#line 1983 "intermod.m"
            /* direct tailcall eliminated */
#line 1983 "intermod.m"
            {
#line 1983 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__Markers_16;

#line 1983 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1983 "intermod.m"
            }
#line 1983 "intermod.m"
            continue;
#line 1974 "intermod.m"
          }
#line 1972 "intermod.m"
      }
#line 1972 "intermod.m"
      break;
#line 1972 "intermod.m"
    }
#line 1969 "intermod.m"
}

#line 1908 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
#line 1908 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 1908 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_2,
#line 1908 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1908 "intermod.m"
  MR_Word * transform_hlds__intermod__Goals_4,
#line 1908 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5,
#line 1908 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6)
#line 1908 "intermod.m"
{
#line 1914 "intermod.m"
  while (MR_TRUE)
#line 1914 "intermod.m"
    {
#line 1914 "intermod.m"
      /* tailcall optimized into a loop */
#line 1914 "intermod.m"
      {
#line 1914 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1914 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1914 "intermod.m"
          {
#line 1915 "intermod.m"
            {
#line 1915 "intermod.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__Goals_4);
            }
#line 1914 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5;
#line 1914 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1914 "intermod.m"
          }
#line 1914 "intermod.m"
        else
#line 1917 "intermod.m"
          {
#line 1917 "intermod.m"
            MR_Word transform_hlds__intermod__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 1917 "intermod.m"
            MR_Word transform_hlds__intermod__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 1917 "intermod.m"
            MR_Word transform_hlds__intermod__RevGoals1_39;
#line 1917 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52;
#line 1951 "intermod.m"
            MR_Word transform_hlds__intermod__LHSVar_19;
#line 1951 "intermod.m"
            MR_Word transform_hlds__intermod__RHSTerm_27;
#line 1919 "intermod.m"
            MR_Word transform_hlds__intermod__TypeInfo_55_55;
#line 1919 "intermod.m"
            MR_Word transform_hlds__intermod__RHS_20;
#line 1919 "intermod.m"
            MR_Word transform_hlds__intermod__Context_25;
#line 1919 "intermod.m"
            MR_Word transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_13, (MR_Integer) 0)));
#line 1919 "intermod.m"
            MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_13, (MR_Integer) 1)));
#line 1919 "intermod.m"
            MR_Word transform_hlds__intermod__V_21_21;
#line 1919 "intermod.m"
            MR_Word transform_hlds__intermod__V_22_22;
#line 1919 "intermod.m"
            MR_Word transform_hlds__intermod__V_23_23;

#line 1919 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 1919 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1919 "intermod.m"
              {
#line 1919 "intermod.m"
                transform_hlds__intermod__LHSVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 0)));
#line 1919 "intermod.m"
                transform_hlds__intermod__RHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 1)));
#line 1919 "intermod.m"
                transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 2)));
#line 1919 "intermod.m"
                transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 3)));
#line 1919 "intermod.m"
                transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 4)));
#line 8377 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeInfo_55_55 = (MR_Word) &transform_hlds__intermod_scalar_common_1[13];
#line 1920 "intermod.m"
                {
#line 1920 "intermod.m"
                  transform_hlds__intermod__succeeded = mercury__list__member_2_p_0(transform_hlds__intermod__TypeInfo_55_55, ((MR_Box) (transform_hlds__intermod__LHSVar_19)), transform_hlds__intermod__HeadVars_2);
                }
#line 1919 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1919 "intermod.m"
                  {
#line 1921 "intermod.m"
                    {
#line 1921 "intermod.m"
                      mercury__term__context_init_1_p_0(&transform_hlds__intermod__Context_25);
                    }
#line 1925 "intermod.m"
                    if (((MR_tag((MR_Word) transform_hlds__intermod__RHS_20)) == (MR_mktag((MR_Integer) 1))))
#line 1926 "intermod.m"
                      {
#line 1926 "intermod.m"
                        MR_Word transform_hlds__intermod__ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 0)));
#line 1926 "intermod.m"
                        MR_Word transform_hlds__intermod__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 2)));
#line 1926 "intermod.m"
                        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 1)));

#line 1930 "intermod.m"
#line 1930 "intermod.m"
                        switch (MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) {
#line 1930 "intermod.m"
                          default:
#line 1930 "intermod.m"
                            transform_hlds__intermod__succeeded = MR_FALSE;
#line 1930 "intermod.m"
                            break;
#line 1930 "intermod.m"
                          case (MR_Integer) 3:
#line 1930 "intermod.m"
#line 1930 "intermod.m"
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) {
#line 1930 "intermod.m"
                              default:
#line 1930 "intermod.m"
                                transform_hlds__intermod__succeeded = MR_FALSE;
#line 1930 "intermod.m"
                                break;
#line 1930 "intermod.m"
                              case (MR_Integer) 2:
#line 1941 "intermod.m"
                                {
#line 1941 "intermod.m"
                                  MR_Word transform_hlds__intermod__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1941 "intermod.m"
                                  MR_Word transform_hlds__intermod__SymName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1941 "intermod.m"
                                  MR_Word transform_hlds__intermod__ArgTerms_38;
#line 1941 "intermod.m"
                                  MR_Integer transform_hlds__intermod__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 2)));
#line 1941 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 3)));

#line 1942 "intermod.m"
                                  {
#line 1942 "intermod.m"
                                    mercury__term__var_list_to_term_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_56_56, transform_hlds__intermod__Args_30, &transform_hlds__intermod__ArgTerms_38);
                                  }
#line 1943 "intermod.m"
                                  {
#line 1943 "intermod.m"
                                    parse_tree__prog_util__construct_qualified_term_3_p_0(transform_hlds__intermod__TypeCtorInfo_56_56, transform_hlds__intermod__SymName_35, transform_hlds__intermod__ArgTerms_38, &transform_hlds__intermod__RHSTerm_27);
                                  }
#line 1941 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_TRUE;
#line 1941 "intermod.m"
                                }
#line 1930 "intermod.m"
                                break;
#line 1930 "intermod.m"
                              case (MR_Integer) 5:
#line 1928 "intermod.m"
                                {
#line 1928 "intermod.m"
                                  MR_Integer transform_hlds__intermod__Int_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1928 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_50_50;

#line 1929 "intermod.m"
                                  {
#line 1929 "intermod.m"
                                    transform_hlds__intermod__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "intermod.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_50_50, 0) = ((MR_Box) (transform_hlds__intermod__Int_31));
#line 1929 "intermod.m"
                                  }
#line 1929 "intermod.m"
                                  {
#line 1929 "intermod.m"
                                    transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1929 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_50_50));
#line 1929 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1929 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1929 "intermod.m"
                                  }
#line 1928 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_TRUE;
#line 1928 "intermod.m"
                                }
#line 1930 "intermod.m"
                                break;
#line 1930 "intermod.m"
                              case (MR_Integer) 6:
#line 1931 "intermod.m"
                                {
#line 1931 "intermod.m"
                                  MR_Float transform_hlds__intermod__Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1931 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_48_48;

#line 1932 "intermod.m"
                                  {
#line 1932 "intermod.m"
                                    transform_hlds__intermod__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1932 "intermod.m"
                                    MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1932 "intermod.m"
                                    MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_48_48, 1) = MR_box_float(transform_hlds__intermod__Float_32);
#line 1932 "intermod.m"
                                  }
#line 1932 "intermod.m"
                                  {
#line 1932 "intermod.m"
                                    transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1932 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_48_48));
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
#line 1930 "intermod.m"
                                break;
#line 1930 "intermod.m"
                              case (MR_Integer) 7:
#line 1934 "intermod.m"
                                {
#line 1934 "intermod.m"
                                  MR_Char transform_hlds__intermod__Char_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1934 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_45_45;
#line 1934 "intermod.m"
                                  MR_String transform_hlds__intermod__V_46_46;

#line 1935 "intermod.m"
                                  {
#line 1935 "intermod.m"
                                    transform_hlds__intermod__V_46_46 = mercury__string__from_char_1_f_0(transform_hlds__intermod__Char_33);
                                  }
#line 1935 "intermod.m"
                                  {
#line 1935 "intermod.m"
                                    transform_hlds__intermod__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1935 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_45_45, 0) = ((MR_Box) (transform_hlds__intermod__V_46_46));
#line 1935 "intermod.m"
                                  }
#line 1935 "intermod.m"
                                  {
#line 1935 "intermod.m"
                                    transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1935 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_45_45));
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
#line 1930 "intermod.m"
                                break;
#line 1930 "intermod.m"
                              case (MR_Integer) 8:
#line 1938 "intermod.m"
                                {
#line 1938 "intermod.m"
                                  MR_String transform_hlds__intermod__String_34 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1938 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_43_43;

#line 1939 "intermod.m"
                                  {
#line 1939 "intermod.m"
                                    transform_hlds__intermod__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "intermod.m"
                                    MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1939 "intermod.m"
                                    MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_43_43, 1) = ((MR_Box) (transform_hlds__intermod__String_34));
#line 1939 "intermod.m"
                                  }
#line 1939 "intermod.m"
                                  {
#line 1939 "intermod.m"
                                    transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1939 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_43_43));
#line 1939 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1939 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1939 "intermod.m"
                                  }
#line 1938 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_TRUE;
#line 1938 "intermod.m"
                                }
#line 1930 "intermod.m"
                                break;
#line 1930 "intermod.m"
                            }
#line 1930 "intermod.m"
                            break;
#line 1930 "intermod.m"
                        }
#line 1926 "intermod.m"
                      }
#line 1925 "intermod.m"
                    else
#line 1925 "intermod.m"
                    if (((MR_tag((MR_Word) transform_hlds__intermod__RHS_20)) == (MR_mktag((MR_Integer) 0))))
#line 1923 "intermod.m"
                      {
#line 1923 "intermod.m"
                        MR_Word transform_hlds__intermod__RHSVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHS_20, (MR_Integer) 0)));

#line 1924 "intermod.m"
                        {
#line 1924 "intermod.m"
                          transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1924 "intermod.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__RHSVar_26));
#line 1924 "intermod.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1924 "intermod.m"
                        }
#line 1923 "intermod.m"
                        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1923 "intermod.m"
                      }
#line 1925 "intermod.m"
                    else
#line 1925 "intermod.m"
                      transform_hlds__intermod__succeeded = MR_FALSE;
#line 1919 "intermod.m"
                  }
#line 1919 "intermod.m"
              }
#line 1951 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1949 "intermod.m"
              {
#line 1949 "intermod.m"
                {
#line 1949 "intermod.m"
                  transform_hlds__intermod__succeeded = mercury__map__insert_4_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[13], (MR_Word) &transform_hlds__intermod_scalar_common_1[14], ((MR_Box) (transform_hlds__intermod__LHSVar_19)), ((MR_Box) (transform_hlds__intermod__RHSTerm_27)), transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5, &transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52);
                }
#line 1949 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1949 "intermod.m"
                  {
#line 1950 "intermod.m"
                    transform_hlds__intermod__RevGoals1_39 = transform_hlds__intermod__HeadVar__3_3;
#line 1950 "intermod.m"
                    transform_hlds__intermod__succeeded = MR_TRUE;
#line 1949 "intermod.m"
                  }
#line 1949 "intermod.m"
              }
#line 1951 "intermod.m"
            else
#line 1952 "intermod.m"
              {
#line 1952 "intermod.m"
                {
#line 1952 "intermod.m"
                  transform_hlds__intermod__RevGoals1_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__RevGoals1_39, 0) = ((MR_Box) (transform_hlds__intermod__Goal_13));
#line 1952 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__RevGoals1_39, 1) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_3));
#line 1952 "intermod.m"
                }
#line 1952 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5;
#line 1952 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 1952 "intermod.m"
              }
#line 1917 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1954 "intermod.m"
              {
#line 1954 "intermod.m"
                /* direct tailcall eliminated */
#line 1954 "intermod.m"
                {
#line 1954 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__Goals0_14;
#line 1954 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__RevGoals1_39;
#line 1954 "intermod.m"
                  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0__tmp_copy_5 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52;

#line 1954 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0__tmp_copy_5;
#line 1954 "intermod.m"
                  transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1954 "intermod.m"
                  transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 1954 "intermod.m"
                }
#line 1954 "intermod.m"
                continue;
#line 1954 "intermod.m"
              }
#line 1917 "intermod.m"
          }
#line 1914 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 1914 "intermod.m"
      }
#line 1914 "intermod.m"
      break;
#line 1914 "intermod.m"
    }
#line 1908 "intermod.m"
}

#line 1892 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
#line 1892 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1892 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1892 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 1892 "intermod.m"
{
#line 1892 "intermod.m"
  {
#line 1892 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1892 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__4_24;

#line 1892 "intermod.m"
    {
#line 1892 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1896__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__4_24);
    }
#line 1892 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__4_24));
#line 1892 "intermod.m"
  }
#line 1892 "intermod.m"
}

#line 1880 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
#line 1880 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_5,
#line 1880 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1880 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadTerms_7,
#line 1880 "intermod.m"
  MR_Word * transform_hlds__intermod__Clause_8)
#line 1880 "intermod.m"
{
#line 1883 "intermod.m"
  {
#line 1883 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1883 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_36_36;
#line 1883 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_37_37;
#line 1883 "intermod.m"
    MR_Word transform_hlds__intermod__Goal0_9;
#line 1883 "intermod.m"
    MR_Word transform_hlds__intermod__GoalInfo0_11;
#line 1883 "intermod.m"
    MR_Word transform_hlds__intermod__Goals0_12;
#line 1883 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVarMap0_13;
#line 1885 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 1903 "intermod.m"
    MR_Word transform_hlds__intermod__Goals_14;
#line 1903 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVarMap_15;

#line 1884 "intermod.m"
    {
#line 1884 "intermod.m"
      transform_hlds__intermod__Goal0_9 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__Clause0_6);
    }
#line 1885 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 0)));
#line 1885 "intermod.m"
    transform_hlds__intermod__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 1)));
#line 1886 "intermod.m"
    {
#line 1886 "intermod.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__intermod__Goal0_9, &transform_hlds__intermod__Goals0_12);
    }
#line 8806 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_36_36 = (MR_Word) &transform_hlds__intermod_scalar_common_1[13];
#line 8808 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_37_37 = (MR_Word) &transform_hlds__intermod_scalar_common_1[14];
#line 1887 "intermod.m"
    {
#line 1887 "intermod.m"
      mercury__map__init_1_p_0(transform_hlds__intermod__TypeInfo_36_36, transform_hlds__intermod__TypeInfo_37_37, &transform_hlds__intermod__HeadVarMap0_13);
    }
#line 1889 "intermod.m"
    {
#line 1889 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(transform_hlds__intermod__Goals0_12, transform_hlds__intermod__HeadVars_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__Goals_14, transform_hlds__intermod__HeadVarMap0_13, &transform_hlds__intermod__HeadVarMap_15);
    }
#line 1903 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1900 "intermod.m"
      {
#line 1900 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_20;
#line 1900 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;
#line 1902 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 1902 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;
#line 1902 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34;
#line 1902 "intermod.m"
        MR_Word transform_hlds__intermod__V_35_35;
#line 1902 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;

#line 1892 "intermod.m"
        {
#line 1892 "intermod.m"
          transform_hlds__intermod__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1892 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[5]));
#line 1892 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 1) = ((MR_Box) (transform_hlds__intermod__strip_headvar_unifications_4_p_0_1));
#line 1892 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1892 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 3) = ((MR_Box) (transform_hlds__intermod__Clause0_6));
#line 1892 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 4) = ((MR_Box) (transform_hlds__intermod__HeadVarMap_15));
#line 1892 "intermod.m"
        }
#line 1892 "intermod.m"
        {
#line 1892 "intermod.m"
          mercury__list__map_3_p_0(transform_hlds__intermod__TypeInfo_36_36, transform_hlds__intermod__TypeInfo_37_37, transform_hlds__intermod__V_22_22, transform_hlds__intermod__HeadVars_5, transform_hlds__intermod__HeadTerms_7);
        }
#line 1901 "intermod.m"
        {
#line 1901 "intermod.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__intermod__Goals_14, transform_hlds__intermod__GoalInfo0_11, &transform_hlds__intermod__Goal_20);
        }
#line 1902 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 0)));
#line 1902 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 1)));
#line 1902 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 2)));
#line 1902 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 3)));
#line 1902 "intermod.m"
        transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 4)));
#line 1902 "intermod.m"
        {
#line 1902 "intermod.m"
          MR_Word base;
#line 1902 "intermod.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1902 "intermod.m"
          *transform_hlds__intermod__Clause_8 = base;
#line 1902 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_31_31));
#line 1902 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__Goal_20));
#line 1902 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 1902 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_34_34));
#line 1902 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_35_35));
#line 1902 "intermod.m"
        }
#line 1900 "intermod.m"
      }
#line 1903 "intermod.m"
    else
#line 1904 "intermod.m"
      {
#line 1904 "intermod.m"
        {
#line 1904 "intermod.m"
          mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__intermod__HeadVars_5, transform_hlds__intermod__HeadTerms_7);
        }
#line 1905 "intermod.m"
        *transform_hlds__intermod__Clause_8 = transform_hlds__intermod__Clause0_6;
#line 1904 "intermod.m"
      }
#line 1883 "intermod.m"
  }
#line 1880 "intermod.m"
}

#line 1843 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_11,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_12,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__PragmaImpl_13,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__Attributes_14,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__Args_15,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__ProgVarset0_16,
#line 1843 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_17,
#line 1843 "intermod.m"
  MR_Integer transform_hlds__intermod__ProcId_18)
#line 1843 "intermod.m"
{
#line 1849 "intermod.m"
  {
#line 1849 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1849 "intermod.m"
    MR_Word transform_hlds__intermod__ProcInfo_20;
#line 1849 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeArgModes_21;
#line 1850 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_ProcInfo_20;

#line 1850 "intermod.m"
    {
#line 1850 "intermod.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__intermod__Procs_11, transform_hlds__intermod__ProcId_18, &transform_hlds__intermod__conv0_ProcInfo_20);
    }
#line 1850 "intermod.m"
    transform_hlds__intermod__ProcInfo_20 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_20);
#line 1851 "intermod.m"
    {
#line 1851 "intermod.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_20, &transform_hlds__intermod__MaybeArgModes_21);
    }
#line 1860 "intermod.m"
    if ((transform_hlds__intermod__MaybeArgModes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1861 "intermod.m"
      {
#line 1862 "intermod.m"
        {
#line 1862 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_foreign_clause\'/10", (MR_String) "no mode declaration");
#line 1862 "intermod.m"
          return;
        }
#line 1861 "intermod.m"
      }
#line 1860 "intermod.m"
    else
#line 1853 "intermod.m"
      {
#line 1853 "intermod.m"
        MR_Word transform_hlds__intermod__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeArgModes_21, (MR_Integer) 0)));
#line 1853 "intermod.m"
        MR_Word transform_hlds__intermod__ProgVarset_23;
#line 1853 "intermod.m"
        MR_Word transform_hlds__intermod__PragmaVars_24;
#line 1853 "intermod.m"
        MR_Word transform_hlds__intermod__InstVarset_25;
#line 1853 "intermod.m"
        MR_Word transform_hlds__intermod__FPInfo_26;

#line 1854 "intermod.m"
        {
#line 1854 "intermod.m"
          transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(transform_hlds__intermod__Args_15, transform_hlds__intermod__ArgModes_22, transform_hlds__intermod__ProgVarset0_16, &transform_hlds__intermod__ProgVarset_23, &transform_hlds__intermod__PragmaVars_24);
        }
#line 1856 "intermod.m"
        {
#line 1856 "intermod.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__intermod__ProcInfo_20, &transform_hlds__intermod__InstVarset_25);
        }
#line 1857 "intermod.m"
        {
#line 1857 "intermod.m"
          transform_hlds__intermod__FPInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1857 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 0) = ((MR_Box) (transform_hlds__intermod__Attributes_14));
#line 1857 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 1) = ((MR_Box) (transform_hlds__intermod__SymName_17));
#line 1857 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 2) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_12));
#line 1857 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 3) = ((MR_Box) (transform_hlds__intermod__PragmaVars_24));
#line 1857 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 4) = ((MR_Box) (transform_hlds__intermod__ProgVarset_23));
#line 1857 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 5) = ((MR_Box) (transform_hlds__intermod__InstVarset_25));
#line 1857 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 6) = ((MR_Box) (transform_hlds__intermod__PragmaImpl_13));
#line 1857 "intermod.m"
        }
#line 1859 "intermod.m"
        {
#line 1859 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_pragma_foreign_proc_4_p_0((MR_Integer) 0, transform_hlds__intermod__FPInfo_26);
#line 1859 "intermod.m"
          return;
        }
#line 1853 "intermod.m"
      }
#line 1849 "intermod.m"
  }
#line 1843 "intermod.m"
}

#line 1834 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
#line 1834 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1834 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1834 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1834 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1834 "intermod.m"
{
#line 1834 "intermod.m"
  {
#line 1834 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1834 "intermod.m"
    {
#line 1834 "intermod.m"
      transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 9))), ((MR_Integer) transform_hlds__intermod__wrapper_arg_1));
#line 1834 "intermod.m"
      return;
    }
#line 1834 "intermod.m"
  }
#line 1834 "intermod.m"
}

#line 1814 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
#line 1814 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1814 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 1814 "intermod.m"
{
#line 1814 "intermod.m"
  {
#line 1814 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1814 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1814 "intermod.m"
    {
#line 1814 "intermod.m"
      return transform_hlds__intermod__succeeded = transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1814__1_1_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 1814 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 1814 "intermod.m"
  }
#line 1814 "intermod.m"
}

#line 1788 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_12,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_13,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_14,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__VarSet_15,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_16,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_17,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_18,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__MaybeVarTypes_19,
#line 1788 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_20)
#line 1788 "intermod.m"
{
#line 1793 "intermod.m"
  {
#line 1793 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1793 "intermod.m"
    MR_Word transform_hlds__intermod__ApplicableProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 0)));
#line 1793 "intermod.m"
    MR_Word transform_hlds__intermod__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 1)));
#line 1793 "intermod.m"
    MR_Word transform_hlds__intermod__ImplLang_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 2)));
#line 1794 "intermod.m"
    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 3)));
#line 1794 "intermod.m"
    MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 4)));

#line 1806 "intermod.m"
    if ((transform_hlds__intermod__ImplLang_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1796 "intermod.m"
      {
#line 1796 "intermod.m"
        MR_Word transform_hlds__intermod__ClauseHeadVars_27;
#line 1796 "intermod.m"
        MR_Word transform_hlds__intermod__Clause_28;

#line 1797 "intermod.m"
        {
#line 1797 "intermod.m"
          transform_hlds__intermod__strip_headvar_unifications_4_p_0(transform_hlds__intermod__HeadVars_16, transform_hlds__intermod__Clause0_20, &transform_hlds__intermod__ClauseHeadVars_27, &transform_hlds__intermod__Clause_28);
        }
#line 1803 "intermod.m"
        {
#line 1803 "intermod.m"
          hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(transform_hlds__intermod__OutInfo_12, (MR_Integer) 0, (MR_Integer) 1, transform_hlds__intermod__ModuleInfo_13, transform_hlds__intermod__PredId_14, transform_hlds__intermod__VarSet_15, (MR_Integer) 1, transform_hlds__intermod__ClauseHeadVars_27, transform_hlds__intermod__PredOrFunc_17, transform_hlds__intermod__Clause_28, (MR_Integer) 1, transform_hlds__intermod__MaybeVarTypes_19);
#line 1803 "intermod.m"
          return;
        }
#line 1796 "intermod.m"
      }
#line 1806 "intermod.m"
    else
#line 1807 "intermod.m"
      {
#line 1807 "intermod.m"
        MR_Word transform_hlds__intermod__PredInfo_32;
#line 1807 "intermod.m"
        MR_Word transform_hlds__intermod__Procs_33;
#line 1838 "intermod.m"
        MR_Word transform_hlds__intermod__Attributes_49;
#line 1838 "intermod.m"
        MR_Word transform_hlds__intermod__Args_52;
#line 1838 "intermod.m"
        MR_Word transform_hlds__intermod__PragmaCode_55;
#line 1822 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 1813 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;

#line 1808 "intermod.m"
        {
#line 1808 "intermod.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_13, transform_hlds__intermod__PredId_14, &transform_hlds__intermod__PredInfo_32);
        }
#line 1809 "intermod.m"
        {
#line 1809 "intermod.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__intermod__PredInfo_32, &transform_hlds__intermod__Procs_33);
        }
#line 1813 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_23, (MR_Integer) 0)));
#line 1813 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_23, (MR_Integer) 1)));
#line 1822 "intermod.m"
        if (((((MR_tag((MR_Word) transform_hlds__intermod__V_93_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1824 "intermod.m"
          {
#line 1824 "intermod.m"
            MR_Word transform_hlds__intermod__V_58_58;
#line 1824 "intermod.m"
            MR_Integer transform_hlds__intermod__V_59_59;
#line 1824 "intermod.m"
            MR_Word transform_hlds__intermod___ExtraArgs_81;
#line 1824 "intermod.m"
            MR_Word transform_hlds__intermod___MaybeTraceRuntimeCond_82;

#line 1824 "intermod.m"
            transform_hlds__intermod__Attributes_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 1)));
#line 1824 "intermod.m"
            transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 2)));
#line 1824 "intermod.m"
            transform_hlds__intermod__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 3)));
#line 1824 "intermod.m"
            transform_hlds__intermod__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 4)));
#line 1824 "intermod.m"
            transform_hlds__intermod___ExtraArgs_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 5)));
#line 1824 "intermod.m"
            transform_hlds__intermod___MaybeTraceRuntimeCond_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 6)));
#line 1824 "intermod.m"
            transform_hlds__intermod__PragmaCode_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 7)));
#line 1824 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1824 "intermod.m"
          }
#line 1822 "intermod.m"
        else
#line 1822 "intermod.m"
        if (((((MR_tag((MR_Word) transform_hlds__intermod__V_93_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1813 "intermod.m"
          {
#line 1813 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_85_85;
#line 1813 "intermod.m"
            MR_Word transform_hlds__intermod__TypeInfo_94_94;
#line 1813 "intermod.m"
            MR_Word transform_hlds__intermod__Goals_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 2)));
#line 1813 "intermod.m"
            MR_Word transform_hlds__intermod__ForeignCodeGoal_46;
#line 1813 "intermod.m"
            MR_Word transform_hlds__intermod__ForeignCodeGoalExpr_47;
#line 1813 "intermod.m"
            MR_Word transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 1)));
#line 1813 "intermod.m"
            MR_Word transform_hlds__intermod__V_65_65;
#line 1813 "intermod.m"
            MR_Word transform_hlds__intermod__V_66_66;
#line 1813 "intermod.m"
            MR_Word transform_hlds__intermod__V_68_68;
#line 1813 "intermod.m"
            MR_Word transform_hlds__intermod__V_91_91;
#line 1819 "intermod.m"
            MR_Word transform_hlds__intermod__V_48_48;
#line 1820 "intermod.m"
            MR_Word transform_hlds__intermod__V_50_50;
#line 1820 "intermod.m"
            MR_Integer transform_hlds__intermod__V_51_51;
#line 1820 "intermod.m"
            MR_Word transform_hlds__intermod___ExtraArgs_53;
#line 1820 "intermod.m"
            MR_Word transform_hlds__intermod___MaybeTraceRuntimeCond_54;

#line 1813 "intermod.m"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_64_64 == (MR_Integer) 0);
#line 1813 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1813 "intermod.m"
              {
#line 1814 "intermod.m"
                transform_hlds__intermod__V_65_65 = (MR_Word) &transform_hlds__intermod_scalar_common_2[27];
#line 1818 "intermod.m"
                transform_hlds__intermod__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9261 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1814 "intermod.m"
                {
#line 1814 "intermod.m"
                  mercury__list__filter_3_p_0(transform_hlds__intermod__TypeCtorInfo_85_85, transform_hlds__intermod__V_65_65, transform_hlds__intermod__Goals_34, &transform_hlds__intermod__V_66_66);
                }
#line 1818 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 1818 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1818 "intermod.m"
                  {
#line 1818 "intermod.m"
                    transform_hlds__intermod__ForeignCodeGoal_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_66_66, (MR_Integer) 0)));
#line 1818 "intermod.m"
                    transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_66_66, (MR_Integer) 1)));
#line 9278 "transform_hlds.intermod.c"
                    transform_hlds__intermod__TypeInfo_94_94 = (MR_Word) &transform_hlds__intermod_scalar_common_1[24];
#line 1818 "intermod.m"
                    {
#line 1818 "intermod.m"
                      transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_94_94, ((MR_Box) (transform_hlds__intermod__V_68_68)), ((MR_Box) (transform_hlds__intermod__V_91_91)));
                    }
#line 1813 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 1813 "intermod.m"
                      {
#line 1819 "intermod.m"
                        transform_hlds__intermod__ForeignCodeGoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignCodeGoal_46, (MR_Integer) 0)));
#line 1819 "intermod.m"
                        transform_hlds__intermod__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignCodeGoal_46, (MR_Integer) 1)));
#line 1820 "intermod.m"
                        transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ForeignCodeGoalExpr_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1820 "intermod.m"
                        if (transform_hlds__intermod__succeeded)
#line 1820 "intermod.m"
                          {
#line 1820 "intermod.m"
                            transform_hlds__intermod__Attributes_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 1)));
#line 1820 "intermod.m"
                            transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 2)));
#line 1820 "intermod.m"
                            transform_hlds__intermod__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 3)));
#line 1820 "intermod.m"
                            transform_hlds__intermod__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 4)));
#line 1820 "intermod.m"
                            transform_hlds__intermod___ExtraArgs_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 5)));
#line 1820 "intermod.m"
                            transform_hlds__intermod___MaybeTraceRuntimeCond_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 6)));
#line 1820 "intermod.m"
                            transform_hlds__intermod__PragmaCode_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 7)));
#line 1820 "intermod.m"
                          }
#line 1813 "intermod.m"
                      }
#line 1818 "intermod.m"
                  }
#line 1813 "intermod.m"
              }
#line 1813 "intermod.m"
          }
#line 1822 "intermod.m"
        else
#line 1822 "intermod.m"
          transform_hlds__intermod__succeeded = MR_FALSE;
#line 1838 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1831 "intermod.m"
          if ((transform_hlds__intermod__ApplicableProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1829 "intermod.m"
            {
#line 1830 "intermod.m"
              {
#line 1830 "intermod.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "all_modes foreign_proc");
#line 1830 "intermod.m"
                return;
              }
#line 1829 "intermod.m"
            }
#line 1831 "intermod.m"
          else
#line 1832 "intermod.m"
            {
#line 1832 "intermod.m"
              MR_Word transform_hlds__intermod__ProcIds_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ApplicableProcIds_22, (MR_Integer) 0)));
#line 1832 "intermod.m"
              MR_Word transform_hlds__intermod__V_69_69;
#line 1833 "intermod.m"
              MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_62;

#line 1834 "intermod.m"
              {
#line 1834 "intermod.m"
                transform_hlds__intermod__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1834 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
#line 1834 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_2));
#line 1834 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1834 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 3) = ((MR_Box) (transform_hlds__intermod__Procs_33));
#line 1834 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 4) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_17));
#line 1834 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 5) = ((MR_Box) (transform_hlds__intermod__PragmaCode_55));
#line 1834 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 6) = ((MR_Box) (transform_hlds__intermod__Attributes_49));
#line 1834 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 7) = ((MR_Box) (transform_hlds__intermod__Args_52));
#line 1834 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 8) = ((MR_Box) (transform_hlds__intermod__VarSet_15));
#line 1834 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 9) = ((MR_Box) (transform_hlds__intermod__SymName_18));
#line 1834 "intermod.m"
              }
#line 1833 "intermod.m"
              {
#line 1833 "intermod.m"
                mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_69_69, transform_hlds__intermod__ProcIds_60, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_62);
              }
#line 1832 "intermod.m"
            }
#line 1838 "intermod.m"
        else
#line 1839 "intermod.m"
          {
#line 1839 "intermod.m"
            {
#line 1839 "intermod.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "did not find foreign_proc");
#line 1839 "intermod.m"
              return;
            }
#line 1839 "intermod.m"
          }
#line 1807 "intermod.m"
      }
#line 1793 "intermod.m"
  }
#line 1788 "intermod.m"
}

#line 1782 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0_1(
#line 1782 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1782 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1782 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1782 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1782 "intermod.m"
{
#line 1782 "intermod.m"
  {
#line 1782 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1782 "intermod.m"
    {
#line 1782 "intermod.m"
      transform_hlds__intermod__intermod_write_clause_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1782 "intermod.m"
      return;
    }
#line 1782 "intermod.m"
  }
#line 1782 "intermod.m"
}

#line 1737 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0(
#line 1737 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_1,
#line 1737 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_2,
#line 1737 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3)
#line 1737 "intermod.m"
{
#line 1740 "intermod.m"
  while (MR_TRUE)
#line 1740 "intermod.m"
    {
#line 1740 "intermod.m"
      /* tailcall optimized into a loop */
#line 1740 "intermod.m"
      {
#line 1740 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1740 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1740 "intermod.m"
          {
#line 1740 "intermod.m"
          }
#line 1740 "intermod.m"
        else
#line 1741 "intermod.m"
          {
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo_16;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__Module_17;
#line 1741 "intermod.m"
            MR_String transform_hlds__intermod__Name_18;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_19;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_20;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesInfo_21;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__VarSet_22;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__HeadVars_23;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesRep_24;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__VarTypes_26;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__Clauses_27;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__GoalType_28;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__Module_68;
#line 1741 "intermod.m"
            MR_String transform_hlds__intermod__Name_69;
#line 1741 "intermod.m"
            MR_Integer transform_hlds__intermod__Arity_70;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_71;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_72;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_73;
#line 1741 "intermod.m"
            MR_Word transform_hlds__intermod__MarkerList_74;
#line 1754 "intermod.m"
            MR_Word transform_hlds__intermod___ItemNumbers_25;

#line 1742 "intermod.m"
            {
#line 1742 "intermod.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_2, transform_hlds__intermod__PredId_13, &transform_hlds__intermod__PredInfo_16);
            }
#line 1743 "intermod.m"
            {
#line 1743 "intermod.m"
              transform_hlds__intermod__Module_17 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1744 "intermod.m"
            {
#line 1744 "intermod.m"
              transform_hlds__intermod__Name_18 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1745 "intermod.m"
            {
#line 1745 "intermod.m"
              transform_hlds__intermod__SymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1745 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_19, 0) = ((MR_Box) (transform_hlds__intermod__Module_17));
#line 1745 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_19, 1) = ((MR_Box) (transform_hlds__intermod__Name_18));
#line 1745 "intermod.m"
            }
#line 1746 "intermod.m"
            {
#line 1746 "intermod.m"
              transform_hlds__intermod__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1960 "intermod.m"
            {
#line 1960 "intermod.m"
              transform_hlds__intermod__Module_68 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1961 "intermod.m"
            {
#line 1961 "intermod.m"
              transform_hlds__intermod__Name_69 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1962 "intermod.m"
            {
#line 1962 "intermod.m"
              transform_hlds__intermod__Arity_70 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1963 "intermod.m"
            {
#line 1963 "intermod.m"
              transform_hlds__intermod__PredOrFunc_71 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1964 "intermod.m"
            {
#line 1964 "intermod.m"
              transform_hlds__intermod__SymName_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_72, 0) = ((MR_Box) (transform_hlds__intermod__Module_68));
#line 1964 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_72, 1) = ((MR_Box) (transform_hlds__intermod__Name_69));
#line 1964 "intermod.m"
            }
#line 1965 "intermod.m"
            {
#line 1965 "intermod.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__Markers_73);
            }
#line 1966 "intermod.m"
            {
#line 1966 "intermod.m"
              hlds__hlds_pred__markers_to_marker_list_2_p_0(transform_hlds__intermod__Markers_73, &transform_hlds__intermod__MarkerList_74);
            }
#line 1967 "intermod.m"
            {
#line 1967 "intermod.m"
              transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(transform_hlds__intermod__SymName_72, transform_hlds__intermod__Arity_70, transform_hlds__intermod__MarkerList_74, transform_hlds__intermod__PredOrFunc_71);
            }
#line 1751 "intermod.m"
            {
#line 1751 "intermod.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__ClausesInfo_21);
            }
#line 1752 "intermod.m"
            {
#line 1752 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_varset_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__VarSet_22);
            }
#line 1753 "intermod.m"
            {
#line 1753 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__HeadVars_23);
            }
#line 1754 "intermod.m"
            {
#line 1754 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__ClausesRep_24, &transform_hlds__intermod___ItemNumbers_25);
            }
#line 1755 "intermod.m"
            {
#line 1755 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__VarTypes_26);
            }
#line 1756 "intermod.m"
            {
#line 1756 "intermod.m"
              hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep_24, &transform_hlds__intermod__Clauses_27);
            }
#line 1758 "intermod.m"
            {
#line 1758 "intermod.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__GoalType_28);
            }
#line 1773 "intermod.m"
#line 1773 "intermod.m"
            switch (MR_tag((MR_Word) transform_hlds__intermod__GoalType_28)) {
#line 1773 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1773 "intermod.m"
              case (MR_Integer) 0:
#line 1778 "intermod.m"
                {
#line 1778 "intermod.m"
                  MR_Word transform_hlds__intermod__TypeVarset_35;
#line 1778 "intermod.m"
                  MR_Word transform_hlds__intermod__MaybeVarTypes_36;
#line 1778 "intermod.m"
                  MR_Word transform_hlds__intermod__V_40_40;
#line 1781 "intermod.m"
                  MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_49_49;

#line 1779 "intermod.m"
                  {
#line 1779 "intermod.m"
                    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__TypeVarset_35);
                  }
#line 1780 "intermod.m"
                  {
#line 1780 "intermod.m"
                    transform_hlds__intermod__MaybeVarTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeVarTypes_36, 0) = ((MR_Box) (transform_hlds__intermod__TypeVarset_35));
#line 1780 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeVarTypes_36, 1) = ((MR_Box) (transform_hlds__intermod__VarTypes_26));
#line 1780 "intermod.m"
                  }
#line 1782 "intermod.m"
                  {
#line 1782 "intermod.m"
                    transform_hlds__intermod__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_9[0]));
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_preds_5_p_0_1));
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_1));
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 4) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_2));
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 5) = ((MR_Box) (transform_hlds__intermod__PredId_13));
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 6) = ((MR_Box) (transform_hlds__intermod__VarSet_22));
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 7) = ((MR_Box) (transform_hlds__intermod__HeadVars_23));
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 8) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_20));
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 9) = ((MR_Box) (transform_hlds__intermod__SymName_19));
#line 1782 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 10) = ((MR_Box) (transform_hlds__intermod__MaybeVarTypes_36));
#line 1782 "intermod.m"
                  }
#line 1781 "intermod.m"
                  {
#line 1781 "intermod.m"
                    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_40_40, transform_hlds__intermod__Clauses_27, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_49_49);
                  }
#line 1778 "intermod.m"
                }
#line 1773 "intermod.m"
                break;
#line 1773 "intermod.m"
              case (MR_Integer) 1:
#line 1760 "intermod.m"
                {
#line 1760 "intermod.m"
                  MR_Word transform_hlds__intermod__PromiseType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalType_28, (MR_Integer) 0)));

#line 1767 "intermod.m"
                  if ((transform_hlds__intermod__Clauses_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1770 "intermod.m"
                    {
#line 1771 "intermod.m"
                      {
#line 1771 "intermod.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_preds\'/5", (MR_String) "assertion not a single clause.");
#line 1771 "intermod.m"
                        return;
                      }
#line 1770 "intermod.m"
                    }
#line 1767 "intermod.m"
                  else
#line 1767 "intermod.m"
                    {
#line 1767 "intermod.m"
                      MR_Word transform_hlds__intermod__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Clauses_27, (MR_Integer) 1)));
#line 1767 "intermod.m"
                      MR_Word transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Clauses_27, (MR_Integer) 0)));

#line 1767 "intermod.m"
                      if ((transform_hlds__intermod__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1762 "intermod.m"
                        {
#line 1764 "intermod.m"
                          {
#line 1764 "intermod.m"
                            hlds__hlds_out__hlds_out_module__write_promise_13_p_0(transform_hlds__intermod__OutInfo_1, transform_hlds__intermod__PromiseType_29, (MR_Integer) 0, transform_hlds__intermod__ModuleInfo_2, transform_hlds__intermod__PredId_13, transform_hlds__intermod__VarSet_22, (MR_Integer) 0, transform_hlds__intermod__HeadVars_23, transform_hlds__intermod__PredOrFunc_20, transform_hlds__intermod__V_63_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                          }
#line 1762 "intermod.m"
                        }
#line 1767 "intermod.m"
                      else
#line 1770 "intermod.m"
                        {
#line 1771 "intermod.m"
                          {
#line 1771 "intermod.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_preds\'/5", (MR_String) "assertion not a single clause.");
#line 1771 "intermod.m"
                            return;
                          }
#line 1770 "intermod.m"
                        }
#line 1767 "intermod.m"
                    }
#line 1760 "intermod.m"
                }
#line 1773 "intermod.m"
                break;
#line 1773 "intermod.m"
            }
#line 1786 "intermod.m"
            /* direct tailcall eliminated */
#line 1786 "intermod.m"
            {
#line 1786 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__PredIds_14;

#line 1786 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1786 "intermod.m"
            }
#line 1786 "intermod.m"
            continue;
#line 1741 "intermod.m"
          }
#line 1740 "intermod.m"
      }
#line 1740 "intermod.m"
      break;
#line 1740 "intermod.m"
    }
#line 1737 "intermod.m"
}

#line 1705 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_modes_6_p_0(
#line 1705 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_1,
#line 1705 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_2,
#line 1705 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_3,
#line 1705 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4)
#line 1705 "intermod.m"
{
#line 1708 "intermod.m"
  while (MR_TRUE)
#line 1708 "intermod.m"
    {
#line 1708 "intermod.m"
      /* tailcall optimized into a loop */
#line 1708 "intermod.m"
      {
#line 1708 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1708 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1708 "intermod.m"
          {
#line 1708 "intermod.m"
          }
#line 1708 "intermod.m"
        else
#line 1710 "intermod.m"
          {
#line 1710 "intermod.m"
            MR_Integer transform_hlds__intermod__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 1710 "intermod.m"
            MR_Word transform_hlds__intermod__ProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 1)));
#line 1710 "intermod.m"
            MR_Word transform_hlds__intermod__ProcInfo_19;
#line 1710 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeArgModes_20;
#line 1710 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeDetism_21;
#line 1710 "intermod.m"
            MR_Word transform_hlds__intermod__ArgModes_24;
#line 1710 "intermod.m"
            MR_Word transform_hlds__intermod__Detism_25;
#line 1710 "intermod.m"
            MR_Word transform_hlds__intermod__Context_26;
#line 1710 "intermod.m"
            MR_Word transform_hlds__intermod__Varset_27;
#line 1711 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_ProcInfo_19;
#line 1720 "intermod.m"
            MR_Word transform_hlds__intermod__ArgModes0_22;
#line 1720 "intermod.m"
            MR_Word transform_hlds__intermod__Detism0_23;

#line 1711 "intermod.m"
            {
#line 1711 "intermod.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__intermod__Procs_1, transform_hlds__intermod__ProcId_16, &transform_hlds__intermod__conv0_ProcInfo_19);
            }
#line 1711 "intermod.m"
            transform_hlds__intermod__ProcInfo_19 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_19);
#line 1712 "intermod.m"
            {
#line 1712 "intermod.m"
              hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__MaybeArgModes_20);
            }
#line 1713 "intermod.m"
            {
#line 1713 "intermod.m"
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__MaybeDetism_21);
            }
#line 1715 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeArgModes_20)) == (MR_mktag((MR_Integer) 1)));
#line 1715 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1715 "intermod.m"
              {
#line 1715 "intermod.m"
                transform_hlds__intermod__ArgModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeArgModes_20, (MR_Integer) 0)));
#line 1716 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeDetism_21)) == (MR_mktag((MR_Integer) 1)));
#line 1716 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1716 "intermod.m"
                  transform_hlds__intermod__Detism0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeDetism_21, (MR_Integer) 0)));
#line 1715 "intermod.m"
              }
#line 1720 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1718 "intermod.m"
              {
#line 1718 "intermod.m"
                transform_hlds__intermod__ArgModes_24 = transform_hlds__intermod__ArgModes0_22;
#line 1719 "intermod.m"
                transform_hlds__intermod__Detism_25 = transform_hlds__intermod__Detism0_23;
#line 1718 "intermod.m"
              }
#line 1720 "intermod.m"
            else
#line 1721 "intermod.m"
              {
#line 1721 "intermod.m"
                {
#line 1721 "intermod.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_modes\'/6", (MR_String) "attempt to write undeclared mode");
#line 1721 "intermod.m"
                  return;
                }
#line 1721 "intermod.m"
              }
#line 1723 "intermod.m"
            {
#line 1723 "intermod.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__Context_26);
            }
#line 1724 "intermod.m"
            {
#line 1724 "intermod.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &transform_hlds__intermod__Varset_27);
            }
#line 1730 "intermod.m"
#line 1730 "intermod.m"
            switch (transform_hlds__intermod__PredOrFunc_3) {
#line 1730 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1730 "intermod.m"
              case (MR_Integer) 1:
#line 1726 "intermod.m"
                {
#line 1726 "intermod.m"
                  MR_Word transform_hlds__intermod__FuncArgModes_28;
#line 1726 "intermod.m"
                  MR_Word transform_hlds__intermod__FuncRetMode_29;
#line 1726 "intermod.m"
                  MR_Word transform_hlds__intermod__V_39_39;
#line 1727 "intermod.m"
                  MR_Box transform_hlds__intermod__conv1_FuncRetMode_29;

#line 1727 "intermod.m"
                  {
#line 1727 "intermod.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__intermod__ArgModes_24, &transform_hlds__intermod__FuncArgModes_28, &transform_hlds__intermod__conv1_FuncRetMode_29);
                  }
#line 1727 "intermod.m"
                  transform_hlds__intermod__FuncRetMode_29 = ((MR_Word) transform_hlds__intermod__conv1_FuncRetMode_29);
#line 1729 "intermod.m"
                  {
#line 1729 "intermod.m"
                    transform_hlds__intermod__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1729 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_39_39, 0) = ((MR_Box) (transform_hlds__intermod__Detism_25));
#line 1729 "intermod.m"
                  }
#line 1728 "intermod.m"
                  {
#line 1728 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_9_p_0((MR_Integer) 0, transform_hlds__intermod__Varset_27, transform_hlds__intermod__SymName_2, transform_hlds__intermod__FuncArgModes_28, transform_hlds__intermod__FuncRetMode_29, transform_hlds__intermod__V_39_39, transform_hlds__intermod__Context_26);
                  }
#line 1726 "intermod.m"
                }
#line 1730 "intermod.m"
                break;
#line 1730 "intermod.m"
              case (MR_Integer) 0:
#line 1731 "intermod.m"
                {
#line 1731 "intermod.m"
                  MR_Word transform_hlds__intermod__V_36_36;

#line 1733 "intermod.m"
                  {
#line 1733 "intermod.m"
                    transform_hlds__intermod__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1733 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_36_36, 0) = ((MR_Box) (transform_hlds__intermod__Detism_25));
#line 1733 "intermod.m"
                  }
#line 1732 "intermod.m"
                  {
#line 1732 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_8_p_0((MR_Integer) 0, transform_hlds__intermod__Varset_27, transform_hlds__intermod__SymName_2, transform_hlds__intermod__ArgModes_24, transform_hlds__intermod__V_36_36, transform_hlds__intermod__Context_26);
                  }
#line 1731 "intermod.m"
                }
#line 1730 "intermod.m"
                break;
#line 1730 "intermod.m"
            }
#line 1735 "intermod.m"
            /* direct tailcall eliminated */
#line 1735 "intermod.m"
            {
#line 1735 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__4__tmp_copy_4 = transform_hlds__intermod__ProcIds_17;

#line 1735 "intermod.m"
              transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__4__tmp_copy_4;
#line 1735 "intermod.m"
            }
#line 1735 "intermod.m"
            continue;
#line 1710 "intermod.m"
          }
#line 1708 "intermod.m"
      }
#line 1708 "intermod.m"
      break;
#line 1708 "intermod.m"
    }
#line 1705 "intermod.m"
}

#line 1994 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_2(
#line 1994 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1994 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1994 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1994 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1994 "intermod.m"
{
#line 1994 "intermod.m"
  {
#line 1994 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1994 "intermod.m"
    {
#line 1994 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_pragma_type_spec_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1994 "intermod.m"
      return;
    }
#line 1994 "intermod.m"
  }
#line 1994 "intermod.m"
}

#line 1692 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1(
#line 1692 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1692 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1692 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1692 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1692 "intermod.m"
{
#line 1692 "intermod.m"
  {
#line 1692 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1692 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__3_47;

#line 1692 "intermod.m"
    {
#line 1692 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1692__1_3_p_0(((MR_Integer) transform_hlds__intermod__wrapper_arg_1), ((MR_Integer) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv1_HeadVar__3_47);
    }
#line 1692 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__3_47));
#line 1692 "intermod.m"
  }
#line 1692 "intermod.m"
}

#line 1640 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0(
#line 1640 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1640 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1640 "intermod.m"
{
#line 1643 "intermod.m"
  while (MR_TRUE)
#line 1643 "intermod.m"
    {
#line 1643 "intermod.m"
      /* tailcall optimized into a loop */
#line 1643 "intermod.m"
      {
#line 1643 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1643 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1643 "intermod.m"
          {
#line 1643 "intermod.m"
          }
#line 1643 "intermod.m"
        else
#line 1644 "intermod.m"
          {
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo_13;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__Module_14;
#line 1644 "intermod.m"
            MR_String transform_hlds__intermod__Name_15;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_16;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__TVarSet_17;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__ExistQVars_18;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__ArgTypes_19;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__Context_20;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__Purity_21;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__ClassContext_22;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__GoalType_23;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__AppendVarNums_24;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__Procs_28;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__ProcIds_29;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__SortedProcIds_36;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__V_48_48;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__Module_63;
#line 1644 "intermod.m"
            MR_String transform_hlds__intermod__Name_64;
#line 1644 "intermod.m"
            MR_Integer transform_hlds__intermod__Arity_65;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_66;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_67;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_68;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__MarkerList_69;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecInfo_76;
#line 1644 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaMap_77;
#line 1990 "intermod.m"
            MR_Word transform_hlds__intermod__V_83_83;
#line 1990 "intermod.m"
            MR_Word transform_hlds__intermod__V_84_84;
#line 1990 "intermod.m"
            MR_Word transform_hlds__intermod__V_85_85;
#line 1996 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecPragmas_78;

#line 1645 "intermod.m"
            {
#line 1645 "intermod.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__PredId_10, &transform_hlds__intermod__PredInfo_13);
            }
#line 1646 "intermod.m"
            {
#line 1646 "intermod.m"
              transform_hlds__intermod__Module_14 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1647 "intermod.m"
            {
#line 1647 "intermod.m"
              transform_hlds__intermod__Name_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1648 "intermod.m"
            {
#line 1648 "intermod.m"
              transform_hlds__intermod__PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1649 "intermod.m"
            {
#line 1649 "intermod.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__TVarSet_17, &transform_hlds__intermod__ExistQVars_18, &transform_hlds__intermod__ArgTypes_19);
            }
#line 1650 "intermod.m"
            {
#line 1650 "intermod.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Context_20);
            }
#line 1651 "intermod.m"
            {
#line 1651 "intermod.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Purity_21);
            }
#line 1652 "intermod.m"
            {
#line 1652 "intermod.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__ClassContext_22);
            }
#line 1653 "intermod.m"
            {
#line 1653 "intermod.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__GoalType_23);
            }
#line 1661 "intermod.m"
#line 1661 "intermod.m"
            switch (MR_tag((MR_Word) transform_hlds__intermod__GoalType_23)) {
#line 1661 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1661 "intermod.m"
              case (MR_Integer) 0:
#line 1661 "intermod.m"
#line 1661 "intermod.m"
                switch (MR_unmkbody(transform_hlds__intermod__GoalType_23)) {
#line 1661 "intermod.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1661 "intermod.m"
                  case (MR_Integer) 0:
#line 1668 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1661 "intermod.m"
                    break;
#line 1661 "intermod.m"
                  case (MR_Integer) 1:
#line 1660 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 0;
#line 1661 "intermod.m"
                    break;
#line 1661 "intermod.m"
                  case (MR_Integer) 2:
#line 1665 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 0;
#line 1661 "intermod.m"
                    break;
#line 1661 "intermod.m"
                  case (MR_Integer) 3:
#line 1674 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1661 "intermod.m"
                    break;
#line 1661 "intermod.m"
                }
#line 1661 "intermod.m"
                break;
#line 1661 "intermod.m"
              case (MR_Integer) 1:
#line 1671 "intermod.m"
                transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1661 "intermod.m"
                break;
#line 1661 "intermod.m"
            }
#line 1680 "intermod.m"
#line 1680 "intermod.m"
            switch (transform_hlds__intermod__PredOrFunc_16) {
#line 1680 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1680 "intermod.m"
              case (MR_Integer) 1:
#line 1681 "intermod.m"
                {
#line 1681 "intermod.m"
                  MR_Word transform_hlds__intermod__FuncArgTypes_26;
#line 1681 "intermod.m"
                  MR_Word transform_hlds__intermod__FuncRetType_27;
#line 1681 "intermod.m"
                  MR_Word transform_hlds__intermod__V_39_39;
#line 1682 "intermod.m"
                  MR_Box transform_hlds__intermod__conv0_FuncRetType_27;

#line 1682 "intermod.m"
                  {
#line 1682 "intermod.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__intermod__ArgTypes_19, &transform_hlds__intermod__FuncArgTypes_26, &transform_hlds__intermod__conv0_FuncRetType_27);
                  }
#line 1682 "intermod.m"
                  transform_hlds__intermod__FuncRetType_27 = ((MR_Word) transform_hlds__intermod__conv0_FuncRetType_27);
#line 1683 "intermod.m"
                  {
#line 1683 "intermod.m"
                    transform_hlds__intermod__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1683 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_39_39, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1683 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_39_39, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1683 "intermod.m"
                  }
#line 1683 "intermod.m"
                  {
#line 1683 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_func_type_12_p_0(transform_hlds__intermod__TVarSet_17, transform_hlds__intermod__ExistQVars_18, transform_hlds__intermod__V_39_39, transform_hlds__intermod__FuncArgTypes_26, transform_hlds__intermod__FuncRetType_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__intermod__Purity_21, transform_hlds__intermod__ClassContext_22, transform_hlds__intermod__Context_20, transform_hlds__intermod__AppendVarNums_24);
                  }
#line 1681 "intermod.m"
                }
#line 1680 "intermod.m"
                break;
#line 1680 "intermod.m"
              case (MR_Integer) 0:
#line 1677 "intermod.m"
                {
#line 1677 "intermod.m"
                  MR_Word transform_hlds__intermod__V_42_42;

#line 1678 "intermod.m"
                  {
#line 1678 "intermod.m"
                    transform_hlds__intermod__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1678 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1678 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1678 "intermod.m"
                  }
#line 1678 "intermod.m"
                  {
#line 1678 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pred_type_11_p_0(transform_hlds__intermod__TVarSet_17, transform_hlds__intermod__ExistQVars_18, transform_hlds__intermod__V_42_42, transform_hlds__intermod__ArgTypes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__intermod__Purity_21, transform_hlds__intermod__ClassContext_22, transform_hlds__intermod__Context_20, transform_hlds__intermod__AppendVarNums_24);
                  }
#line 1677 "intermod.m"
                }
#line 1680 "intermod.m"
                break;
#line 1680 "intermod.m"
            }
#line 1687 "intermod.m"
            {
#line 1687 "intermod.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Procs_28);
            }
#line 1688 "intermod.m"
            {
#line 1688 "intermod.m"
              transform_hlds__intermod__ProcIds_29 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1698 "intermod.m"
            {
#line 1698 "intermod.m"
              mercury__list__sort_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[26], transform_hlds__intermod__ProcIds_29, &transform_hlds__intermod__SortedProcIds_36);
            }
#line 1699 "intermod.m"
            {
#line 1699 "intermod.m"
              transform_hlds__intermod__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1699 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1699 "intermod.m"
            }
#line 1699 "intermod.m"
            {
#line 1699 "intermod.m"
              transform_hlds__intermod__intermod_write_pred_modes_6_p_0(transform_hlds__intermod__Procs_28, transform_hlds__intermod__V_48_48, transform_hlds__intermod__PredOrFunc_16, transform_hlds__intermod__SortedProcIds_36);
            }
#line 1960 "intermod.m"
            {
#line 1960 "intermod.m"
              transform_hlds__intermod__Module_63 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1961 "intermod.m"
            {
#line 1961 "intermod.m"
              transform_hlds__intermod__Name_64 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1962 "intermod.m"
            {
#line 1962 "intermod.m"
              transform_hlds__intermod__Arity_65 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1963 "intermod.m"
            {
#line 1963 "intermod.m"
              transform_hlds__intermod__PredOrFunc_66 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1964 "intermod.m"
            {
#line 1964 "intermod.m"
              transform_hlds__intermod__SymName_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_67, 0) = ((MR_Box) (transform_hlds__intermod__Module_63));
#line 1964 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_67, 1) = ((MR_Box) (transform_hlds__intermod__Name_64));
#line 1964 "intermod.m"
            }
#line 1965 "intermod.m"
            {
#line 1965 "intermod.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Markers_68);
            }
#line 1966 "intermod.m"
            {
#line 1966 "intermod.m"
              hlds__hlds_pred__markers_to_marker_list_2_p_0(transform_hlds__intermod__Markers_68, &transform_hlds__intermod__MarkerList_69);
            }
#line 1967 "intermod.m"
            {
#line 1967 "intermod.m"
              transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(transform_hlds__intermod__SymName_67, transform_hlds__intermod__Arity_65, transform_hlds__intermod__MarkerList_69, transform_hlds__intermod__PredOrFunc_66);
            }
#line 1989 "intermod.m"
            {
#line 1989 "intermod.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__TypeSpecInfo_76);
            }
#line 1990 "intermod.m"
            transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 0)));
#line 1990 "intermod.m"
            transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 1)));
#line 1990 "intermod.m"
            transform_hlds__intermod__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 2)));
#line 1990 "intermod.m"
            transform_hlds__intermod__PragmaMap_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 3)));
#line 1991 "intermod.m"
            {
#line 1991 "intermod.m"
              transform_hlds__intermod__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, transform_hlds__intermod__PragmaMap_77, ((MR_Box) (transform_hlds__intermod__PredId_10)), &transform_hlds__intermod__TypeSpecPragmas_78);
            }
#line 1996 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1992 "intermod.m"
              {
#line 1993 "intermod.m"
                MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_IO_51_51;

#line 1993 "intermod.m"
                {
#line 1993 "intermod.m"
                  mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_4[4], transform_hlds__intermod__TypeSpecPragmas_78, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv2_STATE_VARIABLE_IO_51_51);
                }
#line 1992 "intermod.m"
              }
#line 1996 "intermod.m"
            else
#line 1996 "intermod.m"
              {
#line 1996 "intermod.m"
              }
#line 1703 "intermod.m"
            /* direct tailcall eliminated */
#line 1703 "intermod.m"
            {
#line 1703 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__2__tmp_copy_2 = transform_hlds__intermod__PredIds_11;

#line 1703 "intermod.m"
              transform_hlds__intermod__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2__tmp_copy_2;
#line 1703 "intermod.m"
            }
#line 1703 "intermod.m"
            continue;
#line 1644 "intermod.m"
          }
#line 1643 "intermod.m"
      }
#line 1643 "intermod.m"
      break;
#line 1643 "intermod.m"
    }
#line 1640 "intermod.m"
}

#line 1624 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_4_p_0(
#line 1624 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1624 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1624 "intermod.m"
{
#line 1627 "intermod.m"
  {
#line 1627 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 0)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 2)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 3)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 4)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 5)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__Body_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 6)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 8)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__ClassName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_6, (MR_Integer) 0)));
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__ItemInstance_21;
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__Item_22;
#line 1627 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_23;
#line 1628 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 1)));
#line 1628 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 7)));
#line 1628 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 9)));
#line 1630 "intermod.m"
    MR_Integer transform_hlds__intermod__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_6, (MR_Integer) 1)));
#line 1634 "intermod.m"
    MR_String transform_hlds__intermod__V_28_28;
#line 1634 "intermod.m"
    MR_String transform_hlds__intermod__V_29_29;
#line 1634 "intermod.m"
    MR_Word transform_hlds__intermod__V_30_30;
#line 1634 "intermod.m"
    MR_Word transform_hlds__intermod__V_31_31;

#line 1631 "intermod.m"
    {
#line 1631 "intermod.m"
      transform_hlds__intermod__ItemInstance_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 0) = ((MR_Box) (transform_hlds__intermod__ClassName_19));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 1) = ((MR_Box) (transform_hlds__intermod__Types_13));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 2) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_14));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 3) = ((MR_Box) (transform_hlds__intermod__Constraints_12));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 4) = ((MR_Box) (transform_hlds__intermod__Body_15));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 5) = ((MR_Box) (transform_hlds__intermod__TVarSet_17));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 6) = ((MR_Box) (transform_hlds__intermod__ModuleName_9));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 7) = ((MR_Box) (transform_hlds__intermod__Context_11));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 8) = ((MR_Box) ((MR_Integer) -1));
#line 1631 "intermod.m"
    }
#line 1633 "intermod.m"
    {
#line 1633 "intermod.m"
      transform_hlds__intermod__Item_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1633 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1633 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_22, 1) = ((MR_Box) (transform_hlds__intermod__ItemInstance_21));
#line 1633 "intermod.m"
    }
#line 1634 "intermod.m"
    transform_hlds__intermod__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 0)));
#line 1634 "intermod.m"
    transform_hlds__intermod__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 1)));
#line 1634 "intermod.m"
    transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 2)));
#line 1634 "intermod.m"
    transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 3)));
#line 1634 "intermod.m"
    transform_hlds__intermod__MercInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 4)));
#line 1635 "intermod.m"
    {
#line 1635 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_23, transform_hlds__intermod__Item_22);
#line 1635 "intermod.m"
      return;
    }
#line 1627 "intermod.m"
  }
#line 1624 "intermod.m"
}

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0_1(
#line 1622 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1622 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1622 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1622 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1622 "intermod.m"
{
#line 1622 "intermod.m"
  {
#line 1622 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1622 "intermod.m"
    {
#line 1622 "intermod.m"
      transform_hlds__intermod__intermod_write_instance_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1622 "intermod.m"
      return;
    }
#line 1622 "intermod.m"
  }
#line 1622 "intermod.m"
}

#line 1618 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0(
#line 1618 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1618 "intermod.m"
  MR_Word transform_hlds__intermod__Instances_6)
#line 1618 "intermod.m"
{
#line 1621 "intermod.m"
  {
#line 1621 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1621 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 1622 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_9;

#line 1622 "intermod.m"
    {
#line 1622 "intermod.m"
      transform_hlds__intermod__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[4]));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_instances_4_p_0_1));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1622 "intermod.m"
    }
#line 1622 "intermod.m"
    {
#line 1622 "intermod.m"
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__intermod_scalar_common_2[4], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_10_10, transform_hlds__intermod__Instances_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_9);
    }
#line 1621 "intermod.m"
  }
#line 1618 "intermod.m"
}

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3(
#line 1613 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1613 "intermod.m"
{
#line 1613 "intermod.m"
  {
#line 1613 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1613 "intermod.m"
    *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9));
#line 1613 "intermod.m"
    {
#line 1613 "intermod.m"
      ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr);
#line 1613 "intermod.m"
      return;
    }
#line 1613 "intermod.m"
  }
#line 1613 "intermod.m"
}

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4(
#line 1613 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1613 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1613 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1613 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1613 "intermod.m"
{
#line 1613 "intermod.m"
  {
#line 1613 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s transform_hlds__intermod__env;

#line 1613 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1 = transform_hlds__intermod__wrapper_arg_1;
#line 1613 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont = transform_hlds__intermod__cont;
#line 1613 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1613 "intermod.m"
    {
#line 1613 "intermod.m"
      MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1613 "intermod.m"
      {
#line 1613 "intermod.m"
        transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), &(transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9, transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3, &transform_hlds__intermod__env);
      }
#line 1613 "intermod.m"
    }
#line 1613 "intermod.m"
  }
#line 1613 "intermod.m"
}

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
#line 1613 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1613 "intermod.m"
{
#line 1613 "intermod.m"
  {
#line 1613 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1613 "intermod.m"
    *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9));
#line 1613 "intermod.m"
    {
#line 1613 "intermod.m"
      ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr);
#line 1613 "intermod.m"
      return;
    }
#line 1613 "intermod.m"
  }
#line 1613 "intermod.m"
}

#line 1613 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2(
#line 1613 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1613 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1613 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1613 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1613 "intermod.m"
{
#line 1613 "intermod.m"
  {
#line 1613 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s transform_hlds__intermod__env;

#line 1613 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1 = transform_hlds__intermod__wrapper_arg_1;
#line 1613 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont = transform_hlds__intermod__cont;
#line 1613 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1613 "intermod.m"
    {
#line 1613 "intermod.m"
      MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1613 "intermod.m"
      {
#line 1613 "intermod.m"
        transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1613__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), &(transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9, transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1, &transform_hlds__intermod__env);
      }
#line 1613 "intermod.m"
    }
#line 1613 "intermod.m"
  }
#line 1613 "intermod.m"
}

#line 1602 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
#line 1602 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1602 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1602 "intermod.m"
{
#line 1605 "intermod.m"
  {
#line 1605 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1605 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__3_3;
#line 1605 "intermod.m"
    MR_Word transform_hlds__intermod__Domain0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1605 "intermod.m"
    MR_Word transform_hlds__intermod__Range0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1605 "intermod.m"
    MR_Word transform_hlds__intermod__Domain_7;
#line 1605 "intermod.m"
    MR_Word transform_hlds__intermod__Range_8;
#line 1605 "intermod.m"
    MR_Word transform_hlds__intermod__P_11;
#line 1605 "intermod.m"
    MR_Word transform_hlds__intermod__P_21;

#line 1613 "intermod.m"
    {
#line 1613 "intermod.m"
      transform_hlds__intermod__P_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1613 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[5]));
#line 1613 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2));
#line 1613 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1613 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 3) = ((MR_Box) (transform_hlds__intermod__TVars_4));
#line 1613 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 4) = ((MR_Box) (transform_hlds__intermod__Domain0_5));
#line 1613 "intermod.m"
    }
#line 1612 "intermod.m"
    {
#line 1612 "intermod.m"
      transform_hlds__intermod__Domain_7 = mercury__solutions__solutions_1_f_1((MR_Word) &transform_hlds__intermod_scalar_common_1[12], transform_hlds__intermod__P_11);
    }
#line 1613 "intermod.m"
    {
#line 1613 "intermod.m"
      transform_hlds__intermod__P_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1613 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[5]));
#line 1613 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4));
#line 1613 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1613 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 3) = ((MR_Box) (transform_hlds__intermod__TVars_4));
#line 1613 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 4) = ((MR_Box) (transform_hlds__intermod__Range0_6));
#line 1613 "intermod.m"
    }
#line 1612 "intermod.m"
    {
#line 1612 "intermod.m"
      transform_hlds__intermod__Range_8 = mercury__solutions__solutions_1_f_1((MR_Word) &transform_hlds__intermod_scalar_common_1[12], transform_hlds__intermod__P_21);
    }
#line 1605 "intermod.m"
    {
#line 1605 "intermod.m"
      transform_hlds__intermod__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1605 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__intermod__Domain_7));
#line 1605 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__intermod__Range_8));
#line 1605 "intermod.m"
    }
#line 1605 "intermod.m"
    return transform_hlds__intermod__HeadVar__3_3;
#line 1605 "intermod.m"
  }
#line 1602 "intermod.m"
}

#line 1592 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0_1(
#line 1592 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1592 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 1592 "intermod.m"
{
#line 1592 "intermod.m"
  {
#line 1592 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 1592 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1592 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__3_3;

#line 1592 "intermod.m"
    {
#line 1592 "intermod.m"
      transform_hlds__intermod__conv0_HeadVar__3_3 = transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 1592 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__3_3));
#line 1592 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 1592 "intermod.m"
  }
#line 1592 "intermod.m"
}

#line 1580 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0(
#line 1580 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1580 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1580 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_9,
#line 1580 "intermod.m"
  MR_Word transform_hlds__intermod__ClassDefn_10)
#line 1580 "intermod.m"
{
#line 1583 "intermod.m"
  {
#line 1583 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 0)));
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 1)));
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod__HLDSFunDeps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 2)));
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod__TVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 4)));
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod__Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 6)));
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 8)));
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 9)));
#line 1583 "intermod.m"
    MR_Word transform_hlds__intermod__QualifiedClassName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_9, (MR_Integer) 0)));
#line 1584 "intermod.m"
    MR_Word transform_hlds__intermod___Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 3)));
#line 1584 "intermod.m"
    MR_Word transform_hlds__intermod___Kinds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 5)));
#line 1584 "intermod.m"
    MR_Word transform_hlds__intermod___HLDSClassInterface_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 7)));
#line 1587 "intermod.m"
    MR_Integer transform_hlds__intermod__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_9, (MR_Integer) 1)));
#line 1589 "intermod.m"
    MR_Word transform_hlds__intermod__V_42_42;
#line 1589 "intermod.m"
    MR_String transform_hlds__intermod__V_24_24;

#line 1589 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__QualifiedClassName_22)) == (MR_mktag((MR_Integer) 1)));
#line 1589 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1589 "intermod.m"
      {
#line 1589 "intermod.m"
        transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__QualifiedClassName_22, (MR_Integer) 0)));
#line 1589 "intermod.m"
        transform_hlds__intermod__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__QualifiedClassName_22, (MR_Integer) 1)));
#line 1589 "intermod.m"
        {
#line 1589 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_42_42);
        }
#line 1589 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1590 "intermod.m"
          {
#line 1590 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_12);
          }
#line 1589 "intermod.m"
      }
#line 1598 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1592 "intermod.m"
      {
#line 1592 "intermod.m"
        MR_Word transform_hlds__intermod__FunDeps_25;
#line 1592 "intermod.m"
        MR_Word transform_hlds__intermod__ItemTypeClass_26;
#line 1592 "intermod.m"
        MR_Word transform_hlds__intermod__Item_27;
#line 1592 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_28;
#line 1592 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 1596 "intermod.m"
        MR_String transform_hlds__intermod__V_34_34;
#line 1596 "intermod.m"
        MR_String transform_hlds__intermod__V_35_35;
#line 1596 "intermod.m"
        MR_Word transform_hlds__intermod__V_36_36;
#line 1596 "intermod.m"
        MR_Word transform_hlds__intermod__V_37_37;

#line 1592 "intermod.m"
        {
#line 1592 "intermod.m"
          transform_hlds__intermod__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[4]));
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_class_6_p_0_1));
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 3) = ((MR_Box) (transform_hlds__intermod__TVars_16));
#line 1592 "intermod.m"
        }
#line 1592 "intermod.m"
        {
#line 1592 "intermod.m"
          transform_hlds__intermod__FunDeps_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, transform_hlds__intermod__V_31_31, transform_hlds__intermod__HLDSFunDeps_14);
        }
#line 1593 "intermod.m"
        {
#line 1593 "intermod.m"
          transform_hlds__intermod__ItemTypeClass_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1593 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 0) = ((MR_Box) (transform_hlds__intermod__QualifiedClassName_22));
#line 1593 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 1) = ((MR_Box) (transform_hlds__intermod__TVars_16));
#line 1593 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 2) = ((MR_Box) (transform_hlds__intermod__Constraints_13));
#line 1593 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 3) = ((MR_Box) (transform_hlds__intermod__FunDeps_25));
#line 1593 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 4) = ((MR_Box) (transform_hlds__intermod__Interface_18));
#line 1593 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 5) = ((MR_Box) (transform_hlds__intermod__TVarSet_20));
#line 1593 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 6) = ((MR_Box) (transform_hlds__intermod__Context_21));
#line 1593 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 7) = ((MR_Box) ((MR_Integer) -1));
#line 1593 "intermod.m"
        }
#line 1595 "intermod.m"
        {
#line 1595 "intermod.m"
          transform_hlds__intermod__Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1595 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_27, 1) = ((MR_Box) (transform_hlds__intermod__ItemTypeClass_26));
#line 1595 "intermod.m"
        }
#line 1596 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1596 "intermod.m"
        transform_hlds__intermod__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1596 "intermod.m"
        transform_hlds__intermod__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1596 "intermod.m"
        transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1596 "intermod.m"
        transform_hlds__intermod__MercInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1597 "intermod.m"
        {
#line 1597 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_28, transform_hlds__intermod__Item_27);
#line 1597 "intermod.m"
          return;
        }
#line 1592 "intermod.m"
      }
#line 1598 "intermod.m"
    else
#line 1598 "intermod.m"
      {
#line 1598 "intermod.m"
      }
#line 1583 "intermod.m"
  }
#line 1580 "intermod.m"
}

#line 1578 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0_1(
#line 1578 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1578 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1578 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1578 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1578 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1578 "intermod.m"
{
#line 1578 "intermod.m"
  {
#line 1578 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1578 "intermod.m"
    {
#line 1578 "intermod.m"
      transform_hlds__intermod__intermod_write_class_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1578 "intermod.m"
      return;
    }
#line 1578 "intermod.m"
  }
#line 1578 "intermod.m"
}

#line 1572 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0(
#line 1572 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1572 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1572 "intermod.m"
{
#line 1575 "intermod.m"
  {
#line 1575 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1575 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1575 "intermod.m"
    MR_Word transform_hlds__intermod__Classes_9;
#line 1575 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12;
#line 1578 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_11;

#line 1576 "intermod.m"
    {
#line 1576 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1577 "intermod.m"
    {
#line 1577 "intermod.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Classes_9);
    }
#line 1578 "intermod.m"
    {
#line 1578 "intermod.m"
      transform_hlds__intermod__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1578 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[2]));
#line 1578 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_classes_4_p_0_1));
#line 1578 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1578 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1578 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1578 "intermod.m"
    }
#line 1578 "intermod.m"
    {
#line 1578 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_12_12, transform_hlds__intermod__Classes_9, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_11);
    }
#line 1575 "intermod.m"
  }
#line 1572 "intermod.m"
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
    MR_Word transform_hlds__intermod__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 4)));
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 5)));
#line 1549 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstId_9, (MR_Integer) 1)));
#line 1550 "intermod.m"
    MR_Word transform_hlds__intermod___MaybeMatchingTypeCtors_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 3)));
#line 1553 "intermod.m"
    MR_Word transform_hlds__intermod__V_34_34;
#line 1553 "intermod.m"
    MR_String transform_hlds__intermod__V_20_20;

#line 1553 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1553 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1553 "intermod.m"
      {
#line 1553 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 0)));
#line 1553 "intermod.m"
        transform_hlds__intermod__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 1)));
#line 1553 "intermod.m"
        {
#line 1553 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_34_34);
        }
#line 1553 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1554 "intermod.m"
          {
#line 1554 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_19);
          }
#line 1553 "intermod.m"
      }
#line 1568 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1562 "intermod.m"
      {
#line 1562 "intermod.m"
        MR_Word transform_hlds__intermod__InstBody_22;
#line 1562 "intermod.m"
        MR_Word transform_hlds__intermod__ItemInstDefn_23;
#line 1562 "intermod.m"
        MR_Word transform_hlds__intermod__Item_24;
#line 1562 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_25;
#line 1566 "intermod.m"
        MR_String transform_hlds__intermod__V_30_30;
#line 1566 "intermod.m"
        MR_String transform_hlds__intermod__V_31_31;
#line 1566 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 1566 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;

#line 1559 "intermod.m"
        if ((transform_hlds__intermod__Body_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1561 "intermod.m"
          transform_hlds__intermod__InstBody_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1559 "intermod.m"
        else
#line 1557 "intermod.m"
          {
#line 1557 "intermod.m"
            MR_Word transform_hlds__intermod__Inst2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_16, (MR_Integer) 0)));

#line 1558 "intermod.m"
            {
#line 1558 "intermod.m"
              transform_hlds__intermod__InstBody_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__InstBody_22, 0) = ((MR_Box) (transform_hlds__intermod__Inst2_21));
#line 1558 "intermod.m"
            }
#line 1557 "intermod.m"
          }
#line 1563 "intermod.m"
        {
#line 1563 "intermod.m"
          transform_hlds__intermod__ItemInstDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1563 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 0) = ((MR_Box) (transform_hlds__intermod__SymName_12));
#line 1563 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 1) = ((MR_Box) (transform_hlds__intermod__Args_15));
#line 1563 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 2) = ((MR_Box) (transform_hlds__intermod__InstBody_22));
#line 1563 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 3) = ((MR_Box) (transform_hlds__intermod__Varset_14));
#line 1563 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 4) = ((MR_Box) (transform_hlds__intermod__Context_18));
#line 1563 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1563 "intermod.m"
        }
#line 1565 "intermod.m"
        transform_hlds__intermod__Item_24 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) transform_hlds__intermod__ItemInstDefn_23);
#line 1566 "intermod.m"
        transform_hlds__intermod__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1566 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1566 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1566 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1566 "intermod.m"
        transform_hlds__intermod__MercInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1567 "intermod.m"
        {
#line 1567 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_25, transform_hlds__intermod__Item_24);
#line 1567 "intermod.m"
          return;
        }
#line 1562 "intermod.m"
      }
#line 1568 "intermod.m"
    else
#line 1568 "intermod.m"
      {
#line 1568 "intermod.m"
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

#line 1536 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0(
#line 1536 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1536 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1536 "intermod.m"
{
#line 1539 "intermod.m"
  {
#line 1539 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1539 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1539 "intermod.m"
    MR_Word transform_hlds__intermod__Insts_9;
#line 1539 "intermod.m"
    MR_Word transform_hlds__intermod__UserInstTable_10;
#line 1539 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13;
#line 1543 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12;

#line 1540 "intermod.m"
    {
#line 1540 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1541 "intermod.m"
    {
#line 1541 "intermod.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Insts_9);
    }
#line 1542 "intermod.m"
    {
#line 1542 "intermod.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(transform_hlds__intermod__Insts_9, &transform_hlds__intermod__UserInstTable_10);
    }
#line 1543 "intermod.m"
    {
#line 1543 "intermod.m"
      transform_hlds__intermod__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1543 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[1]));
#line 1543 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_insts_4_p_0_1));
#line 1543 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1543 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1543 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1543 "intermod.m"
    }
#line 1543 "intermod.m"
    {
#line 1543 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_13_13, transform_hlds__intermod__UserInstTable_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12);
    }
#line 1539 "intermod.m"
  }
#line 1536 "intermod.m"
}

#line 1516 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_6_p_0(
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__ModeId_9,
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__ModeDefn_10)
#line 1516 "intermod.m"
{
#line 1519 "intermod.m"
  {
#line 1519 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeId_9, (MR_Integer) 0)));
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__Varset_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 0)));
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 1)));
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__Mode_16;
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 3)));
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 4)));
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 2)));
#line 1520 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeId_9, (MR_Integer) 1)));
#line 1524 "intermod.m"
    MR_Word transform_hlds__intermod__V_33_33;
#line 1524 "intermod.m"
    MR_String transform_hlds__intermod__V_19_19;

#line 1521 "intermod.m"
    transform_hlds__intermod__Mode_16 = (MR_Word) transform_hlds__intermod__V_25_25;
#line 1524 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1524 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1524 "intermod.m"
      {
#line 1524 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 0)));
#line 1524 "intermod.m"
        transform_hlds__intermod__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 1)));
#line 1524 "intermod.m"
        {
#line 1524 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_33_33);
        }
#line 1524 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1525 "intermod.m"
          {
#line 1525 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_18);
          }
#line 1524 "intermod.m"
      }
#line 1532 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1528 "intermod.m"
      {
#line 1528 "intermod.m"
        MR_Word transform_hlds__intermod__ItemModeDefn_20;
#line 1528 "intermod.m"
        MR_Word transform_hlds__intermod__Item_21;
#line 1528 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_22;
#line 1528 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = (MR_Word) transform_hlds__intermod__Mode_16;
#line 1530 "intermod.m"
        MR_String transform_hlds__intermod__V_29_29;
#line 1530 "intermod.m"
        MR_String transform_hlds__intermod__V_30_30;
#line 1530 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 1530 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;

#line 1527 "intermod.m"
        {
#line 1527 "intermod.m"
          transform_hlds__intermod__ItemModeDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1527 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 0) = ((MR_Box) (transform_hlds__intermod__SymName_12));
#line 1527 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 1) = ((MR_Box) (transform_hlds__intermod__Args_15));
#line 1527 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 2) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 1527 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 3) = ((MR_Box) (transform_hlds__intermod__Varset_14));
#line 1527 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 4) = ((MR_Box) (transform_hlds__intermod__Context_17));
#line 1527 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1527 "intermod.m"
        }
#line 1529 "intermod.m"
        {
#line 1529 "intermod.m"
          transform_hlds__intermod__Item_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1529 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_21, 1) = ((MR_Box) (transform_hlds__intermod__ItemModeDefn_20));
#line 1529 "intermod.m"
        }
#line 1530 "intermod.m"
        transform_hlds__intermod__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1530 "intermod.m"
        transform_hlds__intermod__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1530 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1530 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1530 "intermod.m"
        transform_hlds__intermod__MercInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1531 "intermod.m"
        {
#line 1531 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_22, transform_hlds__intermod__Item_21);
#line 1531 "intermod.m"
          return;
        }
#line 1528 "intermod.m"
      }
#line 1532 "intermod.m"
    else
#line 1532 "intermod.m"
      {
#line 1532 "intermod.m"
      }
#line 1519 "intermod.m"
  }
#line 1516 "intermod.m"
}

#line 1514 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0_1(
#line 1514 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1514 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1514 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1514 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1514 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1514 "intermod.m"
{
#line 1514 "intermod.m"
  {
#line 1514 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1514 "intermod.m"
    {
#line 1514 "intermod.m"
      transform_hlds__intermod__intermod_write_mode_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1514 "intermod.m"
      return;
    }
#line 1514 "intermod.m"
  }
#line 1514 "intermod.m"
}

#line 1507 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0(
#line 1507 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1507 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1507 "intermod.m"
{
#line 1510 "intermod.m"
  {
#line 1510 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1510 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1510 "intermod.m"
    MR_Word transform_hlds__intermod__Modes_9;
#line 1510 "intermod.m"
    MR_Word transform_hlds__intermod__ModeDefns_10;
#line 1510 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13;
#line 1514 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12;

#line 1511 "intermod.m"
    {
#line 1511 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1512 "intermod.m"
    {
#line 1512 "intermod.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Modes_9);
    }
#line 1513 "intermod.m"
    {
#line 1513 "intermod.m"
      hlds__hlds_data__mode_table_get_mode_defns_2_p_0(transform_hlds__intermod__Modes_9, &transform_hlds__intermod__ModeDefns_10);
    }
#line 1514 "intermod.m"
    {
#line 1514 "intermod.m"
      transform_hlds__intermod__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[0]));
#line 1514 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_modes_4_p_0_1));
#line 1514 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1514 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1514 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1514 "intermod.m"
    }
#line 1514 "intermod.m"
    {
#line 1514 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_13_13, transform_hlds__intermod__ModeDefns_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12);
    }
#line 1510 "intermod.m"
  }
#line 1507 "intermod.m"
}

#line 1490 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(
#line 1490 "intermod.m"
  MR_Word transform_hlds__intermod__ConsId_5,
#line 1490 "intermod.m"
  MR_Word transform_hlds__intermod__ConsTag_6,
#line 1490 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Values_0_14,
#line 1490 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Values_15)
#line 1490 "intermod.m"
{
#line 1494 "intermod.m"
  {
#line 1494 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1494 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_10;
#line 1494 "intermod.m"
    MR_String transform_hlds__intermod__ForeignTag_13;
#line 1494 "intermod.m"
    MR_Word transform_hlds__intermod__V_24_24;
#line 1497 "intermod.m"
    MR_Word transform_hlds__intermod__SymName0_8;
#line 1495 "intermod.m"
    MR_Integer transform_hlds__intermod__V_16_16;
#line 1495 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 1502 "intermod.m"
    MR_String transform_hlds__intermod__ForeignTag0_12;
#line 1500 "intermod.m"
    MR_Word transform_hlds__intermod___ForeignLang_11;

#line 1495 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1495 "intermod.m"
      {
#line 1495 "intermod.m"
        transform_hlds__intermod__SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 1)));
#line 1495 "intermod.m"
        transform_hlds__intermod__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 2)));
#line 1495 "intermod.m"
        transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 3)));
#line 1495 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_16_16 == (MR_Integer) 0);
#line 1495 "intermod.m"
      }
#line 1497 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1496 "intermod.m"
      transform_hlds__intermod__SymName_10 = transform_hlds__intermod__SymName0_8;
#line 1497 "intermod.m"
    else
#line 1498 "intermod.m"
      {
#line 1498 "intermod.m"
        {
#line 1498 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/4", (MR_String) "expected enumeration constant");
#line 1498 "intermod.m"
          return;
        }
#line 1498 "intermod.m"
      }
#line 1500 "intermod.m"
    transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ConsTag_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1500 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1500 "intermod.m"
      {
#line 1500 "intermod.m"
        transform_hlds__intermod___ForeignLang_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 1)));
#line 1500 "intermod.m"
        transform_hlds__intermod__ForeignTag0_12 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 2)));
#line 1501 "intermod.m"
        transform_hlds__intermod__ForeignTag_13 = transform_hlds__intermod__ForeignTag0_12;
#line 1500 "intermod.m"
      }
#line 1500 "intermod.m"
    else
#line 1503 "intermod.m"
      {
#line 1503 "intermod.m"
        {
#line 1503 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/4", (MR_String) "expected foreign tag");
#line 1503 "intermod.m"
          return;
        }
#line 1503 "intermod.m"
      }
#line 1505 "intermod.m"
    {
#line 1505 "intermod.m"
      transform_hlds__intermod__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_24_24, 0) = ((MR_Box) (transform_hlds__intermod__SymName_10));
#line 1505 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_24_24, 1) = ((MR_Box) (transform_hlds__intermod__ForeignTag_13));
#line 1505 "intermod.m"
    }
#line 1505 "intermod.m"
    {
#line 1505 "intermod.m"
      MR_Word base;
#line 1505 "intermod.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "intermod.m"
      *transform_hlds__intermod__STATE_VARIABLE_Values_15 = base;
#line 1505 "intermod.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_24_24));
#line 1505 "intermod.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Values_0_14));
#line 1505 "intermod.m"
    }
#line 1494 "intermod.m"
  }
#line 1490 "intermod.m"
}

#line 1476 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0_1(
#line 1476 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1476 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1476 "intermod.m"
{
#line 1476 "intermod.m"
  {
#line 1476 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1476 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15;

#line 1476 "intermod.m"
    {
#line 1476 "intermod.m"
      transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15);
    }
#line 1476 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15));
#line 1476 "intermod.m"
  }
#line 1476 "intermod.m"
}

#line 1351 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0(
#line 1351 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1351 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1351 "intermod.m"
{
#line 1354 "intermod.m"
  {
#line 1354 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__VarSet_9;
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__Args_10;
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__Body_11;
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__Context_12;
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__Name_13;
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__TypeBody_24;
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__MainItemTypeDefn_29;
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__MainItem_30;
#line 1354 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_31;
#line 1359 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_14;
#line 1382 "intermod.m"
    MR_String transform_hlds__intermod__V_122_122;
#line 1382 "intermod.m"
    MR_String transform_hlds__intermod__V_123_123;
#line 1382 "intermod.m"
    MR_Word transform_hlds__intermod__V_124_124;
#line 1382 "intermod.m"
    MR_Word transform_hlds__intermod__V_125_125;
#line 1456 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL_33;
#line 1456 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC_34;
#line 1456 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava_35;
#line 1456 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp_36;
#line 1456 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang_37;
#line 1387 "intermod.m"
    MR_Word transform_hlds__intermod__ForeignTypeBody_32;
#line 1460 "intermod.m"
    MR_Word transform_hlds__intermod__ReservedTag_68;
#line 1460 "intermod.m"
    MR_Word transform_hlds__intermod__V_134_134;
#line 1460 "intermod.m"
    MR_Word transform_hlds__intermod__V_135_135;
#line 1460 "intermod.m"
    MR_Word transform_hlds__intermod__V_136_136;
#line 1460 "intermod.m"
    MR_Word transform_hlds__intermod__V_137_137;
#line 1460 "intermod.m"
    MR_Word transform_hlds__intermod__V_138_138;
#line 1460 "intermod.m"
    MR_Word transform_hlds__intermod__V_139_139;
#line 1460 "intermod.m"
    MR_Word transform_hlds__intermod__V_140_140;
#line 1460 "intermod.m"
    MR_Word transform_hlds__intermod__V_141_141;
#line 1486 "intermod.m"
    MR_Word transform_hlds__intermod__ConsTagVals_72;
#line 1486 "intermod.m"
    MR_Word transform_hlds__intermod__Lang_80;
#line 1473 "intermod.m"
    MR_Word transform_hlds__intermod__DuTypeKind_74;
#line 1473 "intermod.m"
    MR_Word transform_hlds__intermod__V_71_71;
#line 1473 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73;
#line 1473 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75;
#line 1473 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76;
#line 1473 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77;
#line 1473 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78;
#line 1473 "intermod.m"
    MR_Word transform_hlds__intermod__V_79_79;

#line 1355 "intermod.m"
    {
#line 1355 "intermod.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__VarSet_9);
    }
#line 1356 "intermod.m"
    {
#line 1356 "intermod.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Args_10);
    }
#line 1357 "intermod.m"
    {
#line 1357 "intermod.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Body_11);
    }
#line 1358 "intermod.m"
    {
#line 1358 "intermod.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Context_12);
    }
#line 1359 "intermod.m"
    transform_hlds__intermod__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 0)));
#line 1359 "intermod.m"
    transform_hlds__intermod___Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 1)));
#line 1366 "intermod.m"
#line 1366 "intermod.m"
    switch (MR_tag((MR_Word) transform_hlds__intermod__Body_11)) {
#line 1366 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1366 "intermod.m"
      case (MR_Integer) 0:
#line 1373 "intermod.m"
        {
#line 1374 "intermod.m"
          transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__intermod_scalar_common_7[0]);
#line 1373 "intermod.m"
        }
#line 1366 "intermod.m"
        break;
#line 1366 "intermod.m"
      case (MR_Integer) 1:
#line 1363 "intermod.m"
        {
#line 1363 "intermod.m"
          MR_Word transform_hlds__intermod__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1363 "intermod.m"
          MR_Word transform_hlds__intermod__MaybeUserEqComp_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1363 "intermod.m"
          MR_Word transform_hlds__intermod__MaybeDirectArgCtors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1361 "intermod.m"
          MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1361 "intermod.m"
          MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1361 "intermod.m"
          MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1361 "intermod.m"
          MR_Word transform_hlds__intermod__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1361 "intermod.m"
          MR_Word transform_hlds__intermod__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1361 "intermod.m"
          MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));

#line 1364 "intermod.m"
          {
#line 1364 "intermod.m"
            transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1364 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__Ctors_15));
#line 1364 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_19));
#line 1364 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 2) = ((MR_Box) (transform_hlds__intermod__MaybeDirectArgCtors_20));
#line 1364 "intermod.m"
          }
#line 1363 "intermod.m"
        }
#line 1366 "intermod.m"
        break;
#line 1366 "intermod.m"
      case (MR_Integer) 2:
#line 1367 "intermod.m"
        {
#line 1367 "intermod.m"
          MR_Word transform_hlds__intermod__EqvType_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__Body_11, (MR_Integer) 0)));

#line 1368 "intermod.m"
          {
#line 1368 "intermod.m"
            transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "intermod.m"
            MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__EqvType_25));
#line 1368 "intermod.m"
          }
#line 1367 "intermod.m"
        }
#line 1366 "intermod.m"
        break;
#line 1366 "intermod.m"
      case (MR_Integer) 3:
#line 1366 "intermod.m"
#line 1366 "intermod.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 0)))) {
#line 1366 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1366 "intermod.m"
          case (MR_Integer) 0:
#line 1376 "intermod.m"
            {
#line 1376 "intermod.m"
              MR_Word transform_hlds__intermod__SolverTypeDetails_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1376 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeUserEqComp_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 2)));

#line 1377 "intermod.m"
              {
#line 1377 "intermod.m"
                transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1377 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 1) = ((MR_Box) (transform_hlds__intermod__SolverTypeDetails_28));
#line 1377 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 2) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_121));
#line 1377 "intermod.m"
              }
#line 1376 "intermod.m"
            }
#line 1366 "intermod.m"
            break;
#line 1366 "intermod.m"
          case (MR_Integer) 1:
#line 1370 "intermod.m"
            {
#line 1370 "intermod.m"
              MR_Word transform_hlds__intermod__Details_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 1)));

#line 1371 "intermod.m"
              {
#line 1371 "intermod.m"
                transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1371 "intermod.m"
                MR_hl_field(MR_mktag(2), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__Details_26));
#line 1371 "intermod.m"
              }
#line 1370 "intermod.m"
            }
#line 1366 "intermod.m"
            break;
#line 1366 "intermod.m"
        }
#line 1366 "intermod.m"
        break;
#line 1366 "intermod.m"
    }
#line 1379 "intermod.m"
    {
#line 1379 "intermod.m"
      transform_hlds__intermod__MainItemTypeDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1379 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1379 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1379 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 2) = ((MR_Box) (transform_hlds__intermod__TypeBody_24));
#line 1379 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1379 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1379 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1379 "intermod.m"
    }
#line 1381 "intermod.m"
    transform_hlds__intermod__MainItem_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__intermod__MainItemTypeDefn_29);
#line 1382 "intermod.m"
    transform_hlds__intermod__V_122_122 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 0)));
#line 1382 "intermod.m"
    transform_hlds__intermod__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 1)));
#line 1382 "intermod.m"
    transform_hlds__intermod__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 2)));
#line 1382 "intermod.m"
    transform_hlds__intermod__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 3)));
#line 1382 "intermod.m"
    transform_hlds__intermod__MercInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 4)));
#line 1383 "intermod.m"
    {
#line 1383 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__MainItem_30);
    }
#line 1386 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1))))
#line 1386 "intermod.m"
      {
#line 1386 "intermod.m"
        MR_Word transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1386 "intermod.m"
        MR_Word transform_hlds__intermod__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1386 "intermod.m"
        MR_Word transform_hlds__intermod__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1386 "intermod.m"
        MR_Word transform_hlds__intermod__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1386 "intermod.m"
        MR_Word transform_hlds__intermod__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1386 "intermod.m"
        MR_Word transform_hlds__intermod__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1386 "intermod.m"
        MR_Word transform_hlds__intermod__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1386 "intermod.m"
        MR_Word transform_hlds__intermod__V_132_132 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1386 "intermod.m"
        MR_Word transform_hlds__intermod__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1386 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_91_91)) == (MR_mktag((MR_Integer) 1)));
#line 1386 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1386 "intermod.m"
          transform_hlds__intermod__ForeignTypeBody_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_91_91, (MR_Integer) 0)));
#line 1386 "intermod.m"
      }
#line 1386 "intermod.m"
    else
#line 1386 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 0))))
#line 1385 "intermod.m"
      {
#line 1385 "intermod.m"
        transform_hlds__intermod__ForeignTypeBody_32 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__Body_11), (MR_Integer) 0);
#line 1385 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1385 "intermod.m"
      }
#line 1386 "intermod.m"
    else
#line 1386 "intermod.m"
      transform_hlds__intermod__succeeded = MR_FALSE;
#line 1387 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1387 "intermod.m"
      {
#line 1388 "intermod.m"
        transform_hlds__intermod__MaybeIL_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 0)));
#line 1388 "intermod.m"
        transform_hlds__intermod__MaybeC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 1)));
#line 1388 "intermod.m"
        transform_hlds__intermod__MaybeJava_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 2)));
#line 1388 "intermod.m"
        transform_hlds__intermod__MaybeCSharp_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 3)));
#line 1388 "intermod.m"
        transform_hlds__intermod__MaybeErlang_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 4)));
#line 1388 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1387 "intermod.m"
      }
#line 1456 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1403 "intermod.m"
      {
#line 1401 "intermod.m"
        if ((transform_hlds__intermod__MaybeIL_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1402 "intermod.m"
          {
#line 1402 "intermod.m"
          }
#line 1401 "intermod.m"
        else
#line 1392 "intermod.m"
          {
#line 1392 "intermod.m"
            MR_Word transform_hlds__intermod__DataIL_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeIL_33, (MR_Integer) 0)));
#line 1392 "intermod.m"
            MR_Word transform_hlds__intermod__ILForeignType_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 0)));
#line 1392 "intermod.m"
            MR_Word transform_hlds__intermod__ILMaybeUserEqComp_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 1)));
#line 1392 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsIL_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 2)));
#line 1392 "intermod.m"
            MR_Word transform_hlds__intermod__ILItemTypeDefn_42;
#line 1392 "intermod.m"
            MR_Word transform_hlds__intermod__ILItem_43;
#line 1392 "intermod.m"
            MR_Word transform_hlds__intermod__V_92_92;
#line 1392 "intermod.m"
            MR_Word transform_hlds__intermod__V_93_93 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__ILForeignType_39);

#line 1396 "intermod.m"
            {
#line 1396 "intermod.m"
              transform_hlds__intermod__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1396 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_92_92, 1) = ((MR_Box) (transform_hlds__intermod__V_93_93));
#line 1396 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_92_92, 2) = ((MR_Box) (transform_hlds__intermod__ILMaybeUserEqComp_40));
#line 1396 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_92_92, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsIL_41));
#line 1396 "intermod.m"
            }
#line 1395 "intermod.m"
            {
#line 1395 "intermod.m"
              transform_hlds__intermod__ILItemTypeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1395 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1395 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 2) = ((MR_Box) (transform_hlds__intermod__V_92_92));
#line 1395 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1395 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1395 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1395 "intermod.m"
            }
#line 1399 "intermod.m"
            transform_hlds__intermod__ILItem_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__intermod__ILItemTypeDefn_42);
#line 1400 "intermod.m"
            {
#line 1400 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ILItem_43);
            }
#line 1392 "intermod.m"
          }
#line 1414 "intermod.m"
        if ((transform_hlds__intermod__MaybeC_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1415 "intermod.m"
          {
#line 1415 "intermod.m"
          }
#line 1414 "intermod.m"
        else
#line 1405 "intermod.m"
          {
#line 1405 "intermod.m"
            MR_Word transform_hlds__intermod__DataC_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeC_34, (MR_Integer) 0)));
#line 1405 "intermod.m"
            MR_Word transform_hlds__intermod__CForeignType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 0)));
#line 1405 "intermod.m"
            MR_Word transform_hlds__intermod__CMaybeUserEqComp_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 1)));
#line 1405 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsC_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 2)));
#line 1405 "intermod.m"
            MR_Word transform_hlds__intermod__CItemTypeDefn_48;
#line 1405 "intermod.m"
            MR_Word transform_hlds__intermod__CItem_49;
#line 1405 "intermod.m"
            MR_Word transform_hlds__intermod__V_96_96;
#line 1405 "intermod.m"
            MR_Word transform_hlds__intermod__V_97_97;

#line 1409 "intermod.m"
            {
#line 1409 "intermod.m"
              transform_hlds__intermod__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_97_97, 0) = ((MR_Box) (transform_hlds__intermod__CForeignType_45));
#line 1409 "intermod.m"
            }
#line 1409 "intermod.m"
            {
#line 1409 "intermod.m"
              transform_hlds__intermod__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1409 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_96_96, 1) = ((MR_Box) (transform_hlds__intermod__V_97_97));
#line 1409 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_96_96, 2) = ((MR_Box) (transform_hlds__intermod__CMaybeUserEqComp_46));
#line 1409 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_96_96, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsC_47));
#line 1409 "intermod.m"
            }
#line 1408 "intermod.m"
            {
#line 1408 "intermod.m"
              transform_hlds__intermod__CItemTypeDefn_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1408 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1408 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1408 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 2) = ((MR_Box) (transform_hlds__intermod__V_96_96));
#line 1408 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1408 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1408 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1408 "intermod.m"
            }
#line 1412 "intermod.m"
            transform_hlds__intermod__CItem_49 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__intermod__CItemTypeDefn_48);
#line 1413 "intermod.m"
            {
#line 1413 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__CItem_49);
            }
#line 1405 "intermod.m"
          }
#line 1427 "intermod.m"
        if ((transform_hlds__intermod__MaybeJava_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1428 "intermod.m"
          {
#line 1428 "intermod.m"
          }
#line 1427 "intermod.m"
        else
#line 1418 "intermod.m"
          {
#line 1418 "intermod.m"
            MR_Word transform_hlds__intermod__DataJava_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeJava_35, (MR_Integer) 0)));
#line 1418 "intermod.m"
            MR_Word transform_hlds__intermod__JavaForeignType_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 0)));
#line 1418 "intermod.m"
            MR_Word transform_hlds__intermod__JavaMaybeUserEqComp_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 1)));
#line 1418 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsJava_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 2)));
#line 1418 "intermod.m"
            MR_Word transform_hlds__intermod__JavaItemTypeDefn_54;
#line 1418 "intermod.m"
            MR_Word transform_hlds__intermod__JavaItem_55;
#line 1418 "intermod.m"
            MR_Word transform_hlds__intermod__V_100_100;
#line 1418 "intermod.m"
            MR_Word transform_hlds__intermod__V_101_101;

#line 1422 "intermod.m"
            {
#line 1422 "intermod.m"
              transform_hlds__intermod__V_101_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "intermod.m"
              MR_hl_field(MR_mktag(2), transform_hlds__intermod__V_101_101, 0) = ((MR_Box) (transform_hlds__intermod__JavaForeignType_51));
#line 1422 "intermod.m"
            }
#line 1422 "intermod.m"
            {
#line 1422 "intermod.m"
              transform_hlds__intermod__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1422 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_100_100, 1) = ((MR_Box) (transform_hlds__intermod__V_101_101));
#line 1422 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_100_100, 2) = ((MR_Box) (transform_hlds__intermod__JavaMaybeUserEqComp_52));
#line 1422 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_100_100, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsJava_53));
#line 1422 "intermod.m"
            }
#line 1421 "intermod.m"
            {
#line 1421 "intermod.m"
              transform_hlds__intermod__JavaItemTypeDefn_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1421 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1421 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1421 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 2) = ((MR_Box) (transform_hlds__intermod__V_100_100));
#line 1421 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1421 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1421 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1421 "intermod.m"
            }
#line 1425 "intermod.m"
            transform_hlds__intermod__JavaItem_55 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__intermod__JavaItemTypeDefn_54);
#line 1426 "intermod.m"
            {
#line 1426 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__JavaItem_55);
            }
#line 1418 "intermod.m"
          }
#line 1440 "intermod.m"
        if ((transform_hlds__intermod__MaybeCSharp_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1441 "intermod.m"
          {
#line 1441 "intermod.m"
          }
#line 1440 "intermod.m"
        else
#line 1431 "intermod.m"
          {
#line 1431 "intermod.m"
            MR_Word transform_hlds__intermod__DataCSharp_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeCSharp_36, (MR_Integer) 0)));
#line 1431 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpForeignType_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 0)));
#line 1431 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpMaybeUserEqComp_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 1)));
#line 1431 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsCSharp_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 2)));
#line 1431 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpItemTypeDefn_60;
#line 1431 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpItem_61;
#line 1431 "intermod.m"
            MR_Word transform_hlds__intermod__V_104_104;
#line 1431 "intermod.m"
            MR_Word transform_hlds__intermod__V_105_105;

#line 1435 "intermod.m"
            {
#line 1435 "intermod.m"
              transform_hlds__intermod__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1435 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_105_105, 1) = ((MR_Box) (transform_hlds__intermod__CSharpForeignType_57));
#line 1435 "intermod.m"
            }
#line 1435 "intermod.m"
            {
#line 1435 "intermod.m"
              transform_hlds__intermod__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1435 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_104_104, 1) = ((MR_Box) (transform_hlds__intermod__V_105_105));
#line 1435 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_104_104, 2) = ((MR_Box) (transform_hlds__intermod__CSharpMaybeUserEqComp_58));
#line 1435 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_104_104, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsCSharp_59));
#line 1435 "intermod.m"
            }
#line 1434 "intermod.m"
            {
#line 1434 "intermod.m"
              transform_hlds__intermod__CSharpItemTypeDefn_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1434 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1434 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1434 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 2) = ((MR_Box) (transform_hlds__intermod__V_104_104));
#line 1434 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1434 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1434 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1434 "intermod.m"
            }
#line 1438 "intermod.m"
            transform_hlds__intermod__CSharpItem_61 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__intermod__CSharpItemTypeDefn_60);
#line 1439 "intermod.m"
            {
#line 1439 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__CSharpItem_61);
            }
#line 1431 "intermod.m"
          }
#line 1453 "intermod.m"
        if ((transform_hlds__intermod__MaybeErlang_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1454 "intermod.m"
          {
#line 1454 "intermod.m"
          }
#line 1453 "intermod.m"
        else
#line 1444 "intermod.m"
          {
#line 1444 "intermod.m"
            MR_Word transform_hlds__intermod__DataErlang_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeErlang_37, (MR_Integer) 0)));
#line 1444 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangMaybeUserEqComp_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataErlang_62, (MR_Integer) 1)));
#line 1444 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsErlang_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataErlang_62, (MR_Integer) 2)));
#line 1444 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangItemTypeDefn_66;
#line 1444 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangItem_67;
#line 1444 "intermod.m"
            MR_Word transform_hlds__intermod__V_108_108;
#line 1444 "intermod.m"
            MR_Word transform_hlds__intermod__V_109_109;

#line 1448 "intermod.m"
            {
#line 1448 "intermod.m"
              transform_hlds__intermod__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1448 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_109_109, 1) = NULL;
#line 1448 "intermod.m"
            }
#line 1448 "intermod.m"
            {
#line 1448 "intermod.m"
              transform_hlds__intermod__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1448 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 1) = ((MR_Box) (transform_hlds__intermod__V_109_109));
#line 1448 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 2) = ((MR_Box) (transform_hlds__intermod__ErlangMaybeUserEqComp_64));
#line 1448 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsErlang_65));
#line 1448 "intermod.m"
            }
#line 1447 "intermod.m"
            {
#line 1447 "intermod.m"
              transform_hlds__intermod__ErlangItemTypeDefn_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1447 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1447 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1447 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 2) = ((MR_Box) (transform_hlds__intermod__V_108_108));
#line 1447 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1447 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1447 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1447 "intermod.m"
            }
#line 1451 "intermod.m"
            transform_hlds__intermod__ErlangItem_67 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__intermod__ErlangItemTypeDefn_66);
#line 1452 "intermod.m"
            {
#line 1452 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ErlangItem_67);
            }
#line 1444 "intermod.m"
          }
#line 1403 "intermod.m"
      }
#line 1456 "intermod.m"
    else
#line 1456 "intermod.m"
      {
#line 1456 "intermod.m"
      }
#line 1460 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1)));
#line 1460 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1460 "intermod.m"
      {
#line 1460 "intermod.m"
        transform_hlds__intermod__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1460 "intermod.m"
        transform_hlds__intermod__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1460 "intermod.m"
        transform_hlds__intermod__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1460 "intermod.m"
        transform_hlds__intermod__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1460 "intermod.m"
        transform_hlds__intermod__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1460 "intermod.m"
        transform_hlds__intermod__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1460 "intermod.m"
        transform_hlds__intermod__ReservedTag_68 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1460 "intermod.m"
        transform_hlds__intermod__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1460 "intermod.m"
        transform_hlds__intermod__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1461 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__ReservedTag_68 == (MR_Integer) 0);
#line 1460 "intermod.m"
      }
#line 1469 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1466 "intermod.m"
      {
#line 1466 "intermod.m"
        MR_Word transform_hlds__intermod__ReserveItemPragma_69;
#line 1466 "intermod.m"
        MR_Word transform_hlds__intermod__ReserveItem_70;
#line 1466 "intermod.m"
        MR_Word transform_hlds__intermod__V_112_112;

#line 1465 "intermod.m"
        {
#line 1465 "intermod.m"
          transform_hlds__intermod__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 1465 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_112_112, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 1465 "intermod.m"
        }
#line 1465 "intermod.m"
        {
#line 1465 "intermod.m"
          transform_hlds__intermod__ReserveItemPragma_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1465 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 0) = ((MR_Box) (transform_hlds__intermod__V_112_112));
#line 1465 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1465 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1465 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 3) = ((MR_Box) ((MR_Integer) -1));
#line 1465 "intermod.m"
        }
#line 1467 "intermod.m"
        {
#line 1467 "intermod.m"
          transform_hlds__intermod__ReserveItem_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ReserveItem_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1467 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ReserveItem_70, 1) = ((MR_Box) (transform_hlds__intermod__ReserveItemPragma_69));
#line 1467 "intermod.m"
        }
#line 1468 "intermod.m"
        {
#line 1468 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ReserveItem_70);
        }
#line 1466 "intermod.m"
      }
#line 1469 "intermod.m"
    else
#line 1469 "intermod.m"
      {
#line 1469 "intermod.m"
      }
#line 1473 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1)));
#line 1473 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1473 "intermod.m"
      {
#line 1473 "intermod.m"
        transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1473 "intermod.m"
        transform_hlds__intermod__ConsTagVals_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1473 "intermod.m"
        transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1473 "intermod.m"
        transform_hlds__intermod__DuTypeKind_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1473 "intermod.m"
        transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1473 "intermod.m"
        transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1473 "intermod.m"
        transform_hlds__intermod__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1473 "intermod.m"
        transform_hlds__intermod__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1473 "intermod.m"
        transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1474 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__DuTypeKind_74)) == (MR_mktag((MR_Integer) 1)));
#line 1474 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1474 "intermod.m"
          transform_hlds__intermod__Lang_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__DuTypeKind_74, (MR_Integer) 0)));
#line 1473 "intermod.m"
      }
#line 1486 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1477 "intermod.m"
      {
#line 1477 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignEnumVals_81;
#line 1477 "intermod.m"
        MR_Word transform_hlds__intermod__FEInfo_82;
#line 1477 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignPragma_83;
#line 1477 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignItemPragma_84;
#line 1477 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignItem_85;
#line 1476 "intermod.m"
        MR_Box transform_hlds__intermod__conv1_ForeignEnumVals_81;

#line 1476 "intermod.m"
        {
#line 1476 "intermod.m"
          mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[11], (MR_Word) &transform_hlds__intermod_scalar_common_2[25], transform_hlds__intermod__ConsTagVals_72, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__intermod__conv1_ForeignEnumVals_81);
        }
#line 1476 "intermod.m"
        transform_hlds__intermod__ForeignEnumVals_81 = ((MR_Word) transform_hlds__intermod__conv1_ForeignEnumVals_81);
#line 1478 "intermod.m"
        {
#line 1478 "intermod.m"
          transform_hlds__intermod__FEInfo_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1478 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 0) = ((MR_Box) (transform_hlds__intermod__Lang_80));
#line 1478 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 1478 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 2) = ((MR_Box) (transform_hlds__intermod__ForeignEnumVals_81));
#line 1478 "intermod.m"
        }
#line 1479 "intermod.m"
        {
#line 1479 "intermod.m"
          transform_hlds__intermod__ForeignPragma_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignPragma_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1479 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignPragma_83, 1) = ((MR_Box) (transform_hlds__intermod__FEInfo_82));
#line 1479 "intermod.m"
        }
#line 1482 "intermod.m"
        {
#line 1482 "intermod.m"
          transform_hlds__intermod__ForeignItemPragma_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1482 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 0) = ((MR_Box) (transform_hlds__intermod__ForeignPragma_83));
#line 1482 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1482 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1482 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 3) = ((MR_Box) ((MR_Integer) -1));
#line 1482 "intermod.m"
        }
#line 1484 "intermod.m"
        {
#line 1484 "intermod.m"
          transform_hlds__intermod__ForeignItem_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignItem_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1484 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignItem_85, 1) = ((MR_Box) (transform_hlds__intermod__ForeignItemPragma_84));
#line 1484 "intermod.m"
        }
#line 1485 "intermod.m"
        {
#line 1485 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ForeignItem_85);
#line 1485 "intermod.m"
          return;
        }
#line 1477 "intermod.m"
      }
#line 1486 "intermod.m"
    else
#line 1486 "intermod.m"
      {
#line 1486 "intermod.m"
      }
#line 1354 "intermod.m"
  }
#line 1351 "intermod.m"
}

#line 1338 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_use_module_3_p_0(
#line 1338 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_4)
#line 1338 "intermod.m"
{
#line 1340 "intermod.m"
  {
#line 1340 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1341 "intermod.m"
    {
#line 1341 "intermod.m"
      mercury__io__write_string_3_p_0((MR_String) ":- use_module ");
    }
#line 1342 "intermod.m"
    {
#line 1342 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__ModuleName_4);
    }
#line 1343 "intermod.m"
    {
#line 1343 "intermod.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1343 "intermod.m"
      return;
    }
#line 1340 "intermod.m"
  }
#line 1338 "intermod.m"
}

#line 1326 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_3(
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

#line 1349 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_2(
#line 1349 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1349 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1349 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1349 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1349 "intermod.m"
{
#line 1349 "intermod.m"
  {
#line 1349 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1349 "intermod.m"
    {
#line 1349 "intermod.m"
      transform_hlds__intermod__intermod_write_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1349 "intermod.m"
      return;
    }
#line 1349 "intermod.m"
  }
#line 1349 "intermod.m"
}

#line 1300 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_1(
#line 1300 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1300 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1300 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1300 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1300 "intermod.m"
{
#line 1300 "intermod.m"
  {
#line 1300 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1300 "intermod.m"
    {
#line 1300 "intermod.m"
      transform_hlds__intermod__intermod_write_use_module_3_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1300 "intermod.m"
      return;
    }
#line 1300 "intermod.m"
  }
#line 1300 "intermod.m"
}

#line 1286 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0(
#line 1286 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4)
#line 1286 "intermod.m"
{
#line 1288 "intermod.m"
  {
#line 1288 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__Preds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__Types_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__WriteHeader_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__Preds_15;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls_16;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__UsedModules_17;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_18;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfo0_19;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo0_20;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_21;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfo_22;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfoForPreds_23;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__V_81_81;
#line 1289 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 1289 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 1289 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 1309 "intermod.m"
    MR_String transform_hlds__intermod__V_53_53;
#line 1309 "intermod.m"
    MR_String transform_hlds__intermod__V_54_54;
#line 1309 "intermod.m"
    MR_Word transform_hlds__intermod__V_55_55;
#line 1309 "intermod.m"
    MR_Word transform_hlds__intermod__V_56_56;
#line 1311 "intermod.m"
    MR_String transform_hlds__intermod__V_57_57;
#line 1311 "intermod.m"
    MR_String transform_hlds__intermod__V_58_58;
#line 1311 "intermod.m"
    MR_Word transform_hlds__intermod__V_59_59;
#line 1311 "intermod.m"
    MR_Word transform_hlds__intermod__V_60_60;
#line 1311 "intermod.m"
    MR_Word transform_hlds__intermod__V_61_61;
#line 1349 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_IO_37_37;
#line 1320 "intermod.m"
    MR_String transform_hlds__intermod__V_63_63;
#line 1320 "intermod.m"
    MR_Word transform_hlds__intermod__V_64_64;
#line 1320 "intermod.m"
    MR_Word transform_hlds__intermod__V_65_65;
#line 1320 "intermod.m"
    MR_Word transform_hlds__intermod__V_66_66;
#line 1320 "intermod.m"
    MR_String transform_hlds__intermod__V_62_62;

#line 1291 "intermod.m"
    {
#line 1291 "intermod.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_67_67, transform_hlds__intermod__Preds0_7, &transform_hlds__intermod__Preds_15);
    }
#line 1292 "intermod.m"
    {
#line 1292 "intermod.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_67_67, transform_hlds__intermod__PredDecls0_8, &transform_hlds__intermod__PredDecls_16);
    }
#line 1294 "intermod.m"
    {
#line 1294 "intermod.m"
      hlds__hlds_module__module_info_get_imported_module_names_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__UsedModules_17);
    }
#line 1297 "intermod.m"
    {
#line 1297 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, transform_hlds__intermod__UsedModules_17);
    }
#line 1299 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1299 "intermod.m"
      {
#line 1299 "intermod.m"
      }
#line 1299 "intermod.m"
    else
#line 1300 "intermod.m"
      {
#line 1300 "intermod.m"
        MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_35_35;

#line 1300 "intermod.m"
        {
#line 1300 "intermod.m"
          mercury__set__fold_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[23], transform_hlds__intermod__UsedModules_17, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_35_35);
        }
#line 1300 "intermod.m"
      }
#line 1303 "intermod.m"
    {
#line 1303 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Globals_18);
    }
#line 1304 "intermod.m"
    {
#line 1304 "intermod.m"
      transform_hlds__intermod__OutInfo0_19 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(transform_hlds__intermod__Globals_18, (MR_Integer) 0);
    }
#line 1309 "intermod.m"
    transform_hlds__intermod__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_19, (MR_Integer) 0)));
#line 1309 "intermod.m"
    transform_hlds__intermod__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_19, (MR_Integer) 1)));
#line 1309 "intermod.m"
    transform_hlds__intermod__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_19, (MR_Integer) 2)));
#line 1309 "intermod.m"
    transform_hlds__intermod__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_19, (MR_Integer) 3)));
#line 1309 "intermod.m"
    transform_hlds__intermod__MercInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_19, (MR_Integer) 4)));
#line 1310 "intermod.m"
    {
#line 1310 "intermod.m"
      transform_hlds__intermod__MercInfo_21 = parse_tree__mercury_to_mercury__merc_out_info_disable_line_numbers_1_f_0(transform_hlds__intermod__MercInfo0_20);
    }
#line 1311 "intermod.m"
    transform_hlds__intermod__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_19, (MR_Integer) 0)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_19, (MR_Integer) 1)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_19, (MR_Integer) 2)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_19, (MR_Integer) 3)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_19, (MR_Integer) 4)));
#line 1311 "intermod.m"
    {
#line 1311 "intermod.m"
      transform_hlds__intermod__OutInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_22, 0) = ((MR_Box) (transform_hlds__intermod__V_57_57));
#line 1311 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_22, 1) = ((MR_Box) (transform_hlds__intermod__V_58_58));
#line 1311 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_22, 2) = ((MR_Box) (transform_hlds__intermod__V_59_59));
#line 1311 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_22, 3) = ((MR_Box) (transform_hlds__intermod__V_60_60));
#line 1311 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_22, 4) = ((MR_Box) (transform_hlds__intermod__MercInfo_21));
#line 1311 "intermod.m"
    }
#line 1349 "intermod.m"
    {
#line 1349 "intermod.m"
      transform_hlds__intermod__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1349 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[2]));
#line 1349 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 1) = ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_2));
#line 1349 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1349 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_22));
#line 1349 "intermod.m"
    }
#line 1349 "intermod.m"
    {
#line 1349 "intermod.m"
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__intermod_scalar_common_2[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_81_81, transform_hlds__intermod__Types_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv1_STATE_VARIABLE_IO_37_37);
    }
#line 1314 "intermod.m"
    {
#line 1314 "intermod.m"
      transform_hlds__intermod__intermod_write_insts_4_p_0(transform_hlds__intermod__OutInfo_22, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1315 "intermod.m"
    {
#line 1315 "intermod.m"
      transform_hlds__intermod__intermod_write_modes_4_p_0(transform_hlds__intermod__OutInfo_22, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1316 "intermod.m"
    {
#line 1316 "intermod.m"
      transform_hlds__intermod__intermod_write_classes_4_p_0(transform_hlds__intermod__OutInfo_22, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1317 "intermod.m"
    {
#line 1317 "intermod.m"
      transform_hlds__intermod__intermod_write_instances_4_p_0(transform_hlds__intermod__OutInfo_22, transform_hlds__intermod__Instances_9);
    }
#line 1320 "intermod.m"
    transform_hlds__intermod__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_22, (MR_Integer) 0)));
#line 1320 "intermod.m"
    transform_hlds__intermod__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_22, (MR_Integer) 1)));
#line 1320 "intermod.m"
    transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_22, (MR_Integer) 2)));
#line 1320 "intermod.m"
    transform_hlds__intermod__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_22, (MR_Integer) 3)));
#line 1320 "intermod.m"
    transform_hlds__intermod__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_22, (MR_Integer) 4)));
#line 1320 "intermod.m"
    {
#line 1320 "intermod.m"
      transform_hlds__intermod__OutInfoForPreds_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1320 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_23, 0) = ((MR_Box) ((MR_String) ""));
#line 1320 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_23, 1) = ((MR_Box) (transform_hlds__intermod__V_63_63));
#line 1320 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_23, 2) = ((MR_Box) (transform_hlds__intermod__V_64_64));
#line 1320 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_23, 3) = ((MR_Box) (transform_hlds__intermod__V_65_65));
#line 1320 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_23, 4) = ((MR_Box) (transform_hlds__intermod__V_66_66));
#line 1320 "intermod.m"
    }
#line 1332 "intermod.m"
#line 1332 "intermod.m"
    switch (transform_hlds__intermod__WriteHeader_12) {
#line 1332 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1332 "intermod.m"
      case (MR_Integer) 0:
#line 1333 "intermod.m"
        {
#line 1333 "intermod.m"
        }
#line 1332 "intermod.m"
        break;
#line 1332 "intermod.m"
      case (MR_Integer) 1:
#line 1322 "intermod.m"
        {
#line 1322 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_74_74;
#line 1322 "intermod.m"
          MR_Word transform_hlds__intermod__ForeignImportsCord_24;
#line 1322 "intermod.m"
          MR_Word transform_hlds__intermod__ForeignImports_25;
#line 1326 "intermod.m"
          MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_IO_44_44;

#line 1323 "intermod.m"
          {
#line 1323 "intermod.m"
            hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__ForeignImportsCord_24);
          }
#line 13136 "transform_hlds.intermod.c"
          transform_hlds__intermod__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 1324 "intermod.m"
          {
#line 1324 "intermod.m"
            transform_hlds__intermod__ForeignImports_25 = mercury__cord__list_1_f_0(transform_hlds__intermod__TypeCtorInfo_74_74, transform_hlds__intermod__ForeignImportsCord_24);
          }
#line 1326 "intermod.m"
          {
#line 1326 "intermod.m"
            mercury__list__foldl_4_p_2(transform_hlds__intermod__TypeCtorInfo_74_74, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[24], transform_hlds__intermod__ForeignImports_25, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv2_STATE_VARIABLE_IO_44_44);
          }
#line 1322 "intermod.m"
        }
#line 1332 "intermod.m"
        break;
#line 1332 "intermod.m"
    }
#line 1335 "intermod.m"
    {
#line 1335 "intermod.m"
      transform_hlds__intermod__intermod_write_pred_decls_4_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__PredDecls_16);
    }
#line 1336 "intermod.m"
    {
#line 1336 "intermod.m"
      transform_hlds__intermod__intermod_write_preds_5_p_0(transform_hlds__intermod__OutInfoForPreds_23, transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__Preds_15);
#line 1336 "intermod.m"
      return;
    }
#line 1288 "intermod.m"
  }
#line 1286 "intermod.m"
}

#line 1274 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_1(
#line 1274 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1274 "intermod.m"
{
#line 1274 "intermod.m"
  {
#line 1274 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1274 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0, 1);
#line 1274 "intermod.m"
  }
#line 1274 "intermod.m"
}

#line 1274 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_3(
#line 1274 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1274 "intermod.m"
{
#line 1274 "intermod.m"
  {
#line 1274 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1274 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23 = ((MR_Word) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23);
#line 1274 "intermod.m"
    {
#line 1274 "intermod.m"
      transform_hlds__intermod__write_intermod_info_3_p_0_2(transform_hlds__intermod__env_ptr);
#line 1274 "intermod.m"
      return;
    }
#line 1274 "intermod.m"
  }
#line 1274 "intermod.m"
}

#line 1274 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_2(
#line 1274 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1274 "intermod.m"
{
#line 1274 "intermod.m"
  {
#line 1274 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1274 "intermod.m"
    {
#line 1274 "intermod.m"
      MR_Word transform_hlds__intermod___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23, (MR_Integer) 0)));

#line 1274 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23, (MR_Integer) 1)));
#line 1275 "intermod.m"
      {
#line 1275 "intermod.m"
        hlds__hlds_data__get_type_defn_status_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15);
      }
#line 1277 "intermod.m"
      if (((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1276 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1277 "intermod.m"
      else
#line 1277 "intermod.m"
      if (((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1277 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1277 "intermod.m"
      else
#line 1277 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_FALSE;
#line 1277 "intermod.m"
      if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1277 "intermod.m"
        {
#line 1277 "intermod.m"
          transform_hlds__intermod__write_intermod_info_3_p_0_1(transform_hlds__intermod__env_ptr);
#line 1277 "intermod.m"
          return;
        }
#line 1274 "intermod.m"
    }
#line 1274 "intermod.m"
  }
#line 1274 "intermod.m"
}

#line 1274 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_4(
#line 1274 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1274 "intermod.m"
{
#line 1274 "intermod.m"
  {
#line 1274 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1274 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0) == 0)
#line 1274 "intermod.m"
      {
#line 1274 "intermod.m"
        {
#line 1274 "intermod.m"
          {
#line 1274 "intermod.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__intermod_scalar_common_2[2], &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12, transform_hlds__intermod__write_intermod_info_3_p_0_3, transform_hlds__intermod__env_ptr);
          }
#line 1274 "intermod.m"
        }
#line 1274 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_FALSE;
#line 1274 "intermod.m"
      }
#line 1274 "intermod.m"
    else
#line 1274 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1274 "intermod.m"
  }
#line 1274 "intermod.m"
}

#line 1252 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0(
#line 1252 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4)
#line 1252 "intermod.m"
{
#line 1252 "intermod.m"
  {
#line 1252 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s transform_hlds__intermod__env;

#line 1254 "intermod.m"
    {
#line 1254 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 1254 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleName_7;
#line 1254 "intermod.m"
      MR_Word transform_hlds__intermod__Preds_8;
#line 1254 "intermod.m"
      MR_Word transform_hlds__intermod__PredDecls_9;
#line 1254 "intermod.m"
      MR_Word transform_hlds__intermod__Instances_10;
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 2157 "intermod.m"
      MR_Word transform_hlds__intermod__V_37_37;
#line 2157 "intermod.m"
      MR_Word transform_hlds__intermod__V_40_40;
#line 2157 "intermod.m"
      MR_Word transform_hlds__intermod__V_41_41;
#line 2157 "intermod.m"
      MR_Word transform_hlds__intermod__V_42_42;
#line 2157 "intermod.m"
      MR_Word transform_hlds__intermod__V_43_43;
#line 2157 "intermod.m"
      MR_Word transform_hlds__intermod__V_44_44;
#line 1268 "intermod.m"
      MR_Word transform_hlds__intermod__TypeCtorInfo_25_25;
#line 1268 "intermod.m"
      MR_Word transform_hlds__intermod__TypeTable_11;

#line 1256 "intermod.m"
      {
#line 1256 "intermod.m"
        hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_7);
      }
#line 1257 "intermod.m"
      {
#line 1257 "intermod.m"
        mercury__io__write_string_3_p_0((MR_String) ":- module ");
      }
#line 1258 "intermod.m"
      {
#line 1258 "intermod.m"
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__ModuleName_7);
      }
#line 1259 "intermod.m"
      {
#line 1259 "intermod.m"
        mercury__io__write_string_3_p_0((MR_String) ".\n");
      }
#line 2157 "intermod.m"
      transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 2157 "intermod.m"
      transform_hlds__intermod__Preds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 2157 "intermod.m"
      transform_hlds__intermod__PredDecls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 2157 "intermod.m"
      transform_hlds__intermod__Instances_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 2157 "intermod.m"
      transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 2157 "intermod.m"
      transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 2157 "intermod.m"
      transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 2157 "intermod.m"
      transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 2157 "intermod.m"
      transform_hlds__intermod__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 13403 "transform_hlds.intermod.c"
      transform_hlds__intermod__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1268 "intermod.m"
      {
#line 1268 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = mercury__set__is_empty_1_p_0(transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__Preds_8);
      }
#line 1268 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1268 "intermod.m"
        {
#line 1269 "intermod.m"
          {
#line 1269 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = mercury__set__is_empty_1_p_0(transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__PredDecls_9);
          }
#line 1268 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1268 "intermod.m"
            {
#line 1270 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = (transform_hlds__intermod__Instances_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1268 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1268 "intermod.m"
                {
#line 1271 "intermod.m"
                  {
#line 1271 "intermod.m"
                    hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__TypeTable_11);
                  }
#line 1272 "intermod.m"
                  {
#line 1272 "intermod.m"
                    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(transform_hlds__intermod__TypeTable_11, &(transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12);
                  }
#line 1274 "intermod.m"
                  {
#line 1274 "intermod.m"
                    transform_hlds__intermod__write_intermod_info_3_p_0_4(&transform_hlds__intermod__env);
                  }
#line 1273 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded);
#line 1268 "intermod.m"
                }
#line 1268 "intermod.m"
            }
#line 1268 "intermod.m"
        }
#line 1282 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1282 "intermod.m"
        {
#line 1282 "intermod.m"
        }
#line 1282 "intermod.m"
      else
#line 1283 "intermod.m"
        {
#line 1283 "intermod.m"
          transform_hlds__intermod__write_intermod_info_body_3_p_0(transform_hlds__intermod__IntermodInfo_4);
#line 1283 "intermod.m"
          return;
        }
#line 1254 "intermod.m"
    }
#line 1252 "intermod.m"
  }
#line 1252 "intermod.m"
}

#line 1220 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
#line 1220 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1220 "intermod.m"
  MR_Word transform_hlds__intermod__SpecialId_2,
#line 1220 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_3,
#line 1220 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 1220 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__5_5,
#line 1220 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1220 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7)
#line 1220 "intermod.m"
{
#line 1224 "intermod.m"
  {
#line 1224 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1224 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1224 "intermod.m"
      {
#line 1224 "intermod.m"
        *transform_hlds__intermod__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1224 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0_6;
#line 1224 "intermod.m"
      }
#line 1224 "intermod.m"
    else
#line 1226 "intermod.m"
      {
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__Pred0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__Pred_18;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__SpecialPreds_20;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__UnifyPredId_21;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__UnifyPredInfo_22;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__TVarSet_23;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__ExistQVars_24;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__ArgTypes_25;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__HeadTypeParams_26;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__Markers0_27;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__Markers_28;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__Context_29;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__UserEqPredId_30;
#line 1226 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34;
#line 1228 "intermod.m"
        MR_Box transform_hlds__intermod__conv0_UnifyPredId_21;
#line 634 "intermod.m"
        MR_Word transform_hlds__intermod__V_45_45;

#line 1227 "intermod.m"
        {
#line 1227 "intermod.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_20);
        }
#line 1228 "intermod.m"
        {
#line 1228 "intermod.m"
          transform_hlds__intermod__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, 0) = ((MR_Box) (transform_hlds__intermod__SpecialId_2));
#line 1228 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_3));
#line 1228 "intermod.m"
        }
#line 1228 "intermod.m"
        {
#line 1228 "intermod.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_20, ((MR_Box) (transform_hlds__intermod__V_34_34)), &transform_hlds__intermod__conv0_UnifyPredId_21);
        }
#line 1228 "intermod.m"
        transform_hlds__intermod__UnifyPredId_21 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_21);
#line 1229 "intermod.m"
        {
#line 1229 "intermod.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_21, &transform_hlds__intermod__UnifyPredInfo_22);
        }
#line 1230 "intermod.m"
        {
#line 1230 "intermod.m"
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__TVarSet_23, &transform_hlds__intermod__ExistQVars_24, &transform_hlds__intermod__ArgTypes_25);
        }
#line 1231 "intermod.m"
        {
#line 1231 "intermod.m"
          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__HeadTypeParams_26);
        }
#line 1232 "intermod.m"
        {
#line 1232 "intermod.m"
          hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_27);
        }
#line 1233 "intermod.m"
        {
#line 1233 "intermod.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_27, &transform_hlds__intermod__Markers_28);
        }
#line 1234 "intermod.m"
        {
#line 1234 "intermod.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__Context_29);
        }
#line 1235 "intermod.m"
        {
#line 1235 "intermod.m"
          hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_28, transform_hlds__intermod__TVarSet_23, transform_hlds__intermod__ExistQVars_24, transform_hlds__intermod__ArgTypes_25, transform_hlds__intermod__HeadTypeParams_26, transform_hlds__intermod__Context_29, transform_hlds__intermod__Pred0_17, &transform_hlds__intermod__Pred_18, &transform_hlds__intermod__UserEqPredId_30);
        }
#line 1226 "intermod.m"
        {
#line 1226 "intermod.m"
          MR_Word base;
#line 1226 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "intermod.m"
          *transform_hlds__intermod__HeadVar__5_5 = base;
#line 1226 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Pred_18));
#line 1226 "intermod.m"
        }
#line 634 "intermod.m"
        {
#line 634 "intermod.m"
          transform_hlds__intermod__V_45_45 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 634 "intermod.m"
        {
#line 634 "intermod.m"
          transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_30, transform_hlds__intermod__V_45_45);
        }
#line 639 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 638 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0_6;
#line 639 "intermod.m"
        else
#line 640 "intermod.m"
          {
#line 640 "intermod.m"
            MR_Word transform_hlds__intermod__V_47_47;

#line 640 "intermod.m"
            {
#line 640 "intermod.m"
              transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_30, &transform_hlds__intermod__V_47_47, transform_hlds__intermod__STATE_VARIABLE_Info_0_6, transform_hlds__intermod__STATE_VARIABLE_Info_7);
            }
#line 640 "intermod.m"
          }
#line 1226 "intermod.m"
      }
#line 1224 "intermod.m"
  }
#line 1220 "intermod.m"
}

#line 1203 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
#line 1203 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1203 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1203 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1203 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1203 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1203 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6)
#line 1203 "intermod.m"
{
#line 1207 "intermod.m"
  {
#line 1207 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1207 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1207 "intermod.m"
      {
#line 1207 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1207 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1207 "intermod.m"
      }
#line 1207 "intermod.m"
    else
#line 1207 "intermod.m"
      {
#line 1207 "intermod.m"
        MR_Word transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));

#line 1207 "intermod.m"
        if (((MR_tag((MR_Word) transform_hlds__intermod__V_35_35)) == (MR_mktag((MR_Integer) 1))))
#line 1208 "intermod.m"
          {
#line 1210 "intermod.m"
            *transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__3_3;
#line 1210 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1208 "intermod.m"
          }
#line 1207 "intermod.m"
        else
#line 1213 "intermod.m"
          {
#line 1213 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEq0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_35_35, (MR_Integer) 0)));
#line 1213 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserCompare0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_35_35, (MR_Integer) 1)));
#line 1213 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEq_24;
#line 1213 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserCompare_25;
#line 1213 "intermod.m"
            MR_Word transform_hlds__intermod__V_30_30;
#line 1213 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_32_32;

#line 1224 "intermod.m"
            if ((transform_hlds__intermod__MaybeUserEq0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1224 "intermod.m"
              {
#line 1224 "intermod.m"
                transform_hlds__intermod__MaybeUserEq_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1224 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_32_32 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1224 "intermod.m"
              }
#line 1224 "intermod.m"
            else
#line 1226 "intermod.m"
              {
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__Pred0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq0_22, (MR_Integer) 0)));
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__Pred_46;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__SpecialPreds_48;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__UnifyPredId_49;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__UnifyPredInfo_50;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__TVarSet_51;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__ExistQVars_52;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__ArgTypes_53;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__HeadTypeParams_54;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__Markers0_55;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__Markers_56;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__Context_57;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__UserEqPredId_58;
#line 1226 "intermod.m"
                MR_Word transform_hlds__intermod__V_62_62;
#line 1228 "intermod.m"
                MR_Box transform_hlds__intermod__conv0_UnifyPredId_49;
#line 634 "intermod.m"
                MR_Word transform_hlds__intermod__V_73_73;

#line 1227 "intermod.m"
                {
#line 1227 "intermod.m"
                  hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_48);
                }
#line 1228 "intermod.m"
                {
#line 1228 "intermod.m"
                  transform_hlds__intermod__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1228 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_2));
#line 1228 "intermod.m"
                }
#line 1228 "intermod.m"
                {
#line 1228 "intermod.m"
                  mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_48, ((MR_Box) (transform_hlds__intermod__V_62_62)), &transform_hlds__intermod__conv0_UnifyPredId_49);
                }
#line 1228 "intermod.m"
                transform_hlds__intermod__UnifyPredId_49 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_49);
#line 1229 "intermod.m"
                {
#line 1229 "intermod.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_49, &transform_hlds__intermod__UnifyPredInfo_50);
                }
#line 1230 "intermod.m"
                {
#line 1230 "intermod.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__TVarSet_51, &transform_hlds__intermod__ExistQVars_52, &transform_hlds__intermod__ArgTypes_53);
                }
#line 1231 "intermod.m"
                {
#line 1231 "intermod.m"
                  hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__HeadTypeParams_54);
                }
#line 1232 "intermod.m"
                {
#line 1232 "intermod.m"
                  hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_55);
                }
#line 1233 "intermod.m"
                {
#line 1233 "intermod.m"
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_55, &transform_hlds__intermod__Markers_56);
                }
#line 1234 "intermod.m"
                {
#line 1234 "intermod.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__Context_57);
                }
#line 1235 "intermod.m"
                {
#line 1235 "intermod.m"
                  hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_56, transform_hlds__intermod__TVarSet_51, transform_hlds__intermod__ExistQVars_52, transform_hlds__intermod__ArgTypes_53, transform_hlds__intermod__HeadTypeParams_54, transform_hlds__intermod__Context_57, transform_hlds__intermod__Pred0_45, &transform_hlds__intermod__Pred_46, &transform_hlds__intermod__UserEqPredId_58);
                }
#line 1226 "intermod.m"
                {
#line 1226 "intermod.m"
                  transform_hlds__intermod__MaybeUserEq_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq_24, 0) = ((MR_Box) (transform_hlds__intermod__Pred_46));
#line 1226 "intermod.m"
                }
#line 634 "intermod.m"
                {
#line 634 "intermod.m"
                  transform_hlds__intermod__V_73_73 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 634 "intermod.m"
                {
#line 634 "intermod.m"
                  transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_58, transform_hlds__intermod__V_73_73);
                }
#line 639 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 638 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_Info_32_32 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 639 "intermod.m"
                else
#line 640 "intermod.m"
                  {
#line 640 "intermod.m"
                    MR_Word transform_hlds__intermod__V_75_75;

#line 640 "intermod.m"
                    {
#line 640 "intermod.m"
                      transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_58, &transform_hlds__intermod__V_75_75, transform_hlds__intermod__STATE_VARIABLE_Info_0_5, &transform_hlds__intermod__STATE_VARIABLE_Info_32_32);
                    }
#line 640 "intermod.m"
                  }
#line 1226 "intermod.m"
              }
#line 1216 "intermod.m"
            {
#line 1216 "intermod.m"
              transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(transform_hlds__intermod__ModuleInfo_1, (MR_Integer) 2, transform_hlds__intermod__TypeCtor_2, transform_hlds__intermod__MaybeUserCompare0_23, &transform_hlds__intermod__MaybeUserCompare_25, transform_hlds__intermod__STATE_VARIABLE_Info_32_32, transform_hlds__intermod__STATE_VARIABLE_Info_6);
            }
#line 1213 "intermod.m"
            {
#line 1213 "intermod.m"
              transform_hlds__intermod__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, 0) = ((MR_Box) (transform_hlds__intermod__MaybeUserEq_24));
#line 1213 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserCompare_25));
#line 1213 "intermod.m"
            }
#line 1213 "intermod.m"
            {
#line 1213 "intermod.m"
              MR_Word base;
#line 1213 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "intermod.m"
              *transform_hlds__intermod__HeadVar__4_4 = base;
#line 1213 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_30_30));
#line 1213 "intermod.m"
            }
#line 1213 "intermod.m"
          }
#line 1207 "intermod.m"
      }
#line 1207 "intermod.m"
  }
#line 1203 "intermod.m"
}

#line 1109 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
#line 1109 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_7,
#line 1109 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_8,
#line 1109 "intermod.m"
  MR_Word transform_hlds__intermod__ForeignTypeBody0_9,
#line 1109 "intermod.m"
  MR_Word * transform_hlds__intermod__ForeignTypeBody_10,
#line 1109 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 1109 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25)
#line 1109 "intermod.m"
{
#line 1114 "intermod.m"
  {
#line 1114 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 0)));
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 1)));
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 2)));
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 3)));
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 4)));
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_17;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__Target_18;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC_19;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL_20;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp_21;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava_22;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang_23;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_26_26;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_27_27;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_28_28;
#line 1114 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_29_29;

#line 1117 "intermod.m"
    {
#line 1117 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_7, &transform_hlds__intermod__Globals_17);
    }
#line 1118 "intermod.m"
    {
#line 1118 "intermod.m"
      libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_17, &transform_hlds__intermod__Target_18);
    }
#line 1133 "intermod.m"
#line 1133 "intermod.m"
    switch (transform_hlds__intermod__Target_18) {
#line 1133 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1133 "intermod.m"
      case (MR_Integer) 0:
#line 1133 "intermod.m"
      case (MR_Integer) 4:
#line 1131 "intermod.m"
        {
#line 1131 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeC0_13, &transform_hlds__intermod__MaybeC_19, transform_hlds__intermod__STATE_VARIABLE_Info_0_24, &transform_hlds__intermod__STATE_VARIABLE_Info_26_26);
        }
#line 1133 "intermod.m"
        break;
#line 1133 "intermod.m"
      case (MR_Integer) 2:
#line 1133 "intermod.m"
      case (MR_Integer) 1:
#line 1133 "intermod.m"
      case (MR_Integer) 3:
#line 1137 "intermod.m"
        {
#line 1138 "intermod.m"
          transform_hlds__intermod__MaybeC_19 = transform_hlds__intermod__MaybeC0_13;
#line 1137 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_Info_26_26 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 1137 "intermod.m"
        }
#line 1133 "intermod.m"
        break;
#line 1133 "intermod.m"
    }
#line 1144 "intermod.m"
#line 1144 "intermod.m"
    switch (transform_hlds__intermod__Target_18) {
#line 1144 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1144 "intermod.m"
      case (MR_Integer) 0:
#line 1144 "intermod.m"
      case (MR_Integer) 2:
#line 1144 "intermod.m"
      case (MR_Integer) 4:
#line 1144 "intermod.m"
      case (MR_Integer) 3:
#line 1149 "intermod.m"
        {
#line 1150 "intermod.m"
          transform_hlds__intermod__MaybeIL_20 = transform_hlds__intermod__MaybeIL0_12;
#line 1149 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_Info_27_27 = transform_hlds__intermod__STATE_VARIABLE_Info_26_26;
#line 1149 "intermod.m"
        }
#line 1144 "intermod.m"
        break;
#line 1144 "intermod.m"
      case (MR_Integer) 1:
#line 1142 "intermod.m"
        {
#line 1142 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeIL0_12, &transform_hlds__intermod__MaybeIL_20, transform_hlds__intermod__STATE_VARIABLE_Info_26_26, &transform_hlds__intermod__STATE_VARIABLE_Info_27_27);
        }
#line 1144 "intermod.m"
        break;
#line 1144 "intermod.m"
    }
#line 1156 "intermod.m"
#line 1156 "intermod.m"
    switch (transform_hlds__intermod__Target_18) {
#line 1156 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1156 "intermod.m"
      case (MR_Integer) 0:
#line 1156 "intermod.m"
      case (MR_Integer) 4:
#line 1156 "intermod.m"
      case (MR_Integer) 1:
#line 1156 "intermod.m"
      case (MR_Integer) 3:
#line 1161 "intermod.m"
        {
#line 1162 "intermod.m"
          transform_hlds__intermod__MaybeCSharp_21 = transform_hlds__intermod__MaybeCSharp0_15;
#line 1161 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_Info_28_28 = transform_hlds__intermod__STATE_VARIABLE_Info_27_27;
#line 1161 "intermod.m"
        }
#line 1156 "intermod.m"
        break;
#line 1156 "intermod.m"
      case (MR_Integer) 2:
#line 1154 "intermod.m"
        {
#line 1154 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeCSharp0_15, &transform_hlds__intermod__MaybeCSharp_21, transform_hlds__intermod__STATE_VARIABLE_Info_27_27, &transform_hlds__intermod__STATE_VARIABLE_Info_28_28);
        }
#line 1156 "intermod.m"
        break;
#line 1156 "intermod.m"
    }
#line 1168 "intermod.m"
#line 1168 "intermod.m"
    switch (transform_hlds__intermod__Target_18) {
#line 1168 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1168 "intermod.m"
      case (MR_Integer) 0:
#line 1168 "intermod.m"
      case (MR_Integer) 2:
#line 1168 "intermod.m"
      case (MR_Integer) 4:
#line 1168 "intermod.m"
      case (MR_Integer) 1:
#line 1173 "intermod.m"
        {
#line 1174 "intermod.m"
          transform_hlds__intermod__MaybeJava_22 = transform_hlds__intermod__MaybeJava0_14;
#line 1173 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_Info_29_29 = transform_hlds__intermod__STATE_VARIABLE_Info_28_28;
#line 1173 "intermod.m"
        }
#line 1168 "intermod.m"
        break;
#line 1168 "intermod.m"
      case (MR_Integer) 3:
#line 1166 "intermod.m"
        {
#line 1166 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeJava0_14, &transform_hlds__intermod__MaybeJava_22, transform_hlds__intermod__STATE_VARIABLE_Info_28_28, &transform_hlds__intermod__STATE_VARIABLE_Info_29_29);
        }
#line 1168 "intermod.m"
        break;
#line 1168 "intermod.m"
    }
#line 1180 "intermod.m"
#line 1180 "intermod.m"
    switch (transform_hlds__intermod__Target_18) {
#line 1180 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1180 "intermod.m"
      case (MR_Integer) 0:
#line 1180 "intermod.m"
      case (MR_Integer) 2:
#line 1180 "intermod.m"
      case (MR_Integer) 1:
#line 1180 "intermod.m"
      case (MR_Integer) 3:
#line 1185 "intermod.m"
        {
#line 1186 "intermod.m"
          transform_hlds__intermod__MaybeErlang_23 = transform_hlds__intermod__MaybeErlang0_16;
#line 1185 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_29_29;
#line 1185 "intermod.m"
        }
#line 1180 "intermod.m"
        break;
#line 1180 "intermod.m"
      case (MR_Integer) 4:
#line 1178 "intermod.m"
        {
#line 1178 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeErlang0_16, &transform_hlds__intermod__MaybeErlang_23, transform_hlds__intermod__STATE_VARIABLE_Info_29_29, transform_hlds__intermod__STATE_VARIABLE_Info_25);
        }
#line 1180 "intermod.m"
        break;
#line 1180 "intermod.m"
    }
#line 1188 "intermod.m"
    {
#line 1188 "intermod.m"
      MR_Word base;
#line 1188 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "intermod.m"
      *transform_hlds__intermod__ForeignTypeBody_10 = base;
#line 1188 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__MaybeIL_20));
#line 1188 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__MaybeC_19));
#line 1188 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__MaybeJava_22));
#line 1188 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__MaybeCSharp_21));
#line 1188 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__MaybeErlang_23));
#line 1188 "intermod.m"
    }
#line 1114 "intermod.m"
  }
#line 1109 "intermod.m"
}

#line 1042 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_4_p_0(
#line 1042 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_5,
#line 1042 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_6,
#line 1042 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_33,
#line 1042 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_34)
#line 1042 "intermod.m"
{
#line 1045 "intermod.m"
  {
#line 1045 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1045 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 1045 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_9;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 1242 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_60;
#line 1242 "intermod.m"
    MR_Word transform_hlds__intermod__Name_61;
#line 1242 "intermod.m"
    MR_Word transform_hlds__intermod__V_64_64;
#line 1244 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_62;
#line 1245 "intermod.m"
    MR_String transform_hlds__intermod__V_63_63;

#line 1047 "intermod.m"
    {
#line 1047 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_8, &transform_hlds__intermod__ModuleName_9);
    }
#line 1243 "intermod.m"
    {
#line 1243 "intermod.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__ImportStatus_60);
    }
#line 1244 "intermod.m"
    transform_hlds__intermod__Name_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_5, (MR_Integer) 0)));
#line 1244 "intermod.m"
    transform_hlds__intermod___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_5, (MR_Integer) 1)));
#line 1245 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Name_61)) == (MR_mktag((MR_Integer) 1)));
#line 1245 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1245 "intermod.m"
      {
#line 1245 "intermod.m"
        transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_61, (MR_Integer) 0)));
#line 1245 "intermod.m"
        transform_hlds__intermod__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_61, (MR_Integer) 1)));
#line 1245 "intermod.m"
        {
#line 1245 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_9, transform_hlds__intermod__V_64_64);
        }
#line 1242 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1246 "intermod.m"
          {
#line 1246 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_60);
          }
#line 1245 "intermod.m"
      }
#line 1105 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1049 "intermod.m"
      {
#line 1049 "intermod.m"
        MR_Word transform_hlds__intermod__TypeBody0_10;
#line 1049 "intermod.m"
        MR_Word transform_hlds__intermod__TypeDefn_27;
#line 1049 "intermod.m"
        MR_Word transform_hlds__intermod__Types0_32;
#line 1049 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_39_39;
#line 1049 "intermod.m"
        MR_Word transform_hlds__intermod__V_41_41;
#line 1049 "intermod.m"
        MR_Word transform_hlds__intermod__V_43_43;
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_89_89;
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_90_90;
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_91_91;
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_94_94;
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_95_95;
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_96_96;

#line 1049 "intermod.m"
        {
#line 1049 "intermod.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeBody0_10);
        }
#line 1087 "intermod.m"
#line 1087 "intermod.m"
        switch (MR_tag((MR_Word) transform_hlds__intermod__TypeBody0_10)) {
#line 1087 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1087 "intermod.m"
          case (MR_Integer) 0:
#line 1088 "intermod.m"
            {
#line 1088 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_35_35;
#line 1088 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignTypeBody0_44 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__TypeBody0_10), (MR_Integer) 0);
#line 1088 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignTypeBody_45;
#line 1088 "intermod.m"
              MR_Word transform_hlds__intermod__TypeBody_46;
#line 2174 "intermod.m"
              MR_Word transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2174 "intermod.m"
              MR_Word transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2174 "intermod.m"
              MR_Word transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2174 "intermod.m"
              MR_Word transform_hlds__intermod__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2174 "intermod.m"
              MR_Word transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2174 "intermod.m"
              MR_Word transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 2174 "intermod.m"
              MR_Word transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2174 "intermod.m"
              MR_Word transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 2174 "intermod.m"
              MR_Word transform_hlds__intermod__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));

#line 2174 "intermod.m"
              {
#line 2174 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2174 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (transform_hlds__intermod__V_79_79));
#line 2174 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (transform_hlds__intermod__V_80_80));
#line 2174 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (transform_hlds__intermod__V_81_81));
#line 2174 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (transform_hlds__intermod__V_82_82));
#line 2174 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (transform_hlds__intermod__V_83_83));
#line 2174 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (transform_hlds__intermod__V_84_84));
#line 2174 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2174 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (transform_hlds__intermod__V_86_86));
#line 2174 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 8) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2174 "intermod.m"
              }
#line 1092 "intermod.m"
              {
#line 1092 "intermod.m"
                transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__ForeignTypeBody0_44, &transform_hlds__intermod__ForeignTypeBody_45, transform_hlds__intermod__STATE_VARIABLE_Info_35_35, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
              }
#line 1094 "intermod.m"
              transform_hlds__intermod__TypeBody_46 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__ForeignTypeBody_45);
#line 1095 "intermod.m"
              {
#line 1095 "intermod.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__intermod__TypeBody_46, transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeDefn_27);
              }
#line 1088 "intermod.m"
            }
#line 1087 "intermod.m"
            break;
#line 1087 "intermod.m"
          case (MR_Integer) 1:
#line 1053 "intermod.m"
            {
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 0)));
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__Tags_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 1)));
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__CheaperTagTest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 2)));
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__Enum_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 3)));
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeUserEqComp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 4)));
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeDirectArgCtors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 5)));
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__ReservedTag_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__ReservedAddr_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeForeign0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 7)));
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__Globals_20;
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__Target_21;
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeForeign_24;
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeUserEqComp_25;
#line 1053 "intermod.m"
              MR_Word transform_hlds__intermod__TypeBody_26;
#line 1078 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignTypeBody0_22;
#line 1068 "intermod.m"
              MR_Word transform_hlds__intermod__V_37_37;
#line 1068 "intermod.m"
              MR_Word transform_hlds__intermod__V_47_47;

#line 1054 "intermod.m"
              {
#line 1054 "intermod.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_8, &transform_hlds__intermod__Globals_20);
              }
#line 1055 "intermod.m"
              {
#line 1055 "intermod.m"
                libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_20, &transform_hlds__intermod__Target_21);
              }
#line 1068 "intermod.m"
              transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeForeign0_19)) == (MR_mktag((MR_Integer) 1)));
#line 1068 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 1068 "intermod.m"
                {
#line 1068 "intermod.m"
                  transform_hlds__intermod__ForeignTypeBody0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeForeign0_19, (MR_Integer) 0)));
#line 1069 "intermod.m"
                  transform_hlds__intermod__V_37_37 = (MR_Integer) 1;
#line 1069 "intermod.m"
                  {
#line 1069 "intermod.m"
                    backend_libs__foreign__have_foreign_type_for_backend_3_p_0(transform_hlds__intermod__Target_21, transform_hlds__intermod__ForeignTypeBody0_22, &transform_hlds__intermod__V_47_47);
                  }
#line 1069 "intermod.m"
                  transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_37_37 == transform_hlds__intermod__V_47_47);
#line 1068 "intermod.m"
                }
#line 1078 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 1073 "intermod.m"
                {
#line 1073 "intermod.m"
                  MR_Word transform_hlds__intermod__ForeignTypeBody_23;
#line 1073 "intermod.m"
                  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_38_38;
#line 2174 "intermod.m"
                  MR_Word transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2174 "intermod.m"
                  MR_Word transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2174 "intermod.m"
                  MR_Word transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2174 "intermod.m"
                  MR_Word transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2174 "intermod.m"
                  MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2174 "intermod.m"
                  MR_Word transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 2174 "intermod.m"
                  MR_Word transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2174 "intermod.m"
                  MR_Word transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 2174 "intermod.m"
                  MR_Word transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));

#line 2174 "intermod.m"
                  {
#line 2174 "intermod.m"
                    transform_hlds__intermod__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2174 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (transform_hlds__intermod__V_68_68));
#line 2174 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 2174 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (transform_hlds__intermod__V_70_70));
#line 2174 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (transform_hlds__intermod__V_71_71));
#line 2174 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (transform_hlds__intermod__V_72_72));
#line 2174 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 5) = ((MR_Box) (transform_hlds__intermod__V_73_73));
#line 2174 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2174 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 7) = ((MR_Box) (transform_hlds__intermod__V_75_75));
#line 2174 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 8) = ((MR_Box) (transform_hlds__intermod__V_76_76));
#line 2174 "intermod.m"
                  }
#line 1074 "intermod.m"
                  {
#line 1074 "intermod.m"
                    transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__ForeignTypeBody0_22, &transform_hlds__intermod__ForeignTypeBody_23, transform_hlds__intermod__STATE_VARIABLE_Info_38_38, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
                  }
#line 1076 "intermod.m"
                  {
#line 1076 "intermod.m"
                    transform_hlds__intermod__MaybeForeign_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeForeign_24, 0) = ((MR_Box) (transform_hlds__intermod__ForeignTypeBody_23));
#line 1076 "intermod.m"
                  }
#line 1077 "intermod.m"
                  transform_hlds__intermod__MaybeUserEqComp_25 = transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1073 "intermod.m"
                }
#line 1078 "intermod.m"
              else
#line 1080 "intermod.m"
                {
#line 1079 "intermod.m"
                  {
#line 1079 "intermod.m"
                    transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__MaybeUserEqComp0_15, &transform_hlds__intermod__MaybeUserEqComp_25, transform_hlds__intermod__STATE_VARIABLE_Info_0_33, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
                  }
#line 1081 "intermod.m"
                  transform_hlds__intermod__MaybeForeign_24 = transform_hlds__intermod__MaybeForeign0_19;
#line 1080 "intermod.m"
                }
#line 1083 "intermod.m"
              {
#line 1083 "intermod.m"
                transform_hlds__intermod__TypeBody_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 0) = ((MR_Box) (transform_hlds__intermod__Ctors_11));
#line 1083 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 1) = ((MR_Box) (transform_hlds__intermod__Tags_12));
#line 1083 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 2) = ((MR_Box) (transform_hlds__intermod__CheaperTagTest_13));
#line 1083 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 3) = ((MR_Box) (transform_hlds__intermod__Enum_14));
#line 1083 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 4) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_25));
#line 1083 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 5) = ((MR_Box) (transform_hlds__intermod__MaybeDirectArgCtors_16));
#line 1083 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 6) = ((MR_Box) ((transform_hlds__intermod__ReservedTag_17 | ((transform_hlds__intermod__ReservedAddr_18 << (MR_Integer) 1)))));
#line 1083 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 7) = ((MR_Box) (transform_hlds__intermod__MaybeForeign_24));
#line 1083 "intermod.m"
              }
#line 1086 "intermod.m"
              {
#line 1086 "intermod.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__intermod__TypeBody_26, transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeDefn_27);
              }
#line 1053 "intermod.m"
            }
#line 1087 "intermod.m"
            break;
#line 1087 "intermod.m"
          case (MR_Integer) 2:
#line 1100 "intermod.m"
            {
#line 1101 "intermod.m"
              transform_hlds__intermod__TypeDefn_27 = transform_hlds__intermod__TypeDefn0_6;
#line 1100 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_39_39 = transform_hlds__intermod__STATE_VARIABLE_Info_0_33;
#line 1100 "intermod.m"
            }
#line 1087 "intermod.m"
            break;
#line 1087 "intermod.m"
          case (MR_Integer) 3:
#line 1100 "intermod.m"
            {
#line 1101 "intermod.m"
              transform_hlds__intermod__TypeDefn_27 = transform_hlds__intermod__TypeDefn0_6;
#line 1100 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_39_39 = transform_hlds__intermod__STATE_VARIABLE_Info_0_33;
#line 1100 "intermod.m"
            }
#line 1087 "intermod.m"
            break;
#line 1087 "intermod.m"
        }
#line 2160 "intermod.m"
        transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 2160 "intermod.m"
        transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 2160 "intermod.m"
        transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 2160 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 2160 "intermod.m"
        transform_hlds__intermod__Types0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 2160 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 2160 "intermod.m"
        transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 2160 "intermod.m"
        transform_hlds__intermod__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 2160 "intermod.m"
        transform_hlds__intermod__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 8)));
#line 1104 "intermod.m"
        {
#line 1104 "intermod.m"
          transform_hlds__intermod__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_43_43, 0) = ((MR_Box) (transform_hlds__intermod__TypeCtor_5));
#line 1104 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_43_43, 1) = ((MR_Box) (transform_hlds__intermod__TypeDefn_27));
#line 1104 "intermod.m"
        }
#line 1104 "intermod.m"
        {
#line 1104 "intermod.m"
          transform_hlds__intermod__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_41_41, 0) = ((MR_Box) (transform_hlds__intermod__V_43_43));
#line 1104 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_41_41, 1) = ((MR_Box) (transform_hlds__intermod__Types0_32));
#line 1104 "intermod.m"
        }
#line 1104 "intermod.m"
        {
#line 1104 "intermod.m"
          transform_hlds__intermod__intermod_info_set_types_3_p_0(transform_hlds__intermod__V_41_41, transform_hlds__intermod__STATE_VARIABLE_Info_39_39, transform_hlds__intermod__STATE_VARIABLE_Info_34);
#line 1104 "intermod.m"
          return;
        }
#line 1049 "intermod.m"
      }
#line 1105 "intermod.m"
    else
#line 1105 "intermod.m"
      *transform_hlds__intermod__STATE_VARIABLE_Info_34 = transform_hlds__intermod__STATE_VARIABLE_Info_0_33;
#line 1045 "intermod.m"
  }
#line 1042 "intermod.m"
}

#line 1040 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0_1(
#line 1040 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1040 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1040 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1040 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1040 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1040 "intermod.m"
{
#line 1040 "intermod.m"
  {
#line 1040 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1040 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34;

#line 1040 "intermod.m"
    {
#line 1040 "intermod.m"
      transform_hlds__intermod__gather_types_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34);
    }
#line 1040 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34));
#line 1040 "intermod.m"
  }
#line 1040 "intermod.m"
}

#line 1035 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0(
#line 1035 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1035 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7)
#line 1035 "intermod.m"
{
#line 1037 "intermod.m"
  {
#line 1037 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1037 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 1037 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable_5;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 1040 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7;

#line 1039 "intermod.m"
    {
#line 1039 "intermod.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__ModuleInfo_4, &transform_hlds__intermod__TypeTable_5);
    }
#line 1040 "intermod.m"
    {
#line 1040 "intermod.m"
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[22], transform_hlds__intermod__TypeTable_5, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_6)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
    }
#line 1040 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_Info_7 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
#line 1037 "intermod.m"
  }
#line 1035 "intermod.m"
}

#line 999 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
#line 999 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 999 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 999 "intermod.m"
{
#line 999 "intermod.m"
  {
#line 999 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 999 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 999 "intermod.m"
    MR_Word transform_hlds__intermod__conv2_HeadVar__2_55;

#line 999 "intermod.m"
    {
#line 999 "intermod.m"
      transform_hlds__intermod__conv2_HeadVar__2_55 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1001__1_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 999 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv2_HeadVar__2_55));
#line 999 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 999 "intermod.m"
  }
#line 999 "intermod.m"
}

#line 986 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
#line 986 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 986 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 986 "intermod.m"
{
#line 986 "intermod.m"
  {
#line 986 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 986 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 986 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__2_51;

#line 986 "intermod.m"
    {
#line 986 "intermod.m"
      transform_hlds__intermod__conv1_HeadVar__2_51 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__988__1_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 986 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__2_51));
#line 986 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 986 "intermod.m"
  }
#line 986 "intermod.m"
}

#line 971 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_11,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceMethodName0_12,
#line 971 "intermod.m"
  MR_Integer transform_hlds__intermod__MethodArity_13,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallTVarSet_14,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallExistQTVars_15,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallArgTypes_16,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_17,
#line 971 "intermod.m"
  MR_Word transform_hlds__intermod__MethodContext_18,
#line 971 "intermod.m"
  MR_Word * transform_hlds__intermod__MaybePredId_19,
#line 971 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethodName_20)
#line 971 "intermod.m"
{
#line 979 "intermod.m"
  {
#line 979 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 979 "intermod.m"
    MR_Word transform_hlds__intermod__CtorFieldTable_21;
#line 979 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors0_25;
#line 979 "intermod.m"
    MR_Word transform_hlds__intermod__Ctors_32;
#line 979 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors1_35;
#line 979 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors_37;
#line 979 "intermod.m"
    MR_Word transform_hlds__intermod__PredicateTable_38;
#line 979 "intermod.m"
    MR_Word transform_hlds__intermod__PredIds_39;
#line 990 "intermod.m"
    MR_Word transform_hlds__intermod__FieldDefns_24;
#line 983 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_79_79;
#line 983 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_80_80;
#line 983 "intermod.m"
    MR_Word transform_hlds__intermod__FieldName_23;
#line 983 "intermod.m"
    MR_Integer transform_hlds__intermod__V_86_86;
#line 982 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22;
#line 984 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_FieldDefns_24;
#line 1003 "intermod.m"
    MR_Word transform_hlds__intermod__MatchingConstructors_34;
#line 996 "intermod.m"
    MR_Word transform_hlds__intermod__ConsId_33;
#line 996 "intermod.m"
    MR_Word transform_hlds__intermod__V_52_52;
#line 1021 "intermod.m"
    MR_Word transform_hlds__intermod__PredId_42;
#line 1021 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodFuncName_43;
#line 1012 "intermod.m"
    MR_Word transform_hlds__intermod__V_57_57;
#line 1012 "intermod.m"
    MR_Word transform_hlds__intermod__V_40_40;
#line 1012 "intermod.m"
    MR_Word transform_hlds__intermod__V_41_41;

#line 980 "intermod.m"
    {
#line 980 "intermod.m"
      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__CtorFieldTable_21);
    }
#line 982 "intermod.m"
    {
#line 982 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__InstanceMethodName0_12, &transform_hlds__intermod__V_86_86, &transform_hlds__intermod__V_22_22, &transform_hlds__intermod__FieldName_23);
    }
#line 983 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 983 "intermod.m"
      {
#line 982 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__MethodArity_13 == transform_hlds__intermod__V_86_86);
#line 983 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 983 "intermod.m"
          {
#line 14859 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 14861 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeInfo_80_80 = (MR_Word) &transform_hlds__intermod_scalar_common_1[10];
#line 984 "intermod.m"
            {
#line 984 "intermod.m"
              transform_hlds__intermod__succeeded = mercury__map__search_3_p_0(transform_hlds__intermod__TypeCtorInfo_79_79, transform_hlds__intermod__TypeInfo_80_80, transform_hlds__intermod__CtorFieldTable_21, ((MR_Box) (transform_hlds__intermod__FieldName_23)), &transform_hlds__intermod__conv0_FieldDefns_24);
            }
#line 984 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 984 "intermod.m"
              {
#line 984 "intermod.m"
                transform_hlds__intermod__FieldDefns_24 = ((MR_Word) transform_hlds__intermod__conv0_FieldDefns_24);
#line 984 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 984 "intermod.m"
              }
#line 983 "intermod.m"
          }
#line 983 "intermod.m"
      }
#line 990 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 986 "intermod.m"
      {
#line 986 "intermod.m"
        {
#line 986 "intermod.m"
          transform_hlds__intermod__TypeCtors0_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[20], transform_hlds__intermod__FieldDefns_24);
        }
#line 986 "intermod.m"
      }
#line 990 "intermod.m"
    else
#line 991 "intermod.m"
      transform_hlds__intermod__TypeCtors0_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 993 "intermod.m"
    {
#line 993 "intermod.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Ctors_32);
    }
#line 996 "intermod.m"
    {
#line 996 "intermod.m"
      transform_hlds__intermod__V_52_52 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 995 "intermod.m"
    {
#line 995 "intermod.m"
      transform_hlds__intermod__ConsId_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 995 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 995 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 1) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName0_12));
#line 995 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 2) = ((MR_Box) (transform_hlds__intermod__MethodArity_13));
#line 995 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 3) = ((MR_Box) (transform_hlds__intermod__V_52_52));
#line 995 "intermod.m"
    }
#line 997 "intermod.m"
    {
#line 997 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_data__search_cons_table_3_p_0(transform_hlds__intermod__Ctors_32, transform_hlds__intermod__ConsId_33, &transform_hlds__intermod__MatchingConstructors_34);
    }
#line 1003 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 999 "intermod.m"
      {
#line 999 "intermod.m"
        {
#line 999 "intermod.m"
          transform_hlds__intermod__TypeCtors1_35 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[21], transform_hlds__intermod__MatchingConstructors_34);
        }
#line 999 "intermod.m"
      }
#line 1003 "intermod.m"
    else
#line 1004 "intermod.m"
      transform_hlds__intermod__TypeCtors1_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1006 "intermod.m"
    {
#line 1006 "intermod.m"
      transform_hlds__intermod__TypeCtors_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__intermod__TypeCtors0_25, transform_hlds__intermod__TypeCtors1_35);
    }
#line 1008 "intermod.m"
    {
#line 1008 "intermod.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__PredicateTable_38);
    }
#line 1009 "intermod.m"
    {
#line 1009 "intermod.m"
      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(transform_hlds__intermod__PredicateTable_38, (MR_Integer) 1, transform_hlds__intermod__InstanceMethodName0_12, transform_hlds__intermod__MethodArity_13, &transform_hlds__intermod__PredIds_39);
    }
#line 1012 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__PredIds_39)) == (MR_mktag((MR_Integer) 1)));
#line 1012 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1012 "intermod.m"
      {
#line 1012 "intermod.m"
        transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__PredIds_39, (MR_Integer) 0)));
#line 1012 "intermod.m"
        transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__PredIds_39, (MR_Integer) 1)));
#line 1015 "intermod.m"
        transform_hlds__intermod__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1013 "intermod.m"
        {
#line 1013 "intermod.m"
          transform_hlds__intermod__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__PredIds_39, transform_hlds__intermod__MethodCallTVarSet_14, transform_hlds__intermod__MethodCallExistQTVars_15, transform_hlds__intermod__MethodCallArgTypes_16, transform_hlds__intermod__MethodCallHeadTypeParams_17, transform_hlds__intermod__V_57_57, transform_hlds__intermod__MethodContext_18, &transform_hlds__intermod__PredId_42, &transform_hlds__intermod__InstanceMethodFuncName_43);
        }
#line 1012 "intermod.m"
      }
#line 1021 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1018 "intermod.m"
      {
#line 1018 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__TypeCtors_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1018 "intermod.m"
          {
#line 1020 "intermod.m"
            *transform_hlds__intermod__InstanceMethodName_20 = transform_hlds__intermod__InstanceMethodFuncName_43;
#line 1019 "intermod.m"
            {
#line 1019 "intermod.m"
              MR_Word base;
#line 1019 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "intermod.m"
              *transform_hlds__intermod__MaybePredId_19 = base;
#line 1019 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_42));
#line 1019 "intermod.m"
            }
#line 1019 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1018 "intermod.m"
          }
#line 1018 "intermod.m"
      }
#line 1021 "intermod.m"
    else
#line 1022 "intermod.m"
      {
#line 1022 "intermod.m"
        MR_Word transform_hlds__intermod__TheTypeCtor_44;
#line 1022 "intermod.m"
        MR_Word transform_hlds__intermod__V_58_58;
#line 1027 "intermod.m"
        MR_Word transform_hlds__intermod__TypeModule_45;
#line 1024 "intermod.m"
        MR_Word transform_hlds__intermod__V_59_59;
#line 1024 "intermod.m"
        MR_Integer transform_hlds__intermod__V_47_47;
#line 1024 "intermod.m"
        MR_String transform_hlds__intermod__V_46_46;

#line 1022 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__TypeCtors_37)) == (MR_mktag((MR_Integer) 1)));
#line 1022 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1022 "intermod.m"
          {
#line 1022 "intermod.m"
            transform_hlds__intermod__TheTypeCtor_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeCtors_37, (MR_Integer) 0)));
#line 1022 "intermod.m"
            transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeCtors_37, (MR_Integer) 1)));
#line 1022 "intermod.m"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1022 "intermod.m"
              {
#line 1023 "intermod.m"
                *transform_hlds__intermod__MaybePredId_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1024 "intermod.m"
                transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TheTypeCtor_44, (MR_Integer) 0)));
#line 1024 "intermod.m"
                transform_hlds__intermod__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TheTypeCtor_44, (MR_Integer) 1)));
#line 1024 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 1024 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1024 "intermod.m"
                  {
#line 1024 "intermod.m"
                    transform_hlds__intermod__TypeModule_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, (MR_Integer) 0)));
#line 1024 "intermod.m"
                    transform_hlds__intermod__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, (MR_Integer) 1)));
#line 1025 "intermod.m"
                    {
#line 1025 "intermod.m"
                      MR_String transform_hlds__intermod__UnqualMethodName_48;

#line 1025 "intermod.m"
                      {
#line 1025 "intermod.m"
                        transform_hlds__intermod__UnqualMethodName_48 = mdbcomp__sym_name__unqualify_name_1_f_0(transform_hlds__intermod__InstanceMethodName0_12);
                      }
#line 1026 "intermod.m"
                      {
#line 1026 "intermod.m"
                        MR_Word base;
#line 1026 "intermod.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "intermod.m"
                        *transform_hlds__intermod__InstanceMethodName_20 = base;
#line 1026 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__TypeModule_45));
#line 1026 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__UnqualMethodName_48));
#line 1026 "intermod.m"
                      }
#line 1025 "intermod.m"
                    }
#line 1024 "intermod.m"
                  }
#line 1024 "intermod.m"
                else
#line 1028 "intermod.m"
                  {
#line 1028 "intermod.m"
                    {
#line 1028 "intermod.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.find_func_matching_instance_method\'/10", (MR_String) "unqualified type_ctor in hlds_cons_defn or hlds_ctor_field_defn");
                    }
#line 1028 "intermod.m"
                  }
#line 1027 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 1022 "intermod.m"
              }
#line 1022 "intermod.m"
          }
#line 1022 "intermod.m"
      }
#line 979 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 979 "intermod.m"
  }
#line 971 "intermod.m"
}

#line 903 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
#line 903 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 903 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 903 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethod_9,
#line 903 "intermod.m"
  MR_Word transform_hlds__intermod__PredIds0_10,
#line 903 "intermod.m"
  MR_Word * transform_hlds__intermod__PredIds_11)
#line 903 "intermod.m"
{
#line 908 "intermod.m"
  {
#line 908 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallPredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethod0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallPredInfo_12;
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallTVarSet_13;
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallExistQTVars_14;
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallArgTypes_15;
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_16;
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__PredOrFunc_17;
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__MethodName_18;
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodDefn0_19;
#line 908 "intermod.m"
    MR_Integer transform_hlds__intermod__MethodArity_20;
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__MethodContext_21;
#line 908 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodDefn_26;

#line 909 "intermod.m"
    {
#line 909 "intermod.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__MethodCallPredId_7, &transform_hlds__intermod__MethodCallPredInfo_12);
    }
#line 910 "intermod.m"
    {
#line 910 "intermod.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__MethodCallPredInfo_12, &transform_hlds__intermod__MethodCallTVarSet_13, &transform_hlds__intermod__MethodCallExistQTVars_14, &transform_hlds__intermod__MethodCallArgTypes_15);
    }
#line 912 "intermod.m"
    {
#line 912 "intermod.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__MethodCallPredInfo_12, &transform_hlds__intermod__MethodCallHeadTypeParams_16);
    }
#line 914 "intermod.m"
    transform_hlds__intermod__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 0)));
#line 914 "intermod.m"
    transform_hlds__intermod__MethodName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 1)));
#line 914 "intermod.m"
    transform_hlds__intermod__InstanceMethodDefn0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 2)));
#line 914 "intermod.m"
    transform_hlds__intermod__MethodArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 3)));
#line 914 "intermod.m"
    transform_hlds__intermod__MethodContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 4)));
#line 941 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__InstanceMethodDefn0_19)) == (MR_mktag((MR_Integer) 1))))
#line 952 "intermod.m"
      {
#line 952 "intermod.m"
        MR_Word transform_hlds__intermod__PredId_33;

#line 959 "intermod.m"
        {
#line 959 "intermod.m"
          transform_hlds__intermod__PredId_33 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 960 "intermod.m"
        {
#line 960 "intermod.m"
          MR_Word base;
#line 960 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "intermod.m"
          *transform_hlds__intermod__PredIds_11 = base;
#line 960 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_33));
#line 960 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 960 "intermod.m"
        }
#line 962 "intermod.m"
        transform_hlds__intermod__InstanceMethodDefn_26 = transform_hlds__intermod__InstanceMethodDefn0_19;
#line 952 "intermod.m"
      }
#line 941 "intermod.m"
    else
#line 941 "intermod.m"
      {
#line 941 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn0_19, (MR_Integer) 0)));

#line 941 "intermod.m"
#line 941 "intermod.m"
        switch (transform_hlds__intermod__PredOrFunc_17) {
#line 941 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 941 "intermod.m"
          case (MR_Integer) 1:
#line 933 "intermod.m"
            {
#line 933 "intermod.m"
              MR_Word transform_hlds__intermod__MaybePredId_23;
#line 933 "intermod.m"
              MR_Word transform_hlds__intermod__InstanceMethodName_24;

#line 920 "intermod.m"
              {
#line 920 "intermod.m"
                transform_hlds__intermod__succeeded = transform_hlds__intermod__find_func_matching_instance_method_10_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__V_34_34, transform_hlds__intermod__MethodArity_20, transform_hlds__intermod__MethodCallTVarSet_13, transform_hlds__intermod__MethodCallExistQTVars_14, transform_hlds__intermod__MethodCallArgTypes_15, transform_hlds__intermod__MethodCallHeadTypeParams_16, transform_hlds__intermod__MethodContext_21, &transform_hlds__intermod__MaybePredId_23, &transform_hlds__intermod__InstanceMethodName_24);
              }
#line 933 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 931 "intermod.m"
                {
#line 928 "intermod.m"
                  if ((transform_hlds__intermod__MaybePredId_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "intermod.m"
                    *transform_hlds__intermod__PredIds_11 = transform_hlds__intermod__PredIds0_10;
#line 928 "intermod.m"
                  else
#line 926 "intermod.m"
                    {
#line 926 "intermod.m"
                      MR_Word transform_hlds__intermod__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybePredId_23, (MR_Integer) 0)));

#line 927 "intermod.m"
                      {
#line 927 "intermod.m"
                        MR_Word base;
#line 927 "intermod.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "intermod.m"
                        *transform_hlds__intermod__PredIds_11 = base;
#line 927 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_25));
#line 927 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 927 "intermod.m"
                      }
#line 926 "intermod.m"
                    }
#line 932 "intermod.m"
                  {
#line 932 "intermod.m"
                    transform_hlds__intermod__InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 932 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn_26, 0) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName_24));
#line 932 "intermod.m"
                  }
#line 931 "intermod.m"
                }
#line 933 "intermod.m"
              else
#line 935 "intermod.m"
                {
#line 935 "intermod.m"
                  MR_Word transform_hlds__intermod__PredId_29;

#line 935 "intermod.m"
                  {
#line 935 "intermod.m"
                    transform_hlds__intermod__PredId_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                  }
#line 936 "intermod.m"
                  {
#line 936 "intermod.m"
                    MR_Word base;
#line 936 "intermod.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "intermod.m"
                    *transform_hlds__intermod__PredIds_11 = base;
#line 936 "intermod.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_29));
#line 936 "intermod.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 936 "intermod.m"
                  }
#line 939 "intermod.m"
                  transform_hlds__intermod__InstanceMethodDefn_26 = transform_hlds__intermod__InstanceMethodDefn0_19;
#line 935 "intermod.m"
                }
#line 933 "intermod.m"
            }
#line 941 "intermod.m"
            break;
#line 941 "intermod.m"
          case (MR_Integer) 0:
#line 942 "intermod.m"
            {
#line 942 "intermod.m"
              MR_Word transform_hlds__intermod__Markers_27;
#line 942 "intermod.m"
              MR_Word transform_hlds__intermod__InstanceMethodName_31;
#line 942 "intermod.m"
              MR_Word transform_hlds__intermod__PredId_32;

#line 944 "intermod.m"
              {
#line 944 "intermod.m"
                hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers_27);
              }
#line 945 "intermod.m"
              {
#line 945 "intermod.m"
                hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__Markers_27, transform_hlds__intermod__MethodCallTVarSet_13, transform_hlds__intermod__MethodCallExistQTVars_14, transform_hlds__intermod__MethodCallArgTypes_15, transform_hlds__intermod__MethodCallHeadTypeParams_16, transform_hlds__intermod__MethodContext_21, transform_hlds__intermod__V_34_34, &transform_hlds__intermod__InstanceMethodName_31, &transform_hlds__intermod__PredId_32);
              }
#line 949 "intermod.m"
              {
#line 949 "intermod.m"
                MR_Word base;
#line 949 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "intermod.m"
                *transform_hlds__intermod__PredIds_11 = base;
#line 949 "intermod.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_32));
#line 949 "intermod.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 949 "intermod.m"
              }
#line 950 "intermod.m"
              {
#line 950 "intermod.m"
                transform_hlds__intermod__InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 950 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn_26, 0) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName_31));
#line 950 "intermod.m"
              }
#line 942 "intermod.m"
            }
#line 941 "intermod.m"
            break;
#line 941 "intermod.m"
        }
#line 941 "intermod.m"
      }
#line 964 "intermod.m"
    {
#line 964 "intermod.m"
      MR_Word base;
#line 964 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 964 "intermod.m"
      *transform_hlds__intermod__InstanceMethod_9 = base;
#line 964 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_17));
#line 964 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__MethodName_18));
#line 964 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__InstanceMethodDefn_26));
#line 964 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__MethodArity_20));
#line 964 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__MethodContext_21));
#line 964 "intermod.m"
    }
#line 908 "intermod.m"
  }
#line 903 "intermod.m"
}

#line 858 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_3(
#line 858 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 858 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 858 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 858 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 858 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 858 "intermod.m"
{
#line 858 "intermod.m"
  {
#line 858 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 858 "intermod.m"
    MR_Word transform_hlds__intermod__conv5_DoWrite_6;
#line 858 "intermod.m"
    MR_Word transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9;

#line 858 "intermod.m"
    {
#line 858 "intermod.m"
      transform_hlds__intermod__add_proc_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv5_DoWrite_6, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9);
    }
#line 858 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv5_DoWrite_6));
#line 858 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9));
#line 858 "intermod.m"
  }
#line 858 "intermod.m"
}

#line 856 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_2(
#line 856 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 856 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 856 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 856 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 856 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 856 "intermod.m"
{
#line 856 "intermod.m"
  {
#line 856 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 856 "intermod.m"
    MR_Word transform_hlds__intermod__conv2_InstanceMethod_9;
#line 856 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_PredIds_11;

#line 856 "intermod.m"
    {
#line 856 "intermod.m"
      transform_hlds__intermod__qualify_instance_method_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv2_InstanceMethod_9, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv1_PredIds_11);
    }
#line 856 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv2_InstanceMethod_9));
#line 856 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv1_PredIds_11));
#line 856 "intermod.m"
  }
#line 856 "intermod.m"
}

#line 841 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_1(
#line 841 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 841 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 841 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 841 "intermod.m"
{
#line 841 "intermod.m"
  {
#line 841 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 841 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_45;

#line 841 "intermod.m"
    {
#line 841 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__843__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_45);
    }
#line 841 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_45));
#line 841 "intermod.m"
  }
#line 841 "intermod.m"
}

#line 821 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0(
#line 821 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 821 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 821 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefn_8,
#line 821 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_39,
#line 821 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_40)
#line 821 "intermod.m"
{
#line 824 "intermod.m"
  {
#line 824 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 0)));
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 1)));
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 2)));
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceConstraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 3)));
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 4)));
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 5)));
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__Interface0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 6)));
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__MaybePredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 7)));
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 8)));
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__Proofs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 9)));
#line 824 "intermod.m"
    MR_Word transform_hlds__intermod__DefinedThisModule_20;

#line 828 "intermod.m"
    {
#line 828 "intermod.m"
      transform_hlds__intermod__DefinedThisModule_20 = parse_tree__status__status_defined_in_this_module_1_f_0(transform_hlds__intermod__Status_11);
    }
#line 896 "intermod.m"
#line 896 "intermod.m"
    switch (transform_hlds__intermod__DefinedThisModule_20) {
#line 896 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 896 "intermod.m"
      case (MR_Integer) 0:
#line 897 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_40 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 896 "intermod.m"
        break;
#line 896 "intermod.m"
      case (MR_Integer) 1:
#line 830 "intermod.m"
        {
#line 830 "intermod.m"
          MR_Word transform_hlds__intermod__Interface_35;
#line 830 "intermod.m"
          MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_50_50;
#line 884 "intermod.m"
          MR_Word transform_hlds__intermod__V_51_51;

#line 874 "intermod.m"
          if ((transform_hlds__intermod__Interface0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "intermod.m"
            {
#line 876 "intermod.m"
              transform_hlds__intermod__Interface_35 = transform_hlds__intermod__Interface0_16;
#line 875 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 875 "intermod.m"
            }
#line 874 "intermod.m"
          else
#line 838 "intermod.m"
            {
#line 838 "intermod.m"
              MR_Word transform_hlds__intermod__Methods0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Interface0_16, (MR_Integer) 0)));
#line 838 "intermod.m"
              MR_Word transform_hlds__intermod__MethodAL_30;
#line 838 "intermod.m"
              MR_Word transform_hlds__intermod__Methods_31;
#line 838 "intermod.m"
              MR_Word transform_hlds__intermod__PredIds_32;
#line 838 "intermod.m"
              MR_Word transform_hlds__intermod__DoWriteMethodsList_33;
#line 838 "intermod.m"
              MR_Word transform_hlds__intermod__DoWriteMethods_34;
#line 838 "intermod.m"
              MR_Word transform_hlds__intermod__V_46_46;
#line 838 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_49_49;
#line 856 "intermod.m"
              MR_Box transform_hlds__intermod__conv3_PredIds_32;
#line 858 "intermod.m"
              MR_Box transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49;

#line 851 "intermod.m"
              if ((transform_hlds__intermod__MaybePredProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 852 "intermod.m"
                {
#line 853 "intermod.m"
                  {
#line 853 "intermod.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_instances_3\'/5", (MR_String) "method pred_proc_ids not filled in");
#line 853 "intermod.m"
                    return;
                  }
#line 852 "intermod.m"
                }
#line 851 "intermod.m"
              else
#line 840 "intermod.m"
                {
#line 840 "intermod.m"
                  MR_Word transform_hlds__intermod__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 840 "intermod.m"
                  MR_Word transform_hlds__intermod__ClassProcs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybePredProcIds_17, (MR_Integer) 0)));
#line 840 "intermod.m"
                  MR_Word transform_hlds__intermod__ClassPreds0_28;
#line 840 "intermod.m"
                  MR_Word transform_hlds__intermod__ClassPreds_29;

#line 845 "intermod.m"
                  {
#line 845 "intermod.m"
                    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_57_57, (MR_Word) &transform_hlds__intermod_scalar_common_2[18], transform_hlds__intermod__ClassProcs_23, &transform_hlds__intermod__ClassPreds0_28);
                  }
#line 848 "intermod.m"
                  {
#line 848 "intermod.m"
                    mercury__list__remove_adjacent_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_57_57, transform_hlds__intermod__ClassPreds0_28, &transform_hlds__intermod__ClassPreds_29);
                  }
#line 849 "intermod.m"
                  {
#line 849 "intermod.m"
                    mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__intermod__TypeCtorInfo_57_57, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, transform_hlds__intermod__ClassPreds_29, transform_hlds__intermod__Methods0_22, &transform_hlds__intermod__MethodAL_30);
                  }
#line 840 "intermod.m"
                }
#line 856 "intermod.m"
              {
#line 856 "intermod.m"
                transform_hlds__intermod__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 856 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[2]));
#line 856 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 1) = ((MR_Box) (transform_hlds__intermod__gather_instances_3_5_p_0_2));
#line 856 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 856 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_6));
#line 856 "intermod.m"
              }
#line 856 "intermod.m"
              {
#line 856 "intermod.m"
                mercury__list__map_foldl_5_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[9], transform_hlds__intermod__V_46_46, transform_hlds__intermod__MethodAL_30, &transform_hlds__intermod__Methods_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__intermod__conv3_PredIds_32);
              }
#line 856 "intermod.m"
              transform_hlds__intermod__PredIds_32 = ((MR_Word) transform_hlds__intermod__conv3_PredIds_32);
#line 858 "intermod.m"
              {
#line 858 "intermod.m"
                mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[19], transform_hlds__intermod__PredIds_32, &transform_hlds__intermod__DoWriteMethodsList_33, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_39)), &transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49);
              }
#line 858 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_49_49 = ((MR_Word) transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49);
#line 859 "intermod.m"
              {
#line 859 "intermod.m"
                mercury__bool__and_list_2_p_0(transform_hlds__intermod__DoWriteMethodsList_33, &transform_hlds__intermod__DoWriteMethods_34);
              }
#line 863 "intermod.m"
#line 863 "intermod.m"
              switch (transform_hlds__intermod__DoWriteMethods_34) {
#line 863 "intermod.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 863 "intermod.m"
                case (MR_Integer) 0:
#line 864 "intermod.m"
                  {
#line 868 "intermod.m"
                    transform_hlds__intermod__Interface_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "intermod.m"
                    transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 864 "intermod.m"
                  }
#line 863 "intermod.m"
                  break;
#line 863 "intermod.m"
                case (MR_Integer) 1:
#line 861 "intermod.m"
                  {
#line 862 "intermod.m"
                    {
#line 862 "intermod.m"
                      transform_hlds__intermod__Interface_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 862 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__Interface_35, 0) = ((MR_Box) (transform_hlds__intermod__Methods_31));
#line 862 "intermod.m"
                    }
#line 861 "intermod.m"
                    transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_49_49;
#line 861 "intermod.m"
                  }
#line 863 "intermod.m"
                  break;
#line 863 "intermod.m"
              }
#line 838 "intermod.m"
            }
#line 882 "intermod.m"
          transform_hlds__intermod__succeeded = (transform_hlds__intermod__Interface_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "intermod.m"
          if (transform_hlds__intermod__succeeded)
#line 883 "intermod.m"
            {
#line 884 "intermod.m"
              {
#line 884 "intermod.m"
                transform_hlds__intermod__V_51_51 = parse_tree__status__status_is_exported_1_f_0(transform_hlds__intermod__Status_11);
              }
#line 884 "intermod.m"
              transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_51_51 == (MR_Integer) 0);
#line 883 "intermod.m"
              transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 883 "intermod.m"
            }
#line 883 "intermod.m"
          transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 893 "intermod.m"
          if (transform_hlds__intermod__succeeded)
#line 889 "intermod.m"
            {
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__InstanceDefnToWrite_36;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__Instances0_37;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__Instances_38;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__V_52_52;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__V_74_74;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__V_75_75;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__V_76_76;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__V_77_77;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__V_78_78;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__V_79_79;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__V_80_80;
#line 889 "intermod.m"
              MR_Word transform_hlds__intermod__V_81_81;

#line 887 "intermod.m"
              {
#line 887 "intermod.m"
                transform_hlds__intermod__InstanceDefnToWrite_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 887 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 0) = ((MR_Box) (transform_hlds__intermod__ModuleName_10));
#line 887 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 1) = ((MR_Box) (transform_hlds__intermod__Status_11));
#line 887 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 887 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 3) = ((MR_Box) (transform_hlds__intermod__InstanceConstraints_13));
#line 887 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 4) = ((MR_Box) (transform_hlds__intermod__Types_14));
#line 887 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 5) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_15));
#line 887 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 6) = ((MR_Box) (transform_hlds__intermod__Interface_35));
#line 887 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 7) = ((MR_Box) (transform_hlds__intermod__MaybePredProcIds_17));
#line 887 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_18));
#line 887 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 9) = ((MR_Box) (transform_hlds__intermod__Proofs_19));
#line 887 "intermod.m"
              }
#line 2159 "intermod.m"
              transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 2159 "intermod.m"
              transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
#line 2159 "intermod.m"
              transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 2159 "intermod.m"
              transform_hlds__intermod__Instances0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 2159 "intermod.m"
              transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 2159 "intermod.m"
              transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 2159 "intermod.m"
              transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 2159 "intermod.m"
              transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 2159 "intermod.m"
              transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 891 "intermod.m"
              {
#line 891 "intermod.m"
                transform_hlds__intermod__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 891 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_52_52, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_7));
#line 891 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_52_52, 1) = ((MR_Box) (transform_hlds__intermod__InstanceDefnToWrite_36));
#line 891 "intermod.m"
              }
#line 891 "intermod.m"
              {
#line 891 "intermod.m"
                transform_hlds__intermod__Instances_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__Instances_38, 0) = ((MR_Box) (transform_hlds__intermod__V_52_52));
#line 891 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__Instances_38, 1) = ((MR_Box) (transform_hlds__intermod__Instances0_37));
#line 891 "intermod.m"
              }
#line 2170 "intermod.m"
              {
#line 2170 "intermod.m"
                MR_Word base;
#line 2170 "intermod.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2170 "intermod.m"
                *transform_hlds__intermod__STATE_VARIABLE_Info_40 = base;
#line 2170 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_74_74));
#line 2170 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_75_75));
#line 2170 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_76_76));
#line 2170 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__Instances_38));
#line 2170 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_77_77));
#line 2170 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_78_78));
#line 2170 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_79_79));
#line 2170 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_80_80));
#line 2170 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_81_81));
#line 2170 "intermod.m"
              }
#line 889 "intermod.m"
            }
#line 893 "intermod.m"
          else
#line 893 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_40 = transform_hlds__intermod__STATE_VARIABLE_Info_50_50;
#line 830 "intermod.m"
        }
#line 896 "intermod.m"
        break;
#line 896 "intermod.m"
    }
#line 824 "intermod.m"
  }
#line 821 "intermod.m"
}

#line 819 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0_1(
#line 819 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 819 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 819 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 819 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 819 "intermod.m"
{
#line 819 "intermod.m"
  {
#line 819 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 819 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40;

#line 819 "intermod.m"
    {
#line 819 "intermod.m"
      transform_hlds__intermod__gather_instances_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40);
    }
#line 819 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40));
#line 819 "intermod.m"
  }
#line 819 "intermod.m"
}

#line 814 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0(
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefns_8,
#line 814 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_10,
#line 814 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_11)
#line 814 "intermod.m"
{
#line 818 "intermod.m"
  {
#line 818 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 818 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12;
#line 819 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11;

#line 819 "intermod.m"
    {
#line 819 "intermod.m"
      transform_hlds__intermod__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 819 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[1]));
#line 819 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 1) = ((MR_Box) (transform_hlds__intermod__gather_instances_2_5_p_0_1));
#line 819 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 819 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_6));
#line 819 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 4) = ((MR_Box) (transform_hlds__intermod__ClassId_7));
#line 819 "intermod.m"
    }
#line 819 "intermod.m"
    {
#line 819 "intermod.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_12_12, transform_hlds__intermod__InstanceDefns_8, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_10)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11);
    }
#line 819 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_Info_11 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11);
#line 818 "intermod.m"
  }
#line 814 "intermod.m"
}

#line 767 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(
#line 767 "intermod.m"
  MR_Word transform_hlds__intermod__RHS0_6,
#line 767 "intermod.m"
  MR_Word * transform_hlds__intermod__RHS_7,
#line 767 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 767 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_28,
#line 767 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_29)
#line 767 "intermod.m"
{
#line 772 "intermod.m"
  {
#line 772 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 772 "intermod.m"
#line 772 "intermod.m"
    switch (MR_tag((MR_Word) transform_hlds__intermod__RHS0_6)) {
#line 772 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 772 "intermod.m"
      case (MR_Integer) 0:
#line 772 "intermod.m"
        {
#line 773 "intermod.m"
          *transform_hlds__intermod__RHS_7 = transform_hlds__intermod__RHS0_6;
#line 774 "intermod.m"
          *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 772 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 772 "intermod.m"
        }
#line 772 "intermod.m"
        break;
#line 772 "intermod.m"
      case (MR_Integer) 1:
#line 782 "intermod.m"
        {
#line 782 "intermod.m"
          MR_Word transform_hlds__intermod__Functor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)));
#line 782 "intermod.m"
          MR_Word transform_hlds__intermod___Exist_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 1)));
#line 782 "intermod.m"
          MR_Word transform_hlds__intermod___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 2)));
#line 791 "intermod.m"
          MR_Word transform_hlds__intermod__ShroudedPredProcId_24;

#line 783 "intermod.m"
          *transform_hlds__intermod__RHS_7 = transform_hlds__intermod__RHS0_6;
#line 785 "intermod.m"
          transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__Functor_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Functor_21, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 785 "intermod.m"
          if (transform_hlds__intermod__succeeded)
#line 785 "intermod.m"
            {
#line 785 "intermod.m"
              transform_hlds__intermod__ShroudedPredProcId_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Functor_21, (MR_Integer) 1)));
#line 789 "intermod.m"
              {
#line 789 "intermod.m"
                MR_Word transform_hlds__intermod__PredId_26;
#line 789 "intermod.m"
                MR_Word transform_hlds__intermod__V_30_30;
#line 789 "intermod.m"
                MR_Integer transform_hlds__intermod__V_27_27;
#line 634 "intermod.m"
                MR_Word transform_hlds__intermod__V_39_39;

#line 789 "intermod.m"
                {
#line 789 "intermod.m"
                  transform_hlds__intermod__V_30_30 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__intermod__ShroudedPredProcId_24);
                }
#line 789 "intermod.m"
                transform_hlds__intermod__PredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, (MR_Integer) 0)));
#line 789 "intermod.m"
                transform_hlds__intermod__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, (MR_Integer) 1)));
#line 634 "intermod.m"
                {
#line 634 "intermod.m"
                  transform_hlds__intermod__V_39_39 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 634 "intermod.m"
                {
#line 634 "intermod.m"
                  transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_26, transform_hlds__intermod__V_39_39);
                }
#line 639 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 638 "intermod.m"
                  {
#line 638 "intermod.m"
                    *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 638 "intermod.m"
                    *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 638 "intermod.m"
                  }
#line 639 "intermod.m"
                else
#line 640 "intermod.m"
                  {
#line 640 "intermod.m"
                    transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_26, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_28, transform_hlds__intermod__STATE_VARIABLE_Info_29);
#line 640 "intermod.m"
                    return;
                  }
#line 789 "intermod.m"
              }
#line 785 "intermod.m"
            }
#line 785 "intermod.m"
          else
#line 801 "intermod.m"
            {
#line 801 "intermod.m"
              *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 801 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 801 "intermod.m"
            }
#line 782 "intermod.m"
        }
#line 772 "intermod.m"
        break;
#line 772 "intermod.m"
      case (MR_Integer) 2:
#line 777 "intermod.m"
        {
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__Purity_11 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__HOGroundness_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__PorF_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 2)));
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__QuantVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 3)));
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 4)));
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 5)));
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__Goal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 6)));
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__Goal_20;
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_19, (MR_Integer) 0)));
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_19, (MR_Integer) 1)));
#line 777 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr_49;

#line 484 "intermod.m"
          {
#line 484 "intermod.m"
            transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_47, &transform_hlds__intermod__GoalExpr_49, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_28, transform_hlds__intermod__STATE_VARIABLE_Info_29);
          }
#line 485 "intermod.m"
          {
#line 485 "intermod.m"
            transform_hlds__intermod__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_20, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_49));
#line 485 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_20, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_48));
#line 485 "intermod.m"
          }
#line 779 "intermod.m"
          {
#line 779 "intermod.m"
            MR_Word base;
#line 779 "intermod.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 779 "intermod.m"
            *transform_hlds__intermod__RHS_7 = base;
#line 779 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((transform_hlds__intermod__Purity_11 | ((((transform_hlds__intermod__HOGroundness_12 << (MR_Integer) 2)) | ((transform_hlds__intermod__PorF_13 << (MR_Integer) 3)))))));
#line 779 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 779 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__intermod__NonLocals_15));
#line 779 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__intermod__QuantVars_16));
#line 779 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__intermod__Modes_17));
#line 779 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__intermod__Detism_18));
#line 779 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (transform_hlds__intermod__Goal_20));
#line 779 "intermod.m"
          }
#line 777 "intermod.m"
        }
#line 772 "intermod.m"
        break;
#line 772 "intermod.m"
    }
#line 772 "intermod.m"
  }
#line 767 "intermod.m"
}

#line 676 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_1(
#line 676 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 676 "intermod.m"
{
#line 676 "intermod.m"
  {
#line 676 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 676 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0, 1);
#line 676 "intermod.m"
  }
#line 676 "intermod.m"
}

#line 677 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_3(
#line 677 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 677 "intermod.m"
{
#line 677 "intermod.m"
  {
#line 677 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 677 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15 = ((MR_Integer) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15);
#line 677 "intermod.m"
    {
#line 677 "intermod.m"
      transform_hlds__intermod__add_proc_2_4_p_0_2(transform_hlds__intermod__env_ptr);
#line 677 "intermod.m"
      return;
    }
#line 677 "intermod.m"
  }
#line 677 "intermod.m"
}

#line 676 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_2(
#line 676 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 676 "intermod.m"
{
#line 676 "intermod.m"
  {
#line 676 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 676 "intermod.m"
    {
#line 678 "intermod.m"
      MR_Box transform_hlds__intermod__conv1_ProcInfo_16;

#line 16222 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 678 "intermod.m"
      {
#line 678 "intermod.m"
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15, &transform_hlds__intermod__conv1_ProcInfo_16);
      }
#line 678 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16 = ((MR_Word) transform_hlds__intermod__conv1_ProcInfo_16);
#line 679 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "intermod.m"
      {
#line 679 "intermod.m"
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41);
      }
#line 16238 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44 = (MR_Word) &transform_hlds__intermod_scalar_common_1[22];
#line 679 "intermod.m"
      {
#line 679 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44, ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26)), ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41)));
      }
#line 679 "intermod.m"
      if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 679 "intermod.m"
        {
#line 679 "intermod.m"
          transform_hlds__intermod__add_proc_2_4_p_0_1(transform_hlds__intermod__env_ptr);
#line 679 "intermod.m"
          return;
        }
#line 676 "intermod.m"
    }
#line 676 "intermod.m"
  }
#line 676 "intermod.m"
}

#line 676 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_4(
#line 676 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 676 "intermod.m"
{
#line 676 "intermod.m"
  {
#line 676 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 676 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0) == 0)
#line 676 "intermod.m"
      {
#line 676 "intermod.m"
        {
#line 676 "intermod.m"
          {
#line 676 "intermod.m"
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14);
          }
#line 677 "intermod.m"
          {
#line 677 "intermod.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11, transform_hlds__intermod__add_proc_2_4_p_0_3, transform_hlds__intermod__env_ptr);
          }
#line 676 "intermod.m"
        }
#line 676 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 676 "intermod.m"
      }
#line 676 "intermod.m"
    else
#line 676 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 676 "intermod.m"
  }
#line 676 "intermod.m"
}

#line 643 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0(
#line 643 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 643 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 643 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 643 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25)
#line 643 "intermod.m"
{
#line 643 "intermod.m"
  {
#line 643 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s transform_hlds__intermod__env;

#line 646 "intermod.m"
    {
#line 646 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 646 "intermod.m"
      MR_Word transform_hlds__intermod__Status_10;
#line 646 "intermod.m"
      MR_Word transform_hlds__intermod__Markers_12;
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2161 "intermod.m"
      MR_Word transform_hlds__intermod__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));

#line 648 "intermod.m"
      {
#line 648 "intermod.m"
        hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__PredId_5, &(transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 649 "intermod.m"
      {
#line 649 "intermod.m"
        hlds__hlds_pred__pred_info_get_import_status_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__Status_10);
      }
#line 650 "intermod.m"
      {
#line 650 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 651 "intermod.m"
      {
#line 651 "intermod.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__Markers_12);
      }
#line 658 "intermod.m"
      {
#line 658 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 659 "intermod.m"
      if (!((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded))
#line 659 "intermod.m"
        {
#line 659 "intermod.m"
          MR_Word transform_hlds__intermod__V_13_13;

#line 659 "intermod.m"
          {
#line 659 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_13_13);
          }
#line 659 "intermod.m"
        }
#line 663 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 662 "intermod.m"
        {
#line 662 "intermod.m"
          *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 662 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 662 "intermod.m"
        }
#line 663 "intermod.m"
      else
#line 683 "intermod.m"
        {
#line 674 "intermod.m"
          {
#line 674 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, (MR_Integer) 3);
          }
#line 675 "intermod.m"
          if (!((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded))
#line 676 "intermod.m"
            {
#line 676 "intermod.m"
              {
#line 676 "intermod.m"
                transform_hlds__intermod__add_proc_2_4_p_0_4(&transform_hlds__intermod__env);
              }
#line 676 "intermod.m"
            }
#line 683 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 682 "intermod.m"
            {
#line 682 "intermod.m"
              *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 682 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 682 "intermod.m"
            }
#line 683 "intermod.m"
          else
#line 713 "intermod.m"
            {
#line 709 "intermod.m"
              MR_Word transform_hlds__intermod__V_42_42;
#line 710 "intermod.m"
              MR_Word transform_hlds__intermod__V_29_29;

#line 709 "intermod.m"
              {
#line 709 "intermod.m"
                hlds__hlds_pred__pred_info_get_purity_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_42_42);
              }
#line 709 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = ((MR_Integer) 2 == transform_hlds__intermod__V_42_42);
#line 709 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 709 "intermod.m"
                {
#line 710 "intermod.m"
                  transform_hlds__intermod__V_29_29 = (MR_Integer) 22;
#line 710 "intermod.m"
                  {
#line 710 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, transform_hlds__intermod__V_29_29);
                  }
#line 710 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded);
#line 709 "intermod.m"
                }
#line 713 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 712 "intermod.m"
                {
#line 712 "intermod.m"
                  *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 712 "intermod.m"
                  *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 712 "intermod.m"
                }
#line 713 "intermod.m"
              else
#line 726 "intermod.m"
                {
#line 720 "intermod.m"
                  if ((transform_hlds__intermod__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 719 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 720 "intermod.m"
                  else
#line 720 "intermod.m"
                  if (((MR_tag((MR_Word) transform_hlds__intermod__Status_10)) == (MR_mktag((MR_Integer) 1))))
#line 721 "intermod.m"
                    {
#line 721 "intermod.m"
                      MR_Word transform_hlds__intermod__ExternalStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_10, (MR_Integer) 0)));
#line 721 "intermod.m"
                      MR_Word transform_hlds__intermod__V_30_30;

#line 722 "intermod.m"
                      {
#line 722 "intermod.m"
                        transform_hlds__intermod__V_30_30 = parse_tree__status__status_is_exported_1_f_0(transform_hlds__intermod__ExternalStatus_17);
                      }
#line 722 "intermod.m"
                      (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = (transform_hlds__intermod__V_30_30 == (MR_Integer) 1);
#line 721 "intermod.m"
                    }
#line 720 "intermod.m"
                  else
#line 720 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 726 "intermod.m"
                  if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 725 "intermod.m"
                    {
#line 725 "intermod.m"
                      *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 725 "intermod.m"
                      *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 725 "intermod.m"
                    }
#line 726 "intermod.m"
                  else
#line 735 "intermod.m"
                    {
#line 731 "intermod.m"
                      MR_Word transform_hlds__intermod__V_31_31;
#line 731 "intermod.m"
                      MR_Word transform_hlds__intermod__V_43_43;

#line 731 "intermod.m"
                      {
#line 731 "intermod.m"
                        hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_43_43);
                      }
#line 731 "intermod.m"
                      {
#line 731 "intermod.m"
                        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[23], ((MR_Box) (transform_hlds__intermod__Markers_12)), ((MR_Box) (transform_hlds__intermod__V_43_43)));
                      }
#line 731 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 731 "intermod.m"
                        {
#line 732 "intermod.m"
                          transform_hlds__intermod__V_31_31 = (MR_Integer) 9;
#line 732 "intermod.m"
                          {
#line 732 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, transform_hlds__intermod__V_31_31);
                          }
#line 731 "intermod.m"
                        }
#line 735 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 734 "intermod.m"
                        {
#line 734 "intermod.m"
                          *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 734 "intermod.m"
                          *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 734 "intermod.m"
                        }
#line 735 "intermod.m"
                      else
#line 746 "intermod.m"
                        {
#line 740 "intermod.m"
                          {
#line 740 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status_10);
                          }
#line 746 "intermod.m"
                          if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 742 "intermod.m"
                            {
#line 742 "intermod.m"
                              MR_Word transform_hlds__intermod__PredDecls0_18;
#line 742 "intermod.m"
                              MR_Word transform_hlds__intermod__PredDecls_19;
#line 2158 "intermod.m"
                              MR_Word transform_hlds__intermod__V_56_56;
#line 2158 "intermod.m"
                              MR_Word transform_hlds__intermod__V_57_57;
#line 2158 "intermod.m"
                              MR_Word transform_hlds__intermod__V_58_58;
#line 2158 "intermod.m"
                              MR_Word transform_hlds__intermod__V_59_59;
#line 2158 "intermod.m"
                              MR_Word transform_hlds__intermod__V_60_60;
#line 2158 "intermod.m"
                              MR_Word transform_hlds__intermod__V_61_61;
#line 2158 "intermod.m"
                              MR_Word transform_hlds__intermod__V_62_62;
#line 2158 "intermod.m"
                              MR_Word transform_hlds__intermod__V_63_63;
#line 2168 "intermod.m"
                              MR_Word transform_hlds__intermod__V_66_66;
#line 2168 "intermod.m"
                              MR_Word transform_hlds__intermod__V_67_67;
#line 2168 "intermod.m"
                              MR_Word transform_hlds__intermod__V_69_69;
#line 2168 "intermod.m"
                              MR_Word transform_hlds__intermod__V_70_70;
#line 2168 "intermod.m"
                              MR_Word transform_hlds__intermod__V_71_71;
#line 2168 "intermod.m"
                              MR_Word transform_hlds__intermod__V_72_72;
#line 2168 "intermod.m"
                              MR_Word transform_hlds__intermod__V_73_73;
#line 2168 "intermod.m"
                              MR_Word transform_hlds__intermod__V_74_74;
#line 2168 "intermod.m"
                              MR_Word transform_hlds__intermod__V_68_68;

#line 742 "intermod.m"
                              *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 2158 "intermod.m"
                              transform_hlds__intermod__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2158 "intermod.m"
                              transform_hlds__intermod__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2158 "intermod.m"
                              transform_hlds__intermod__PredDecls0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2158 "intermod.m"
                              transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2158 "intermod.m"
                              transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2158 "intermod.m"
                              transform_hlds__intermod__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2158 "intermod.m"
                              transform_hlds__intermod__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2158 "intermod.m"
                              transform_hlds__intermod__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2158 "intermod.m"
                              transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 744 "intermod.m"
                              {
#line 744 "intermod.m"
                                mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__intermod__PredId_5)), transform_hlds__intermod__PredDecls0_18, &transform_hlds__intermod__PredDecls_19);
                              }
#line 2168 "intermod.m"
                              transform_hlds__intermod__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2168 "intermod.m"
                              transform_hlds__intermod__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2168 "intermod.m"
                              transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2168 "intermod.m"
                              transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2168 "intermod.m"
                              transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2168 "intermod.m"
                              transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2168 "intermod.m"
                              transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2168 "intermod.m"
                              transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2168 "intermod.m"
                              transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 2168 "intermod.m"
                              {
#line 2168 "intermod.m"
                                MR_Word base;
#line 2168 "intermod.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2168 "intermod.m"
                                *transform_hlds__intermod__STATE_VARIABLE_Info_25 = base;
#line 2168 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_66_66));
#line 2168 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_67_67));
#line 2168 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__PredDecls_19));
#line 2168 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 2168 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_70_70));
#line 2168 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_71_71));
#line 2168 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_72_72));
#line 2168 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_73_73));
#line 2168 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_74_74));
#line 2168 "intermod.m"
                              }
#line 742 "intermod.m"
                            }
#line 746 "intermod.m"
                          else
#line 758 "intermod.m"
                            {
#line 748 "intermod.m"
                              if ((transform_hlds__intermod__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 748 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 748 "intermod.m"
                              else
#line 748 "intermod.m"
                              if (((MR_tag((MR_Word) transform_hlds__intermod__Status_10)) == (MR_mktag((MR_Integer) 2))))
#line 747 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 748 "intermod.m"
                              else
#line 748 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 758 "intermod.m"
                              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 753 "intermod.m"
                                {
#line 753 "intermod.m"
                                  MR_Word transform_hlds__intermod__PredModule_21;
#line 753 "intermod.m"
                                  MR_Word transform_hlds__intermod__Modules0_22;
#line 753 "intermod.m"
                                  MR_Word transform_hlds__intermod__Modules_23;
#line 2156 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_76_76;
#line 2156 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_77_77;
#line 2156 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_78_78;
#line 2156 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_79_79;
#line 2156 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_80_80;
#line 2156 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_81_81;
#line 2156 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_82_82;
#line 2156 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_83_83;
#line 2166 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_87_87;
#line 2166 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_88_88;
#line 2166 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_89_89;
#line 2166 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_90_90;
#line 2166 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_91_91;
#line 2166 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_92_92;
#line 2166 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_93_93;
#line 2166 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_94_94;
#line 2166 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_86_86;

#line 753 "intermod.m"
                                  *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 754 "intermod.m"
                                  {
#line 754 "intermod.m"
                                    transform_hlds__intermod__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
                                  }
#line 2156 "intermod.m"
                                  transform_hlds__intermod__Modules0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2156 "intermod.m"
                                  transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2156 "intermod.m"
                                  transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2156 "intermod.m"
                                  transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2156 "intermod.m"
                                  transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2156 "intermod.m"
                                  transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2156 "intermod.m"
                                  transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2156 "intermod.m"
                                  transform_hlds__intermod__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2156 "intermod.m"
                                  transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 756 "intermod.m"
                                  {
#line 756 "intermod.m"
                                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__intermod__PredModule_21)), transform_hlds__intermod__Modules0_22, &transform_hlds__intermod__Modules_23);
                                  }
#line 2166 "intermod.m"
                                  transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2166 "intermod.m"
                                  transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2166 "intermod.m"
                                  transform_hlds__intermod__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2166 "intermod.m"
                                  transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2166 "intermod.m"
                                  transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2166 "intermod.m"
                                  transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2166 "intermod.m"
                                  transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2166 "intermod.m"
                                  transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2166 "intermod.m"
                                  transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 2166 "intermod.m"
                                  {
#line 2166 "intermod.m"
                                    MR_Word base;
#line 2166 "intermod.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2166 "intermod.m"
                                    *transform_hlds__intermod__STATE_VARIABLE_Info_25 = base;
#line 2166 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__Modules_23));
#line 2166 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2166 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2166 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2166 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_90_90));
#line 2166 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_91_91));
#line 2166 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_92_92));
#line 2166 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_93_93));
#line 2166 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_94_94));
#line 2166 "intermod.m"
                                  }
#line 753 "intermod.m"
                                }
#line 758 "intermod.m"
                              else
#line 759 "intermod.m"
                                {
#line 759 "intermod.m"
                                  {
#line 759 "intermod.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.add_proc_2\'/4", (MR_String) "unexpected status");
#line 759 "intermod.m"
                                    return;
                                  }
#line 759 "intermod.m"
                                }
#line 758 "intermod.m"
                            }
#line 746 "intermod.m"
                        }
#line 735 "intermod.m"
                    }
#line 726 "intermod.m"
                }
#line 713 "intermod.m"
            }
#line 683 "intermod.m"
        }
#line 646 "intermod.m"
    }
#line 643 "intermod.m"
  }
#line 643 "intermod.m"
}

#line 630 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_4_p_0(
#line 630 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 630 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 630 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_8,
#line 630 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_9)
#line 630 "intermod.m"
{
#line 639 "intermod.m"
  {
#line 639 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 634 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 634 "intermod.m"
    {
#line 634 "intermod.m"
      transform_hlds__intermod__V_11_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 634 "intermod.m"
    {
#line 634 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_5, transform_hlds__intermod__V_11_11);
    }
#line 639 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 638 "intermod.m"
      {
#line 638 "intermod.m"
        *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 638 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_9 = transform_hlds__intermod__STATE_VARIABLE_Info_0_8;
#line 638 "intermod.m"
      }
#line 639 "intermod.m"
    else
#line 640 "intermod.m"
      {
#line 640 "intermod.m"
        transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_5, transform_hlds__intermod__DoWrite_6, transform_hlds__intermod__STATE_VARIABLE_Info_0_8, transform_hlds__intermod__STATE_VARIABLE_Info_9);
#line 640 "intermod.m"
        return;
      }
#line 639 "intermod.m"
  }
#line 630 "intermod.m"
}

#line 603 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_cases_5_p_0(
#line 603 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 603 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 603 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 603 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 603 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 603 "intermod.m"
{
#line 606 "intermod.m"
  {
#line 606 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 606 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "intermod.m"
      {
#line 606 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 606 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 606 "intermod.m"
      }
#line 606 "intermod.m"
    else
#line 607 "intermod.m"
      {
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__Case_11;
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__Cases_12;
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 0)));
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 1)));
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 2)));
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_18;
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22;
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_23_23;
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_17, (MR_Integer) 0)));
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_17, (MR_Integer) 1)));
#line 607 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_34;

#line 484 "intermod.m"
        {
#line 484 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_32, &transform_hlds__intermod__GoalExpr_34, &transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_23_23);
        }
#line 485 "intermod.m"
        {
#line 485 "intermod.m"
          transform_hlds__intermod__Goal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_18, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_34));
#line 485 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_18, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_33));
#line 485 "intermod.m"
        }
#line 610 "intermod.m"
        {
#line 610 "intermod.m"
          transform_hlds__intermod__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 610 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 0) = ((MR_Box) (transform_hlds__intermod__MainConsId_15));
#line 610 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 1) = ((MR_Box) (transform_hlds__intermod__OtherConsIds_16));
#line 610 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 2) = ((MR_Box) (transform_hlds__intermod__Goal_18));
#line 610 "intermod.m"
        }
#line 614 "intermod.m"
#line 614 "intermod.m"
        switch (transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22) {
#line 614 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 614 "intermod.m"
          case (MR_Integer) 0:
#line 615 "intermod.m"
            {
#line 616 "intermod.m"
              transform_hlds__intermod__Cases_12 = transform_hlds__intermod__Cases0_10;
#line 615 "intermod.m"
              *transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22;
#line 615 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_23_23;
#line 615 "intermod.m"
            }
#line 614 "intermod.m"
            break;
#line 614 "intermod.m"
          case (MR_Integer) 1:
#line 613 "intermod.m"
            {
#line 613 "intermod.m"
              transform_hlds__intermod__intermod_traverse_cases_5_p_0(transform_hlds__intermod__Cases0_10, &transform_hlds__intermod__Cases_12, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__STATE_VARIABLE_Info_23_23, transform_hlds__intermod__STATE_VARIABLE_Info_5);
            }
#line 614 "intermod.m"
            break;
#line 614 "intermod.m"
        }
#line 607 "intermod.m"
        {
#line 607 "intermod.m"
          MR_Word base;
#line 607 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "intermod.m"
          *transform_hlds__intermod__HeadVar__2_2 = base;
#line 607 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Case_11));
#line 607 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Cases_12));
#line 607 "intermod.m"
        }
#line 607 "intermod.m"
      }
#line 606 "intermod.m"
  }
#line 603 "intermod.m"
}

#line 588 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(
#line 588 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 588 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 588 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 588 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 588 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 588 "intermod.m"
{
#line 591 "intermod.m"
  {
#line 591 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 591 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 591 "intermod.m"
      {
#line 591 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 591 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 591 "intermod.m"
      }
#line 591 "intermod.m"
    else
#line 593 "intermod.m"
      {
#line 593 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 593 "intermod.m"
        MR_Word transform_hlds__intermod__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 593 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_11;
#line 593 "intermod.m"
        MR_Word transform_hlds__intermod__Goals_12;
#line 593 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18;
#line 593 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_19_19;
#line 593 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 0)));
#line 593 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 1)));
#line 593 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_30;

#line 484 "intermod.m"
        {
#line 484 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_28, &transform_hlds__intermod__GoalExpr_30, &transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_19_19);
        }
#line 485 "intermod.m"
        {
#line 485 "intermod.m"
          transform_hlds__intermod__Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_11, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_30));
#line 485 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_11, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_29));
#line 485 "intermod.m"
        }
#line 598 "intermod.m"
#line 598 "intermod.m"
        switch (transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18) {
#line 598 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 598 "intermod.m"
          case (MR_Integer) 0:
#line 599 "intermod.m"
            {
#line 600 "intermod.m"
              transform_hlds__intermod__Goals_12 = transform_hlds__intermod__Goals0_10;
#line 599 "intermod.m"
              *transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18;
#line 599 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_19_19;
#line 599 "intermod.m"
            }
#line 598 "intermod.m"
            break;
#line 598 "intermod.m"
          case (MR_Integer) 1:
#line 597 "intermod.m"
            {
#line 597 "intermod.m"
              transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_10, &transform_hlds__intermod__Goals_12, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__STATE_VARIABLE_Info_19_19, transform_hlds__intermod__STATE_VARIABLE_Info_5);
            }
#line 598 "intermod.m"
            break;
#line 598 "intermod.m"
        }
#line 592 "intermod.m"
        {
#line 592 "intermod.m"
          MR_Word base;
#line 592 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "intermod.m"
          *transform_hlds__intermod__HeadVar__2_2 = base;
#line 592 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Goal_11));
#line 592 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Goals_12));
#line 592 "intermod.m"
        }
#line 593 "intermod.m"
      }
#line 591 "intermod.m"
  }
#line 588 "intermod.m"
}

#line 487 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(
#line 487 "intermod.m"
  MR_Word transform_hlds__intermod__GoalExpr0_6,
#line 487 "intermod.m"
  MR_Word * transform_hlds__intermod__GoalExpr_7,
#line 487 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 487 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_81,
#line 487 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_82)
#line 487 "intermod.m"
{
#line 492 "intermod.m"
  {
#line 492 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 492 "intermod.m"
#line 492 "intermod.m"
    switch (MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) {
#line 492 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 492 "intermod.m"
      case (MR_Integer) 0:
#line 554 "intermod.m"
        {
#line 554 "intermod.m"
          MR_Word transform_hlds__intermod__SubGoal0_63 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__GoalExpr0_6), (MR_Integer) 0);
#line 554 "intermod.m"
          MR_Word transform_hlds__intermod__SubGoal_64;

#line 555 "intermod.m"
          {
#line 555 "intermod.m"
            transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_63, &transform_hlds__intermod__SubGoal_64, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
          }
#line 556 "intermod.m"
          *transform_hlds__intermod__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__SubGoal_64);
#line 554 "intermod.m"
        }
#line 492 "intermod.m"
        break;
#line 492 "intermod.m"
      case (MR_Integer) 1:
#line 492 "intermod.m"
        {
#line 492 "intermod.m"
          MR_Word transform_hlds__intermod__LVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)));
#line 492 "intermod.m"
          MR_Word transform_hlds__intermod__RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 492 "intermod.m"
          MR_Word transform_hlds__intermod__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 492 "intermod.m"
          MR_Word transform_hlds__intermod__Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 492 "intermod.m"
          MR_Word transform_hlds__intermod__UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 492 "intermod.m"
          MR_Word transform_hlds__intermod__RHS_15;

#line 495 "intermod.m"
          {
#line 495 "intermod.m"
            transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(transform_hlds__intermod__RHS0_11, &transform_hlds__intermod__RHS_15, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
          }
#line 496 "intermod.m"
          {
#line 496 "intermod.m"
            MR_Word base;
#line 496 "intermod.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 496 "intermod.m"
            *transform_hlds__intermod__GoalExpr_7 = base;
#line 496 "intermod.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__LVar_10));
#line 496 "intermod.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__RHS_15));
#line 496 "intermod.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__intermod__Mode_12));
#line 496 "intermod.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__intermod__Kind_13));
#line 496 "intermod.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__intermod__UnifyContext_14));
#line 496 "intermod.m"
          }
#line 492 "intermod.m"
        }
#line 492 "intermod.m"
        break;
#line 492 "intermod.m"
      case (MR_Integer) 2:
#line 498 "intermod.m"
        {
#line 498 "intermod.m"
          MR_Word transform_hlds__intermod__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)));
#line 498 "intermod.m"
          MR_Integer transform_hlds__intermod__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 498 "intermod.m"
          MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 498 "intermod.m"
          MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 498 "intermod.m"
          MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 498 "intermod.m"
          MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));

#line 500 "intermod.m"
          {
#line 500 "intermod.m"
            transform_hlds__intermod__add_proc_4_p_0(transform_hlds__intermod__PredId_16, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
          }
#line 501 "intermod.m"
          *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 498 "intermod.m"
        }
#line 492 "intermod.m"
        break;
#line 492 "intermod.m"
      case (MR_Integer) 3:
#line 492 "intermod.m"
#line 492 "intermod.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) {
#line 492 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 492 "intermod.m"
          case (MR_Integer) 0:
#line 503 "intermod.m"
            {
#line 503 "intermod.m"
              MR_Word transform_hlds__intermod__CallType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 503 "intermod.m"
              MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 503 "intermod.m"
              MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 503 "intermod.m"
              MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 503 "intermod.m"
              MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));

#line 504 "intermod.m"
              *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 508 "intermod.m"
#line 508 "intermod.m"
              switch (MR_tag((MR_Word) transform_hlds__intermod__CallType_22)) {
#line 508 "intermod.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 508 "intermod.m"
                case (MR_Integer) 0:
#line 507 "intermod.m"
                  *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 508 "intermod.m"
                  break;
#line 508 "intermod.m"
                case (MR_Integer) 1:
#line 508 "intermod.m"
                case (MR_Integer) 2:
#line 508 "intermod.m"
                case (MR_Integer) 3:
#line 513 "intermod.m"
                  *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 508 "intermod.m"
                  break;
#line 508 "intermod.m"
              }
#line 503 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_82 = transform_hlds__intermod__STATE_VARIABLE_Info_0_81;
#line 503 "intermod.m"
            }
#line 492 "intermod.m"
            break;
#line 492 "intermod.m"
          case (MR_Integer) 1:
#line 516 "intermod.m"
            {
#line 516 "intermod.m"
              MR_Word transform_hlds__intermod__Attrs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 516 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeMayDuplicate_44;
#line 516 "intermod.m"
              MR_Word transform_hlds__intermod__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 516 "intermod.m"
              MR_Integer transform_hlds__intermod__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 516 "intermod.m"
              MR_Word transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 516 "intermod.m"
              MR_Word transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));
#line 516 "intermod.m"
              MR_Word transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 6)));
#line 516 "intermod.m"
              MR_Word transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 7)));

#line 517 "intermod.m"
              *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 520 "intermod.m"
              {
#line 520 "intermod.m"
                transform_hlds__intermod__MaybeMayDuplicate_44 = parse_tree__prog_data__get_may_duplicate_1_f_0(transform_hlds__intermod__Attrs_37);
              }
#line 530 "intermod.m"
              if ((transform_hlds__intermod__MaybeMayDuplicate_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "intermod.m"
                *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 530 "intermod.m"
              else
#line 522 "intermod.m"
                {
#line 522 "intermod.m"
                  MR_Word transform_hlds__intermod__MayDuplicate_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeMayDuplicate_44, (MR_Integer) 0)));

#line 526 "intermod.m"
#line 526 "intermod.m"
                  switch (transform_hlds__intermod__MayDuplicate_45) {
#line 526 "intermod.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 526 "intermod.m"
                    case (MR_Integer) 0:
#line 525 "intermod.m"
                      *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 526 "intermod.m"
                      break;
#line 526 "intermod.m"
                    case (MR_Integer) 1:
#line 528 "intermod.m"
                      *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 526 "intermod.m"
                      break;
#line 526 "intermod.m"
                  }
#line 522 "intermod.m"
                }
#line 516 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_82 = transform_hlds__intermod__STATE_VARIABLE_Info_0_81;
#line 516 "intermod.m"
            }
#line 492 "intermod.m"
            break;
#line 492 "intermod.m"
          case (MR_Integer) 2:
#line 535 "intermod.m"
            {
#line 535 "intermod.m"
              MR_Word transform_hlds__intermod__ConjType_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 535 "intermod.m"
              MR_Word transform_hlds__intermod__Goals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 535 "intermod.m"
              MR_Word transform_hlds__intermod__Goals_48;

#line 536 "intermod.m"
              {
#line 536 "intermod.m"
                transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_47, &transform_hlds__intermod__Goals_48, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
              }
#line 537 "intermod.m"
              {
#line 537 "intermod.m"
                MR_Word base;
#line 537 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 537 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 537 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 537 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__ConjType_46));
#line 537 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__Goals_48));
#line 537 "intermod.m"
              }
#line 535 "intermod.m"
            }
#line 492 "intermod.m"
            break;
#line 492 "intermod.m"
          case (MR_Integer) 3:
#line 539 "intermod.m"
            {
#line 539 "intermod.m"
              MR_Word transform_hlds__intermod__Goals0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 539 "intermod.m"
              MR_Word transform_hlds__intermod__Goals_104;

#line 540 "intermod.m"
              {
#line 540 "intermod.m"
                transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_103, &transform_hlds__intermod__Goals_104, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
              }
#line 541 "intermod.m"
              {
#line 541 "intermod.m"
                MR_Word base;
#line 541 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 541 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 541 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Goals_104));
#line 541 "intermod.m"
              }
#line 539 "intermod.m"
            }
#line 492 "intermod.m"
            break;
#line 492 "intermod.m"
          case (MR_Integer) 4:
#line 543 "intermod.m"
            {
#line 543 "intermod.m"
              MR_Word transform_hlds__intermod__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 543 "intermod.m"
              MR_Word transform_hlds__intermod__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 543 "intermod.m"
              MR_Word transform_hlds__intermod__Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 543 "intermod.m"
              MR_Word transform_hlds__intermod__Cases_52;

#line 544 "intermod.m"
              {
#line 544 "intermod.m"
                transform_hlds__intermod__intermod_traverse_cases_5_p_0(transform_hlds__intermod__Cases0_51, &transform_hlds__intermod__Cases_52, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
              }
#line 545 "intermod.m"
              {
#line 545 "intermod.m"
                MR_Word base;
#line 545 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 545 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 545 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 545 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Var_49));
#line 545 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__CanFail_50));
#line 545 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__intermod__Cases_52));
#line 545 "intermod.m"
              }
#line 543 "intermod.m"
            }
#line 492 "intermod.m"
            break;
#line 492 "intermod.m"
          case (MR_Integer) 5:
#line 558 "intermod.m"
            {
#line 558 "intermod.m"
              MR_Word transform_hlds__intermod__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 558 "intermod.m"
              MR_Word transform_hlds__intermod__SubGoal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 558 "intermod.m"
              MR_Word transform_hlds__intermod__SubGoal_106;

#line 563 "intermod.m"
              {
#line 563 "intermod.m"
                transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_105, &transform_hlds__intermod__SubGoal_106, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
              }
#line 564 "intermod.m"
              {
#line 564 "intermod.m"
                MR_Word base;
#line 564 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 564 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 564 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 564 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Reason_65));
#line 564 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__SubGoal_106));
#line 564 "intermod.m"
              }
#line 558 "intermod.m"
            }
#line 492 "intermod.m"
            break;
#line 492 "intermod.m"
          case (MR_Integer) 6:
#line 547 "intermod.m"
            {
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__Cond0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__Then0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__Else0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__Cond_57;
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__DoWrite1_58;
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__Then_59;
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__DoWrite2_60;
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__Else_61;
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__DoWrite3_62;
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_91_91;
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_92_92;
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__V_94_94;
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__V_95_95;
#line 547 "intermod.m"
              MR_Word transform_hlds__intermod__V_96_96;

#line 548 "intermod.m"
              {
#line 548 "intermod.m"
                transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Cond0_54, &transform_hlds__intermod__Cond_57, &transform_hlds__intermod__DoWrite1_58, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, &transform_hlds__intermod__STATE_VARIABLE_Info_91_91);
              }
#line 549 "intermod.m"
              {
#line 549 "intermod.m"
                transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Then0_55, &transform_hlds__intermod__Then_59, &transform_hlds__intermod__DoWrite2_60, transform_hlds__intermod__STATE_VARIABLE_Info_91_91, &transform_hlds__intermod__STATE_VARIABLE_Info_92_92);
              }
#line 550 "intermod.m"
              {
#line 550 "intermod.m"
                transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Else0_56, &transform_hlds__intermod__Else_61, &transform_hlds__intermod__DoWrite3_62, transform_hlds__intermod__STATE_VARIABLE_Info_92_92, transform_hlds__intermod__STATE_VARIABLE_Info_82);
              }
#line 551 "intermod.m"
              {
#line 551 "intermod.m"
                transform_hlds__intermod__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_96_96, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite3_62));
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "intermod.m"
              }
#line 551 "intermod.m"
              {
#line 551 "intermod.m"
                transform_hlds__intermod__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_95_95, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite2_60));
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_95_95, 1) = ((MR_Box) (transform_hlds__intermod__V_96_96));
#line 551 "intermod.m"
              }
#line 551 "intermod.m"
              {
#line 551 "intermod.m"
                transform_hlds__intermod__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_94_94, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite1_58));
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_94_94, 1) = ((MR_Box) (transform_hlds__intermod__V_95_95));
#line 551 "intermod.m"
              }
#line 551 "intermod.m"
              {
#line 551 "intermod.m"
                mercury__bool__and_list_2_p_0(transform_hlds__intermod__V_94_94, transform_hlds__intermod__DoWrite_8);
              }
#line 552 "intermod.m"
              {
#line 552 "intermod.m"
                MR_Word base;
#line 552 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 552 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 552 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 552 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Vars_53));
#line 552 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__Cond_57));
#line 552 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__intermod__Then_59));
#line 552 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__intermod__Else_61));
#line 552 "intermod.m"
              }
#line 547 "intermod.m"
            }
#line 492 "intermod.m"
            break;
#line 492 "intermod.m"
          case (MR_Integer) 7:
#line 566 "intermod.m"
            {
#line 566 "intermod.m"
              MR_Word transform_hlds__intermod__ShortHand0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 566 "intermod.m"
              MR_Word transform_hlds__intermod__ShortHand_76;

#line 576 "intermod.m"
#line 576 "intermod.m"
              switch (MR_tag((MR_Word) transform_hlds__intermod__ShortHand0_66)) {
#line 576 "intermod.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 576 "intermod.m"
                case (MR_Integer) 0:
#line 581 "intermod.m"
                  {
#line 583 "intermod.m"
                    {
#line 583 "intermod.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_traverse_goal_expr\'/5", (MR_String) "bi_implication");
#line 583 "intermod.m"
                      return;
                    }
#line 581 "intermod.m"
                  }
#line 576 "intermod.m"
                  break;
#line 576 "intermod.m"
                case (MR_Integer) 1:
#line 569 "intermod.m"
                  {
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__GoalType_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 0)));
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__Outer_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 1)));
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__Inner_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 2)));
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__MaybeOutputVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 3)));
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__MainGoal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 4)));
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__OrElseGoals0_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 5)));
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__OrElseInners_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 6)));
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__MainGoal_74;
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__OrElseGoals_75;
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_87_87;
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__DoWrite1_107;
#line 569 "intermod.m"
                    MR_Word transform_hlds__intermod__DoWrite2_108;

#line 570 "intermod.m"
                    {
#line 570 "intermod.m"
                      transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__MainGoal0_71, &transform_hlds__intermod__MainGoal_74, &transform_hlds__intermod__DoWrite1_107, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, &transform_hlds__intermod__STATE_VARIABLE_Info_87_87);
                    }
#line 571 "intermod.m"
                    {
#line 571 "intermod.m"
                      transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__OrElseGoals0_72, &transform_hlds__intermod__OrElseGoals_75, &transform_hlds__intermod__DoWrite2_108, transform_hlds__intermod__STATE_VARIABLE_Info_87_87, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                    }
#line 573 "intermod.m"
                    {
#line 573 "intermod.m"
                      mercury__bool__and_3_p_0(transform_hlds__intermod__DoWrite1_107, transform_hlds__intermod__DoWrite2_108, transform_hlds__intermod__DoWrite_8);
                    }
#line 574 "intermod.m"
                    {
#line 574 "intermod.m"
                      transform_hlds__intermod__ShortHand_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 574 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 0) = ((MR_Box) (transform_hlds__intermod__GoalType_67));
#line 574 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 1) = ((MR_Box) (transform_hlds__intermod__Outer_68));
#line 574 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 2) = ((MR_Box) (transform_hlds__intermod__Inner_69));
#line 574 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 3) = ((MR_Box) (transform_hlds__intermod__MaybeOutputVars_70));
#line 574 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 4) = ((MR_Box) (transform_hlds__intermod__MainGoal_74));
#line 574 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 5) = ((MR_Box) (transform_hlds__intermod__OrElseGoals_75));
#line 574 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 6) = ((MR_Box) (transform_hlds__intermod__OrElseInners_73));
#line 574 "intermod.m"
                    }
#line 569 "intermod.m"
                  }
#line 576 "intermod.m"
                  break;
#line 576 "intermod.m"
                case (MR_Integer) 2:
#line 577 "intermod.m"
                  {
#line 577 "intermod.m"
                    MR_Word transform_hlds__intermod__MaybeIO_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 0)));
#line 577 "intermod.m"
                    MR_Word transform_hlds__intermod__ResultVar_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 1)));
#line 577 "intermod.m"
                    MR_Word transform_hlds__intermod__SubGoal0_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 2)));
#line 577 "intermod.m"
                    MR_Word transform_hlds__intermod__SubGoal_110;

#line 578 "intermod.m"
                    {
#line 578 "intermod.m"
                      transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_109, &transform_hlds__intermod__SubGoal_110, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                    }
#line 579 "intermod.m"
                    {
#line 579 "intermod.m"
                      transform_hlds__intermod__ShortHand_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 579 "intermod.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 0) = ((MR_Box) (transform_hlds__intermod__MaybeIO_77));
#line 579 "intermod.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 1) = ((MR_Box) (transform_hlds__intermod__ResultVar_78));
#line 579 "intermod.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 2) = ((MR_Box) (transform_hlds__intermod__SubGoal_110));
#line 579 "intermod.m"
                    }
#line 577 "intermod.m"
                  }
#line 576 "intermod.m"
                  break;
#line 576 "intermod.m"
              }
#line 585 "intermod.m"
              {
#line 585 "intermod.m"
                MR_Word base;
#line 585 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 585 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 585 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__ShortHand_76));
#line 585 "intermod.m"
              }
#line 566 "intermod.m"
            }
#line 492 "intermod.m"
            break;
#line 492 "intermod.m"
        }
#line 492 "intermod.m"
        break;
#line 492 "intermod.m"
    }
#line 492 "intermod.m"
  }
#line 487 "intermod.m"
}

#line 479 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_5_p_0(
#line 479 "intermod.m"
  MR_Word transform_hlds__intermod__Goal0_6,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__Goal_7,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 479 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_13,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_14)
#line 479 "intermod.m"
{
#line 482 "intermod.m"
  {
#line 482 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 482 "intermod.m"
    MR_Word transform_hlds__intermod__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_6, (MR_Integer) 0)));
#line 482 "intermod.m"
    MR_Word transform_hlds__intermod__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_6, (MR_Integer) 1)));
#line 482 "intermod.m"
    MR_Word transform_hlds__intermod__GoalExpr_12;

#line 484 "intermod.m"
    {
#line 484 "intermod.m"
      transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_10, &transform_hlds__intermod__GoalExpr_12, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_13, transform_hlds__intermod__STATE_VARIABLE_Info_14);
    }
#line 485 "intermod.m"
    {
#line 485 "intermod.m"
      MR_Word base;
#line 485 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "intermod.m"
      *transform_hlds__intermod__Goal_7 = base;
#line 485 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_12));
#line 485 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_11));
#line 485 "intermod.m"
    }
#line 482 "intermod.m"
  }
#line 479 "intermod.m"
}

#line 464 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
#line 464 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 464 "intermod.m"
{
#line 464 "intermod.m"
  {
#line 464 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 464 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0, 1);
#line 464 "intermod.m"
  }
#line 464 "intermod.m"
}

#line 464 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
#line 464 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 464 "intermod.m"
{
#line 464 "intermod.m"
  {
#line 464 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 474 "intermod.m"
    {
#line 474 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8);
    }
#line 474 "intermod.m"
    if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 474 "intermod.m"
      {
#line 474 "intermod.m"
        transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(transform_hlds__intermod__env_ptr);
#line 474 "intermod.m"
        return;
      }
#line 464 "intermod.m"
  }
#line 464 "intermod.m"
}

#line 464 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
#line 464 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 464 "intermod.m"
{
#line 464 "intermod.m"
  {
#line 464 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 464 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0) == 0)
#line 464 "intermod.m"
      {
#line 464 "intermod.m"
        {
#line 464 "intermod.m"
          MR_Word transform_hlds__intermod__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)));
#line 464 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr_6;
#line 465 "intermod.m"
          MR_Word transform_hlds__intermod__V_7_7;

#line 464 "intermod.m"
          (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 465 "intermod.m"
          transform_hlds__intermod__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_3, (MR_Integer) 0)));
#line 465 "intermod.m"
          transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_3, (MR_Integer) 1)));
#line 467 "intermod.m"
          {
#line 467 "intermod.m"
            (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__intermod__GoalExpr_6);
          }
#line 467 "intermod.m"
          if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 467 "intermod.m"
            {
#line 468 "intermod.m"
              (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 0);
#line 467 "intermod.m"
              if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 467 "intermod.m"
                {
#line 469 "intermod.m"
                  (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (MR_Integer) 1;
#line 469 "intermod.m"
                  (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 467 "intermod.m"
                }
#line 467 "intermod.m"
            }
#line 467 "intermod.m"
          if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 467 "intermod.m"
            {
#line 467 "intermod.m"
              transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(transform_hlds__intermod__env_ptr);
            }
#line 471 "intermod.m"
          {
#line 471 "intermod.m"
            MR_Word transform_hlds__intermod__V_9_9;

#line 471 "intermod.m"
            {
#line 471 "intermod.m"
              transform_hlds__intermod__V_9_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__intermod__GoalExpr_6);
            }
#line 471 "intermod.m"
            (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = (transform_hlds__intermod__V_9_9 == (MR_Integer) 1);
#line 471 "intermod.m"
            if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 471 "intermod.m"
              {
#line 472 "intermod.m"
                (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
#line 472 "intermod.m"
                (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 471 "intermod.m"
              }
#line 471 "intermod.m"
            if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 471 "intermod.m"
              {
#line 471 "intermod.m"
                transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(transform_hlds__intermod__env_ptr);
              }
#line 471 "intermod.m"
          }
#line 464 "intermod.m"
        }
#line 464 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_FALSE;
#line 464 "intermod.m"
      }
#line 464 "intermod.m"
    else
#line 464 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 464 "intermod.m"
  }
#line 464 "intermod.m"
}

#line 460 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
#line 460 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 460 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 460 "intermod.m"
{
#line 460 "intermod.m"
  {
#line 460 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s transform_hlds__intermod__env;

#line 460 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1_1;
#line 460 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2_2;
#line 463 "intermod.m"
    if (((transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "intermod.m"
      (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 1);
#line 463 "intermod.m"
    else
#line 464 "intermod.m"
      {
#line 464 "intermod.m"
        {
#line 464 "intermod.m"
          transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(&transform_hlds__intermod__env);
        }
#line 464 "intermod.m"
      }
#line 463 "intermod.m"
    return (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
#line 460 "intermod.m"
  }
#line 460 "intermod.m"
}

#line 422 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__check_for_ho_input_args_4_p_0(
#line 422 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_5,
#line 422 "intermod.m"
  MR_Word transform_hlds__intermod__VarTypes_6,
#line 422 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 422 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4)
#line 422 "intermod.m"
{
#line 426 "intermod.m"
  while (MR_TRUE)
#line 426 "intermod.m"
    {
#line 426 "intermod.m"
      /* tailcall optimized into a loop */
#line 426 "intermod.m"
      {
#line 426 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 426 "intermod.m"
        MR_Word transform_hlds__intermod__HeadVar_7;
#line 426 "intermod.m"
        MR_Word transform_hlds__intermod__HeadVars_8;
#line 426 "intermod.m"
        MR_Word transform_hlds__intermod__ArgMode_9;
#line 426 "intermod.m"
        MR_Word transform_hlds__intermod__ArgModes_10;

#line 426 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 426 "intermod.m"
          {
#line 426 "intermod.m"
            transform_hlds__intermod__HeadVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 426 "intermod.m"
            transform_hlds__intermod__HeadVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 426 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 426 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 426 "intermod.m"
              {
#line 426 "intermod.m"
                transform_hlds__intermod__ArgMode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 426 "intermod.m"
                transform_hlds__intermod__ArgModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 1)));
#line 428 "intermod.m"
                {
#line 428 "intermod.m"
                  MR_Word transform_hlds__intermod__Type_11;
#line 428 "intermod.m"
                  MR_Word transform_hlds__intermod__V_12_12;

#line 428 "intermod.m"
                  {
#line 428 "intermod.m"
                    transform_hlds__intermod__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__intermod__ModuleInfo_5, transform_hlds__intermod__ArgMode_9);
                  }
#line 428 "intermod.m"
                  if (transform_hlds__intermod__succeeded)
#line 428 "intermod.m"
                    {
#line 429 "intermod.m"
                      {
#line 429 "intermod.m"
                        hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__intermod__VarTypes_6, transform_hlds__intermod__HeadVar_7, &transform_hlds__intermod__Type_11);
                      }
#line 430 "intermod.m"
                      {
#line 430 "intermod.m"
                        transform_hlds__intermod__V_12_12 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__intermod__ModuleInfo_5, transform_hlds__intermod__Type_11);
                      }
#line 430 "intermod.m"
                      transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "intermod.m"
                    }
#line 428 "intermod.m"
                }
#line 431 "intermod.m"
                if (!(transform_hlds__intermod__succeeded))
#line 432 "intermod.m"
                  {
#line 432 "intermod.m"
                    /* direct tailcall eliminated */
#line 432 "intermod.m"
                    {
#line 432 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__HeadVars_8;
#line 432 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__4__tmp_copy_4 = transform_hlds__intermod__ArgModes_10;

#line 432 "intermod.m"
                      transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__4__tmp_copy_4;
#line 432 "intermod.m"
                      transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 432 "intermod.m"
                    }
#line 432 "intermod.m"
                    continue;
#line 432 "intermod.m"
                  }
#line 426 "intermod.m"
              }
#line 426 "intermod.m"
          }
#line 426 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 426 "intermod.m"
      }
#line 426 "intermod.m"
      break;
#line 426 "intermod.m"
    }
#line 422 "intermod.m"
}

#line 396 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_clauses_5_p_0(
#line 396 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 396 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 396 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 396 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 396 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 396 "intermod.m"
{
#line 399 "intermod.m"
  {
#line 399 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 399 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "intermod.m"
      {
#line 399 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 399 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 399 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 399 "intermod.m"
      }
#line 399 "intermod.m"
    else
#line 401 "intermod.m"
      {
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__Clause0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__Clauses0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__Clause_11;
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__Clauses_12;
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_15;
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_16;
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__DoWrite1_17;
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_20_20;
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_33;
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_34;
#line 401 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_35;
#line 404 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;
#line 404 "intermod.m"
        MR_Word transform_hlds__intermod__V_24_24;
#line 404 "intermod.m"
        MR_Word transform_hlds__intermod__V_25_25;
#line 404 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26;
#line 404 "intermod.m"
        MR_Word transform_hlds__intermod__V_23_23;

#line 402 "intermod.m"
        {
#line 402 "intermod.m"
          transform_hlds__intermod__Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__Clause0_9);
        }
#line 483 "intermod.m"
        transform_hlds__intermod__GoalExpr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_15, (MR_Integer) 0)));
#line 483 "intermod.m"
        transform_hlds__intermod__GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_15, (MR_Integer) 1)));
#line 484 "intermod.m"
        {
#line 484 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_33, &transform_hlds__intermod__GoalExpr_35, &transform_hlds__intermod__DoWrite1_17, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_20_20);
        }
#line 485 "intermod.m"
        {
#line 485 "intermod.m"
          transform_hlds__intermod__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_16, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_35));
#line 485 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_16, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_34));
#line 485 "intermod.m"
        }
#line 404 "intermod.m"
        transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 0)));
#line 404 "intermod.m"
        transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 1)));
#line 404 "intermod.m"
        transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 2)));
#line 404 "intermod.m"
        transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 3)));
#line 404 "intermod.m"
        transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 4)));
#line 404 "intermod.m"
        {
#line 404 "intermod.m"
          transform_hlds__intermod__Clause_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 404 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 0) = ((MR_Box) (transform_hlds__intermod__V_22_22));
#line 404 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 1) = ((MR_Box) (transform_hlds__intermod__Goal_16));
#line 404 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 2) = ((MR_Box) (transform_hlds__intermod__V_24_24));
#line 404 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 3) = ((MR_Box) (transform_hlds__intermod__V_25_25));
#line 404 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 4) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 404 "intermod.m"
        }
#line 408 "intermod.m"
#line 408 "intermod.m"
        switch (transform_hlds__intermod__DoWrite1_17) {
#line 408 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 408 "intermod.m"
          case (MR_Integer) 0:
#line 409 "intermod.m"
            {
#line 410 "intermod.m"
              transform_hlds__intermod__Clauses_12 = transform_hlds__intermod__Clauses0_10;
#line 411 "intermod.m"
              *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 0;
#line 409 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_20_20;
#line 409 "intermod.m"
            }
#line 408 "intermod.m"
            break;
#line 408 "intermod.m"
          case (MR_Integer) 1:
#line 407 "intermod.m"
            {
#line 407 "intermod.m"
              transform_hlds__intermod__intermod_traverse_clauses_5_p_0(transform_hlds__intermod__Clauses0_10, &transform_hlds__intermod__Clauses_12, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__STATE_VARIABLE_Info_20_20, transform_hlds__intermod__STATE_VARIABLE_Info_5);
            }
#line 408 "intermod.m"
            break;
#line 408 "intermod.m"
        }
#line 400 "intermod.m"
        {
#line 400 "intermod.m"
          MR_Word base;
#line 400 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "intermod.m"
          *transform_hlds__intermod__HeadVar__2_2 = base;
#line 400 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Clause_11));
#line 400 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Clauses_12));
#line 400 "intermod.m"
        }
#line 401 "intermod.m"
      }
#line 399 "intermod.m"
  }
#line 396 "intermod.m"
}

#line 385 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(
#line 385 "intermod.m"
  MR_Word transform_hlds__intermod__Target_1,
#line 385 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 385 "intermod.m"
{
#line 388 "intermod.m"
  while (MR_TRUE)
#line 388 "intermod.m"
    {
#line 388 "intermod.m"
      /* tailcall optimized into a loop */
#line 388 "intermod.m"
      {
#line 388 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 388 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15;
#line 388 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16;

#line 388 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 388 "intermod.m"
          {
#line 388 "intermod.m"
            transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 388 "intermod.m"
            transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 388 "intermod.m"
            {
#line 388 "intermod.m"
              MR_Word transform_hlds__intermod__Lang_6;
#line 388 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignLang_7;
#line 390 "intermod.m"
              MR_Word transform_hlds__intermod__V_11_11;
#line 390 "intermod.m"
              MR_Word transform_hlds__intermod__V_12_12;
#line 390 "intermod.m"
              MR_Word transform_hlds__intermod__V_13_13;
#line 390 "intermod.m"
              MR_Word transform_hlds__intermod__V_14_14;

#line 389 "intermod.m"
              transform_hlds__intermod__succeeded = (transform_hlds__intermod__Target_1 == (MR_Integer) 1);
#line 388 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 388 "intermod.m"
                {
#line 390 "intermod.m"
                  transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 0)));
#line 390 "intermod.m"
                  transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 1)));
#line 390 "intermod.m"
                  transform_hlds__intermod__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 2)));
#line 390 "intermod.m"
                  transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 3)));
#line 390 "intermod.m"
                  transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 4)));
#line 391 "intermod.m"
                  transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Lang_6)) == (MR_mktag((MR_Integer) 1)));
#line 391 "intermod.m"
                  if (transform_hlds__intermod__succeeded)
#line 391 "intermod.m"
                    {
#line 391 "intermod.m"
                      transform_hlds__intermod__ForeignLang_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Lang_6, (MR_Integer) 0)));
#line 392 "intermod.m"
                      transform_hlds__intermod__succeeded = (transform_hlds__intermod__ForeignLang_7 == (MR_Integer) 1);
#line 391 "intermod.m"
                    }
#line 388 "intermod.m"
                }
#line 388 "intermod.m"
            }
#line 388 "intermod.m"
            if (!(transform_hlds__intermod__succeeded))
#line 394 "intermod.m"
              {
#line 394 "intermod.m"
                /* direct tailcall eliminated */
#line 394 "intermod.m"
                {
#line 394 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__2__tmp_copy_2 = transform_hlds__intermod__V_15_15;

#line 394 "intermod.m"
                  transform_hlds__intermod__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2__tmp_copy_2;
#line 394 "intermod.m"
                }
#line 394 "intermod.m"
                continue;
#line 394 "intermod.m"
              }
#line 388 "intermod.m"
          }
#line 388 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 388 "intermod.m"
      }
#line 388 "intermod.m"
      break;
#line 388 "intermod.m"
    }
#line 385 "intermod.m"
}

#line 442 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_1(
#line 442 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 442 "intermod.m"
{
#line 442 "intermod.m"
  {
#line 442 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 442 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0, 1);
#line 442 "intermod.m"
  }
#line 442 "intermod.m"
}

#line 442 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_3(
#line 442 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 442 "intermod.m"
{
#line 442 "intermod.m"
  {
#line 442 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 442 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70 = ((MR_Word) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70);
#line 442 "intermod.m"
    {
#line 442 "intermod.m"
      transform_hlds__intermod__should_be_processed_8_p_0_2(transform_hlds__intermod__env_ptr);
#line 442 "intermod.m"
      return;
    }
#line 442 "intermod.m"
  }
#line 442 "intermod.m"
}

#line 442 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_2(
#line 442 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 442 "intermod.m"
{
#line 442 "intermod.m"
  {
#line 442 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 443 "intermod.m"
    {
#line 443 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61 = hlds__hlds_clauses__clause_body_1_f_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70);
    }
#line 444 "intermod.m"
    {
#line 444 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10);
    }
#line 444 "intermod.m"
    if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 444 "intermod.m"
      {
#line 444 "intermod.m"
        transform_hlds__intermod__should_be_processed_8_p_0_1(transform_hlds__intermod__env_ptr);
#line 444 "intermod.m"
        return;
      }
#line 442 "intermod.m"
  }
#line 442 "intermod.m"
}

#line 442 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_4(
#line 442 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 442 "intermod.m"
{
#line 442 "intermod.m"
  {
#line 442 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 442 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0) == 0)
#line 442 "intermod.m"
      {
#line 442 "intermod.m"
        {
#line 442 "intermod.m"
          {
#line 442 "intermod.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__should_be_processed_8_p_0_3, transform_hlds__intermod__env_ptr);
          }
#line 442 "intermod.m"
        }
#line 442 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_FALSE;
#line 442 "intermod.m"
      }
#line 442 "intermod.m"
    else
#line 442 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_TRUE;
#line 442 "intermod.m"
  }
#line 442 "intermod.m"
}

#line 297 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0(
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_9,
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_10,
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__PredInfo_11,
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__TypeSpecForcePreds_12,
#line 297 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_13,
#line 297 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_14,
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_15,
#line 297 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_16)
#line 297 "intermod.m"
{
#line 297 "intermod.m"
  {
#line 297 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s transform_hlds__intermod__env;

#line 297 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10 = transform_hlds__intermod__PredId_10;
#line 308 "intermod.m"
#line 308 "intermod.m"
    switch (transform_hlds__intermod__ProcessLocalPreds_9) {
#line 308 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 308 "intermod.m"
      case (MR_Integer) 0:
#line 306 "intermod.m"
        {
#line 305 "intermod.m"
          {
#line 305 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__intermod__PredInfo_11);
          }
#line 306 "intermod.m"
          if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 306 "intermod.m"
            {
#line 306 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(transform_hlds__intermod__PredInfo_11);
            }
#line 306 "intermod.m"
        }
#line 308 "intermod.m"
        break;
#line 308 "intermod.m"
      case (MR_Integer) 1:
#line 309 "intermod.m"
        {
#line 309 "intermod.m"
          MR_Word transform_hlds__intermod__V_49_49;

#line 310 "intermod.m"
          {
#line 310 "intermod.m"
            hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__V_49_49);
          }
#line 310 "intermod.m"
          {
#line 310 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = parse_tree__status____Unify____import_status_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__intermod__V_49_49);
          }
#line 309 "intermod.m"
        }
#line 308 "intermod.m"
        break;
#line 308 "intermod.m"
    }
#line 302 "intermod.m"
    if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 302 "intermod.m"
      {
#line 313 "intermod.m"
        {
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_47_47;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__ClauseInfo_17;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__ClausesRep_18;
#line 313 "intermod.m"
          MR_Integer transform_hlds__intermod__ProcId_21;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__Procs_23;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__ProcInfo_24;
#line 313 "intermod.m"
          MR_Integer transform_hlds__intermod__Arity_25;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__Markers_26;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__Globals_27;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__Target_28;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__V_33_33;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__V_38_38;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod__V_50_50;
#line 314 "intermod.m"
          MR_Word transform_hlds__intermod___ItemNumbers_19;
#line 317 "intermod.m"
          MR_Word transform_hlds__intermod___ProcIds_22;
#line 319 "intermod.m"
          MR_Box transform_hlds__intermod__conv0_ProcInfo_24;
#line 330 "intermod.m"
          MR_Word transform_hlds__intermod__V_34_34;
#line 331 "intermod.m"
          MR_Word transform_hlds__intermod__V_35_35;
#line 334 "intermod.m"
          MR_Word transform_hlds__intermod__V_36_36;
#line 342 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_48_48;
#line 345 "intermod.m"
          MR_Word transform_hlds__intermod__V_37_37;

#line 313 "intermod.m"
          {
#line 313 "intermod.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__ClauseInfo_17);
          }
#line 314 "intermod.m"
          {
#line 314 "intermod.m"
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClauseInfo_17, &transform_hlds__intermod__ClausesRep_18, &transform_hlds__intermod___ItemNumbers_19);
          }
#line 315 "intermod.m"
          {
#line 315 "intermod.m"
            hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep_18, &(transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20);
          }
#line 317 "intermod.m"
          {
#line 317 "intermod.m"
            transform_hlds__intermod__V_33_33 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__intermod__PredInfo_11);
          }
#line 317 "intermod.m"
          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 317 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 317 "intermod.m"
            {
#line 317 "intermod.m"
              transform_hlds__intermod__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, (MR_Integer) 0)));
#line 317 "intermod.m"
              transform_hlds__intermod___ProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, (MR_Integer) 1)));
#line 318 "intermod.m"
              {
#line 318 "intermod.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__Procs_23);
              }
#line 18745 "transform_hlds.intermod.c"
              transform_hlds__intermod__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 319 "intermod.m"
              {
#line 319 "intermod.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__intermod__TypeCtorInfo_47_47, transform_hlds__intermod__Procs_23, transform_hlds__intermod__ProcId_21, &transform_hlds__intermod__conv0_ProcInfo_24);
              }
#line 319 "intermod.m"
              transform_hlds__intermod__ProcInfo_24 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_24);
#line 324 "intermod.m"
              {
#line 324 "intermod.m"
                transform_hlds__intermod__Arity_25 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_11);
              }
#line 329 "intermod.m"
              {
#line 329 "intermod.m"
                hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__Markers_26);
              }
#line 330 "intermod.m"
              transform_hlds__intermod__V_34_34 = (MR_Integer) 9;
#line 330 "intermod.m"
              {
#line 330 "intermod.m"
                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_34_34);
              }
#line 330 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 313 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 313 "intermod.m"
                {
#line 331 "intermod.m"
                  transform_hlds__intermod__V_35_35 = (MR_Integer) 10;
#line 331 "intermod.m"
                  {
#line 331 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_35_35);
                  }
#line 331 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 313 "intermod.m"
                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 313 "intermod.m"
                    {
#line 334 "intermod.m"
                      transform_hlds__intermod__V_36_36 = (MR_Integer) 0;
#line 334 "intermod.m"
                      {
#line 334 "intermod.m"
                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_36_36);
                      }
#line 334 "intermod.m"
                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 313 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 313 "intermod.m"
                        {
#line 338 "intermod.m"
                          {
#line 338 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__intermod__PredInfo_11);
                          }
#line 338 "intermod.m"
                          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 313 "intermod.m"
                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 313 "intermod.m"
                            {
#line 339 "intermod.m"
                              {
#line 339 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__intermod__PredInfo_11);
                              }
#line 339 "intermod.m"
                              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 313 "intermod.m"
                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 313 "intermod.m"
                                {
#line 18825 "transform_hlds.intermod.c"
                                  transform_hlds__intermod__TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 342 "intermod.m"
                                  {
#line 342 "intermod.m"
                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(transform_hlds__intermod__TypeCtorInfo_48_48, ((MR_Box) ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10)), transform_hlds__intermod__TypeSpecForcePreds_12);
                                  }
#line 342 "intermod.m"
                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 313 "intermod.m"
                                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 313 "intermod.m"
                                    {
#line 345 "intermod.m"
                                      transform_hlds__intermod__V_37_37 = (MR_Integer) 7;
#line 345 "intermod.m"
                                      {
#line 345 "intermod.m"
                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_37_37);
                                      }
#line 345 "intermod.m"
                                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 313 "intermod.m"
                                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 313 "intermod.m"
                                        {
#line 348 "intermod.m"
                                          {
#line 348 "intermod.m"
                                            hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_16, &transform_hlds__intermod__Globals_27);
                                          }
#line 349 "intermod.m"
                                          {
#line 349 "intermod.m"
                                            libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_27, &transform_hlds__intermod__Target_28);
                                          }
#line 350 "intermod.m"
                                          {
#line 350 "intermod.m"
                                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(transform_hlds__intermod__Target_28, (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20);
                                          }
#line 350 "intermod.m"
                                          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 313 "intermod.m"
                                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 313 "intermod.m"
                                            {
#line 353 "intermod.m"
                                              transform_hlds__intermod__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 353 "intermod.m"
                                              {
#line 353 "intermod.m"
                                                hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__V_50_50);
                                              }
#line 353 "intermod.m"
                                              {
#line 353 "intermod.m"
                                                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(transform_hlds__intermod__V_38_38, transform_hlds__intermod__V_50_50);
                                              }
#line 313 "intermod.m"
                                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 313 "intermod.m"
                                                {
#line 356 "intermod.m"
                                                  {
#line 356 "intermod.m"
                                                    MR_Integer transform_hlds__intermod__V_45_45 = (transform_hlds__intermod__InlineThreshold_13 + transform_hlds__intermod__Arity_25);

#line 356 "intermod.m"
                                                    {
#line 356 "intermod.m"
                                                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__V_45_45);
                                                    }
#line 356 "intermod.m"
                                                  }
#line 357 "intermod.m"
                                                  if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 357 "intermod.m"
                                                    {
#line 358 "intermod.m"
                                                      {
#line 358 "intermod.m"
                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(transform_hlds__intermod__PredInfo_11);
                                                      }
#line 357 "intermod.m"
                                                      if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 357 "intermod.m"
                                                        {
#line 362 "intermod.m"
                                                          {
#line 362 "intermod.m"
                                                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, (MR_Integer) 22);
                                                          }
#line 357 "intermod.m"
                                                          if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 357 "intermod.m"
                                                            {
#line 364 "intermod.m"
                                                              {
#line 364 "intermod.m"
                                                                MR_Integer transform_hlds__intermod__GoalSize_29;
#line 364 "intermod.m"
                                                                MR_Integer transform_hlds__intermod__V_43_43;
#line 364 "intermod.m"
                                                                MR_Word transform_hlds__intermod__HeadVars_55;
#line 364 "intermod.m"
                                                                MR_Word transform_hlds__intermod__ArgModes_56;
#line 364 "intermod.m"
                                                                MR_Word transform_hlds__intermod__VarTypes_57;

#line 417 "intermod.m"
                                                                {
#line 417 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__HeadVars_55);
                                                                }
#line 418 "intermod.m"
                                                                {
#line 418 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__ArgModes_56);
                                                                }
#line 419 "intermod.m"
                                                                {
#line 419 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__VarTypes_57);
                                                                }
#line 420 "intermod.m"
                                                                {
#line 420 "intermod.m"
                                                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__check_for_ho_input_args_4_p_0(transform_hlds__intermod__ModuleInfo_16, transform_hlds__intermod__VarTypes_57, transform_hlds__intermod__HeadVars_55, transform_hlds__intermod__ArgModes_56);
                                                                }
#line 364 "intermod.m"
                                                                if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 364 "intermod.m"
                                                                  {
#line 365 "intermod.m"
                                                                    {
#line 365 "intermod.m"
                                                                      hlds__goal_util__clause_list_size_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, &transform_hlds__intermod__GoalSize_29);
                                                                    }
#line 366 "intermod.m"
                                                                    transform_hlds__intermod__V_43_43 = (transform_hlds__intermod__HigherOrderSizeLimit_14 + transform_hlds__intermod__Arity_25);
#line 366 "intermod.m"
                                                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = (transform_hlds__intermod__GoalSize_29 <= transform_hlds__intermod__V_43_43);
#line 364 "intermod.m"
                                                                  }
#line 364 "intermod.m"
                                                              }
#line 357 "intermod.m"
                                                              if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 368 "intermod.m"
                                                                {
#line 368 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__DeforestThreshold_30;
#line 368 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_39_39;
#line 368 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_40_40;
#line 368 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_41_41;
#line 368 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_42_42;
#line 368 "intermod.m"
                                                                  MR_Word transform_hlds__intermod__V_72_72;
#line 368 "intermod.m"
                                                                  MR_Word transform_hlds__intermod__V_73_73;

#line 368 "intermod.m"
                                                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = (transform_hlds__intermod__Deforestation_15 == (MR_Integer) 1);
#line 368 "intermod.m"
                                                                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 368 "intermod.m"
                                                                    {
#line 373 "intermod.m"
                                                                      transform_hlds__intermod__V_40_40 = (MR_Integer) 2;
#line 373 "intermod.m"
                                                                      transform_hlds__intermod__V_39_39 = (transform_hlds__intermod__InlineThreshold_13 * transform_hlds__intermod__V_40_40);
#line 373 "intermod.m"
                                                                      transform_hlds__intermod__V_41_41 = (MR_Integer) 1;
#line 373 "intermod.m"
                                                                      transform_hlds__intermod__DeforestThreshold_30 = (transform_hlds__intermod__V_39_39 + transform_hlds__intermod__V_41_41);
#line 374 "intermod.m"
                                                                      transform_hlds__intermod__V_42_42 = (transform_hlds__intermod__DeforestThreshold_30 + transform_hlds__intermod__Arity_25);
#line 374 "intermod.m"
                                                                      {
#line 374 "intermod.m"
                                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__V_42_42);
                                                                      }
#line 368 "intermod.m"
                                                                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 368 "intermod.m"
                                                                        {
#line 442 "intermod.m"
                                                                          {
#line 442 "intermod.m"
                                                                            transform_hlds__intermod__should_be_processed_8_p_0_4(&transform_hlds__intermod__env);
                                                                          }
#line 368 "intermod.m"
                                                                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 368 "intermod.m"
                                                                            {
#line 447 "intermod.m"
                                                                              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20)) == (MR_mktag((MR_Integer) 1)));
#line 447 "intermod.m"
                                                                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 447 "intermod.m"
                                                                                {
#line 447 "intermod.m"
                                                                                  transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, (MR_Integer) 0)));
#line 447 "intermod.m"
                                                                                  transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, (MR_Integer) 1)));
#line 448 "intermod.m"
                                                                                  if ((transform_hlds__intermod__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 449 "intermod.m"
                                                                                    {
#line 449 "intermod.m"
                                                                                      MR_Word transform_hlds__intermod__Goal2_66;
#line 449 "intermod.m"
                                                                                      MR_Word transform_hlds__intermod__GoalList_67;

#line 450 "intermod.m"
                                                                                      {
#line 450 "intermod.m"
                                                                                        transform_hlds__intermod__Goal2_66 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__V_73_73);
                                                                                      }
#line 451 "intermod.m"
                                                                                      {
#line 451 "intermod.m"
                                                                                        hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__intermod__Goal2_66, &transform_hlds__intermod__GoalList_67);
                                                                                      }
#line 458 "intermod.m"
                                                                                      {
#line 458 "intermod.m"
                                                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(transform_hlds__intermod__GoalList_67, (MR_Integer) 0);
                                                                                      }
#line 449 "intermod.m"
                                                                                    }
#line 448 "intermod.m"
                                                                                  else
#line 447 "intermod.m"
                                                                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_TRUE;
#line 447 "intermod.m"
                                                                                }
#line 368 "intermod.m"
                                                                            }
#line 368 "intermod.m"
                                                                        }
#line 368 "intermod.m"
                                                                    }
#line 368 "intermod.m"
                                                                }
#line 357 "intermod.m"
                                                            }
#line 357 "intermod.m"
                                                        }
#line 357 "intermod.m"
                                                    }
#line 313 "intermod.m"
                                                }
#line 313 "intermod.m"
                                            }
#line 313 "intermod.m"
                                        }
#line 313 "intermod.m"
                                    }
#line 313 "intermod.m"
                                }
#line 313 "intermod.m"
                            }
#line 313 "intermod.m"
                        }
#line 313 "intermod.m"
                    }
#line 313 "intermod.m"
                }
#line 317 "intermod.m"
            }
#line 313 "intermod.m"
        }
#line 377 "intermod.m"
        if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 379 "intermod.m"
          {
#line 379 "intermod.m"
            MR_Word transform_hlds__intermod__V_31_31;

#line 379 "intermod.m"
            {
#line 379 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__V_31_31);
            }
#line 379 "intermod.m"
          }
#line 302 "intermod.m"
      }
#line 302 "intermod.m"
    return (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded;
#line 297 "intermod.m"
  }
#line 297 "intermod.m"
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
#line 2600 "intermod.m"
  {
#line 2600 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2600 "intermod.m"
    {
#line 2600 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0(transform_hlds__intermod__FileType_11, transform_hlds__intermod__FileName_12, transform_hlds__intermod__ModuleSpecs_13, transform_hlds__intermod__STATE_VARIABLE_Specs_0_22, transform_hlds__intermod__STATE_VARIABLE_Specs_23, transform_hlds__intermod__ModuleErrors_15, transform_hlds__intermod__STATE_VARIABLE_Error_0_24, transform_hlds__intermod__STATE_VARIABLE_Error_25);
#line 2600 "intermod.m"
      return;
    }
#line 2600 "intermod.m"
  }
#line 91 "intermod.m"
}

#line 812 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_pred_import_status_2_p_0_1(
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 812 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 812 "intermod.m"
{
#line 812 "intermod.m"
  {
#line 812 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 812 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11;

#line 812 "intermod.m"
    {
#line 812 "intermod.m"
      transform_hlds__intermod__gather_instances_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11);
    }
#line 812 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11));
#line 812 "intermod.m"
  }
#line 812 "intermod.m"
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
#line 2184 "intermod.m"
  {
#line 2184 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_14_41;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_4;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__VeryVerbose_5;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__PredIds_7;
#line 2184 "intermod.m"
    MR_Integer transform_hlds__intermod__Threshold_8;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__Deforestation_9;
#line 2184 "intermod.m"
    MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_10;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_21_21;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_23_23;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_24_24;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_25_25;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__Modules_32;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__Procs_33;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__ProcDecls_34;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__VarTypes_35;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_36;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__ExtraExportedPreds0_52;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_18_53;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_59;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_60;
#line 2184 "intermod.m"
    MR_Word transform_hlds__intermod__V_61_61;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_71_71;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_72_72;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_74_74;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77;
#line 2161 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78;
#line 812 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_24_24;

#line 2185 "intermod.m"
    {
#line 2185 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__intermod__Globals_4);
    }
#line 2186 "intermod.m"
    {
#line 2186 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 46, &transform_hlds__intermod__VeryVerbose_5);
    }
#line 2188 "intermod.m"
    {
#line 2188 "intermod.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_5, (MR_String) "% Adjusting import status of predicates in the \140.opt\' file...");
    }
#line 2193 "intermod.m"
    {
#line 2193 "intermod.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__intermod__PredIds_7);
    }
#line 2194 "intermod.m"
    {
#line 2194 "intermod.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 346, &transform_hlds__intermod__Threshold_8);
    }
#line 2196 "intermod.m"
    {
#line 2196 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 391, &transform_hlds__intermod__Deforestation_9);
    }
#line 2197 "intermod.m"
    {
#line 2197 "intermod.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 356, &transform_hlds__intermod__HigherOrderSizeLimit_10);
    }
#line 2108 "intermod.m"
    {
#line 2108 "intermod.m"
      mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &transform_hlds__intermod__Modules_32);
    }
#line 19314 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_14_41 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2109 "intermod.m"
    {
#line 2109 "intermod.m"
      mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_41, &transform_hlds__intermod__Procs_33);
    }
#line 2110 "intermod.m"
    {
#line 2110 "intermod.m"
      mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_41, &transform_hlds__intermod__ProcDecls_34);
    }
#line 2111 "intermod.m"
    {
#line 2111 "intermod.m"
      hlds__vartypes__init_vartypes_1_p_0(&transform_hlds__intermod__VarTypes_35);
    }
#line 2112 "intermod.m"
    {
#line 2112 "intermod.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__intermod__TVarSet_36);
    }
#line 2115 "intermod.m"
    {
#line 2115 "intermod.m"
      transform_hlds__intermod__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2115 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (transform_hlds__intermod__Modules_32));
#line 2115 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (transform_hlds__intermod__Procs_33));
#line 2115 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (transform_hlds__intermod__ProcDecls_34));
#line 2115 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2115 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2115 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12));
#line 2115 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) ((MR_Integer) 0));
#line 2115 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_35));
#line 2115 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_36));
#line 2115 "intermod.m"
    }
#line 203 "intermod.m"
    {
#line 203 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__PredIds_7, (MR_Integer) 0, transform_hlds__intermod__Threshold_8, transform_hlds__intermod__HigherOrderSizeLimit_10, transform_hlds__intermod__Deforestation_9, transform_hlds__intermod__STATE_VARIABLE_Info_21_21, &transform_hlds__intermod__STATE_VARIABLE_Info_18_53);
    }
#line 207 "intermod.m"
    {
#line 207 "intermod.m"
      mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__intermod__ExtraExportedPreds0_52);
    }
#line 208 "intermod.m"
    {
#line 208 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(transform_hlds__intermod__ExtraExportedPreds0_52, transform_hlds__intermod__Threshold_8, transform_hlds__intermod__HigherOrderSizeLimit_10, transform_hlds__intermod__Deforestation_9, transform_hlds__intermod__STATE_VARIABLE_Info_18_53, &transform_hlds__intermod__STATE_VARIABLE_Info_23_23);
    }
#line 2161 "intermod.m"
    transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 0)));
#line 2161 "intermod.m"
    transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 1)));
#line 2161 "intermod.m"
    transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 2)));
#line 2161 "intermod.m"
    transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 3)));
#line 2161 "intermod.m"
    transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 4)));
#line 2161 "intermod.m"
    transform_hlds__intermod__ModuleInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 5)));
#line 2161 "intermod.m"
    transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 6)));
#line 2161 "intermod.m"
    transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 7)));
#line 2161 "intermod.m"
    transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 8)));
#line 811 "intermod.m"
    {
#line 811 "intermod.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__ModuleInfo_59, &transform_hlds__intermod__Instances_60);
    }
#line 812 "intermod.m"
    {
#line 812 "intermod.m"
      transform_hlds__intermod__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 812 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_61_61, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0]));
#line 812 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_61_61, 1) = ((MR_Box) (transform_hlds__intermod__adjust_pred_import_status_2_p_0_1));
#line 812 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 812 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_61_61, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_59));
#line 812 "intermod.m"
    }
#line 812 "intermod.m"
    {
#line 812 "intermod.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[8], (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_61_61, transform_hlds__intermod__Instances_60, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_23_23)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_24_24);
    }
#line 812 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_Info_24_24 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_24_24);
#line 2204 "intermod.m"
    {
#line 2204 "intermod.m"
      transform_hlds__intermod__gather_types_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_24_24, &transform_hlds__intermod__STATE_VARIABLE_Info_25_25);
    }
#line 2205 "intermod.m"
    {
#line 2205 "intermod.m"
      transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_25_25, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_13);
    }
#line 2208 "intermod.m"
    {
#line 2208 "intermod.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_5, (MR_String) " done\n");
#line 2208 "intermod.m"
      return;
    }
#line 2184 "intermod.m"
  }
#line 72 "intermod.m"
}

#line 2477 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_10(
#line 2477 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2477 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2477 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2477 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 2477 "intermod.m"
{
#line 2477 "intermod.m"
  {
#line 2477 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2477 "intermod.m"
    MR_Word transform_hlds__intermod__conv9_HeadVar__3_3;

#line 2477 "intermod.m"
    {
#line 2477 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv9_HeadVar__3_3);
    }
#line 2477 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv9_HeadVar__3_3));
#line 2477 "intermod.m"
  }
#line 2477 "intermod.m"
}

#line 2476 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_9(
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2476 "intermod.m"
{
#line 2476 "intermod.m"
  {
#line 2476 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2476 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2476 "intermod.m"
    MR_Word transform_hlds__intermod__conv8_HeadVar__3_3;

#line 2476 "intermod.m"
    {
#line 2476 "intermod.m"
      transform_hlds__intermod__conv8_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2476 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv8_HeadVar__3_3));
#line 2476 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2476 "intermod.m"
  }
#line 2476 "intermod.m"
}

#line 2476 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_8(
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2476 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2476 "intermod.m"
{
#line 2476 "intermod.m"
  {
#line 2476 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2476 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2476 "intermod.m"
    MR_Word transform_hlds__intermod__conv7_HeadVar__3_3;

#line 2476 "intermod.m"
    {
#line 2476 "intermod.m"
      transform_hlds__intermod__conv7_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2476 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv7_HeadVar__3_3));
#line 2476 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2476 "intermod.m"
  }
#line 2476 "intermod.m"
}

#line 2471 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_7(
#line 2471 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2471 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2471 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2471 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 2471 "intermod.m"
{
#line 2471 "intermod.m"
  {
#line 2471 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2471 "intermod.m"
    MR_Word transform_hlds__intermod__conv6_HeadVar__3_3;

#line 2471 "intermod.m"
    {
#line 2471 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv6_HeadVar__3_3);
    }
#line 2471 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv6_HeadVar__3_3));
#line 2471 "intermod.m"
  }
#line 2471 "intermod.m"
}

#line 2470 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_6(
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2470 "intermod.m"
{
#line 2470 "intermod.m"
  {
#line 2470 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2470 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2470 "intermod.m"
    MR_Word transform_hlds__intermod__conv5_HeadVar__3_3;

#line 2470 "intermod.m"
    {
#line 2470 "intermod.m"
      transform_hlds__intermod__conv5_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2470 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv5_HeadVar__3_3));
#line 2470 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2470 "intermod.m"
  }
#line 2470 "intermod.m"
}

#line 2470 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_5(
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2470 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2470 "intermod.m"
{
#line 2470 "intermod.m"
  {
#line 2470 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2470 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2470 "intermod.m"
    MR_Word transform_hlds__intermod__conv4_HeadVar__3_3;

#line 2470 "intermod.m"
    {
#line 2470 "intermod.m"
      transform_hlds__intermod__conv4_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2470 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv4_HeadVar__3_3));
#line 2470 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2470 "intermod.m"
  }
#line 2470 "intermod.m"
}

#line 2453 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_4(
#line 2453 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2453 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2453 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2453 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 2453 "intermod.m"
{
#line 2453 "intermod.m"
  {
#line 2453 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2453 "intermod.m"
    MR_Word transform_hlds__intermod__conv3_HeadVar__3_3;

#line 2453 "intermod.m"
    {
#line 2453 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv3_HeadVar__3_3);
    }
#line 2453 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv3_HeadVar__3_3));
#line 2453 "intermod.m"
  }
#line 2453 "intermod.m"
}

#line 2452 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_3(
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2452 "intermod.m"
{
#line 2452 "intermod.m"
  {
#line 2452 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2452 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2452 "intermod.m"
    MR_Word transform_hlds__intermod__conv2_HeadVar__3_3;

#line 2452 "intermod.m"
    {
#line 2452 "intermod.m"
      transform_hlds__intermod__conv2_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2452 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv2_HeadVar__3_3));
#line 2452 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2452 "intermod.m"
  }
#line 2452 "intermod.m"
}

#line 2452 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_2(
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2452 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2452 "intermod.m"
{
#line 2452 "intermod.m"
  {
#line 2452 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2452 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2452 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__3_3;

#line 2452 "intermod.m"
    {
#line 2452 "intermod.m"
      transform_hlds__intermod__conv1_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2452 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__3_3));
#line 2452 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2452 "intermod.m"
  }
#line 2452 "intermod.m"
}

#line 2449 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_1(
#line 2449 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2449 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 2449 "intermod.m"
{
#line 2449 "intermod.m"
  {
#line 2449 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 2449 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2449 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_2;

#line 2449 "intermod.m"
    {
#line 2449 "intermod.m"
      transform_hlds__intermod__conv0_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 2449 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_2));
#line 2449 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 2449 "intermod.m"
  }
#line 2449 "intermod.m"
}

#line 65 "intermod.m"
void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0(
#line 65 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_7,
#line 65 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42,
#line 65 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_43,
#line 65 "intermod.m"
  MR_Word * transform_hlds__intermod__FoundError_9)
#line 65 "intermod.m"
{
#line 2392 "intermod.m"
  {
#line 2392 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_209_209 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_210_210;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_230_230;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_231_231;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 2)));
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__Ancestors0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 4)));
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__IntDeps0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 5)));
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__ImpDeps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 6)));
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptFiles_15;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__Transitive_16;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__ModulesProcessed_17;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptItemBlocksCord_18;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptSpecs_19;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptError_20;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptItemBlocks_21;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__UnusedArgs_22;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__StructureReuse_23;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__UA_SR_Error_26;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__HaveReadModuleMaps_29;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__OptFileAncestors_30;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__Int0Files_31;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__AncestorImports1_32;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__AncestorImports2_33;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewImportDeps0_34;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewUseDeps0_35;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplicitImportDeps0_36;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplicitUseDeps0_37;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewDeps_38;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewIndirectDeps_39;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplIndirectDeps_40;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleErrors_41;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_46_46;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_47_47;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_48_48;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_51_51;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_52_52;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_56_56;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_57_57;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_69_69;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_70_70;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_71_71;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_72_72;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_79_79;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_80_80;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_82_82;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_83_83;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_84_84;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_85_85;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_86_86;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_87_87;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_94_94;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_95_95;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_96_96;
#line 2392 "intermod.m"
    MR_Word transform_hlds__intermod__V_98_98;
#line 2394 "intermod.m"
    MR_String transform_hlds__intermod__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 0)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 1)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 3)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 7)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 8)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 9)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 10)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 11)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 12)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 13)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 14)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 15)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 16)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 17)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 18)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 19)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 20)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 21)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 22)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 23)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 24)));
#line 2394 "intermod.m"
    MR_Word transform_hlds__intermod__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 25)));
#line 2394 "intermod.m"
    MR_String transform_hlds__intermod__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 26)));

#line 2398 "intermod.m"
    {
#line 2398 "intermod.m"
      transform_hlds__intermod__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2398 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (transform_hlds__intermod__ImpDeps0_14));
#line 2398 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2398 "intermod.m"
    }
#line 2398 "intermod.m"
    {
#line 2398 "intermod.m"
      transform_hlds__intermod__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2398 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_47_47, 0) = ((MR_Box) (transform_hlds__intermod__IntDeps0_13));
#line 2398 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_47_47, 1) = ((MR_Box) (transform_hlds__intermod__V_48_48));
#line 2398 "intermod.m"
    }
#line 2398 "intermod.m"
    {
#line 2398 "intermod.m"
      transform_hlds__intermod__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2398 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_46_46, 0) = ((MR_Box) (transform_hlds__intermod__Ancestors0_12));
#line 2398 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_46_46, 1) = ((MR_Box) (transform_hlds__intermod__V_47_47));
#line 2398 "intermod.m"
    }
#line 2398 "intermod.m"
    {
#line 2398 "intermod.m"
      transform_hlds__intermod__OptFiles_15 = mercury__set__union_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_209_209, transform_hlds__intermod__V_46_46);
    }
#line 2399 "intermod.m"
    {
#line 2399 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 330, &transform_hlds__intermod__Transitive_16);
    }
#line 2401 "intermod.m"
    {
#line 2401 "intermod.m"
      mercury__set__insert_3_p_0(transform_hlds__intermod__TypeCtorInfo_209_209, ((MR_Box) (transform_hlds__intermod__ModuleName_11)), transform_hlds__intermod__OptFiles_15, &transform_hlds__intermod__ModulesProcessed_17);
    }
#line 2403 "intermod.m"
    {
#line 2403 "intermod.m"
      transform_hlds__intermod__V_51_51 = mercury__set__to_sorted_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_209_209, transform_hlds__intermod__OptFiles_15);
    }
#line 19999 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_210_210 = (MR_Word) &transform_hlds__intermod_scalar_common_1[0];
#line 2404 "intermod.m"
    {
#line 2404 "intermod.m"
      transform_hlds__intermod__V_52_52 = mercury__cord__empty_0_f_0(transform_hlds__intermod__TypeInfo_210_210);
    }
#line 2402 "intermod.m"
    {
#line 2402 "intermod.m"
      transform_hlds__intermod__read_optimization_interfaces_12_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__Transitive_16, transform_hlds__intermod__V_51_51, transform_hlds__intermod__ModulesProcessed_17, transform_hlds__intermod__V_52_52, &transform_hlds__intermod__OptItemBlocksCord_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__OptSpecs_19, (MR_Integer) 0, &transform_hlds__intermod__OptError_20);
    }
#line 2405 "intermod.m"
    {
#line 2405 "intermod.m"
      transform_hlds__intermod__OptItemBlocks_21 = mercury__cord__list_1_f_0(transform_hlds__intermod__TypeInfo_210_210, transform_hlds__intermod__OptItemBlocksCord_18);
    }
#line 2412 "intermod.m"
    {
#line 2412 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(transform_hlds__intermod__OptItemBlocks_21, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_42, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_56_56);
    }
#line 2413 "intermod.m"
    {
#line 2413 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(transform_hlds__intermod__OptSpecs_19, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_56_56, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_57_57);
    }
#line 2426 "intermod.m"
    {
#line 2426 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 354, &transform_hlds__intermod__UnusedArgs_22);
    }
#line 2427 "intermod.m"
    {
#line 2427 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 411, &transform_hlds__intermod__StructureReuse_23);
    }
#line 2430 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__UnusedArgs_22 == (MR_Integer) 1);
#line 2431 "intermod.m"
    if (!(transform_hlds__intermod__succeeded))
#line 2431 "intermod.m"
      transform_hlds__intermod__succeeded = (transform_hlds__intermod__StructureReuse_23 == (MR_Integer) 1);
#line 2443 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2436 "intermod.m"
      {
#line 2436 "intermod.m"
        MR_Word transform_hlds__intermod__LocalItemBlocksCord_24;
#line 2436 "intermod.m"
        MR_Word transform_hlds__intermod__LocalSpecs_25;
#line 2436 "intermod.m"
        MR_Word transform_hlds__intermod__LocalItemBlocks_27;
#line 2436 "intermod.m"
        MR_Word transform_hlds__intermod__FilteredItemBlocks_28;
#line 2436 "intermod.m"
        MR_Word transform_hlds__intermod__V_61_61;
#line 2436 "intermod.m"
        MR_Word transform_hlds__intermod__V_62_62;
#line 2436 "intermod.m"
        MR_Word transform_hlds__intermod__V_63_63;
#line 2436 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_68_68;

#line 2434 "intermod.m"
        {
#line 2434 "intermod.m"
          transform_hlds__intermod__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2434 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_61_61, 0) = ((MR_Box) (transform_hlds__intermod__ModuleName_11));
#line 2434 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2434 "intermod.m"
        }
#line 2434 "intermod.m"
        {
#line 2434 "intermod.m"
          transform_hlds__intermod__V_62_62 = mercury__set__init_0_f_0(transform_hlds__intermod__TypeCtorInfo_209_209);
        }
#line 2435 "intermod.m"
        {
#line 2435 "intermod.m"
          transform_hlds__intermod__V_63_63 = mercury__cord__empty_0_f_0(transform_hlds__intermod__TypeInfo_210_210);
        }
#line 2434 "intermod.m"
        {
#line 2434 "intermod.m"
          transform_hlds__intermod__read_optimization_interfaces_12_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 0, transform_hlds__intermod__V_61_61, transform_hlds__intermod__V_62_62, transform_hlds__intermod__V_63_63, &transform_hlds__intermod__LocalItemBlocksCord_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__LocalSpecs_25, (MR_Integer) 0, &transform_hlds__intermod__UA_SR_Error_26);
        }
#line 2437 "intermod.m"
        {
#line 2437 "intermod.m"
          transform_hlds__intermod__LocalItemBlocks_27 = mercury__cord__list_1_f_0(transform_hlds__intermod__TypeInfo_210_210, transform_hlds__intermod__LocalItemBlocksCord_24);
        }
#line 2438 "intermod.m"
        {
#line 2438 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(transform_hlds__intermod__UnusedArgs_22, transform_hlds__intermod__StructureReuse_23, transform_hlds__intermod__LocalItemBlocks_27, &transform_hlds__intermod__FilteredItemBlocks_28);
        }
#line 2440 "intermod.m"
        {
#line 2440 "intermod.m"
          parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(transform_hlds__intermod__FilteredItemBlocks_28, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_57_57, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_68_68);
        }
#line 2442 "intermod.m"
        {
#line 2442 "intermod.m"
          parse_tree__module_imports__module_and_imports_add_specs_3_p_0(transform_hlds__intermod__LocalSpecs_25, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_68_68, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_69_69);
        }
#line 2436 "intermod.m"
      }
#line 2443 "intermod.m"
    else
#line 2444 "intermod.m"
      {
#line 2444 "intermod.m"
        transform_hlds__intermod__UA_SR_Error_26 = (MR_Integer) 0;
#line 2444 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_69_69 = transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_57_57;
#line 2444 "intermod.m"
      }
#line 2448 "intermod.m"
    {
#line 2448 "intermod.m"
      transform_hlds__intermod__V_70_70 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__intermod_scalar_common_1[1], (MR_Word) &transform_hlds__intermod_scalar_common_1[2]);
    }
#line 2448 "intermod.m"
    {
#line 2448 "intermod.m"
      transform_hlds__intermod__V_71_71 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__intermod_scalar_common_1[3], (MR_Word) &transform_hlds__intermod_scalar_common_1[4]);
    }
#line 2448 "intermod.m"
    {
#line 2448 "intermod.m"
      transform_hlds__intermod__V_72_72 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__intermod_scalar_common_1[5], (MR_Word) &transform_hlds__intermod_scalar_common_1[6]);
    }
#line 2448 "intermod.m"
    {
#line 2448 "intermod.m"
      transform_hlds__intermod__HaveReadModuleMaps_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2448 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HaveReadModuleMaps_29, 0) = ((MR_Box) (transform_hlds__intermod__V_70_70));
#line 2448 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HaveReadModuleMaps_29, 1) = ((MR_Box) (transform_hlds__intermod__V_71_71));
#line 2448 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HaveReadModuleMaps_29, 2) = ((MR_Box) (transform_hlds__intermod__V_72_72));
#line 2448 "intermod.m"
    }
#line 2449 "intermod.m"
    {
#line 2449 "intermod.m"
      transform_hlds__intermod__V_73_73 = mercury__set__map_2_f_0(transform_hlds__intermod__TypeCtorInfo_209_209, (MR_Word) &transform_hlds__intermod_scalar_common_1[7], (MR_Word) &transform_hlds__intermod_scalar_common_2[8], transform_hlds__intermod__OptFiles_15);
    }
#line 2449 "intermod.m"
    {
#line 2449 "intermod.m"
      transform_hlds__intermod__OptFileAncestors_30 = mercury__set__power_union_1_f_0(transform_hlds__intermod__TypeCtorInfo_209_209, transform_hlds__intermod__V_73_73);
    }
#line 2450 "intermod.m"
    {
#line 2450 "intermod.m"
      transform_hlds__intermod__Int0Files_31 = mercury__set__delete_2_f_0(transform_hlds__intermod__TypeCtorInfo_209_209, transform_hlds__intermod__OptFileAncestors_30, ((MR_Box) (transform_hlds__intermod__ModuleName_11)));
    }
#line 2454 "intermod.m"
    {
#line 2454 "intermod.m"
      transform_hlds__intermod__V_78_78 = mercury__set__init_0_f_0(transform_hlds__intermod__TypeCtorInfo_209_209);
    }
#line 2454 "intermod.m"
    {
#line 2454 "intermod.m"
      transform_hlds__intermod__V_79_79 = mercury__set__init_0_f_0(transform_hlds__intermod__TypeCtorInfo_209_209);
    }
#line 20172 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_230_230 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_for_opt_module_section_0;
#line 2451 "intermod.m"
    {
#line 2451 "intermod.m"
      parse_tree__modules__process_module_private_interfaces_14_p_0(transform_hlds__intermod__TypeCtorInfo_230_230, transform_hlds__intermod__Globals_7, transform_hlds__intermod__HaveReadModuleMaps_29, transform_hlds__intermod__Int0Files_31, (MR_Word) &transform_hlds__intermod_scalar_common_2[9], (MR_Word) &transform_hlds__intermod_scalar_common_2[10], (MR_Word) &transform_hlds__intermod_scalar_common_2[11], transform_hlds__intermod__V_78_78, &transform_hlds__intermod__AncestorImports1_32, transform_hlds__intermod__V_79_79, &transform_hlds__intermod__AncestorImports2_33, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_69_69, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_80_80);
    }
#line 20179 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_231_231 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_opt_module_section_0;
#line 2458 "intermod.m"
    {
#line 2458 "intermod.m"
      parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(transform_hlds__intermod__TypeCtorInfo_231_231, transform_hlds__intermod__OptItemBlocks_21, &transform_hlds__intermod__NewImportDeps0_34, &transform_hlds__intermod__NewUseDeps0_35);
    }
#line 2460 "intermod.m"
    {
#line 2460 "intermod.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(transform_hlds__intermod__TypeCtorInfo_231_231, transform_hlds__intermod__Globals_7, transform_hlds__intermod__OptItemBlocks_21, &transform_hlds__intermod__NewImplicitImportDeps0_36, &transform_hlds__intermod__NewImplicitUseDeps0_37);
    }
#line 2465 "intermod.m"
    {
#line 2465 "intermod.m"
      transform_hlds__intermod__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2465 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_87_87, 0) = ((MR_Box) (transform_hlds__intermod__AncestorImports2_33));
#line 2465 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2465 "intermod.m"
    }
#line 2465 "intermod.m"
    {
#line 2465 "intermod.m"
      transform_hlds__intermod__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2465 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_86_86, 0) = ((MR_Box) (transform_hlds__intermod__AncestorImports1_32));
#line 2465 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_86_86, 1) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2465 "intermod.m"
    }
#line 2464 "intermod.m"
    {
#line 2464 "intermod.m"
      transform_hlds__intermod__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2464 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_85_85, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitUseDeps0_37));
#line 2464 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_85_85, 1) = ((MR_Box) (transform_hlds__intermod__V_86_86));
#line 2464 "intermod.m"
    }
#line 2464 "intermod.m"
    {
#line 2464 "intermod.m"
      transform_hlds__intermod__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2464 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_84_84, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitImportDeps0_36));
#line 2464 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_84_84, 1) = ((MR_Box) (transform_hlds__intermod__V_85_85));
#line 2464 "intermod.m"
    }
#line 2463 "intermod.m"
    {
#line 2463 "intermod.m"
      transform_hlds__intermod__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2463 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_83_83, 0) = ((MR_Box) (transform_hlds__intermod__NewUseDeps0_35));
#line 2463 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_83_83, 1) = ((MR_Box) (transform_hlds__intermod__V_84_84));
#line 2463 "intermod.m"
    }
#line 2463 "intermod.m"
    {
#line 2463 "intermod.m"
      transform_hlds__intermod__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2463 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_82_82, 0) = ((MR_Box) (transform_hlds__intermod__NewImportDeps0_34));
#line 2463 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_82_82, 1) = ((MR_Box) (transform_hlds__intermod__V_83_83));
#line 2463 "intermod.m"
    }
#line 2462 "intermod.m"
    {
#line 2462 "intermod.m"
      transform_hlds__intermod__NewDeps_38 = mercury__set__union_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_209_209, transform_hlds__intermod__V_82_82);
    }
#line 2472 "intermod.m"
    {
#line 2472 "intermod.m"
      transform_hlds__intermod__V_94_94 = mercury__set__init_0_f_0(transform_hlds__intermod__TypeCtorInfo_209_209);
    }
#line 2472 "intermod.m"
    {
#line 2472 "intermod.m"
      transform_hlds__intermod__V_95_95 = mercury__set__init_0_f_0(transform_hlds__intermod__TypeCtorInfo_209_209);
    }
#line 2468 "intermod.m"
    {
#line 2468 "intermod.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(transform_hlds__intermod__TypeCtorInfo_230_230, transform_hlds__intermod__Globals_7, transform_hlds__intermod__HaveReadModuleMaps_29, (MR_Integer) 0, transform_hlds__intermod__NewDeps_38, (MR_Integer) 3, (MR_Word) &transform_hlds__intermod_scalar_common_2[12], (MR_Word) &transform_hlds__intermod_scalar_common_2[13], (MR_Word) &transform_hlds__intermod_scalar_common_2[14], transform_hlds__intermod__V_94_94, &transform_hlds__intermod__NewIndirectDeps_39, transform_hlds__intermod__V_95_95, &transform_hlds__intermod__NewImplIndirectDeps_40, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_80_80, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_96_96);
    }
#line 2475 "intermod.m"
    {
#line 2475 "intermod.m"
      transform_hlds__intermod__V_98_98 = mercury__set__union_2_f_0(transform_hlds__intermod__TypeCtorInfo_209_209, transform_hlds__intermod__NewIndirectDeps_39, transform_hlds__intermod__NewImplIndirectDeps_40);
    }
#line 2474 "intermod.m"
    {
#line 2474 "intermod.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively_11_p_0(transform_hlds__intermod__TypeCtorInfo_230_230, transform_hlds__intermod__Globals_7, transform_hlds__intermod__HaveReadModuleMaps_29, transform_hlds__intermod__V_98_98, (MR_Integer) 2, (MR_Word) &transform_hlds__intermod_scalar_common_2[15], (MR_Word) &transform_hlds__intermod_scalar_common_2[16], (MR_Word) &transform_hlds__intermod_scalar_common_2[17], transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_96_96, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_43);
    }
#line 2483 "intermod.m"
    {
#line 2483 "intermod.m"
      parse_tree__module_imports__module_and_imports_get_errors_2_p_0(*transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_43, &transform_hlds__intermod__ModuleErrors_41);
    }
#line 2485 "intermod.m"
    {
#line 2485 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, transform_hlds__intermod__ModuleErrors_41);
    }
#line 2486 "intermod.m"
    if (!(transform_hlds__intermod__succeeded))
#line 2486 "intermod.m"
      {
#line 2486 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__OptError_20 == (MR_Integer) 1);
#line 2486 "intermod.m"
        if (!(transform_hlds__intermod__succeeded))
#line 2487 "intermod.m"
          transform_hlds__intermod__succeeded = (transform_hlds__intermod__UA_SR_Error_26 == (MR_Integer) 1);
#line 2486 "intermod.m"
      }
#line 2491 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2490 "intermod.m"
      *transform_hlds__intermod__FoundError_9 = (MR_Integer) 1;
#line 2491 "intermod.m"
    else
#line 2492 "intermod.m"
      *transform_hlds__intermod__FoundError_9 = (MR_Integer) 0;
#line 2392 "intermod.m"
  }
#line 65 "intermod.m"
}

#line 812 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_opt_file_4_p_0_1(
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 812 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 812 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 812 "intermod.m"
{
#line 812 "intermod.m"
  {
#line 812 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 812 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11;

#line 812 "intermod.m"
    {
#line 812 "intermod.m"
      transform_hlds__intermod__gather_instances_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11);
    }
#line 812 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11));
#line 812 "intermod.m"
  }
#line 812 "intermod.m"
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
#line 154 "intermod.m"
  {
#line 154 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 154 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_7;
#line 154 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 154 "intermod.m"
    MR_String transform_hlds__intermod__TmpName_9;
#line 154 "intermod.m"
    MR_Word transform_hlds__intermod__Result_10;

#line 155 "intermod.m"
    {
#line 155 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__Globals_7);
    }
#line 156 "intermod.m"
    {
#line 156 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__ModuleName_8);
    }
#line 157 "intermod.m"
    {
#line 157 "intermod.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__ModuleName_8, (MR_String) ".opt.tmp", (MR_Integer) 0, &transform_hlds__intermod__TmpName_9);
    }
#line 159 "intermod.m"
    {
#line 159 "intermod.m"
      mercury__io__open_output_4_p_0(transform_hlds__intermod__TmpName_9, &transform_hlds__intermod__Result_10);
    }
#line 165 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Result_10)) == (MR_mktag((MR_Integer) 1))))
#line 161 "intermod.m"
      {
#line 161 "intermod.m"
        MR_Word transform_hlds__intermod__Err_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Result_10, (MR_Integer) 0)));
#line 161 "intermod.m"
        MR_String transform_hlds__intermod__Msg_12;

#line 162 "intermod.m"
        {
#line 162 "intermod.m"
          transform_hlds__intermod__Msg_12 = mercury__io__error_message_1_f_0(transform_hlds__intermod__Err_11);
        }
#line 163 "intermod.m"
        {
#line 163 "intermod.m"
          mercury__io__write_string_3_p_0(transform_hlds__intermod__Msg_12);
        }
#line 164 "intermod.m"
        {
#line 164 "intermod.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 161 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_25 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24;
#line 161 "intermod.m"
      }
#line 165 "intermod.m"
    else
#line 166 "intermod.m"
      {
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_14_61;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__FileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Result_10, (MR_Integer) 0)));
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__OutputStream_14;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__RealPredIds_15;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__AssertionTable_16;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__AssertPredIds_17;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_18;
#line 166 "intermod.m"
        MR_Integer transform_hlds__intermod__Threshold_19;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__Deforestation_20;
#line 166 "intermod.m"
        MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_21;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_42_42;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__Modules_52;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__Procs_53;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__ProcDecls_54;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__VarTypes_55;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__TVarSet_56;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__ExtraExportedPreds0_72;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_18_73;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__ModuleInfo_79;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__Instances_80;
#line 166 "intermod.m"
        MR_Word transform_hlds__intermod__V_81_81;
#line 2161 "intermod.m"
        MR_Word transform_hlds__intermod__V_91_91;
#line 2161 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;
#line 2161 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 2161 "intermod.m"
        MR_Word transform_hlds__intermod__V_94_94;
#line 2161 "intermod.m"
        MR_Word transform_hlds__intermod__V_95_95;
#line 2161 "intermod.m"
        MR_Word transform_hlds__intermod__V_96_96;
#line 2161 "intermod.m"
        MR_Word transform_hlds__intermod__V_97_97;
#line 2161 "intermod.m"
        MR_Word transform_hlds__intermod__V_98_98;
#line 812 "intermod.m"
        MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_39_39;
#line 185 "intermod.m"
        MR_Word transform_hlds__intermod__V_23_23;

#line 167 "intermod.m"
        {
#line 167 "intermod.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__intermod__FileStream_13, &transform_hlds__intermod__OutputStream_14);
        }
#line 168 "intermod.m"
        {
#line 168 "intermod.m"
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__RealPredIds_15);
        }
#line 169 "intermod.m"
        {
#line 169 "intermod.m"
          hlds__hlds_module__module_info_get_assertion_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__AssertionTable_16);
        }
#line 170 "intermod.m"
        {
#line 170 "intermod.m"
          hlds__hlds_data__assertion_table_pred_ids_2_p_0(transform_hlds__intermod__AssertionTable_16, &transform_hlds__intermod__AssertPredIds_17);
        }
#line 171 "intermod.m"
        {
#line 171 "intermod.m"
          transform_hlds__intermod__PredIds_18 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__AssertPredIds_17, transform_hlds__intermod__RealPredIds_15);
        }
#line 172 "intermod.m"
        {
#line 172 "intermod.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 346, &transform_hlds__intermod__Threshold_19);
        }
#line 174 "intermod.m"
        {
#line 174 "intermod.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 391, &transform_hlds__intermod__Deforestation_20);
        }
#line 175 "intermod.m"
        {
#line 175 "intermod.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 356, &transform_hlds__intermod__HigherOrderSizeLimit_21);
        }
#line 2108 "intermod.m"
        {
#line 2108 "intermod.m"
          mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &transform_hlds__intermod__Modules_52);
        }
#line 20540 "transform_hlds.intermod.c"
        transform_hlds__intermod__TypeCtorInfo_14_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2109 "intermod.m"
        {
#line 2109 "intermod.m"
          mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_61, &transform_hlds__intermod__Procs_53);
        }
#line 2110 "intermod.m"
        {
#line 2110 "intermod.m"
          mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_61, &transform_hlds__intermod__ProcDecls_54);
        }
#line 2111 "intermod.m"
        {
#line 2111 "intermod.m"
          hlds__vartypes__init_vartypes_1_p_0(&transform_hlds__intermod__VarTypes_55);
        }
#line 2112 "intermod.m"
        {
#line 2112 "intermod.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__intermod__TVarSet_56);
        }
#line 2115 "intermod.m"
        {
#line 2115 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2115 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 0) = ((MR_Box) (transform_hlds__intermod__Modules_52));
#line 2115 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 1) = ((MR_Box) (transform_hlds__intermod__Procs_53));
#line 2115 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 2) = ((MR_Box) (transform_hlds__intermod__ProcDecls_54));
#line 2115 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2115 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2115 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 5) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24));
#line 2115 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 6) = ((MR_Box) ((MR_Integer) 0));
#line 2115 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_55));
#line 2115 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_56));
#line 2115 "intermod.m"
        }
#line 203 "intermod.m"
        {
#line 203 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__PredIds_18, (MR_Integer) 0, transform_hlds__intermod__Threshold_19, transform_hlds__intermod__HigherOrderSizeLimit_21, transform_hlds__intermod__Deforestation_20, transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, &transform_hlds__intermod__STATE_VARIABLE_Info_18_73);
        }
#line 207 "intermod.m"
        {
#line 207 "intermod.m"
          mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__intermod__ExtraExportedPreds0_72);
        }
#line 208 "intermod.m"
        {
#line 208 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(transform_hlds__intermod__ExtraExportedPreds0_72, transform_hlds__intermod__Threshold_19, transform_hlds__intermod__HigherOrderSizeLimit_21, transform_hlds__intermod__Deforestation_20, transform_hlds__intermod__STATE_VARIABLE_Info_18_73, &transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38);
        }
#line 2161 "intermod.m"
        transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 0)));
#line 2161 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 1)));
#line 2161 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 2)));
#line 2161 "intermod.m"
        transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 3)));
#line 2161 "intermod.m"
        transform_hlds__intermod__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 4)));
#line 2161 "intermod.m"
        transform_hlds__intermod__ModuleInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 5)));
#line 2161 "intermod.m"
        transform_hlds__intermod__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 6)));
#line 2161 "intermod.m"
        transform_hlds__intermod__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 7)));
#line 2161 "intermod.m"
        transform_hlds__intermod__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 8)));
#line 811 "intermod.m"
        {
#line 811 "intermod.m"
          hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__ModuleInfo_79, &transform_hlds__intermod__Instances_80);
        }
#line 812 "intermod.m"
        {
#line 812 "intermod.m"
          transform_hlds__intermod__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 812 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0]));
#line 812 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_4_p_0_1));
#line 812 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 812 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_79));
#line 812 "intermod.m"
        }
#line 812 "intermod.m"
        {
#line 812 "intermod.m"
          mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[8], (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_81_81, transform_hlds__intermod__Instances_80, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38)), &transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_39_39);
        }
#line 812 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_39_39);
#line 182 "intermod.m"
        {
#line 182 "intermod.m"
          transform_hlds__intermod__gather_types_2_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39, &transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40);
        }
#line 183 "intermod.m"
        {
#line 183 "intermod.m"
          transform_hlds__intermod__write_intermod_info_3_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40);
        }
#line 184 "intermod.m"
        {
#line 184 "intermod.m"
          transform_hlds__intermod__intermod_info_get_module_info_2_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_42_42);
        }
#line 185 "intermod.m"
        {
#line 185 "intermod.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__intermod__OutputStream_14, &transform_hlds__intermod__V_23_23);
        }
#line 186 "intermod.m"
        {
#line 186 "intermod.m"
          mercury__io__close_output_3_p_0(transform_hlds__intermod__FileStream_13);
        }
#line 187 "intermod.m"
        {
#line 187 "intermod.m"
          transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_25);
#line 187 "intermod.m"
          return;
        }
#line 166 "intermod.m"
      }
#line 154 "intermod.m"
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
