/*
** Automatically generated from `mode_constraint_robdd.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module check_hlds.mode_constraint_robdd. */
/* :- implementation. */

/*
INIT mercury__check_hlds__mode_constraint_robdd__init
ENDINIT
*/

#include "check_hlds.mode_constraint_robdd.mih"


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
#include "std_util.mih"
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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 321 "mode_constraint_robdd.m"
struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0_s {
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__VarMap_8;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__LambdaPath_9;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__PredId_10;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__Constraint1_12;
#line 321 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__HeadVar__6_20;
#line 321 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__cont;
#line 321 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__cont_env_ptr;
#line 321 "mode_constraint_robdd.m"
  MR_bool check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__succeeded;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__TypeCtorInfo_75_75;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__TypeInfo_76_76;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__TypeInfo_83_83;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__Key_14;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__RobddVar_15;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__V_21_21;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__V_80_80;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__V_81_81;
#line 322 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__conv0_Key_14;
#line 321 "mode_constraint_robdd.m"
};

#line 321 "mode_constraint_robdd.m"
struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s {
#line 321 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1;
#line 321 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont;
#line 321 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr;
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_HeadVar__6_20;
#line 321 "mode_constraint_robdd.m"
};


#line 182 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0;

#line 185 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 188 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 191 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 194 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 197 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 200 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 203 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 206 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 209 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 212 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 215 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 218 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__pti_stack_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 221 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0;

#line 224 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 227 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 230 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 233 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 236 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 239 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 242 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 245 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 248 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0;

#line 251 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0[1];

#line 254 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0[1];

#line 257 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0[1];

#line 260 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 263 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 266 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 269 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 272 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 275 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 278 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0[10];

#line 281 "check_hlds.mode_constraint_robdd.c"
static const MR_ConstString check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0[10];

#line 284 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0;

#line 287 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0[1];

#line 290 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0[1];

#line 293 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0[1];

#line 296 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0[1];

#line 299 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 302 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 305 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0[3];

#line 308 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0;

#line 311 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0[1];

#line 314 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0[1];

#line 317 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0[1];

#line 320 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0[1];

#line 323 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_0[1];

#line 326 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0;

#line 329 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_1[1];

#line 332 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1;

#line 335 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_2[2];

#line 338 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2;

#line 341 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0[1];

#line 344 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1[1];

#line 347 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2[1];

#line 350 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0[3];

#line 353 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0[3];

#line 356 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0[3];

#line 359 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0[1];

#line 362 "check_hlds.mode_constraint_robdd.c"
static const MR_NotagFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0;

#line 365 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0[3];

#line 368 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0;

#line 371 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0[1];

#line 374 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0[1];

#line 377 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0[1];

#line 380 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0[1];

#line 383 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001(
#line 386 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 388 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 391 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001(
#line 394 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 396 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 398 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 401 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001(
#line 404 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 406 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 409 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001(
#line 412 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 414 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 416 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 419 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001(
#line 422 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 424 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 427 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001(
#line 430 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 432 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 434 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 437 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001(
#line 440 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 442 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 445 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001(
#line 448 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 450 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 452 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 455 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001(
#line 458 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 460 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 463 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001(
#line 466 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 468 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 470 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 473 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001(
#line 476 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 478 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 481 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001(
#line 484 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 486 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 488 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 491 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001(
#line 494 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 496 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 499 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001(
#line 502 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 504 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 506 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 509 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001(
#line 512 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 514 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 517 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001(
#line 520 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 522 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 524 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 527 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001(
#line 530 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 532 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 535 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001(
#line 538 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 540 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 542 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 545 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001(
#line 548 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 550 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 553 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001(
#line 556 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 558 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 560 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 563 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001(
#line 566 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 568 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 571 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001(
#line 574 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 576 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 578 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 581 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001(
#line 584 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 586 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 589 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001(
#line 592 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 594 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 596 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 599 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001(
#line 602 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 604 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 607 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001(
#line 610 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 612 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 614 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 617 "check_hlds.mode_constraint_robdd.c"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0_1(
#line 620 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 622 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

#line 308 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(
#line 308 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_12,
#line 308 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_50);

#line 426 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_p_0(
#line 426 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_5,
#line 426 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_25,
#line 426 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_26,
#line 426 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__4_27);

#line 391 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_p_0(
#line 391 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__ProgVarSet_8,
#line 391 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__VarMap_12,
#line 391 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_30);

#line 322 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_2(
#line 322 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg);

#line 321 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_1(
#line 321 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg);

#line 321 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0(
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__VarMap_8,
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaPath_9,
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_10,
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Keys_11,
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Constraint1_12,
#line 321 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__6_20,
#line 321 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__cont,
#line 321 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__cont_env_ptr);

#line 312 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__2_1_f_0(
#line 312 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_67);

#line 312 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__1_3_f_0(
#line 312 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_13,
#line 312 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_14,
#line 312 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_55);

#line 308 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__2_2_f_0(
#line 308 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_15,
#line 308 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_62);

#line 309 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_p_0(
#line 309 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
#line 309 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MinVars_7,
#line 309 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MaxVars_8,
#line 309 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_16);

#line 308 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__1_1_f_0(
#line 308 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_59);

#line 283 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_p_0(
#line 283 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__P0_5,
#line 283 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_6,
#line 283 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_14);

#line 216 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(
#line 216 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 216 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 216 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3);

#line 216 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(
#line 216 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 216 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2);

#line 208 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(
#line 208 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 208 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 208 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3);

#line 208 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(
#line 208 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 208 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2);

#line 210 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(
#line 210 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 210 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 210 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3);

#line 210 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(
#line 210 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 210 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2);

#line 410 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1(
#line 410 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 410 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 410 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 410 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 391 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1(
#line 391 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 391 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 391 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 391 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 321 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1(
#line 321 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg);

#line 321 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2(
#line 321 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 321 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 321 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__cont,
#line 321 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__cont_env_ptr);

#line 312 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4(
#line 312 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 312 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

#line 308 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3(
#line 308 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 308 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

#line 309 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2(
#line 309 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 309 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

#line 308 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1(
#line 308 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 308 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

#line 283 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1(
#line 283 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 283 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_1[9][2];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_3[2][6];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_4[2][5];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_5[3][7];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_6[1][9];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_7[1][8];




static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[6]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_4[0])),
    ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_4[1])),
    ((MR_Box) (check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_pred_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_pred_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_5[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__stack__pti_stack_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
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
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1111 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0
  }
};

#line 1120 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1128 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1136 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1144 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1152 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1161 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1170 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1178 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1186 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1196 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1206 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1215 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__pti_stack_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1223 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0
  }
};

#line 1231 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1239 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1247 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1255 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1263 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1271 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1279 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1288 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1296 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_lambda_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "lambda_path",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1317 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0 = {
  (MR_String) "mc_type",
  (MR_Integer) 0
};

#line 1323 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0
};

#line 1328 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0
};

#line 1333 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0[1] = {
  (MR_Integer) 0
};

#line 1338 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mc_type",
  {
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0
  },
  {
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0
};

#line 1359 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1367 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1388 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1396 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1405 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1414 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1423 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1432 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0[10] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1446 "check_hlds.mode_constraint_robdd.c"
static const MR_ConstString check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0[10] = {
  (MR_String) "mci_varset",
  (MR_String) "mci_varmap",
  (MR_String) "mci_pred_id",
  (MR_String) "mci_lambda_path",
  (MR_String) "mci_min_vars",
  (MR_String) "mci_max_vars",
  (MR_String) "mci_input_nodes",
  (MR_String) "mci_zero_var",
  (MR_String) "mci_simple_constraints",
  (MR_String) "mci_goal_path_map"
};

#line 1460 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0 = {
  (MR_String) "mode_constraint_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0,
  NULL,
  NULL
};

#line 1475 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0
};

#line 1480 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0
  }
};

#line 1489 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0
};

#line 1494 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0[1] = {
  (MR_Integer) 0
};

#line 1499 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_info",
  {
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0
  },
  {
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0
};

#line 1520 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_var",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1541 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_varmap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1562 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1570 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_vars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1591 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1600 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prodvars_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "prodvars_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1621 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1628 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0 = {
  (MR_String) "prog_var_and_level",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0,
  NULL,
  NULL,
  NULL
};

#line 1643 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0
};

#line 1648 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0
  }
};

#line 1657 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0
};

#line 1662 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0[1] = {
  (MR_Integer) 0
};

#line 1667 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prog_var_and_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "prog_var_and_level",
  {
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0
  },
  {
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0
};

#line 1688 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1693 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0 = {
  (MR_String) "in",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_0,
  NULL,
  NULL,
  NULL
};

#line 1708 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1713 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1 = {
  (MR_String) "out",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_1,
  NULL,
  NULL,
  NULL
};

#line 1728 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1734 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2 = {
  (MR_String) "at",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_2,
  NULL,
  NULL,
  NULL
};

#line 1749 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0
};

#line 1754 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1
};

#line 1759 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2
};

#line 1764 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2
  }
};

#line 1783 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0[3] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2,
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0,
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1
};

#line 1790 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1797 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "rep_var",
  {
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0
  },
  {
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0
};

#line 1818 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_robdd_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "robdd_var",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1839 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0[1] = {
  (MR_Integer) 0
};

#line 1844 "check_hlds.mode_constraint_robdd.c"
static const MR_NotagFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 = {
  (MR_String) "threshold",
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  NULL
};

#line 1851 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_threshold_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "threshold",
  {
    &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0
  },
  {
    &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0
};

#line 1872 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1879 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0 = {
  (MR_String) "key",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0,
  NULL,
  NULL,
  NULL
};

#line 1894 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0
};

#line 1899 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0
  }
};

#line 1908 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0
};

#line 1913 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0[1] = {
  (MR_Integer) 0
};

#line 1918 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "varmap_key",
  {
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0
  },
  {
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0
};

#line 1939 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001(
#line 1942 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 1944 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 1946 "check_hlds.mode_constraint_robdd.c"
{
#line 1948 "check_hlds.mode_constraint_robdd.c"
  {
#line 1950 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 1953 "check_hlds.mode_constraint_robdd.c"
    {
#line 1955 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 1958 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 1960 "check_hlds.mode_constraint_robdd.c"
  }
#line 1962 "check_hlds.mode_constraint_robdd.c"
}

#line 1965 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001(
#line 1968 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 1970 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 1972 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 1974 "check_hlds.mode_constraint_robdd.c"
{
#line 1976 "check_hlds.mode_constraint_robdd.c"
  {
#line 1978 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 1981 "check_hlds.mode_constraint_robdd.c"
    {
#line 1983 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 1986 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 1988 "check_hlds.mode_constraint_robdd.c"
  }
#line 1990 "check_hlds.mode_constraint_robdd.c"
}

#line 1993 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001(
#line 1996 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 1998 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2000 "check_hlds.mode_constraint_robdd.c"
{
#line 2002 "check_hlds.mode_constraint_robdd.c"
  {
#line 2004 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2007 "check_hlds.mode_constraint_robdd.c"
    {
#line 2009 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mc_type_0_0();
    }
#line 2012 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2014 "check_hlds.mode_constraint_robdd.c"
  }
#line 2016 "check_hlds.mode_constraint_robdd.c"
}

#line 2019 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001(
#line 2022 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2024 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2026 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2028 "check_hlds.mode_constraint_robdd.c"
{
#line 2030 "check_hlds.mode_constraint_robdd.c"
  {
#line 2032 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2035 "check_hlds.mode_constraint_robdd.c"
    {
#line 2037 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mc_type_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1);
    }
#line 2040 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2042 "check_hlds.mode_constraint_robdd.c"
  }
#line 2044 "check_hlds.mode_constraint_robdd.c"
}

#line 2047 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001(
#line 2050 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2052 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2054 "check_hlds.mode_constraint_robdd.c"
{
#line 2056 "check_hlds.mode_constraint_robdd.c"
  {
#line 2058 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2061 "check_hlds.mode_constraint_robdd.c"
    {
#line 2063 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2066 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2068 "check_hlds.mode_constraint_robdd.c"
  }
#line 2070 "check_hlds.mode_constraint_robdd.c"
}

#line 2073 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001(
#line 2076 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2078 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2080 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2082 "check_hlds.mode_constraint_robdd.c"
{
#line 2084 "check_hlds.mode_constraint_robdd.c"
  {
#line 2086 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2089 "check_hlds.mode_constraint_robdd.c"
    {
#line 2091 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2094 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2096 "check_hlds.mode_constraint_robdd.c"
  }
#line 2098 "check_hlds.mode_constraint_robdd.c"
}

#line 2101 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001(
#line 2104 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2106 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2108 "check_hlds.mode_constraint_robdd.c"
{
#line 2110 "check_hlds.mode_constraint_robdd.c"
  {
#line 2112 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2115 "check_hlds.mode_constraint_robdd.c"
    {
#line 2117 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2120 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2122 "check_hlds.mode_constraint_robdd.c"
  }
#line 2124 "check_hlds.mode_constraint_robdd.c"
}

#line 2127 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001(
#line 2130 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2132 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2134 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2136 "check_hlds.mode_constraint_robdd.c"
{
#line 2138 "check_hlds.mode_constraint_robdd.c"
  {
#line 2140 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2143 "check_hlds.mode_constraint_robdd.c"
    {
#line 2145 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2148 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2150 "check_hlds.mode_constraint_robdd.c"
  }
#line 2152 "check_hlds.mode_constraint_robdd.c"
}

#line 2155 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001(
#line 2158 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2160 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2162 "check_hlds.mode_constraint_robdd.c"
{
#line 2164 "check_hlds.mode_constraint_robdd.c"
  {
#line 2166 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2169 "check_hlds.mode_constraint_robdd.c"
    {
#line 2171 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2174 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2176 "check_hlds.mode_constraint_robdd.c"
  }
#line 2178 "check_hlds.mode_constraint_robdd.c"
}

#line 2181 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001(
#line 2184 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2186 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2188 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2190 "check_hlds.mode_constraint_robdd.c"
{
#line 2192 "check_hlds.mode_constraint_robdd.c"
  {
#line 2194 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2197 "check_hlds.mode_constraint_robdd.c"
    {
#line 2199 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2202 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2204 "check_hlds.mode_constraint_robdd.c"
  }
#line 2206 "check_hlds.mode_constraint_robdd.c"
}

#line 2209 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001(
#line 2212 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2214 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2216 "check_hlds.mode_constraint_robdd.c"
{
#line 2218 "check_hlds.mode_constraint_robdd.c"
  {
#line 2220 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2223 "check_hlds.mode_constraint_robdd.c"
    {
#line 2225 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2228 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2230 "check_hlds.mode_constraint_robdd.c"
  }
#line 2232 "check_hlds.mode_constraint_robdd.c"
}

#line 2235 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001(
#line 2238 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2240 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2242 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2244 "check_hlds.mode_constraint_robdd.c"
{
#line 2246 "check_hlds.mode_constraint_robdd.c"
  {
#line 2248 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2251 "check_hlds.mode_constraint_robdd.c"
    {
#line 2253 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2256 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2258 "check_hlds.mode_constraint_robdd.c"
  }
#line 2260 "check_hlds.mode_constraint_robdd.c"
}

#line 2263 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001(
#line 2266 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2268 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2270 "check_hlds.mode_constraint_robdd.c"
{
#line 2272 "check_hlds.mode_constraint_robdd.c"
  {
#line 2274 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2277 "check_hlds.mode_constraint_robdd.c"
    {
#line 2279 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2282 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2284 "check_hlds.mode_constraint_robdd.c"
  }
#line 2286 "check_hlds.mode_constraint_robdd.c"
}

#line 2289 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001(
#line 2292 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2294 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2296 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2298 "check_hlds.mode_constraint_robdd.c"
{
#line 2300 "check_hlds.mode_constraint_robdd.c"
  {
#line 2302 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2305 "check_hlds.mode_constraint_robdd.c"
    {
#line 2307 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2310 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2312 "check_hlds.mode_constraint_robdd.c"
  }
#line 2314 "check_hlds.mode_constraint_robdd.c"
}

#line 2317 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001(
#line 2320 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2322 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2324 "check_hlds.mode_constraint_robdd.c"
{
#line 2326 "check_hlds.mode_constraint_robdd.c"
  {
#line 2328 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2331 "check_hlds.mode_constraint_robdd.c"
    {
#line 2333 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2336 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2338 "check_hlds.mode_constraint_robdd.c"
  }
#line 2340 "check_hlds.mode_constraint_robdd.c"
}

#line 2343 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001(
#line 2346 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2348 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2350 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2352 "check_hlds.mode_constraint_robdd.c"
{
#line 2354 "check_hlds.mode_constraint_robdd.c"
  {
#line 2356 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2359 "check_hlds.mode_constraint_robdd.c"
    {
#line 2361 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2364 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2366 "check_hlds.mode_constraint_robdd.c"
  }
#line 2368 "check_hlds.mode_constraint_robdd.c"
}

#line 2371 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001(
#line 2374 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2376 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2378 "check_hlds.mode_constraint_robdd.c"
{
#line 2380 "check_hlds.mode_constraint_robdd.c"
  {
#line 2382 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2385 "check_hlds.mode_constraint_robdd.c"
    {
#line 2387 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2390 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2392 "check_hlds.mode_constraint_robdd.c"
  }
#line 2394 "check_hlds.mode_constraint_robdd.c"
}

#line 2397 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001(
#line 2400 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2402 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2404 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2406 "check_hlds.mode_constraint_robdd.c"
{
#line 2408 "check_hlds.mode_constraint_robdd.c"
  {
#line 2410 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2413 "check_hlds.mode_constraint_robdd.c"
    {
#line 2415 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2418 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2420 "check_hlds.mode_constraint_robdd.c"
  }
#line 2422 "check_hlds.mode_constraint_robdd.c"
}

#line 2425 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001(
#line 2428 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2430 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2432 "check_hlds.mode_constraint_robdd.c"
{
#line 2434 "check_hlds.mode_constraint_robdd.c"
  {
#line 2436 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2439 "check_hlds.mode_constraint_robdd.c"
    {
#line 2441 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2444 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2446 "check_hlds.mode_constraint_robdd.c"
  }
#line 2448 "check_hlds.mode_constraint_robdd.c"
}

#line 2451 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001(
#line 2454 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2456 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2458 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2460 "check_hlds.mode_constraint_robdd.c"
{
#line 2462 "check_hlds.mode_constraint_robdd.c"
  {
#line 2464 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2467 "check_hlds.mode_constraint_robdd.c"
    {
#line 2469 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2472 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2474 "check_hlds.mode_constraint_robdd.c"
  }
#line 2476 "check_hlds.mode_constraint_robdd.c"
}

#line 2479 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001(
#line 2482 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2484 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2486 "check_hlds.mode_constraint_robdd.c"
{
#line 2488 "check_hlds.mode_constraint_robdd.c"
  {
#line 2490 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2493 "check_hlds.mode_constraint_robdd.c"
    {
#line 2495 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2498 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2500 "check_hlds.mode_constraint_robdd.c"
  }
#line 2502 "check_hlds.mode_constraint_robdd.c"
}

#line 2505 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001(
#line 2508 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2510 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2512 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2514 "check_hlds.mode_constraint_robdd.c"
{
#line 2516 "check_hlds.mode_constraint_robdd.c"
  {
#line 2518 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2521 "check_hlds.mode_constraint_robdd.c"
    {
#line 2523 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2526 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2528 "check_hlds.mode_constraint_robdd.c"
  }
#line 2530 "check_hlds.mode_constraint_robdd.c"
}

#line 2533 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001(
#line 2536 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2538 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2540 "check_hlds.mode_constraint_robdd.c"
{
#line 2542 "check_hlds.mode_constraint_robdd.c"
  {
#line 2544 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2547 "check_hlds.mode_constraint_robdd.c"
    {
#line 2549 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____threshold_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2552 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2554 "check_hlds.mode_constraint_robdd.c"
  }
#line 2556 "check_hlds.mode_constraint_robdd.c"
}

#line 2559 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001(
#line 2562 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2564 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2566 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2568 "check_hlds.mode_constraint_robdd.c"
{
#line 2570 "check_hlds.mode_constraint_robdd.c"
  {
#line 2572 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2575 "check_hlds.mode_constraint_robdd.c"
    {
#line 2577 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____threshold_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2580 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2582 "check_hlds.mode_constraint_robdd.c"
  }
#line 2584 "check_hlds.mode_constraint_robdd.c"
}

#line 2587 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001(
#line 2590 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2592 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2594 "check_hlds.mode_constraint_robdd.c"
{
#line 2596 "check_hlds.mode_constraint_robdd.c"
  {
#line 2598 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2601 "check_hlds.mode_constraint_robdd.c"
    {
#line 2603 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2606 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2608 "check_hlds.mode_constraint_robdd.c"
  }
#line 2610 "check_hlds.mode_constraint_robdd.c"
}

#line 2613 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001(
#line 2616 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2618 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2620 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2622 "check_hlds.mode_constraint_robdd.c"
{
#line 2624 "check_hlds.mode_constraint_robdd.c"
  {
#line 2626 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2629 "check_hlds.mode_constraint_robdd.c"
    {
#line 2631 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2634 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2636 "check_hlds.mode_constraint_robdd.c"
  }
#line 2638 "check_hlds.mode_constraint_robdd.c"
}

#line 2641 "check_hlds.mode_constraint_robdd.c"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0_1(
#line 2644 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 2646 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 2648 "check_hlds.mode_constraint_robdd.c"
{
#line 2650 "check_hlds.mode_constraint_robdd.c"
  {
#line 2652 "check_hlds.mode_constraint_robdd.c"
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 2654 "check_hlds.mode_constraint_robdd.c"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
#line 2656 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__2_68;

#line 2659 "check_hlds.mode_constraint_robdd.c"
    {
#line 2661 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__conv0_HeadVar__2_68 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__2_1_f_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 2664 "check_hlds.mode_constraint_robdd.c"
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__2_68));
#line 2666 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 2668 "check_hlds.mode_constraint_robdd.c"
  }
#line 2670 "check_hlds.mode_constraint_robdd.c"
}

#line 308 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(
#line 308 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_12,
#line 308 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_50)
#line 308 "mode_constraint_robdd.m"
{
#line 308 "mode_constraint_robdd.m"
  {
#line 308 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 308 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_51;
#line 308 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv1_HeadVar__4_51;

#line 308 "mode_constraint_robdd.m"
    {
#line 308 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv1_HeadVar__4_51 = mercury__std_util__compose_3_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[1], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[2], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[3], check_hlds__mode_constraint_robdd__HeadVar__1_12, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[7], ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__3_50)));
    }
#line 308 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__HeadVar__4_51 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_HeadVar__4_51);
#line 308 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__4_51;
#line 308 "mode_constraint_robdd.m"
  }
#line 308 "mode_constraint_robdd.m"
}

#line 174 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 174 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1)
#line 174 "mode_constraint_robdd.m"
{
#line 174 "mode_constraint_robdd.m"
  {
#line 174 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 174 "mode_constraint_robdd.m"
    *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 174 "mode_constraint_robdd.m"
  }
#line 174 "mode_constraint_robdd.m"
}

#line 174 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 174 "mode_constraint_robdd.m"
{
#line 174 "mode_constraint_robdd.m"
  {
#line 174 "mode_constraint_robdd.m"
    return MR_TRUE;
#line 174 "mode_constraint_robdd.m"
  }
#line 174 "mode_constraint_robdd.m"
}

#line 426 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_p_0(
#line 426 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_5,
#line 426 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_25,
#line 426 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_26,
#line 426 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__4_27)
#line 426 "mode_constraint_robdd.m"
{
#line 426 "mode_constraint_robdd.m"
  {
#line 426 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 426 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ProgVar_15;
#line 426 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaId_17;
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_57_57;
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Key_11;
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__RepVar_12;
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_13;
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaId0_14;
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__GoalId_16;
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 1)));
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_71_71;
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 0)));
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 2)));
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 3)));
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 4)));
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 5)));
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 6)));
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 7)));
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 8)));
#line 413 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 9)));
#line 413 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_Key_11;
#line 415 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_45_45;
#line 415 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_46_46;
#line 415 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_47_47;
#line 415 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_48_48;
#line 415 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_49_49;
#line 415 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_50_50;
#line 415 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_51_51;
#line 415 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_52_52;
#line 415 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_53_53;

#line 413 "mode_constraint_robdd.m"
    {
#line 413 "mode_constraint_robdd.m"
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__V_28_28, &check_hlds__mode_constraint_robdd__conv0_Key_11, ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__2_25)));
    }
#line 413 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__Key_11 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_Key_11);
#line 414 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__RepVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_11, (MR_Integer) 0)));
#line 414 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_11, (MR_Integer) 1)));
#line 414 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__LambdaId0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_11, (MR_Integer) 2)));
#line 415 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 0)));
#line 415 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 1)));
#line 415 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 2)));
#line 415 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 3)));
#line 415 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 4)));
#line 415 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 5)));
#line 415 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 6)));
#line 415 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 7)));
#line 415 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 8)));
#line 415 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 9)));
#line 415 "mode_constraint_robdd.m"
    {
#line 415 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__PredId_13, check_hlds__mode_constraint_robdd__V_71_71);
    }
#line 413 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 413 "mode_constraint_robdd.m"
      {
#line 416 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__RepVar_12)) == (MR_mktag((MR_Integer) 2)));
#line 416 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 416 "mode_constraint_robdd.m"
          {
#line 416 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__ProgVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_12, (MR_Integer) 0)));
#line 416 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__GoalId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_12, (MR_Integer) 1)));
#line 2866 "check_hlds.mode_constraint_robdd.c"
            check_hlds__mode_constraint_robdd__TypeCtorInfo_57_57 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 417 "mode_constraint_robdd.m"
            {
#line 417 "mode_constraint_robdd.m"
              mercury__stack__push_3_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_57_57, ((MR_Box) (check_hlds__mode_constraint_robdd__GoalId_16)), check_hlds__mode_constraint_robdd__LambdaId0_14, &check_hlds__mode_constraint_robdd__LambdaId_17);
            }
#line 417 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 416 "mode_constraint_robdd.m"
          }
#line 413 "mode_constraint_robdd.m"
      }
#line 426 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 422 "mode_constraint_robdd.m"
      {
#line 422 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__Vs0_18;
#line 419 "mode_constraint_robdd.m"
        MR_Box check_hlds__mode_constraint_robdd__conv1_Vs0_18;

#line 419 "mode_constraint_robdd.m"
        {
#line 419 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], check_hlds__mode_constraint_robdd__HeadVar__3_26, ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaId_17)), &check_hlds__mode_constraint_robdd__conv1_Vs0_18);
        }
#line 419 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 419 "mode_constraint_robdd.m"
          {
#line 419 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__Vs0_18 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_Vs0_18);
#line 419 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 419 "mode_constraint_robdd.m"
          }
#line 422 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 420 "mode_constraint_robdd.m"
          {
#line 420 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__Vs_19;

#line 420 "mode_constraint_robdd.m"
            {
#line 420 "mode_constraint_robdd.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVar_15, check_hlds__mode_constraint_robdd__Vs0_18, &check_hlds__mode_constraint_robdd__Vs_19);
            }
#line 421 "mode_constraint_robdd.m"
            {
#line 421 "mode_constraint_robdd.m"
              mercury__map__det_update_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaId_17)), ((MR_Box) (check_hlds__mode_constraint_robdd__Vs_19)), check_hlds__mode_constraint_robdd__HeadVar__3_26, check_hlds__mode_constraint_robdd__HeadVar__4_27);
#line 421 "mode_constraint_robdd.m"
              return;
            }
#line 420 "mode_constraint_robdd.m"
          }
#line 422 "mode_constraint_robdd.m"
        else
#line 423 "mode_constraint_robdd.m"
          {
#line 423 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__Vs_32;

#line 423 "mode_constraint_robdd.m"
            {
#line 423 "mode_constraint_robdd.m"
              check_hlds__mode_constraint_robdd__Vs_32 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVar_15);
            }
#line 424 "mode_constraint_robdd.m"
            {
#line 424 "mode_constraint_robdd.m"
              mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaId_17)), ((MR_Box) (check_hlds__mode_constraint_robdd__Vs_32)), check_hlds__mode_constraint_robdd__HeadVar__3_26, check_hlds__mode_constraint_robdd__HeadVar__4_27);
#line 424 "mode_constraint_robdd.m"
              return;
            }
#line 423 "mode_constraint_robdd.m"
          }
#line 422 "mode_constraint_robdd.m"
      }
#line 426 "mode_constraint_robdd.m"
    else
#line 427 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__HeadVar__4_27 = check_hlds__mode_constraint_robdd__HeadVar__3_26;
#line 426 "mode_constraint_robdd.m"
  }
#line 426 "mode_constraint_robdd.m"
}

#line 391 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_p_0(
#line 391 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__ProgVarSet_8,
#line 391 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__VarMap_12,
#line 391 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_30)
#line 391 "mode_constraint_robdd.m"
{
#line 391 "mode_constraint_robdd.m"
  {
#line 391 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 391 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__RepVar_15;
#line 391 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_16;
#line 391 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaId_17;
#line 391 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__PredIdNum_18;
#line 391 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_33_33;
#line 391 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__V_36_36;
#line 391 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__V_38_38;
#line 392 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_V_33_33;

#line 392 "mode_constraint_robdd.m"
    {
#line 392 "mode_constraint_robdd.m"
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__VarMap_12, &check_hlds__mode_constraint_robdd__conv0_V_33_33, ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__3_30)));
    }
#line 392 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_33_33 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_V_33_33);
#line 392 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__RepVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_33_33, (MR_Integer) 0)));
#line 392 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_33_33, (MR_Integer) 1)));
#line 392 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__LambdaId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_33_33, (MR_Integer) 2)));
#line 374 "mode_constraint_robdd.m"
    if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__RepVar_15)) == (MR_mktag((MR_Integer) 2))))
#line 382 "mode_constraint_robdd.m"
      {
#line 382 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 0)));
#line 382 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__Id_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 1)));
#line 382 "mode_constraint_robdd.m"
        MR_String check_hlds__mode_constraint_robdd__Name_81;
#line 382 "mode_constraint_robdd.m"
        MR_Integer check_hlds__mode_constraint_robdd__IdNum_82;

#line 383 "mode_constraint_robdd.m"
        {
#line 383 "mode_constraint_robdd.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVarSet_8, check_hlds__mode_constraint_robdd__V_78, &check_hlds__mode_constraint_robdd__Name_81);
        }
#line 384 "mode_constraint_robdd.m"
        {
#line 384 "mode_constraint_robdd.m"
          mercury__io__write_string_3_p_0(check_hlds__mode_constraint_robdd__Name_81);
        }
#line 385 "mode_constraint_robdd.m"
        {
#line 385 "mode_constraint_robdd.m"
          mercury__io__write_char_3_p_0((MR_Char) 95);
        }
#line 386 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__IdNum_82 = (MR_Integer) check_hlds__mode_constraint_robdd__Id_79;
#line 387 "mode_constraint_robdd.m"
        {
#line 387 "mode_constraint_robdd.m"
          mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__IdNum_82);
        }
#line 382 "mode_constraint_robdd.m"
      }
#line 374 "mode_constraint_robdd.m"
    else
#line 374 "mode_constraint_robdd.m"
      if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__RepVar_15)) == (MR_mktag((MR_Integer) 0))))
#line 374 "mode_constraint_robdd.m"
        {
#line 374 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 0)));
#line 374 "mode_constraint_robdd.m"
          MR_String check_hlds__mode_constraint_robdd__Name_62;

#line 375 "mode_constraint_robdd.m"
          {
#line 375 "mode_constraint_robdd.m"
            mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVarSet_8, check_hlds__mode_constraint_robdd__V_60, &check_hlds__mode_constraint_robdd__Name_62);
          }
#line 376 "mode_constraint_robdd.m"
          {
#line 376 "mode_constraint_robdd.m"
            mercury__io__write_string_3_p_0(check_hlds__mode_constraint_robdd__Name_62);
          }
#line 377 "mode_constraint_robdd.m"
          {
#line 377 "mode_constraint_robdd.m"
            mercury__io__write_string_3_p_0((MR_String) "_in");
          }
#line 374 "mode_constraint_robdd.m"
        }
#line 374 "mode_constraint_robdd.m"
      else
#line 378 "mode_constraint_robdd.m"
        {
#line 378 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 0)));
#line 378 "mode_constraint_robdd.m"
          MR_String check_hlds__mode_constraint_robdd__Name_71;

#line 379 "mode_constraint_robdd.m"
          {
#line 379 "mode_constraint_robdd.m"
            mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVarSet_8, check_hlds__mode_constraint_robdd__V_69, &check_hlds__mode_constraint_robdd__Name_71);
          }
#line 380 "mode_constraint_robdd.m"
          {
#line 380 "mode_constraint_robdd.m"
            mercury__io__write_string_3_p_0(check_hlds__mode_constraint_robdd__Name_71);
          }
#line 381 "mode_constraint_robdd.m"
          {
#line 381 "mode_constraint_robdd.m"
            mercury__io__write_string_3_p_0((MR_String) "_out");
          }
#line 378 "mode_constraint_robdd.m"
        }
#line 395 "mode_constraint_robdd.m"
    {
#line 395 "mode_constraint_robdd.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 396 "mode_constraint_robdd.m"
    {
#line 396 "mode_constraint_robdd.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(check_hlds__mode_constraint_robdd__PredId_16, &check_hlds__mode_constraint_robdd__PredIdNum_18);
    }
#line 397 "mode_constraint_robdd.m"
    {
#line 397 "mode_constraint_robdd.m"
      mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__PredIdNum_18);
    }
#line 398 "mode_constraint_robdd.m"
    {
#line 398 "mode_constraint_robdd.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 399 "mode_constraint_robdd.m"
    {
#line 399 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_36_36 = mercury__stack__depth_1_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_constraint_robdd__LambdaId_17);
    }
#line 399 "mode_constraint_robdd.m"
    {
#line 399 "mode_constraint_robdd.m"
      mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__V_36_36);
    }
#line 400 "mode_constraint_robdd.m"
    {
#line 400 "mode_constraint_robdd.m"
      mercury__io__write_string_3_p_0((MR_String) " (");
    }
#line 401 "mode_constraint_robdd.m"
    {
#line 401 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_38_38 = mercury__term__var_to_int_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__HeadVar__3_30);
    }
#line 401 "mode_constraint_robdd.m"
    {
#line 401 "mode_constraint_robdd.m"
      mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__V_38_38);
    }
#line 402 "mode_constraint_robdd.m"
    {
#line 402 "mode_constraint_robdd.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 402 "mode_constraint_robdd.m"
      return;
    }
#line 391 "mode_constraint_robdd.m"
  }
#line 391 "mode_constraint_robdd.m"
}

#line 322 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_2(
#line 322 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg)
#line 322 "mode_constraint_robdd.m"
{
#line 322 "mode_constraint_robdd.m"
  {
#line 322 "mode_constraint_robdd.m"
    struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0_s * check_hlds__mode_constraint_robdd__env_ptr = (struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0_s *) check_hlds__mode_constraint_robdd__env_ptr_arg;

#line 322 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__Key_14 = ((MR_Word) (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__conv0_Key_14);
#line 322 "mode_constraint_robdd.m"
    {
#line 322 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_1(check_hlds__mode_constraint_robdd__env_ptr);
#line 322 "mode_constraint_robdd.m"
      return;
    }
#line 322 "mode_constraint_robdd.m"
  }
#line 322 "mode_constraint_robdd.m"
}

#line 321 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_1(
#line 321 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg)
#line 321 "mode_constraint_robdd.m"
{
#line 321 "mode_constraint_robdd.m"
  {
#line 321 "mode_constraint_robdd.m"
    struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0_s * check_hlds__mode_constraint_robdd__env_ptr = (struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0_s *) check_hlds__mode_constraint_robdd__env_ptr_arg;

#line 321 "mode_constraint_robdd.m"
    {
#line 324 "mode_constraint_robdd.m"
      MR_Box check_hlds__mode_constraint_robdd__conv1_RobddVar_15;

#line 323 "mode_constraint_robdd.m"
      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__Key_14, (MR_Integer) 0)));
#line 323 "mode_constraint_robdd.m"
      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__Key_14, (MR_Integer) 1)));
#line 323 "mode_constraint_robdd.m"
      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__Key_14, (MR_Integer) 2)));
#line 323 "mode_constraint_robdd.m"
      {
#line 323 "mode_constraint_robdd.m"
        (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__PredId_10, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__V_80_80);
      }
#line 321 "mode_constraint_robdd.m"
      if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__succeeded)
#line 321 "mode_constraint_robdd.m"
        {
#line 3207 "check_hlds.mode_constraint_robdd.c"
          (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__TypeInfo_83_83 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
#line 323 "mode_constraint_robdd.m"
          {
#line 323 "mode_constraint_robdd.m"
            (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__TypeInfo_83_83, ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__LambdaPath_9)), ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__V_81_81)));
          }
#line 321 "mode_constraint_robdd.m"
          if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__succeeded)
#line 321 "mode_constraint_robdd.m"
            {
#line 323 "mode_constraint_robdd.m"
              (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 323 "mode_constraint_robdd.m"
              if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__succeeded)
#line 323 "mode_constraint_robdd.m"
                {
#line 323 "mode_constraint_robdd.m"
                  *((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__HeadVar__6_20) = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__V_21_21, (MR_Integer) 0)));
#line 321 "mode_constraint_robdd.m"
                  {
#line 3228 "check_hlds.mode_constraint_robdd.c"
                    (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__TypeInfo_76_76 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
#line 324 "mode_constraint_robdd.m"
                    {
#line 324 "mode_constraint_robdd.m"
                      mercury__bimap__lookup_3_p_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__TypeCtorInfo_75_75, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__TypeInfo_76_76, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__VarMap_8, ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__Key_14)), &check_hlds__mode_constraint_robdd__conv1_RobddVar_15);
                    }
#line 324 "mode_constraint_robdd.m"
                    (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__RobddVar_15 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_RobddVar_15);
#line 325 "mode_constraint_robdd.m"
                    {
#line 325 "mode_constraint_robdd.m"
                      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__Constraint1_12, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__RobddVar_15);
                    }
#line 325 "mode_constraint_robdd.m"
                    if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__succeeded)
#line 325 "mode_constraint_robdd.m"
                      {
#line 325 "mode_constraint_robdd.m"
                        ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__cont)((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__cont_env_ptr);
#line 325 "mode_constraint_robdd.m"
                        return;
                      }
#line 321 "mode_constraint_robdd.m"
                  }
#line 323 "mode_constraint_robdd.m"
                }
#line 321 "mode_constraint_robdd.m"
            }
#line 321 "mode_constraint_robdd.m"
        }
#line 321 "mode_constraint_robdd.m"
    }
#line 321 "mode_constraint_robdd.m"
  }
#line 321 "mode_constraint_robdd.m"
}

#line 321 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0(
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__VarMap_8,
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaPath_9,
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_10,
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Keys_11,
#line 321 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Constraint1_12,
#line 321 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__6_20,
#line 321 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__cont,
#line 321 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__cont_env_ptr)
#line 321 "mode_constraint_robdd.m"
{
#line 321 "mode_constraint_robdd.m"
  {
#line 321 "mode_constraint_robdd.m"
    struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0_s check_hlds__mode_constraint_robdd__env;

#line 321 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__VarMap_8 = check_hlds__mode_constraint_robdd__VarMap_8;
#line 321 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__LambdaPath_9 = check_hlds__mode_constraint_robdd__LambdaPath_9;
#line 321 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__PredId_10 = check_hlds__mode_constraint_robdd__PredId_10;
#line 321 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__Constraint1_12 = check_hlds__mode_constraint_robdd__Constraint1_12;
#line 321 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__HeadVar__6_20 = check_hlds__mode_constraint_robdd__HeadVar__6_20;
#line 321 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__cont = check_hlds__mode_constraint_robdd__cont;
#line 321 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__cont_env_ptr = check_hlds__mode_constraint_robdd__cont_env_ptr;
#line 3306 "check_hlds.mode_constraint_robdd.c"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__TypeCtorInfo_75_75 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0;
#line 322 "mode_constraint_robdd.m"
    {
#line 322 "mode_constraint_robdd.m"
      mercury__list__member_2_p_1((check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__TypeCtorInfo_75_75, &(check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_env_0__conv0_Key_14, check_hlds__mode_constraint_robdd__Keys_11, check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0_2, &check_hlds__mode_constraint_robdd__env);
    }
#line 321 "mode_constraint_robdd.m"
  }
#line 321 "mode_constraint_robdd.m"
}

#line 312 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__2_1_f_0(
#line 312 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_67)
#line 312 "mode_constraint_robdd.m"
{
#line 312 "mode_constraint_robdd.m"
  {
#line 312 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 312 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_68;

#line 312 "mode_constraint_robdd.m"
    {
#line 312 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__HeadVar__2_68 = mercury__varset__vars_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__HeadVar__1_67);
    }
#line 312 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__2_68;
#line 312 "mode_constraint_robdd.m"
  }
#line 312 "mode_constraint_robdd.m"
}

#line 312 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__1_3_f_0(
#line 312 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_13,
#line 312 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_14,
#line 312 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_55)
#line 312 "mode_constraint_robdd.m"
{
#line 312 "mode_constraint_robdd.m"
  {
#line 312 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 312 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_56;
#line 312 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeInfo_57_57 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[1];
#line 312 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_HeadVar__4_56;

#line 312 "mode_constraint_robdd.m"
    {
#line 312 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv0_HeadVar__4_56 = mercury__std_util__compose_3_f_0(check_hlds__mode_constraint_robdd__TypeInfo_57_57, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[2], check_hlds__mode_constraint_robdd__TypeInfo_57_57, check_hlds__mode_constraint_robdd__HeadVar__1_13, check_hlds__mode_constraint_robdd__HeadVar__2_14, ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__3_55)));
    }
#line 312 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__HeadVar__4_56 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_HeadVar__4_56);
#line 312 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__4_56;
#line 312 "mode_constraint_robdd.m"
  }
#line 312 "mode_constraint_robdd.m"
}

#line 308 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__2_2_f_0(
#line 308 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_15,
#line 308 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_62)
#line 308 "mode_constraint_robdd.m"
{
#line 308 "mode_constraint_robdd.m"
  {
#line 308 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 308 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_63;

#line 308 "mode_constraint_robdd.m"
    {
#line 308 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__HeadVar__3_63 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_15, check_hlds__mode_constraint_robdd__HeadVar__2_62);
    }
#line 308 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__3_63;
#line 308 "mode_constraint_robdd.m"
  }
#line 308 "mode_constraint_robdd.m"
}

#line 309 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_p_0(
#line 309 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
#line 309 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MinVars_7,
#line 309 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MaxVars_8,
#line 309 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_16)
#line 309 "mode_constraint_robdd.m"
{
#line 309 "mode_constraint_robdd.m"
  {
#line 309 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 309 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 309 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeInfo_66_66 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
#line 309 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18;
#line 309 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_70_70;
#line 310 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_V_18_18;
#line 311 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19;
#line 311 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 311 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_71_71;
#line 311 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv1_V_20_20;

#line 310 "mode_constraint_robdd.m"
    {
#line 310 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv0_V_18_18 = mercury__map__lookup_2_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_65_65, check_hlds__mode_constraint_robdd__TypeInfo_66_66, check_hlds__mode_constraint_robdd__MinVars_7, ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)));
    }
#line 310 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_V_18_18);
#line 310 "mode_constraint_robdd.m"
    {
#line 310 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0(check_hlds__mode_constraint_robdd__TypeInfo_66_66, &check_hlds__mode_constraint_robdd__V_70_70, ((MR_Box) (check_hlds__mode_constraint_robdd__V_18_18)), ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__4_16)));
    }
#line 310 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = ((MR_Integer) 1 == check_hlds__mode_constraint_robdd__V_70_70);
#line 309 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 309 "mode_constraint_robdd.m"
      {
#line 311 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_19_19 = (MR_Integer) 1;
#line 311 "mode_constraint_robdd.m"
        {
#line 311 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__conv1_V_20_20 = mercury__map__lookup_2_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_65_65, check_hlds__mode_constraint_robdd__TypeInfo_66_66, check_hlds__mode_constraint_robdd__MaxVars_8, ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)));
        }
#line 311 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_V_20_20);
#line 311 "mode_constraint_robdd.m"
        {
#line 311 "mode_constraint_robdd.m"
          mercury__builtin__compare_3_p_0(check_hlds__mode_constraint_robdd__TypeInfo_66_66, &check_hlds__mode_constraint_robdd__V_71_71, ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20)), ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__4_16)));
        }
#line 311 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_19_19 == check_hlds__mode_constraint_robdd__V_71_71);
#line 311 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 309 "mode_constraint_robdd.m"
      }
#line 309 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 309 "mode_constraint_robdd.m"
  }
#line 309 "mode_constraint_robdd.m"
}

#line 308 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__1_1_f_0(
#line 308 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_59)
#line 308 "mode_constraint_robdd.m"
{
#line 308 "mode_constraint_robdd.m"
  {
#line 308 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 308 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_60;

#line 308 "mode_constraint_robdd.m"
    {
#line 308 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__HeadVar__2_60 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_59);
    }
#line 308 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__2_60;
#line 308 "mode_constraint_robdd.m"
  }
#line 308 "mode_constraint_robdd.m"
}

#line 283 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_p_0(
#line 283 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__P0_5,
#line 283 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_6,
#line 283 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_14)
#line 283 "mode_constraint_robdd.m"
{
#line 283 "mode_constraint_robdd.m"
  {
#line 283 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 283 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__RV_10;
#line 283 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_11;
#line 283 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 1)));
#line 283 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16;
#line 284 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 0)));
#line 284 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 2)));
#line 284 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 3)));
#line 284 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 4)));
#line 284 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 5)));
#line 284 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 6)));
#line 284 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 7)));
#line 284 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 8)));
#line 284 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 9)));
#line 284 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_V_16_16;
#line 284 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12;

#line 284 "mode_constraint_robdd.m"
    {
#line 284 "mode_constraint_robdd.m"
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__V_15_15, &check_hlds__mode_constraint_robdd__conv0_V_16_16, ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__3_14)));
    }
#line 284 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_V_16_16);
#line 284 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__RV_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_16_16, (MR_Integer) 0)));
#line 284 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_16_16, (MR_Integer) 1)));
#line 284 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_16_16, (MR_Integer) 2)));
#line 286 "mode_constraint_robdd.m"
    {
#line 286 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 2)));
#line 286 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 0)));
#line 286 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 1)));
#line 286 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 3)));
#line 286 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 4)));
#line 286 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 5)));
#line 286 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 6)));
#line 286 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 7)));
#line 286 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 8)));
#line 286 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 9)));

#line 286 "mode_constraint_robdd.m"
      {
#line 286 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__PredId_11, check_hlds__mode_constraint_robdd__V_39_39);
      }
#line 286 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 286 "mode_constraint_robdd.m"
    }
#line 287 "mode_constraint_robdd.m"
    if (!(check_hlds__mode_constraint_robdd__succeeded))
#line 288 "mode_constraint_robdd.m"
      {
#line 288 "mode_constraint_robdd.m"
        MR_bool MR_CALL (* check_hlds__mode_constraint_robdd__func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P0_5, (MR_Integer) 1)));

#line 288 "mode_constraint_robdd.m"
        {
#line 288 "mode_constraint_robdd.m"
          return check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__func_1(((MR_Box) check_hlds__mode_constraint_robdd__P0_5), ((MR_Box) (check_hlds__mode_constraint_robdd__RV_10)));
        }
#line 288 "mode_constraint_robdd.m"
      }
#line 283 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 283 "mode_constraint_robdd.m"
  }
#line 283 "mode_constraint_robdd.m"
}

#line 216 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(
#line 216 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 216 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 216 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 216 "mode_constraint_robdd.m"
{
#line 216 "mode_constraint_robdd.m"
  {
#line 216 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 216 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_12 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 216 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_13 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 216 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_12 == check_hlds__mode_constraint_robdd__CastY_13);
#line 216 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 3651 "check_hlds.mode_constraint_robdd.c"
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 216 "mode_constraint_robdd.m"
    else
#line 216 "mode_constraint_robdd.m"
      {
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 2)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_10_10;

#line 216 "mode_constraint_robdd.m"
        {
#line 216 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(&check_hlds__mode_constraint_robdd__V_10_10, check_hlds__mode_constraint_robdd__V_4_4, check_hlds__mode_constraint_robdd__V_7_7);
        }
#line 3677 "check_hlds.mode_constraint_robdd.c"
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_10_10 == (MR_Integer) 0);
#line 216 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 216 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 216 "mode_constraint_robdd.m"
          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_10_10;
#line 216 "mode_constraint_robdd.m"
        else
#line 216 "mode_constraint_robdd.m"
          {
#line 216 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_11_11;

#line 216 "mode_constraint_robdd.m"
            {
#line 216 "mode_constraint_robdd.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_constraint_robdd__V_11_11, check_hlds__mode_constraint_robdd__V_5_5, check_hlds__mode_constraint_robdd__V_8_8);
            }
#line 3697 "check_hlds.mode_constraint_robdd.c"
            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_11_11 == (MR_Integer) 0);
#line 216 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 216 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 216 "mode_constraint_robdd.m"
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_11_11;
#line 216 "mode_constraint_robdd.m"
            else
#line 216 "mode_constraint_robdd.m"
              {
#line 216 "mode_constraint_robdd.m"
                {
#line 216 "mode_constraint_robdd.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)));
#line 216 "mode_constraint_robdd.m"
                  return;
                }
#line 216 "mode_constraint_robdd.m"
              }
#line 216 "mode_constraint_robdd.m"
          }
#line 216 "mode_constraint_robdd.m"
      }
#line 216 "mode_constraint_robdd.m"
  }
#line 216 "mode_constraint_robdd.m"
}

#line 216 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(
#line 216 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 216 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 216 "mode_constraint_robdd.m"
{
#line 216 "mode_constraint_robdd.m"
  {
#line 216 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 216 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_9 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 216 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_10 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 216 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_9 == check_hlds__mode_constraint_robdd__CastY_10);
#line 216 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 216 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 216 "mode_constraint_robdd.m"
    else
#line 216 "mode_constraint_robdd.m"
      {
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_12_12;
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));

#line 3770 "check_hlds.mode_constraint_robdd.c"
        {
#line 3772 "check_hlds.mode_constraint_robdd.c"
          check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(check_hlds__mode_constraint_robdd__V_3_3, check_hlds__mode_constraint_robdd__V_6_6);
        }
#line 216 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 216 "mode_constraint_robdd.m"
          {
#line 3779 "check_hlds.mode_constraint_robdd.c"
            {
#line 3781 "check_hlds.mode_constraint_robdd.c"
              check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__V_4_4, check_hlds__mode_constraint_robdd__V_7_7);
            }
#line 216 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 216 "mode_constraint_robdd.m"
              {
#line 3788 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__TypeInfo_12_12 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
#line 3790 "check_hlds.mode_constraint_robdd.c"
                {
#line 3792 "check_hlds.mode_constraint_robdd.c"
                  return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_12_12, ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8)));
                }
#line 216 "mode_constraint_robdd.m"
              }
#line 216 "mode_constraint_robdd.m"
          }
#line 216 "mode_constraint_robdd.m"
      }
#line 216 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 216 "mode_constraint_robdd.m"
  }
#line 216 "mode_constraint_robdd.m"
}

#line 198 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0(
#line 198 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 198 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 198 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 198 "mode_constraint_robdd.m"
{
#line 198 "mode_constraint_robdd.m"
  {
#line 198 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 198 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_6 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 198 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_7 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 198 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_6 == check_hlds__mode_constraint_robdd__CastY_7);
#line 198 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 3832 "check_hlds.mode_constraint_robdd.c"
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 198 "mode_constraint_robdd.m"
    else
#line 198 "mode_constraint_robdd.m"
      {
#line 198 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 198 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 198 "mode_constraint_robdd.m"
        {
#line 198 "mode_constraint_robdd.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)));
#line 198 "mode_constraint_robdd.m"
          return;
        }
#line 198 "mode_constraint_robdd.m"
      }
#line 198 "mode_constraint_robdd.m"
  }
#line 198 "mode_constraint_robdd.m"
}

#line 198 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0(
#line 198 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 198 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 198 "mode_constraint_robdd.m"
{
#line 198 "mode_constraint_robdd.m"
  {
#line 198 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 198 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_5 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 198 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_6 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 198 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_5 == check_hlds__mode_constraint_robdd__CastY_6);
#line 198 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 198 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 198 "mode_constraint_robdd.m"
    else
#line 198 "mode_constraint_robdd.m"
      {
#line 198 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_3_3 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 198 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 3890 "check_hlds.mode_constraint_robdd.c"
        {
#line 3892 "check_hlds.mode_constraint_robdd.c"
          return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__V_3_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)));
        }
#line 198 "mode_constraint_robdd.m"
      }
#line 198 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 198 "mode_constraint_robdd.m"
  }
#line 198 "mode_constraint_robdd.m"
}

#line 208 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(
#line 208 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 208 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 208 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 208 "mode_constraint_robdd.m"
{
#line 208 "mode_constraint_robdd.m"
  {
#line 208 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 208 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 208 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 208 "mode_constraint_robdd.m"
    {
#line 208 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
#line 208 "mode_constraint_robdd.m"
      return;
    }
#line 208 "mode_constraint_robdd.m"
  }
#line 208 "mode_constraint_robdd.m"
}

#line 208 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(
#line 208 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 208 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 208 "mode_constraint_robdd.m"
{
#line 208 "mode_constraint_robdd.m"
  {
#line 208 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 208 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 208 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 208 "mode_constraint_robdd.m"
    {
#line 208 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
#line 208 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 208 "mode_constraint_robdd.m"
  }
#line 208 "mode_constraint_robdd.m"
}

#line 54 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(
#line 54 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 54 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 54 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 54 "mode_constraint_robdd.m"
{
#line 54 "mode_constraint_robdd.m"
  {
#line 54 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 54 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_29 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 54 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_30 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 54 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_29 == check_hlds__mode_constraint_robdd__CastY_30);
#line 54 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 3990 "check_hlds.mode_constraint_robdd.c"
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "mode_constraint_robdd.m"
    else
#line 54 "mode_constraint_robdd.m"
      if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 54 "mode_constraint_robdd.m"
        {
#line 54 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "mode_constraint_robdd.m"
          if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 54 "mode_constraint_robdd.m"
            {
#line 54 "mode_constraint_robdd.m"
              MR_Word check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
#line 54 "mode_constraint_robdd.m"
              MR_Word check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
#line 54 "mode_constraint_robdd.m"
              MR_Word check_hlds__mode_constraint_robdd__V_28_28;

#line 54 "mode_constraint_robdd.m"
              {
#line 54 "mode_constraint_robdd.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], &check_hlds__mode_constraint_robdd__V_28_28, ((MR_Box) (check_hlds__mode_constraint_robdd__V_36_36)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_26_26)));
              }
#line 4019 "check_hlds.mode_constraint_robdd.c"
              check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_28_28 == (MR_Integer) 0);
#line 54 "mode_constraint_robdd.m"
              check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 54 "mode_constraint_robdd.m"
              if (check_hlds__mode_constraint_robdd__succeeded)
#line 54 "mode_constraint_robdd.m"
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_28_28;
#line 54 "mode_constraint_robdd.m"
              else
#line 54 "mode_constraint_robdd.m"
                {
#line 54 "mode_constraint_robdd.m"
                  MR_Integer check_hlds__mode_constraint_robdd__V_39_39 = (MR_Integer) check_hlds__mode_constraint_robdd__V_35_35;
#line 54 "mode_constraint_robdd.m"
                  MR_Integer check_hlds__mode_constraint_robdd__V_40_40 = (MR_Integer) check_hlds__mode_constraint_robdd__V_27_27;

#line 54 "mode_constraint_robdd.m"
                  {
#line 54 "mode_constraint_robdd.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_constraint_robdd__HeadVar__1_1, check_hlds__mode_constraint_robdd__V_39_39, check_hlds__mode_constraint_robdd__V_40_40);
#line 54 "mode_constraint_robdd.m"
                    return;
                  }
#line 54 "mode_constraint_robdd.m"
                }
#line 54 "mode_constraint_robdd.m"
            }
#line 54 "mode_constraint_robdd.m"
          else
#line 54 "mode_constraint_robdd.m"
            if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4051 "check_hlds.mode_constraint_robdd.c"
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "mode_constraint_robdd.m"
            else
#line 4055 "check_hlds.mode_constraint_robdd.c"
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "mode_constraint_robdd.m"
        }
#line 54 "mode_constraint_robdd.m"
      else
#line 54 "mode_constraint_robdd.m"
        if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 54 "mode_constraint_robdd.m"
          {
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "mode_constraint_robdd.m"
            if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4070 "check_hlds.mode_constraint_robdd.c"
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "mode_constraint_robdd.m"
            else
#line 54 "mode_constraint_robdd.m"
              if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 54 "mode_constraint_robdd.m"
                {
#line 54 "mode_constraint_robdd.m"
                  MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));

#line 54 "mode_constraint_robdd.m"
                  {
#line 54 "mode_constraint_robdd.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__V_37_37)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)));
#line 54 "mode_constraint_robdd.m"
                    return;
                  }
#line 54 "mode_constraint_robdd.m"
                }
#line 54 "mode_constraint_robdd.m"
              else
#line 4092 "check_hlds.mode_constraint_robdd.c"
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "mode_constraint_robdd.m"
          }
#line 54 "mode_constraint_robdd.m"
        else
#line 54 "mode_constraint_robdd.m"
          {
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "mode_constraint_robdd.m"
            if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4105 "check_hlds.mode_constraint_robdd.c"
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "mode_constraint_robdd.m"
            else
#line 54 "mode_constraint_robdd.m"
              if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4111 "check_hlds.mode_constraint_robdd.c"
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "mode_constraint_robdd.m"
              else
#line 54 "mode_constraint_robdd.m"
                {
#line 54 "mode_constraint_robdd.m"
                  MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));

#line 54 "mode_constraint_robdd.m"
                  {
#line 54 "mode_constraint_robdd.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__V_38_38)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14)));
#line 54 "mode_constraint_robdd.m"
                    return;
                  }
#line 54 "mode_constraint_robdd.m"
                }
#line 54 "mode_constraint_robdd.m"
          }
#line 54 "mode_constraint_robdd.m"
  }
#line 54 "mode_constraint_robdd.m"
}

#line 54 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(
#line 54 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 54 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 54 "mode_constraint_robdd.m"
{
#line 54 "mode_constraint_robdd.m"
  {
#line 54 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 54 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_11 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 54 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_12 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 54 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_11 == check_hlds__mode_constraint_robdd__CastY_12);
#line 54 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 54 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 54 "mode_constraint_robdd.m"
    else
#line 54 "mode_constraint_robdd.m"
      if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 54 "mode_constraint_robdd.m"
        {
#line 54 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__TypeInfo_13_13;
#line 54 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_9_9;
#line 54 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_10_10;
#line 54 "mode_constraint_robdd.m"
          MR_Integer check_hlds__mode_constraint_robdd__V_17_17;
#line 54 "mode_constraint_robdd.m"
          MR_Integer check_hlds__mode_constraint_robdd__V_18_18;

#line 54 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 54 "mode_constraint_robdd.m"
          if (check_hlds__mode_constraint_robdd__succeeded)
#line 54 "mode_constraint_robdd.m"
            {
#line 54 "mode_constraint_robdd.m"
              check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "mode_constraint_robdd.m"
              check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 4191 "check_hlds.mode_constraint_robdd.c"
              check_hlds__mode_constraint_robdd__TypeInfo_13_13 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4];
#line 4193 "check_hlds.mode_constraint_robdd.c"
              {
#line 4195 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_13_13, ((MR_Box) (check_hlds__mode_constraint_robdd__V_7_7)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)));
              }
#line 54 "mode_constraint_robdd.m"
              if (check_hlds__mode_constraint_robdd__succeeded)
#line 54 "mode_constraint_robdd.m"
                {
#line 4202 "check_hlds.mode_constraint_robdd.c"
                  check_hlds__mode_constraint_robdd__V_17_17 = (MR_Integer) check_hlds__mode_constraint_robdd__V_8_8;
#line 4204 "check_hlds.mode_constraint_robdd.c"
                  check_hlds__mode_constraint_robdd__V_18_18 = (MR_Integer) check_hlds__mode_constraint_robdd__V_10_10;
#line 4206 "check_hlds.mode_constraint_robdd.c"
                  check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_17_17 == check_hlds__mode_constraint_robdd__V_18_18);
#line 54 "mode_constraint_robdd.m"
                }
#line 54 "mode_constraint_robdd.m"
            }
#line 54 "mode_constraint_robdd.m"
        }
#line 54 "mode_constraint_robdd.m"
      else
#line 54 "mode_constraint_robdd.m"
        if (((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 54 "mode_constraint_robdd.m"
          {
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__TypeInfo_15_15;
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_4_4;

#line 54 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 54 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 54 "mode_constraint_robdd.m"
              {
#line 54 "mode_constraint_robdd.m"
                check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 4235 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__TypeInfo_15_15 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4];
#line 4237 "check_hlds.mode_constraint_robdd.c"
                {
#line 4239 "check_hlds.mode_constraint_robdd.c"
                  return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_15_15, ((MR_Box) (check_hlds__mode_constraint_robdd__V_3_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)));
                }
#line 54 "mode_constraint_robdd.m"
              }
#line 54 "mode_constraint_robdd.m"
          }
#line 54 "mode_constraint_robdd.m"
        else
#line 54 "mode_constraint_robdd.m"
          {
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__TypeInfo_16_16;
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_6_6;

#line 54 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 54 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 54 "mode_constraint_robdd.m"
              {
#line 54 "mode_constraint_robdd.m"
                check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 4265 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__TypeInfo_16_16 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4];
#line 4267 "check_hlds.mode_constraint_robdd.c"
                {
#line 4269 "check_hlds.mode_constraint_robdd.c"
                  return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_16_16, ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6)));
                }
#line 54 "mode_constraint_robdd.m"
              }
#line 54 "mode_constraint_robdd.m"
          }
#line 54 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 54 "mode_constraint_robdd.m"
  }
#line 54 "mode_constraint_robdd.m"
}

#line 261 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0(
#line 261 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 261 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 261 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 261 "mode_constraint_robdd.m"
{
#line 261 "mode_constraint_robdd.m"
  {
#line 261 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 261 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_12 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 261 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_13 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 261 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_12 == check_hlds__mode_constraint_robdd__CastY_13);
#line 261 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 4307 "check_hlds.mode_constraint_robdd.c"
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "mode_constraint_robdd.m"
    else
#line 261 "mode_constraint_robdd.m"
      {
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 2)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_10_10;

#line 261 "mode_constraint_robdd.m"
        {
#line 261 "mode_constraint_robdd.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], &check_hlds__mode_constraint_robdd__V_10_10, ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_7_7)));
        }
#line 4333 "check_hlds.mode_constraint_robdd.c"
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_10_10 == (MR_Integer) 0);
#line 261 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 261 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 261 "mode_constraint_robdd.m"
          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_10_10;
#line 261 "mode_constraint_robdd.m"
        else
#line 261 "mode_constraint_robdd.m"
          {
#line 261 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_11_11;

#line 261 "mode_constraint_robdd.m"
            {
#line 261 "mode_constraint_robdd.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_constraint_robdd__V_11_11, check_hlds__mode_constraint_robdd__V_5_5, check_hlds__mode_constraint_robdd__V_8_8);
            }
#line 4353 "check_hlds.mode_constraint_robdd.c"
            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_11_11 == (MR_Integer) 0);
#line 261 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 261 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 261 "mode_constraint_robdd.m"
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_11_11;
#line 261 "mode_constraint_robdd.m"
            else
#line 261 "mode_constraint_robdd.m"
              {
#line 261 "mode_constraint_robdd.m"
                {
#line 261 "mode_constraint_robdd.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)));
#line 261 "mode_constraint_robdd.m"
                  return;
                }
#line 261 "mode_constraint_robdd.m"
              }
#line 261 "mode_constraint_robdd.m"
          }
#line 261 "mode_constraint_robdd.m"
      }
#line 261 "mode_constraint_robdd.m"
  }
#line 261 "mode_constraint_robdd.m"
}

#line 261 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0(
#line 261 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 261 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 261 "mode_constraint_robdd.m"
{
#line 261 "mode_constraint_robdd.m"
  {
#line 261 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 261 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_9 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 261 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_10 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 261 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_9 == check_hlds__mode_constraint_robdd__CastY_10);
#line 261 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 261 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 261 "mode_constraint_robdd.m"
    else
#line 261 "mode_constraint_robdd.m"
      {
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_13_13;
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));

#line 4426 "check_hlds.mode_constraint_robdd.c"
        {
#line 4428 "check_hlds.mode_constraint_robdd.c"
          check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], ((MR_Box) (check_hlds__mode_constraint_robdd__V_3_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6)));
        }
#line 261 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 261 "mode_constraint_robdd.m"
          {
#line 4435 "check_hlds.mode_constraint_robdd.c"
            {
#line 4437 "check_hlds.mode_constraint_robdd.c"
              check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__V_4_4, check_hlds__mode_constraint_robdd__V_7_7);
            }
#line 261 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 261 "mode_constraint_robdd.m"
              {
#line 4444 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__TypeInfo_13_13 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
#line 4446 "check_hlds.mode_constraint_robdd.c"
                {
#line 4448 "check_hlds.mode_constraint_robdd.c"
                  return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_13_13, ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8)));
                }
#line 261 "mode_constraint_robdd.m"
              }
#line 261 "mode_constraint_robdd.m"
          }
#line 261 "mode_constraint_robdd.m"
      }
#line 261 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 261 "mode_constraint_robdd.m"
  }
#line 261 "mode_constraint_robdd.m"
}

#line 150 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0(
#line 150 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 150 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 150 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 150 "mode_constraint_robdd.m"
{
#line 150 "mode_constraint_robdd.m"
  {
#line 150 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 150 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 150 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 150 "mode_constraint_robdd.m"
    {
#line 150 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[2], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
#line 150 "mode_constraint_robdd.m"
      return;
    }
#line 150 "mode_constraint_robdd.m"
  }
#line 150 "mode_constraint_robdd.m"
}

#line 150 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0(
#line 150 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 150 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 150 "mode_constraint_robdd.m"
{
#line 150 "mode_constraint_robdd.m"
  {
#line 150 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 150 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 150 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 150 "mode_constraint_robdd.m"
    {
#line 150 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[2], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
#line 150 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 150 "mode_constraint_robdd.m"
  }
#line 150 "mode_constraint_robdd.m"
}

#line 47 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0(
#line 47 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 47 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 47 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 47 "mode_constraint_robdd.m"
{
#line 47 "mode_constraint_robdd.m"
  {
#line 47 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 47 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 47 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 47 "mode_constraint_robdd.m"
    {
#line 47 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[8], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
#line 47 "mode_constraint_robdd.m"
      return;
    }
#line 47 "mode_constraint_robdd.m"
  }
#line 47 "mode_constraint_robdd.m"
}

#line 47 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0(
#line 47 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 47 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 47 "mode_constraint_robdd.m"
{
#line 47 "mode_constraint_robdd.m"
  {
#line 47 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 47 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 47 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 47 "mode_constraint_robdd.m"
    {
#line 47 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[8], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
#line 47 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 47 "mode_constraint_robdd.m"
  }
#line 47 "mode_constraint_robdd.m"
}

#line 210 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(
#line 210 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 210 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 210 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 210 "mode_constraint_robdd.m"
{
#line 210 "mode_constraint_robdd.m"
  {
#line 210 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 210 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 210 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 210 "mode_constraint_robdd.m"
    {
#line 210 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
#line 210 "mode_constraint_robdd.m"
      return;
    }
#line 210 "mode_constraint_robdd.m"
  }
#line 210 "mode_constraint_robdd.m"
}

#line 210 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(
#line 210 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 210 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 210 "mode_constraint_robdd.m"
{
#line 210 "mode_constraint_robdd.m"
  {
#line 210 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 210 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 210 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 210 "mode_constraint_robdd.m"
    {
#line 210 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
#line 210 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 210 "mode_constraint_robdd.m"
  }
#line 210 "mode_constraint_robdd.m"
}

#line 46 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0(
#line 46 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 46 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 46 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 46 "mode_constraint_robdd.m"
{
#line 46 "mode_constraint_robdd.m"
  {
#line 46 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 46 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 46 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 46 "mode_constraint_robdd.m"
    {
#line 46 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
#line 46 "mode_constraint_robdd.m"
      return;
    }
#line 46 "mode_constraint_robdd.m"
  }
#line 46 "mode_constraint_robdd.m"
}

#line 46 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0(
#line 46 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 46 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 46 "mode_constraint_robdd.m"
{
#line 46 "mode_constraint_robdd.m"
  {
#line 46 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 46 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 46 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 46 "mode_constraint_robdd.m"
    {
#line 46 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
#line 46 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 46 "mode_constraint_robdd.m"
  }
#line 46 "mode_constraint_robdd.m"
}

#line 177 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(
#line 177 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 177 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 177 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 177 "mode_constraint_robdd.m"
{
#line 177 "mode_constraint_robdd.m"
  {
#line 177 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 177 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_33 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 177 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_34 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 177 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_33 == check_hlds__mode_constraint_robdd__CastY_34);
#line 177 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 4736 "check_hlds.mode_constraint_robdd.c"
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "mode_constraint_robdd.m"
    else
#line 177 "mode_constraint_robdd.m"
      {
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 3)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 4)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 5)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 6)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 7)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 8)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 9)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 2)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 3)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 4)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 5)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 6)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 7)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 8)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 9)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_24_24;

#line 177 "mode_constraint_robdd.m"
        {
#line 177 "mode_constraint_robdd.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[3], &check_hlds__mode_constraint_robdd__V_24_24, ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14)));
        }
#line 4790 "check_hlds.mode_constraint_robdd.c"
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_24_24 == (MR_Integer) 0);
#line 177 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 177 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_24_24;
#line 177 "mode_constraint_robdd.m"
        else
#line 177 "mode_constraint_robdd.m"
          {
#line 177 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_25_25;

#line 177 "mode_constraint_robdd.m"
            {
#line 177 "mode_constraint_robdd.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3], &check_hlds__mode_constraint_robdd__V_25_25, ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_15_15)));
            }
#line 4810 "check_hlds.mode_constraint_robdd.c"
            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_25_25 == (MR_Integer) 0);
#line 177 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 177 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_25_25;
#line 177 "mode_constraint_robdd.m"
            else
#line 177 "mode_constraint_robdd.m"
              {
#line 177 "mode_constraint_robdd.m"
                MR_Word check_hlds__mode_constraint_robdd__V_26_26;

#line 177 "mode_constraint_robdd.m"
                {
#line 177 "mode_constraint_robdd.m"
                  hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_constraint_robdd__V_26_26, check_hlds__mode_constraint_robdd__V_6_6, check_hlds__mode_constraint_robdd__V_16_16);
                }
#line 4830 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_26_26 == (MR_Integer) 0);
#line 177 "mode_constraint_robdd.m"
                check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 177 "mode_constraint_robdd.m"
                if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                  *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_26_26;
#line 177 "mode_constraint_robdd.m"
                else
#line 177 "mode_constraint_robdd.m"
                  {
#line 177 "mode_constraint_robdd.m"
                    MR_Word check_hlds__mode_constraint_robdd__V_27_27;

#line 177 "mode_constraint_robdd.m"
                    {
#line 177 "mode_constraint_robdd.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], &check_hlds__mode_constraint_robdd__V_27_27, ((MR_Box) (check_hlds__mode_constraint_robdd__V_7_7)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_17_17)));
                    }
#line 4850 "check_hlds.mode_constraint_robdd.c"
                    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_27_27 == (MR_Integer) 0);
#line 177 "mode_constraint_robdd.m"
                    check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 177 "mode_constraint_robdd.m"
                    if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_27_27;
#line 177 "mode_constraint_robdd.m"
                    else
#line 177 "mode_constraint_robdd.m"
                      {
#line 177 "mode_constraint_robdd.m"
                        MR_Word check_hlds__mode_constraint_robdd__V_28_28;

#line 177 "mode_constraint_robdd.m"
                        {
#line 177 "mode_constraint_robdd.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4], &check_hlds__mode_constraint_robdd__V_28_28, ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_18_18)));
                        }
#line 4870 "check_hlds.mode_constraint_robdd.c"
                        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_28_28 == (MR_Integer) 0);
#line 177 "mode_constraint_robdd.m"
                        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 177 "mode_constraint_robdd.m"
                        if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_28_28;
#line 177 "mode_constraint_robdd.m"
                        else
#line 177 "mode_constraint_robdd.m"
                          {
#line 177 "mode_constraint_robdd.m"
                            MR_Word check_hlds__mode_constraint_robdd__V_29_29;

#line 177 "mode_constraint_robdd.m"
                            {
#line 177 "mode_constraint_robdd.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4], &check_hlds__mode_constraint_robdd__V_29_29, ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_19_19)));
                            }
#line 4890 "check_hlds.mode_constraint_robdd.c"
                            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_29_29 == (MR_Integer) 0);
#line 177 "mode_constraint_robdd.m"
                            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 177 "mode_constraint_robdd.m"
                            if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_29_29;
#line 177 "mode_constraint_robdd.m"
                            else
#line 177 "mode_constraint_robdd.m"
                              {
#line 177 "mode_constraint_robdd.m"
                                MR_Word check_hlds__mode_constraint_robdd__V_30_30;

#line 177 "mode_constraint_robdd.m"
                                {
#line 177 "mode_constraint_robdd.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], &check_hlds__mode_constraint_robdd__V_30_30, ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20)));
                                }
#line 4910 "check_hlds.mode_constraint_robdd.c"
                                check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_30_30 == (MR_Integer) 0);
#line 177 "mode_constraint_robdd.m"
                                check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 177 "mode_constraint_robdd.m"
                                if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                                  *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_30_30;
#line 177 "mode_constraint_robdd.m"
                                else
#line 177 "mode_constraint_robdd.m"
                                  {
#line 177 "mode_constraint_robdd.m"
                                    MR_Word check_hlds__mode_constraint_robdd__V_31_31;

#line 177 "mode_constraint_robdd.m"
                                    {
#line 177 "mode_constraint_robdd.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], &check_hlds__mode_constraint_robdd__V_31_31, ((MR_Box) (check_hlds__mode_constraint_robdd__V_11_11)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_21_21)));
                                    }
#line 4930 "check_hlds.mode_constraint_robdd.c"
                                    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_31_31 == (MR_Integer) 0);
#line 177 "mode_constraint_robdd.m"
                                    check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 177 "mode_constraint_robdd.m"
                                    if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                                      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_31_31;
#line 177 "mode_constraint_robdd.m"
                                    else
#line 177 "mode_constraint_robdd.m"
                                      {
#line 177 "mode_constraint_robdd.m"
                                        MR_Word check_hlds__mode_constraint_robdd__V_32_32;
#line 177 "mode_constraint_robdd.m"
                                        MR_Integer check_hlds__mode_constraint_robdd__V_45_45 = (MR_Integer) check_hlds__mode_constraint_robdd__V_12_12;
#line 177 "mode_constraint_robdd.m"
                                        MR_Integer check_hlds__mode_constraint_robdd__V_46_46 = (MR_Integer) check_hlds__mode_constraint_robdd__V_22_22;

#line 177 "mode_constraint_robdd.m"
                                        {
#line 177 "mode_constraint_robdd.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_constraint_robdd__V_32_32, check_hlds__mode_constraint_robdd__V_45_45, check_hlds__mode_constraint_robdd__V_46_46);
                                        }
#line 4954 "check_hlds.mode_constraint_robdd.c"
                                        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_32_32 == (MR_Integer) 0);
#line 177 "mode_constraint_robdd.m"
                                        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 177 "mode_constraint_robdd.m"
                                        if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                                          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_32_32;
#line 177 "mode_constraint_robdd.m"
                                        else
#line 177 "mode_constraint_robdd.m"
                                          {
#line 177 "mode_constraint_robdd.m"
                                            {
#line 177 "mode_constraint_robdd.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23)));
#line 177 "mode_constraint_robdd.m"
                                              return;
                                            }
#line 177 "mode_constraint_robdd.m"
                                          }
#line 177 "mode_constraint_robdd.m"
                                      }
#line 177 "mode_constraint_robdd.m"
                                  }
#line 177 "mode_constraint_robdd.m"
                              }
#line 177 "mode_constraint_robdd.m"
                          }
#line 177 "mode_constraint_robdd.m"
                      }
#line 177 "mode_constraint_robdd.m"
                  }
#line 177 "mode_constraint_robdd.m"
              }
#line 177 "mode_constraint_robdd.m"
          }
#line 177 "mode_constraint_robdd.m"
      }
#line 177 "mode_constraint_robdd.m"
  }
#line 177 "mode_constraint_robdd.m"
}

#line 177 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(
#line 177 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 177 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 177 "mode_constraint_robdd.m"
{
#line 177 "mode_constraint_robdd.m"
  {
#line 177 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 177 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_23 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 177 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_24 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 177 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_23 == check_hlds__mode_constraint_robdd__CastY_24);
#line 177 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 177 "mode_constraint_robdd.m"
    else
#line 177 "mode_constraint_robdd.m"
      {
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_26_26;
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_28_28;
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_29_29;
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_30_30;
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_31_31;
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_32_32;
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_33_33;
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 3)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 4)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 5)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 6)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 7)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 8)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 9)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 3)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 4)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 5)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 6)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 7)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 8)));
#line 177 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 9)));

#line 5081 "check_hlds.mode_constraint_robdd.c"
        {
#line 5083 "check_hlds.mode_constraint_robdd.c"
          check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[3], ((MR_Box) (check_hlds__mode_constraint_robdd__V_3_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13)));
        }
#line 177 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
          {
#line 5090 "check_hlds.mode_constraint_robdd.c"
            check_hlds__mode_constraint_robdd__TypeInfo_26_26 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3];
#line 5092 "check_hlds.mode_constraint_robdd.c"
            {
#line 5094 "check_hlds.mode_constraint_robdd.c"
              check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_26_26, ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14)));
            }
#line 177 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
              {
#line 5101 "check_hlds.mode_constraint_robdd.c"
                {
#line 5103 "check_hlds.mode_constraint_robdd.c"
                  check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__V_5_5, check_hlds__mode_constraint_robdd__V_15_15);
                }
#line 177 "mode_constraint_robdd.m"
                if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                  {
#line 5110 "check_hlds.mode_constraint_robdd.c"
                    check_hlds__mode_constraint_robdd__TypeInfo_28_28 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
#line 5112 "check_hlds.mode_constraint_robdd.c"
                    {
#line 5114 "check_hlds.mode_constraint_robdd.c"
                      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_28_28, ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_16_16)));
                    }
#line 177 "mode_constraint_robdd.m"
                    if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                      {
#line 5121 "check_hlds.mode_constraint_robdd.c"
                        check_hlds__mode_constraint_robdd__TypeInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4];
#line 5123 "check_hlds.mode_constraint_robdd.c"
                        {
#line 5125 "check_hlds.mode_constraint_robdd.c"
                          check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_29_29, ((MR_Box) (check_hlds__mode_constraint_robdd__V_7_7)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_17_17)));
                        }
#line 177 "mode_constraint_robdd.m"
                        if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                          {
#line 5132 "check_hlds.mode_constraint_robdd.c"
                            check_hlds__mode_constraint_robdd__TypeInfo_30_30 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4];
#line 5134 "check_hlds.mode_constraint_robdd.c"
                            {
#line 5136 "check_hlds.mode_constraint_robdd.c"
                              check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_30_30, ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_18_18)));
                            }
#line 177 "mode_constraint_robdd.m"
                            if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                              {
#line 5143 "check_hlds.mode_constraint_robdd.c"
                                check_hlds__mode_constraint_robdd__TypeInfo_31_31 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6];
#line 5145 "check_hlds.mode_constraint_robdd.c"
                                {
#line 5147 "check_hlds.mode_constraint_robdd.c"
                                  check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_31_31, ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_19_19)));
                                }
#line 177 "mode_constraint_robdd.m"
                                if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                                  {
#line 5154 "check_hlds.mode_constraint_robdd.c"
                                    check_hlds__mode_constraint_robdd__TypeInfo_32_32 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
#line 5156 "check_hlds.mode_constraint_robdd.c"
                                    {
#line 5158 "check_hlds.mode_constraint_robdd.c"
                                      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_32_32, ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20)));
                                    }
#line 177 "mode_constraint_robdd.m"
                                    if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                                      {
#line 5165 "check_hlds.mode_constraint_robdd.c"
                                        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_11_11 == check_hlds__mode_constraint_robdd__V_21_21);
#line 177 "mode_constraint_robdd.m"
                                        if (check_hlds__mode_constraint_robdd__succeeded)
#line 177 "mode_constraint_robdd.m"
                                          {
#line 5171 "check_hlds.mode_constraint_robdd.c"
                                            check_hlds__mode_constraint_robdd__TypeInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[5];
#line 5173 "check_hlds.mode_constraint_robdd.c"
                                            {
#line 5175 "check_hlds.mode_constraint_robdd.c"
                                              return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_33_33, ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_22_22)));
                                            }
#line 177 "mode_constraint_robdd.m"
                                          }
#line 177 "mode_constraint_robdd.m"
                                      }
#line 177 "mode_constraint_robdd.m"
                                  }
#line 177 "mode_constraint_robdd.m"
                              }
#line 177 "mode_constraint_robdd.m"
                          }
#line 177 "mode_constraint_robdd.m"
                      }
#line 177 "mode_constraint_robdd.m"
                  }
#line 177 "mode_constraint_robdd.m"
              }
#line 177 "mode_constraint_robdd.m"
          }
#line 177 "mode_constraint_robdd.m"
      }
#line 177 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 177 "mode_constraint_robdd.m"
  }
#line 177 "mode_constraint_robdd.m"
}

#line 45 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0(
#line 45 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 45 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 45 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 45 "mode_constraint_robdd.m"
{
#line 45 "mode_constraint_robdd.m"
  {
#line 45 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 45 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 45 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 45 "mode_constraint_robdd.m"
    {
#line 45 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[7], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
#line 45 "mode_constraint_robdd.m"
      return;
    }
#line 45 "mode_constraint_robdd.m"
  }
#line 45 "mode_constraint_robdd.m"
}

#line 45 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0(
#line 45 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 45 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 45 "mode_constraint_robdd.m"
{
#line 45 "mode_constraint_robdd.m"
  {
#line 45 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 45 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 45 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 45 "mode_constraint_robdd.m"
    {
#line 45 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[7], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
#line 45 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 45 "mode_constraint_robdd.m"
  }
#line 45 "mode_constraint_robdd.m"
}

#line 174 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0(
#line 174 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1)
#line 174 "mode_constraint_robdd.m"
{
#line 174 "mode_constraint_robdd.m"
  {
#line 174 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 174 "mode_constraint_robdd.m"
    {
#line 174 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(check_hlds__mode_constraint_robdd__HeadVar__1_1);
#line 174 "mode_constraint_robdd.m"
      return;
    }
#line 174 "mode_constraint_robdd.m"
  }
#line 174 "mode_constraint_robdd.m"
}

#line 174 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0(void)
#line 174 "mode_constraint_robdd.m"
{
#line 174 "mode_constraint_robdd.m"
  {
#line 174 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 174 "mode_constraint_robdd.m"
    {
#line 174 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 174 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 174 "mode_constraint_robdd.m"
  }
#line 174 "mode_constraint_robdd.m"
}

#line 81 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0(
#line 81 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 81 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 81 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 81 "mode_constraint_robdd.m"
{
#line 81 "mode_constraint_robdd.m"
  {
#line 81 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 81 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 81 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 81 "mode_constraint_robdd.m"
    {
#line 81 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
#line 81 "mode_constraint_robdd.m"
      return;
    }
#line 81 "mode_constraint_robdd.m"
  }
#line 81 "mode_constraint_robdd.m"
}

#line 81 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0(
#line 81 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 81 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 81 "mode_constraint_robdd.m"
{
#line 81 "mode_constraint_robdd.m"
  {
#line 81 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 81 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 81 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 81 "mode_constraint_robdd.m"
    {
#line 81 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
#line 81 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 81 "mode_constraint_robdd.m"
  }
#line 81 "mode_constraint_robdd.m"
}

#line 410 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1(
#line 410 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 410 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 410 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 410 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 410 "mode_constraint_robdd.m"
{
#line 410 "mode_constraint_robdd.m"
  {
#line 410 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
#line 410 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__4_27;

#line 410 "mode_constraint_robdd.m"
    {
#line 410 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), &check_hlds__mode_constraint_robdd__conv0_HeadVar__4_27);
    }
#line 410 "mode_constraint_robdd.m"
    *check_hlds__mode_constraint_robdd__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__4_27));
#line 410 "mode_constraint_robdd.m"
  }
#line 410 "mode_constraint_robdd.m"
}

#line 152 "mode_constraint_robdd.m"
MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0(
#line 152 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Constraint_4,
#line 152 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_5)
#line 152 "mode_constraint_robdd.m"
{
#line 430 "mode_constraint_robdd.m"
  {
#line 430 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 430 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ProdVarsMap_6;
#line 430 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarsEntailed_7;
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21;

#line 409 "mode_constraint_robdd.m"
    {
#line 409 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_21_21 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__Constraint_4);
    }
#line 409 "mode_constraint_robdd.m"
    {
#line 409 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_20_20 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__V_21_21);
    }
#line 409 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 409 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 409 "mode_constraint_robdd.m"
      {
#line 409 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__VarsEntailed_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__V_20_20, (MR_Integer) 0)));
#line 410 "mode_constraint_robdd.m"
        {
#line 410 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_22_22;
#line 410 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 410 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 410 "mode_constraint_robdd.m"
          MR_Box check_hlds__mode_constraint_robdd__conv1_ProdVarsMap_6;

#line 410 "mode_constraint_robdd.m"
          {
#line 410 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 410 "mode_constraint_robdd.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_22_22, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[2]));
#line 410 "mode_constraint_robdd.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_22_22, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1));
#line 410 "mode_constraint_robdd.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 410 "mode_constraint_robdd.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_22_22, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__MCI_5));
#line 410 "mode_constraint_robdd.m"
          }
#line 410 "mode_constraint_robdd.m"
          {
#line 410 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_23_23 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[1], check_hlds__mode_constraint_robdd__VarsEntailed_7);
          }
#line 410 "mode_constraint_robdd.m"
          {
#line 410 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_24_24 = mercury__map__init_0_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6]);
          }
#line 410 "mode_constraint_robdd.m"
          {
#line 410 "mode_constraint_robdd.m"
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[2], check_hlds__mode_constraint_robdd__V_22_22, check_hlds__mode_constraint_robdd__V_23_23, ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24)), &check_hlds__mode_constraint_robdd__conv1_ProdVarsMap_6);
          }
#line 410 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__ProdVarsMap_6 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_ProdVarsMap_6);
#line 410 "mode_constraint_robdd.m"
        }
#line 409 "mode_constraint_robdd.m"
      }
#line 409 "mode_constraint_robdd.m"
    else
#line 431 "mode_constraint_robdd.m"
      {
#line 431 "mode_constraint_robdd.m"
        {
#line 431 "mode_constraint_robdd.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_constraint_robdd", (MR_String) "function \140check_hlds.mode_constraint_robdd.atomic_prodvars_map\'/2", (MR_String) "zero constraint");
        }
#line 431 "mode_constraint_robdd.m"
      }
#line 430 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__ProdVarsMap_6;
#line 430 "mode_constraint_robdd.m"
  }
#line 152 "mode_constraint_robdd.m"
}

#line 391 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1(
#line 391 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 391 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 391 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 391 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 391 "mode_constraint_robdd.m"
{
#line 391 "mode_constraint_robdd.m"
  {
#line 391 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

#line 391 "mode_constraint_robdd.m"
    {
#line 391 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
#line 391 "mode_constraint_robdd.m"
      return;
    }
#line 391 "mode_constraint_robdd.m"
  }
#line 391 "mode_constraint_robdd.m"
}

#line 144 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0(
#line 144 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Constraint_7,
#line 144 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__ProgVarSet_8,
#line 144 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_9,
#line 144 "mode_constraint_robdd.m"
  MR_String check_hlds__mode_constraint_robdd__FileName_10)
#line 144 "mode_constraint_robdd.m"
{
#line 389 "mode_constraint_robdd.m"
  {
#line 389 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 389 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58;
#line 389 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 1)));
#line 389 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__P_13;
#line 389 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_40_40;
#line 390 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 0)));
#line 390 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 2)));
#line 390 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 3)));
#line 390 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 4)));
#line 390 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 5)));
#line 390 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 6)));
#line 390 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 7)));
#line 390 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 8)));
#line 390 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 9)));

#line 391 "mode_constraint_robdd.m"
    {
#line 391 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__P_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 391 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_7[0]));
#line 391 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1));
#line 391 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 391 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__ProgVarSet_8));
#line 391 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__VarMap_12));
#line 391 "mode_constraint_robdd.m"
    }
#line 5601 "check_hlds.mode_constraint_robdd.c"
    check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 404 "mode_constraint_robdd.m"
    {
#line 404 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_40_40 = mode_robdd__tfeirn__robdd_1_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58, check_hlds__mode_constraint_robdd__Constraint_7);
    }
#line 404 "mode_constraint_robdd.m"
    {
#line 404 "mode_constraint_robdd.m"
      mercury__robdd__robdd_to_dot_5_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58, check_hlds__mode_constraint_robdd__V_40_40, check_hlds__mode_constraint_robdd__P_13, check_hlds__mode_constraint_robdd__FileName_10);
#line 404 "mode_constraint_robdd.m"
      return;
    }
#line 389 "mode_constraint_robdd.m"
  }
#line 144 "mode_constraint_robdd.m"
}

#line 132 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_p_0(
#line 132 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
#line 132 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__ForwardGoalPathMap_6,
#line 132 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10,
#line 132 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_11)
#line 132 "mode_constraint_robdd.m"
{
#line 345 "mode_constraint_robdd.m"
  {
#line 345 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 9)));
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap_9;
#line 346 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 0)));
#line 346 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 1)));
#line 346 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 2)));
#line 346 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 3)));
#line 346 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 4)));
#line 346 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 5)));
#line 346 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 6)));
#line 346 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 7)));
#line 346 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 8)));
#line 349 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22;
#line 349 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 349 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 349 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25;
#line 349 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;
#line 349 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;
#line 349 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 349 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29;
#line 349 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30;
#line 349 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31;

#line 347 "mode_constraint_robdd.m"
    {
#line 347 "mode_constraint_robdd.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0], ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__ForwardGoalPathMap_6)), check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap0_8, &check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap_9);
    }
#line 349 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 0)));
#line 349 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 1)));
#line 349 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 2)));
#line 349 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 3)));
#line 349 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 4)));
#line 349 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 5)));
#line 349 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 6)));
#line 349 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 7)));
#line 349 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 8)));
#line 349 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 9)));
#line 349 "mode_constraint_robdd.m"
    {
#line 349 "mode_constraint_robdd.m"
      MR_Word base;
#line 349 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 349 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_11 = base;
#line 349 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_22_22));
#line 349 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23));
#line 349 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24));
#line 349 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_25_25));
#line 349 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_26_26));
#line 349 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_27_27));
#line 349 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_28_28));
#line 349 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_29_29));
#line 349 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_30_30));
#line 349 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap_9));
#line 349 "mode_constraint_robdd.m"
    }
#line 345 "mode_constraint_robdd.m"
  }
#line 132 "mode_constraint_robdd.m"
}

#line 129 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_p_0(
#line 129 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_4,
#line 129 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
#line 129 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__ForwardGoalPathMap_6)
#line 129 "mode_constraint_robdd.m"
{
#line 342 "mode_constraint_robdd.m"
  {
#line 342 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 342 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));
#line 343 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
#line 343 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
#line 343 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
#line 343 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
#line 343 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
#line 343 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
#line 343 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
#line 343 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
#line 343 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
#line 343 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_6;

#line 343 "mode_constraint_robdd.m"
    {
#line 343 "mode_constraint_robdd.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0], check_hlds__mode_constraint_robdd__V_7_7, ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)), &check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_6);
    }
#line 343 "mode_constraint_robdd.m"
    *check_hlds__mode_constraint_robdd__ForwardGoalPathMap_6 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_6);
#line 342 "mode_constraint_robdd.m"
  }
#line 129 "mode_constraint_robdd.m"
}

#line 126 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__get_forward_goal_path_map_2_p_0(
#line 126 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_3,
#line 126 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__ForwardGoalPathMap_4)
#line 126 "mode_constraint_robdd.m"
{
#line 339 "mode_constraint_robdd.m"
  {
#line 339 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 9)));
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 2)));
#line 340 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 0)));
#line 340 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 1)));
#line 340 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 3)));
#line 340 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 4)));
#line 340 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 5)));
#line 340 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 6)));
#line 340 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 7)));
#line 340 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 8)));
#line 340 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_4;

#line 340 "mode_constraint_robdd.m"
    {
#line 340 "mode_constraint_robdd.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0], check_hlds__mode_constraint_robdd__V_5_5, ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)), &check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_4);
    }
#line 340 "mode_constraint_robdd.m"
    *check_hlds__mode_constraint_robdd__ForwardGoalPathMap_4 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_4);
#line 339 "mode_constraint_robdd.m"
  }
#line 126 "mode_constraint_robdd.m"
}

#line 124 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__using_simple_mode_constraints_1_p_0(
#line 124 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_2)
#line 124 "mode_constraint_robdd.m"
{
#line 336 "mode_constraint_robdd.m"
  {
#line 336 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 336 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 8)));
#line 337 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 0)));
#line 337 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 1)));
#line 337 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 2)));
#line 337 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 3)));
#line 337 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 4)));
#line 337 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 5)));
#line 337 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 6)));
#line 337 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 7)));
#line 337 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 9)));

#line 337 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_3_3 == (MR_Integer) 1);
#line 336 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 336 "mode_constraint_robdd.m"
  }
#line 124 "mode_constraint_robdd.m"
}

#line 121 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__unset_simple_mode_constraints_2_p_0(
#line 121 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4,
#line 121 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_5)
#line 121 "mode_constraint_robdd.m"
{
#line 333 "mode_constraint_robdd.m"
  {
#line 333 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 334 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 0)));
#line 334 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 1)));
#line 334 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 2)));
#line 334 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 3)));
#line 334 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 4)));
#line 334 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 5)));
#line 334 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 6)));
#line 334 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 7)));
#line 334 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 9)));
#line 334 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 8)));

#line 334 "mode_constraint_robdd.m"
    {
#line 334 "mode_constraint_robdd.m"
      MR_Word base;
#line 334 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 334 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_5 = base;
#line 334 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8));
#line 334 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9));
#line 334 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10));
#line 334 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_11_11));
#line 334 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12));
#line 334 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 334 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14));
#line 334 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_15_15));
#line 334 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 334 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_17_17));
#line 334 "mode_constraint_robdd.m"
    }
#line 333 "mode_constraint_robdd.m"
  }
#line 121 "mode_constraint_robdd.m"
}

#line 118 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__set_simple_mode_constraints_2_p_0(
#line 118 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4,
#line 118 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_5)
#line 118 "mode_constraint_robdd.m"
{
#line 330 "mode_constraint_robdd.m"
  {
#line 330 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 331 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 0)));
#line 331 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 1)));
#line 331 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 2)));
#line 331 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 3)));
#line 331 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 4)));
#line 331 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 5)));
#line 331 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 6)));
#line 331 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 7)));
#line 331 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 9)));
#line 331 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 8)));

#line 331 "mode_constraint_robdd.m"
    {
#line 331 "mode_constraint_robdd.m"
      MR_Word base;
#line 331 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 331 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_5 = base;
#line 331 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8));
#line 331 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9));
#line 331 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10));
#line 331 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_11_11));
#line 331 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12));
#line 331 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 331 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14));
#line 331 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_15_15));
#line 331 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
#line 331 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_17_17));
#line 331 "mode_constraint_robdd.m"
    }
#line 330 "mode_constraint_robdd.m"
  }
#line 118 "mode_constraint_robdd.m"
}

#line 321 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1(
#line 321 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg)
#line 321 "mode_constraint_robdd.m"
{
#line 321 "mode_constraint_robdd.m"
  {
#line 321 "mode_constraint_robdd.m"
    struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s * check_hlds__mode_constraint_robdd__env_ptr = (struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s *) check_hlds__mode_constraint_robdd__env_ptr_arg;

#line 321 "mode_constraint_robdd.m"
    *((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_HeadVar__6_20));
#line 321 "mode_constraint_robdd.m"
    {
#line 321 "mode_constraint_robdd.m"
      ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont)((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr);
#line 321 "mode_constraint_robdd.m"
      return;
    }
#line 321 "mode_constraint_robdd.m"
  }
#line 321 "mode_constraint_robdd.m"
}

#line 321 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2(
#line 321 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 321 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 321 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__cont,
#line 321 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__cont_env_ptr)
#line 321 "mode_constraint_robdd.m"
{
#line 321 "mode_constraint_robdd.m"
  {
#line 321 "mode_constraint_robdd.m"
    struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s check_hlds__mode_constraint_robdd__env;

#line 321 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1 = check_hlds__mode_constraint_robdd__wrapper_arg_1;
#line 321 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont = check_hlds__mode_constraint_robdd__cont;
#line 321 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr = check_hlds__mode_constraint_robdd__cont_env_ptr;
#line 321 "mode_constraint_robdd.m"
    {
#line 321 "mode_constraint_robdd.m"
      MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

#line 321 "mode_constraint_robdd.m"
      {
#line 321 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 7))), &(check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_HeadVar__6_20, check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1, &check_hlds__mode_constraint_robdd__env);
      }
#line 321 "mode_constraint_robdd.m"
    }
#line 321 "mode_constraint_robdd.m"
  }
#line 321 "mode_constraint_robdd.m"
}

#line 115 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0(
#line 115 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Constraint0_5,
#line 115 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__Constraint_6,
#line 115 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17,
#line 115 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_18)
#line 115 "mode_constraint_robdd.m"
{
#line 315 "mode_constraint_robdd.m"
  {
#line 315 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 315 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 1)));
#line 315 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 3)));
#line 315 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 2)));
#line 315 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Keys_11;
#line 315 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Constraint1_12;
#line 315 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__InputNodes_16;
#line 315 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19;
#line 315 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 315 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_60_60;
#line 316 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 0)));
#line 316 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 4)));
#line 316 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 5)));
#line 316 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 6)));
#line 316 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 7)));
#line 316 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 8)));
#line 316 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 9)));
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_53_53;
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_54_54;
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_55_55;
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_56_56;
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_57_57;
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_58_58;
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_61_61;
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_62_62;
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_59_59;

#line 319 "mode_constraint_robdd.m"
    {
#line 319 "mode_constraint_robdd.m"
      mercury__bimap__ordinates_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__VarMap_8, &check_hlds__mode_constraint_robdd__Keys_11);
    }
#line 320 "mode_constraint_robdd.m"
    {
#line 320 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__Constraint1_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__Constraint0_5);
    }
#line 321 "mode_constraint_robdd.m"
    {
#line 321 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 321 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_6[0]));
#line 321 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2));
#line 321 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 321 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__VarMap_8));
#line 321 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_9));
#line 321 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_10));
#line 321 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Keys_11));
#line 321 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Constraint1_12));
#line 321 "mode_constraint_robdd.m"
    }
#line 321 "mode_constraint_robdd.m"
    {
#line 321 "mode_constraint_robdd.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], check_hlds__mode_constraint_robdd__V_19_19, &check_hlds__mode_constraint_robdd__InputNodes_16);
    }
#line 327 "mode_constraint_robdd.m"
    {
#line 327 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_23_23 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__InputNodes_16);
    }
#line 327 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 0)));
#line 327 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 1)));
#line 327 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 2)));
#line 327 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 3)));
#line 327 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 4)));
#line 327 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 5)));
#line 327 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 6)));
#line 327 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 7)));
#line 327 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 8)));
#line 327 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 9)));
#line 327 "mode_constraint_robdd.m"
    {
#line 327 "mode_constraint_robdd.m"
      MR_Word base;
#line 327 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 327 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_18 = base;
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_53_53));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_54_54));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_55_55));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_56_56));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_57_57));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_58_58));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_60_60));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_61_61));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_62_62));
#line 327 "mode_constraint_robdd.m"
    }
#line 328 "mode_constraint_robdd.m"
    {
#line 328 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__Constraint_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_constraint_robdd__V_60_60, check_hlds__mode_constraint_robdd__Constraint0_5);
    }
#line 315 "mode_constraint_robdd.m"
  }
#line 115 "mode_constraint_robdd.m"
}

#line 312 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4(
#line 312 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 312 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 312 "mode_constraint_robdd.m"
{
#line 312 "mode_constraint_robdd.m"
  {
#line 312 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 312 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
#line 312 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__conv2_HeadVar__4_56;

#line 312 "mode_constraint_robdd.m"
    {
#line 312 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv2_HeadVar__4_56 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 312 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv2_HeadVar__4_56));
#line 312 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 312 "mode_constraint_robdd.m"
  }
#line 312 "mode_constraint_robdd.m"
}

#line 308 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3(
#line 308 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 308 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 308 "mode_constraint_robdd.m"
{
#line 308 "mode_constraint_robdd.m"
  {
#line 308 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 308 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
#line 308 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__conv1_HeadVar__3_63;

#line 308 "mode_constraint_robdd.m"
    {
#line 308 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv1_HeadVar__3_63 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 308 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv1_HeadVar__3_63));
#line 308 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 308 "mode_constraint_robdd.m"
  }
#line 308 "mode_constraint_robdd.m"
}

#line 309 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2(
#line 309 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 309 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 309 "mode_constraint_robdd.m"
{
#line 309 "mode_constraint_robdd.m"
  {
#line 309 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 309 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

#line 309 "mode_constraint_robdd.m"
    {
#line 309 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 309 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 309 "mode_constraint_robdd.m"
  }
#line 309 "mode_constraint_robdd.m"
}

#line 308 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1(
#line 308 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 308 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 308 "mode_constraint_robdd.m"
{
#line 308 "mode_constraint_robdd.m"
  {
#line 308 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 308 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
#line 308 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__2_60;

#line 308 "mode_constraint_robdd.m"
    {
#line 308 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv0_HeadVar__2_60 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__1_1_f_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 308 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__2_60));
#line 308 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 308 "mode_constraint_robdd.m"
  }
#line 308 "mode_constraint_robdd.m"
}

#line 109 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0(
#line 109 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_4,
#line 109 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
#line 109 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__Vars_6)
#line 109 "mode_constraint_robdd.m"
{
#line 304 "mode_constraint_robdd.m"
  {
#line 304 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MinVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MaxVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12;
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14;
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15;
#line 305 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
#line 305 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
#line 305 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
#line 305 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
#line 305 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
#line 305 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
#line 305 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));

#line 309 "mode_constraint_robdd.m"
    {
#line 309 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[0]));
#line 309 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2));
#line 309 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 309 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5));
#line 309 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__MinVars_7));
#line 309 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__MaxVars_8));
#line 309 "mode_constraint_robdd.m"
    }
#line 308 "mode_constraint_robdd.m"
    {
#line 308 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 308 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_14_14, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_3[1]));
#line 308 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_14_14, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3));
#line 308 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 308 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_14_14, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_15_15));
#line 308 "mode_constraint_robdd.m"
    }
#line 312 "mode_constraint_robdd.m"
    {
#line 312 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 312 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_12_12, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[1]));
#line 312 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_12_12, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4));
#line 312 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 312 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_12_12, 3) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_2[6]));
#line 312 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_12_12, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14));
#line 312 "mode_constraint_robdd.m"
    }
#line 308 "mode_constraint_robdd.m"
    {
#line 308 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__Vars_6 = check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(check_hlds__mode_constraint_robdd__V_12_12, check_hlds__mode_constraint_robdd__VarSet_9);
    }
#line 304 "mode_constraint_robdd.m"
  }
#line 109 "mode_constraint_robdd.m"
}

#line 106 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_p_0(
#line 106 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_4,
#line 106 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9,
#line 106 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_10)
#line 106 "mode_constraint_robdd.m"
{
#line 298 "mode_constraint_robdd.m"
  {
#line 298 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 298 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Threshold_6;
#line 298 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MaxVars0_7;
#line 298 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MaxVars_8;
#line 298 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13;
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14;
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15;
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16;
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17;
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18;
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19;
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21;
#line 302 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22;
#line 302 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 302 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 302 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25;
#line 302 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;
#line 302 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 302 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29;
#line 302 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30;
#line 302 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31;
#line 302 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;

#line 276 "mode_constraint_robdd.m"
    {
#line 276 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__Threshold_6 = mercury__varset__max_var_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__VarSet_35);
    }
#line 300 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 300 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 300 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 300 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 300 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 300 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__MaxVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 300 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 300 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 300 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 300 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 301 "mode_constraint_robdd.m"
    {
#line 301 "mode_constraint_robdd.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Threshold_6)), check_hlds__mode_constraint_robdd__MaxVars0_7, &check_hlds__mode_constraint_robdd__MaxVars_8);
    }
#line 302 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 302 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 302 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 302 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 302 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 302 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 302 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 302 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 302 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 302 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 302 "mode_constraint_robdd.m"
    {
#line 302 "mode_constraint_robdd.m"
      MR_Word base;
#line 302 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_10 = base;
#line 302 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_22_22));
#line 302 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23));
#line 302 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24));
#line 302 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_25_25));
#line 302 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_26_26));
#line 302 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__MaxVars_8));
#line 302 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_28_28));
#line 302 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_29_29));
#line 302 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_30_30));
#line 302 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_31_31));
#line 302 "mode_constraint_robdd.m"
    }
#line 298 "mode_constraint_robdd.m"
  }
#line 106 "mode_constraint_robdd.m"
}

#line 103 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_p_0(
#line 103 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_4,
#line 103 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9,
#line 103 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_10)
#line 103 "mode_constraint_robdd.m"
{
#line 292 "mode_constraint_robdd.m"
  {
#line 292 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 292 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Threshold_6;
#line 292 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MinVars0_7;
#line 292 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MinVars_8;
#line 292 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 294 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13;
#line 294 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14;
#line 294 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15;
#line 294 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16;
#line 294 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17;
#line 294 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18;
#line 294 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19;
#line 294 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 294 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21;
#line 296 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22;
#line 296 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 296 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 296 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25;
#line 296 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;
#line 296 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 296 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29;
#line 296 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30;
#line 296 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31;
#line 296 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;

#line 276 "mode_constraint_robdd.m"
    {
#line 276 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__Threshold_6 = mercury__varset__max_var_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__VarSet_35);
    }
#line 294 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 294 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 294 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 294 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 294 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__MinVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 294 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 294 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 294 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 294 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 294 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 295 "mode_constraint_robdd.m"
    {
#line 295 "mode_constraint_robdd.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Threshold_6)), check_hlds__mode_constraint_robdd__MinVars0_7, &check_hlds__mode_constraint_robdd__MinVars_8);
    }
#line 296 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 296 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 296 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 296 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 296 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 296 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 296 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 296 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 296 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 296 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 296 "mode_constraint_robdd.m"
    {
#line 296 "mode_constraint_robdd.m"
      MR_Word base;
#line 296 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 296 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_10 = base;
#line 296 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_22_22));
#line 296 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23));
#line 296 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24));
#line 296 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_25_25));
#line 296 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__MinVars_8));
#line 296 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_27_27));
#line 296 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_28_28));
#line 296 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_29_29));
#line 296 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_30_30));
#line 296 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_31_31));
#line 296 "mode_constraint_robdd.m"
    }
#line 292 "mode_constraint_robdd.m"
  }
#line 103 "mode_constraint_robdd.m"
}

#line 283 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1(
#line 283 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 283 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 283 "mode_constraint_robdd.m"
{
#line 283 "mode_constraint_robdd.m"
  {
#line 283 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 283 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

#line 283 "mode_constraint_robdd.m"
    {
#line 283 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 283 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 283 "mode_constraint_robdd.m"
  }
#line 283 "mode_constraint_robdd.m"
}

#line 101 "mode_constraint_robdd.m"
MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0(
#line 101 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__P0_5,
#line 101 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_6,
#line 101 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__M_7)
#line 101 "mode_constraint_robdd.m"
{
#line 282 "mode_constraint_robdd.m"
  {
#line 282 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 282 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_4;
#line 282 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__P_8;
#line 282 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13;

#line 282 "mode_constraint_robdd.m"
    {
#line 282 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_13_13 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__M_7);
    }
#line 283 "mode_constraint_robdd.m"
    {
#line 283 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__P_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 283 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_3[0]));
#line 283 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1));
#line 283 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 283 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__P0_5));
#line 283 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__MCI_6));
#line 283 "mode_constraint_robdd.m"
    }
#line 282 "mode_constraint_robdd.m"
    {
#line 282 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_102_105_108_116_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_constraint_robdd__P_8, check_hlds__mode_constraint_robdd__V_13_13);
    }
#line 282 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__4_4;
#line 282 "mode_constraint_robdd.m"
  }
#line 101 "mode_constraint_robdd.m"
}

#line 97 "mode_constraint_robdd.m"
MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__restrict_threshold_2_f_0(
#line 97 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 97 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Constraint_5)
#line 97 "mode_constraint_robdd.m"
{
#line 279 "mode_constraint_robdd.m"
  {
#line 279 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3;
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Threshold_4 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_6_6;

#line 280 "mode_constraint_robdd.m"
    {
#line 280 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_6_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__Constraint_5);
    }
#line 279 "mode_constraint_robdd.m"
    {
#line 279 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_116_104_114_101_115_104_111_108_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_constraint_robdd__Threshold_4, check_hlds__mode_constraint_robdd__V_6_6);
    }
#line 279 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__3_3;
#line 279 "mode_constraint_robdd.m"
  }
#line 97 "mode_constraint_robdd.m"
}

#line 95 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__save_threshold_2_p_0(
#line 95 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_3,
#line 95 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 95 "mode_constraint_robdd.m"
{
#line 276 "mode_constraint_robdd.m"
  {
#line 276 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 276 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 0)));
#line 276 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_5_5;
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 1)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 2)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 3)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 4)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 5)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 6)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 7)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 8)));
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 9)));

#line 276 "mode_constraint_robdd.m"
    {
#line 276 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_5_5 = mercury__varset__max_var_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__VarSet_4);
    }
#line 276 "mode_constraint_robdd.m"
    *check_hlds__mode_constraint_robdd__HeadVar__2_2 = (MR_Word) check_hlds__mode_constraint_robdd__V_5_5;
#line 276 "mode_constraint_robdd.m"
  }
#line 95 "mode_constraint_robdd.m"
}

#line 90 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__set_level_from_var_3_p_0(
#line 90 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 90 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8,
#line 90 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_9)
#line 90 "mode_constraint_robdd.m"
{
#line 272 "mode_constraint_robdd.m"
  {
#line 272 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 0)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 1)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 4)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 5)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 6)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 7)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 8)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 9)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd___Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 273 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 2)));
#line 273 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 3)));

#line 274 "mode_constraint_robdd.m"
    {
#line 274 "mode_constraint_robdd.m"
      MR_Word base;
#line 274 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 274 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_9 = base;
#line 274 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12));
#line 274 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 274 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5));
#line 274 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_6));
#line 274 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_16_16));
#line 274 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_17_17));
#line 274 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_18_18));
#line 274 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_19_19));
#line 274 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20));
#line 274 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_21_21));
#line 274 "mode_constraint_robdd.m"
    }
#line 272 "mode_constraint_robdd.m"
  }
#line 90 "mode_constraint_robdd.m"
}

#line 87 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__get_prog_var_level_3_p_0(
#line 87 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_4,
#line 87 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Var_5,
#line 87 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 87 "mode_constraint_robdd.m"
{
#line 268 "mode_constraint_robdd.m"
  {
#line 268 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 268 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
#line 268 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
#line 269 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
#line 269 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
#line 269 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
#line 269 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
#line 269 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
#line 269 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
#line 269 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
#line 269 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));

#line 268 "mode_constraint_robdd.m"
    {
#line 268 "mode_constraint_robdd.m"
      MR_Word base;
#line 268 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 268 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__HeadVar__3_3 = base;
#line 268 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_5));
#line 268 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_6));
#line 268 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_7));
#line 268 "mode_constraint_robdd.m"
    }
#line 268 "mode_constraint_robdd.m"
  }
#line 87 "mode_constraint_robdd.m"
}

#line 76 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__leave_lambda_goal_2_p_0(
#line 76 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7,
#line 76 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_8)
#line 76 "mode_constraint_robdd.m"
{
#line 256 "mode_constraint_robdd.m"
  {
#line 256 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 256 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
#line 256 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_6;
#line 257 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
#line 257 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
#line 257 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
#line 257 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
#line 257 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
#line 257 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
#line 257 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
#line 257 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
#line 257 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
#line 258 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd___GoalPath_5;
#line 258 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0__GoalPath_5;
#line 259 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19;
#line 259 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 259 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21;
#line 259 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 259 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 259 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25;
#line 259 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;
#line 259 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;
#line 259 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 259 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22;

#line 258 "mode_constraint_robdd.m"
    {
#line 258 "mode_constraint_robdd.m"
      mercury__stack__det_pop_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, &check_hlds__mode_constraint_robdd__conv0__GoalPath_5, check_hlds__mode_constraint_robdd__LambdaPath0_4, &check_hlds__mode_constraint_robdd__LambdaPath_6);
    }
#line 258 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd___GoalPath_5 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0__GoalPath_5);
#line 259 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
#line 259 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
#line 259 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
#line 259 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
#line 259 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
#line 259 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
#line 259 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
#line 259 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
#line 259 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
#line 259 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
#line 259 "mode_constraint_robdd.m"
    {
#line 259 "mode_constraint_robdd.m"
      MR_Word base;
#line 259 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 259 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_8 = base;
#line 259 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_19_19));
#line 259 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20));
#line 259 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_21_21));
#line 259 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_6));
#line 259 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23));
#line 259 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24));
#line 259 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_25_25));
#line 259 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_26_26));
#line 259 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_27_27));
#line 259 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_28_28));
#line 259 "mode_constraint_robdd.m"
    }
#line 256 "mode_constraint_robdd.m"
  }
#line 76 "mode_constraint_robdd.m"
}

#line 73 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__enter_lambda_goal_3_p_0(
#line 73 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__GoalId_4,
#line 73 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7,
#line 73 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_8)
#line 73 "mode_constraint_robdd.m"
{
#line 252 "mode_constraint_robdd.m"
  {
#line 252 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10;
#line 253 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
#line 253 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
#line 253 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
#line 253 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
#line 253 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
#line 253 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
#line 253 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
#line 253 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
#line 253 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;

#line 254 "mode_constraint_robdd.m"
    {
#line 254 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_10_10 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_constraint_robdd__LambdaPath0_6, ((MR_Box) (check_hlds__mode_constraint_robdd__GoalId_4)));
    }
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
#line 254 "mode_constraint_robdd.m"
    {
#line 254 "mode_constraint_robdd.m"
      MR_Word base;
#line 254 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 254 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_8 = base;
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_21_21));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_22_22));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_25_25));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_26_26));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_27_27));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_28_28));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_29_29));
#line 254 "mode_constraint_robdd.m"
    }
#line 252 "mode_constraint_robdd.m"
  }
#line 73 "mode_constraint_robdd.m"
}

#line 70 "mode_constraint_robdd.m"
MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0(
#line 70 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_4,
#line 70 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__RepVar_5)
#line 70 "mode_constraint_robdd.m"
{
#line 248 "mode_constraint_robdd.m"
  {
#line 248 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Var_6;
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Key_7;
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));
#line 250 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_Var_6;

#line 249 "mode_constraint_robdd.m"
    {
#line 249 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__Key_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_7, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__RepVar_5));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_7, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_7, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 249 "mode_constraint_robdd.m"
    }
#line 250 "mode_constraint_robdd.m"
    {
#line 250 "mode_constraint_robdd.m"
      mercury__bimap__lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__V_12_12, ((MR_Box) (check_hlds__mode_constraint_robdd__Key_7)), &check_hlds__mode_constraint_robdd__conv0_Var_6);
    }
#line 250 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_Var_6);
#line 248 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__Var_6;
#line 248 "mode_constraint_robdd.m"
  }
#line 70 "mode_constraint_robdd.m"
}

#line 65 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__mode_constraint_var_5_p_0(
#line 65 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_6,
#line 65 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__RepVar0_7,
#line 65 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__RobddVar_8,
#line 65 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18,
#line 65 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19)
#line 65 "mode_constraint_robdd.m"
{
#line 234 "mode_constraint_robdd.m"
  {
#line 234 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__RepVar0_7)) == (MR_mktag((MR_Integer) 2)));
#line 234 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 234 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 233 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 233 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 233 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 233 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 233 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 233 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 233 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 233 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_100_100;
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ProgVar_10;
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11;
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29;
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30;
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31;
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_32_32;
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_33_33;
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_34_34;

#line 228 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 228 "mode_constraint_robdd.m"
      {
#line 228 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__ProgVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar0_7, (MR_Integer) 0)));
#line 228 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar0_7, (MR_Integer) 1)));
#line 229 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 229 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 229 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 229 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 229 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 229 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 229 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 229 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 229 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 229 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 7510 "check_hlds.mode_constraint_robdd.c"
        check_hlds__mode_constraint_robdd__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 229 "mode_constraint_robdd.m"
        {
#line 229 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__succeeded = parse_tree__set_of_var__contains_2_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_100_100, check_hlds__mode_constraint_robdd__V_20_20, check_hlds__mode_constraint_robdd__ProgVar_10);
        }
#line 228 "mode_constraint_robdd.m"
      }
#line 234 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 233 "mode_constraint_robdd.m"
      {
#line 233 "mode_constraint_robdd.m"
        *check_hlds__mode_constraint_robdd__RobddVar_8 = check_hlds__mode_constraint_robdd__V_108_108;
#line 233 "mode_constraint_robdd.m"
        *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19 = check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18;
#line 233 "mode_constraint_robdd.m"
      }
#line 234 "mode_constraint_robdd.m"
    else
#line 235 "mode_constraint_robdd.m"
      {
#line 235 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__Key_14;
#line 240 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__RobddVar0_15;
#line 238 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_21_21;
#line 238 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_53_53;
#line 238 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_54_54;
#line 238 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_55_55;
#line 238 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_56_56;
#line 238 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_57_57;
#line 238 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_58_58;
#line 238 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_59_59;
#line 238 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_60_60;
#line 238 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_61_61;
#line 238 "mode_constraint_robdd.m"
        MR_Box check_hlds__mode_constraint_robdd__conv0_RobddVar0_15;

#line 237 "mode_constraint_robdd.m"
        {
#line 237 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__Key_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 237 "mode_constraint_robdd.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_14, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__RepVar0_7));
#line 237 "mode_constraint_robdd.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_14, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_6));
#line 237 "mode_constraint_robdd.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_14, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_112_112));
#line 237 "mode_constraint_robdd.m"
        }
#line 238 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 238 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 238 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 238 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 238 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 238 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 238 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 238 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 238 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 238 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 238 "mode_constraint_robdd.m"
        {
#line 238 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__succeeded = mercury__bimap__search_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__V_21_21, ((MR_Box) (check_hlds__mode_constraint_robdd__Key_14)), &check_hlds__mode_constraint_robdd__conv0_RobddVar0_15);
        }
#line 238 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 238 "mode_constraint_robdd.m"
          {
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__RobddVar0_15 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_RobddVar0_15);
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 238 "mode_constraint_robdd.m"
          }
#line 240 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 239 "mode_constraint_robdd.m"
          {
#line 239 "mode_constraint_robdd.m"
            *check_hlds__mode_constraint_robdd__RobddVar_8 = check_hlds__mode_constraint_robdd__RobddVar0_15;
#line 239 "mode_constraint_robdd.m"
            *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19 = check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18;
#line 239 "mode_constraint_robdd.m"
          }
#line 240 "mode_constraint_robdd.m"
        else
#line 241 "mode_constraint_robdd.m"
          {
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__NewVarSet_16;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__NewVarMap_17;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_82_82;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_83_83;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_84_84;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_85_85;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_86_86;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_87_87;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_88_88;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_89_89;
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 241 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 242 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_71_71;
#line 242 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_72_72;
#line 242 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_73_73;
#line 242 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_74_74;
#line 242 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_75_75;
#line 242 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_76_76;
#line 242 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_77_77;
#line 242 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_78_78;
#line 242 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_79_79;
#line 243 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_80_80;
#line 243 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_81_81;

#line 241 "mode_constraint_robdd.m"
            {
#line 241 "mode_constraint_robdd.m"
              mercury__varset__new_var_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__RobddVar_8, check_hlds__mode_constraint_robdd__V_22_22, &check_hlds__mode_constraint_robdd__NewVarSet_16);
            }
#line 242 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 242 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 242 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 242 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 242 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 242 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 242 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 242 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 242 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 242 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 242 "mode_constraint_robdd.m"
            {
#line 242 "mode_constraint_robdd.m"
              mercury__bimap__set_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__Key_14)), ((MR_Box) (*check_hlds__mode_constraint_robdd__RobddVar_8)), check_hlds__mode_constraint_robdd__V_23_23, &check_hlds__mode_constraint_robdd__NewVarMap_17);
            }
#line 243 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 243 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 243 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 243 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 243 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 243 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 243 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 243 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 243 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 243 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 244 "mode_constraint_robdd.m"
            {
#line 244 "mode_constraint_robdd.m"
              MR_Word base;
#line 244 "mode_constraint_robdd.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 244 "mode_constraint_robdd.m"
              *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19 = base;
#line 244 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__NewVarSet_16));
#line 244 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__NewVarMap_17));
#line 244 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_82_82));
#line 244 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_83_83));
#line 244 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_84_84));
#line 244 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_85_85));
#line 244 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_86_86));
#line 244 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_87_87));
#line 244 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_88_88));
#line 244 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_89_89));
#line 244 "mode_constraint_robdd.m"
            }
#line 241 "mode_constraint_robdd.m"
          }
#line 235 "mode_constraint_robdd.m"
      }
#line 234 "mode_constraint_robdd.m"
  }
#line 65 "mode_constraint_robdd.m"
}

#line 62 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__mode_constraint_var_4_p_0(
#line 62 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__RepVar0_5,
#line 62 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__RobddVar_6,
#line 62 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8,
#line 62 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_9)
#line 62 "mode_constraint_robdd.m"
{
#line 223 "mode_constraint_robdd.m"
  {
#line 223 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 223 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 2)));
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 0)));
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 1)));
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 3)));
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 4)));
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 5)));
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 6)));
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 7)));
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 8)));
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 9)));

#line 224 "mode_constraint_robdd.m"
    {
#line 224 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__mode_constraint_var_5_p_0(check_hlds__mode_constraint_robdd__V_10_10, check_hlds__mode_constraint_robdd__RepVar0_5, check_hlds__mode_constraint_robdd__RobddVar_6, check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_9);
#line 224 "mode_constraint_robdd.m"
      return;
    }
#line 223 "mode_constraint_robdd.m"
  }
#line 62 "mode_constraint_robdd.m"
}

#line 52 "mode_constraint_robdd.m"
MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__mci_set_pred_id_2_f_0(
#line 52 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_4,
#line 52 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_5)
#line 52 "mode_constraint_robdd.m"
{
#line 196 "mode_constraint_robdd.m"
  {
#line 196 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));

#line 196 "mode_constraint_robdd.m"
    {
#line 196 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 196 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6));
#line 196 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_7_7));
#line 196 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5));
#line 196 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9));
#line 196 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10));
#line 196 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_11_11));
#line 196 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12));
#line 196 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 196 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14));
#line 196 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_15_15));
#line 196 "mode_constraint_robdd.m"
    }
#line 196 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__3_3;
#line 196 "mode_constraint_robdd.m"
  }
#line 52 "mode_constraint_robdd.m"
}

#line 51 "mode_constraint_robdd.m"
MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_f_0(
#line 51 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Simple_3)
#line 51 "mode_constraint_robdd.m"
{
#line 201 "mode_constraint_robdd.m"
  {
#line 201 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MCI_4;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_15_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeInfo_17_17;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet0_5;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ZeroVar_6;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet_7;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_8;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13;
#line 201 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14;

#line 202 "mode_constraint_robdd.m"
    {
#line 202 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__VarSet0_5 = mercury__varset__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_15_15);
    }
#line 203 "mode_constraint_robdd.m"
    {
#line 203 "mode_constraint_robdd.m"
      mercury__varset__new_var_3_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_15_15, &check_hlds__mode_constraint_robdd__ZeroVar_6, check_hlds__mode_constraint_robdd__VarSet0_5, &check_hlds__mode_constraint_robdd__VarSet_7);
    }
#line 204 "mode_constraint_robdd.m"
    {
#line 204 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__PredId_8 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
#line 7949 "check_hlds.mode_constraint_robdd.c"
    check_hlds__mode_constraint_robdd__TypeInfo_17_17 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
#line 205 "mode_constraint_robdd.m"
    {
#line 205 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_9_9 = mercury__bimap__init_0_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, check_hlds__mode_constraint_robdd__TypeInfo_17_17);
    }
#line 205 "mode_constraint_robdd.m"
    {
#line 205 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_10_10 = mercury__stack__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
    }
#line 7961 "check_hlds.mode_constraint_robdd.c"
    check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 205 "mode_constraint_robdd.m"
    {
#line 205 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_11_11 = mercury__map__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19, check_hlds__mode_constraint_robdd__TypeInfo_17_17);
    }
#line 205 "mode_constraint_robdd.m"
    {
#line 205 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_12_12 = mercury__map__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19, check_hlds__mode_constraint_robdd__TypeInfo_17_17);
    }
#line 205 "mode_constraint_robdd.m"
    {
#line 205 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_13_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 205 "mode_constraint_robdd.m"
    {
#line 205 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_14_14 = mercury__map__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0]);
    }
#line 205 "mode_constraint_robdd.m"
    {
#line 205 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__MCI_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 205 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__VarSet_7));
#line 205 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9));
#line 205 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_8));
#line 205 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10));
#line 205 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_11_11));
#line 205 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12));
#line 205 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 205 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__ZeroVar_6));
#line 205 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Simple_3));
#line 205 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14));
#line 205 "mode_constraint_robdd.m"
    }
#line 201 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__MCI_4;
#line 201 "mode_constraint_robdd.m"
  }
#line 51 "mode_constraint_robdd.m"
}

void mercury__check_hlds__mode_constraint_robdd__init(void)
{
}

void mercury__check_hlds__mode_constraint_robdd__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_lambda_path_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_var_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_varmap_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_vars_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prodvars_map_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prog_var_and_level_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_robdd_var_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_threshold_0);
	MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0);
}

void mercury__check_hlds__mode_constraint_robdd__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.mode_constraint_robdd. */
