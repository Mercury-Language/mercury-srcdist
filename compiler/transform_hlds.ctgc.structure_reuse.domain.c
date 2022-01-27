/*
** Automatically generated from `structure_reuse.domain.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module transform_hlds.ctgc.structure_reuse.domain. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__domain__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.domain.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.hlds_out.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.datastruct.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"



#line 765 "structure_reuse.domain.m"
struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s {
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7;
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8;
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9;
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10;
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11;
#line 765 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12;
#line 765 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont;
#line 765 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr;
#line 770 "structure_reuse.domain.m"
  MR_bool transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__succeeded;
#line 770 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__TypeCtorInfo_20_20;
#line 770 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNodes_14;
#line 778 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15;
#line 778 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherAliasedNode_16;
#line 778 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__V_19_19;
#line 778 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__conv0_SharingNode_15;
#line 765 "structure_reuse.domain.m"
};

#line 756 "structure_reuse.domain.m"
struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s {
#line 756 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__wrapper_arg_1;
#line 756 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont;
#line 756 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont_env_ptr;
#line 756 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__conv1_AliasedNodes_12;
#line 756 "structure_reuse.domain.m"
};


#line 201 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 207 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 210 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 213 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 216 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 219 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 222 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 225 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 228 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 231 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 234 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0;

#line 237 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_ppid_no_clobbers_0_0[2];

#line 240 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0;

#line 243 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_ppid_no_clobbers_0_0[1];

#line 246 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_ppid_no_clobbers_0[1];

#line 249 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_ppid_no_clobbers_0[1];

#line 252 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_ppid_no_clobbers_0[1];

#line 255 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0;

#line 258 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1;

#line 261 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 264 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_0_2[1];

#line 267 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2;

#line 270 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_0[2];

#line 273 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_1[1];

#line 276 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_0[2];

#line 279 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_0[3];

#line 282 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_0[3];

#line 285 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_and_status_0_0[2];

#line 288 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0;

#line 291 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_and_status_0_0[1];

#line 294 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_and_status_0[1];

#line 297 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_and_status_0[1];

#line 300 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_and_status_0[1];

#line 303 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;

#line 306 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__bimap__ti_bimap_2transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 309 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_table_0_0[2];

#line 312 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_as_table_0_0[2];

#line 315 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0;

#line 318 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_table_0_0[1];

#line 321 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_table_0[1];

#line 324 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_table_0[1];

#line 327 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_table_0[1];

#line 330 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0;

#line 333 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 336 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 339 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_condition_0_1[3];

#line 342 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_condition_0_1[3];

#line 345 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1;

#line 348 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_0[1];

#line 351 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_1[1];

#line 354 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_condition_0[2];

#line 357 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_condition_0[2];

#line 360 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_condition_0[2];

#line 363 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0;

#line 366 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1;

#line 369 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 372 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_2[1];

#line 375 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2;

#line 378 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_3[1];

#line 381 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3;

#line 384 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_0[2];

#line 387 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_1[1];

#line 390 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_2[1];

#line 393 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_not_possible_reason_0[3];

#line 396 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_not_possible_reason_0[4];

#line 399 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_not_possible_reason_0[4];

#line 402 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0;

#line 405 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_satisfied_result_0_1[1];

#line 408 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1;

#line 411 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_0[1];

#line 414 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_1[1];

#line 417 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_satisfied_result_0[2];

#line 420 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_satisfied_result_0[2];

#line 423 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_satisfied_result_0[2];

#line 426 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0_10001(
#line 429 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 431 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 434 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0_10001(
#line 437 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 439 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 441 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 444 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0_10001(
#line 447 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 449 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 452 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0_10001(
#line 455 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 457 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 459 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 462 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0_10001(
#line 465 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 467 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 470 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0_10001(
#line 473 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 475 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 477 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 480 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0_10001(
#line 483 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 485 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 488 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0_10001(
#line 491 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 493 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 495 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 498 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0_10001(
#line 501 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 503 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 506 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0_10001(
#line 509 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 511 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 513 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 516 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0_10001(
#line 519 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 521 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 524 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0_10001(
#line 527 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 529 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 531 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 534 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0_10001(
#line 537 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 539 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 542 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0_10001(
#line 545 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 547 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 549 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 552 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0_10001(
#line 555 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 557 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 560 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0_10001(
#line 563 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 565 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 567 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 570 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0_10001(
#line 573 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 575 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 578 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0_10001(
#line 581 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 583 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 585 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 999 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_p_0(
#line 999 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 999 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PredId_7,
#line 999 "structure_reuse.domain.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__domain__ProcId_8,
#line 999 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16,
#line 999 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_17);

#line 996 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0_1(
#line 996 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 996 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 996 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 996 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 990 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0(
#line 990 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 990 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PredId_6,
#line 990 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_10,
#line 990 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_11);

#line 975 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__dump_entries_5_p_0(
#line 975 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 975 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_7,
#line 975 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3);

#line 915 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_f_0(
#line 915 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Condition_3,
#line 915 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__StructureReuseCondition_4);

#line 887 "structure_reuse.domain.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_f_0(
#line 887 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PublicReuseCondition_3);

#line 807 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__collect_aliased_vars_3_p_0(
#line 807 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 807 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_0_7,
#line 807 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_8);

#line 791 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__there_is_a_subsumption_relation_5_p_0(
#line 791 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 791 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 791 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3,
#line 791 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__DataA_10,
#line 791 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__DataB_11,
#line 791 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 791 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr);

#line 778 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_3(
#line 778 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg);

#line 778 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_4(
#line 778 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg);

#line 778 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_2(
#line 778 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg);

#line 770 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_1(
#line 770 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg);

#line 765 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0(
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_7,
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_8,
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_9,
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Node_10,
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__OtherNodes_11,
#line 765 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__AliasedNodes_12,
#line 765 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 765 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr);

#line 702 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1,
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2,
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LiveData_3,
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_4,
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__StaticVars_5,
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6,
#line 702 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7);

#line 624 "structure_reuse.domain.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_f_0(
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8,
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9,
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVars_10,
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LuData_11,
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_12,
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13);

#line 563 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_p_0(
#line 563 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 563 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 563 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NewConds_8,
#line 563 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12,
#line 563 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_13);

#line 419 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_p_0(
#line 419 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 419 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 419 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Conds_7,
#line 419 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_8);

#line 409 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(
#line 409 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 409 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 409 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_7,
#line 409 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4);

#line 987 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0_1(
#line 987 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 987 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 987 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 987 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 972 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0_1(
#line 972 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 972 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 972 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 972 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3,
#line 972 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_4);

#line 913 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0_1(
#line 913 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 913 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 913 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 885 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0_1(
#line 885 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 885 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);

#line 757 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_4(
#line 757 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 757 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 757 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 757 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 756 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_2(
#line 756 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg);

#line 756 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3(
#line 756 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 756 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 756 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 756 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr);

#line 751 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_1(
#line 751 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 751 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 751 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 620 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_2(
#line 620 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 620 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 620 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 620 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 617 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_1(
#line 617 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 617 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);

#line 511 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0_1(
#line 511 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 511 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 511 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 474 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0_1(
#line 474 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 474 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);

#line 431 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0_1(
#line 431 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 431 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);

#line 370 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_2(
#line 370 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 370 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);

#line 368 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_1(
#line 368 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 368 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[8][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[4][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[4][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_6[1][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_7[1][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_8[1][6];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_9[2][1];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_8[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_9[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1239 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1247 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1255 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1263 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1272 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1280 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1289 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 1297 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1305 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1313 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1322 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1330 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1338 "transform_hlds.ctgc.structure_reuse.domain.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_no_clobber_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "no_clobber_args",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1355 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_ppid_no_clobbers_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1361 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0 = {
  (MR_String) "ppid_no_clobbers",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_ppid_no_clobbers_0_0,
  NULL,
  NULL,
  NULL
};

#line 1376 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_ppid_no_clobbers_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0
};

#line 1381 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_ppid_no_clobbers_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_ppid_no_clobbers_0_0
  }
};

#line 1390 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_ppid_no_clobbers_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0
};

#line 1395 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_ppid_no_clobbers_0[1] = {
  (MR_Integer) 0
};

#line 1400 "transform_hlds.ctgc.structure_reuse.domain.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "ppid_no_clobbers",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_ppid_no_clobbers_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_ppid_no_clobbers_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_ppid_no_clobbers_0
};

#line 1417 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0 = {
  (MR_String) "no_reuse",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1432 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1 = {
  (MR_String) "unconditional",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1447 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 1455 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
};

#line 1460 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2 = {
  (MR_String) "conditional",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_0_2,
  NULL,
  NULL,
  NULL
};

#line 1475 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1
};

#line 1481 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2
};

#line 1486 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_1
  }
};

#line 1500 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_0[3] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1
};

#line 1507 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1514 "transform_hlds.ctgc.structure_reuse.domain.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_as",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_0
};

#line 1531 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_and_status_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

#line 1537 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0 = {
  (MR_String) "reuse_as_and_status",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_and_status_0_0,
  NULL,
  NULL,
  NULL
};

#line 1552 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_and_status_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0
};

#line 1557 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_and_status_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_and_status_0_0
  }
};

#line 1566 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_and_status_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0
};

#line 1571 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_and_status_0[1] = {
  (MR_Integer) 0
};

#line 1576 "transform_hlds.ctgc.structure_reuse.domain.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_as_and_status",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_and_status_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_and_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_and_status_0
};

#line 1593 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0
  }
};

#line 1602 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__bimap__ti_bimap_2transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1611 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_table_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__bimap__ti_bimap_2transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1617 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_as_table_0_0[2] = {
  (MR_String) "reuse_info_map",
  (MR_String) "reuse_version_map"
};

#line 1623 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0 = {
  (MR_String) "reuse_as_table",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_table_0_0,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_as_table_0_0,
  NULL,
  NULL
};

#line 1638 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_table_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0
};

#line 1643 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_table_0_0
  }
};

#line 1652 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_table_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0
};

#line 1657 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_table_0[1] = {
  (MR_Integer) 0
};

#line 1662 "transform_hlds.ctgc.structure_reuse.domain.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_as_table",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_table_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_table_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_table_0
};

#line 1679 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0 = {
  (MR_String) "always",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1694 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1702 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1710 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_condition_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_datastruct_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0
};

#line 1717 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_condition_0_1[3] = {
  (MR_String) "reuseable_nodes",
  (MR_String) "local_use_headvars",
  (MR_String) "local_sharing_headvars"
};

#line 1724 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1 = {
  (MR_String) "condition",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_condition_0_1,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_condition_0_1,
  NULL,
  NULL
};

#line 1739 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0
};

#line 1744 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1
};

#line 1749 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_condition_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_1
  }
};

#line 1763 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_condition_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1
};

#line 1769 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_condition_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1775 "transform_hlds.ctgc.structure_reuse.domain.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_condition",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_condition_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_condition_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_condition_0
};

#line 1792 "transform_hlds.ctgc.structure_reuse.domain.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_conditions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_conditions",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1809 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0 = {
  (MR_String) "no_reuse",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1824 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1 = {
  (MR_String) "unknown_livedata",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1839 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1847 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1852 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2 = {
  (MR_String) "reuse_condition_violated",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_2,
  NULL,
  NULL,
  NULL
};

#line 1867 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_3[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1872 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3 = {
  (MR_String) "reuse_nodes_have_sharing",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_3,
  NULL,
  NULL,
  NULL
};

#line 1887 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1
};

#line 1893 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2
};

#line 1898 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_2[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3
};

#line 1903 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_not_possible_reason_0[3] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_2
  }
};

#line 1922 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_not_possible_reason_0[4] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1
};

#line 1930 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_not_possible_reason_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1938 "transform_hlds.ctgc.structure_reuse.domain.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_not_possible_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_not_possible_reason",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_not_possible_reason_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_not_possible_reason_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_not_possible_reason_0
};

#line 1955 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0 = {
  (MR_String) "reuse_possible",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1970 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_satisfied_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_not_possible_reason_0
};

#line 1975 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1 = {
  (MR_String) "reuse_not_possible",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_satisfied_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 1990 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0
};

#line 1995 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1
};

#line 2000 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_satisfied_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_1
  }
};

#line 2014 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_satisfied_result_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0
};

#line 2020 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_satisfied_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2026 "transform_hlds.ctgc.structure_reuse.domain.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_satisfied_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_satisfied_result",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_satisfied_result_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_satisfied_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_satisfied_result_0
};

#line 2043 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0_10001(
#line 2046 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2048 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2050 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2052 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2054 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2057 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2059 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2062 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2064 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2066 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2069 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0_10001(
#line 2072 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2074 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2076 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2078 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2080 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2082 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2085 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2087 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2090 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2092 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2094 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2097 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0_10001(
#line 2100 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2102 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2104 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2106 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2108 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2111 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2113 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2116 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2118 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2120 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2123 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0_10001(
#line 2126 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2128 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2130 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2132 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2134 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2136 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2139 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2141 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2144 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2146 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2148 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2151 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0_10001(
#line 2154 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2156 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2158 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2160 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2162 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2165 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2167 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2170 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2172 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2174 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2177 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0_10001(
#line 2180 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2182 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2184 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2186 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2188 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2190 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2193 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2195 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2198 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2200 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2202 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2205 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0_10001(
#line 2208 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2210 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2212 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2214 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2216 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2219 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2221 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2224 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2226 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2228 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2231 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0_10001(
#line 2234 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2236 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2238 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2240 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2242 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2244 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2247 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2249 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2252 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2254 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2256 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2259 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0_10001(
#line 2262 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2264 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2266 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2268 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2270 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2273 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2275 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2278 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2280 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2282 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2285 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0_10001(
#line 2288 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2290 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2292 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2294 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2296 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2298 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2301 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2303 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2306 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2308 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2310 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2313 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0_10001(
#line 2316 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2318 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2320 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2322 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2324 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2327 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2329 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2332 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2334 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2336 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2339 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0_10001(
#line 2342 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2344 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2346 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2348 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2350 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2352 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2355 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2357 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2360 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2362 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2364 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2367 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0_10001(
#line 2370 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2372 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2374 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2376 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2378 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2381 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2383 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2386 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2388 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2390 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2393 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0_10001(
#line 2396 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2398 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2400 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2402 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2404 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2406 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2409 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2411 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2414 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2416 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2418 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2421 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0_10001(
#line 2424 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2426 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2428 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2430 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2432 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2435 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2437 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2440 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2442 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2444 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2447 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0_10001(
#line 2450 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2452 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2454 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2456 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2458 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2460 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2463 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2465 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2468 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2470 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2472 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2475 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0_10001(
#line 2478 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2480 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2482 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2484 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2486 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2489 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2491 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2494 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2496 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2498 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2501 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0_10001(
#line 2504 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2506 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2508 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2510 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2512 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2514 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2517 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2519 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2522 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2524 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2526 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 184 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0(
#line 184 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 184 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 184 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 184 "structure_reuse.domain.m"
{
#line 184 "structure_reuse.domain.m"
  {
#line 184 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 184 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 184 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 184 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_8 == transform_hlds__ctgc__structure_reuse__domain__CastY_9);
#line 184 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 2553 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 184 "structure_reuse.domain.m"
    else
#line 184 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "structure_reuse.domain.m"
      if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 184 "structure_reuse.domain.m"
      else
#line 2565 "transform_hlds.ctgc.structure_reuse.domain.c"
        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 184 "structure_reuse.domain.m"
    else
#line 184 "structure_reuse.domain.m"
      {
#line 184 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));

#line 184 "structure_reuse.domain.m"
        if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2576 "transform_hlds.ctgc.structure_reuse.domain.c"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 184 "structure_reuse.domain.m"
        else
#line 184 "structure_reuse.domain.m"
          {
#line 184 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));

#line 184 "structure_reuse.domain.m"
            {
#line 184 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__domain__V_11_11, transform_hlds__ctgc__structure_reuse__domain__V_7_7);
            }
#line 184 "structure_reuse.domain.m"
          }
#line 184 "structure_reuse.domain.m"
      }
#line 184 "structure_reuse.domain.m"
  }
#line 184 "structure_reuse.domain.m"
}

#line 184 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0(
#line 184 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 184 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 184 "structure_reuse.domain.m"
{
#line 184 "structure_reuse.domain.m"
  {
#line 184 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 184 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 184 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 184 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_7 == transform_hlds__ctgc__structure_reuse__domain__CastY_8);
#line 184 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 184 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 184 "structure_reuse.domain.m"
    else
#line 184 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "structure_reuse.domain.m"
      {
#line 184 "structure_reuse.domain.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_3 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 184 "structure_reuse.domain.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 184 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_4 == transform_hlds__ctgc__structure_reuse__domain__CastX_3);
#line 184 "structure_reuse.domain.m"
      }
#line 184 "structure_reuse.domain.m"
    else
#line 184 "structure_reuse.domain.m"
      {
#line 184 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 184 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6;

#line 184 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 184 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 184 "structure_reuse.domain.m"
          {
#line 184 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 2655 "transform_hlds.ctgc.structure_reuse.domain.c"
            {
#line 2657 "transform_hlds.ctgc.structure_reuse.domain.c"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0(transform_hlds__ctgc__structure_reuse__domain__V_5_5, transform_hlds__ctgc__structure_reuse__domain__V_6_6);
            }
#line 184 "structure_reuse.domain.m"
          }
#line 184 "structure_reuse.domain.m"
      }
#line 184 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 184 "structure_reuse.domain.m"
  }
#line 184 "structure_reuse.domain.m"
}

#line 188 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0(
#line 188 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 188 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 188 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 188 "structure_reuse.domain.m"
{
#line 188 "structure_reuse.domain.m"
  {
#line 188 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 188 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_20 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 188 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_21 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 188 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_20 == transform_hlds__ctgc__structure_reuse__domain__CastY_21);
#line 188 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 2695 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "structure_reuse.domain.m"
    else
#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) {
#line 188 "structure_reuse.domain.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
        case (MR_Integer) 0:
#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) {
#line 188 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 188 "structure_reuse.domain.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
                case (MR_Integer) 0:
#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 188 "structure_reuse.domain.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
                    case (MR_Integer) 0:
#line 188 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "structure_reuse.domain.m"
                      break;
#line 188 "structure_reuse.domain.m"
                    case (MR_Integer) 1:
#line 188 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "structure_reuse.domain.m"
                      break;
#line 188 "structure_reuse.domain.m"
                  }
#line 188 "structure_reuse.domain.m"
                  break;
#line 188 "structure_reuse.domain.m"
                case (MR_Integer) 1:
#line 2743 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "structure_reuse.domain.m"
                  break;
#line 188 "structure_reuse.domain.m"
                case (MR_Integer) 2:
#line 2749 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "structure_reuse.domain.m"
                  break;
#line 188 "structure_reuse.domain.m"
              }
#line 188 "structure_reuse.domain.m"
              break;
#line 188 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 188 "structure_reuse.domain.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
                case (MR_Integer) 0:
#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 188 "structure_reuse.domain.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
                    case (MR_Integer) 0:
#line 188 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "structure_reuse.domain.m"
                      break;
#line 188 "structure_reuse.domain.m"
                    case (MR_Integer) 1:
#line 188 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "structure_reuse.domain.m"
                      break;
#line 188 "structure_reuse.domain.m"
                  }
#line 188 "structure_reuse.domain.m"
                  break;
#line 188 "structure_reuse.domain.m"
                case (MR_Integer) 1:
#line 2789 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "structure_reuse.domain.m"
                  break;
#line 188 "structure_reuse.domain.m"
                case (MR_Integer) 2:
#line 2795 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "structure_reuse.domain.m"
                  break;
#line 188 "structure_reuse.domain.m"
              }
#line 188 "structure_reuse.domain.m"
              break;
#line 188 "structure_reuse.domain.m"
          }
#line 188 "structure_reuse.domain.m"
          break;
#line 188 "structure_reuse.domain.m"
        case (MR_Integer) 1:
#line 188 "structure_reuse.domain.m"
          {
#line 188 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));

#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
            switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 188 "structure_reuse.domain.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
              case (MR_Integer) 0:
#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
                switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 188 "structure_reuse.domain.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
                  case (MR_Integer) 0:
#line 2828 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "structure_reuse.domain.m"
                    break;
#line 188 "structure_reuse.domain.m"
                  case (MR_Integer) 1:
#line 2834 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "structure_reuse.domain.m"
                    break;
#line 188 "structure_reuse.domain.m"
                }
#line 188 "structure_reuse.domain.m"
                break;
#line 188 "structure_reuse.domain.m"
              case (MR_Integer) 1:
#line 188 "structure_reuse.domain.m"
                {
#line 188 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));

#line 188 "structure_reuse.domain.m"
                  {
#line 188 "structure_reuse.domain.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_24_24)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_11_11)));
                  }
#line 188 "structure_reuse.domain.m"
                }
#line 188 "structure_reuse.domain.m"
                break;
#line 188 "structure_reuse.domain.m"
              case (MR_Integer) 2:
#line 2860 "transform_hlds.ctgc.structure_reuse.domain.c"
                *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "structure_reuse.domain.m"
                break;
#line 188 "structure_reuse.domain.m"
            }
#line 188 "structure_reuse.domain.m"
          }
#line 188 "structure_reuse.domain.m"
          break;
#line 188 "structure_reuse.domain.m"
        case (MR_Integer) 2:
#line 188 "structure_reuse.domain.m"
          {
#line 188 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));

#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
            switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 188 "structure_reuse.domain.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
              case (MR_Integer) 0:
#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
                switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 188 "structure_reuse.domain.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
                  case (MR_Integer) 0:
#line 2891 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "structure_reuse.domain.m"
                    break;
#line 188 "structure_reuse.domain.m"
                  case (MR_Integer) 1:
#line 2897 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "structure_reuse.domain.m"
                    break;
#line 188 "structure_reuse.domain.m"
                }
#line 188 "structure_reuse.domain.m"
                break;
#line 188 "structure_reuse.domain.m"
              case (MR_Integer) 1:
#line 2907 "transform_hlds.ctgc.structure_reuse.domain.c"
                *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "structure_reuse.domain.m"
                break;
#line 188 "structure_reuse.domain.m"
              case (MR_Integer) 2:
#line 188 "structure_reuse.domain.m"
                {
#line 188 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));

#line 188 "structure_reuse.domain.m"
                  {
#line 188 "structure_reuse.domain.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_25_25)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_19_19)));
                  }
#line 188 "structure_reuse.domain.m"
                }
#line 188 "structure_reuse.domain.m"
                break;
#line 188 "structure_reuse.domain.m"
            }
#line 188 "structure_reuse.domain.m"
          }
#line 188 "structure_reuse.domain.m"
          break;
#line 188 "structure_reuse.domain.m"
      }
#line 188 "structure_reuse.domain.m"
  }
#line 188 "structure_reuse.domain.m"
}

#line 188 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0(
#line 188 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 188 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 188 "structure_reuse.domain.m"
{
#line 188 "structure_reuse.domain.m"
  {
#line 188 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 188 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 188 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 188 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_11 == transform_hlds__ctgc__structure_reuse__domain__CastY_12);
#line 188 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 188 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 188 "structure_reuse.domain.m"
    else
#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 188 "structure_reuse.domain.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
        case (MR_Integer) 0:
#line 188 "structure_reuse.domain.m"
#line 188 "structure_reuse.domain.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 188 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 188 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 188 "structure_reuse.domain.m"
              {
#line 188 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_3 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 188 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 188 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_4 == transform_hlds__ctgc__structure_reuse__domain__CastX_3);
#line 188 "structure_reuse.domain.m"
              }
#line 188 "structure_reuse.domain.m"
              break;
#line 188 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 188 "structure_reuse.domain.m"
              {
#line 188 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_5 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 188 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_6 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 188 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_6 == transform_hlds__ctgc__structure_reuse__domain__CastX_5);
#line 188 "structure_reuse.domain.m"
              }
#line 188 "structure_reuse.domain.m"
              break;
#line 188 "structure_reuse.domain.m"
          }
#line 188 "structure_reuse.domain.m"
          break;
#line 188 "structure_reuse.domain.m"
        case (MR_Integer) 1:
#line 188 "structure_reuse.domain.m"
          {
#line 188 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13;
#line 188 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 188 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 188 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 188 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 188 "structure_reuse.domain.m"
              {
#line 188 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 3031 "transform_hlds.ctgc.structure_reuse.domain.c"
                transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6];
#line 3033 "transform_hlds.ctgc.structure_reuse.domain.c"
                {
#line 3035 "transform_hlds.ctgc.structure_reuse.domain.c"
                  transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_8_8)));
                }
#line 188 "structure_reuse.domain.m"
              }
#line 188 "structure_reuse.domain.m"
          }
#line 188 "structure_reuse.domain.m"
          break;
#line 188 "structure_reuse.domain.m"
        case (MR_Integer) 2:
#line 188 "structure_reuse.domain.m"
          {
#line 188 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14;
#line 188 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 188 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_10_10;

#line 188 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 188 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 188 "structure_reuse.domain.m"
              {
#line 188 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 3063 "transform_hlds.ctgc.structure_reuse.domain.c"
                transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6];
#line 3065 "transform_hlds.ctgc.structure_reuse.domain.c"
                {
#line 3067 "transform_hlds.ctgc.structure_reuse.domain.c"
                  transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_9_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_10_10)));
                }
#line 188 "structure_reuse.domain.m"
              }
#line 188 "structure_reuse.domain.m"
          }
#line 188 "structure_reuse.domain.m"
          break;
#line 188 "structure_reuse.domain.m"
      }
#line 188 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 188 "structure_reuse.domain.m"
  }
#line 188 "structure_reuse.domain.m"
}

#line 43 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0(
#line 43 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 43 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 43 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 43 "structure_reuse.domain.m"
{
#line 43 "structure_reuse.domain.m"
  {
#line 43 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 43 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 43 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 43 "structure_reuse.domain.m"
    {
#line 43 "structure_reuse.domain.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_5)));
    }
#line 43 "structure_reuse.domain.m"
  }
#line 43 "structure_reuse.domain.m"
}

#line 43 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0(
#line 43 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 43 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 43 "structure_reuse.domain.m"
{
#line 43 "structure_reuse.domain.m"
  {
#line 43 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 43 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 43 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 43 "structure_reuse.domain.m"
    {
#line 43 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5], ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_4)));
    }
#line 43 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 43 "structure_reuse.domain.m"
  }
#line 43 "structure_reuse.domain.m"
}

#line 290 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0(
#line 290 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 290 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 290 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 290 "structure_reuse.domain.m"
{
#line 290 "structure_reuse.domain.m"
  {
#line 290 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 290 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_18 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 290 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_19 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 290 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_18 == transform_hlds__ctgc__structure_reuse__domain__CastY_19);
#line 290 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3169 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "structure_reuse.domain.m"
    else
#line 290 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "structure_reuse.domain.m"
      if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "structure_reuse.domain.m"
      else
#line 3181 "transform_hlds.ctgc.structure_reuse.domain.c"
        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 290 "structure_reuse.domain.m"
    else
#line 290 "structure_reuse.domain.m"
      {
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 2)));
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));

#line 290 "structure_reuse.domain.m"
        if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3196 "transform_hlds.ctgc.structure_reuse.domain.c"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 290 "structure_reuse.domain.m"
        else
#line 290 "structure_reuse.domain.m"
          {
#line 290 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 290 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 2)));
#line 290 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_16_16;

#line 290 "structure_reuse.domain.m"
            {
#line 290 "structure_reuse.domain.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[2], &transform_hlds__ctgc__structure_reuse__domain__V_16_16, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_25_25)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_13_13)));
            }
#line 3216 "transform_hlds.ctgc.structure_reuse.domain.c"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_16_16 == (MR_Integer) 0);
#line 290 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = !(transform_hlds__ctgc__structure_reuse__domain__succeeded);
#line 290 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 290 "structure_reuse.domain.m"
              *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__domain__V_16_16;
#line 290 "structure_reuse.domain.m"
            else
#line 290 "structure_reuse.domain.m"
              {
#line 290 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__V_17_17;

#line 290 "structure_reuse.domain.m"
                {
#line 290 "structure_reuse.domain.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[1], &transform_hlds__ctgc__structure_reuse__domain__V_17_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_24_24)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_14_14)));
                }
#line 3236 "transform_hlds.ctgc.structure_reuse.domain.c"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_17_17 == (MR_Integer) 0);
#line 290 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = !(transform_hlds__ctgc__structure_reuse__domain__succeeded);
#line 290 "structure_reuse.domain.m"
                if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 290 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__domain__V_17_17;
#line 290 "structure_reuse.domain.m"
                else
#line 290 "structure_reuse.domain.m"
                  {
#line 290 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__domain__V_23_23, transform_hlds__ctgc__structure_reuse__domain__V_15_15);
                  }
#line 290 "structure_reuse.domain.m"
              }
#line 290 "structure_reuse.domain.m"
          }
#line 290 "structure_reuse.domain.m"
      }
#line 290 "structure_reuse.domain.m"
  }
#line 290 "structure_reuse.domain.m"
}

#line 290 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0(
#line 290 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 290 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 290 "structure_reuse.domain.m"
{
#line 290 "structure_reuse.domain.m"
  {
#line 290 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 290 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 290 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 290 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_11 == transform_hlds__ctgc__structure_reuse__domain__CastY_12);
#line 290 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 290 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 290 "structure_reuse.domain.m"
    else
#line 290 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "structure_reuse.domain.m"
      {
#line 290 "structure_reuse.domain.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_3 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 290 "structure_reuse.domain.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 290 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_4 == transform_hlds__ctgc__structure_reuse__domain__CastX_3);
#line 290 "structure_reuse.domain.m"
      }
#line 290 "structure_reuse.domain.m"
    else
#line 290 "structure_reuse.domain.m"
      {
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13;
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14;
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 2)));
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9;
#line 290 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_10_10;

#line 290 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 290 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 290 "structure_reuse.domain.m"
          {
#line 290 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 2)));
#line 3334 "transform_hlds.ctgc.structure_reuse.domain.c"
            transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[2];
#line 3336 "transform_hlds.ctgc.structure_reuse.domain.c"
            {
#line 3338 "transform_hlds.ctgc.structure_reuse.domain.c"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_8_8)));
            }
#line 290 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 290 "structure_reuse.domain.m"
              {
#line 3345 "transform_hlds.ctgc.structure_reuse.domain.c"
                transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[1];
#line 3347 "transform_hlds.ctgc.structure_reuse.domain.c"
                {
#line 3349 "transform_hlds.ctgc.structure_reuse.domain.c"
                  transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_9_9)));
                }
#line 290 "structure_reuse.domain.m"
                if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3354 "transform_hlds.ctgc.structure_reuse.domain.c"
                  {
#line 3356 "transform_hlds.ctgc.structure_reuse.domain.c"
                    transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0(transform_hlds__ctgc__structure_reuse__domain__V_7_7, transform_hlds__ctgc__structure_reuse__domain__V_10_10);
                  }
#line 290 "structure_reuse.domain.m"
              }
#line 290 "structure_reuse.domain.m"
          }
#line 290 "structure_reuse.domain.m"
      }
#line 290 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 290 "structure_reuse.domain.m"
  }
#line 290 "structure_reuse.domain.m"
}

#line 216 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0(
#line 216 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 216 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 216 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 216 "structure_reuse.domain.m"
{
#line 216 "structure_reuse.domain.m"
  {
#line 216 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 216 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 216 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 216 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_9 == transform_hlds__ctgc__structure_reuse__domain__CastY_10);
#line 216 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3396 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 216 "structure_reuse.domain.m"
    else
#line 216 "structure_reuse.domain.m"
      {
#line 216 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 216 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));
#line 216 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 216 "structure_reuse.domain.m"
        {
#line 216 "structure_reuse.domain.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[1], &transform_hlds__ctgc__structure_reuse__domain__V_8_8, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6)));
        }
#line 3418 "transform_hlds.ctgc.structure_reuse.domain.c"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_8_8 == (MR_Integer) 0);
#line 216 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = !(transform_hlds__ctgc__structure_reuse__domain__succeeded);
#line 216 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 216 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__domain__V_8_8;
#line 216 "structure_reuse.domain.m"
        else
#line 216 "structure_reuse.domain.m"
          {
#line 216 "structure_reuse.domain.m"
            {
#line 216 "structure_reuse.domain.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[2], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_7_7)));
            }
#line 216 "structure_reuse.domain.m"
          }
#line 216 "structure_reuse.domain.m"
      }
#line 216 "structure_reuse.domain.m"
  }
#line 216 "structure_reuse.domain.m"
}

#line 216 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0(
#line 216 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 216 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 216 "structure_reuse.domain.m"
{
#line 216 "structure_reuse.domain.m"
  {
#line 216 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 216 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 216 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 216 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_7 == transform_hlds__ctgc__structure_reuse__domain__CastY_8);
#line 216 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 216 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 216 "structure_reuse.domain.m"
    else
#line 216 "structure_reuse.domain.m"
      {
#line 216 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10;
#line 216 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 216 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));

#line 3483 "transform_hlds.ctgc.structure_reuse.domain.c"
        {
#line 3485 "transform_hlds.ctgc.structure_reuse.domain.c"
          transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[1], ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_3_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_5_5)));
        }
#line 216 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 216 "structure_reuse.domain.m"
          {
#line 3492 "transform_hlds.ctgc.structure_reuse.domain.c"
            transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[2];
#line 3494 "transform_hlds.ctgc.structure_reuse.domain.c"
            {
#line 3496 "transform_hlds.ctgc.structure_reuse.domain.c"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6)));
            }
#line 216 "structure_reuse.domain.m"
          }
#line 216 "structure_reuse.domain.m"
      }
#line 216 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 216 "structure_reuse.domain.m"
  }
#line 216 "structure_reuse.domain.m"
}

#line 226 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0(
#line 226 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 226 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 226 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 226 "structure_reuse.domain.m"
{
#line 226 "structure_reuse.domain.m"
  {
#line 226 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 226 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 226 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 226 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_9 == transform_hlds__ctgc__structure_reuse__domain__CastY_10);
#line 226 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3534 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 226 "structure_reuse.domain.m"
    else
#line 226 "structure_reuse.domain.m"
      {
#line 226 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 226 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));
#line 226 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 226 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));
#line 226 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 226 "structure_reuse.domain.m"
        {
#line 226 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(&transform_hlds__ctgc__structure_reuse__domain__V_8_8, transform_hlds__ctgc__structure_reuse__domain__V_4_4, transform_hlds__ctgc__structure_reuse__domain__V_6_6);
        }
#line 3556 "transform_hlds.ctgc.structure_reuse.domain.c"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_8_8 == (MR_Integer) 0);
#line 226 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = !(transform_hlds__ctgc__structure_reuse__domain__succeeded);
#line 226 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 226 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__domain__V_8_8;
#line 226 "structure_reuse.domain.m"
        else
#line 226 "structure_reuse.domain.m"
          {
#line 226 "structure_reuse.domain.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__domain__V_13_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__V_5_5;
#line 226 "structure_reuse.domain.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__domain__V_14_14 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__V_7_7;

#line 226 "structure_reuse.domain.m"
            {
#line 226 "structure_reuse.domain.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__domain__V_13_13, transform_hlds__ctgc__structure_reuse__domain__V_14_14);
            }
#line 226 "structure_reuse.domain.m"
          }
#line 226 "structure_reuse.domain.m"
      }
#line 226 "structure_reuse.domain.m"
  }
#line 226 "structure_reuse.domain.m"
}

#line 226 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0(
#line 226 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 226 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 226 "structure_reuse.domain.m"
{
#line 226 "structure_reuse.domain.m"
  {
#line 226 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 226 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 226 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 226 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_7 == transform_hlds__ctgc__structure_reuse__domain__CastY_8);
#line 226 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 226 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 226 "structure_reuse.domain.m"
    else
#line 226 "structure_reuse.domain.m"
      {
#line 226 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 226 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 226 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 226 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));

#line 3624 "transform_hlds.ctgc.structure_reuse.domain.c"
        {
#line 3626 "transform_hlds.ctgc.structure_reuse.domain.c"
          transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(transform_hlds__ctgc__structure_reuse__domain__V_3_3, transform_hlds__ctgc__structure_reuse__domain__V_5_5);
        }
#line 226 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3631 "transform_hlds.ctgc.structure_reuse.domain.c"
          transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_4_4 == transform_hlds__ctgc__structure_reuse__domain__V_6_6);
#line 226 "structure_reuse.domain.m"
      }
#line 226 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 226 "structure_reuse.domain.m"
  }
#line 226 "structure_reuse.domain.m"
}

#line 308 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(
#line 308 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 308 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 308 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 308 "structure_reuse.domain.m"
{
#line 308 "structure_reuse.domain.m"
  {
#line 308 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 308 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 308 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 308 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_10 == transform_hlds__ctgc__structure_reuse__domain__CastY_11);
#line 308 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3666 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 308 "structure_reuse.domain.m"
    else
#line 308 "structure_reuse.domain.m"
#line 308 "structure_reuse.domain.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) {
#line 308 "structure_reuse.domain.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 308 "structure_reuse.domain.m"
        case (MR_Integer) 0:
#line 308 "structure_reuse.domain.m"
#line 308 "structure_reuse.domain.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) {
#line 308 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 308 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 308 "structure_reuse.domain.m"
#line 308 "structure_reuse.domain.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 308 "structure_reuse.domain.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 308 "structure_reuse.domain.m"
                case (MR_Integer) 0:
#line 308 "structure_reuse.domain.m"
#line 308 "structure_reuse.domain.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 308 "structure_reuse.domain.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 308 "structure_reuse.domain.m"
                    case (MR_Integer) 0:
#line 308 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 308 "structure_reuse.domain.m"
                      break;
#line 308 "structure_reuse.domain.m"
                    case (MR_Integer) 1:
#line 308 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 308 "structure_reuse.domain.m"
                      break;
#line 308 "structure_reuse.domain.m"
                  }
#line 308 "structure_reuse.domain.m"
                  break;
#line 308 "structure_reuse.domain.m"
                case (MR_Integer) 1:
#line 3714 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 308 "structure_reuse.domain.m"
                  break;
#line 308 "structure_reuse.domain.m"
              }
#line 308 "structure_reuse.domain.m"
              break;
#line 308 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 308 "structure_reuse.domain.m"
#line 308 "structure_reuse.domain.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 308 "structure_reuse.domain.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 308 "structure_reuse.domain.m"
                case (MR_Integer) 0:
#line 308 "structure_reuse.domain.m"
#line 308 "structure_reuse.domain.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 308 "structure_reuse.domain.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 308 "structure_reuse.domain.m"
                    case (MR_Integer) 0:
#line 308 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 308 "structure_reuse.domain.m"
                      break;
#line 308 "structure_reuse.domain.m"
                    case (MR_Integer) 1:
#line 308 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 308 "structure_reuse.domain.m"
                      break;
#line 308 "structure_reuse.domain.m"
                  }
#line 308 "structure_reuse.domain.m"
                  break;
#line 308 "structure_reuse.domain.m"
                case (MR_Integer) 1:
#line 3754 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 308 "structure_reuse.domain.m"
                  break;
#line 308 "structure_reuse.domain.m"
              }
#line 308 "structure_reuse.domain.m"
              break;
#line 308 "structure_reuse.domain.m"
          }
#line 308 "structure_reuse.domain.m"
          break;
#line 308 "structure_reuse.domain.m"
        case (MR_Integer) 1:
#line 308 "structure_reuse.domain.m"
          {
#line 308 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));

#line 308 "structure_reuse.domain.m"
#line 308 "structure_reuse.domain.m"
            switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 308 "structure_reuse.domain.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 308 "structure_reuse.domain.m"
              case (MR_Integer) 0:
#line 308 "structure_reuse.domain.m"
#line 308 "structure_reuse.domain.m"
                switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 308 "structure_reuse.domain.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 308 "structure_reuse.domain.m"
                  case (MR_Integer) 0:
#line 3787 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 308 "structure_reuse.domain.m"
                    break;
#line 308 "structure_reuse.domain.m"
                  case (MR_Integer) 1:
#line 3793 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 308 "structure_reuse.domain.m"
                    break;
#line 308 "structure_reuse.domain.m"
                }
#line 308 "structure_reuse.domain.m"
                break;
#line 308 "structure_reuse.domain.m"
              case (MR_Integer) 1:
#line 308 "structure_reuse.domain.m"
                {
#line 308 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));

#line 308 "structure_reuse.domain.m"
                  {
#line 308 "structure_reuse.domain.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_13_13)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_9_9)));
                  }
#line 308 "structure_reuse.domain.m"
                }
#line 308 "structure_reuse.domain.m"
                break;
#line 308 "structure_reuse.domain.m"
            }
#line 308 "structure_reuse.domain.m"
          }
#line 308 "structure_reuse.domain.m"
          break;
#line 308 "structure_reuse.domain.m"
      }
#line 308 "structure_reuse.domain.m"
  }
#line 308 "structure_reuse.domain.m"
}

#line 308 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(
#line 308 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 308 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 308 "structure_reuse.domain.m"
{
#line 308 "structure_reuse.domain.m"
  {
#line 308 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 308 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 308 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 308 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_9 == transform_hlds__ctgc__structure_reuse__domain__CastY_10);
#line 308 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 308 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 308 "structure_reuse.domain.m"
    else
#line 308 "structure_reuse.domain.m"
#line 308 "structure_reuse.domain.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 308 "structure_reuse.domain.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 308 "structure_reuse.domain.m"
        case (MR_Integer) 0:
#line 308 "structure_reuse.domain.m"
#line 308 "structure_reuse.domain.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 308 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 308 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 308 "structure_reuse.domain.m"
              {
#line 308 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_3 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 308 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 308 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_4 == transform_hlds__ctgc__structure_reuse__domain__CastX_3);
#line 308 "structure_reuse.domain.m"
              }
#line 308 "structure_reuse.domain.m"
              break;
#line 308 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 308 "structure_reuse.domain.m"
              {
#line 308 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_5 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 308 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_6 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 308 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_6 == transform_hlds__ctgc__structure_reuse__domain__CastX_5);
#line 308 "structure_reuse.domain.m"
              }
#line 308 "structure_reuse.domain.m"
              break;
#line 308 "structure_reuse.domain.m"
          }
#line 308 "structure_reuse.domain.m"
          break;
#line 308 "structure_reuse.domain.m"
        case (MR_Integer) 1:
#line 308 "structure_reuse.domain.m"
          {
#line 308 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_11_11;
#line 308 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 308 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 308 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 308 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 308 "structure_reuse.domain.m"
              {
#line 308 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 3921 "transform_hlds.ctgc.structure_reuse.domain.c"
                transform_hlds__ctgc__structure_reuse__domain__TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5];
#line 3923 "transform_hlds.ctgc.structure_reuse.domain.c"
                {
#line 3925 "transform_hlds.ctgc.structure_reuse.domain.c"
                  transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_11_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_8_8)));
                }
#line 308 "structure_reuse.domain.m"
              }
#line 308 "structure_reuse.domain.m"
          }
#line 308 "structure_reuse.domain.m"
          break;
#line 308 "structure_reuse.domain.m"
      }
#line 308 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 308 "structure_reuse.domain.m"
  }
#line 308 "structure_reuse.domain.m"
}

#line 232 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0(
#line 232 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 232 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 232 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 232 "structure_reuse.domain.m"
{
#line 232 "structure_reuse.domain.m"
  {
#line 232 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 232 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 232 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 232 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_9 == transform_hlds__ctgc__structure_reuse__domain__CastY_10);
#line 232 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3967 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "structure_reuse.domain.m"
    else
#line 232 "structure_reuse.domain.m"
      {
#line 232 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));
#line 232 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 232 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));
#line 232 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 232 "structure_reuse.domain.m"
        {
#line 232 "structure_reuse.domain.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__ctgc__structure_reuse__domain__V_8_8, transform_hlds__ctgc__structure_reuse__domain__V_4_4, transform_hlds__ctgc__structure_reuse__domain__V_6_6);
        }
#line 3989 "transform_hlds.ctgc.structure_reuse.domain.c"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_8_8 == (MR_Integer) 0);
#line 232 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = !(transform_hlds__ctgc__structure_reuse__domain__succeeded);
#line 232 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 232 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__domain__V_8_8;
#line 232 "structure_reuse.domain.m"
        else
#line 232 "structure_reuse.domain.m"
          {
#line 232 "structure_reuse.domain.m"
            {
#line 232 "structure_reuse.domain.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_7_7)));
            }
#line 232 "structure_reuse.domain.m"
          }
#line 232 "structure_reuse.domain.m"
      }
#line 232 "structure_reuse.domain.m"
  }
#line 232 "structure_reuse.domain.m"
}

#line 232 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0(
#line 232 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 232 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 232 "structure_reuse.domain.m"
{
#line 232 "structure_reuse.domain.m"
  {
#line 232 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 232 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 232 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 232 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_7 == transform_hlds__ctgc__structure_reuse__domain__CastY_8);
#line 232 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 232 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 232 "structure_reuse.domain.m"
    else
#line 232 "structure_reuse.domain.m"
      {
#line 232 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10;
#line 232 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));

#line 4054 "transform_hlds.ctgc.structure_reuse.domain.c"
        {
#line 4056 "transform_hlds.ctgc.structure_reuse.domain.c"
          transform_hlds__ctgc__structure_reuse__domain__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__ctgc__structure_reuse__domain__V_3_3, transform_hlds__ctgc__structure_reuse__domain__V_5_5);
        }
#line 232 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 232 "structure_reuse.domain.m"
          {
#line 4063 "transform_hlds.ctgc.structure_reuse.domain.c"
            transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4];
#line 4065 "transform_hlds.ctgc.structure_reuse.domain.c"
            {
#line 4067 "transform_hlds.ctgc.structure_reuse.domain.c"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6)));
            }
#line 232 "structure_reuse.domain.m"
          }
#line 232 "structure_reuse.domain.m"
      }
#line 232 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 232 "structure_reuse.domain.m"
  }
#line 232 "structure_reuse.domain.m"
}

#line 240 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0(
#line 240 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 240 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 240 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 240 "structure_reuse.domain.m"
{
#line 240 "structure_reuse.domain.m"
  {
#line 240 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 240 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 240 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 240 "structure_reuse.domain.m"
    {
#line 240 "structure_reuse.domain.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_5)));
    }
#line 240 "structure_reuse.domain.m"
  }
#line 240 "structure_reuse.domain.m"
}

#line 240 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0(
#line 240 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 240 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 240 "structure_reuse.domain.m"
{
#line 240 "structure_reuse.domain.m"
  {
#line 240 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 240 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 240 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 240 "structure_reuse.domain.m"
    {
#line 240 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4], ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_4)));
    }
#line 240 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 240 "structure_reuse.domain.m"
  }
#line 240 "structure_reuse.domain.m"
}

#line 999 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_p_0(
#line 999 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 999 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PredId_7,
#line 999 "structure_reuse.domain.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__domain__ProcId_8,
#line 999 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16,
#line 999 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_17)
#line 999 "structure_reuse.domain.m"
{
#line 1002 "structure_reuse.domain.m"
  {
#line 1002 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 1002 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_10;
#line 1002 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__MaybePublicReuse_11;

#line 1003 "structure_reuse.domain.m"
    {
#line 1003 "structure_reuse.domain.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__PredId_7, transform_hlds__ctgc__structure_reuse__domain__ProcId_8, &transform_hlds__ctgc__structure_reuse__domain__ProcInfo_10);
    }
#line 1004 "structure_reuse.domain.m"
    {
#line 1004 "structure_reuse.domain.m"
      hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(transform_hlds__ctgc__structure_reuse__domain__ProcInfo_10, &transform_hlds__ctgc__structure_reuse__domain__MaybePublicReuse_11);
    }
#line 1012 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__MaybePublicReuse_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1013 "structure_reuse.domain.m"
      *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_17 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16;
#line 1012 "structure_reuse.domain.m"
    else
#line 1007 "structure_reuse.domain.m"
      {
#line 1007 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__PublicReuse_12;
#line 1007 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__Status_13;
#line 1007 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_14;
#line 1007 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__PrivateReuse_15;
#line 1007 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__MaybePublicReuse_11, (MR_Integer) 0)));
#line 1007 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_19_19;
#line 1007 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__T0_26;
#line 1007 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__T_27;
#line 946 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_29_29;
#line 948 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_31_31;
#line 948 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_30_30;

#line 1006 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__PublicReuse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, (MR_Integer) 0)));
#line 1006 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__Status_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, (MR_Integer) 1)));
#line 1008 "structure_reuse.domain.m"
        {
#line 1008 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__PPId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__PPId_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PredId_7));
#line 1008 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__PPId_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcId_8));
#line 1008 "structure_reuse.domain.m"
        }
#line 1009 "structure_reuse.domain.m"
        {
#line 1009 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__PrivateReuse_15 = transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(transform_hlds__ctgc__structure_reuse__domain__PublicReuse_12);
        }
#line 1010 "structure_reuse.domain.m"
        {
#line 1010 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_19_19, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PrivateReuse_15));
#line 1010 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_19_19, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Status_13));
#line 1010 "structure_reuse.domain.m"
        }
#line 946 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__T0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16, (MR_Integer) 0)));
#line 946 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16, (MR_Integer) 1)));
#line 947 "structure_reuse.domain.m"
        {
#line 947 "structure_reuse.domain.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PPId_14)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_19_19)), transform_hlds__ctgc__structure_reuse__domain__T0_26, &transform_hlds__ctgc__structure_reuse__domain__T_27);
        }
#line 948 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16, (MR_Integer) 0)));
#line 948 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16, (MR_Integer) 1)));
#line 948 "structure_reuse.domain.m"
        {
#line 948 "structure_reuse.domain.m"
          MR_Word base;
#line 948 "structure_reuse.domain.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 948 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_17 = base;
#line 948 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__T_27));
#line 948 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_31_31));
#line 948 "structure_reuse.domain.m"
        }
#line 1007 "structure_reuse.domain.m"
      }
#line 1002 "structure_reuse.domain.m"
  }
#line 999 "structure_reuse.domain.m"
}

#line 996 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0_1(
#line 996 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 996 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 996 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 996 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 996 "structure_reuse.domain.m"
{
#line 996 "structure_reuse.domain.m"
  {
#line 996 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 996 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_17;

#line 996 "structure_reuse.domain.m"
    {
#line 996 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_17);
    }
#line 996 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_17));
#line 996 "structure_reuse.domain.m"
  }
#line 996 "structure_reuse.domain.m"
}

#line 990 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0(
#line 990 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 990 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PredId_6,
#line 990 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_10,
#line 990 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_11)
#line 990 "structure_reuse.domain.m"
{
#line 993 "structure_reuse.domain.m"
  {
#line 993 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 993 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__PredInfo_8;
#line 993 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcIds_9;
#line 993 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_12_12;
#line 996 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseTable_11;

#line 994 "structure_reuse.domain.m"
    {
#line 994 "structure_reuse.domain.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__PredId_6, &transform_hlds__ctgc__structure_reuse__domain__PredInfo_8);
    }
#line 995 "structure_reuse.domain.m"
    {
#line 995 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__ProcIds_9 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__ctgc__structure_reuse__domain__PredInfo_8);
    }
#line 996 "structure_reuse.domain.m"
    {
#line 996 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 996 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_12_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[3]));
#line 996 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_12_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0_1));
#line 996 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 996 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_12_12, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5));
#line 996 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_12_12, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PredId_6));
#line 996 "structure_reuse.domain.m"
    }
#line 996 "structure_reuse.domain.m"
    {
#line 996 "structure_reuse.domain.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__domain__V_12_12, transform_hlds__ctgc__structure_reuse__domain__ProcIds_9, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_10)), &transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseTable_11);
    }
#line 996 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_11 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseTable_11);
#line 993 "structure_reuse.domain.m"
  }
#line 990 "structure_reuse.domain.m"
}

#line 975 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__dump_entries_5_p_0(
#line 975 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 975 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_7,
#line 975 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 975 "structure_reuse.domain.m"
{
#line 978 "structure_reuse.domain.m"
  {
#line 978 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 978 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 978 "structure_reuse.domain.m"
    MR_String transform_hlds__ctgc__structure_reuse__domain__V_18_18;
#line 978 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain___Status_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));

#line 979 "structure_reuse.domain.m"
    {
#line 979 "structure_reuse.domain.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 980 "structure_reuse.domain.m"
    {
#line 980 "structure_reuse.domain.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__PPId_7);
    }
#line 981 "structure_reuse.domain.m"
    {
#line 981 "structure_reuse.domain.m"
      mercury__io__write_string_3_p_0((MR_String) "\t--> ");
    }
#line 982 "structure_reuse.domain.m"
    {
#line 982 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_18_18 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_f_0(transform_hlds__ctgc__structure_reuse__domain__ReuseAs_8);
    }
#line 982 "structure_reuse.domain.m"
    {
#line 982 "structure_reuse.domain.m"
      mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__domain__V_18_18);
    }
#line 983 "structure_reuse.domain.m"
    {
#line 983 "structure_reuse.domain.m"
      mercury__io__nl_2_p_0();
    }
#line 978 "structure_reuse.domain.m"
  }
#line 975 "structure_reuse.domain.m"
}

#line 915 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_f_0(
#line 915 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Condition_3,
#line 915 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__StructureReuseCondition_4)
#line 915 "structure_reuse.domain.m"
{
#line 918 "structure_reuse.domain.m"
  {
#line 918 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__Condition_3)) == (MR_mktag((MR_Integer) 1)));
#line 918 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadNodes_5;
#line 918 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__LiveNodes_6;
#line 918 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_7;
#line 918 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 919 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 919 "structure_reuse.domain.m"
      {
#line 919 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__DeadNodes_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_3, (MR_Integer) 0)));
#line 919 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__LiveNodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_3, (MR_Integer) 1)));
#line 919 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__SharingAs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_3, (MR_Integer) 2)));
#line 921 "structure_reuse.domain.m"
        {
#line 921 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_8_8 = transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0(transform_hlds__ctgc__structure_reuse__domain__SharingAs_7);
        }
#line 920 "structure_reuse.domain.m"
        {
#line 920 "structure_reuse.domain.m"
          MR_Word base;
#line 920 "structure_reuse.domain.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 920 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__StructureReuseCondition_4 = base;
#line 920 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__DeadNodes_5));
#line 920 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__LiveNodes_6));
#line 920 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_8_8));
#line 920 "structure_reuse.domain.m"
        }
#line 920 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 919 "structure_reuse.domain.m"
      }
#line 918 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 918 "structure_reuse.domain.m"
  }
#line 915 "structure_reuse.domain.m"
}

#line 887 "structure_reuse.domain.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_f_0(
#line 887 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PublicReuseCondition_3)
#line 887 "structure_reuse.domain.m"
{
#line 890 "structure_reuse.domain.m"
  {
#line 890 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 890 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4;
#line 890 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadNodes_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__PublicReuseCondition_3, (MR_Integer) 0)));
#line 890 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__LiveNodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__PublicReuseCondition_3, (MR_Integer) 1)));
#line 890 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__PublicSharing_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__PublicReuseCondition_3, (MR_Integer) 2)));
#line 890 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 894 "structure_reuse.domain.m"
    {
#line 894 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_8_8 = transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0(transform_hlds__ctgc__structure_reuse__domain__PublicSharing_7);
    }
#line 893 "structure_reuse.domain.m"
    {
#line 893 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 893 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__DeadNodes_5));
#line 893 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__LiveNodes_6));
#line 893 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_8_8));
#line 893 "structure_reuse.domain.m"
    }
#line 890 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4;
#line 890 "structure_reuse.domain.m"
  }
#line 887 "structure_reuse.domain.m"
}

#line 807 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__collect_aliased_vars_3_p_0(
#line 807 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 807 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_0_7,
#line 807 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_8)
#line 807 "structure_reuse.domain.m"
{
#line 810 "structure_reuse.domain.m"
  {
#line 810 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 810 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_15_15 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0];
#line 810 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__DataA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 810 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__DataB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 810 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__DataA_4, (MR_Integer) 0)));
#line 810 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_10_10;
#line 810 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_11_11;
#line 811 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__DataA_4, (MR_Integer) 1)));
#line 812 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14;

#line 811 "structure_reuse.domain.m"
    {
#line 811 "structure_reuse.domain.m"
      mercury__set__insert_3_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_15_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_9_9)), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_0_7, &transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_10_10);
    }
#line 812 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__DataB_5, (MR_Integer) 0)));
#line 812 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__DataB_5, (MR_Integer) 1)));
#line 812 "structure_reuse.domain.m"
    {
#line 812 "structure_reuse.domain.m"
      mercury__set__insert_3_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_15_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_11_11)), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_10_10, transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_8);
    }
#line 810 "structure_reuse.domain.m"
  }
#line 807 "structure_reuse.domain.m"
}

#line 791 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__there_is_a_subsumption_relation_5_p_0(
#line 791 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 791 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 791 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3,
#line 791 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__DataA_10,
#line 791 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__DataB_11,
#line 791 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 791 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr)
#line 791 "structure_reuse.domain.m"
{
#line 795 "structure_reuse.domain.m"
  while (MR_TRUE)
#line 795 "structure_reuse.domain.m"
    {
#line 795 "structure_reuse.domain.m"
      /* tailcall optimized into a loop */
#line 795 "structure_reuse.domain.m"
      {
#line 795 "structure_reuse.domain.m"
        MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 795 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__DataB0_8;
#line 795 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__DataBs_9;

#line 794 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 794 "structure_reuse.domain.m"
          {
#line 794 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__DataB0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 794 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__DataBs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));
#line 798 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__DataB_11 = transform_hlds__ctgc__structure_reuse__domain__DataB0_8;
#line 797 "structure_reuse.domain.m"
            {
#line 797 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, transform_hlds__ctgc__structure_reuse__domain__DataA_10, *transform_hlds__ctgc__structure_reuse__domain__DataB_11);
            }
#line 797 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 797 "structure_reuse.domain.m"
              {
#line 797 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__cont(transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr);
              }
#line 801 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__DataB_11 = transform_hlds__ctgc__structure_reuse__domain__DataB0_8;
#line 800 "structure_reuse.domain.m"
            {
#line 800 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, *transform_hlds__ctgc__structure_reuse__domain__DataB_11, transform_hlds__ctgc__structure_reuse__domain__DataA_10);
            }
#line 800 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 800 "structure_reuse.domain.m"
              {
#line 800 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__cont(transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr);
              }
#line 803 "structure_reuse.domain.m"
            {
#line 803 "structure_reuse.domain.m"
              /* direct tailcall eliminated */
#line 803 "structure_reuse.domain.m"
              {
#line 803 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3__tmp_copy_3 = transform_hlds__ctgc__structure_reuse__domain__DataBs_9;

#line 803 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__3__tmp_copy_3;
#line 803 "structure_reuse.domain.m"
              }
#line 803 "structure_reuse.domain.m"
              continue;
#line 803 "structure_reuse.domain.m"
            }
#line 794 "structure_reuse.domain.m"
          }
#line 795 "structure_reuse.domain.m"
      }
#line 795 "structure_reuse.domain.m"
      break;
#line 795 "structure_reuse.domain.m"
    }
#line 791 "structure_reuse.domain.m"
}

#line 778 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_3(
#line 778 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg)
#line 778 "structure_reuse.domain.m"
{
#line 778 "structure_reuse.domain.m"
  {
#line 778 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__domain__env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg;

#line 778 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15 = ((MR_Word) (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__conv0_SharingNode_15);
#line 778 "structure_reuse.domain.m"
    {
#line 778 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_2(transform_hlds__ctgc__structure_reuse__domain__env_ptr);
    }
#line 778 "structure_reuse.domain.m"
  }
#line 778 "structure_reuse.domain.m"
}

#line 778 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_4(
#line 778 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg)
#line 778 "structure_reuse.domain.m"
{
#line 778 "structure_reuse.domain.m"
  {
#line 778 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__domain__env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg;

#line 781 "structure_reuse.domain.m"
    {
#line 781 "structure_reuse.domain.m"
      MR_Word base;
#line 781 "structure_reuse.domain.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 781 "structure_reuse.domain.m"
      *((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12) = base;
#line 781 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15));
#line 781 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherAliasedNode_16));
#line 781 "structure_reuse.domain.m"
    }
#line 781 "structure_reuse.domain.m"
    {
#line 781 "structure_reuse.domain.m"
      ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont)((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr);
    }
#line 778 "structure_reuse.domain.m"
  }
#line 778 "structure_reuse.domain.m"
}

#line 778 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_2(
#line 778 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg)
#line 778 "structure_reuse.domain.m"
{
#line 778 "structure_reuse.domain.m"
  {
#line 778 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__domain__env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg;

#line 780 "structure_reuse.domain.m"
    {
#line 780 "structure_reuse.domain.m"
      MR_Word base;
#line 780 "structure_reuse.domain.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "structure_reuse.domain.m"
      (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__V_19_19 = base;
#line 780 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10));
#line 780 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11));
#line 780 "structure_reuse.domain.m"
    }
#line 779 "structure_reuse.domain.m"
    {
#line 779 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__there_is_a_subsumption_relation_5_p_0((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__V_19_19, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15, &(transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherAliasedNode_16, transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_4, transform_hlds__ctgc__structure_reuse__domain__env_ptr);
    }
#line 778 "structure_reuse.domain.m"
  }
#line 778 "structure_reuse.domain.m"
}

#line 770 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_1(
#line 770 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg)
#line 770 "structure_reuse.domain.m"
{
#line 770 "structure_reuse.domain.m"
  {
#line 770 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__domain__env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg;

#line 778 "structure_reuse.domain.m"
    {
#line 778 "structure_reuse.domain.m"
      {
#line 778 "structure_reuse.domain.m"
        mercury__list__member_2_p_1((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__TypeCtorInfo_20_20, &(transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__conv0_SharingNode_15, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNodes_14, transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_3, transform_hlds__ctgc__structure_reuse__domain__env_ptr);
      }
#line 778 "structure_reuse.domain.m"
    }
#line 783 "structure_reuse.domain.m"
    {
#line 783 "structure_reuse.domain.m"
      MR_Word transform_hlds__ctgc__structure_reuse__domain__NextNode_17;
#line 783 "structure_reuse.domain.m"
      MR_Word transform_hlds__ctgc__structure_reuse__domain__NextOtherNodes_18;

#line 783 "structure_reuse.domain.m"
      (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11)) == (MR_mktag((MR_Integer) 1)));
#line 783 "structure_reuse.domain.m"
      if ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__succeeded)
#line 783 "structure_reuse.domain.m"
        {
#line 783 "structure_reuse.domain.m"
          {
#line 783 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__NextNode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11, (MR_Integer) 0)));
#line 783 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__NextOtherNodes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11, (MR_Integer) 1)));
#line 783 "structure_reuse.domain.m"
          }
#line 784 "structure_reuse.domain.m"
          {
#line 784 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9, transform_hlds__ctgc__structure_reuse__domain__NextNode_17, transform_hlds__ctgc__structure_reuse__domain__NextOtherNodes_18, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr);
          }
#line 783 "structure_reuse.domain.m"
        }
#line 783 "structure_reuse.domain.m"
    }
#line 770 "structure_reuse.domain.m"
  }
#line 770 "structure_reuse.domain.m"
}

#line 765 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0(
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_7,
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_8,
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_9,
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Node_10,
#line 765 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__OtherNodes_11,
#line 765 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__AliasedNodes_12,
#line 765 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 765 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr)
#line 765 "structure_reuse.domain.m"
{
#line 765 "structure_reuse.domain.m"
  {
#line 765 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s transform_hlds__ctgc__structure_reuse__domain__env;

#line 765 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7 = transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_7;
#line 765 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8 = transform_hlds__ctgc__structure_reuse__domain__ProcInfo_8;
#line 765 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9 = transform_hlds__ctgc__structure_reuse__domain__SharingAs_9;
#line 765 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10 = transform_hlds__ctgc__structure_reuse__domain__Node_10;
#line 765 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11 = transform_hlds__ctgc__structure_reuse__domain__OtherNodes_11;
#line 765 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12 = transform_hlds__ctgc__structure_reuse__domain__AliasedNodes_12;
#line 765 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont = transform_hlds__ctgc__structure_reuse__domain__cont;
#line 765 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr = transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr;
#line 770 "structure_reuse.domain.m"
    {
#line 770 "structure_reuse.domain.m"
      MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingNodes0_13;

#line 771 "structure_reuse.domain.m"
      {
#line 771 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__SharingNodes0_13 = transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0((transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8, (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9, (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10);
      }
#line 4885 "transform_hlds.ctgc.structure_reuse.domain.c"
      (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 772 "structure_reuse.domain.m"
      {
#line 772 "structure_reuse.domain.m"
        mercury__list__delete_3_p_1((transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__TypeCtorInfo_20_20, transform_hlds__ctgc__structure_reuse__domain__SharingNodes0_13, ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10)), &(transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNodes_14, transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_1, &transform_hlds__ctgc__structure_reuse__domain__env);
      }
#line 770 "structure_reuse.domain.m"
    }
#line 765 "structure_reuse.domain.m"
  }
#line 765 "structure_reuse.domain.m"
}

#line 702 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1,
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2,
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LiveData_3,
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_4,
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__StaticVars_5,
#line 702 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6,
#line 702 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7)
#line 702 "structure_reuse.domain.m"
{
#line 706 "structure_reuse.domain.m"
  while (MR_TRUE)
#line 706 "structure_reuse.domain.m"
    {
#line 706 "structure_reuse.domain.m"
      /* tailcall optimized into a loop */
#line 706 "structure_reuse.domain.m"
      {
#line 706 "structure_reuse.domain.m"
        MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 706 "structure_reuse.domain.m"
        if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 706 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 706 "structure_reuse.domain.m"
        else
#line 708 "structure_reuse.domain.m"
          {
#line 708 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6, (MR_Integer) 0)));
#line 708 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__Conds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6, (MR_Integer) 1)));

#line 4942 "transform_hlds.ctgc.structure_reuse.domain.c"
            if ((transform_hlds__ctgc__structure_reuse__domain__Cond_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 712 "structure_reuse.domain.m"
              {
#line 712 "structure_reuse.domain.m"
                /* direct tailcall eliminated */
#line 712 "structure_reuse.domain.m"
                {
#line 712 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__6__tmp_copy_6 = transform_hlds__ctgc__structure_reuse__domain__Conds_19;

#line 712 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__6__tmp_copy_6;
#line 712 "structure_reuse.domain.m"
                }
#line 712 "structure_reuse.domain.m"
                continue;
#line 712 "structure_reuse.domain.m"
              }
#line 4961 "transform_hlds.ctgc.structure_reuse.domain.c"
            else
#line 4963 "transform_hlds.ctgc.structure_reuse.domain.c"
              {
#line 4965 "transform_hlds.ctgc.structure_reuse.domain.c"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadNodes0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_18, (MR_Integer) 0)));
#line 4967 "transform_hlds.ctgc.structure_reuse.domain.c"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__InUseNodes_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_18, (MR_Integer) 1)));
#line 4969 "transform_hlds.ctgc.structure_reuse.domain.c"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingNodes_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_18, (MR_Integer) 2)));
#line 4971 "transform_hlds.ctgc.structure_reuse.domain.c"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadNodes_60;
#line 4973 "transform_hlds.ctgc.structure_reuse.domain.c"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__StaticDeadNodes_61;

#line 827 "structure_reuse.domain.m"
                {
#line 827 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__DeadNodes_60 = mercury__set__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, transform_hlds__ctgc__structure_reuse__domain__DeadNodes0_57);
                }
#line 830 "structure_reuse.domain.m"
                {
#line 830 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__StaticDeadNodes_61 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__StaticVars_5, transform_hlds__ctgc__structure_reuse__domain__DeadNodes_60);
                }
#line 4986 "transform_hlds.ctgc.structure_reuse.domain.c"
                if ((transform_hlds__ctgc__structure_reuse__domain__StaticDeadNodes_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4988 "transform_hlds.ctgc.structure_reuse.domain.c"
                  {
#line 4990 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__NewSharing_62;
#line 4992 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__UpdatedLiveData_63;
#line 4994 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__NotLiveResult_64;

#line 839 "structure_reuse.domain.m"
                    {
#line 839 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__NewSharing_62 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2, transform_hlds__ctgc__structure_reuse__domain__SharingNodes_59, transform_hlds__ctgc__structure_reuse__domain__SharingAs_4);
                    }
#line 841 "structure_reuse.domain.m"
                    {
#line 841 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__UpdatedLiveData_63 = transform_hlds__ctgc__livedata__livedata_add_liveness_5_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2, transform_hlds__ctgc__structure_reuse__domain__InUseNodes_58, transform_hlds__ctgc__structure_reuse__domain__NewSharing_62, transform_hlds__ctgc__structure_reuse__domain__LiveData_3);
                    }
#line 843 "structure_reuse.domain.m"
                    {
#line 843 "structure_reuse.domain.m"
                      transform_hlds__ctgc__livedata__nodes_are_not_live_5_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2, transform_hlds__ctgc__structure_reuse__domain__DeadNodes_60, transform_hlds__ctgc__structure_reuse__domain__UpdatedLiveData_63, &transform_hlds__ctgc__structure_reuse__domain__NotLiveResult_64);
                    }
#line 5012 "transform_hlds.ctgc.structure_reuse.domain.c"
                    if ((transform_hlds__ctgc__structure_reuse__domain__NotLiveResult_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5014 "transform_hlds.ctgc.structure_reuse.domain.c"
                      {
#line 847 "structure_reuse.domain.m"
                        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ctgc__structure_reuse__domain_scalar_common_9[1]);
#line 5018 "transform_hlds.ctgc.structure_reuse.domain.c"
                      }
#line 5020 "transform_hlds.ctgc.structure_reuse.domain.c"
                    else
#line 5022 "transform_hlds.ctgc.structure_reuse.domain.c"
                      {
#line 5024 "transform_hlds.ctgc.structure_reuse.domain.c"
                        MR_Word transform_hlds__ctgc__structure_reuse__domain__StillLive_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NotLiveResult_64, (MR_Integer) 0)));

#line 5027 "transform_hlds.ctgc.structure_reuse.domain.c"
                        if ((transform_hlds__ctgc__structure_reuse__domain__StillLive_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 712 "structure_reuse.domain.m"
                          {
#line 712 "structure_reuse.domain.m"
                            /* direct tailcall eliminated */
#line 712 "structure_reuse.domain.m"
                            {
#line 712 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__6__tmp_copy_6 = transform_hlds__ctgc__structure_reuse__domain__Conds_19;

#line 712 "structure_reuse.domain.m"
                              transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__6__tmp_copy_6;
#line 712 "structure_reuse.domain.m"
                            }
#line 712 "structure_reuse.domain.m"
                            continue;
#line 712 "structure_reuse.domain.m"
                          }
#line 5046 "transform_hlds.ctgc.structure_reuse.domain.c"
                        else
#line 5048 "transform_hlds.ctgc.structure_reuse.domain.c"
                          {
#line 5050 "transform_hlds.ctgc.structure_reuse.domain.c"
                            MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars_68;
#line 5052 "transform_hlds.ctgc.structure_reuse.domain.c"
                            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_72_72;
#line 5054 "transform_hlds.ctgc.structure_reuse.domain.c"
                            MR_Word transform_hlds__ctgc__structure_reuse__domain__Result1_223;
#line 5056 "transform_hlds.ctgc.structure_reuse.domain.c"
                            MR_Word transform_hlds__ctgc__structure_reuse__domain__Result0_311;

#line 855 "structure_reuse.domain.m"
                            {
#line 855 "structure_reuse.domain.m"
                              transform_hlds__ctgc__structure_reuse__domain__Vars_68 = transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0(transform_hlds__ctgc__structure_reuse__domain__StillLive_65);
                            }
#line 856 "structure_reuse.domain.m"
                            {
#line 856 "structure_reuse.domain.m"
                              transform_hlds__ctgc__structure_reuse__domain__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 856 "structure_reuse.domain.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_72_72, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Vars_68));
#line 856 "structure_reuse.domain.m"
                            }
#line 856 "structure_reuse.domain.m"
                            {
#line 856 "structure_reuse.domain.m"
                              transform_hlds__ctgc__structure_reuse__domain__Result0_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 856 "structure_reuse.domain.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Result0_311, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_72_72));
#line 856 "structure_reuse.domain.m"
                            }
#line 718 "structure_reuse.domain.m"
                            {
#line 718 "structure_reuse.domain.m"
                              transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2, transform_hlds__ctgc__structure_reuse__domain__LiveData_3, transform_hlds__ctgc__structure_reuse__domain__SharingAs_4, transform_hlds__ctgc__structure_reuse__domain__StaticVars_5, transform_hlds__ctgc__structure_reuse__domain__Conds_19, &transform_hlds__ctgc__structure_reuse__domain__Result1_223);
                            }
#line 724 "structure_reuse.domain.m"
                            if ((transform_hlds__ctgc__structure_reuse__domain__Result1_223 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "structure_reuse.domain.m"
                              *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = transform_hlds__ctgc__structure_reuse__domain__Result0_311;
#line 724 "structure_reuse.domain.m"
                            else
#line 724 "structure_reuse.domain.m"
                              {
#line 724 "structure_reuse.domain.m"
                                MR_Word transform_hlds__ctgc__structure_reuse__domain__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Result1_223, (MR_Integer) 0)));

#line 724 "structure_reuse.domain.m"
#line 724 "structure_reuse.domain.m"
                                switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__V_209_209)) {
#line 724 "structure_reuse.domain.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 724 "structure_reuse.domain.m"
                                  case (MR_Integer) 0:
#line 724 "structure_reuse.domain.m"
#line 724 "structure_reuse.domain.m"
                                    switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__V_209_209)) {
#line 724 "structure_reuse.domain.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 724 "structure_reuse.domain.m"
                                      case (MR_Integer) 0:
#line 728 "structure_reuse.domain.m"
                                        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = transform_hlds__ctgc__structure_reuse__domain__Result0_311;
#line 724 "structure_reuse.domain.m"
                                        break;
#line 724 "structure_reuse.domain.m"
                                      case (MR_Integer) 1:
#line 732 "structure_reuse.domain.m"
                                        {
#line 733 "structure_reuse.domain.m"
                                          {
#line 733 "structure_reuse.domain.m"
                                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
#line 733 "structure_reuse.domain.m"
                                            return;
                                          }
#line 732 "structure_reuse.domain.m"
                                        }
#line 724 "structure_reuse.domain.m"
                                        break;
#line 724 "structure_reuse.domain.m"
                                    }
#line 724 "structure_reuse.domain.m"
                                    break;
#line 724 "structure_reuse.domain.m"
                                  case (MR_Integer) 1:
#line 721 "structure_reuse.domain.m"
                                    {
#line 721 "structure_reuse.domain.m"
                                      MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_180 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0];
#line 721 "structure_reuse.domain.m"
                                      MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars1_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_209_209, (MR_Integer) 0)));
#line 721 "structure_reuse.domain.m"
                                      MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars_177;
#line 721 "structure_reuse.domain.m"
                                      MR_Word transform_hlds__ctgc__structure_reuse__domain__V_178_178;
#line 721 "structure_reuse.domain.m"
                                      MR_Word transform_hlds__ctgc__structure_reuse__domain__V_179_179;

#line 722 "structure_reuse.domain.m"
                                      {
#line 722 "structure_reuse.domain.m"
                                        transform_hlds__ctgc__structure_reuse__domain__V_178_178 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_180, transform_hlds__ctgc__structure_reuse__domain__Vars_68, transform_hlds__ctgc__structure_reuse__domain__Vars1_176);
                                      }
#line 722 "structure_reuse.domain.m"
                                      {
#line 722 "structure_reuse.domain.m"
                                        transform_hlds__ctgc__structure_reuse__domain__Vars_177 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_180, transform_hlds__ctgc__structure_reuse__domain__V_178_178);
                                      }
#line 723 "structure_reuse.domain.m"
                                      {
#line 723 "structure_reuse.domain.m"
                                        transform_hlds__ctgc__structure_reuse__domain__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 723 "structure_reuse.domain.m"
                                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_179_179, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Vars_177));
#line 723 "structure_reuse.domain.m"
                                      }
#line 723 "structure_reuse.domain.m"
                                      {
#line 723 "structure_reuse.domain.m"
                                        MR_Word base;
#line 723 "structure_reuse.domain.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 723 "structure_reuse.domain.m"
                                        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = base;
#line 723 "structure_reuse.domain.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_179_179));
#line 723 "structure_reuse.domain.m"
                                      }
#line 721 "structure_reuse.domain.m"
                                    }
#line 724 "structure_reuse.domain.m"
                                    break;
#line 724 "structure_reuse.domain.m"
                                  case (MR_Integer) 2:
#line 732 "structure_reuse.domain.m"
                                    {
#line 733 "structure_reuse.domain.m"
                                      {
#line 733 "structure_reuse.domain.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
#line 733 "structure_reuse.domain.m"
                                        return;
                                      }
#line 732 "structure_reuse.domain.m"
                                    }
#line 724 "structure_reuse.domain.m"
                                    break;
#line 724 "structure_reuse.domain.m"
                                }
#line 724 "structure_reuse.domain.m"
                              }
#line 5201 "transform_hlds.ctgc.structure_reuse.domain.c"
                          }
#line 5203 "transform_hlds.ctgc.structure_reuse.domain.c"
                      }
#line 5205 "transform_hlds.ctgc.structure_reuse.domain.c"
                  }
#line 5207 "transform_hlds.ctgc.structure_reuse.domain.c"
                else
#line 5209 "transform_hlds.ctgc.structure_reuse.domain.c"
                  {
#line 5211 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_71_71;
#line 5213 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars_74;
#line 5215 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__Result1_124;
#line 5217 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__Result0_175;

#line 861 "structure_reuse.domain.m"
                    {
#line 861 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__Vars_74 = transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0(transform_hlds__ctgc__structure_reuse__domain__StaticDeadNodes_61);
                    }
#line 862 "structure_reuse.domain.m"
                    {
#line 862 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 862 "structure_reuse.domain.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_71_71, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Vars_74));
#line 862 "structure_reuse.domain.m"
                    }
#line 862 "structure_reuse.domain.m"
                    {
#line 862 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__Result0_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 862 "structure_reuse.domain.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Result0_175, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_71_71));
#line 862 "structure_reuse.domain.m"
                    }
#line 718 "structure_reuse.domain.m"
                    {
#line 718 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2, transform_hlds__ctgc__structure_reuse__domain__LiveData_3, transform_hlds__ctgc__structure_reuse__domain__SharingAs_4, transform_hlds__ctgc__structure_reuse__domain__StaticVars_5, transform_hlds__ctgc__structure_reuse__domain__Conds_19, &transform_hlds__ctgc__structure_reuse__domain__Result1_124);
                    }
#line 724 "structure_reuse.domain.m"
                    if ((transform_hlds__ctgc__structure_reuse__domain__Result1_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = transform_hlds__ctgc__structure_reuse__domain__Result0_175;
#line 724 "structure_reuse.domain.m"
                    else
#line 724 "structure_reuse.domain.m"
                      {
#line 724 "structure_reuse.domain.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Result1_124, (MR_Integer) 0)));

#line 724 "structure_reuse.domain.m"
#line 724 "structure_reuse.domain.m"
                        switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__V_110_110)) {
#line 724 "structure_reuse.domain.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 724 "structure_reuse.domain.m"
                          case (MR_Integer) 0:
#line 724 "structure_reuse.domain.m"
#line 724 "structure_reuse.domain.m"
                            switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__V_110_110)) {
#line 724 "structure_reuse.domain.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 724 "structure_reuse.domain.m"
                              case (MR_Integer) 0:
#line 728 "structure_reuse.domain.m"
                                *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = transform_hlds__ctgc__structure_reuse__domain__Result0_175;
#line 724 "structure_reuse.domain.m"
                                break;
#line 724 "structure_reuse.domain.m"
                              case (MR_Integer) 1:
#line 732 "structure_reuse.domain.m"
                                {
#line 733 "structure_reuse.domain.m"
                                  {
#line 733 "structure_reuse.domain.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
#line 733 "structure_reuse.domain.m"
                                    return;
                                  }
#line 732 "structure_reuse.domain.m"
                                }
#line 724 "structure_reuse.domain.m"
                                break;
#line 724 "structure_reuse.domain.m"
                            }
#line 724 "structure_reuse.domain.m"
                            break;
#line 724 "structure_reuse.domain.m"
                          case (MR_Integer) 1:
#line 721 "structure_reuse.domain.m"
                            {
#line 721 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_81 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0];
#line 721 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars1_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_110_110, (MR_Integer) 0)));
#line 721 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars_78;
#line 721 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__V_79_79;
#line 721 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__V_80_80;

#line 722 "structure_reuse.domain.m"
                              {
#line 722 "structure_reuse.domain.m"
                                transform_hlds__ctgc__structure_reuse__domain__V_79_79 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_81, transform_hlds__ctgc__structure_reuse__domain__Vars_74, transform_hlds__ctgc__structure_reuse__domain__Vars1_77);
                              }
#line 722 "structure_reuse.domain.m"
                              {
#line 722 "structure_reuse.domain.m"
                                transform_hlds__ctgc__structure_reuse__domain__Vars_78 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_81, transform_hlds__ctgc__structure_reuse__domain__V_79_79);
                              }
#line 723 "structure_reuse.domain.m"
                              {
#line 723 "structure_reuse.domain.m"
                                transform_hlds__ctgc__structure_reuse__domain__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 723 "structure_reuse.domain.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_80_80, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Vars_78));
#line 723 "structure_reuse.domain.m"
                              }
#line 723 "structure_reuse.domain.m"
                              {
#line 723 "structure_reuse.domain.m"
                                MR_Word base;
#line 723 "structure_reuse.domain.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 723 "structure_reuse.domain.m"
                                *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = base;
#line 723 "structure_reuse.domain.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_80_80));
#line 723 "structure_reuse.domain.m"
                              }
#line 721 "structure_reuse.domain.m"
                            }
#line 724 "structure_reuse.domain.m"
                            break;
#line 724 "structure_reuse.domain.m"
                          case (MR_Integer) 2:
#line 732 "structure_reuse.domain.m"
                            {
#line 733 "structure_reuse.domain.m"
                              {
#line 733 "structure_reuse.domain.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
#line 733 "structure_reuse.domain.m"
                                return;
                              }
#line 732 "structure_reuse.domain.m"
                            }
#line 724 "structure_reuse.domain.m"
                            break;
#line 724 "structure_reuse.domain.m"
                        }
#line 724 "structure_reuse.domain.m"
                      }
#line 5362 "transform_hlds.ctgc.structure_reuse.domain.c"
                  }
#line 5364 "transform_hlds.ctgc.structure_reuse.domain.c"
              }
#line 708 "structure_reuse.domain.m"
          }
#line 706 "structure_reuse.domain.m"
      }
#line 706 "structure_reuse.domain.m"
      break;
#line 706 "structure_reuse.domain.m"
    }
#line 702 "structure_reuse.domain.m"
}

#line 624 "structure_reuse.domain.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_f_0(
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8,
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9,
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVars_10,
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LuData_11,
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_12,
#line 624 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13)
#line 624 "structure_reuse.domain.m"
{
#line 631 "structure_reuse.domain.m"
  {
#line 631 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 631 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14;

#line 631 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "structure_reuse.domain.m"
      {
#line 632 "structure_reuse.domain.m"
        {
#line 632 "structure_reuse.domain.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.domain.reuse_condition_from_called_proc_to_local_condition\'/6", (MR_String) "explicit condition expected");
        }
#line 631 "structure_reuse.domain.m"
      }
#line 631 "structure_reuse.domain.m"
    else
#line 635 "structure_reuse.domain.m"
      {
#line 635 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 635 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledDeadNodes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13, (MR_Integer) 0)));
#line 635 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledInUseNodes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13, (MR_Integer) 1)));
#line 635 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledSharingAs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13, (MR_Integer) 2)));
#line 635 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__AllDeadNodes_18;
#line 635 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__AllDeadHeadVarNodes_19;
#line 635 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_26_26;

#line 639 "structure_reuse.domain.m"
        {
#line 639 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_26_26 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_32_32, transform_hlds__ctgc__structure_reuse__domain__CalledDeadNodes_15);
        }
#line 638 "structure_reuse.domain.m"
        {
#line 638 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__AllDeadNodes_18 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, transform_hlds__ctgc__structure_reuse__domain__SharingAs_12, transform_hlds__ctgc__structure_reuse__domain__V_26_26);
        }
#line 640 "structure_reuse.domain.m"
        {
#line 640 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__AllDeadHeadVarNodes_19 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_10, transform_hlds__ctgc__structure_reuse__domain__AllDeadNodes_18);
        }
#line 645 "structure_reuse.domain.m"
        if ((transform_hlds__ctgc__structure_reuse__domain__AllDeadHeadVarNodes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 645 "structure_reuse.domain.m"
        else
#line 646 "structure_reuse.domain.m"
          {
#line 646 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__AllInUseNodes_22;
#line 646 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__AllInUseHeadVarNodes_23;
#line 646 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__AllLocalSharing_24;
#line 646 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__AllHeadVarLocalSharing_25;
#line 646 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_27_27;
#line 646 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_28_28;

#line 649 "structure_reuse.domain.m"
            {
#line 649 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__V_27_27 = mercury__list__append_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_32_32, transform_hlds__ctgc__structure_reuse__domain__LuData_11, transform_hlds__ctgc__structure_reuse__domain__CalledInUseNodes_16);
            }
#line 648 "structure_reuse.domain.m"
            {
#line 648 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__AllInUseNodes_22 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, transform_hlds__ctgc__structure_reuse__domain__SharingAs_12, transform_hlds__ctgc__structure_reuse__domain__V_27_27);
            }
#line 650 "structure_reuse.domain.m"
            {
#line 650 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__AllInUseHeadVarNodes_23 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_10, transform_hlds__ctgc__structure_reuse__domain__AllInUseNodes_22);
            }
#line 654 "structure_reuse.domain.m"
            {
#line 654 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__AllLocalSharing_24 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, transform_hlds__ctgc__structure_reuse__domain__CalledSharingAs_17, transform_hlds__ctgc__structure_reuse__domain__SharingAs_12);
            }
#line 656 "structure_reuse.domain.m"
            {
#line 656 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__AllHeadVarLocalSharing_25 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_10, transform_hlds__ctgc__structure_reuse__domain__AllLocalSharing_24);
            }
#line 659 "structure_reuse.domain.m"
            {
#line 659 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__V_28_28 = mercury__set__from_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_32_32, transform_hlds__ctgc__structure_reuse__domain__AllDeadHeadVarNodes_19);
            }
#line 659 "structure_reuse.domain.m"
            {
#line 659 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 659 "structure_reuse.domain.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_28_28));
#line 659 "structure_reuse.domain.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__AllInUseHeadVarNodes_23));
#line 659 "structure_reuse.domain.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__AllHeadVarLocalSharing_25));
#line 659 "structure_reuse.domain.m"
            }
#line 646 "structure_reuse.domain.m"
          }
#line 635 "structure_reuse.domain.m"
      }
#line 631 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14;
#line 631 "structure_reuse.domain.m"
  }
#line 624 "structure_reuse.domain.m"
}

#line 563 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_p_0(
#line 563 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 563 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 563 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NewConds_8,
#line 563 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12,
#line 563 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_13)
#line 563 "structure_reuse.domain.m"
{
#line 568 "structure_reuse.domain.m"
  while (MR_TRUE)
#line 568 "structure_reuse.domain.m"
    {
#line 568 "structure_reuse.domain.m"
      /* tailcall optimized into a loop */
#line 568 "structure_reuse.domain.m"
      {
#line 568 "structure_reuse.domain.m"
        MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 568 "structure_reuse.domain.m"
        if ((transform_hlds__ctgc__structure_reuse__domain__NewConds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_13 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12;
#line 568 "structure_reuse.domain.m"
        else
#line 568 "structure_reuse.domain.m"
          {
#line 568 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NewConds_8, (MR_Integer) 0)));
#line 568 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__RemainingConds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NewConds_8, (MR_Integer) 1)));
#line 568 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14;

#line 555 "structure_reuse.domain.m"
            {
#line 555 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, transform_hlds__ctgc__structure_reuse__domain__Cond_10, transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12);
            }
#line 559 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 559 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12;
#line 559 "structure_reuse.domain.m"
            else
#line 560 "structure_reuse.domain.m"
              {
#line 560 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cond_10));
#line 560 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12));
#line 560 "structure_reuse.domain.m"
              }
#line 570 "structure_reuse.domain.m"
            /* direct tailcall eliminated */
#line 570 "structure_reuse.domain.m"
            {
#line 570 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__NewConds__tmp_copy_8 = transform_hlds__ctgc__structure_reuse__domain__RemainingConds_11;
#line 570 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0__tmp_copy_12 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14;

#line 570 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0__tmp_copy_12;
#line 570 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__NewConds_8 = transform_hlds__ctgc__structure_reuse__domain__NewConds__tmp_copy_8;
#line 570 "structure_reuse.domain.m"
            }
#line 570 "structure_reuse.domain.m"
            continue;
#line 568 "structure_reuse.domain.m"
          }
#line 568 "structure_reuse.domain.m"
      }
#line 568 "structure_reuse.domain.m"
      break;
#line 568 "structure_reuse.domain.m"
    }
#line 563 "structure_reuse.domain.m"
}

#line 419 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_p_0(
#line 419 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 419 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 419 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Conds_7,
#line 419 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_8)
#line 419 "structure_reuse.domain.m"
{
#line 423 "structure_reuse.domain.m"
  {
#line 423 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 423 "structure_reuse.domain.m"
    {
#line 423 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__Cond_8, transform_hlds__ctgc__structure_reuse__domain__Conds_7);
    }
#line 423 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 423 "structure_reuse.domain.m"
  }
#line 419 "structure_reuse.domain.m"
}

#line 409 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(
#line 409 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 409 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 409 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_7,
#line 409 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4)
#line 409 "structure_reuse.domain.m"
{
#line 412 "structure_reuse.domain.m"
  while (MR_TRUE)
#line 412 "structure_reuse.domain.m"
    {
#line 412 "structure_reuse.domain.m"
      /* tailcall optimized into a loop */
#line 412 "structure_reuse.domain.m"
      {
#line 412 "structure_reuse.domain.m"
        MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 412 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond1_8;
#line 412 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__Rest_9;

#line 412 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 412 "structure_reuse.domain.m"
          {
#line 412 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__Cond1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4, (MR_Integer) 0)));
#line 412 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4, (MR_Integer) 1)));
#line 386 "structure_reuse.domain.m"
            if ((transform_hlds__ctgc__structure_reuse__domain__Cond_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 386 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 386 "structure_reuse.domain.m"
            else
#line 388 "structure_reuse.domain.m"
              {
#line 388 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_20;
#line 388 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__Nodes1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_7, (MR_Integer) 0)));
#line 388 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalUse1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_7, (MR_Integer) 1)));
#line 388 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalSharing1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_7, (MR_Integer) 2)));
#line 388 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__Nodes2_17;
#line 388 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalUse2_18;
#line 388 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_19;

#line 389 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__Cond1_8)) == (MR_mktag((MR_Integer) 1)));
#line 389 "structure_reuse.domain.m"
                if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 389 "structure_reuse.domain.m"
                  {
#line 389 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__Nodes2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_8, (MR_Integer) 0)));
#line 389 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__LocalUse2_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_8, (MR_Integer) 1)));
#line 389 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_8, (MR_Integer) 2)));
#line 5711 "transform_hlds.ctgc.structure_reuse.domain.c"
                    transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 401 "structure_reuse.domain.m"
                    {
#line 401 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__set__subset_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_20, transform_hlds__ctgc__structure_reuse__domain__Nodes1_14, transform_hlds__ctgc__structure_reuse__domain__Nodes2_17);
                    }
#line 388 "structure_reuse.domain.m"
                    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 388 "structure_reuse.domain.m"
                      {
#line 403 "structure_reuse.domain.m"
                        {
#line 403 "structure_reuse.domain.m"
                          transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__LocalUse1_15, transform_hlds__ctgc__structure_reuse__domain__LocalUse2_18);
                        }
#line 388 "structure_reuse.domain.m"
                        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 405 "structure_reuse.domain.m"
                          {
#line 405 "structure_reuse.domain.m"
                            transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__LocalSharing1_16, transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_19);
                          }
#line 388 "structure_reuse.domain.m"
                      }
#line 389 "structure_reuse.domain.m"
                  }
#line 388 "structure_reuse.domain.m"
              }
#line 415 "structure_reuse.domain.m"
            if (!(transform_hlds__ctgc__structure_reuse__domain__succeeded))
#line 416 "structure_reuse.domain.m"
              {
#line 416 "structure_reuse.domain.m"
                /* direct tailcall eliminated */
#line 416 "structure_reuse.domain.m"
                {
#line 416 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__4__tmp_copy_4 = transform_hlds__ctgc__structure_reuse__domain__Rest_9;

#line 416 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__4__tmp_copy_4;
#line 416 "structure_reuse.domain.m"
                }
#line 416 "structure_reuse.domain.m"
                continue;
#line 416 "structure_reuse.domain.m"
              }
#line 412 "structure_reuse.domain.m"
          }
#line 412 "structure_reuse.domain.m"
        return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 412 "structure_reuse.domain.m"
      }
#line 412 "structure_reuse.domain.m"
      break;
#line 412 "structure_reuse.domain.m"
    }
#line 409 "structure_reuse.domain.m"
}

#line 987 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0_1(
#line 987 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 987 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 987 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 987 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 987 "structure_reuse.domain.m"
{
#line 987 "structure_reuse.domain.m"
  {
#line 987 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 987 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_11;

#line 987 "structure_reuse.domain.m"
    {
#line 987 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_11);
    }
#line 987 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_11));
#line 987 "structure_reuse.domain.m"
  }
#line 987 "structure_reuse.domain.m"
}

#line 267 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0(
#line 267 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_3)
#line 267 "structure_reuse.domain.m"
{
#line 985 "structure_reuse.domain.m"
  {
#line 985 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 985 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseTable_4;
#line 985 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_15;
#line 985 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__PredIds_5;
#line 985 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6;
#line 985 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7;
#line 985 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_13_13;
#line 985 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14;
#line 987 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__conv1_ReuseTable_4;

#line 986 "structure_reuse.domain.m"
    {
#line 986 "structure_reuse.domain.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_3, &transform_hlds__ctgc__structure_reuse__domain__PredIds_5);
    }
#line 987 "structure_reuse.domain.m"
    {
#line 987 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 987 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_6_6, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[3]));
#line 987 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_6_6, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0_1));
#line 987 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 987 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_6_6, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_3));
#line 987 "structure_reuse.domain.m"
    }
#line 5851 "transform_hlds.ctgc.structure_reuse.domain.c"
    transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 928 "structure_reuse.domain.m"
    {
#line 928 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_13_13 = mercury__map__init_0_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_15, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0);
    }
#line 928 "structure_reuse.domain.m"
    {
#line 928 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_14_14 = mercury__bimap__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_15);
    }
#line 928 "structure_reuse.domain.m"
    {
#line 928 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 928 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_7_7, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_13_13));
#line 928 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_7_7, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_14_14));
#line 928 "structure_reuse.domain.m"
    }
#line 987 "structure_reuse.domain.m"
    {
#line 987 "structure_reuse.domain.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__domain__V_6_6, transform_hlds__ctgc__structure_reuse__domain__PredIds_5, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_7_7)), &transform_hlds__ctgc__structure_reuse__domain__conv1_ReuseTable_4);
    }
#line 987 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__ReuseTable_4 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv1_ReuseTable_4);
#line 985 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__ReuseTable_4;
#line 985 "structure_reuse.domain.m"
  }
#line 267 "structure_reuse.domain.m"
}

#line 972 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0_1(
#line 972 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 972 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 972 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 972 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3,
#line 972 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_4)
#line 972 "structure_reuse.domain.m"
{
#line 972 "structure_reuse.domain.m"
  {
#line 972 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;

#line 972 "structure_reuse.domain.m"
    {
#line 972 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__dump_entries_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 972 "structure_reuse.domain.m"
  }
#line 972 "structure_reuse.domain.m"
}

#line 260 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0(
#line 260 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__DoDump_6,
#line 260 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_7,
#line 260 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Table_8)
#line 260 "structure_reuse.domain.m"
{
#line 957 "structure_reuse.domain.m"
  {
#line 957 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 957 "structure_reuse.domain.m"
#line 957 "structure_reuse.domain.m"
    switch (transform_hlds__ctgc__structure_reuse__domain__DoDump_6) {
#line 957 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 957 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 957 "structure_reuse.domain.m"
        {
#line 957 "structure_reuse.domain.m"
        }
#line 957 "structure_reuse.domain.m"
        break;
#line 957 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 966 "structure_reuse.domain.m"
        {
#line 966 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseInfoMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_8, (MR_Integer) 0)));
#line 967 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_8, (MR_Integer) 1)));

#line 968 "structure_reuse.domain.m"
          {
#line 968 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__domain__ReuseInfoMap_18);
          }
#line 970 "structure_reuse.domain.m"
          if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 969 "structure_reuse.domain.m"
            {
#line 969 "structure_reuse.domain.m"
              {
#line 969 "structure_reuse.domain.m"
                mercury__io__write_string_3_p_0((MR_String) "% ReuseTable: Empty\n");
              }
#line 969 "structure_reuse.domain.m"
            }
#line 970 "structure_reuse.domain.m"
          else
#line 971 "structure_reuse.domain.m"
            {
#line 971 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__V_23_23;
#line 972 "structure_reuse.domain.m"
              MR_Box transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_IO_11;

#line 971 "structure_reuse.domain.m"
              {
#line 971 "structure_reuse.domain.m"
                mercury__io__write_string_3_p_0((MR_String) "% ReuseTable: PPId --> Reuse\n");
              }
#line 972 "structure_reuse.domain.m"
              {
#line 972 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 972 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_23_23, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[2]));
#line 972 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_23_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0_1));
#line 972 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 972 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_23_23, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_7));
#line 972 "structure_reuse.domain.m"
              }
#line 972 "structure_reuse.domain.m"
              {
#line 972 "structure_reuse.domain.m"
                mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__ctgc__structure_reuse__domain__V_23_23, transform_hlds__ctgc__structure_reuse__domain__ReuseInfoMap_18, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_IO_11);
              }
#line 971 "structure_reuse.domain.m"
            }
#line 966 "structure_reuse.domain.m"
        }
#line 957 "structure_reuse.domain.m"
        break;
#line 957 "structure_reuse.domain.m"
    }
#line 957 "structure_reuse.domain.m"
  }
#line 260 "structure_reuse.domain.m"
}

#line 256 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_insert_reuse_version_proc_5_p_0(
#line 256 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_6,
#line 256 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NoClobbers_7,
#line 256 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NewPPId_8,
#line 256 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_12,
#line 256 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_13)
#line 256 "structure_reuse.domain.m"
{
#line 950 "structure_reuse.domain.m"
  {
#line 950 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 950 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_12, (MR_Integer) 1)));
#line 950 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__T_11;
#line 950 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14;
#line 951 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_12, (MR_Integer) 0)));
#line 953 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_17_17;
#line 953 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_18_18;

#line 952 "structure_reuse.domain.m"
    {
#line 952 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 952 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PPId_6));
#line 952 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__NoClobbers_7));
#line 952 "structure_reuse.domain.m"
    }
#line 952 "structure_reuse.domain.m"
    {
#line 952 "structure_reuse.domain.m"
      mercury__bimap__det_insert_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_14_14)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__NewPPId_8)), transform_hlds__ctgc__structure_reuse__domain__T0_10, &transform_hlds__ctgc__structure_reuse__domain__T_11);
    }
#line 953 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_12, (MR_Integer) 0)));
#line 953 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_12, (MR_Integer) 1)));
#line 953 "structure_reuse.domain.m"
    {
#line 953 "structure_reuse.domain.m"
      MR_Word base;
#line 953 "structure_reuse.domain.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 953 "structure_reuse.domain.m"
      *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_13 = base;
#line 953 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_17_17));
#line 953 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__T_11));
#line 953 "structure_reuse.domain.m"
    }
#line 950 "structure_reuse.domain.m"
  }
#line 256 "structure_reuse.domain.m"
}

#line 253 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(
#line 253 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_5,
#line 253 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status_6,
#line 253 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_10,
#line 253 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_11)
#line 253 "structure_reuse.domain.m"
{
#line 945 "structure_reuse.domain.m"
  {
#line 945 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 945 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__T0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_10, (MR_Integer) 0)));
#line 945 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__T_9;
#line 946 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_10, (MR_Integer) 1)));
#line 948 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_15_15;
#line 948 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14;

#line 947 "structure_reuse.domain.m"
    {
#line 947 "structure_reuse.domain.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PPId_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status_6)), transform_hlds__ctgc__structure_reuse__domain__T0_8, &transform_hlds__ctgc__structure_reuse__domain__T_9);
    }
#line 948 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_10, (MR_Integer) 0)));
#line 948 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_10, (MR_Integer) 1)));
#line 948 "structure_reuse.domain.m"
    {
#line 948 "structure_reuse.domain.m"
      MR_Word base;
#line 948 "structure_reuse.domain.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 948 "structure_reuse.domain.m"
      *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_11 = base;
#line 948 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__T_9));
#line 948 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_15_15));
#line 948 "structure_reuse.domain.m"
    }
#line 945 "structure_reuse.domain.m"
  }
#line 253 "structure_reuse.domain.m"
}

#line 250 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_reverse_search_reuse_version_proc_4_p_0(
#line 250 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Table_5,
#line 250 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NewPPId_6,
#line 250 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__OrigPPId_7,
#line 250 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__NoClobbers_8)
#line 250 "structure_reuse.domain.m"
{
#line 941 "structure_reuse.domain.m"
  {
#line 941 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 941 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Key_9;
#line 939 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_5, (MR_Integer) 1)));
#line 939 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_5, (MR_Integer) 0)));
#line 939 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__conv0_Key_9;

#line 939 "structure_reuse.domain.m"
    {
#line 939 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__domain__V_10_10, &transform_hlds__ctgc__structure_reuse__domain__conv0_Key_9, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__NewPPId_6)));
    }
#line 939 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 939 "structure_reuse.domain.m"
      {
#line 939 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__Key_9 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv0_Key_9);
#line 939 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 939 "structure_reuse.domain.m"
      }
#line 941 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 940 "structure_reuse.domain.m"
      {
#line 940 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__OrigPPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Key_9, (MR_Integer) 0)));
#line 940 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__NoClobbers_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Key_9, (MR_Integer) 1)));
#line 940 "structure_reuse.domain.m"
      }
#line 941 "structure_reuse.domain.m"
    else
#line 942 "structure_reuse.domain.m"
      {
#line 942 "structure_reuse.domain.m"
        {
#line 942 "structure_reuse.domain.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_table_reverse_search_reuse_version_proc\'/4", (MR_String) "reverse search failed");
#line 942 "structure_reuse.domain.m"
          return;
        }
#line 942 "structure_reuse.domain.m"
      }
#line 941 "structure_reuse.domain.m"
  }
#line 250 "structure_reuse.domain.m"
}

#line 247 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(
#line 247 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Table_5,
#line 247 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_6,
#line 247 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NoClobbers_7,
#line 247 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__NewPPId_8)
#line 247 "structure_reuse.domain.m"
{
#line 933 "structure_reuse.domain.m"
  {
#line 933 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 933 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_5, (MR_Integer) 1)));
#line 933 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_10_10;
#line 934 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_5, (MR_Integer) 0)));
#line 934 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__conv0_NewPPId_8;

#line 934 "structure_reuse.domain.m"
    {
#line 934 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 934 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_10_10, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PPId_6));
#line 934 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_10_10, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__NoClobbers_7));
#line 934 "structure_reuse.domain.m"
    }
#line 934 "structure_reuse.domain.m"
    {
#line 934 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__bimap__search_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__domain__V_9_9, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_10_10)), &transform_hlds__ctgc__structure_reuse__domain__conv0_NewPPId_8);
    }
#line 934 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 934 "structure_reuse.domain.m"
      {
#line 934 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__NewPPId_8 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv0_NewPPId_8);
#line 934 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 934 "structure_reuse.domain.m"
      }
#line 933 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 933 "structure_reuse.domain.m"
  }
#line 247 "structure_reuse.domain.m"
}

#line 244 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(
#line 244 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Table_4,
#line 244 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_5,
#line 244 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status_6)
#line 244 "structure_reuse.domain.m"
{
#line 930 "structure_reuse.domain.m"
  {
#line 930 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 930 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_4, (MR_Integer) 0)));
#line 931 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_4, (MR_Integer) 1)));
#line 931 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseAs_Status_6;

#line 931 "structure_reuse.domain.m"
    {
#line 931 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__domain__V_7_7, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PPId_5)), &transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseAs_Status_6);
    }
#line 931 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 931 "structure_reuse.domain.m"
      {
#line 931 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseAs_Status_6);
#line 931 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 931 "structure_reuse.domain.m"
      }
#line 930 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 930 "structure_reuse.domain.m"
  }
#line 244 "structure_reuse.domain.m"
}

#line 242 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_init_0_f_0(void)
#line 242 "structure_reuse.domain.m"
{
#line 928 "structure_reuse.domain.m"
  {
#line 928 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 928 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 928 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_4 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 928 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_2_2;
#line 928 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_3_3;

#line 928 "structure_reuse.domain.m"
    {
#line 928 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_2_2 = mercury__map__init_0_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_4, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0);
    }
#line 928 "structure_reuse.domain.m"
    {
#line 928 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_3_3 = mercury__bimap__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_4);
    }
#line 928 "structure_reuse.domain.m"
    {
#line 928 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 928 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_2_2));
#line 928 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_3_3));
#line 928 "structure_reuse.domain.m"
    }
#line 928 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 928 "structure_reuse.domain.m"
  }
#line 242 "structure_reuse.domain.m"
}

#line 913 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0_1(
#line 913 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 913 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 913 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 913 "structure_reuse.domain.m"
{
#line 913 "structure_reuse.domain.m"
  {
#line 913 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 913 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 913 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_StructureReuseCondition_4;

#line 913 "structure_reuse.domain.m"
    {
#line 913 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__domain__conv0_StructureReuseCondition_4);
    }
#line 913 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 913 "structure_reuse.domain.m"
      {
#line 913 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_StructureReuseCondition_4));
#line 913 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 913 "structure_reuse.domain.m"
      }
#line 913 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 913 "structure_reuse.domain.m"
  }
#line 913 "structure_reuse.domain.m"
}

#line 207 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0(
#line 207 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_3)
#line 207 "structure_reuse.domain.m"
{
#line 898 "structure_reuse.domain.m"
  {
#line 898 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 898 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4;

#line 898 "structure_reuse.domain.m"
#line 898 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__ReuseAs_3)) {
#line 898 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 898 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 898 "structure_reuse.domain.m"
#line 898 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__ReuseAs_3)) {
#line 898 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 898 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 899 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 898 "structure_reuse.domain.m"
            break;
#line 898 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 902 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 898 "structure_reuse.domain.m"
            break;
#line 898 "structure_reuse.domain.m"
        }
#line 898 "structure_reuse.domain.m"
        break;
#line 898 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 904 "structure_reuse.domain.m"
        {
#line 904 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseConditions_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_3, (MR_Integer) 0)));
#line 904 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6;

#line 913 "structure_reuse.domain.m"
          {
#line 913 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_6_6 = mercury__list__filter_map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[7], transform_hlds__ctgc__structure_reuse__domain__ReuseConditions_5);
          }
#line 905 "structure_reuse.domain.m"
          {
#line 905 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 905 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6));
#line 905 "structure_reuse.domain.m"
          }
#line 904 "structure_reuse.domain.m"
        }
#line 898 "structure_reuse.domain.m"
        break;
#line 898 "structure_reuse.domain.m"
    }
#line 898 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4;
#line 898 "structure_reuse.domain.m"
  }
#line 207 "structure_reuse.domain.m"
}

#line 885 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0_1(
#line 885 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 885 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 885 "structure_reuse.domain.m"
{
#line 885 "structure_reuse.domain.m"
  {
#line 885 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 885 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 885 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseCondition_4;

#line 885 "structure_reuse.domain.m"
    {
#line 885 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseCondition_4 = transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 885 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseCondition_4));
#line 885 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 885 "structure_reuse.domain.m"
  }
#line 885 "structure_reuse.domain.m"
}

#line 206 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(
#line 206 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_3)
#line 206 "structure_reuse.domain.m"
{
#line 870 "structure_reuse.domain.m"
  {
#line 870 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 870 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4;

#line 870 "structure_reuse.domain.m"
#line 870 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_3)) {
#line 870 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 870 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 870 "structure_reuse.domain.m"
#line 870 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_3)) {
#line 870 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 870 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 871 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "structure_reuse.domain.m"
            break;
#line 870 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 874 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 870 "structure_reuse.domain.m"
            break;
#line 870 "structure_reuse.domain.m"
        }
#line 870 "structure_reuse.domain.m"
        break;
#line 870 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 876 "structure_reuse.domain.m"
        {
#line 876 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__PublicReuseConditions_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_3, (MR_Integer) 0)));
#line 876 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6;

#line 885 "structure_reuse.domain.m"
          {
#line 885 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_6_6 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[6], transform_hlds__ctgc__structure_reuse__domain__PublicReuseConditions_5);
          }
#line 877 "structure_reuse.domain.m"
          {
#line 877 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6));
#line 877 "structure_reuse.domain.m"
          }
#line 876 "structure_reuse.domain.m"
        }
#line 870 "structure_reuse.domain.m"
        break;
#line 870 "structure_reuse.domain.m"
    }
#line 870 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4;
#line 870 "structure_reuse.domain.m"
  }
#line 206 "structure_reuse.domain.m"
}

#line 757 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_4(
#line 757 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 757 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 757 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 757 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 757 "structure_reuse.domain.m"
{
#line 757 "structure_reuse.domain.m"
  {
#line 757 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 757 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv2_STATE_VARIABLE_Vars_8;

#line 757 "structure_reuse.domain.m"
    {
#line 757 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__collect_aliased_vars_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__domain__conv2_STATE_VARIABLE_Vars_8);
    }
#line 757 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv2_STATE_VARIABLE_Vars_8));
#line 757 "structure_reuse.domain.m"
  }
#line 757 "structure_reuse.domain.m"
}

#line 756 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_2(
#line 756 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg)
#line 756 "structure_reuse.domain.m"
{
#line 756 "structure_reuse.domain.m"
  {
#line 756 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s * transform_hlds__ctgc__structure_reuse__domain__env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s *) transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg;

#line 756 "structure_reuse.domain.m"
    *((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__conv1_AliasedNodes_12));
#line 756 "structure_reuse.domain.m"
    {
#line 756 "structure_reuse.domain.m"
      ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont)((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont_env_ptr);
    }
#line 756 "structure_reuse.domain.m"
  }
#line 756 "structure_reuse.domain.m"
}

#line 756 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3(
#line 756 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 756 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 756 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 756 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr)
#line 756 "structure_reuse.domain.m"
{
#line 756 "structure_reuse.domain.m"
  {
#line 756 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s transform_hlds__ctgc__structure_reuse__domain__env;

#line 756 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__wrapper_arg_1 = transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1;
#line 756 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont = transform_hlds__ctgc__structure_reuse__domain__cont;
#line 756 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont_env_ptr = transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr;
#line 756 "structure_reuse.domain.m"
    {
#line 756 "structure_reuse.domain.m"
      MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;

#line 756 "structure_reuse.domain.m"
      {
#line 756 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 7))), &(transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__conv1_AliasedNodes_12, transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_2, &transform_hlds__ctgc__structure_reuse__domain__env);
      }
#line 756 "structure_reuse.domain.m"
    }
#line 756 "structure_reuse.domain.m"
  }
#line 756 "structure_reuse.domain.m"
}

#line 751 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_1(
#line 751 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 751 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 751 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 751 "structure_reuse.domain.m"
{
#line 751 "structure_reuse.domain.m"
  {
#line 751 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 751 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 751 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_Nodes_3;

#line 751 "structure_reuse.domain.m"
    {
#line 751 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_reusable_nodes_2_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__domain__conv0_Nodes_3);
    }
#line 751 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 751 "structure_reuse.domain.m"
      {
#line 751 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_Nodes_3));
#line 751 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 751 "structure_reuse.domain.m"
      }
#line 751 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 751 "structure_reuse.domain.m"
  }
#line 751 "structure_reuse.domain.m"
}

#line 180 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0(
#line 180 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8,
#line 180 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9,
#line 180 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LiveData_10,
#line 180 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_11,
#line 180 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__StaticVars_12,
#line 180 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_13,
#line 180 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__Result_14)
#line 180 "structure_reuse.domain.m"
{
#line 667 "structure_reuse.domain.m"
  {
#line 667 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 667 "structure_reuse.domain.m"
#line 667 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__ReuseAs_13)) {
#line 667 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 667 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 667 "structure_reuse.domain.m"
#line 667 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__ReuseAs_13)) {
#line 667 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 667 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 667 "structure_reuse.domain.m"
            {
#line 668 "structure_reuse.domain.m"
              *transform_hlds__ctgc__structure_reuse__domain__Result_14 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ctgc__structure_reuse__domain_scalar_common_9[0]);
#line 667 "structure_reuse.domain.m"
            }
#line 667 "structure_reuse.domain.m"
            break;
#line 667 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 671 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "structure_reuse.domain.m"
            break;
#line 667 "structure_reuse.domain.m"
        }
#line 667 "structure_reuse.domain.m"
        break;
#line 667 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 673 "structure_reuse.domain.m"
        {
#line 673 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__Conditions_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_13, (MR_Integer) 0)));
#line 673 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__Result0_16;

#line 674 "structure_reuse.domain.m"
          {
#line 674 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, transform_hlds__ctgc__structure_reuse__domain__LiveData_10, transform_hlds__ctgc__structure_reuse__domain__SharingAs_11, transform_hlds__ctgc__structure_reuse__domain__StaticVars_12, transform_hlds__ctgc__structure_reuse__domain__Conditions_15, &transform_hlds__ctgc__structure_reuse__domain__Result0_16);
          }
#line 696 "structure_reuse.domain.m"
          if ((transform_hlds__ctgc__structure_reuse__domain__Result0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "structure_reuse.domain.m"
            {
#line 685 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_28_45;
#line 685 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__AliasedVars_17;
#line 685 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__ListNodes_28;
#line 685 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__AllNodes0_29;
#line 685 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__AllNodes_30;

#line 751 "structure_reuse.domain.m"
              {
#line 751 "structure_reuse.domain.m"
                mercury__list__filter_map_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[2], (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[4], transform_hlds__ctgc__structure_reuse__domain__Conditions_15, &transform_hlds__ctgc__structure_reuse__domain__ListNodes_28);
              }
#line 6816 "transform_hlds.ctgc.structure_reuse.domain.c"
              transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_28_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 752 "structure_reuse.domain.m"
              {
#line 752 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__AllNodes0_29 = mercury__set__union_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_28_45, transform_hlds__ctgc__structure_reuse__domain__ListNodes_28);
              }
#line 753 "structure_reuse.domain.m"
              {
#line 753 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__AllNodes_30 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_28_45, transform_hlds__ctgc__structure_reuse__domain__AllNodes0_29);
              }
#line 760 "structure_reuse.domain.m"
              if ((transform_hlds__ctgc__structure_reuse__domain__AllNodes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "structure_reuse.domain.m"
                {
#line 762 "structure_reuse.domain.m"
                  {
#line 762 "structure_reuse.domain.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.aliases_between_reuse_nodes\'/5", (MR_String) "no nodes");
#line 762 "structure_reuse.domain.m"
                    return;
                  }
#line 761 "structure_reuse.domain.m"
                }
#line 760 "structure_reuse.domain.m"
              else
#line 755 "structure_reuse.domain.m"
                {
#line 755 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_33_50;
#line 755 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__Node_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__AllNodes_30, (MR_Integer) 0)));
#line 755 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__Rest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__AllNodes_30, (MR_Integer) 1)));
#line 755 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__AliasedVarsSet_33;
#line 755 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_38_38;
#line 755 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_40_40;
#line 756 "structure_reuse.domain.m"
                  MR_Box transform_hlds__ctgc__structure_reuse__domain__conv3_AliasedVarsSet_33;

#line 756 "structure_reuse.domain.m"
                  {
#line 756 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 756 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_7[0]));
#line 756 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3));
#line 756 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 756 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8));
#line 756 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9));
#line 756 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__SharingAs_11));
#line 756 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Node_31));
#line 756 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Rest_32));
#line 756 "structure_reuse.domain.m"
                  }
#line 6882 "transform_hlds.ctgc.structure_reuse.domain.c"
                  transform_hlds__ctgc__structure_reuse__domain__TypeInfo_33_50 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0];
#line 757 "structure_reuse.domain.m"
                  {
#line 757 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__V_40_40 = mercury__set__init_0_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_33_50);
                  }
#line 756 "structure_reuse.domain.m"
                  {
#line 756 "structure_reuse.domain.m"
                    mercury__solutions__aggregate_4_p_3((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[3], transform_hlds__ctgc__structure_reuse__domain__V_38_38, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[5], ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_40_40)), &transform_hlds__ctgc__structure_reuse__domain__conv3_AliasedVarsSet_33);
                  }
#line 756 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__AliasedVarsSet_33 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv3_AliasedVarsSet_33);
#line 759 "structure_reuse.domain.m"
                  {
#line 759 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__AliasedVars_17 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_33_50, transform_hlds__ctgc__structure_reuse__domain__AliasedVarsSet_33);
                  }
#line 755 "structure_reuse.domain.m"
                }
#line 691 "structure_reuse.domain.m"
              if ((transform_hlds__ctgc__structure_reuse__domain__AliasedVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 690 "structure_reuse.domain.m"
                *transform_hlds__ctgc__structure_reuse__domain__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "structure_reuse.domain.m"
              else
#line 692 "structure_reuse.domain.m"
                {
#line 692 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_21_21;

#line 693 "structure_reuse.domain.m"
                  {
#line 693 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 693 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__domain__V_21_21, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__AliasedVars_17));
#line 693 "structure_reuse.domain.m"
                  }
#line 693 "structure_reuse.domain.m"
                  {
#line 693 "structure_reuse.domain.m"
                    MR_Word base;
#line 693 "structure_reuse.domain.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 693 "structure_reuse.domain.m"
                    *transform_hlds__ctgc__structure_reuse__domain__Result_14 = base;
#line 693 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_21_21));
#line 693 "structure_reuse.domain.m"
                  }
#line 692 "structure_reuse.domain.m"
                }
#line 685 "structure_reuse.domain.m"
            }
#line 696 "structure_reuse.domain.m"
          else
#line 698 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__Result_14 = transform_hlds__ctgc__structure_reuse__domain__Result0_16;
#line 673 "structure_reuse.domain.m"
        }
#line 667 "structure_reuse.domain.m"
        break;
#line 667 "structure_reuse.domain.m"
    }
#line 667 "structure_reuse.domain.m"
  }
#line 180 "structure_reuse.domain.m"
}

#line 620 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_2(
#line 620 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 620 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 620 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 620 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 620 "structure_reuse.domain.m"
{
#line 620 "structure_reuse.domain.m"
  {
#line 620 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 620 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseAs_16;

#line 620 "structure_reuse.domain.m"
    {
#line 620 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseAs_16);
    }
#line 620 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseAs_16));
#line 620 "structure_reuse.domain.m"
  }
#line 620 "structure_reuse.domain.m"
}

#line 617 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_1(
#line 617 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 617 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 617 "structure_reuse.domain.m"
{
#line 617 "structure_reuse.domain.m"
  {
#line 617 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 617 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 617 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_LocalCondition_14;

#line 617 "structure_reuse.domain.m"
    {
#line 617 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__conv0_LocalCondition_14 = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 617 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_LocalCondition_14));
#line 617 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 617 "structure_reuse.domain.m"
  }
#line 617 "structure_reuse.domain.m"
}

#line 171 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0(
#line 171 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8,
#line 171 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9,
#line 171 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVars_10,
#line 171 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LuData_11,
#line 171 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_12,
#line 171 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledReuseAs_13)
#line 171 "structure_reuse.domain.m"
{
#line 609 "structure_reuse.domain.m"
  {
#line 609 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 609 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalReuseAs_14;

#line 609 "structure_reuse.domain.m"
#line 609 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__CalledReuseAs_13)) {
#line 609 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 609 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 609 "structure_reuse.domain.m"
#line 609 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__CalledReuseAs_13)) {
#line 609 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 609 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 609 "structure_reuse.domain.m"
            {
#line 610 "structure_reuse.domain.m"
              {
#line 610 "structure_reuse.domain.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_from_called_procedure_to_local_reuse_as\'/6", (MR_String) "reuse_as does not specify any reuses");
              }
#line 609 "structure_reuse.domain.m"
            }
#line 609 "structure_reuse.domain.m"
            break;
#line 609 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 612 "structure_reuse.domain.m"
            {
#line 613 "structure_reuse.domain.m"
              {
#line 613 "structure_reuse.domain.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_from_called_procedure_to_local_reuse_as\'/6", (MR_String) "reuse_as is unconditional");
              }
#line 612 "structure_reuse.domain.m"
            }
#line 609 "structure_reuse.domain.m"
            break;
#line 609 "structure_reuse.domain.m"
        }
#line 609 "structure_reuse.domain.m"
        break;
#line 609 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 615 "structure_reuse.domain.m"
        {
#line 615 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_26_26 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
#line 615 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ConditionsCaller_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__CalledReuseAs_13, (MR_Integer) 0)));
#line 615 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ConditionsCallee_16;
#line 615 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_17_17;
#line 615 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_18_18;
#line 620 "structure_reuse.domain.m"
          MR_Box transform_hlds__ctgc__structure_reuse__domain__conv2_LocalReuseAs_14;

#line 617 "structure_reuse.domain.m"
          {
#line 617 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_6[0]));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_1));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__HeadVars_10));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__LuData_11));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__SharingAs_12));
#line 617 "structure_reuse.domain.m"
          }
#line 617 "structure_reuse.domain.m"
          {
#line 617 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ConditionsCallee_16 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_26_26, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_26_26, transform_hlds__ctgc__structure_reuse__domain__V_17_17, transform_hlds__ctgc__structure_reuse__domain__ConditionsCaller_15);
          }
#line 620 "structure_reuse.domain.m"
          {
#line 620 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 620 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[1]));
#line 620 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_2));
#line 620 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 620 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8));
#line 620 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9));
#line 620 "structure_reuse.domain.m"
          }
#line 620 "structure_reuse.domain.m"
          {
#line 620 "structure_reuse.domain.m"
            mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_26_26, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0, transform_hlds__ctgc__structure_reuse__domain__V_18_18, transform_hlds__ctgc__structure_reuse__domain__ConditionsCallee_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__ctgc__structure_reuse__domain__conv2_LocalReuseAs_14);
          }
#line 620 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__LocalReuseAs_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv2_LocalReuseAs_14);
#line 615 "structure_reuse.domain.m"
        }
#line 609 "structure_reuse.domain.m"
        break;
#line 609 "structure_reuse.domain.m"
    }
#line 609 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__LocalReuseAs_14;
#line 609 "structure_reuse.domain.m"
  }
#line 171 "structure_reuse.domain.m"
}

#line 155 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_f_0(
#line 155 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 155 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 155 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Reuse1_8,
#line 155 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Reuse2_9)
#line 155 "structure_reuse.domain.m"
{
#line 604 "structure_reuse.domain.m"
  {
#line 604 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 604 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Reuse_10;

#line 604 "structure_reuse.domain.m"
    {
#line 604 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, transform_hlds__ctgc__structure_reuse__domain__Reuse1_8, transform_hlds__ctgc__structure_reuse__domain__Reuse2_9, &transform_hlds__ctgc__structure_reuse__domain__Reuse_10);
    }
#line 604 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__Reuse_10;
#line 604 "structure_reuse.domain.m"
  }
#line 155 "structure_reuse.domain.m"
}

#line 153 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(
#line 153 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 153 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 153 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8,
#line 153 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13,
#line 153 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14)
#line 153 "structure_reuse.domain.m"
{
#line 578 "structure_reuse.domain.m"
  {
#line 578 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 578 "structure_reuse.domain.m"
#line 578 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8)) {
#line 578 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 578 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 578 "structure_reuse.domain.m"
#line 578 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8)) {
#line 578 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 578 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 578 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13;
#line 578 "structure_reuse.domain.m"
            break;
#line 578 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 583 "structure_reuse.domain.m"
            {
#line 581 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "structure_reuse.domain.m"
              if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 582 "structure_reuse.domain.m"
                *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 583 "structure_reuse.domain.m"
              else
#line 583 "structure_reuse.domain.m"
                *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13;
#line 583 "structure_reuse.domain.m"
            }
#line 578 "structure_reuse.domain.m"
            break;
#line 578 "structure_reuse.domain.m"
        }
#line 578 "structure_reuse.domain.m"
        break;
#line 578 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 587 "structure_reuse.domain.m"
        {
#line 587 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__NewConditions_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8, (MR_Integer) 0)));

#line 591 "structure_reuse.domain.m"
#line 591 "structure_reuse.domain.m"
          switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13)) {
#line 591 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 591 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 591 "structure_reuse.domain.m"
#line 591 "structure_reuse.domain.m"
              switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13)) {
#line 591 "structure_reuse.domain.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 591 "structure_reuse.domain.m"
                case (MR_Integer) 0:
#line 590 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8;
#line 591 "structure_reuse.domain.m"
                  break;
#line 591 "structure_reuse.domain.m"
                case (MR_Integer) 1:
#line 593 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8;
#line 591 "structure_reuse.domain.m"
                  break;
#line 591 "structure_reuse.domain.m"
              }
#line 591 "structure_reuse.domain.m"
              break;
#line 591 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 595 "structure_reuse.domain.m"
              {
#line 595 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__Conditions_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13, (MR_Integer) 0)));
#line 595 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__AllConditions_12;

#line 596 "structure_reuse.domain.m"
                {
#line 596 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, transform_hlds__ctgc__structure_reuse__domain__NewConditions_10, transform_hlds__ctgc__structure_reuse__domain__Conditions_11, &transform_hlds__ctgc__structure_reuse__domain__AllConditions_12);
                }
#line 598 "structure_reuse.domain.m"
                {
#line 598 "structure_reuse.domain.m"
                  MR_Word base;
#line 598 "structure_reuse.domain.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 598 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = base;
#line 598 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__AllConditions_12));
#line 598 "structure_reuse.domain.m"
                }
#line 595 "structure_reuse.domain.m"
              }
#line 591 "structure_reuse.domain.m"
              break;
#line 591 "structure_reuse.domain.m"
          }
#line 587 "structure_reuse.domain.m"
        }
#line 578 "structure_reuse.domain.m"
        break;
#line 578 "structure_reuse.domain.m"
    }
#line 578 "structure_reuse.domain.m"
  }
#line 153 "structure_reuse.domain.m"
}

#line 148 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(
#line 148 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_5,
#line 148 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_6)
#line 148 "structure_reuse.domain.m"
{
#line 542 "structure_reuse.domain.m"
  {
#line 542 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 542 "structure_reuse.domain.m"
#line 542 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_5)) {
#line 542 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 542 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 542 "structure_reuse.domain.m"
#line 542 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_5)) {
#line 542 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 542 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 543 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 542 "structure_reuse.domain.m"
            break;
#line 542 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 545 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_6 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_5;
#line 542 "structure_reuse.domain.m"
            break;
#line 542 "structure_reuse.domain.m"
        }
#line 542 "structure_reuse.domain.m"
        break;
#line 542 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 547 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_6 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_5;
#line 542 "structure_reuse.domain.m"
        break;
#line 542 "structure_reuse.domain.m"
    }
#line 542 "structure_reuse.domain.m"
  }
#line 148 "structure_reuse.domain.m"
}

#line 142 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_p_0(
#line 142 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 142 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 142 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Condition_8,
#line 142 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15,
#line 142 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16)
#line 142 "structure_reuse.domain.m"
{
#line 518 "structure_reuse.domain.m"
  {
#line 518 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 518 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__Condition_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 521 "structure_reuse.domain.m"
      {
#line 519 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 521 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 520 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 521 "structure_reuse.domain.m"
        else
#line 521 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15;
#line 521 "structure_reuse.domain.m"
      }
#line 518 "structure_reuse.domain.m"
    else
#line 529 "structure_reuse.domain.m"
#line 529 "structure_reuse.domain.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15)) {
#line 529 "structure_reuse.domain.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 529 "structure_reuse.domain.m"
        case (MR_Integer) 0:
#line 529 "structure_reuse.domain.m"
#line 529 "structure_reuse.domain.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15)) {
#line 529 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 529 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 527 "structure_reuse.domain.m"
              {
#line 527 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__V_22_22;

#line 528 "structure_reuse.domain.m"
                {
#line 528 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_22_22, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Condition_8));
#line 528 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "structure_reuse.domain.m"
                }
#line 528 "structure_reuse.domain.m"
                {
#line 528 "structure_reuse.domain.m"
                  MR_Word base;
#line 528 "structure_reuse.domain.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 528 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16 = base;
#line 528 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_22_22));
#line 528 "structure_reuse.domain.m"
                }
#line 527 "structure_reuse.domain.m"
              }
#line 529 "structure_reuse.domain.m"
              break;
#line 529 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 530 "structure_reuse.domain.m"
              {
#line 530 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__V_19_19;

#line 531 "structure_reuse.domain.m"
                {
#line 531 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_19_19, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Condition_8));
#line 531 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "structure_reuse.domain.m"
                }
#line 531 "structure_reuse.domain.m"
                {
#line 531 "structure_reuse.domain.m"
                  MR_Word base;
#line 531 "structure_reuse.domain.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 531 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16 = base;
#line 531 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_19_19));
#line 531 "structure_reuse.domain.m"
                }
#line 530 "structure_reuse.domain.m"
              }
#line 529 "structure_reuse.domain.m"
              break;
#line 529 "structure_reuse.domain.m"
          }
#line 529 "structure_reuse.domain.m"
          break;
#line 529 "structure_reuse.domain.m"
        case (MR_Integer) 1:
#line 533 "structure_reuse.domain.m"
          {
#line 533 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__Conditions_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15, (MR_Integer) 0)));
#line 533 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__NewConditions_14;

#line 555 "structure_reuse.domain.m"
            {
#line 555 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, transform_hlds__ctgc__structure_reuse__domain__Condition_8, transform_hlds__ctgc__structure_reuse__domain__Conditions_13);
            }
#line 559 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 559 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__NewConditions_14 = transform_hlds__ctgc__structure_reuse__domain__Conditions_13;
#line 559 "structure_reuse.domain.m"
            else
#line 560 "structure_reuse.domain.m"
              {
#line 560 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__NewConditions_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NewConditions_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Condition_8));
#line 560 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NewConditions_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Conditions_13));
#line 560 "structure_reuse.domain.m"
              }
#line 536 "structure_reuse.domain.m"
            {
#line 536 "structure_reuse.domain.m"
              MR_Word base;
#line 536 "structure_reuse.domain.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "structure_reuse.domain.m"
              *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16 = base;
#line 536 "structure_reuse.domain.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__NewConditions_14));
#line 536 "structure_reuse.domain.m"
            }
#line 533 "structure_reuse.domain.m"
          }
#line 529 "structure_reuse.domain.m"
          break;
#line 529 "structure_reuse.domain.m"
      }
#line 518 "structure_reuse.domain.m"
  }
#line 142 "structure_reuse.domain.m"
}

#line 511 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0_1(
#line 511 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 511 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 511 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 511 "structure_reuse.domain.m"
{
#line 511 "structure_reuse.domain.m"
  {
#line 511 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 511 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_RenamedCondition_8;

#line 511 "structure_reuse.domain.m"
    {
#line 511 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__domain__conv0_RenamedCondition_8);
    }
#line 511 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_RenamedCondition_8));
#line 511 "structure_reuse.domain.m"
  }
#line 511 "structure_reuse.domain.m"
}

#line 135 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0(
#line 135 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__MapVar_5,
#line 135 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeSubst_6,
#line 135 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_7,
#line 135 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__RenamedReuseAs_8)
#line 135 "structure_reuse.domain.m"
{
#line 504 "structure_reuse.domain.m"
  {
#line 504 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 504 "structure_reuse.domain.m"
#line 504 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__ReuseAs_7)) {
#line 504 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 504 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 504 "structure_reuse.domain.m"
#line 504 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__ReuseAs_7)) {
#line 504 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 504 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 505 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__RenamedReuseAs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 504 "structure_reuse.domain.m"
            break;
#line 504 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 508 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__RenamedReuseAs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 504 "structure_reuse.domain.m"
            break;
#line 504 "structure_reuse.domain.m"
        }
#line 504 "structure_reuse.domain.m"
        break;
#line 504 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 510 "structure_reuse.domain.m"
        {
#line 510 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_14_14;
#line 510 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseConditions_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_7, (MR_Integer) 0)));
#line 510 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__RenamedReuseConditions_10;
#line 510 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_11_11;

#line 511 "structure_reuse.domain.m"
          {
#line 511 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 511 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_11_11, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[2]));
#line 511 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_11_11, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0_1));
#line 511 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 511 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_11_11, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__MapVar_5));
#line 511 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_11_11, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__TypeSubst_6));
#line 511 "structure_reuse.domain.m"
          }
#line 7666 "transform_hlds.ctgc.structure_reuse.domain.c"
          transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_14_14 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
#line 511 "structure_reuse.domain.m"
          {
#line 511 "structure_reuse.domain.m"
            mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_14_14, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_14_14, transform_hlds__ctgc__structure_reuse__domain__V_11_11, transform_hlds__ctgc__structure_reuse__domain__ReuseConditions_9, &transform_hlds__ctgc__structure_reuse__domain__RenamedReuseConditions_10);
          }
#line 513 "structure_reuse.domain.m"
          {
#line 513 "structure_reuse.domain.m"
            MR_Word base;
#line 513 "structure_reuse.domain.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 513 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__RenamedReuseAs_8 = base;
#line 513 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__RenamedReuseConditions_10));
#line 513 "structure_reuse.domain.m"
          }
#line 510 "structure_reuse.domain.m"
        }
#line 504 "structure_reuse.domain.m"
        break;
#line 504 "structure_reuse.domain.m"
    }
#line 504 "structure_reuse.domain.m"
  }
#line 135 "structure_reuse.domain.m"
}

#line 128 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_8_p_0(
#line 128 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_9,
#line 128 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_10,
#line 128 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ActualArgs_11,
#line 128 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ActualTypes_12,
#line 128 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__CallerTypeVarSet_13,
#line 128 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__CallerHeadTypeParams_14,
#line 128 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__FormalReuse_15,
#line 128 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__ActualReuse_16)
#line 128 "structure_reuse.domain.m"
{
#line 496 "structure_reuse.domain.m"
  {
#line 496 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 496 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__VarRenaming_17;
#line 496 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeSubst_18;

#line 497 "structure_reuse.domain.m"
    {
#line 497 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__VarRenaming_17 = transform_hlds__ctgc__util__get_variable_renaming_3_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__domain__PPId_10, transform_hlds__ctgc__structure_reuse__domain__ActualArgs_11);
    }
#line 498 "structure_reuse.domain.m"
    {
#line 498 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__TypeSubst_18 = transform_hlds__ctgc__util__get_type_substitution_5_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__domain__PPId_10, transform_hlds__ctgc__structure_reuse__domain__ActualTypes_12, transform_hlds__ctgc__structure_reuse__domain__CallerTypeVarSet_13, transform_hlds__ctgc__structure_reuse__domain__CallerHeadTypeParams_14);
    }
#line 500 "structure_reuse.domain.m"
    {
#line 500 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0(transform_hlds__ctgc__structure_reuse__domain__VarRenaming_17, transform_hlds__ctgc__structure_reuse__domain__TypeSubst_18, transform_hlds__ctgc__structure_reuse__domain__FormalReuse_15, transform_hlds__ctgc__structure_reuse__domain__ActualReuse_16);
    }
#line 496 "structure_reuse.domain.m"
  }
#line 128 "structure_reuse.domain.m"
}

#line 116 "structure_reuse.domain.m"
MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(
#line 116 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 116 "structure_reuse.domain.m"
{
#line 491 "structure_reuse.domain.m"
  {
#line 491 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 491 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 491 "structure_reuse.domain.m"
#line 491 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 491 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 491 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 491 "structure_reuse.domain.m"
#line 491 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 491 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 491 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 491 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = (MR_Integer) 0;
#line 491 "structure_reuse.domain.m"
            break;
#line 491 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 492 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = (MR_Integer) 0;
#line 491 "structure_reuse.domain.m"
            break;
#line 491 "structure_reuse.domain.m"
        }
#line 491 "structure_reuse.domain.m"
        break;
#line 491 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 493 "structure_reuse.domain.m"
        {
#line 493 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__Conds_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));

#line 493 "structure_reuse.domain.m"
          {
#line 493 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, transform_hlds__ctgc__structure_reuse__domain__Conds_3);
          }
#line 493 "structure_reuse.domain.m"
        }
#line 491 "structure_reuse.domain.m"
        break;
#line 491 "structure_reuse.domain.m"
    }
#line 491 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 491 "structure_reuse.domain.m"
  }
#line 116 "structure_reuse.domain.m"
}

#line 115 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(
#line 115 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 115 "structure_reuse.domain.m"
{
#line 489 "structure_reuse.domain.m"
  {
#line 489 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 489 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_2_2;

#line 489 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 489 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 489 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 489 "structure_reuse.domain.m"
  }
#line 115 "structure_reuse.domain.m"
}

#line 114 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(
#line 114 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 114 "structure_reuse.domain.m"
{
#line 488 "structure_reuse.domain.m"
  {
#line 488 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));

#line 488 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 488 "structure_reuse.domain.m"
  }
#line 114 "structure_reuse.domain.m"
}

#line 113 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(
#line 113 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 113 "structure_reuse.domain.m"
{
#line 487 "structure_reuse.domain.m"
  {
#line 487 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 487 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 487 "structure_reuse.domain.m"
  }
#line 113 "structure_reuse.domain.m"
}

#line 107 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_and_status_subsumed_by_4_p_0(
#line 107 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 107 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 107 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status1_7,
#line 107 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status2_8)
#line 107 "structure_reuse.domain.m"
{
#line 481 "structure_reuse.domain.m"
  {
#line 481 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 481 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Reuse1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status1_7, (MR_Integer) 0)));
#line 481 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Reuse2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status2_8, (MR_Integer) 0)));
#line 482 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain___Status1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status1_7, (MR_Integer) 1)));
#line 483 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain___Status2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status2_8, (MR_Integer) 1)));

#line 484 "structure_reuse.domain.m"
    {
#line 484 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__Reuse1_9, transform_hlds__ctgc__structure_reuse__domain__Reuse2_11);
    }
#line 481 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 481 "structure_reuse.domain.m"
  }
#line 107 "structure_reuse.domain.m"
}

#line 474 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0_1(
#line 474 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 474 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 474 "structure_reuse.domain.m"
{
#line 474 "structure_reuse.domain.m"
  {
#line 474 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 474 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;

#line 474 "structure_reuse.domain.m"
    {
#line 474 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 474 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 474 "structure_reuse.domain.m"
  }
#line 474 "structure_reuse.domain.m"
}

#line 104 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0(
#line 104 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 104 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 104 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__FirstReuseAs_7,
#line 104 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SecondReuseAs_8)
#line 104 "structure_reuse.domain.m"
{
#line 461 "structure_reuse.domain.m"
  {
#line 461 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 461 "structure_reuse.domain.m"
#line 461 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__FirstReuseAs_7)) {
#line 461 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 461 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 461 "structure_reuse.domain.m"
#line 461 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__FirstReuseAs_7)) {
#line 461 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 461 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 461 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 461 "structure_reuse.domain.m"
            break;
#line 461 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 461 "structure_reuse.domain.m"
            if ((transform_hlds__ctgc__structure_reuse__domain__SecondReuseAs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 469 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 461 "structure_reuse.domain.m"
            else
#line 461 "structure_reuse.domain.m"
            if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__SecondReuseAs_8)) == (MR_mktag((MR_Integer) 1))))
#line 463 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 461 "structure_reuse.domain.m"
            else
#line 461 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_FALSE;
#line 461 "structure_reuse.domain.m"
            break;
#line 461 "structure_reuse.domain.m"
        }
#line 461 "structure_reuse.domain.m"
        break;
#line 461 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 472 "structure_reuse.domain.m"
        {
#line 472 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_16_16;
#line 472 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseConditionsFirst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__FirstReuseAs_7, (MR_Integer) 0)));
#line 472 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseConditionsSecond_11;
#line 472 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__NotSubsumed_13;
#line 472 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14;
#line 474 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_12_12;

#line 473 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__SecondReuseAs_8)) == (MR_mktag((MR_Integer) 1)));
#line 473 "structure_reuse.domain.m"
          if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 473 "structure_reuse.domain.m"
            {
#line 473 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__ReuseConditionsSecond_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__SecondReuseAs_8, (MR_Integer) 0)));
#line 8025 "transform_hlds.ctgc.structure_reuse.domain.c"
              transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
#line 474 "structure_reuse.domain.m"
              {
#line 474 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 474 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[1]));
#line 474 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0_1));
#line 474 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 474 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5));
#line 474 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6));
#line 474 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ReuseConditionsSecond_11));
#line 474 "structure_reuse.domain.m"
              }
#line 474 "structure_reuse.domain.m"
              {
#line 474 "structure_reuse.domain.m"
                mercury__list__takewhile_4_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_16_16, transform_hlds__ctgc__structure_reuse__domain__V_14_14, transform_hlds__ctgc__structure_reuse__domain__ReuseConditionsFirst_10, &transform_hlds__ctgc__structure_reuse__domain__V_12_12, &transform_hlds__ctgc__structure_reuse__domain__NotSubsumed_13);
              }
#line 477 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__NotSubsumed_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "structure_reuse.domain.m"
            }
#line 472 "structure_reuse.domain.m"
        }
#line 461 "structure_reuse.domain.m"
        break;
#line 461 "structure_reuse.domain.m"
    }
#line 461 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 461 "structure_reuse.domain.m"
  }
#line 104 "structure_reuse.domain.m"
}

#line 97 "structure_reuse.domain.m"
MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_f_0(
#line 97 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 97 "structure_reuse.domain.m"
{
#line 454 "structure_reuse.domain.m"
  {
#line 454 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 454 "structure_reuse.domain.m"
    MR_String transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 454 "structure_reuse.domain.m"
#line 454 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 454 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 454 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 454 "structure_reuse.domain.m"
#line 454 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 454 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 454 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 454 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = (MR_String) "no_reuse";
#line 454 "structure_reuse.domain.m"
            break;
#line 454 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 455 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = (MR_String) "uncond";
#line 454 "structure_reuse.domain.m"
            break;
#line 454 "structure_reuse.domain.m"
        }
#line 454 "structure_reuse.domain.m"
        break;
#line 454 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 456 "structure_reuse.domain.m"
        {
#line 456 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__Conds_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 456 "structure_reuse.domain.m"
          MR_String transform_hlds__ctgc__structure_reuse__domain__Size_4;
#line 456 "structure_reuse.domain.m"
          MR_String transform_hlds__ctgc__structure_reuse__domain__V_6_6;
#line 456 "structure_reuse.domain.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 457 "structure_reuse.domain.m"
          {
#line 457 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_8_8 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, transform_hlds__ctgc__structure_reuse__domain__Conds_3);
          }
#line 457 "structure_reuse.domain.m"
          {
#line 457 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__Size_4 = mercury__string__int_to_string_1_f_0(transform_hlds__ctgc__structure_reuse__domain__V_8_8);
          }
#line 456 "structure_reuse.domain.m"
          {
#line 456 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_6_6 = mercury__string__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__domain__Size_4, (MR_String) ")");
          }
#line 456 "structure_reuse.domain.m"
          {
#line 456 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "cond(", transform_hlds__ctgc__structure_reuse__domain__V_6_6);
          }
#line 456 "structure_reuse.domain.m"
        }
#line 454 "structure_reuse.domain.m"
        break;
#line 454 "structure_reuse.domain.m"
    }
#line 454 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 454 "structure_reuse.domain.m"
  }
#line 97 "structure_reuse.domain.m"
}

#line 93 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_f_0(
#line 93 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3)
#line 93 "structure_reuse.domain.m"
{
#line 450 "structure_reuse.domain.m"
  {
#line 450 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3)) == (MR_mktag((MR_Integer) 1)));
#line 450 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4;
#line 380 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7;
#line 380 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;
#line 380 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9;

#line 380 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 380 "structure_reuse.domain.m"
      {
#line 380 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3, (MR_Integer) 0)));
#line 380 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3, (MR_Integer) 1)));
#line 380 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3, (MR_Integer) 2)));
#line 449 "structure_reuse.domain.m"
        {
#line 449 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5;

#line 449 "structure_reuse.domain.m"
          {
#line 449 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_5_5, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3));
#line 449 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "structure_reuse.domain.m"
          }
#line 449 "structure_reuse.domain.m"
          {
#line 449 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 449 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_5_5));
#line 449 "structure_reuse.domain.m"
          }
#line 449 "structure_reuse.domain.m"
        }
#line 380 "structure_reuse.domain.m"
      }
#line 380 "structure_reuse.domain.m"
    else
#line 451 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 450 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4;
#line 450 "structure_reuse.domain.m"
  }
#line 93 "structure_reuse.domain.m"
}

#line 92 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0(void)
#line 92 "structure_reuse.domain.m"
{
#line 446 "structure_reuse.domain.m"
  {
#line 446 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 446 "structure_reuse.domain.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 446 "structure_reuse.domain.m"
  }
#line 92 "structure_reuse.domain.m"
}

#line 79 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_p_0(
#line 79 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 79 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 79 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond1_7,
#line 79 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond2_8)
#line 79 "structure_reuse.domain.m"
{
#line 386 "structure_reuse.domain.m"
  {
#line 386 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 386 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__Cond1_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 386 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 386 "structure_reuse.domain.m"
    else
#line 388 "structure_reuse.domain.m"
      {
#line 388 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_15;
#line 388 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__Nodes1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_7, (MR_Integer) 0)));
#line 388 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalUse1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_7, (MR_Integer) 1)));
#line 388 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalSharing1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_7, (MR_Integer) 2)));
#line 388 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__Nodes2_12;
#line 388 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalUse2_13;
#line 388 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_14;

#line 389 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__Cond2_8)) == (MR_mktag((MR_Integer) 1)));
#line 389 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 389 "structure_reuse.domain.m"
          {
#line 389 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__Nodes2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond2_8, (MR_Integer) 0)));
#line 389 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__LocalUse2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond2_8, (MR_Integer) 1)));
#line 389 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond2_8, (MR_Integer) 2)));
#line 8293 "transform_hlds.ctgc.structure_reuse.domain.c"
            transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 401 "structure_reuse.domain.m"
            {
#line 401 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__set__subset_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_15, transform_hlds__ctgc__structure_reuse__domain__Nodes1_9, transform_hlds__ctgc__structure_reuse__domain__Nodes2_12);
            }
#line 388 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 388 "structure_reuse.domain.m"
              {
#line 403 "structure_reuse.domain.m"
                {
#line 403 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__LocalUse1_10, transform_hlds__ctgc__structure_reuse__domain__LocalUse2_13);
                }
#line 388 "structure_reuse.domain.m"
                if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 405 "structure_reuse.domain.m"
                  {
#line 405 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__LocalSharing1_11, transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_14);
                  }
#line 388 "structure_reuse.domain.m"
              }
#line 389 "structure_reuse.domain.m"
          }
#line 388 "structure_reuse.domain.m"
      }
#line 386 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 386 "structure_reuse.domain.m"
  }
#line 79 "structure_reuse.domain.m"
}

#line 431 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0_1(
#line 431 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 431 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 431 "structure_reuse.domain.m"
{
#line 431 "structure_reuse.domain.m"
  {
#line 431 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 431 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 431 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__4_4;

#line 431 "structure_reuse.domain.m"
    {
#line 431 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__4_4 = parse_tree__prog_ctgc__rename_datastruct_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 431 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__4_4));
#line 431 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 431 "structure_reuse.domain.m"
  }
#line 431 "structure_reuse.domain.m"
}

#line 72 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0(
#line 72 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__MapVar_5,
#line 72 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeSubst_6,
#line 72 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Condition_7,
#line 72 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__RenamedCondition_8)
#line 72 "structure_reuse.domain.m"
{
#line 427 "structure_reuse.domain.m"
  {
#line 427 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 427 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__Condition_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "structure_reuse.domain.m"
      *transform_hlds__ctgc__structure_reuse__domain__RenamedCondition_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 427 "structure_reuse.domain.m"
    else
#line 430 "structure_reuse.domain.m"
      {
#line 430 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 430 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadNodes_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_7, (MR_Integer) 0)));
#line 430 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__InUseNodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_7, (MR_Integer) 1)));
#line 430 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalSharing_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_7, (MR_Integer) 2)));
#line 430 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__RenamedDeadNodes_12;
#line 430 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__RenamedInUseNodes_13;
#line 430 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__RenamedLocalSharing_14;
#line 430 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_15_15;

#line 431 "structure_reuse.domain.m"
        {
#line 431 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 431 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_15_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[0]));
#line 431 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_15_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0_1));
#line 431 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 431 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_15_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__MapVar_5));
#line 431 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_15_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__TypeSubst_6));
#line 431 "structure_reuse.domain.m"
        }
#line 431 "structure_reuse.domain.m"
        {
#line 431 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__RenamedDeadNodes_12 = mercury__set__map_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__domain__V_15_15, transform_hlds__ctgc__structure_reuse__domain__DeadNodes_9);
        }
#line 433 "structure_reuse.domain.m"
        {
#line 433 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__RenamedInUseNodes_13 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__domain__V_15_15, transform_hlds__ctgc__structure_reuse__domain__InUseNodes_10);
        }
#line 435 "structure_reuse.domain.m"
        {
#line 435 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_p_0(transform_hlds__ctgc__structure_reuse__domain__MapVar_5, transform_hlds__ctgc__structure_reuse__domain__TypeSubst_6, transform_hlds__ctgc__structure_reuse__domain__LocalSharing_11, &transform_hlds__ctgc__structure_reuse__domain__RenamedLocalSharing_14);
        }
#line 437 "structure_reuse.domain.m"
        {
#line 437 "structure_reuse.domain.m"
          MR_Word base;
#line 437 "structure_reuse.domain.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 437 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__RenamedCondition_8 = base;
#line 437 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__RenamedDeadNodes_12));
#line 437 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__RenamedInUseNodes_13));
#line 437 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__RenamedLocalSharing_14));
#line 437 "structure_reuse.domain.m"
        }
#line 430 "structure_reuse.domain.m"
      }
#line 427 "structure_reuse.domain.m"
  }
#line 72 "structure_reuse.domain.m"
}

#line 65 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_reusable_nodes_2_p_0(
#line 65 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 65 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__Nodes_3)
#line 65 "structure_reuse.domain.m"
{
#line 382 "structure_reuse.domain.m"
  {
#line 382 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 382 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4;
#line 382 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5;

#line 382 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 382 "structure_reuse.domain.m"
      {
#line 382 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__Nodes_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 382 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 382 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 2)));
#line 382 "structure_reuse.domain.m"
      }
#line 382 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 382 "structure_reuse.domain.m"
  }
#line 65 "structure_reuse.domain.m"
}

#line 63 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(
#line 63 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 63 "structure_reuse.domain.m"
{
#line 380 "structure_reuse.domain.m"
  {
#line 380 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 380 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_2_2;
#line 380 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_3_3;
#line 380 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4;

#line 380 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 380 "structure_reuse.domain.m"
      {
#line 380 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 2)));
#line 380 "structure_reuse.domain.m"
      }
#line 380 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 380 "structure_reuse.domain.m"
  }
#line 63 "structure_reuse.domain.m"
}

#line 370 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_2(
#line 370 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 370 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 370 "structure_reuse.domain.m"
{
#line 370 "structure_reuse.domain.m"
  {
#line 370 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 370 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 370 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv1_HeadVar__5_5;

#line 370 "structure_reuse.domain.m"
    {
#line 370 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__conv1_HeadVar__5_5 = transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 370 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv1_HeadVar__5_5));
#line 370 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 370 "structure_reuse.domain.m"
  }
#line 370 "structure_reuse.domain.m"
}

#line 368 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_1(
#line 368 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 368 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 368 "structure_reuse.domain.m"
{
#line 368 "structure_reuse.domain.m"
  {
#line 368 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 368 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 368 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__2_2;

#line 368 "structure_reuse.domain.m"
    {
#line 368 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 368 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__2_2));
#line 368 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 368 "structure_reuse.domain.m"
  }
#line 368 "structure_reuse.domain.m"
}

#line 60 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0(
#line 60 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8,
#line 60 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9,
#line 60 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadVar_10,
#line 60 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LFU_11,
#line 60 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LBU_12,
#line 60 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Sharing_13)
#line 60 "structure_reuse.domain.m"
{
#line 331 "structure_reuse.domain.m"
  {
#line 331 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 331 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Condition_14;
#line 331 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVars_15;
#line 331 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__TopCell_16;
#line 331 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Nodes_17;

#line 332 "structure_reuse.domain.m"
    {
#line 332 "structure_reuse.domain.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, &transform_hlds__ctgc__structure_reuse__domain__HeadVars_15);
    }
#line 347 "structure_reuse.domain.m"
    {
#line 347 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__TopCell_16 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(transform_hlds__ctgc__structure_reuse__domain__DeadVar_10);
    }
#line 348 "structure_reuse.domain.m"
    {
#line 348 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__DeadVar_10)), transform_hlds__ctgc__structure_reuse__domain__HeadVars_15);
    }
#line 350 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 349 "structure_reuse.domain.m"
      {
#line 349 "structure_reuse.domain.m"
        {
#line 349 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__Nodes_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Nodes_17, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__TopCell_16));
#line 349 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Nodes_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "structure_reuse.domain.m"
        }
#line 349 "structure_reuse.domain.m"
      }
#line 350 "structure_reuse.domain.m"
    else
#line 352 "structure_reuse.domain.m"
      {
#line 352 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__SharedDatastructs_18;

#line 351 "structure_reuse.domain.m"
        {
#line 351 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__SharedDatastructs_18 = transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, transform_hlds__ctgc__structure_reuse__domain__Sharing_13, transform_hlds__ctgc__structure_reuse__domain__TopCell_16);
        }
#line 353 "structure_reuse.domain.m"
        {
#line 353 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__Nodes_17 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_15, transform_hlds__ctgc__structure_reuse__domain__SharedDatastructs_18);
        }
#line 352 "structure_reuse.domain.m"
      }
#line 362 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__Nodes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__Condition_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "structure_reuse.domain.m"
    else
#line 363 "structure_reuse.domain.m"
      {
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35;
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LU_21;
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LuData_22;
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__ExtendedLuData_23;
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__SharedLU_24;
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVarSharedLU_25;
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVarSharing_26;
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_29_29;
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_30_30;
#line 363 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_31_31;

#line 364 "structure_reuse.domain.m"
        {
#line 364 "structure_reuse.domain.m"
          parse_tree__set_of_var__union_3_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_33_33, transform_hlds__ctgc__structure_reuse__domain__LFU_11, transform_hlds__ctgc__structure_reuse__domain__LBU_12, &transform_hlds__ctgc__structure_reuse__domain__LU_21);
        }
#line 8712 "transform_hlds.ctgc.structure_reuse.domain.c"
        transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 368 "structure_reuse.domain.m"
        {
#line 368 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_29_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_33_33, transform_hlds__ctgc__structure_reuse__domain__LU_21);
        }
#line 368 "structure_reuse.domain.m"
        {
#line 368 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__LuData_22 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[3], transform_hlds__ctgc__structure_reuse__domain__V_29_29);
        }
#line 370 "structure_reuse.domain.m"
        {
#line 370 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 370 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[0]));
#line 370 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_2));
#line 370 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 370 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8));
#line 370 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9));
#line 370 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Sharing_13));
#line 370 "structure_reuse.domain.m"
        }
#line 369 "structure_reuse.domain.m"
        {
#line 369 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__ExtendedLuData_23 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__domain__V_30_30, transform_hlds__ctgc__structure_reuse__domain__LuData_22);
        }
#line 371 "structure_reuse.domain.m"
        {
#line 371 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__SharedLU_24 = mercury__list__condense_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35, transform_hlds__ctgc__structure_reuse__domain__ExtendedLuData_23);
        }
#line 372 "structure_reuse.domain.m"
        {
#line 372 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__HeadVarSharedLU_25 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_15, transform_hlds__ctgc__structure_reuse__domain__SharedLU_24);
        }
#line 374 "structure_reuse.domain.m"
        {
#line 374 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_p_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_15, transform_hlds__ctgc__structure_reuse__domain__Sharing_13, &transform_hlds__ctgc__structure_reuse__domain__HeadVarSharing_26);
        }
#line 376 "structure_reuse.domain.m"
        {
#line 376 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_31_31 = mercury__set__list_to_set_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35, transform_hlds__ctgc__structure_reuse__domain__Nodes_17);
        }
#line 376 "structure_reuse.domain.m"
        {
#line 376 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__Condition_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 376 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_31_31));
#line 376 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__HeadVarSharedLU_25));
#line 376 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__HeadVarSharing_26));
#line 376 "structure_reuse.domain.m"
        }
#line 363 "structure_reuse.domain.m"
      }
#line 331 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__Condition_14;
#line 331 "structure_reuse.domain.m"
  }
#line 60 "structure_reuse.domain.m"
}

void mercury__transform_hlds__ctgc__structure_reuse__domain__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__domain__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_no_clobber_args_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_conditions_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_not_possible_reason_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_satisfied_result_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__domain__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.structure_reuse.domain. */
