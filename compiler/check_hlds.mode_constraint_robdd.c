/*
** Automatically generated from `mode_constraint_robdd.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module check_hlds.mode_constraint_robdd. */
/* :- implementation. */

/*
INIT mercury__check_hlds__mode_constraint_robdd__init
ENDINIT
*/

#include "check_hlds.mode_constraint_robdd.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 316 "mode_constraint_robdd.m"
struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s {
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__VarMap_8;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaPath_9;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__PredId_10;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Constraint1_12;
#line 316 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaHeadVar__1_20;
#line 316 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont;
#line 316 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont_env_ptr;
#line 316 "mode_constraint_robdd.m"
  MR_bool check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeCtorInfo_75_75;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_76_76;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_83_83;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__RobddVar_15;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__V_21_21;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__V_80_80;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__V_81_81;
#line 318 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__conv0_Key_14;
#line 316 "mode_constraint_robdd.m"
};

#line 316 "mode_constraint_robdd.m"
struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s {
#line 316 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1;
#line 316 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont;
#line 316 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr;
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_LambdaHeadVar__1_20;
#line 316 "mode_constraint_robdd.m"
};


#line 191 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0;

#line 194 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 197 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 200 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 203 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 206 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 209 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 212 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 215 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 218 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 221 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 224 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 227 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__pti_stack_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 230 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0;

#line 233 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 236 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 239 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 242 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 245 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 248 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 251 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 254 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 257 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0;

#line 260 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0[1];

#line 263 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0[1];

#line 266 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0[1];

#line 269 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 272 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 275 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 278 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 281 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 284 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 287 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0[10];

#line 290 "check_hlds.mode_constraint_robdd.c"
static const MR_ConstString check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0[10];

#line 293 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0;

#line 296 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0[1];

#line 299 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0[1];

#line 302 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0[1];

#line 305 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0[1];

#line 308 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 311 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 314 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0[3];

#line 317 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0;

#line 320 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0[1];

#line 323 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0[1];

#line 326 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0[1];

#line 329 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0[1];

#line 332 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_0[1];

#line 335 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0;

#line 338 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_1[1];

#line 341 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1;

#line 344 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_2[2];

#line 347 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2;

#line 350 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0[1];

#line 353 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1[1];

#line 356 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2[1];

#line 359 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0[3];

#line 362 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0[3];

#line 365 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0[3];

#line 368 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0[1];

#line 371 "check_hlds.mode_constraint_robdd.c"
static const MR_NotagFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0;

#line 374 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0[3];

#line 377 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0;

#line 380 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0[1];

#line 383 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0[1];

#line 386 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0[1];

#line 389 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0[1];

#line 392 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001(
#line 395 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 397 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 400 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001(
#line 403 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 405 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 407 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 410 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001(
#line 413 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 415 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 418 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001(
#line 421 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 423 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 425 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 428 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001(
#line 431 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 433 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 436 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001(
#line 439 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 441 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 443 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 446 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001(
#line 449 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 451 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 454 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001(
#line 457 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 459 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 461 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 464 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001(
#line 467 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 469 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 472 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001(
#line 475 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 477 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 479 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 482 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001(
#line 485 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 487 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 490 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001(
#line 493 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 495 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 497 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 500 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001(
#line 503 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 505 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 508 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001(
#line 511 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 513 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 515 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 518 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001(
#line 521 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 523 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 526 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001(
#line 529 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 531 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 533 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 536 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001(
#line 539 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 541 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 544 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001(
#line 547 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 549 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 551 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 554 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001(
#line 557 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 559 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 562 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001(
#line 565 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 567 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 569 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 572 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001(
#line 575 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 577 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 580 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001(
#line 583 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 585 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 587 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 590 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001(
#line 593 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 595 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 598 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001(
#line 601 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 603 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 605 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 608 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001(
#line 611 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 613 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

#line 616 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001(
#line 619 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 621 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 623 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 626 "check_hlds.mode_constraint_robdd.c"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0_1(
#line 629 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 631 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

#line 307 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(
#line 307 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_12,
#line 307 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_50);

#line 422 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__422__1_4_p_0(
#line 422 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_5,
#line 422 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_25,
#line 422 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26,
#line 422 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__LambdaHeadVar__3_27);

#line 387 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__387__1_5_p_0(
#line 387 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__ProgVarSet_8,
#line 387 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__VarMap_12,
#line 387 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_30);

#line 318 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_2(
#line 318 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg);

#line 316 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_1(
#line 316 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg);

#line 316 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0(
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__VarMap_8,
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaPath_9,
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_10,
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Keys_11,
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Constraint1_12,
#line 316 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__LambdaHeadVar__1_20,
#line 316 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__cont,
#line 316 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__cont_env_ptr);

#line 307 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__307__1_1_f_0(
#line 307 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_67);

#line 303 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__2_3_f_0(
#line 303 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_13,
#line 303 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_14,
#line 303 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_55);

#line 304 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__304__2_2_f_0(
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_15,
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_62);

#line 304 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__304__1_4_p_0(
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MinVars_7,
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MaxVars_8,
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_16);

#line 303 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__1_1_f_0(
#line 303 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_59);

#line 278 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__278__1_3_p_0(
#line 278 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__P0_5,
#line 278 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_6,
#line 278 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_14);

#line 211 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(
#line 211 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 211 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 211 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3);

#line 211 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(
#line 211 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 211 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2);

#line 203 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(
#line 203 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 203 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 203 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3);

#line 203 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(
#line 203 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 203 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2);

#line 205 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(
#line 205 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 205 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 205 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3);

#line 205 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(
#line 205 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 205 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2);

#line 406 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1(
#line 406 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 406 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 406 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 406 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 387 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1(
#line 387 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 387 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 387 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 387 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3);

#line 316 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1(
#line 316 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg);

#line 316 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2(
#line 316 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 316 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 316 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__cont,
#line 316 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__cont_env_ptr);

#line 303 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4(
#line 303 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 303 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

#line 304 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3(
#line 304 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 304 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

#line 304 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2(
#line 304 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 304 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

#line 303 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1(
#line 303 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 303 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

#line 278 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1(
#line 278 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 278 "mode_constraint_robdd.m"
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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]))
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
    ((MR_Box) (check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0_1)),
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
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1112 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0
  }
};

#line 1121 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1129 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1137 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1145 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1153 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1162 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1171 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1179 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1187 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1197 "check_hlds.mode_constraint_robdd.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1207 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1216 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__pti_stack_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1224 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0
  }
};

#line 1232 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1240 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1248 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1256 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1264 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1272 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1280 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1289 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1297 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_lambda_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "lambda_path",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1314 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0 = {
  (MR_String) "mc_type",
  (MR_Integer) 0
};

#line 1320 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0
};

#line 1325 "check_hlds.mode_constraint_robdd.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0
};

#line 1330 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0[1] = {
  (MR_Integer) 0
};

#line 1335 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mc_type",
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0 },
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0
};

#line 1352 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1360 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1377 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1385 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1394 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1403 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1412 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1421 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0[10] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1435 "check_hlds.mode_constraint_robdd.c"
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

#line 1449 "check_hlds.mode_constraint_robdd.c"
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

#line 1464 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0
};

#line 1469 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0
  }
};

#line 1478 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0
};

#line 1483 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0[1] = {
  (MR_Integer) 0
};

#line 1488 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_info",
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0 },
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0
};

#line 1505 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1522 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_varmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1539 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1547 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1564 "check_hlds.mode_constraint_robdd.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1573 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prodvars_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "prodvars_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1590 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1597 "check_hlds.mode_constraint_robdd.c"
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

#line 1612 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0
};

#line 1617 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0
  }
};

#line 1626 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0
};

#line 1631 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0[1] = {
  (MR_Integer) 0
};

#line 1636 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prog_var_and_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "prog_var_and_level",
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0 },
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0
};

#line 1653 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1658 "check_hlds.mode_constraint_robdd.c"
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

#line 1673 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1678 "check_hlds.mode_constraint_robdd.c"
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

#line 1693 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1699 "check_hlds.mode_constraint_robdd.c"
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

#line 1714 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0
};

#line 1719 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1
};

#line 1724 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2
};

#line 1729 "check_hlds.mode_constraint_robdd.c"
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

#line 1748 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0[3] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2,
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0,
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1
};

#line 1755 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1762 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "rep_var",
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0 },
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0
};

#line 1779 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_robdd_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "robdd_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1796 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0[1] = {
  (MR_Integer) 0
};

#line 1801 "check_hlds.mode_constraint_robdd.c"
static const MR_NotagFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 = {
  (MR_String) "threshold",
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  NULL
};

#line 1808 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_threshold_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "threshold",
  {     &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 },
  {     &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0
};

#line 1825 "check_hlds.mode_constraint_robdd.c"
static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1832 "check_hlds.mode_constraint_robdd.c"
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

#line 1847 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0
};

#line 1852 "check_hlds.mode_constraint_robdd.c"
static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0
  }
};

#line 1861 "check_hlds.mode_constraint_robdd.c"
static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0
};

#line 1866 "check_hlds.mode_constraint_robdd.c"
static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0[1] = {
  (MR_Integer) 0
};

#line 1871 "check_hlds.mode_constraint_robdd.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "varmap_key",
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0 },
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0
};

#line 1888 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001(
#line 1891 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 1893 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 1895 "check_hlds.mode_constraint_robdd.c"
{
#line 1897 "check_hlds.mode_constraint_robdd.c"
  {
#line 1899 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 1902 "check_hlds.mode_constraint_robdd.c"
    {
#line 1904 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 1907 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 1909 "check_hlds.mode_constraint_robdd.c"
  }
#line 1911 "check_hlds.mode_constraint_robdd.c"
}

#line 1914 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001(
#line 1917 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 1919 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 1921 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 1923 "check_hlds.mode_constraint_robdd.c"
{
#line 1925 "check_hlds.mode_constraint_robdd.c"
  {
#line 1927 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 1930 "check_hlds.mode_constraint_robdd.c"
    {
#line 1932 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 1935 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 1937 "check_hlds.mode_constraint_robdd.c"
  }
#line 1939 "check_hlds.mode_constraint_robdd.c"
}

#line 1942 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001(
#line 1945 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 1947 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 1949 "check_hlds.mode_constraint_robdd.c"
{
#line 1951 "check_hlds.mode_constraint_robdd.c"
  {
#line 1953 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 1956 "check_hlds.mode_constraint_robdd.c"
    {
#line 1958 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mc_type_0_0();
    }
#line 1961 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 1963 "check_hlds.mode_constraint_robdd.c"
  }
#line 1965 "check_hlds.mode_constraint_robdd.c"
}

#line 1968 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001(
#line 1971 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 1973 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 1975 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 1977 "check_hlds.mode_constraint_robdd.c"
{
#line 1979 "check_hlds.mode_constraint_robdd.c"
  {
#line 1981 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 1984 "check_hlds.mode_constraint_robdd.c"
    {
#line 1986 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mc_type_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1);
    }
#line 1989 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 1991 "check_hlds.mode_constraint_robdd.c"
  }
#line 1993 "check_hlds.mode_constraint_robdd.c"
}

#line 1996 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001(
#line 1999 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2001 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2003 "check_hlds.mode_constraint_robdd.c"
{
#line 2005 "check_hlds.mode_constraint_robdd.c"
  {
#line 2007 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2010 "check_hlds.mode_constraint_robdd.c"
    {
#line 2012 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2015 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2017 "check_hlds.mode_constraint_robdd.c"
  }
#line 2019 "check_hlds.mode_constraint_robdd.c"
}

#line 2022 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001(
#line 2025 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2027 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2029 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2031 "check_hlds.mode_constraint_robdd.c"
{
#line 2033 "check_hlds.mode_constraint_robdd.c"
  {
#line 2035 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2038 "check_hlds.mode_constraint_robdd.c"
    {
#line 2040 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2043 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2045 "check_hlds.mode_constraint_robdd.c"
  }
#line 2047 "check_hlds.mode_constraint_robdd.c"
}

#line 2050 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001(
#line 2053 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2055 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2057 "check_hlds.mode_constraint_robdd.c"
{
#line 2059 "check_hlds.mode_constraint_robdd.c"
  {
#line 2061 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2064 "check_hlds.mode_constraint_robdd.c"
    {
#line 2066 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2069 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2071 "check_hlds.mode_constraint_robdd.c"
  }
#line 2073 "check_hlds.mode_constraint_robdd.c"
}

#line 2076 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001(
#line 2079 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2081 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2083 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2085 "check_hlds.mode_constraint_robdd.c"
{
#line 2087 "check_hlds.mode_constraint_robdd.c"
  {
#line 2089 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2092 "check_hlds.mode_constraint_robdd.c"
    {
#line 2094 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2097 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2099 "check_hlds.mode_constraint_robdd.c"
  }
#line 2101 "check_hlds.mode_constraint_robdd.c"
}

#line 2104 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001(
#line 2107 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2109 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2111 "check_hlds.mode_constraint_robdd.c"
{
#line 2113 "check_hlds.mode_constraint_robdd.c"
  {
#line 2115 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2118 "check_hlds.mode_constraint_robdd.c"
    {
#line 2120 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2123 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2125 "check_hlds.mode_constraint_robdd.c"
  }
#line 2127 "check_hlds.mode_constraint_robdd.c"
}

#line 2130 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001(
#line 2133 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2135 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2137 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2139 "check_hlds.mode_constraint_robdd.c"
{
#line 2141 "check_hlds.mode_constraint_robdd.c"
  {
#line 2143 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2146 "check_hlds.mode_constraint_robdd.c"
    {
#line 2148 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2151 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2153 "check_hlds.mode_constraint_robdd.c"
  }
#line 2155 "check_hlds.mode_constraint_robdd.c"
}

#line 2158 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001(
#line 2161 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2163 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2165 "check_hlds.mode_constraint_robdd.c"
{
#line 2167 "check_hlds.mode_constraint_robdd.c"
  {
#line 2169 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2172 "check_hlds.mode_constraint_robdd.c"
    {
#line 2174 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2177 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2179 "check_hlds.mode_constraint_robdd.c"
  }
#line 2181 "check_hlds.mode_constraint_robdd.c"
}

#line 2184 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001(
#line 2187 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2189 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2191 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2193 "check_hlds.mode_constraint_robdd.c"
{
#line 2195 "check_hlds.mode_constraint_robdd.c"
  {
#line 2197 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2200 "check_hlds.mode_constraint_robdd.c"
    {
#line 2202 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2205 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2207 "check_hlds.mode_constraint_robdd.c"
  }
#line 2209 "check_hlds.mode_constraint_robdd.c"
}

#line 2212 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001(
#line 2215 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2217 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2219 "check_hlds.mode_constraint_robdd.c"
{
#line 2221 "check_hlds.mode_constraint_robdd.c"
  {
#line 2223 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2226 "check_hlds.mode_constraint_robdd.c"
    {
#line 2228 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2231 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2233 "check_hlds.mode_constraint_robdd.c"
  }
#line 2235 "check_hlds.mode_constraint_robdd.c"
}

#line 2238 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001(
#line 2241 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2243 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2245 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2247 "check_hlds.mode_constraint_robdd.c"
{
#line 2249 "check_hlds.mode_constraint_robdd.c"
  {
#line 2251 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2254 "check_hlds.mode_constraint_robdd.c"
    {
#line 2256 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2259 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2261 "check_hlds.mode_constraint_robdd.c"
  }
#line 2263 "check_hlds.mode_constraint_robdd.c"
}

#line 2266 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001(
#line 2269 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2271 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2273 "check_hlds.mode_constraint_robdd.c"
{
#line 2275 "check_hlds.mode_constraint_robdd.c"
  {
#line 2277 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2280 "check_hlds.mode_constraint_robdd.c"
    {
#line 2282 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2285 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2287 "check_hlds.mode_constraint_robdd.c"
  }
#line 2289 "check_hlds.mode_constraint_robdd.c"
}

#line 2292 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001(
#line 2295 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2297 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2299 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2301 "check_hlds.mode_constraint_robdd.c"
{
#line 2303 "check_hlds.mode_constraint_robdd.c"
  {
#line 2305 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2308 "check_hlds.mode_constraint_robdd.c"
    {
#line 2310 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2313 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2315 "check_hlds.mode_constraint_robdd.c"
  }
#line 2317 "check_hlds.mode_constraint_robdd.c"
}

#line 2320 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001(
#line 2323 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2325 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2327 "check_hlds.mode_constraint_robdd.c"
{
#line 2329 "check_hlds.mode_constraint_robdd.c"
  {
#line 2331 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2334 "check_hlds.mode_constraint_robdd.c"
    {
#line 2336 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2339 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2341 "check_hlds.mode_constraint_robdd.c"
  }
#line 2343 "check_hlds.mode_constraint_robdd.c"
}

#line 2346 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001(
#line 2349 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2351 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2353 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2355 "check_hlds.mode_constraint_robdd.c"
{
#line 2357 "check_hlds.mode_constraint_robdd.c"
  {
#line 2359 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2362 "check_hlds.mode_constraint_robdd.c"
    {
#line 2364 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2367 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2369 "check_hlds.mode_constraint_robdd.c"
  }
#line 2371 "check_hlds.mode_constraint_robdd.c"
}

#line 2374 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001(
#line 2377 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2379 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2381 "check_hlds.mode_constraint_robdd.c"
{
#line 2383 "check_hlds.mode_constraint_robdd.c"
  {
#line 2385 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2388 "check_hlds.mode_constraint_robdd.c"
    {
#line 2390 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2393 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2395 "check_hlds.mode_constraint_robdd.c"
  }
#line 2397 "check_hlds.mode_constraint_robdd.c"
}

#line 2400 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001(
#line 2403 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2405 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2407 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2409 "check_hlds.mode_constraint_robdd.c"
{
#line 2411 "check_hlds.mode_constraint_robdd.c"
  {
#line 2413 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2416 "check_hlds.mode_constraint_robdd.c"
    {
#line 2418 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2421 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2423 "check_hlds.mode_constraint_robdd.c"
  }
#line 2425 "check_hlds.mode_constraint_robdd.c"
}

#line 2428 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001(
#line 2431 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2433 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2435 "check_hlds.mode_constraint_robdd.c"
{
#line 2437 "check_hlds.mode_constraint_robdd.c"
  {
#line 2439 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2442 "check_hlds.mode_constraint_robdd.c"
    {
#line 2444 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2447 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2449 "check_hlds.mode_constraint_robdd.c"
  }
#line 2451 "check_hlds.mode_constraint_robdd.c"
}

#line 2454 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001(
#line 2457 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2459 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2461 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2463 "check_hlds.mode_constraint_robdd.c"
{
#line 2465 "check_hlds.mode_constraint_robdd.c"
  {
#line 2467 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2470 "check_hlds.mode_constraint_robdd.c"
    {
#line 2472 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2475 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2477 "check_hlds.mode_constraint_robdd.c"
  }
#line 2479 "check_hlds.mode_constraint_robdd.c"
}

#line 2482 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001(
#line 2485 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2487 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2489 "check_hlds.mode_constraint_robdd.c"
{
#line 2491 "check_hlds.mode_constraint_robdd.c"
  {
#line 2493 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2496 "check_hlds.mode_constraint_robdd.c"
    {
#line 2498 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____threshold_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2501 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2503 "check_hlds.mode_constraint_robdd.c"
  }
#line 2505 "check_hlds.mode_constraint_robdd.c"
}

#line 2508 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001(
#line 2511 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2513 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2515 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2517 "check_hlds.mode_constraint_robdd.c"
{
#line 2519 "check_hlds.mode_constraint_robdd.c"
  {
#line 2521 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2524 "check_hlds.mode_constraint_robdd.c"
    {
#line 2526 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____threshold_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2529 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2531 "check_hlds.mode_constraint_robdd.c"
  }
#line 2533 "check_hlds.mode_constraint_robdd.c"
}

#line 2536 "check_hlds.mode_constraint_robdd.c"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001(
#line 2539 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2541 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
#line 2543 "check_hlds.mode_constraint_robdd.c"
{
#line 2545 "check_hlds.mode_constraint_robdd.c"
  {
#line 2547 "check_hlds.mode_constraint_robdd.c"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 2550 "check_hlds.mode_constraint_robdd.c"
    {
#line 2552 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
#line 2555 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 2557 "check_hlds.mode_constraint_robdd.c"
  }
#line 2559 "check_hlds.mode_constraint_robdd.c"
}

#line 2562 "check_hlds.mode_constraint_robdd.c"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001(
#line 2565 "check_hlds.mode_constraint_robdd.c"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 2567 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 2569 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 2571 "check_hlds.mode_constraint_robdd.c"
{
#line 2573 "check_hlds.mode_constraint_robdd.c"
  {
#line 2575 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

#line 2578 "check_hlds.mode_constraint_robdd.c"
    {
#line 2580 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
#line 2583 "check_hlds.mode_constraint_robdd.c"
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
#line 2585 "check_hlds.mode_constraint_robdd.c"
  }
#line 2587 "check_hlds.mode_constraint_robdd.c"
}

#line 2590 "check_hlds.mode_constraint_robdd.c"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0_1(
#line 2593 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 2595 "check_hlds.mode_constraint_robdd.c"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 2597 "check_hlds.mode_constraint_robdd.c"
{
#line 2599 "check_hlds.mode_constraint_robdd.c"
  {
#line 2601 "check_hlds.mode_constraint_robdd.c"
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 2603 "check_hlds.mode_constraint_robdd.c"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
#line 2605 "check_hlds.mode_constraint_robdd.c"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__2_68;

#line 2608 "check_hlds.mode_constraint_robdd.c"
    {
#line 2610 "check_hlds.mode_constraint_robdd.c"
      check_hlds__mode_constraint_robdd__conv0_HeadVar__2_68 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__307__1_1_f_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 2613 "check_hlds.mode_constraint_robdd.c"
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__2_68));
#line 2615 "check_hlds.mode_constraint_robdd.c"
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 2617 "check_hlds.mode_constraint_robdd.c"
  }
#line 2619 "check_hlds.mode_constraint_robdd.c"
}

#line 307 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(
#line 307 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_12,
#line 307 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_50)
#line 307 "mode_constraint_robdd.m"
{
#line 307 "mode_constraint_robdd.m"
  {
#line 307 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 307 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_51;
#line 307 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv1_HeadVar__4_51;

#line 307 "mode_constraint_robdd.m"
    {
#line 307 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv1_HeadVar__4_51 = mercury__std_util__compose_3_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[1], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[2], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[3], check_hlds__mode_constraint_robdd__HeadVar__1_12, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[7], ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__3_50)));
    }
#line 307 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__HeadVar__4_51 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_HeadVar__4_51);
#line 307 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__4_51;
#line 307 "mode_constraint_robdd.m"
  }
#line 307 "mode_constraint_robdd.m"
}

#line 169 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 169 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1)
#line 169 "mode_constraint_robdd.m"
{
#line 169 "mode_constraint_robdd.m"
  {
#line 169 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 169 "mode_constraint_robdd.m"
    *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "mode_constraint_robdd.m"
  }
#line 169 "mode_constraint_robdd.m"
}

#line 169 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 169 "mode_constraint_robdd.m"
{
#line 169 "mode_constraint_robdd.m"
  {
#line 169 "mode_constraint_robdd.m"
    return MR_TRUE;
#line 169 "mode_constraint_robdd.m"
  }
#line 169 "mode_constraint_robdd.m"
}

#line 422 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__422__1_4_p_0(
#line 422 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_5,
#line 422 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_25,
#line 422 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26,
#line 422 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__LambdaHeadVar__3_27)
#line 422 "mode_constraint_robdd.m"
{
#line 422 "mode_constraint_robdd.m"
  {
#line 422 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 422 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ProgVar_15;
#line 422 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaId_17;
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_57_57;
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Key_11;
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__RepVar_12;
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_13;
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaId0_14;
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__GoalId_16;
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 1)));
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_71_71;
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 0)));
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 2)));
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 3)));
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 4)));
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 5)));
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 6)));
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 7)));
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 8)));
#line 409 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 9)));
#line 409 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_Key_11;
#line 411 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_45_45;
#line 411 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_46_46;
#line 411 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_47_47;
#line 411 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_48_48;
#line 411 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_49_49;
#line 411 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_50_50;
#line 411 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_51_51;
#line 411 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_52_52;
#line 411 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_53_53;

#line 409 "mode_constraint_robdd.m"
    {
#line 409 "mode_constraint_robdd.m"
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__V_28_28, &check_hlds__mode_constraint_robdd__conv0_Key_11, ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaHeadVar__1_25)));
    }
#line 409 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__Key_11 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_Key_11);
#line 410 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__RepVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_11, (MR_Integer) 0)));
#line 410 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_11, (MR_Integer) 1)));
#line 410 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__LambdaId0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_11, (MR_Integer) 2)));
#line 411 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 0)));
#line 411 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 1)));
#line 411 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 2)));
#line 411 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 3)));
#line 411 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 4)));
#line 411 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 5)));
#line 411 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 6)));
#line 411 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 7)));
#line 411 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 8)));
#line 411 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 9)));
#line 411 "mode_constraint_robdd.m"
    {
#line 411 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__PredId_13, check_hlds__mode_constraint_robdd__V_71_71);
    }
#line 409 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 409 "mode_constraint_robdd.m"
      {
#line 412 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__RepVar_12)) == (MR_mktag((MR_Integer) 2)));
#line 412 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 412 "mode_constraint_robdd.m"
          {
#line 412 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__ProgVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_12, (MR_Integer) 0)));
#line 412 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__GoalId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_12, (MR_Integer) 1)));
#line 2815 "check_hlds.mode_constraint_robdd.c"
            check_hlds__mode_constraint_robdd__TypeCtorInfo_57_57 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 413 "mode_constraint_robdd.m"
            {
#line 413 "mode_constraint_robdd.m"
              mercury__stack__push_3_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_57_57, ((MR_Box) (check_hlds__mode_constraint_robdd__GoalId_16)), check_hlds__mode_constraint_robdd__LambdaId0_14, &check_hlds__mode_constraint_robdd__LambdaId_17);
            }
#line 413 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 412 "mode_constraint_robdd.m"
          }
#line 409 "mode_constraint_robdd.m"
      }
#line 422 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 418 "mode_constraint_robdd.m"
      {
#line 418 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__Vs0_18;
#line 415 "mode_constraint_robdd.m"
        MR_Box check_hlds__mode_constraint_robdd__conv1_Vs0_18;

#line 415 "mode_constraint_robdd.m"
        {
#line 415 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26, ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaId_17)), &check_hlds__mode_constraint_robdd__conv1_Vs0_18);
        }
#line 415 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 415 "mode_constraint_robdd.m"
          {
#line 415 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__Vs0_18 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_Vs0_18);
#line 415 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 415 "mode_constraint_robdd.m"
          }
#line 418 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 416 "mode_constraint_robdd.m"
          {
#line 416 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__Vs_19;

#line 416 "mode_constraint_robdd.m"
            {
#line 416 "mode_constraint_robdd.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVar_15, check_hlds__mode_constraint_robdd__Vs0_18, &check_hlds__mode_constraint_robdd__Vs_19);
            }
#line 417 "mode_constraint_robdd.m"
            {
#line 417 "mode_constraint_robdd.m"
              mercury__map__det_update_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaId_17)), ((MR_Box) (check_hlds__mode_constraint_robdd__Vs_19)), check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26, check_hlds__mode_constraint_robdd__LambdaHeadVar__3_27);
#line 417 "mode_constraint_robdd.m"
              return;
            }
#line 416 "mode_constraint_robdd.m"
          }
#line 418 "mode_constraint_robdd.m"
        else
#line 419 "mode_constraint_robdd.m"
          {
#line 419 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__Vs_32;

#line 419 "mode_constraint_robdd.m"
            {
#line 419 "mode_constraint_robdd.m"
              parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVar_15, &check_hlds__mode_constraint_robdd__Vs_32);
            }
#line 420 "mode_constraint_robdd.m"
            {
#line 420 "mode_constraint_robdd.m"
              mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaId_17)), ((MR_Box) (check_hlds__mode_constraint_robdd__Vs_32)), check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26, check_hlds__mode_constraint_robdd__LambdaHeadVar__3_27);
#line 420 "mode_constraint_robdd.m"
              return;
            }
#line 419 "mode_constraint_robdd.m"
          }
#line 418 "mode_constraint_robdd.m"
      }
#line 422 "mode_constraint_robdd.m"
    else
#line 423 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__LambdaHeadVar__3_27 = check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26;
#line 422 "mode_constraint_robdd.m"
  }
#line 422 "mode_constraint_robdd.m"
}

#line 387 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__387__1_5_p_0(
#line 387 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__ProgVarSet_8,
#line 387 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__VarMap_12,
#line 387 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_30)
#line 387 "mode_constraint_robdd.m"
{
#line 387 "mode_constraint_robdd.m"
  {
#line 387 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 387 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__RepVar_15;
#line 387 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_16;
#line 387 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaId_17;
#line 387 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__PredIdNum_18;
#line 387 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_33_33;
#line 387 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__V_36_36;
#line 387 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__V_38_38;
#line 388 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_V_33_33;

#line 388 "mode_constraint_robdd.m"
    {
#line 388 "mode_constraint_robdd.m"
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__VarMap_12, &check_hlds__mode_constraint_robdd__conv0_V_33_33, ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaHeadVar__1_30)));
    }
#line 388 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_33_33 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_V_33_33);
#line 388 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__RepVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_33_33, (MR_Integer) 0)));
#line 388 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_33_33, (MR_Integer) 1)));
#line 388 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__LambdaId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_33_33, (MR_Integer) 2)));
#line 370 "mode_constraint_robdd.m"
#line 370 "mode_constraint_robdd.m"
    switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__RepVar_15)) {
#line 370 "mode_constraint_robdd.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 370 "mode_constraint_robdd.m"
      case (MR_Integer) 0:
#line 370 "mode_constraint_robdd.m"
        {
#line 370 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 0)));
#line 370 "mode_constraint_robdd.m"
          MR_String check_hlds__mode_constraint_robdd__Name_62;

#line 371 "mode_constraint_robdd.m"
          {
#line 371 "mode_constraint_robdd.m"
            mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVarSet_8, check_hlds__mode_constraint_robdd__V_60, &check_hlds__mode_constraint_robdd__Name_62);
          }
#line 372 "mode_constraint_robdd.m"
          {
#line 372 "mode_constraint_robdd.m"
            mercury__io__write_string_3_p_0(check_hlds__mode_constraint_robdd__Name_62);
          }
#line 373 "mode_constraint_robdd.m"
          {
#line 373 "mode_constraint_robdd.m"
            mercury__io__write_string_3_p_0((MR_String) "_in");
          }
#line 370 "mode_constraint_robdd.m"
        }
#line 370 "mode_constraint_robdd.m"
        break;
#line 370 "mode_constraint_robdd.m"
      case (MR_Integer) 1:
#line 374 "mode_constraint_robdd.m"
        {
#line 374 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 0)));
#line 374 "mode_constraint_robdd.m"
          MR_String check_hlds__mode_constraint_robdd__Name_71;

#line 375 "mode_constraint_robdd.m"
          {
#line 375 "mode_constraint_robdd.m"
            mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVarSet_8, check_hlds__mode_constraint_robdd__V_69, &check_hlds__mode_constraint_robdd__Name_71);
          }
#line 376 "mode_constraint_robdd.m"
          {
#line 376 "mode_constraint_robdd.m"
            mercury__io__write_string_3_p_0(check_hlds__mode_constraint_robdd__Name_71);
          }
#line 377 "mode_constraint_robdd.m"
          {
#line 377 "mode_constraint_robdd.m"
            mercury__io__write_string_3_p_0((MR_String) "_out");
          }
#line 374 "mode_constraint_robdd.m"
        }
#line 370 "mode_constraint_robdd.m"
        break;
#line 370 "mode_constraint_robdd.m"
      case (MR_Integer) 2:
#line 378 "mode_constraint_robdd.m"
        {
#line 378 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 0)));
#line 378 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__Id_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 1)));
#line 378 "mode_constraint_robdd.m"
          MR_String check_hlds__mode_constraint_robdd__Name_81;
#line 378 "mode_constraint_robdd.m"
          MR_Integer check_hlds__mode_constraint_robdd__IdNum_82;

#line 379 "mode_constraint_robdd.m"
          {
#line 379 "mode_constraint_robdd.m"
            mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVarSet_8, check_hlds__mode_constraint_robdd__V_78, &check_hlds__mode_constraint_robdd__Name_81);
          }
#line 380 "mode_constraint_robdd.m"
          {
#line 380 "mode_constraint_robdd.m"
            mercury__io__write_string_3_p_0(check_hlds__mode_constraint_robdd__Name_81);
          }
#line 381 "mode_constraint_robdd.m"
          {
#line 381 "mode_constraint_robdd.m"
            mercury__io__write_char_3_p_0((MR_Char) 95);
          }
#line 382 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__IdNum_82 = (MR_Integer) check_hlds__mode_constraint_robdd__Id_79;
#line 383 "mode_constraint_robdd.m"
          {
#line 383 "mode_constraint_robdd.m"
            mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__IdNum_82);
          }
#line 378 "mode_constraint_robdd.m"
        }
#line 370 "mode_constraint_robdd.m"
        break;
#line 370 "mode_constraint_robdd.m"
    }
#line 391 "mode_constraint_robdd.m"
    {
#line 391 "mode_constraint_robdd.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 392 "mode_constraint_robdd.m"
    {
#line 392 "mode_constraint_robdd.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(check_hlds__mode_constraint_robdd__PredId_16, &check_hlds__mode_constraint_robdd__PredIdNum_18);
    }
#line 393 "mode_constraint_robdd.m"
    {
#line 393 "mode_constraint_robdd.m"
      mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__PredIdNum_18);
    }
#line 394 "mode_constraint_robdd.m"
    {
#line 394 "mode_constraint_robdd.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 395 "mode_constraint_robdd.m"
    {
#line 395 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_36_36 = mercury__stack__depth_1_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_constraint_robdd__LambdaId_17);
    }
#line 395 "mode_constraint_robdd.m"
    {
#line 395 "mode_constraint_robdd.m"
      mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__V_36_36);
    }
#line 396 "mode_constraint_robdd.m"
    {
#line 396 "mode_constraint_robdd.m"
      mercury__io__write_string_3_p_0((MR_String) " (");
    }
#line 397 "mode_constraint_robdd.m"
    {
#line 397 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_38_38 = mercury__term__var_to_int_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__LambdaHeadVar__1_30);
    }
#line 397 "mode_constraint_robdd.m"
    {
#line 397 "mode_constraint_robdd.m"
      mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__V_38_38);
    }
#line 398 "mode_constraint_robdd.m"
    {
#line 398 "mode_constraint_robdd.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 398 "mode_constraint_robdd.m"
      return;
    }
#line 387 "mode_constraint_robdd.m"
  }
#line 387 "mode_constraint_robdd.m"
}

#line 318 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_2(
#line 318 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg)
#line 318 "mode_constraint_robdd.m"
{
#line 318 "mode_constraint_robdd.m"
  {
#line 318 "mode_constraint_robdd.m"
    struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s * check_hlds__mode_constraint_robdd__env_ptr = (struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s *) check_hlds__mode_constraint_robdd__env_ptr_arg;

#line 318 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14 = ((MR_Word) (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__conv0_Key_14);
#line 318 "mode_constraint_robdd.m"
    {
#line 318 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_1(check_hlds__mode_constraint_robdd__env_ptr);
#line 318 "mode_constraint_robdd.m"
      return;
    }
#line 318 "mode_constraint_robdd.m"
  }
#line 318 "mode_constraint_robdd.m"
}

#line 316 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_1(
#line 316 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg)
#line 316 "mode_constraint_robdd.m"
{
#line 316 "mode_constraint_robdd.m"
  {
#line 316 "mode_constraint_robdd.m"
    struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s * check_hlds__mode_constraint_robdd__env_ptr = (struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s *) check_hlds__mode_constraint_robdd__env_ptr_arg;

#line 316 "mode_constraint_robdd.m"
    {
#line 320 "mode_constraint_robdd.m"
      MR_Box check_hlds__mode_constraint_robdd__conv1_RobddVar_15;

#line 319 "mode_constraint_robdd.m"
      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14, (MR_Integer) 0)));
#line 319 "mode_constraint_robdd.m"
      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14, (MR_Integer) 1)));
#line 319 "mode_constraint_robdd.m"
      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14, (MR_Integer) 2)));
#line 319 "mode_constraint_robdd.m"
      {
#line 319 "mode_constraint_robdd.m"
        (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__PredId_10, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__V_80_80);
      }
#line 316 "mode_constraint_robdd.m"
      if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded)
#line 316 "mode_constraint_robdd.m"
        {
#line 3167 "check_hlds.mode_constraint_robdd.c"
          (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_83_83 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
#line 319 "mode_constraint_robdd.m"
          {
#line 319 "mode_constraint_robdd.m"
            (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_83_83, ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaPath_9)), ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__V_81_81)));
          }
#line 316 "mode_constraint_robdd.m"
          if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded)
#line 316 "mode_constraint_robdd.m"
            {
#line 319 "mode_constraint_robdd.m"
              (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 319 "mode_constraint_robdd.m"
              if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded)
#line 319 "mode_constraint_robdd.m"
                {
#line 319 "mode_constraint_robdd.m"
                  *((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaHeadVar__1_20) = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__V_21_21, (MR_Integer) 0)));
#line 316 "mode_constraint_robdd.m"
                  {
#line 3188 "check_hlds.mode_constraint_robdd.c"
                    (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_76_76 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
#line 320 "mode_constraint_robdd.m"
                    {
#line 320 "mode_constraint_robdd.m"
                      mercury__bimap__lookup_3_p_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeCtorInfo_75_75, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_76_76, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__VarMap_8, ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14)), &check_hlds__mode_constraint_robdd__conv1_RobddVar_15);
                    }
#line 320 "mode_constraint_robdd.m"
                    (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__RobddVar_15 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_RobddVar_15);
#line 321 "mode_constraint_robdd.m"
                    {
#line 321 "mode_constraint_robdd.m"
                      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Constraint1_12, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__RobddVar_15);
                    }
#line 321 "mode_constraint_robdd.m"
                    if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded)
#line 321 "mode_constraint_robdd.m"
                      {
#line 321 "mode_constraint_robdd.m"
                        ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont)((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont_env_ptr);
#line 321 "mode_constraint_robdd.m"
                        return;
                      }
#line 316 "mode_constraint_robdd.m"
                  }
#line 319 "mode_constraint_robdd.m"
                }
#line 316 "mode_constraint_robdd.m"
            }
#line 316 "mode_constraint_robdd.m"
        }
#line 316 "mode_constraint_robdd.m"
    }
#line 316 "mode_constraint_robdd.m"
  }
#line 316 "mode_constraint_robdd.m"
}

#line 316 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0(
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__VarMap_8,
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaPath_9,
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_10,
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Keys_11,
#line 316 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__Constraint1_12,
#line 316 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__LambdaHeadVar__1_20,
#line 316 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__cont,
#line 316 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__cont_env_ptr)
#line 316 "mode_constraint_robdd.m"
{
#line 316 "mode_constraint_robdd.m"
  {
#line 316 "mode_constraint_robdd.m"
    struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s check_hlds__mode_constraint_robdd__env;

#line 316 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__VarMap_8 = check_hlds__mode_constraint_robdd__VarMap_8;
#line 316 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaPath_9 = check_hlds__mode_constraint_robdd__LambdaPath_9;
#line 316 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__PredId_10 = check_hlds__mode_constraint_robdd__PredId_10;
#line 316 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Constraint1_12 = check_hlds__mode_constraint_robdd__Constraint1_12;
#line 316 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaHeadVar__1_20 = check_hlds__mode_constraint_robdd__LambdaHeadVar__1_20;
#line 316 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont = check_hlds__mode_constraint_robdd__cont;
#line 316 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont_env_ptr = check_hlds__mode_constraint_robdd__cont_env_ptr;
#line 3266 "check_hlds.mode_constraint_robdd.c"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeCtorInfo_75_75 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0;
#line 318 "mode_constraint_robdd.m"
    {
#line 318 "mode_constraint_robdd.m"
      mercury__list__member_2_p_1((check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeCtorInfo_75_75, &(check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__conv0_Key_14, check_hlds__mode_constraint_robdd__Keys_11, check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_2, &check_hlds__mode_constraint_robdd__env);
    }
#line 316 "mode_constraint_robdd.m"
  }
#line 316 "mode_constraint_robdd.m"
}

#line 307 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__307__1_1_f_0(
#line 307 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_67)
#line 307 "mode_constraint_robdd.m"
{
#line 307 "mode_constraint_robdd.m"
  {
#line 307 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 307 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_68;

#line 307 "mode_constraint_robdd.m"
    {
#line 307 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__HeadVar__2_68 = mercury__varset__vars_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__HeadVar__1_67);
    }
#line 307 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__2_68;
#line 307 "mode_constraint_robdd.m"
  }
#line 307 "mode_constraint_robdd.m"
}

#line 303 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__2_3_f_0(
#line 303 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_13,
#line 303 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_14,
#line 303 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_55)
#line 303 "mode_constraint_robdd.m"
{
#line 303 "mode_constraint_robdd.m"
  {
#line 303 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 303 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_56;
#line 303 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeInfo_57_57 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[1];
#line 303 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_HeadVar__4_56;

#line 303 "mode_constraint_robdd.m"
    {
#line 303 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv0_HeadVar__4_56 = mercury__std_util__compose_3_f_0(check_hlds__mode_constraint_robdd__TypeInfo_57_57, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[2], check_hlds__mode_constraint_robdd__TypeInfo_57_57, check_hlds__mode_constraint_robdd__HeadVar__1_13, check_hlds__mode_constraint_robdd__HeadVar__2_14, ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__3_55)));
    }
#line 303 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__HeadVar__4_56 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_HeadVar__4_56);
#line 303 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__4_56;
#line 303 "mode_constraint_robdd.m"
  }
#line 303 "mode_constraint_robdd.m"
}

#line 304 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__304__2_2_f_0(
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_15,
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_62)
#line 304 "mode_constraint_robdd.m"
{
#line 304 "mode_constraint_robdd.m"
  {
#line 304 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_63;

#line 304 "mode_constraint_robdd.m"
    {
#line 304 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__HeadVar__3_63 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_15, check_hlds__mode_constraint_robdd__HeadVar__2_62);
    }
#line 304 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__3_63;
#line 304 "mode_constraint_robdd.m"
  }
#line 304 "mode_constraint_robdd.m"
}

#line 304 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__304__1_4_p_0(
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MinVars_7,
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MaxVars_8,
#line 304 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_16)
#line 304 "mode_constraint_robdd.m"
{
#line 304 "mode_constraint_robdd.m"
  {
#line 304 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeInfo_66_66 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18;
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_70_70;
#line 305 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_V_18_18;
#line 306 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19;
#line 306 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 306 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_71_71;
#line 306 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv1_V_20_20;

#line 305 "mode_constraint_robdd.m"
    {
#line 305 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv0_V_18_18 = mercury__map__lookup_2_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_65_65, check_hlds__mode_constraint_robdd__TypeInfo_66_66, check_hlds__mode_constraint_robdd__MinVars_7, ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)));
    }
#line 305 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_V_18_18);
#line 305 "mode_constraint_robdd.m"
    {
#line 305 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0(check_hlds__mode_constraint_robdd__TypeInfo_66_66, &check_hlds__mode_constraint_robdd__V_70_70, ((MR_Box) (check_hlds__mode_constraint_robdd__V_18_18)), ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaHeadVar__1_16)));
    }
#line 305 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = ((MR_Integer) 1 == check_hlds__mode_constraint_robdd__V_70_70);
#line 304 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 304 "mode_constraint_robdd.m"
      {
#line 306 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_19_19 = (MR_Integer) 1;
#line 306 "mode_constraint_robdd.m"
        {
#line 306 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__conv1_V_20_20 = mercury__map__lookup_2_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_65_65, check_hlds__mode_constraint_robdd__TypeInfo_66_66, check_hlds__mode_constraint_robdd__MaxVars_8, ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)));
        }
#line 306 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_V_20_20);
#line 306 "mode_constraint_robdd.m"
        {
#line 306 "mode_constraint_robdd.m"
          mercury__builtin__compare_3_p_0(check_hlds__mode_constraint_robdd__TypeInfo_66_66, &check_hlds__mode_constraint_robdd__V_71_71, ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20)), ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaHeadVar__1_16)));
        }
#line 306 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_19_19 == check_hlds__mode_constraint_robdd__V_71_71);
#line 306 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 304 "mode_constraint_robdd.m"
      }
#line 304 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 304 "mode_constraint_robdd.m"
  }
#line 304 "mode_constraint_robdd.m"
}

#line 303 "mode_constraint_robdd.m"
static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__1_1_f_0(
#line 303 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_59)
#line 303 "mode_constraint_robdd.m"
{
#line 303 "mode_constraint_robdd.m"
  {
#line 303 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 303 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_60;

#line 303 "mode_constraint_robdd.m"
    {
#line 303 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__HeadVar__2_60 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_59);
    }
#line 303 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__2_60;
#line 303 "mode_constraint_robdd.m"
  }
#line 303 "mode_constraint_robdd.m"
}

#line 278 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__278__1_3_p_0(
#line 278 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__P0_5,
#line 278 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__MCI_6,
#line 278 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_14)
#line 278 "mode_constraint_robdd.m"
{
#line 278 "mode_constraint_robdd.m"
  {
#line 278 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 278 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__RV_10;
#line 278 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_11;
#line 278 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 1)));
#line 278 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16;
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 0)));
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 2)));
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 3)));
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 4)));
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 5)));
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 6)));
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 7)));
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 8)));
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 9)));
#line 279 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_V_16_16;
#line 279 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12;

#line 279 "mode_constraint_robdd.m"
    {
#line 279 "mode_constraint_robdd.m"
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__V_15_15, &check_hlds__mode_constraint_robdd__conv0_V_16_16, ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaHeadVar__1_14)));
    }
#line 279 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_V_16_16);
#line 279 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__RV_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_16_16, (MR_Integer) 0)));
#line 279 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_16_16, (MR_Integer) 1)));
#line 279 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_16_16, (MR_Integer) 2)));
#line 281 "mode_constraint_robdd.m"
    {
#line 281 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 2)));
#line 281 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 0)));
#line 281 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 1)));
#line 281 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 3)));
#line 281 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 4)));
#line 281 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 5)));
#line 281 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 6)));
#line 281 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 7)));
#line 281 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 8)));
#line 281 "mode_constraint_robdd.m"
      MR_Word check_hlds__mode_constraint_robdd__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 9)));

#line 281 "mode_constraint_robdd.m"
      {
#line 281 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__PredId_11, check_hlds__mode_constraint_robdd__V_39_39);
      }
#line 281 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 281 "mode_constraint_robdd.m"
    }
#line 282 "mode_constraint_robdd.m"
    if (!(check_hlds__mode_constraint_robdd__succeeded))
#line 283 "mode_constraint_robdd.m"
      {
#line 283 "mode_constraint_robdd.m"
        MR_bool MR_CALL (* check_hlds__mode_constraint_robdd__func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P0_5, (MR_Integer) 1)));

#line 283 "mode_constraint_robdd.m"
        {
#line 283 "mode_constraint_robdd.m"
          return check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__func_1(((MR_Box) check_hlds__mode_constraint_robdd__P0_5), ((MR_Box) (check_hlds__mode_constraint_robdd__RV_10)));
        }
#line 283 "mode_constraint_robdd.m"
      }
#line 278 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 278 "mode_constraint_robdd.m"
  }
#line 278 "mode_constraint_robdd.m"
}

#line 211 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(
#line 211 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 211 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 211 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 211 "mode_constraint_robdd.m"
{
#line 211 "mode_constraint_robdd.m"
  {
#line 211 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 211 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_12 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 211 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_13 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 211 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_12 == check_hlds__mode_constraint_robdd__CastY_13);
#line 211 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 3611 "check_hlds.mode_constraint_robdd.c"
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "mode_constraint_robdd.m"
    else
#line 211 "mode_constraint_robdd.m"
      {
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 2)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_10_10;

#line 211 "mode_constraint_robdd.m"
        {
#line 211 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(&check_hlds__mode_constraint_robdd__V_10_10, check_hlds__mode_constraint_robdd__V_4_4, check_hlds__mode_constraint_robdd__V_7_7);
        }
#line 3637 "check_hlds.mode_constraint_robdd.c"
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_10_10 == (MR_Integer) 0);
#line 211 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 211 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 211 "mode_constraint_robdd.m"
          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_10_10;
#line 211 "mode_constraint_robdd.m"
        else
#line 211 "mode_constraint_robdd.m"
          {
#line 211 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_11_11;

#line 211 "mode_constraint_robdd.m"
            {
#line 211 "mode_constraint_robdd.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_constraint_robdd__V_11_11, check_hlds__mode_constraint_robdd__V_5_5, check_hlds__mode_constraint_robdd__V_8_8);
            }
#line 3657 "check_hlds.mode_constraint_robdd.c"
            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_11_11 == (MR_Integer) 0);
#line 211 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 211 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 211 "mode_constraint_robdd.m"
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_11_11;
#line 211 "mode_constraint_robdd.m"
            else
#line 211 "mode_constraint_robdd.m"
              {
#line 211 "mode_constraint_robdd.m"
                {
#line 211 "mode_constraint_robdd.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)));
#line 211 "mode_constraint_robdd.m"
                  return;
                }
#line 211 "mode_constraint_robdd.m"
              }
#line 211 "mode_constraint_robdd.m"
          }
#line 211 "mode_constraint_robdd.m"
      }
#line 211 "mode_constraint_robdd.m"
  }
#line 211 "mode_constraint_robdd.m"
}

#line 211 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(
#line 211 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 211 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 211 "mode_constraint_robdd.m"
{
#line 211 "mode_constraint_robdd.m"
  {
#line 211 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 211 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_9 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 211 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_10 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 211 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_9 == check_hlds__mode_constraint_robdd__CastY_10);
#line 211 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 211 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 211 "mode_constraint_robdd.m"
    else
#line 211 "mode_constraint_robdd.m"
      {
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_12_12;
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));

#line 3730 "check_hlds.mode_constraint_robdd.c"
        {
#line 3732 "check_hlds.mode_constraint_robdd.c"
          check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(check_hlds__mode_constraint_robdd__V_3_3, check_hlds__mode_constraint_robdd__V_6_6);
        }
#line 211 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 211 "mode_constraint_robdd.m"
          {
#line 3739 "check_hlds.mode_constraint_robdd.c"
            {
#line 3741 "check_hlds.mode_constraint_robdd.c"
              check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__V_4_4, check_hlds__mode_constraint_robdd__V_7_7);
            }
#line 211 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 211 "mode_constraint_robdd.m"
              {
#line 3748 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__TypeInfo_12_12 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
#line 3750 "check_hlds.mode_constraint_robdd.c"
                {
#line 3752 "check_hlds.mode_constraint_robdd.c"
                  return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_12_12, ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8)));
                }
#line 211 "mode_constraint_robdd.m"
              }
#line 211 "mode_constraint_robdd.m"
          }
#line 211 "mode_constraint_robdd.m"
      }
#line 211 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 211 "mode_constraint_robdd.m"
  }
#line 211 "mode_constraint_robdd.m"
}

#line 193 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0(
#line 193 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 193 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 193 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 193 "mode_constraint_robdd.m"
{
#line 193 "mode_constraint_robdd.m"
  {
#line 193 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 193 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_6 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 193 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_7 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 193 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_6 == check_hlds__mode_constraint_robdd__CastY_7);
#line 193 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 3792 "check_hlds.mode_constraint_robdd.c"
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 193 "mode_constraint_robdd.m"
    else
#line 193 "mode_constraint_robdd.m"
      {
#line 193 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 193 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 193 "mode_constraint_robdd.m"
        {
#line 193 "mode_constraint_robdd.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)));
#line 193 "mode_constraint_robdd.m"
          return;
        }
#line 193 "mode_constraint_robdd.m"
      }
#line 193 "mode_constraint_robdd.m"
  }
#line 193 "mode_constraint_robdd.m"
}

#line 193 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0(
#line 193 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 193 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 193 "mode_constraint_robdd.m"
{
#line 193 "mode_constraint_robdd.m"
  {
#line 193 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 193 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_5 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 193 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_6 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 193 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_5 == check_hlds__mode_constraint_robdd__CastY_6);
#line 193 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 193 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 193 "mode_constraint_robdd.m"
    else
#line 193 "mode_constraint_robdd.m"
      {
#line 193 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_3_3 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 193 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 3850 "check_hlds.mode_constraint_robdd.c"
        {
#line 3852 "check_hlds.mode_constraint_robdd.c"
          return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__V_3_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)));
        }
#line 193 "mode_constraint_robdd.m"
      }
#line 193 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 193 "mode_constraint_robdd.m"
  }
#line 193 "mode_constraint_robdd.m"
}

#line 203 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(
#line 203 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 203 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 203 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 203 "mode_constraint_robdd.m"
{
#line 203 "mode_constraint_robdd.m"
  {
#line 203 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 203 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 203 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 203 "mode_constraint_robdd.m"
    {
#line 203 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
#line 203 "mode_constraint_robdd.m"
      return;
    }
#line 203 "mode_constraint_robdd.m"
  }
#line 203 "mode_constraint_robdd.m"
}

#line 203 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(
#line 203 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 203 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 203 "mode_constraint_robdd.m"
{
#line 203 "mode_constraint_robdd.m"
  {
#line 203 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 203 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 203 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 203 "mode_constraint_robdd.m"
    {
#line 203 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
#line 203 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 203 "mode_constraint_robdd.m"
  }
#line 203 "mode_constraint_robdd.m"
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
#line 3950 "check_hlds.mode_constraint_robdd.c"
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "mode_constraint_robdd.m"
    else
#line 54 "mode_constraint_robdd.m"
#line 54 "mode_constraint_robdd.m"
      switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2)) {
#line 54 "mode_constraint_robdd.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 54 "mode_constraint_robdd.m"
        case (MR_Integer) 0:
#line 54 "mode_constraint_robdd.m"
          {
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "mode_constraint_robdd.m"
#line 54 "mode_constraint_robdd.m"
            switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) {
#line 54 "mode_constraint_robdd.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 54 "mode_constraint_robdd.m"
              case (MR_Integer) 0:
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
                break;
#line 54 "mode_constraint_robdd.m"
              case (MR_Integer) 1:
#line 3991 "check_hlds.mode_constraint_robdd.c"
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "mode_constraint_robdd.m"
                break;
#line 54 "mode_constraint_robdd.m"
              case (MR_Integer) 2:
#line 3997 "check_hlds.mode_constraint_robdd.c"
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "mode_constraint_robdd.m"
                break;
#line 54 "mode_constraint_robdd.m"
            }
#line 54 "mode_constraint_robdd.m"
          }
#line 54 "mode_constraint_robdd.m"
          break;
#line 54 "mode_constraint_robdd.m"
        case (MR_Integer) 1:
#line 54 "mode_constraint_robdd.m"
          {
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "mode_constraint_robdd.m"
#line 54 "mode_constraint_robdd.m"
            switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) {
#line 54 "mode_constraint_robdd.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 54 "mode_constraint_robdd.m"
              case (MR_Integer) 0:
#line 4021 "check_hlds.mode_constraint_robdd.c"
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "mode_constraint_robdd.m"
                break;
#line 54 "mode_constraint_robdd.m"
              case (MR_Integer) 1:
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
                break;
#line 54 "mode_constraint_robdd.m"
              case (MR_Integer) 2:
#line 4045 "check_hlds.mode_constraint_robdd.c"
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "mode_constraint_robdd.m"
                break;
#line 54 "mode_constraint_robdd.m"
            }
#line 54 "mode_constraint_robdd.m"
          }
#line 54 "mode_constraint_robdd.m"
          break;
#line 54 "mode_constraint_robdd.m"
        case (MR_Integer) 2:
#line 54 "mode_constraint_robdd.m"
          {
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "mode_constraint_robdd.m"
#line 54 "mode_constraint_robdd.m"
            switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) {
#line 54 "mode_constraint_robdd.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 54 "mode_constraint_robdd.m"
              case (MR_Integer) 0:
#line 4071 "check_hlds.mode_constraint_robdd.c"
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "mode_constraint_robdd.m"
                break;
#line 54 "mode_constraint_robdd.m"
              case (MR_Integer) 1:
#line 4077 "check_hlds.mode_constraint_robdd.c"
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "mode_constraint_robdd.m"
                break;
#line 54 "mode_constraint_robdd.m"
              case (MR_Integer) 2:
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
#line 4097 "check_hlds.mode_constraint_robdd.c"
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
                break;
#line 54 "mode_constraint_robdd.m"
            }
#line 54 "mode_constraint_robdd.m"
          }
#line 54 "mode_constraint_robdd.m"
          break;
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
#line 54 "mode_constraint_robdd.m"
      switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__1_1)) {
#line 54 "mode_constraint_robdd.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 54 "mode_constraint_robdd.m"
        case (MR_Integer) 0:
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
#line 4190 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__TypeInfo_15_15 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4];
#line 4192 "check_hlds.mode_constraint_robdd.c"
                {
#line 4194 "check_hlds.mode_constraint_robdd.c"
                  return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_15_15, ((MR_Box) (check_hlds__mode_constraint_robdd__V_3_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)));
                }
#line 54 "mode_constraint_robdd.m"
              }
#line 54 "mode_constraint_robdd.m"
          }
#line 54 "mode_constraint_robdd.m"
          break;
#line 54 "mode_constraint_robdd.m"
        case (MR_Integer) 1:
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
#line 4222 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__TypeInfo_16_16 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4];
#line 4224 "check_hlds.mode_constraint_robdd.c"
                {
#line 4226 "check_hlds.mode_constraint_robdd.c"
                  return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_16_16, ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6)));
                }
#line 54 "mode_constraint_robdd.m"
              }
#line 54 "mode_constraint_robdd.m"
          }
#line 54 "mode_constraint_robdd.m"
          break;
#line 54 "mode_constraint_robdd.m"
        case (MR_Integer) 2:
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
#line 4264 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__TypeInfo_13_13 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4];
#line 4266 "check_hlds.mode_constraint_robdd.c"
                {
#line 4268 "check_hlds.mode_constraint_robdd.c"
                  check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_13_13, ((MR_Box) (check_hlds__mode_constraint_robdd__V_7_7)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)));
                }
#line 54 "mode_constraint_robdd.m"
                if (check_hlds__mode_constraint_robdd__succeeded)
#line 54 "mode_constraint_robdd.m"
                  {
#line 4275 "check_hlds.mode_constraint_robdd.c"
                    check_hlds__mode_constraint_robdd__V_17_17 = (MR_Integer) check_hlds__mode_constraint_robdd__V_8_8;
#line 4277 "check_hlds.mode_constraint_robdd.c"
                    check_hlds__mode_constraint_robdd__V_18_18 = (MR_Integer) check_hlds__mode_constraint_robdd__V_10_10;
#line 4279 "check_hlds.mode_constraint_robdd.c"
                    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_17_17 == check_hlds__mode_constraint_robdd__V_18_18);
#line 54 "mode_constraint_robdd.m"
                  }
#line 54 "mode_constraint_robdd.m"
              }
#line 54 "mode_constraint_robdd.m"
          }
#line 54 "mode_constraint_robdd.m"
          break;
#line 54 "mode_constraint_robdd.m"
      }
#line 54 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 54 "mode_constraint_robdd.m"
  }
#line 54 "mode_constraint_robdd.m"
}

#line 256 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0(
#line 256 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 256 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 256 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 256 "mode_constraint_robdd.m"
{
#line 256 "mode_constraint_robdd.m"
  {
#line 256 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 256 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_12 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 256 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_13 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 256 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_12 == check_hlds__mode_constraint_robdd__CastY_13);
#line 256 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 4322 "check_hlds.mode_constraint_robdd.c"
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 256 "mode_constraint_robdd.m"
    else
#line 256 "mode_constraint_robdd.m"
      {
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 2)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_10_10;

#line 256 "mode_constraint_robdd.m"
        {
#line 256 "mode_constraint_robdd.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], &check_hlds__mode_constraint_robdd__V_10_10, ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_7_7)));
        }
#line 4348 "check_hlds.mode_constraint_robdd.c"
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_10_10 == (MR_Integer) 0);
#line 256 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 256 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 256 "mode_constraint_robdd.m"
          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_10_10;
#line 256 "mode_constraint_robdd.m"
        else
#line 256 "mode_constraint_robdd.m"
          {
#line 256 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_11_11;

#line 256 "mode_constraint_robdd.m"
            {
#line 256 "mode_constraint_robdd.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_constraint_robdd__V_11_11, check_hlds__mode_constraint_robdd__V_5_5, check_hlds__mode_constraint_robdd__V_8_8);
            }
#line 4368 "check_hlds.mode_constraint_robdd.c"
            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_11_11 == (MR_Integer) 0);
#line 256 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 256 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 256 "mode_constraint_robdd.m"
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_11_11;
#line 256 "mode_constraint_robdd.m"
            else
#line 256 "mode_constraint_robdd.m"
              {
#line 256 "mode_constraint_robdd.m"
                {
#line 256 "mode_constraint_robdd.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)));
#line 256 "mode_constraint_robdd.m"
                  return;
                }
#line 256 "mode_constraint_robdd.m"
              }
#line 256 "mode_constraint_robdd.m"
          }
#line 256 "mode_constraint_robdd.m"
      }
#line 256 "mode_constraint_robdd.m"
  }
#line 256 "mode_constraint_robdd.m"
}

#line 256 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0(
#line 256 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 256 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 256 "mode_constraint_robdd.m"
{
#line 256 "mode_constraint_robdd.m"
  {
#line 256 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 256 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_9 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 256 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_10 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 256 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_9 == check_hlds__mode_constraint_robdd__CastY_10);
#line 256 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 256 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 256 "mode_constraint_robdd.m"
    else
#line 256 "mode_constraint_robdd.m"
      {
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_13_13;
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 256 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));

#line 4441 "check_hlds.mode_constraint_robdd.c"
        {
#line 4443 "check_hlds.mode_constraint_robdd.c"
          check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], ((MR_Box) (check_hlds__mode_constraint_robdd__V_3_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6)));
        }
#line 256 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 256 "mode_constraint_robdd.m"
          {
#line 4450 "check_hlds.mode_constraint_robdd.c"
            {
#line 4452 "check_hlds.mode_constraint_robdd.c"
              check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__V_4_4, check_hlds__mode_constraint_robdd__V_7_7);
            }
#line 256 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 256 "mode_constraint_robdd.m"
              {
#line 4459 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__TypeInfo_13_13 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
#line 4461 "check_hlds.mode_constraint_robdd.c"
                {
#line 4463 "check_hlds.mode_constraint_robdd.c"
                  return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_13_13, ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8)));
                }
#line 256 "mode_constraint_robdd.m"
              }
#line 256 "mode_constraint_robdd.m"
          }
#line 256 "mode_constraint_robdd.m"
      }
#line 256 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 256 "mode_constraint_robdd.m"
  }
#line 256 "mode_constraint_robdd.m"
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

#line 205 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(
#line 205 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 205 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 205 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 205 "mode_constraint_robdd.m"
{
#line 205 "mode_constraint_robdd.m"
  {
#line 205 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 205 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 205 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 205 "mode_constraint_robdd.m"
    {
#line 205 "mode_constraint_robdd.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
#line 205 "mode_constraint_robdd.m"
      return;
    }
#line 205 "mode_constraint_robdd.m"
  }
#line 205 "mode_constraint_robdd.m"
}

#line 205 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(
#line 205 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 205 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 205 "mode_constraint_robdd.m"
{
#line 205 "mode_constraint_robdd.m"
  {
#line 205 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 205 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 205 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 205 "mode_constraint_robdd.m"
    {
#line 205 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
#line 205 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 205 "mode_constraint_robdd.m"
  }
#line 205 "mode_constraint_robdd.m"
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

#line 172 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(
#line 172 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 172 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
#line 172 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
#line 172 "mode_constraint_robdd.m"
{
#line 172 "mode_constraint_robdd.m"
  {
#line 172 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 172 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_33 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
#line 172 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_34 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

#line 172 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_33 == check_hlds__mode_constraint_robdd__CastY_34);
#line 172 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 4751 "check_hlds.mode_constraint_robdd.c"
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
#line 172 "mode_constraint_robdd.m"
    else
#line 172 "mode_constraint_robdd.m"
      {
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 3)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 4)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 5)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 6)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 7)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 8)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 9)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 2)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 3)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 4)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 5)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 6)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 7)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 8)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 9)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_24_24;

#line 172 "mode_constraint_robdd.m"
        {
#line 172 "mode_constraint_robdd.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[3], &check_hlds__mode_constraint_robdd__V_24_24, ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14)));
        }
#line 4805 "check_hlds.mode_constraint_robdd.c"
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_24_24 == (MR_Integer) 0);
#line 172 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 172 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_24_24;
#line 172 "mode_constraint_robdd.m"
        else
#line 172 "mode_constraint_robdd.m"
          {
#line 172 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_25_25;

#line 172 "mode_constraint_robdd.m"
            {
#line 172 "mode_constraint_robdd.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3], &check_hlds__mode_constraint_robdd__V_25_25, ((MR_Box) (check_hlds__mode_constraint_robdd__V_5_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_15_15)));
            }
#line 4825 "check_hlds.mode_constraint_robdd.c"
            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_25_25 == (MR_Integer) 0);
#line 172 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 172 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_25_25;
#line 172 "mode_constraint_robdd.m"
            else
#line 172 "mode_constraint_robdd.m"
              {
#line 172 "mode_constraint_robdd.m"
                MR_Word check_hlds__mode_constraint_robdd__V_26_26;

#line 172 "mode_constraint_robdd.m"
                {
#line 172 "mode_constraint_robdd.m"
                  hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_constraint_robdd__V_26_26, check_hlds__mode_constraint_robdd__V_6_6, check_hlds__mode_constraint_robdd__V_16_16);
                }
#line 4845 "check_hlds.mode_constraint_robdd.c"
                check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_26_26 == (MR_Integer) 0);
#line 172 "mode_constraint_robdd.m"
                check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 172 "mode_constraint_robdd.m"
                if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                  *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_26_26;
#line 172 "mode_constraint_robdd.m"
                else
#line 172 "mode_constraint_robdd.m"
                  {
#line 172 "mode_constraint_robdd.m"
                    MR_Word check_hlds__mode_constraint_robdd__V_27_27;

#line 172 "mode_constraint_robdd.m"
                    {
#line 172 "mode_constraint_robdd.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], &check_hlds__mode_constraint_robdd__V_27_27, ((MR_Box) (check_hlds__mode_constraint_robdd__V_7_7)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_17_17)));
                    }
#line 4865 "check_hlds.mode_constraint_robdd.c"
                    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_27_27 == (MR_Integer) 0);
#line 172 "mode_constraint_robdd.m"
                    check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 172 "mode_constraint_robdd.m"
                    if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_27_27;
#line 172 "mode_constraint_robdd.m"
                    else
#line 172 "mode_constraint_robdd.m"
                      {
#line 172 "mode_constraint_robdd.m"
                        MR_Word check_hlds__mode_constraint_robdd__V_28_28;

#line 172 "mode_constraint_robdd.m"
                        {
#line 172 "mode_constraint_robdd.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4], &check_hlds__mode_constraint_robdd__V_28_28, ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_18_18)));
                        }
#line 4885 "check_hlds.mode_constraint_robdd.c"
                        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_28_28 == (MR_Integer) 0);
#line 172 "mode_constraint_robdd.m"
                        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 172 "mode_constraint_robdd.m"
                        if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_28_28;
#line 172 "mode_constraint_robdd.m"
                        else
#line 172 "mode_constraint_robdd.m"
                          {
#line 172 "mode_constraint_robdd.m"
                            MR_Word check_hlds__mode_constraint_robdd__V_29_29;

#line 172 "mode_constraint_robdd.m"
                            {
#line 172 "mode_constraint_robdd.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4], &check_hlds__mode_constraint_robdd__V_29_29, ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_19_19)));
                            }
#line 4905 "check_hlds.mode_constraint_robdd.c"
                            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_29_29 == (MR_Integer) 0);
#line 172 "mode_constraint_robdd.m"
                            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 172 "mode_constraint_robdd.m"
                            if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_29_29;
#line 172 "mode_constraint_robdd.m"
                            else
#line 172 "mode_constraint_robdd.m"
                              {
#line 172 "mode_constraint_robdd.m"
                                MR_Word check_hlds__mode_constraint_robdd__V_30_30;

#line 172 "mode_constraint_robdd.m"
                                {
#line 172 "mode_constraint_robdd.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], &check_hlds__mode_constraint_robdd__V_30_30, ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20)));
                                }
#line 4925 "check_hlds.mode_constraint_robdd.c"
                                check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_30_30 == (MR_Integer) 0);
#line 172 "mode_constraint_robdd.m"
                                check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 172 "mode_constraint_robdd.m"
                                if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                                  *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_30_30;
#line 172 "mode_constraint_robdd.m"
                                else
#line 172 "mode_constraint_robdd.m"
                                  {
#line 172 "mode_constraint_robdd.m"
                                    MR_Word check_hlds__mode_constraint_robdd__V_31_31;

#line 172 "mode_constraint_robdd.m"
                                    {
#line 172 "mode_constraint_robdd.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], &check_hlds__mode_constraint_robdd__V_31_31, ((MR_Box) (check_hlds__mode_constraint_robdd__V_11_11)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_21_21)));
                                    }
#line 4945 "check_hlds.mode_constraint_robdd.c"
                                    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_31_31 == (MR_Integer) 0);
#line 172 "mode_constraint_robdd.m"
                                    check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 172 "mode_constraint_robdd.m"
                                    if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                                      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_31_31;
#line 172 "mode_constraint_robdd.m"
                                    else
#line 172 "mode_constraint_robdd.m"
                                      {
#line 172 "mode_constraint_robdd.m"
                                        MR_Word check_hlds__mode_constraint_robdd__V_32_32;
#line 172 "mode_constraint_robdd.m"
                                        MR_Integer check_hlds__mode_constraint_robdd__V_45_45 = (MR_Integer) check_hlds__mode_constraint_robdd__V_12_12;
#line 172 "mode_constraint_robdd.m"
                                        MR_Integer check_hlds__mode_constraint_robdd__V_46_46 = (MR_Integer) check_hlds__mode_constraint_robdd__V_22_22;

#line 172 "mode_constraint_robdd.m"
                                        {
#line 172 "mode_constraint_robdd.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_constraint_robdd__V_32_32, check_hlds__mode_constraint_robdd__V_45_45, check_hlds__mode_constraint_robdd__V_46_46);
                                        }
#line 4969 "check_hlds.mode_constraint_robdd.c"
                                        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_32_32 == (MR_Integer) 0);
#line 172 "mode_constraint_robdd.m"
                                        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
#line 172 "mode_constraint_robdd.m"
                                        if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                                          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__V_32_32;
#line 172 "mode_constraint_robdd.m"
                                        else
#line 172 "mode_constraint_robdd.m"
                                          {
#line 172 "mode_constraint_robdd.m"
                                            {
#line 172 "mode_constraint_robdd.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23)));
#line 172 "mode_constraint_robdd.m"
                                              return;
                                            }
#line 172 "mode_constraint_robdd.m"
                                          }
#line 172 "mode_constraint_robdd.m"
                                      }
#line 172 "mode_constraint_robdd.m"
                                  }
#line 172 "mode_constraint_robdd.m"
                              }
#line 172 "mode_constraint_robdd.m"
                          }
#line 172 "mode_constraint_robdd.m"
                      }
#line 172 "mode_constraint_robdd.m"
                  }
#line 172 "mode_constraint_robdd.m"
              }
#line 172 "mode_constraint_robdd.m"
          }
#line 172 "mode_constraint_robdd.m"
      }
#line 172 "mode_constraint_robdd.m"
  }
#line 172 "mode_constraint_robdd.m"
}

#line 172 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(
#line 172 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
#line 172 "mode_constraint_robdd.m"
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
#line 172 "mode_constraint_robdd.m"
{
#line 172 "mode_constraint_robdd.m"
  {
#line 172 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 172 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastX_23 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 172 "mode_constraint_robdd.m"
    MR_Integer check_hlds__mode_constraint_robdd__CastY_24 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

#line 172 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_23 == check_hlds__mode_constraint_robdd__CastY_24);
#line 172 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 172 "mode_constraint_robdd.m"
    else
#line 172 "mode_constraint_robdd.m"
      {
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_26_26;
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_28_28;
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_29_29;
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_30_30;
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_31_31;
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_32_32;
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_33_33;
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 3)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 4)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 5)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 6)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 7)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 8)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 9)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 3)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 4)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 5)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 6)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 7)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 8)));
#line 172 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 9)));

#line 5096 "check_hlds.mode_constraint_robdd.c"
        {
#line 5098 "check_hlds.mode_constraint_robdd.c"
          check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[3], ((MR_Box) (check_hlds__mode_constraint_robdd__V_3_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13)));
        }
#line 172 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
          {
#line 5105 "check_hlds.mode_constraint_robdd.c"
            check_hlds__mode_constraint_robdd__TypeInfo_26_26 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3];
#line 5107 "check_hlds.mode_constraint_robdd.c"
            {
#line 5109 "check_hlds.mode_constraint_robdd.c"
              check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_26_26, ((MR_Box) (check_hlds__mode_constraint_robdd__V_4_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14)));
            }
#line 172 "mode_constraint_robdd.m"
            if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
              {
#line 5116 "check_hlds.mode_constraint_robdd.c"
                {
#line 5118 "check_hlds.mode_constraint_robdd.c"
                  check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__V_5_5, check_hlds__mode_constraint_robdd__V_15_15);
                }
#line 172 "mode_constraint_robdd.m"
                if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                  {
#line 5125 "check_hlds.mode_constraint_robdd.c"
                    check_hlds__mode_constraint_robdd__TypeInfo_28_28 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
#line 5127 "check_hlds.mode_constraint_robdd.c"
                    {
#line 5129 "check_hlds.mode_constraint_robdd.c"
                      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_28_28, ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_16_16)));
                    }
#line 172 "mode_constraint_robdd.m"
                    if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                      {
#line 5136 "check_hlds.mode_constraint_robdd.c"
                        check_hlds__mode_constraint_robdd__TypeInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4];
#line 5138 "check_hlds.mode_constraint_robdd.c"
                        {
#line 5140 "check_hlds.mode_constraint_robdd.c"
                          check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_29_29, ((MR_Box) (check_hlds__mode_constraint_robdd__V_7_7)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_17_17)));
                        }
#line 172 "mode_constraint_robdd.m"
                        if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                          {
#line 5147 "check_hlds.mode_constraint_robdd.c"
                            check_hlds__mode_constraint_robdd__TypeInfo_30_30 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4];
#line 5149 "check_hlds.mode_constraint_robdd.c"
                            {
#line 5151 "check_hlds.mode_constraint_robdd.c"
                              check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_30_30, ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_18_18)));
                            }
#line 172 "mode_constraint_robdd.m"
                            if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                              {
#line 5158 "check_hlds.mode_constraint_robdd.c"
                                check_hlds__mode_constraint_robdd__TypeInfo_31_31 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6];
#line 5160 "check_hlds.mode_constraint_robdd.c"
                                {
#line 5162 "check_hlds.mode_constraint_robdd.c"
                                  check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_31_31, ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_19_19)));
                                }
#line 172 "mode_constraint_robdd.m"
                                if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                                  {
#line 5169 "check_hlds.mode_constraint_robdd.c"
                                    check_hlds__mode_constraint_robdd__TypeInfo_32_32 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
#line 5171 "check_hlds.mode_constraint_robdd.c"
                                    {
#line 5173 "check_hlds.mode_constraint_robdd.c"
                                      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_32_32, ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20)));
                                    }
#line 172 "mode_constraint_robdd.m"
                                    if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                                      {
#line 5180 "check_hlds.mode_constraint_robdd.c"
                                        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_11_11 == check_hlds__mode_constraint_robdd__V_21_21);
#line 172 "mode_constraint_robdd.m"
                                        if (check_hlds__mode_constraint_robdd__succeeded)
#line 172 "mode_constraint_robdd.m"
                                          {
#line 5186 "check_hlds.mode_constraint_robdd.c"
                                            check_hlds__mode_constraint_robdd__TypeInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[5];
#line 5188 "check_hlds.mode_constraint_robdd.c"
                                            {
#line 5190 "check_hlds.mode_constraint_robdd.c"
                                              return check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_33_33, ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12)), ((MR_Box) (check_hlds__mode_constraint_robdd__V_22_22)));
                                            }
#line 172 "mode_constraint_robdd.m"
                                          }
#line 172 "mode_constraint_robdd.m"
                                      }
#line 172 "mode_constraint_robdd.m"
                                  }
#line 172 "mode_constraint_robdd.m"
                              }
#line 172 "mode_constraint_robdd.m"
                          }
#line 172 "mode_constraint_robdd.m"
                      }
#line 172 "mode_constraint_robdd.m"
                  }
#line 172 "mode_constraint_robdd.m"
              }
#line 172 "mode_constraint_robdd.m"
          }
#line 172 "mode_constraint_robdd.m"
      }
#line 172 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 172 "mode_constraint_robdd.m"
  }
#line 172 "mode_constraint_robdd.m"
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

#line 169 "mode_constraint_robdd.m"
void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0(
#line 169 "mode_constraint_robdd.m"
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1)
#line 169 "mode_constraint_robdd.m"
{
#line 169 "mode_constraint_robdd.m"
  {
#line 169 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 169 "mode_constraint_robdd.m"
    {
#line 169 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(check_hlds__mode_constraint_robdd__HeadVar__1_1);
#line 169 "mode_constraint_robdd.m"
      return;
    }
#line 169 "mode_constraint_robdd.m"
  }
#line 169 "mode_constraint_robdd.m"
}

#line 169 "mode_constraint_robdd.m"
MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0(void)
#line 169 "mode_constraint_robdd.m"
{
#line 169 "mode_constraint_robdd.m"
  {
#line 169 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

#line 169 "mode_constraint_robdd.m"
    {
#line 169 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 169 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 169 "mode_constraint_robdd.m"
  }
#line 169 "mode_constraint_robdd.m"
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

#line 406 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1(
#line 406 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 406 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 406 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 406 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 406 "mode_constraint_robdd.m"
{
#line 406 "mode_constraint_robdd.m"
  {
#line 406 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
#line 406 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__conv0_LambdaHeadVar__3_27;

#line 406 "mode_constraint_robdd.m"
    {
#line 406 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__422__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), &check_hlds__mode_constraint_robdd__conv0_LambdaHeadVar__3_27);
    }
#line 406 "mode_constraint_robdd.m"
    *check_hlds__mode_constraint_robdd__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_LambdaHeadVar__3_27));
#line 406 "mode_constraint_robdd.m"
  }
#line 406 "mode_constraint_robdd.m"
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
#line 427 "mode_constraint_robdd.m"
  {
#line 427 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 427 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ProdVarsMap_6;
#line 427 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarsEntailed_7;
#line 405 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 405 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21;

#line 405 "mode_constraint_robdd.m"
    {
#line 405 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_21_21 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__Constraint_4);
    }
#line 405 "mode_constraint_robdd.m"
    {
#line 405 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_20_20 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__V_21_21);
    }
#line 405 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 405 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 405 "mode_constraint_robdd.m"
      {
#line 405 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__VarsEntailed_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__V_20_20, (MR_Integer) 0)));
#line 406 "mode_constraint_robdd.m"
        {
#line 406 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_22_22;
#line 406 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 406 "mode_constraint_robdd.m"
          MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 406 "mode_constraint_robdd.m"
          MR_Box check_hlds__mode_constraint_robdd__conv1_ProdVarsMap_6;

#line 406 "mode_constraint_robdd.m"
          {
#line 406 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "mode_constraint_robdd.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_22_22, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[2]));
#line 406 "mode_constraint_robdd.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_22_22, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1));
#line 406 "mode_constraint_robdd.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 406 "mode_constraint_robdd.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_22_22, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__MCI_5));
#line 406 "mode_constraint_robdd.m"
          }
#line 425 "mode_constraint_robdd.m"
          {
#line 425 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_23_23 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[1], check_hlds__mode_constraint_robdd__VarsEntailed_7);
          }
#line 426 "mode_constraint_robdd.m"
          {
#line 426 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_24_24 = mercury__map__init_0_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6]);
          }
#line 406 "mode_constraint_robdd.m"
          {
#line 406 "mode_constraint_robdd.m"
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[2], check_hlds__mode_constraint_robdd__V_22_22, check_hlds__mode_constraint_robdd__V_23_23, ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24)), &check_hlds__mode_constraint_robdd__conv1_ProdVarsMap_6);
          }
#line 406 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__ProdVarsMap_6 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_ProdVarsMap_6);
#line 406 "mode_constraint_robdd.m"
        }
#line 405 "mode_constraint_robdd.m"
      }
#line 405 "mode_constraint_robdd.m"
    else
#line 428 "mode_constraint_robdd.m"
      {
#line 428 "mode_constraint_robdd.m"
        {
#line 428 "mode_constraint_robdd.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_constraint_robdd", (MR_String) "function \140check_hlds.mode_constraint_robdd.atomic_prodvars_map\'/2", (MR_String) "zero constraint");
        }
#line 428 "mode_constraint_robdd.m"
      }
#line 427 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__ProdVarsMap_6;
#line 427 "mode_constraint_robdd.m"
  }
#line 152 "mode_constraint_robdd.m"
}

#line 387 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1(
#line 387 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 387 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 387 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
#line 387 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3)
#line 387 "mode_constraint_robdd.m"
{
#line 387 "mode_constraint_robdd.m"
  {
#line 387 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

#line 387 "mode_constraint_robdd.m"
    {
#line 387 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__387__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
#line 387 "mode_constraint_robdd.m"
      return;
    }
#line 387 "mode_constraint_robdd.m"
  }
#line 387 "mode_constraint_robdd.m"
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
#line 385 "mode_constraint_robdd.m"
  {
#line 385 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 385 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58;
#line 385 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 1)));
#line 385 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__P_13;
#line 385 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_40_40;
#line 386 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 0)));
#line 386 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 2)));
#line 386 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 3)));
#line 386 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 4)));
#line 386 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 5)));
#line 386 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 6)));
#line 386 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 7)));
#line 386 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 8)));
#line 386 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 9)));

#line 387 "mode_constraint_robdd.m"
    {
#line 387 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__P_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 387 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_7[0]));
#line 387 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1));
#line 387 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 387 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__ProgVarSet_8));
#line 387 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__VarMap_12));
#line 387 "mode_constraint_robdd.m"
    }
#line 5616 "check_hlds.mode_constraint_robdd.c"
    check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 400 "mode_constraint_robdd.m"
    {
#line 400 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_40_40 = mode_robdd__tfeirn__robdd_1_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58, check_hlds__mode_constraint_robdd__Constraint_7);
    }
#line 400 "mode_constraint_robdd.m"
    {
#line 400 "mode_constraint_robdd.m"
      mercury__robdd__robdd_to_dot_5_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58, check_hlds__mode_constraint_robdd__V_40_40, check_hlds__mode_constraint_robdd__P_13, check_hlds__mode_constraint_robdd__FileName_10);
#line 400 "mode_constraint_robdd.m"
      return;
    }
#line 385 "mode_constraint_robdd.m"
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
#line 341 "mode_constraint_robdd.m"
  {
#line 341 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 341 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 9)));
#line 341 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap_9;
#line 342 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 0)));
#line 342 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 1)));
#line 342 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 2)));
#line 342 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 3)));
#line 342 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 4)));
#line 342 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 5)));
#line 342 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 6)));
#line 342 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 7)));
#line 342 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 8)));
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22;
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25;
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29;
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30;
#line 345 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31;

#line 343 "mode_constraint_robdd.m"
    {
#line 343 "mode_constraint_robdd.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0], ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__ForwardGoalPathMap_6)), check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap0_8, &check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap_9);
    }
#line 345 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 0)));
#line 345 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 1)));
#line 345 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 2)));
#line 345 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 3)));
#line 345 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 4)));
#line 345 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 5)));
#line 345 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 6)));
#line 345 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 7)));
#line 345 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 8)));
#line 345 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 9)));
#line 345 "mode_constraint_robdd.m"
    {
#line 345 "mode_constraint_robdd.m"
      MR_Word base;
#line 345 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 345 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_11 = base;
#line 345 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_22_22));
#line 345 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23));
#line 345 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24));
#line 345 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_25_25));
#line 345 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_26_26));
#line 345 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_27_27));
#line 345 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_28_28));
#line 345 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_29_29));
#line 345 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_30_30));
#line 345 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap_9));
#line 345 "mode_constraint_robdd.m"
    }
#line 341 "mode_constraint_robdd.m"
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
#line 338 "mode_constraint_robdd.m"
  {
#line 338 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 338 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
#line 339 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
#line 339 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_6;

#line 339 "mode_constraint_robdd.m"
    {
#line 339 "mode_constraint_robdd.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0], check_hlds__mode_constraint_robdd__V_7_7, ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)), &check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_6);
    }
#line 339 "mode_constraint_robdd.m"
    *check_hlds__mode_constraint_robdd__ForwardGoalPathMap_6 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_6);
#line 338 "mode_constraint_robdd.m"
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
#line 335 "mode_constraint_robdd.m"
  {
#line 335 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 335 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 9)));
#line 335 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 2)));
#line 336 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 0)));
#line 336 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 1)));
#line 336 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 3)));
#line 336 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 4)));
#line 336 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 5)));
#line 336 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 6)));
#line 336 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 7)));
#line 336 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 8)));
#line 336 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_4;

#line 336 "mode_constraint_robdd.m"
    {
#line 336 "mode_constraint_robdd.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0], check_hlds__mode_constraint_robdd__V_5_5, ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9)), &check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_4);
    }
#line 336 "mode_constraint_robdd.m"
    *check_hlds__mode_constraint_robdd__ForwardGoalPathMap_4 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_4);
#line 335 "mode_constraint_robdd.m"
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
#line 332 "mode_constraint_robdd.m"
  {
#line 332 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 332 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 8)));
#line 333 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 0)));
#line 333 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 1)));
#line 333 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 2)));
#line 333 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 3)));
#line 333 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 4)));
#line 333 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 5)));
#line 333 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 6)));
#line 333 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 7)));
#line 333 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 9)));

#line 333 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__V_3_3 == (MR_Integer) 1);
#line 332 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 332 "mode_constraint_robdd.m"
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
#line 329 "mode_constraint_robdd.m"
  {
#line 329 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 330 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 0)));
#line 330 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 1)));
#line 330 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 2)));
#line 330 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 3)));
#line 330 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 4)));
#line 330 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 5)));
#line 330 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 6)));
#line 330 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 7)));
#line 330 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 9)));
#line 330 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 8)));

#line 330 "mode_constraint_robdd.m"
    {
#line 330 "mode_constraint_robdd.m"
      MR_Word base;
#line 330 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 330 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_5 = base;
#line 330 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8));
#line 330 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9));
#line 330 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10));
#line 330 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_11_11));
#line 330 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12));
#line 330 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 330 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14));
#line 330 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_15_15));
#line 330 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 330 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_17_17));
#line 330 "mode_constraint_robdd.m"
    }
#line 329 "mode_constraint_robdd.m"
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
#line 326 "mode_constraint_robdd.m"
  {
#line 326 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 0)));
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 1)));
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 2)));
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 3)));
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 4)));
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 5)));
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 6)));
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 7)));
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 9)));
#line 327 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 8)));

#line 327 "mode_constraint_robdd.m"
    {
#line 327 "mode_constraint_robdd.m"
      MR_Word base;
#line 327 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 327 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_5 = base;
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_11_11));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_15_15));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
#line 327 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_17_17));
#line 327 "mode_constraint_robdd.m"
    }
#line 326 "mode_constraint_robdd.m"
  }
#line 118 "mode_constraint_robdd.m"
}

#line 316 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1(
#line 316 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__env_ptr_arg)
#line 316 "mode_constraint_robdd.m"
{
#line 316 "mode_constraint_robdd.m"
  {
#line 316 "mode_constraint_robdd.m"
    struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s * check_hlds__mode_constraint_robdd__env_ptr = (struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s *) check_hlds__mode_constraint_robdd__env_ptr_arg;

#line 316 "mode_constraint_robdd.m"
    *((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_LambdaHeadVar__1_20));
#line 316 "mode_constraint_robdd.m"
    {
#line 316 "mode_constraint_robdd.m"
      ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont)((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr);
#line 316 "mode_constraint_robdd.m"
      return;
    }
#line 316 "mode_constraint_robdd.m"
  }
#line 316 "mode_constraint_robdd.m"
}

#line 316 "mode_constraint_robdd.m"
static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2(
#line 316 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 316 "mode_constraint_robdd.m"
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
#line 316 "mode_constraint_robdd.m"
  MR_Cont check_hlds__mode_constraint_robdd__cont,
#line 316 "mode_constraint_robdd.m"
  void * check_hlds__mode_constraint_robdd__cont_env_ptr)
#line 316 "mode_constraint_robdd.m"
{
#line 316 "mode_constraint_robdd.m"
  {
#line 316 "mode_constraint_robdd.m"
    struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s check_hlds__mode_constraint_robdd__env;

#line 316 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1 = check_hlds__mode_constraint_robdd__wrapper_arg_1;
#line 316 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont = check_hlds__mode_constraint_robdd__cont;
#line 316 "mode_constraint_robdd.m"
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr = check_hlds__mode_constraint_robdd__cont_env_ptr;
#line 316 "mode_constraint_robdd.m"
    {
#line 316 "mode_constraint_robdd.m"
      MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

#line 316 "mode_constraint_robdd.m"
      {
#line 316 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 7))), &(check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_LambdaHeadVar__1_20, check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1, &check_hlds__mode_constraint_robdd__env);
      }
#line 316 "mode_constraint_robdd.m"
    }
#line 316 "mode_constraint_robdd.m"
  }
#line 316 "mode_constraint_robdd.m"
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
#line 310 "mode_constraint_robdd.m"
  {
#line 310 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 310 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 1)));
#line 310 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 3)));
#line 310 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 2)));
#line 310 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Keys_11;
#line 310 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Constraint1_12;
#line 310 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__InputNodes_16;
#line 310 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19;
#line 310 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 310 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_60_60;
#line 311 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 0)));
#line 311 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 4)));
#line 311 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 5)));
#line 311 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 6)));
#line 311 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 7)));
#line 311 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 8)));
#line 311 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 9)));
#line 323 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_53_53;
#line 323 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_54_54;
#line 323 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_55_55;
#line 323 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_56_56;
#line 323 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_57_57;
#line 323 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_58_58;
#line 323 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_61_61;
#line 323 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_62_62;
#line 323 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_59_59;

#line 314 "mode_constraint_robdd.m"
    {
#line 314 "mode_constraint_robdd.m"
      mercury__bimap__ordinates_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__VarMap_8, &check_hlds__mode_constraint_robdd__Keys_11);
    }
#line 315 "mode_constraint_robdd.m"
    {
#line 315 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__Constraint1_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__Constraint0_5);
    }
#line 316 "mode_constraint_robdd.m"
    {
#line 316 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 316 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_6[0]));
#line 316 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2));
#line 316 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 316 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__VarMap_8));
#line 316 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_9));
#line 316 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_10));
#line 316 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Keys_11));
#line 316 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_19_19, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Constraint1_12));
#line 316 "mode_constraint_robdd.m"
    }
#line 316 "mode_constraint_robdd.m"
    {
#line 316 "mode_constraint_robdd.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], check_hlds__mode_constraint_robdd__V_19_19, &check_hlds__mode_constraint_robdd__InputNodes_16);
    }
#line 323 "mode_constraint_robdd.m"
    {
#line 323 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_23_23 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__InputNodes_16);
    }
#line 323 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 0)));
#line 323 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 1)));
#line 323 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 2)));
#line 323 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 3)));
#line 323 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 4)));
#line 323 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 5)));
#line 323 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 6)));
#line 323 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 7)));
#line 323 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 8)));
#line 323 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 9)));
#line 323 "mode_constraint_robdd.m"
    {
#line 323 "mode_constraint_robdd.m"
      MR_Word base;
#line 323 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_18 = base;
#line 323 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_53_53));
#line 323 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_54_54));
#line 323 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_55_55));
#line 323 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_56_56));
#line 323 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_57_57));
#line 323 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_58_58));
#line 323 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23));
#line 323 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_60_60));
#line 323 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_61_61));
#line 323 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_62_62));
#line 323 "mode_constraint_robdd.m"
    }
#line 324 "mode_constraint_robdd.m"
    {
#line 324 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__Constraint_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_constraint_robdd__V_60_60, check_hlds__mode_constraint_robdd__Constraint0_5);
    }
#line 310 "mode_constraint_robdd.m"
  }
#line 115 "mode_constraint_robdd.m"
}

#line 303 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4(
#line 303 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 303 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 303 "mode_constraint_robdd.m"
{
#line 303 "mode_constraint_robdd.m"
  {
#line 303 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 303 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
#line 303 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__conv2_HeadVar__4_56;

#line 303 "mode_constraint_robdd.m"
    {
#line 303 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv2_HeadVar__4_56 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__2_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 303 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv2_HeadVar__4_56));
#line 303 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 303 "mode_constraint_robdd.m"
  }
#line 303 "mode_constraint_robdd.m"
}

#line 304 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3(
#line 304 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 304 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 304 "mode_constraint_robdd.m"
{
#line 304 "mode_constraint_robdd.m"
  {
#line 304 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 304 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
#line 304 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__conv1_HeadVar__3_63;

#line 304 "mode_constraint_robdd.m"
    {
#line 304 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv1_HeadVar__3_63 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__304__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 304 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv1_HeadVar__3_63));
#line 304 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 304 "mode_constraint_robdd.m"
  }
#line 304 "mode_constraint_robdd.m"
}

#line 304 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2(
#line 304 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 304 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 304 "mode_constraint_robdd.m"
{
#line 304 "mode_constraint_robdd.m"
  {
#line 304 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 304 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

#line 304 "mode_constraint_robdd.m"
    {
#line 304 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__304__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 304 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 304 "mode_constraint_robdd.m"
  }
#line 304 "mode_constraint_robdd.m"
}

#line 303 "mode_constraint_robdd.m"
static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1(
#line 303 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 303 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 303 "mode_constraint_robdd.m"
{
#line 303 "mode_constraint_robdd.m"
  {
#line 303 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 303 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
#line 303 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__2_60;

#line 303 "mode_constraint_robdd.m"
    {
#line 303 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__conv0_HeadVar__2_60 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__1_1_f_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 303 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__2_60));
#line 303 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
#line 303 "mode_constraint_robdd.m"
  }
#line 303 "mode_constraint_robdd.m"
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
#line 299 "mode_constraint_robdd.m"
  {
#line 299 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 299 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MinVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
#line 299 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MaxVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
#line 299 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
#line 299 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12;
#line 299 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14;
#line 299 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15;
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
#line 300 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));

#line 304 "mode_constraint_robdd.m"
    {
#line 304 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 304 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[0]));
#line 304 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2));
#line 304 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 304 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5));
#line 304 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__MinVars_7));
#line 304 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_15_15, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__MaxVars_8));
#line 304 "mode_constraint_robdd.m"
    }
#line 304 "mode_constraint_robdd.m"
    {
#line 304 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 304 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_14_14, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_3[1]));
#line 304 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_14_14, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3));
#line 304 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 304 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_14_14, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_15_15));
#line 304 "mode_constraint_robdd.m"
    }
#line 303 "mode_constraint_robdd.m"
    {
#line 303 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 303 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_12_12, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[1]));
#line 303 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_12_12, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4));
#line 303 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 303 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_12_12, 3) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_2[6]));
#line 303 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__V_12_12, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14));
#line 303 "mode_constraint_robdd.m"
    }
#line 303 "mode_constraint_robdd.m"
    {
#line 303 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__Vars_6 = check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(check_hlds__mode_constraint_robdd__V_12_12, check_hlds__mode_constraint_robdd__VarSet_9);
    }
#line 299 "mode_constraint_robdd.m"
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
#line 293 "mode_constraint_robdd.m"
  {
#line 293 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 293 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Threshold_6;
#line 293 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MaxVars0_7;
#line 293 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MaxVars_8;
#line 293 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 295 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13;
#line 295 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14;
#line 295 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15;
#line 295 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16;
#line 295 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17;
#line 295 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18;
#line 295 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19;
#line 295 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 295 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21;
#line 297 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22;
#line 297 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 297 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 297 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25;
#line 297 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;
#line 297 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 297 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29;
#line 297 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30;
#line 297 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31;
#line 297 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;

#line 271 "mode_constraint_robdd.m"
    {
#line 271 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__Threshold_6 = mercury__varset__max_var_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__VarSet_35);
    }
#line 295 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 295 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 295 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 295 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 295 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 295 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__MaxVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 295 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 295 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 295 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 295 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 296 "mode_constraint_robdd.m"
    {
#line 296 "mode_constraint_robdd.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Threshold_6)), check_hlds__mode_constraint_robdd__MaxVars0_7, &check_hlds__mode_constraint_robdd__MaxVars_8);
    }
#line 297 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 297 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 297 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 297 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 297 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 297 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 297 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 297 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 297 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 297 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 297 "mode_constraint_robdd.m"
    {
#line 297 "mode_constraint_robdd.m"
      MR_Word base;
#line 297 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 297 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_10 = base;
#line 297 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_22_22));
#line 297 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23));
#line 297 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24));
#line 297 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_25_25));
#line 297 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_26_26));
#line 297 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__MaxVars_8));
#line 297 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_28_28));
#line 297 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_29_29));
#line 297 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_30_30));
#line 297 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_31_31));
#line 297 "mode_constraint_robdd.m"
    }
#line 293 "mode_constraint_robdd.m"
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
#line 287 "mode_constraint_robdd.m"
  {
#line 287 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 287 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Threshold_6;
#line 287 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MinVars0_7;
#line 287 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MinVars_8;
#line 287 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 289 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13;
#line 289 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14;
#line 289 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15;
#line 289 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16;
#line 289 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17;
#line 289 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18;
#line 289 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19;
#line 289 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 289 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21;
#line 291 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22;
#line 291 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 291 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 291 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25;
#line 291 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;
#line 291 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 291 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29;
#line 291 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30;
#line 291 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31;
#line 291 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;

#line 271 "mode_constraint_robdd.m"
    {
#line 271 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__Threshold_6 = mercury__varset__max_var_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__VarSet_35);
    }
#line 289 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 289 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 289 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 289 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 289 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__MinVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 289 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 289 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 289 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 289 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 289 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 290 "mode_constraint_robdd.m"
    {
#line 290 "mode_constraint_robdd.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Threshold_6)), check_hlds__mode_constraint_robdd__MinVars0_7, &check_hlds__mode_constraint_robdd__MinVars_8);
    }
#line 291 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
#line 291 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
#line 291 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
#line 291 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
#line 291 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
#line 291 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
#line 291 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
#line 291 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
#line 291 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
#line 291 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
#line 291 "mode_constraint_robdd.m"
    {
#line 291 "mode_constraint_robdd.m"
      MR_Word base;
#line 291 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 291 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_10 = base;
#line 291 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_22_22));
#line 291 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23));
#line 291 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24));
#line 291 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_25_25));
#line 291 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__MinVars_8));
#line 291 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_27_27));
#line 291 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_28_28));
#line 291 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_29_29));
#line 291 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_30_30));
#line 291 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_31_31));
#line 291 "mode_constraint_robdd.m"
    }
#line 287 "mode_constraint_robdd.m"
  }
#line 103 "mode_constraint_robdd.m"
}

#line 278 "mode_constraint_robdd.m"
static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1(
#line 278 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
#line 278 "mode_constraint_robdd.m"
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
#line 278 "mode_constraint_robdd.m"
{
#line 278 "mode_constraint_robdd.m"
  {
#line 278 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 278 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

#line 278 "mode_constraint_robdd.m"
    {
#line 278 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__278__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
#line 278 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__succeeded;
#line 278 "mode_constraint_robdd.m"
  }
#line 278 "mode_constraint_robdd.m"
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
#line 277 "mode_constraint_robdd.m"
  {
#line 277 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_4;
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__P_8;
#line 277 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13;

#line 277 "mode_constraint_robdd.m"
    {
#line 277 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_13_13 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__M_7);
    }
#line 278 "mode_constraint_robdd.m"
    {
#line 278 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__P_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 278 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_3[0]));
#line 278 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1));
#line 278 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 278 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__P0_5));
#line 278 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__MCI_6));
#line 278 "mode_constraint_robdd.m"
    }
#line 277 "mode_constraint_robdd.m"
    {
#line 277 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_102_105_108_116_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_constraint_robdd__P_8, check_hlds__mode_constraint_robdd__V_13_13);
    }
#line 277 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__4_4;
#line 277 "mode_constraint_robdd.m"
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
#line 274 "mode_constraint_robdd.m"
  {
#line 274 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 274 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3;
#line 274 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Threshold_4 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__1_1;
#line 274 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_6_6;

#line 275 "mode_constraint_robdd.m"
    {
#line 275 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_6_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__Constraint_5);
    }
#line 275 "mode_constraint_robdd.m"
    {
#line 275 "mode_constraint_robdd.m"
      return check_hlds__mode_constraint_robdd__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_116_104_114_101_115_104_111_108_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_constraint_robdd__Threshold_4, check_hlds__mode_constraint_robdd__V_6_6);
    }
#line 274 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__3_3;
#line 274 "mode_constraint_robdd.m"
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
#line 271 "mode_constraint_robdd.m"
  {
#line 271 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 271 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 0)));
#line 271 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_5_5;
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 1)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 2)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 3)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 4)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 5)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 6)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 7)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 8)));
#line 272 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 9)));

#line 271 "mode_constraint_robdd.m"
    {
#line 271 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_5_5 = mercury__varset__max_var_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__VarSet_4);
    }
#line 271 "mode_constraint_robdd.m"
    *check_hlds__mode_constraint_robdd__HeadVar__2_2 = (MR_Word) check_hlds__mode_constraint_robdd__V_5_5;
#line 271 "mode_constraint_robdd.m"
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
#line 267 "mode_constraint_robdd.m"
  {
#line 267 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 0)));
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 1)));
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 4)));
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 5)));
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 6)));
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 7)));
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 8)));
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 9)));
#line 267 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd___Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
#line 268 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 2)));
#line 268 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 3)));

#line 269 "mode_constraint_robdd.m"
    {
#line 269 "mode_constraint_robdd.m"
      MR_Word base;
#line 269 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 269 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_9 = base;
#line 269 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12));
#line 269 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 269 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5));
#line 269 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_6));
#line 269 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_16_16));
#line 269 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_17_17));
#line 269 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_18_18));
#line 269 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_19_19));
#line 269 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20));
#line 269 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_21_21));
#line 269 "mode_constraint_robdd.m"
    }
#line 267 "mode_constraint_robdd.m"
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
#line 263 "mode_constraint_robdd.m"
  {
#line 263 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 263 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
#line 263 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
#line 264 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
#line 264 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
#line 264 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
#line 264 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
#line 264 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
#line 264 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
#line 264 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
#line 264 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));

#line 263 "mode_constraint_robdd.m"
    {
#line 263 "mode_constraint_robdd.m"
      MR_Word base;
#line 263 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 263 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__HeadVar__3_3 = base;
#line 263 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_5));
#line 263 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_6));
#line 263 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_7));
#line 263 "mode_constraint_robdd.m"
    }
#line 263 "mode_constraint_robdd.m"
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
#line 251 "mode_constraint_robdd.m"
  {
#line 251 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 251 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
#line 251 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_6;
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
#line 252 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
#line 253 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd___GoalPath_5;
#line 253 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0__GoalPath_5;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21;
#line 254 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;
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
    MR_Word check_hlds__mode_constraint_robdd__V_22_22;

#line 253 "mode_constraint_robdd.m"
    {
#line 253 "mode_constraint_robdd.m"
      mercury__stack__det_pop_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, &check_hlds__mode_constraint_robdd__conv0__GoalPath_5, check_hlds__mode_constraint_robdd__LambdaPath0_4, &check_hlds__mode_constraint_robdd__LambdaPath_6);
    }
#line 253 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd___GoalPath_5 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0__GoalPath_5);
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
#line 254 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
#line 254 "mode_constraint_robdd.m"
    {
#line 254 "mode_constraint_robdd.m"
      MR_Word base;
#line 254 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 254 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_8 = base;
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_19_19));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_21_21));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_6));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_23_23));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_25_25));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_26_26));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_27_27));
#line 254 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_28_28));
#line 254 "mode_constraint_robdd.m"
    }
#line 251 "mode_constraint_robdd.m"
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
#line 247 "mode_constraint_robdd.m"
  {
#line 247 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 247 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
#line 247 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10;
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
#line 248 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_21_21;
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_22_22;
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_24_24;
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_25_25;
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29;
#line 249 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_23_23;

#line 249 "mode_constraint_robdd.m"
    {
#line 249 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_10_10 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_constraint_robdd__LambdaPath0_6, ((MR_Box) (check_hlds__mode_constraint_robdd__GoalId_4)));
    }
#line 249 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
#line 249 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
#line 249 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
#line 249 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
#line 249 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
#line 249 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
#line 249 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
#line 249 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
#line 249 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
#line 249 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
#line 249 "mode_constraint_robdd.m"
    {
#line 249 "mode_constraint_robdd.m"
      MR_Word base;
#line 249 "mode_constraint_robdd.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 249 "mode_constraint_robdd.m"
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_8 = base;
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_20_20));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_21_21));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_22_22));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_24_24));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_25_25));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_26_26));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_27_27));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_28_28));
#line 249 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_29_29));
#line 249 "mode_constraint_robdd.m"
    }
#line 247 "mode_constraint_robdd.m"
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
#line 243 "mode_constraint_robdd.m"
  {
#line 243 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 243 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Var_6;
#line 243 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__Key_7;
#line 243 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
#line 243 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
#line 243 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
#line 244 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
#line 244 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
#line 244 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
#line 244 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
#line 244 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
#line 244 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
#line 244 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));
#line 245 "mode_constraint_robdd.m"
    MR_Box check_hlds__mode_constraint_robdd__conv0_Var_6;

#line 244 "mode_constraint_robdd.m"
    {
#line 244 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__Key_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 244 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_7, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__RepVar_5));
#line 244 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_7, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_8_8));
#line 244 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_7, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 244 "mode_constraint_robdd.m"
    }
#line 245 "mode_constraint_robdd.m"
    {
#line 245 "mode_constraint_robdd.m"
      mercury__bimap__lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__V_12_12, ((MR_Box) (check_hlds__mode_constraint_robdd__Key_7)), &check_hlds__mode_constraint_robdd__conv0_Var_6);
    }
#line 245 "mode_constraint_robdd.m"
    check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_Var_6);
#line 243 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__Var_6;
#line 243 "mode_constraint_robdd.m"
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
#line 229 "mode_constraint_robdd.m"
  {
#line 229 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__RepVar0_7)) == (MR_mktag((MR_Integer) 2)));
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 229 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 228 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 223 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_100_100;
#line 223 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ProgVar_10;
#line 223 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20;
#line 223 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11;
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_26_26;
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_27_27;
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_28_28;
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_29_29;
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_30_30;
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_31_31;
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_32_32;
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_33_33;
#line 224 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_34_34;

#line 223 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 223 "mode_constraint_robdd.m"
      {
#line 223 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__ProgVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar0_7, (MR_Integer) 0)));
#line 223 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar0_7, (MR_Integer) 1)));
#line 224 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 224 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 224 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 224 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 224 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 224 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 224 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 224 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 224 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 224 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 7525 "check_hlds.mode_constraint_robdd.c"
        check_hlds__mode_constraint_robdd__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 224 "mode_constraint_robdd.m"
        {
#line 224 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__succeeded = parse_tree__set_of_var__contains_2_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_100_100, check_hlds__mode_constraint_robdd__V_20_20, check_hlds__mode_constraint_robdd__ProgVar_10);
        }
#line 223 "mode_constraint_robdd.m"
      }
#line 229 "mode_constraint_robdd.m"
    if (check_hlds__mode_constraint_robdd__succeeded)
#line 228 "mode_constraint_robdd.m"
      {
#line 228 "mode_constraint_robdd.m"
        *check_hlds__mode_constraint_robdd__RobddVar_8 = check_hlds__mode_constraint_robdd__V_108_108;
#line 228 "mode_constraint_robdd.m"
        *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19 = check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18;
#line 228 "mode_constraint_robdd.m"
      }
#line 229 "mode_constraint_robdd.m"
    else
#line 230 "mode_constraint_robdd.m"
      {
#line 230 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__Key_14;
#line 235 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__RobddVar0_15;
#line 233 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_21_21;
#line 233 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_53_53;
#line 233 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_54_54;
#line 233 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_55_55;
#line 233 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_56_56;
#line 233 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_57_57;
#line 233 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_58_58;
#line 233 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_59_59;
#line 233 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_60_60;
#line 233 "mode_constraint_robdd.m"
        MR_Word check_hlds__mode_constraint_robdd__V_61_61;
#line 233 "mode_constraint_robdd.m"
        MR_Box check_hlds__mode_constraint_robdd__conv0_RobddVar0_15;

#line 232 "mode_constraint_robdd.m"
        {
#line 232 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__Key_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 232 "mode_constraint_robdd.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_14, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__RepVar0_7));
#line 232 "mode_constraint_robdd.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_14, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_6));
#line 232 "mode_constraint_robdd.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_14, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_112_112));
#line 232 "mode_constraint_robdd.m"
        }
#line 233 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 233 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 233 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 233 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 233 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 233 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 233 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 233 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 233 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 233 "mode_constraint_robdd.m"
        check_hlds__mode_constraint_robdd__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 233 "mode_constraint_robdd.m"
        {
#line 233 "mode_constraint_robdd.m"
          check_hlds__mode_constraint_robdd__succeeded = mercury__bimap__search_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__V_21_21, ((MR_Box) (check_hlds__mode_constraint_robdd__Key_14)), &check_hlds__mode_constraint_robdd__conv0_RobddVar0_15);
        }
#line 233 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 233 "mode_constraint_robdd.m"
          {
#line 233 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__RobddVar0_15 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_RobddVar0_15);
#line 233 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
#line 233 "mode_constraint_robdd.m"
          }
#line 235 "mode_constraint_robdd.m"
        if (check_hlds__mode_constraint_robdd__succeeded)
#line 234 "mode_constraint_robdd.m"
          {
#line 234 "mode_constraint_robdd.m"
            *check_hlds__mode_constraint_robdd__RobddVar_8 = check_hlds__mode_constraint_robdd__RobddVar0_15;
#line 234 "mode_constraint_robdd.m"
            *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19 = check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18;
#line 234 "mode_constraint_robdd.m"
          }
#line 235 "mode_constraint_robdd.m"
        else
#line 236 "mode_constraint_robdd.m"
          {
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__NewVarSet_16;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__NewVarMap_17;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_23_23;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_82_82;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_83_83;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_84_84;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_85_85;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_86_86;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_87_87;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_88_88;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_89_89;
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 236 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 237 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_71_71;
#line 237 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_72_72;
#line 237 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_73_73;
#line 237 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_74_74;
#line 237 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_75_75;
#line 237 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_76_76;
#line 237 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_77_77;
#line 237 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_78_78;
#line 237 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_79_79;
#line 238 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_80_80;
#line 238 "mode_constraint_robdd.m"
            MR_Word check_hlds__mode_constraint_robdd__V_81_81;

#line 236 "mode_constraint_robdd.m"
            {
#line 236 "mode_constraint_robdd.m"
              mercury__varset__new_var_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__RobddVar_8, check_hlds__mode_constraint_robdd__V_22_22, &check_hlds__mode_constraint_robdd__NewVarSet_16);
            }
#line 237 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 237 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 237 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 237 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 237 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 237 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 237 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 237 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 237 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 237 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 237 "mode_constraint_robdd.m"
            {
#line 237 "mode_constraint_robdd.m"
              mercury__bimap__set_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__Key_14)), ((MR_Box) (*check_hlds__mode_constraint_robdd__RobddVar_8)), check_hlds__mode_constraint_robdd__V_23_23, &check_hlds__mode_constraint_robdd__NewVarMap_17);
            }
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
#line 238 "mode_constraint_robdd.m"
            check_hlds__mode_constraint_robdd__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
#line 239 "mode_constraint_robdd.m"
            {
#line 239 "mode_constraint_robdd.m"
              MR_Word base;
#line 239 "mode_constraint_robdd.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 239 "mode_constraint_robdd.m"
              *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19 = base;
#line 239 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__NewVarSet_16));
#line 239 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__NewVarMap_17));
#line 239 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_82_82));
#line 239 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_83_83));
#line 239 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_84_84));
#line 239 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_85_85));
#line 239 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_86_86));
#line 239 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_87_87));
#line 239 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_88_88));
#line 239 "mode_constraint_robdd.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_89_89));
#line 239 "mode_constraint_robdd.m"
            }
#line 236 "mode_constraint_robdd.m"
          }
#line 230 "mode_constraint_robdd.m"
      }
#line 229 "mode_constraint_robdd.m"
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
#line 218 "mode_constraint_robdd.m"
  {
#line 218 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 218 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 2)));
#line 219 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 0)));
#line 219 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 1)));
#line 219 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 3)));
#line 219 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 4)));
#line 219 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 5)));
#line 219 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 6)));
#line 219 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 7)));
#line 219 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 8)));
#line 219 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 9)));

#line 219 "mode_constraint_robdd.m"
    {
#line 219 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__mode_constraint_var_5_p_0(check_hlds__mode_constraint_robdd__V_10_10, check_hlds__mode_constraint_robdd__RepVar0_5, check_hlds__mode_constraint_robdd__RobddVar_6, check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_9);
#line 219 "mode_constraint_robdd.m"
      return;
    }
#line 218 "mode_constraint_robdd.m"
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
#line 191 "mode_constraint_robdd.m"
  {
#line 191 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3;
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));
#line 191 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));

#line 191 "mode_constraint_robdd.m"
    {
#line 191 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 191 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_6_6));
#line 191 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_7_7));
#line 191 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5));
#line 191 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9));
#line 191 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10));
#line 191 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_11_11));
#line 191 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12));
#line 191 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 191 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14));
#line 191 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_15_15));
#line 191 "mode_constraint_robdd.m"
    }
#line 191 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__HeadVar__3_3;
#line 191 "mode_constraint_robdd.m"
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
#line 196 "mode_constraint_robdd.m"
  {
#line 196 "mode_constraint_robdd.m"
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__MCI_4;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_15_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeInfo_17_17;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet0_5;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__ZeroVar_6;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__VarSet_7;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__PredId_8;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_9_9;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_10_10;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_11_11;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_12_12;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_13_13;
#line 196 "mode_constraint_robdd.m"
    MR_Word check_hlds__mode_constraint_robdd__V_14_14;

#line 197 "mode_constraint_robdd.m"
    {
#line 197 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__VarSet0_5 = mercury__varset__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_15_15);
    }
#line 198 "mode_constraint_robdd.m"
    {
#line 198 "mode_constraint_robdd.m"
      mercury__varset__new_var_3_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_15_15, &check_hlds__mode_constraint_robdd__ZeroVar_6, check_hlds__mode_constraint_robdd__VarSet0_5, &check_hlds__mode_constraint_robdd__VarSet_7);
    }
#line 199 "mode_constraint_robdd.m"
    {
#line 199 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__PredId_8 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
#line 7964 "check_hlds.mode_constraint_robdd.c"
    check_hlds__mode_constraint_robdd__TypeInfo_17_17 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
#line 200 "mode_constraint_robdd.m"
    {
#line 200 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_9_9 = mercury__bimap__init_0_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, check_hlds__mode_constraint_robdd__TypeInfo_17_17);
    }
#line 200 "mode_constraint_robdd.m"
    {
#line 200 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_10_10 = mercury__stack__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
    }
#line 7976 "check_hlds.mode_constraint_robdd.c"
    check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 201 "mode_constraint_robdd.m"
    {
#line 201 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_11_11 = mercury__map__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19, check_hlds__mode_constraint_robdd__TypeInfo_17_17);
    }
#line 201 "mode_constraint_robdd.m"
    {
#line 201 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_12_12 = mercury__map__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19, check_hlds__mode_constraint_robdd__TypeInfo_17_17);
    }
#line 201 "mode_constraint_robdd.m"
    {
#line 201 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_13_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 201 "mode_constraint_robdd.m"
    {
#line 201 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__V_14_14 = mercury__map__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0]);
    }
#line 200 "mode_constraint_robdd.m"
    {
#line 200 "mode_constraint_robdd.m"
      check_hlds__mode_constraint_robdd__MCI_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 200 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__VarSet_7));
#line 200 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_9_9));
#line 200 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_8));
#line 200 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_10_10));
#line 200 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_11_11));
#line 200 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_12_12));
#line 200 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_13_13));
#line 200 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__ZeroVar_6));
#line 200 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Simple_3));
#line 200 "mode_constraint_robdd.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__V_14_14));
#line 200 "mode_constraint_robdd.m"
    }
#line 196 "mode_constraint_robdd.m"
    return check_hlds__mode_constraint_robdd__MCI_4;
#line 196 "mode_constraint_robdd.m"
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
