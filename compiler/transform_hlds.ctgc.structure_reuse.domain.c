/*
** Automatically generated from `structure_reuse.domain.m'
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


/* :- module transform_hlds.ctgc.structure_reuse.domain. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__domain__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.domain.mih"


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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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



#line 762 "structure_reuse.domain.m"
struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s {
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7;
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8;
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9;
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10;
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11;
#line 762 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12;
#line 762 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont;
#line 762 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr;
#line 767 "structure_reuse.domain.m"
  MR_bool transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__succeeded;
#line 767 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__TypeCtorInfo_20_20;
#line 767 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNodes_14;
#line 775 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15;
#line 775 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherAliasedNode_16;
#line 775 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__V_19_19;
#line 775 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__conv0_SharingNode_15;
#line 762 "structure_reuse.domain.m"
};

#line 753 "structure_reuse.domain.m"
struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s {
#line 753 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__wrapper_arg_1;
#line 753 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont;
#line 753 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont_env_ptr;
#line 753 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__conv1_AliasedNodes_12;
#line 753 "structure_reuse.domain.m"
};


#line 199 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 202 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 205 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 211 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 214 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 217 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 220 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 223 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 226 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 229 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 232 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0;

#line 235 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_ppid_no_clobbers_0_0[2];

#line 238 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0;

#line 241 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_ppid_no_clobbers_0_0[1];

#line 244 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_ppid_no_clobbers_0[1];

#line 247 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_ppid_no_clobbers_0[1];

#line 250 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_ppid_no_clobbers_0[1];

#line 253 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0;

#line 256 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1;

#line 259 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 262 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_0_2[1];

#line 265 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2;

#line 268 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_0[2];

#line 271 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_1[1];

#line 274 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_0[2];

#line 277 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_0[3];

#line 280 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_0[3];

#line 283 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_and_status_0_0[2];

#line 286 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0;

#line 289 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_and_status_0_0[1];

#line 292 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_and_status_0[1];

#line 295 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_and_status_0[1];

#line 298 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_and_status_0[1];

#line 301 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;

#line 304 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__bimap__ti_bimap_2transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 307 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_table_0_0[2];

#line 310 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_as_table_0_0[2];

#line 313 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0;

#line 316 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_table_0_0[1];

#line 319 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_table_0[1];

#line 322 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_table_0[1];

#line 325 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_table_0[1];

#line 328 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0;

#line 331 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 334 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 337 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_condition_0_1[3];

#line 340 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_condition_0_1[3];

#line 343 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1;

#line 346 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_0[1];

#line 349 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_1[1];

#line 352 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_condition_0[2];

#line 355 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_condition_0[2];

#line 358 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_condition_0[2];

#line 361 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0;

#line 364 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1;

#line 367 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 370 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_2[1];

#line 373 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2;

#line 376 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_3[1];

#line 379 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3;

#line 382 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_0[2];

#line 385 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_1[1];

#line 388 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_2[1];

#line 391 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_not_possible_reason_0[3];

#line 394 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_not_possible_reason_0[4];

#line 397 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_not_possible_reason_0[4];

#line 400 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0;

#line 403 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_satisfied_result_0_1[1];

#line 406 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1;

#line 409 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_0[1];

#line 412 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_1[1];

#line 415 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_satisfied_result_0[2];

#line 418 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_satisfied_result_0[2];

#line 421 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_satisfied_result_0[2];

#line 424 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0_10001(
#line 427 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 429 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 432 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0_10001(
#line 435 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 437 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 439 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 442 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0_10001(
#line 445 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 447 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 450 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0_10001(
#line 453 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 455 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 457 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 460 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0_10001(
#line 463 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 465 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 468 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0_10001(
#line 471 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 473 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 475 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 478 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0_10001(
#line 481 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 483 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 486 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0_10001(
#line 489 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 491 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 493 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 496 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0_10001(
#line 499 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 501 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 504 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0_10001(
#line 507 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 509 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 511 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 514 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0_10001(
#line 517 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 519 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 522 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0_10001(
#line 525 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 527 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 529 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 532 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0_10001(
#line 535 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 537 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 540 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0_10001(
#line 543 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 545 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 547 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 550 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0_10001(
#line 553 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 555 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 558 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0_10001(
#line 561 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 563 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 565 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 568 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0_10001(
#line 571 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 573 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 576 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0_10001(
#line 579 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 581 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 583 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 996 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_p_0(
#line 996 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 996 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PredId_7,
#line 996 "structure_reuse.domain.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__domain__ProcId_8,
#line 996 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16,
#line 996 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_17);

#line 993 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0_1(
#line 993 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 993 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 993 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 993 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 987 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0(
#line 987 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 987 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PredId_6,
#line 987 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_10,
#line 987 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_11);

#line 972 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__dump_entries_5_p_0(
#line 972 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 972 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_7,
#line 972 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3);

#line 912 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_f_0(
#line 912 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Condition_3,
#line 912 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__StructureReuseCondition_4);

#line 884 "structure_reuse.domain.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_f_0(
#line 884 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PublicReuseCondition_3);

#line 804 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__collect_aliased_vars_3_p_0(
#line 804 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 804 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_0_7,
#line 804 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_8);

#line 788 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__there_is_a_subsumption_relation_5_p_0(
#line 788 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 788 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 788 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3,
#line 788 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__DataA_10,
#line 788 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__DataB_11,
#line 788 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 788 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr);

#line 775 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_3(
#line 775 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg);

#line 775 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_4(
#line 775 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg);

#line 775 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_2(
#line 775 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg);

#line 767 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_1(
#line 767 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg);

#line 762 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0(
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_7,
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_8,
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_9,
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Node_10,
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__OtherNodes_11,
#line 762 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__AliasedNodes_12,
#line 762 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 762 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr);

#line 699 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1,
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2,
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LiveData_3,
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_4,
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__StaticVars_5,
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6,
#line 699 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7);

#line 621 "structure_reuse.domain.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_f_0(
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8,
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9,
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVars_10,
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LuData_11,
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_12,
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13);

#line 560 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_p_0(
#line 560 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 560 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 560 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NewConds_8,
#line 560 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12,
#line 560 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_13);

#line 416 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_p_0(
#line 416 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 416 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 416 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Conds_7,
#line 416 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_8);

#line 406 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(
#line 406 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 406 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 406 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_7,
#line 406 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4);

#line 984 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0_1(
#line 984 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 984 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 984 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 984 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 969 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0_1(
#line 969 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 969 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 969 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 969 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3,
#line 969 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_4);

#line 910 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0_1(
#line 910 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 910 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 910 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 882 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0_1(
#line 882 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 882 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);

#line 754 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_4(
#line 754 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 754 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 754 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 754 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 753 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_2(
#line 753 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg);

#line 753 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3(
#line 753 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 753 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 753 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 753 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr);

#line 748 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_1(
#line 748 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 748 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 748 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 617 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_2(
#line 617 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 617 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 617 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 617 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3);

#line 614 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_1(
#line 614 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 614 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);

#line 508 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0_1(
#line 508 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 508 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 508 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2);

#line 471 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0_1(
#line 471 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 471 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);

#line 428 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0_1(
#line 428 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 428 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);

#line 367 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_2(
#line 367 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 367 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1);

#line 365 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_1(
#line 365 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 365 "structure_reuse.domain.m"
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



#line 1237 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1245 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1253 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1261 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1270 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1278 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1287 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 1295 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1303 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1311 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1320 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1328 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1336 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1353 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_ppid_no_clobbers_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1359 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1374 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_ppid_no_clobbers_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0
};

#line 1379 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_ppid_no_clobbers_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_ppid_no_clobbers_0_0
  }
};

#line 1388 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_ppid_no_clobbers_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0
};

#line 1393 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_ppid_no_clobbers_0[1] = {
  (MR_Integer) 0
};

#line 1398 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1415 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1430 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1445 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 1453 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
};

#line 1458 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1473 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1
};

#line 1479 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2
};

#line 1484 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1498 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_0[3] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1
};

#line 1505 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1512 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1529 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_and_status_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

#line 1535 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1550 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_and_status_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0
};

#line 1555 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_and_status_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_and_status_0_0
  }
};

#line 1564 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_and_status_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0
};

#line 1569 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_and_status_0[1] = {
  (MR_Integer) 0
};

#line 1574 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1591 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0
  }
};

#line 1600 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__bimap__ti_bimap_2transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1609 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_table_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__bimap__ti_bimap_2transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1615 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_as_table_0_0[2] = {
  (MR_String) "reuse_info_map",
  (MR_String) "reuse_version_map"
};

#line 1621 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1636 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_table_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0
};

#line 1641 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_table_0_0
  }
};

#line 1650 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_table_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0
};

#line 1655 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_table_0[1] = {
  (MR_Integer) 0
};

#line 1660 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1677 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1692 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1700 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1708 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_condition_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_datastruct_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0
};

#line 1715 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_condition_0_1[3] = {
  (MR_String) "reuseable_nodes",
  (MR_String) "local_use_headvars",
  (MR_String) "local_sharing_headvars"
};

#line 1722 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1737 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0
};

#line 1742 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1
};

#line 1747 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1761 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_condition_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1
};

#line 1767 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_condition_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1773 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1790 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1807 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1822 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1837 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1845 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1850 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1865 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_3[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1870 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1885 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1
};

#line 1891 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2
};

#line 1896 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_2[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3
};

#line 1901 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1920 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_not_possible_reason_0[4] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1
};

#line 1928 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_not_possible_reason_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1936 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1953 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1968 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_satisfied_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_not_possible_reason_0
};

#line 1973 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 1988 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0
};

#line 1993 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1
};

#line 1998 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 2012 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_satisfied_result_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0
};

#line 2018 "transform_hlds.ctgc.structure_reuse.domain.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_satisfied_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2024 "transform_hlds.ctgc.structure_reuse.domain.c"
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

#line 2041 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0_10001(
#line 2044 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2046 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2048 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2050 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2052 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2055 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2057 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2060 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2062 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2064 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2067 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0_10001(
#line 2070 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2072 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2074 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2076 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2078 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2080 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2083 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2085 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2088 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2090 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2092 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2095 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0_10001(
#line 2098 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2100 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2102 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2104 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2106 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2109 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2111 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2114 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2116 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2118 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2121 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0_10001(
#line 2124 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2126 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2128 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2130 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2132 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2134 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2137 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2139 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2142 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2144 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2146 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2149 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0_10001(
#line 2152 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2154 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2156 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2158 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2160 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2163 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2165 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2168 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2170 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2172 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2175 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0_10001(
#line 2178 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2180 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2182 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2184 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2186 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2188 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2191 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2193 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2196 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2198 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2200 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2203 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0_10001(
#line 2206 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2208 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2210 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2212 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2214 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2217 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2219 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2222 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2224 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2226 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2229 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0_10001(
#line 2232 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2234 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2236 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2238 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2240 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2242 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2245 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2247 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2250 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2252 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2254 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2257 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0_10001(
#line 2260 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2262 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2264 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2266 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2268 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2271 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2273 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2276 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2278 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2280 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2283 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0_10001(
#line 2286 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2288 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2290 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2292 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2294 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2296 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2299 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2301 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2304 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2306 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2308 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2311 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0_10001(
#line 2314 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2316 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2318 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2320 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2322 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2325 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2327 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2330 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2332 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2334 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2337 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0_10001(
#line 2340 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2342 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2344 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2346 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2348 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2350 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2353 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2355 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2358 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2360 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2362 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2365 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0_10001(
#line 2368 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2370 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2372 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2374 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2376 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2379 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2381 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2384 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2386 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2388 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2391 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0_10001(
#line 2394 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2396 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2398 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2400 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2402 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2404 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2407 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2409 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2412 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2414 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2416 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2419 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0_10001(
#line 2422 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2424 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2426 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2428 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2430 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2433 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2435 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2438 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2440 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2442 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2445 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0_10001(
#line 2448 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2450 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2452 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2454 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2456 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2458 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2461 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2463 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2466 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2468 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2470 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2473 "transform_hlds.ctgc.structure_reuse.domain.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0_10001(
#line 2476 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2478 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 2480 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2482 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2484 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 2487 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2489 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
    }
#line 2492 "transform_hlds.ctgc.structure_reuse.domain.c"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 2494 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2496 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 2499 "transform_hlds.ctgc.structure_reuse.domain.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0_10001(
#line 2502 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 2504 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 2506 "transform_hlds.ctgc.structure_reuse.domain.c"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 2508 "transform_hlds.ctgc.structure_reuse.domain.c"
{
#line 2510 "transform_hlds.ctgc.structure_reuse.domain.c"
  {
#line 2512 "transform_hlds.ctgc.structure_reuse.domain.c"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1;

#line 2515 "transform_hlds.ctgc.structure_reuse.domain.c"
    {
#line 2517 "transform_hlds.ctgc.structure_reuse.domain.c"
      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0(&transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3));
    }
#line 2520 "transform_hlds.ctgc.structure_reuse.domain.c"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__1_1));
#line 2522 "transform_hlds.ctgc.structure_reuse.domain.c"
  }
#line 2524 "transform_hlds.ctgc.structure_reuse.domain.c"
}

#line 181 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0(
#line 181 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 181 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 181 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 181 "structure_reuse.domain.m"
{
#line 181 "structure_reuse.domain.m"
  {
#line 181 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 181 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 181 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 181 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_8 == transform_hlds__ctgc__structure_reuse__domain__CastY_9);
#line 181 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 2551 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "structure_reuse.domain.m"
    else
#line 181 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "structure_reuse.domain.m"
      if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "structure_reuse.domain.m"
      else
#line 2563 "transform_hlds.ctgc.structure_reuse.domain.c"
        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 181 "structure_reuse.domain.m"
    else
#line 181 "structure_reuse.domain.m"
      {
#line 181 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));

#line 181 "structure_reuse.domain.m"
        if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2574 "transform_hlds.ctgc.structure_reuse.domain.c"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 181 "structure_reuse.domain.m"
        else
#line 181 "structure_reuse.domain.m"
          {
#line 181 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));

#line 181 "structure_reuse.domain.m"
            {
#line 181 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__domain__V_11_11, transform_hlds__ctgc__structure_reuse__domain__V_7_7);
#line 181 "structure_reuse.domain.m"
              return;
            }
#line 181 "structure_reuse.domain.m"
          }
#line 181 "structure_reuse.domain.m"
      }
#line 181 "structure_reuse.domain.m"
  }
#line 181 "structure_reuse.domain.m"
}

#line 181 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0(
#line 181 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 181 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 181 "structure_reuse.domain.m"
{
#line 181 "structure_reuse.domain.m"
  {
#line 181 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 181 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 181 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 181 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_7 == transform_hlds__ctgc__structure_reuse__domain__CastY_8);
#line 181 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 181 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 181 "structure_reuse.domain.m"
    else
#line 181 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "structure_reuse.domain.m"
      {
#line 181 "structure_reuse.domain.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_3 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 181 "structure_reuse.domain.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 181 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_4 == transform_hlds__ctgc__structure_reuse__domain__CastX_3);
#line 181 "structure_reuse.domain.m"
      }
#line 181 "structure_reuse.domain.m"
    else
#line 181 "structure_reuse.domain.m"
      {
#line 181 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6;

#line 181 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 181 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 181 "structure_reuse.domain.m"
          {
#line 181 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 2655 "transform_hlds.ctgc.structure_reuse.domain.c"
            {
#line 2657 "transform_hlds.ctgc.structure_reuse.domain.c"
              return transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0(transform_hlds__ctgc__structure_reuse__domain__V_5_5, transform_hlds__ctgc__structure_reuse__domain__V_6_6);
            }
#line 181 "structure_reuse.domain.m"
          }
#line 181 "structure_reuse.domain.m"
      }
#line 181 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 181 "structure_reuse.domain.m"
  }
#line 181 "structure_reuse.domain.m"
}

#line 185 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0(
#line 185 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 185 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 185 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 185 "structure_reuse.domain.m"
{
#line 185 "structure_reuse.domain.m"
  {
#line 185 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 185 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_20 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 185 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_21 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 185 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_20 == transform_hlds__ctgc__structure_reuse__domain__CastY_21);
#line 185 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 2695 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 185 "structure_reuse.domain.m"
    else
#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) {
#line 185 "structure_reuse.domain.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
        case (MR_Integer) 0:
#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) {
#line 185 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 185 "structure_reuse.domain.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
                case (MR_Integer) 0:
#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 185 "structure_reuse.domain.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
                    case (MR_Integer) 0:
#line 185 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 185 "structure_reuse.domain.m"
                      break;
#line 185 "structure_reuse.domain.m"
                    case (MR_Integer) 1:
#line 185 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "structure_reuse.domain.m"
                      break;
#line 185 "structure_reuse.domain.m"
                  }
#line 185 "structure_reuse.domain.m"
                  break;
#line 185 "structure_reuse.domain.m"
                case (MR_Integer) 1:
#line 2743 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "structure_reuse.domain.m"
                  break;
#line 185 "structure_reuse.domain.m"
                case (MR_Integer) 2:
#line 2749 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "structure_reuse.domain.m"
                  break;
#line 185 "structure_reuse.domain.m"
              }
#line 185 "structure_reuse.domain.m"
              break;
#line 185 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 185 "structure_reuse.domain.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
                case (MR_Integer) 0:
#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 185 "structure_reuse.domain.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
                    case (MR_Integer) 0:
#line 185 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "structure_reuse.domain.m"
                      break;
#line 185 "structure_reuse.domain.m"
                    case (MR_Integer) 1:
#line 185 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 185 "structure_reuse.domain.m"
                      break;
#line 185 "structure_reuse.domain.m"
                  }
#line 185 "structure_reuse.domain.m"
                  break;
#line 185 "structure_reuse.domain.m"
                case (MR_Integer) 1:
#line 2789 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "structure_reuse.domain.m"
                  break;
#line 185 "structure_reuse.domain.m"
                case (MR_Integer) 2:
#line 2795 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "structure_reuse.domain.m"
                  break;
#line 185 "structure_reuse.domain.m"
              }
#line 185 "structure_reuse.domain.m"
              break;
#line 185 "structure_reuse.domain.m"
          }
#line 185 "structure_reuse.domain.m"
          break;
#line 185 "structure_reuse.domain.m"
        case (MR_Integer) 1:
#line 185 "structure_reuse.domain.m"
          {
#line 185 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));

#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
            switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 185 "structure_reuse.domain.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
              case (MR_Integer) 0:
#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
                switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 185 "structure_reuse.domain.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
                  case (MR_Integer) 0:
#line 2828 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "structure_reuse.domain.m"
                    break;
#line 185 "structure_reuse.domain.m"
                  case (MR_Integer) 1:
#line 2834 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "structure_reuse.domain.m"
                    break;
#line 185 "structure_reuse.domain.m"
                }
#line 185 "structure_reuse.domain.m"
                break;
#line 185 "structure_reuse.domain.m"
              case (MR_Integer) 1:
#line 185 "structure_reuse.domain.m"
                {
#line 185 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));

#line 185 "structure_reuse.domain.m"
                  {
#line 185 "structure_reuse.domain.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_24_24)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_11_11)));
#line 185 "structure_reuse.domain.m"
                    return;
                  }
#line 185 "structure_reuse.domain.m"
                }
#line 185 "structure_reuse.domain.m"
                break;
#line 185 "structure_reuse.domain.m"
              case (MR_Integer) 2:
#line 2862 "transform_hlds.ctgc.structure_reuse.domain.c"
                *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "structure_reuse.domain.m"
                break;
#line 185 "structure_reuse.domain.m"
            }
#line 185 "structure_reuse.domain.m"
          }
#line 185 "structure_reuse.domain.m"
          break;
#line 185 "structure_reuse.domain.m"
        case (MR_Integer) 2:
#line 185 "structure_reuse.domain.m"
          {
#line 185 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));

#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
            switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 185 "structure_reuse.domain.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
              case (MR_Integer) 0:
#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
                switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 185 "structure_reuse.domain.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
                  case (MR_Integer) 0:
#line 2893 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "structure_reuse.domain.m"
                    break;
#line 185 "structure_reuse.domain.m"
                  case (MR_Integer) 1:
#line 2899 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "structure_reuse.domain.m"
                    break;
#line 185 "structure_reuse.domain.m"
                }
#line 185 "structure_reuse.domain.m"
                break;
#line 185 "structure_reuse.domain.m"
              case (MR_Integer) 1:
#line 2909 "transform_hlds.ctgc.structure_reuse.domain.c"
                *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "structure_reuse.domain.m"
                break;
#line 185 "structure_reuse.domain.m"
              case (MR_Integer) 2:
#line 185 "structure_reuse.domain.m"
                {
#line 185 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));

#line 185 "structure_reuse.domain.m"
                  {
#line 185 "structure_reuse.domain.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_25_25)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_19_19)));
#line 185 "structure_reuse.domain.m"
                    return;
                  }
#line 185 "structure_reuse.domain.m"
                }
#line 185 "structure_reuse.domain.m"
                break;
#line 185 "structure_reuse.domain.m"
            }
#line 185 "structure_reuse.domain.m"
          }
#line 185 "structure_reuse.domain.m"
          break;
#line 185 "structure_reuse.domain.m"
      }
#line 185 "structure_reuse.domain.m"
  }
#line 185 "structure_reuse.domain.m"
}

#line 185 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0(
#line 185 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 185 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 185 "structure_reuse.domain.m"
{
#line 185 "structure_reuse.domain.m"
  {
#line 185 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 185 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 185 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 185 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_11 == transform_hlds__ctgc__structure_reuse__domain__CastY_12);
#line 185 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 185 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 185 "structure_reuse.domain.m"
    else
#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 185 "structure_reuse.domain.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
        case (MR_Integer) 0:
#line 185 "structure_reuse.domain.m"
#line 185 "structure_reuse.domain.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 185 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 185 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 185 "structure_reuse.domain.m"
              {
#line 185 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_3 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 185 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 185 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_4 == transform_hlds__ctgc__structure_reuse__domain__CastX_3);
#line 185 "structure_reuse.domain.m"
              }
#line 185 "structure_reuse.domain.m"
              break;
#line 185 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 185 "structure_reuse.domain.m"
              {
#line 185 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_5 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 185 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_6 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 185 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_6 == transform_hlds__ctgc__structure_reuse__domain__CastX_5);
#line 185 "structure_reuse.domain.m"
              }
#line 185 "structure_reuse.domain.m"
              break;
#line 185 "structure_reuse.domain.m"
          }
#line 185 "structure_reuse.domain.m"
          break;
#line 185 "structure_reuse.domain.m"
        case (MR_Integer) 1:
#line 185 "structure_reuse.domain.m"
          {
#line 185 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13;
#line 185 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 185 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 185 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 185 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 185 "structure_reuse.domain.m"
              {
#line 185 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 3035 "transform_hlds.ctgc.structure_reuse.domain.c"
                transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6];
#line 3037 "transform_hlds.ctgc.structure_reuse.domain.c"
                {
#line 3039 "transform_hlds.ctgc.structure_reuse.domain.c"
                  return transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_8_8)));
                }
#line 185 "structure_reuse.domain.m"
              }
#line 185 "structure_reuse.domain.m"
          }
#line 185 "structure_reuse.domain.m"
          break;
#line 185 "structure_reuse.domain.m"
        case (MR_Integer) 2:
#line 185 "structure_reuse.domain.m"
          {
#line 185 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14;
#line 185 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 185 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_10_10;

#line 185 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 185 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 185 "structure_reuse.domain.m"
              {
#line 185 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 3067 "transform_hlds.ctgc.structure_reuse.domain.c"
                transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6];
#line 3069 "transform_hlds.ctgc.structure_reuse.domain.c"
                {
#line 3071 "transform_hlds.ctgc.structure_reuse.domain.c"
                  return transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_9_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_10_10)));
                }
#line 185 "structure_reuse.domain.m"
              }
#line 185 "structure_reuse.domain.m"
          }
#line 185 "structure_reuse.domain.m"
          break;
#line 185 "structure_reuse.domain.m"
      }
#line 185 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 185 "structure_reuse.domain.m"
  }
#line 185 "structure_reuse.domain.m"
}

#line 40 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0(
#line 40 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 40 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 40 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 40 "structure_reuse.domain.m"
{
#line 40 "structure_reuse.domain.m"
  {
#line 40 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 40 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 40 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 40 "structure_reuse.domain.m"
    {
#line 40 "structure_reuse.domain.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_5)));
#line 40 "structure_reuse.domain.m"
      return;
    }
#line 40 "structure_reuse.domain.m"
  }
#line 40 "structure_reuse.domain.m"
}

#line 40 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0(
#line 40 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 40 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 40 "structure_reuse.domain.m"
{
#line 40 "structure_reuse.domain.m"
  {
#line 40 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 40 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 40 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 40 "structure_reuse.domain.m"
    {
#line 40 "structure_reuse.domain.m"
      return transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5], ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_4)));
    }
#line 40 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 40 "structure_reuse.domain.m"
  }
#line 40 "structure_reuse.domain.m"
}

#line 287 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0(
#line 287 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 287 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 287 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 287 "structure_reuse.domain.m"
{
#line 287 "structure_reuse.domain.m"
  {
#line 287 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 287 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_18 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 287 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_19 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 287 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_18 == transform_hlds__ctgc__structure_reuse__domain__CastY_19);
#line 287 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3175 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 287 "structure_reuse.domain.m"
    else
#line 287 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "structure_reuse.domain.m"
      if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 287 "structure_reuse.domain.m"
      else
#line 3187 "transform_hlds.ctgc.structure_reuse.domain.c"
        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 287 "structure_reuse.domain.m"
    else
#line 287 "structure_reuse.domain.m"
      {
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 2)));
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));

#line 287 "structure_reuse.domain.m"
        if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3202 "transform_hlds.ctgc.structure_reuse.domain.c"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 287 "structure_reuse.domain.m"
        else
#line 287 "structure_reuse.domain.m"
          {
#line 287 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 287 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 2)));
#line 287 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_16_16;

#line 287 "structure_reuse.domain.m"
            {
#line 287 "structure_reuse.domain.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[2], &transform_hlds__ctgc__structure_reuse__domain__V_16_16, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_25_25)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_13_13)));
            }
#line 3222 "transform_hlds.ctgc.structure_reuse.domain.c"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_16_16 == (MR_Integer) 0);
#line 287 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = !(transform_hlds__ctgc__structure_reuse__domain__succeeded);
#line 287 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 287 "structure_reuse.domain.m"
              *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__domain__V_16_16;
#line 287 "structure_reuse.domain.m"
            else
#line 287 "structure_reuse.domain.m"
              {
#line 287 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__V_17_17;

#line 287 "structure_reuse.domain.m"
                {
#line 287 "structure_reuse.domain.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[1], &transform_hlds__ctgc__structure_reuse__domain__V_17_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_24_24)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_14_14)));
                }
#line 3242 "transform_hlds.ctgc.structure_reuse.domain.c"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_17_17 == (MR_Integer) 0);
#line 287 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = !(transform_hlds__ctgc__structure_reuse__domain__succeeded);
#line 287 "structure_reuse.domain.m"
                if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 287 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__domain__V_17_17;
#line 287 "structure_reuse.domain.m"
                else
#line 287 "structure_reuse.domain.m"
                  {
#line 287 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__domain__V_23_23, transform_hlds__ctgc__structure_reuse__domain__V_15_15);
#line 287 "structure_reuse.domain.m"
                    return;
                  }
#line 287 "structure_reuse.domain.m"
              }
#line 287 "structure_reuse.domain.m"
          }
#line 287 "structure_reuse.domain.m"
      }
#line 287 "structure_reuse.domain.m"
  }
#line 287 "structure_reuse.domain.m"
}

#line 287 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0(
#line 287 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 287 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 287 "structure_reuse.domain.m"
{
#line 287 "structure_reuse.domain.m"
  {
#line 287 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 287 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 287 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 287 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_11 == transform_hlds__ctgc__structure_reuse__domain__CastY_12);
#line 287 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 287 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 287 "structure_reuse.domain.m"
    else
#line 287 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "structure_reuse.domain.m"
      {
#line 287 "structure_reuse.domain.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_3 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 287 "structure_reuse.domain.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 287 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_4 == transform_hlds__ctgc__structure_reuse__domain__CastX_3);
#line 287 "structure_reuse.domain.m"
      }
#line 287 "structure_reuse.domain.m"
    else
#line 287 "structure_reuse.domain.m"
      {
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13;
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14;
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 2)));
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9;
#line 287 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_10_10;

#line 287 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 287 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 287 "structure_reuse.domain.m"
          {
#line 287 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 287 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 2)));
#line 3342 "transform_hlds.ctgc.structure_reuse.domain.c"
            transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[2];
#line 3344 "transform_hlds.ctgc.structure_reuse.domain.c"
            {
#line 3346 "transform_hlds.ctgc.structure_reuse.domain.c"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_13_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_8_8)));
            }
#line 287 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 287 "structure_reuse.domain.m"
              {
#line 3353 "transform_hlds.ctgc.structure_reuse.domain.c"
                transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[1];
#line 3355 "transform_hlds.ctgc.structure_reuse.domain.c"
                {
#line 3357 "transform_hlds.ctgc.structure_reuse.domain.c"
                  transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_9_9)));
                }
#line 287 "structure_reuse.domain.m"
                if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3362 "transform_hlds.ctgc.structure_reuse.domain.c"
                  {
#line 3364 "transform_hlds.ctgc.structure_reuse.domain.c"
                    return transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0(transform_hlds__ctgc__structure_reuse__domain__V_7_7, transform_hlds__ctgc__structure_reuse__domain__V_10_10);
                  }
#line 287 "structure_reuse.domain.m"
              }
#line 287 "structure_reuse.domain.m"
          }
#line 287 "structure_reuse.domain.m"
      }
#line 287 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 287 "structure_reuse.domain.m"
  }
#line 287 "structure_reuse.domain.m"
}

#line 213 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0(
#line 213 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 213 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 213 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 213 "structure_reuse.domain.m"
{
#line 213 "structure_reuse.domain.m"
  {
#line 213 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 213 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 213 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 213 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_9 == transform_hlds__ctgc__structure_reuse__domain__CastY_10);
#line 213 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3404 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 213 "structure_reuse.domain.m"
    else
#line 213 "structure_reuse.domain.m"
      {
#line 213 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));
#line 213 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));
#line 213 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 213 "structure_reuse.domain.m"
        {
#line 213 "structure_reuse.domain.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[1], &transform_hlds__ctgc__structure_reuse__domain__V_8_8, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6)));
        }
#line 3426 "transform_hlds.ctgc.structure_reuse.domain.c"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_8_8 == (MR_Integer) 0);
#line 213 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = !(transform_hlds__ctgc__structure_reuse__domain__succeeded);
#line 213 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 213 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__domain__V_8_8;
#line 213 "structure_reuse.domain.m"
        else
#line 213 "structure_reuse.domain.m"
          {
#line 213 "structure_reuse.domain.m"
            {
#line 213 "structure_reuse.domain.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[2], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_7_7)));
#line 213 "structure_reuse.domain.m"
              return;
            }
#line 213 "structure_reuse.domain.m"
          }
#line 213 "structure_reuse.domain.m"
      }
#line 213 "structure_reuse.domain.m"
  }
#line 213 "structure_reuse.domain.m"
}

#line 213 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0(
#line 213 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 213 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 213 "structure_reuse.domain.m"
{
#line 213 "structure_reuse.domain.m"
  {
#line 213 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 213 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 213 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 213 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_7 == transform_hlds__ctgc__structure_reuse__domain__CastY_8);
#line 213 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 213 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 213 "structure_reuse.domain.m"
    else
#line 213 "structure_reuse.domain.m"
      {
#line 213 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10;
#line 213 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 213 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));

#line 3493 "transform_hlds.ctgc.structure_reuse.domain.c"
        {
#line 3495 "transform_hlds.ctgc.structure_reuse.domain.c"
          transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[1], ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_3_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_5_5)));
        }
#line 213 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 213 "structure_reuse.domain.m"
          {
#line 3502 "transform_hlds.ctgc.structure_reuse.domain.c"
            transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[2];
#line 3504 "transform_hlds.ctgc.structure_reuse.domain.c"
            {
#line 3506 "transform_hlds.ctgc.structure_reuse.domain.c"
              return transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6)));
            }
#line 213 "structure_reuse.domain.m"
          }
#line 213 "structure_reuse.domain.m"
      }
#line 213 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 213 "structure_reuse.domain.m"
  }
#line 213 "structure_reuse.domain.m"
}

#line 223 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0(
#line 223 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 223 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 223 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 223 "structure_reuse.domain.m"
{
#line 223 "structure_reuse.domain.m"
  {
#line 223 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 223 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 223 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 223 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_9 == transform_hlds__ctgc__structure_reuse__domain__CastY_10);
#line 223 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3544 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 223 "structure_reuse.domain.m"
    else
#line 223 "structure_reuse.domain.m"
      {
#line 223 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 223 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));
#line 223 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 223 "structure_reuse.domain.m"
        {
#line 223 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(&transform_hlds__ctgc__structure_reuse__domain__V_8_8, transform_hlds__ctgc__structure_reuse__domain__V_4_4, transform_hlds__ctgc__structure_reuse__domain__V_6_6);
        }
#line 3566 "transform_hlds.ctgc.structure_reuse.domain.c"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_8_8 == (MR_Integer) 0);
#line 223 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = !(transform_hlds__ctgc__structure_reuse__domain__succeeded);
#line 223 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 223 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__domain__V_8_8;
#line 223 "structure_reuse.domain.m"
        else
#line 223 "structure_reuse.domain.m"
          {
#line 223 "structure_reuse.domain.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__domain__V_13_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__V_5_5;
#line 223 "structure_reuse.domain.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__domain__V_14_14 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__V_7_7;

#line 223 "structure_reuse.domain.m"
            {
#line 223 "structure_reuse.domain.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__domain__V_13_13, transform_hlds__ctgc__structure_reuse__domain__V_14_14);
#line 223 "structure_reuse.domain.m"
              return;
            }
#line 223 "structure_reuse.domain.m"
          }
#line 223 "structure_reuse.domain.m"
      }
#line 223 "structure_reuse.domain.m"
  }
#line 223 "structure_reuse.domain.m"
}

#line 223 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0(
#line 223 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 223 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 223 "structure_reuse.domain.m"
{
#line 223 "structure_reuse.domain.m"
  {
#line 223 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 223 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 223 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 223 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_7 == transform_hlds__ctgc__structure_reuse__domain__CastY_8);
#line 223 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 223 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 223 "structure_reuse.domain.m"
    else
#line 223 "structure_reuse.domain.m"
      {
#line 223 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 223 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 223 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));

#line 3636 "transform_hlds.ctgc.structure_reuse.domain.c"
        {
#line 3638 "transform_hlds.ctgc.structure_reuse.domain.c"
          transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(transform_hlds__ctgc__structure_reuse__domain__V_3_3, transform_hlds__ctgc__structure_reuse__domain__V_5_5);
        }
#line 223 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3643 "transform_hlds.ctgc.structure_reuse.domain.c"
          transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_4_4 == transform_hlds__ctgc__structure_reuse__domain__V_6_6);
#line 223 "structure_reuse.domain.m"
      }
#line 223 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 223 "structure_reuse.domain.m"
  }
#line 223 "structure_reuse.domain.m"
}

#line 305 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(
#line 305 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 305 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 305 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 305 "structure_reuse.domain.m"
{
#line 305 "structure_reuse.domain.m"
  {
#line 305 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 305 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 305 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 305 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_10 == transform_hlds__ctgc__structure_reuse__domain__CastY_11);
#line 305 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3678 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 305 "structure_reuse.domain.m"
    else
#line 305 "structure_reuse.domain.m"
#line 305 "structure_reuse.domain.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) {
#line 305 "structure_reuse.domain.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 305 "structure_reuse.domain.m"
        case (MR_Integer) 0:
#line 305 "structure_reuse.domain.m"
#line 305 "structure_reuse.domain.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) {
#line 305 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 305 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 305 "structure_reuse.domain.m"
#line 305 "structure_reuse.domain.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 305 "structure_reuse.domain.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 305 "structure_reuse.domain.m"
                case (MR_Integer) 0:
#line 305 "structure_reuse.domain.m"
#line 305 "structure_reuse.domain.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 305 "structure_reuse.domain.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 305 "structure_reuse.domain.m"
                    case (MR_Integer) 0:
#line 305 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 305 "structure_reuse.domain.m"
                      break;
#line 305 "structure_reuse.domain.m"
                    case (MR_Integer) 1:
#line 305 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 305 "structure_reuse.domain.m"
                      break;
#line 305 "structure_reuse.domain.m"
                  }
#line 305 "structure_reuse.domain.m"
                  break;
#line 305 "structure_reuse.domain.m"
                case (MR_Integer) 1:
#line 3726 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 305 "structure_reuse.domain.m"
                  break;
#line 305 "structure_reuse.domain.m"
              }
#line 305 "structure_reuse.domain.m"
              break;
#line 305 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 305 "structure_reuse.domain.m"
#line 305 "structure_reuse.domain.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 305 "structure_reuse.domain.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 305 "structure_reuse.domain.m"
                case (MR_Integer) 0:
#line 305 "structure_reuse.domain.m"
#line 305 "structure_reuse.domain.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 305 "structure_reuse.domain.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 305 "structure_reuse.domain.m"
                    case (MR_Integer) 0:
#line 305 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 305 "structure_reuse.domain.m"
                      break;
#line 305 "structure_reuse.domain.m"
                    case (MR_Integer) 1:
#line 305 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 305 "structure_reuse.domain.m"
                      break;
#line 305 "structure_reuse.domain.m"
                  }
#line 305 "structure_reuse.domain.m"
                  break;
#line 305 "structure_reuse.domain.m"
                case (MR_Integer) 1:
#line 3766 "transform_hlds.ctgc.structure_reuse.domain.c"
                  *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 1;
#line 305 "structure_reuse.domain.m"
                  break;
#line 305 "structure_reuse.domain.m"
              }
#line 305 "structure_reuse.domain.m"
              break;
#line 305 "structure_reuse.domain.m"
          }
#line 305 "structure_reuse.domain.m"
          break;
#line 305 "structure_reuse.domain.m"
        case (MR_Integer) 1:
#line 305 "structure_reuse.domain.m"
          {
#line 305 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));

#line 305 "structure_reuse.domain.m"
#line 305 "structure_reuse.domain.m"
            switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 305 "structure_reuse.domain.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 305 "structure_reuse.domain.m"
              case (MR_Integer) 0:
#line 305 "structure_reuse.domain.m"
#line 305 "structure_reuse.domain.m"
                switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) {
#line 305 "structure_reuse.domain.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 305 "structure_reuse.domain.m"
                  case (MR_Integer) 0:
#line 3799 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 305 "structure_reuse.domain.m"
                    break;
#line 305 "structure_reuse.domain.m"
                  case (MR_Integer) 1:
#line 3805 "transform_hlds.ctgc.structure_reuse.domain.c"
                    *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 2;
#line 305 "structure_reuse.domain.m"
                    break;
#line 305 "structure_reuse.domain.m"
                }
#line 305 "structure_reuse.domain.m"
                break;
#line 305 "structure_reuse.domain.m"
              case (MR_Integer) 1:
#line 305 "structure_reuse.domain.m"
                {
#line 305 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));

#line 305 "structure_reuse.domain.m"
                  {
#line 305 "structure_reuse.domain.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_13_13)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_9_9)));
#line 305 "structure_reuse.domain.m"
                    return;
                  }
#line 305 "structure_reuse.domain.m"
                }
#line 305 "structure_reuse.domain.m"
                break;
#line 305 "structure_reuse.domain.m"
            }
#line 305 "structure_reuse.domain.m"
          }
#line 305 "structure_reuse.domain.m"
          break;
#line 305 "structure_reuse.domain.m"
      }
#line 305 "structure_reuse.domain.m"
  }
#line 305 "structure_reuse.domain.m"
}

#line 305 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(
#line 305 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 305 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 305 "structure_reuse.domain.m"
{
#line 305 "structure_reuse.domain.m"
  {
#line 305 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 305 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 305 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 305 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_9 == transform_hlds__ctgc__structure_reuse__domain__CastY_10);
#line 305 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 305 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 305 "structure_reuse.domain.m"
    else
#line 305 "structure_reuse.domain.m"
#line 305 "structure_reuse.domain.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 305 "structure_reuse.domain.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 305 "structure_reuse.domain.m"
        case (MR_Integer) 0:
#line 305 "structure_reuse.domain.m"
#line 305 "structure_reuse.domain.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 305 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 305 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 305 "structure_reuse.domain.m"
              {
#line 305 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_3 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 305 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 305 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_4 == transform_hlds__ctgc__structure_reuse__domain__CastX_3);
#line 305 "structure_reuse.domain.m"
              }
#line 305 "structure_reuse.domain.m"
              break;
#line 305 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 305 "structure_reuse.domain.m"
              {
#line 305 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_5 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 305 "structure_reuse.domain.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_6 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 305 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastY_6 == transform_hlds__ctgc__structure_reuse__domain__CastX_5);
#line 305 "structure_reuse.domain.m"
              }
#line 305 "structure_reuse.domain.m"
              break;
#line 305 "structure_reuse.domain.m"
          }
#line 305 "structure_reuse.domain.m"
          break;
#line 305 "structure_reuse.domain.m"
        case (MR_Integer) 1:
#line 305 "structure_reuse.domain.m"
          {
#line 305 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_11_11;
#line 305 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 305 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 305 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 305 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 305 "structure_reuse.domain.m"
              {
#line 305 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 3935 "transform_hlds.ctgc.structure_reuse.domain.c"
                transform_hlds__ctgc__structure_reuse__domain__TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5];
#line 3937 "transform_hlds.ctgc.structure_reuse.domain.c"
                {
#line 3939 "transform_hlds.ctgc.structure_reuse.domain.c"
                  return transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_11_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_8_8)));
                }
#line 305 "structure_reuse.domain.m"
              }
#line 305 "structure_reuse.domain.m"
          }
#line 305 "structure_reuse.domain.m"
          break;
#line 305 "structure_reuse.domain.m"
      }
#line 305 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 305 "structure_reuse.domain.m"
  }
#line 305 "structure_reuse.domain.m"
}

#line 229 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0(
#line 229 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 229 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 229 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 229 "structure_reuse.domain.m"
{
#line 229 "structure_reuse.domain.m"
  {
#line 229 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 229 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 229 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 229 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_9 == transform_hlds__ctgc__structure_reuse__domain__CastY_10);
#line 229 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 3981 "transform_hlds.ctgc.structure_reuse.domain.c"
      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "structure_reuse.domain.m"
    else
#line 229 "structure_reuse.domain.m"
      {
#line 229 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 229 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));
#line 229 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 229 "structure_reuse.domain.m"
        {
#line 229 "structure_reuse.domain.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__ctgc__structure_reuse__domain__V_8_8, transform_hlds__ctgc__structure_reuse__domain__V_4_4, transform_hlds__ctgc__structure_reuse__domain__V_6_6);
        }
#line 4003 "transform_hlds.ctgc.structure_reuse.domain.c"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__V_8_8 == (MR_Integer) 0);
#line 229 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = !(transform_hlds__ctgc__structure_reuse__domain__succeeded);
#line 229 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 229 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__domain__V_8_8;
#line 229 "structure_reuse.domain.m"
        else
#line 229 "structure_reuse.domain.m"
          {
#line 229 "structure_reuse.domain.m"
            {
#line 229 "structure_reuse.domain.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_7_7)));
#line 229 "structure_reuse.domain.m"
              return;
            }
#line 229 "structure_reuse.domain.m"
          }
#line 229 "structure_reuse.domain.m"
      }
#line 229 "structure_reuse.domain.m"
  }
#line 229 "structure_reuse.domain.m"
}

#line 229 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0(
#line 229 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 229 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 229 "structure_reuse.domain.m"
{
#line 229 "structure_reuse.domain.m"
  {
#line 229 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 229 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 229 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 229 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__CastX_7 == transform_hlds__ctgc__structure_reuse__domain__CastY_8);
#line 229 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 229 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 229 "structure_reuse.domain.m"
    else
#line 229 "structure_reuse.domain.m"
      {
#line 229 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10;
#line 229 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 229 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2, (MR_Integer) 1)));

#line 4070 "transform_hlds.ctgc.structure_reuse.domain.c"
        {
#line 4072 "transform_hlds.ctgc.structure_reuse.domain.c"
          transform_hlds__ctgc__structure_reuse__domain__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__ctgc__structure_reuse__domain__V_3_3, transform_hlds__ctgc__structure_reuse__domain__V_5_5);
        }
#line 229 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 229 "structure_reuse.domain.m"
          {
#line 4079 "transform_hlds.ctgc.structure_reuse.domain.c"
            transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4];
#line 4081 "transform_hlds.ctgc.structure_reuse.domain.c"
            {
#line 4083 "transform_hlds.ctgc.structure_reuse.domain.c"
              return transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_10_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6)));
            }
#line 229 "structure_reuse.domain.m"
          }
#line 229 "structure_reuse.domain.m"
      }
#line 229 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 229 "structure_reuse.domain.m"
  }
#line 229 "structure_reuse.domain.m"
}

#line 237 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0(
#line 237 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 237 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2,
#line 237 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 237 "structure_reuse.domain.m"
{
#line 237 "structure_reuse.domain.m"
  {
#line 237 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 237 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 237 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3;

#line 237 "structure_reuse.domain.m"
    {
#line 237 "structure_reuse.domain.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4], transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_5)));
#line 237 "structure_reuse.domain.m"
      return;
    }
#line 237 "structure_reuse.domain.m"
  }
#line 237 "structure_reuse.domain.m"
}

#line 237 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0(
#line 237 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 237 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2)
#line 237 "structure_reuse.domain.m"
{
#line 237 "structure_reuse.domain.m"
  {
#line 237 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 237 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 237 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 237 "structure_reuse.domain.m"
    {
#line 237 "structure_reuse.domain.m"
      return transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4], ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cast_HeadVar2_4)));
    }
#line 237 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 237 "structure_reuse.domain.m"
  }
#line 237 "structure_reuse.domain.m"
}

#line 996 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_p_0(
#line 996 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 996 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PredId_7,
#line 996 "structure_reuse.domain.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__domain__ProcId_8,
#line 996 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16,
#line 996 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_17)
#line 996 "structure_reuse.domain.m"
{
#line 999 "structure_reuse.domain.m"
  {
#line 999 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 999 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_10;
#line 999 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__MaybePublicReuse_11;

#line 1000 "structure_reuse.domain.m"
    {
#line 1000 "structure_reuse.domain.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__PredId_7, transform_hlds__ctgc__structure_reuse__domain__ProcId_8, &transform_hlds__ctgc__structure_reuse__domain__ProcInfo_10);
    }
#line 1001 "structure_reuse.domain.m"
    {
#line 1001 "structure_reuse.domain.m"
      hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(transform_hlds__ctgc__structure_reuse__domain__ProcInfo_10, &transform_hlds__ctgc__structure_reuse__domain__MaybePublicReuse_11);
    }
#line 1009 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__MaybePublicReuse_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "structure_reuse.domain.m"
      *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_17 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16;
#line 1009 "structure_reuse.domain.m"
    else
#line 1004 "structure_reuse.domain.m"
      {
#line 1004 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__PublicReuse_12;
#line 1004 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__Status_13;
#line 1004 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_14;
#line 1004 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__PrivateReuse_15;
#line 1004 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__MaybePublicReuse_11, (MR_Integer) 0)));
#line 1004 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_19_19;
#line 1004 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__T0_26;
#line 1004 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__T_27;
#line 943 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_29_29;
#line 945 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_31_31;
#line 945 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_30_30;

#line 1003 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__PublicReuse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, (MR_Integer) 0)));
#line 1003 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__Status_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, (MR_Integer) 1)));
#line 1005 "structure_reuse.domain.m"
        {
#line 1005 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__PPId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__PPId_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PredId_7));
#line 1005 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__PPId_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcId_8));
#line 1005 "structure_reuse.domain.m"
        }
#line 1006 "structure_reuse.domain.m"
        {
#line 1006 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__PrivateReuse_15 = transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(transform_hlds__ctgc__structure_reuse__domain__PublicReuse_12);
        }
#line 1007 "structure_reuse.domain.m"
        {
#line 1007 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_19_19, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PrivateReuse_15));
#line 1007 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_19_19, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Status_13));
#line 1007 "structure_reuse.domain.m"
        }
#line 943 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__T0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16, (MR_Integer) 0)));
#line 943 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16, (MR_Integer) 1)));
#line 944 "structure_reuse.domain.m"
        {
#line 944 "structure_reuse.domain.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PPId_14)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_19_19)), transform_hlds__ctgc__structure_reuse__domain__T0_26, &transform_hlds__ctgc__structure_reuse__domain__T_27);
        }
#line 945 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16, (MR_Integer) 0)));
#line 945 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_16, (MR_Integer) 1)));
#line 945 "structure_reuse.domain.m"
        {
#line 945 "structure_reuse.domain.m"
          MR_Word base;
#line 945 "structure_reuse.domain.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 945 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_17 = base;
#line 945 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__T_27));
#line 945 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_31_31));
#line 945 "structure_reuse.domain.m"
        }
#line 1004 "structure_reuse.domain.m"
      }
#line 999 "structure_reuse.domain.m"
  }
#line 996 "structure_reuse.domain.m"
}

#line 993 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0_1(
#line 993 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 993 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 993 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 993 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 993 "structure_reuse.domain.m"
{
#line 993 "structure_reuse.domain.m"
  {
#line 993 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 993 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_17;

#line 993 "structure_reuse.domain.m"
    {
#line 993 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_17);
    }
#line 993 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_17));
#line 993 "structure_reuse.domain.m"
  }
#line 993 "structure_reuse.domain.m"
}

#line 987 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0(
#line 987 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 987 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PredId_6,
#line 987 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_10,
#line 987 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_11)
#line 987 "structure_reuse.domain.m"
{
#line 990 "structure_reuse.domain.m"
  {
#line 990 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 990 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__PredInfo_8;
#line 990 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcIds_9;
#line 990 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_12_12;
#line 993 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseTable_11;

#line 991 "structure_reuse.domain.m"
    {
#line 991 "structure_reuse.domain.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__PredId_6, &transform_hlds__ctgc__structure_reuse__domain__PredInfo_8);
    }
#line 992 "structure_reuse.domain.m"
    {
#line 992 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__ProcIds_9 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__ctgc__structure_reuse__domain__PredInfo_8);
    }
#line 993 "structure_reuse.domain.m"
    {
#line 993 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 993 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_12_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[3]));
#line 993 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_12_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0_1));
#line 993 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 993 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_12_12, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5));
#line 993 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_12_12, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PredId_6));
#line 993 "structure_reuse.domain.m"
    }
#line 993 "structure_reuse.domain.m"
    {
#line 993 "structure_reuse.domain.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__domain__V_12_12, transform_hlds__ctgc__structure_reuse__domain__ProcIds_9, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_0_10)), &transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseTable_11);
    }
#line 993 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseTable_11 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseTable_11);
#line 990 "structure_reuse.domain.m"
  }
#line 987 "structure_reuse.domain.m"
}

#line 972 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__dump_entries_5_p_0(
#line 972 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 972 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_7,
#line 972 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)
#line 972 "structure_reuse.domain.m"
{
#line 975 "structure_reuse.domain.m"
  {
#line 975 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 975 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 975 "structure_reuse.domain.m"
    MR_String transform_hlds__ctgc__structure_reuse__domain__V_18_18;
#line 975 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain___Status_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));

#line 976 "structure_reuse.domain.m"
    {
#line 976 "structure_reuse.domain.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 977 "structure_reuse.domain.m"
    {
#line 977 "structure_reuse.domain.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__PPId_7);
    }
#line 978 "structure_reuse.domain.m"
    {
#line 978 "structure_reuse.domain.m"
      mercury__io__write_string_3_p_0((MR_String) "\t--> ");
    }
#line 979 "structure_reuse.domain.m"
    {
#line 979 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_18_18 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_f_0(transform_hlds__ctgc__structure_reuse__domain__ReuseAs_8);
    }
#line 979 "structure_reuse.domain.m"
    {
#line 979 "structure_reuse.domain.m"
      mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__domain__V_18_18);
    }
#line 980 "structure_reuse.domain.m"
    {
#line 980 "structure_reuse.domain.m"
      mercury__io__nl_2_p_0();
#line 980 "structure_reuse.domain.m"
      return;
    }
#line 975 "structure_reuse.domain.m"
  }
#line 972 "structure_reuse.domain.m"
}

#line 912 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_f_0(
#line 912 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Condition_3,
#line 912 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__StructureReuseCondition_4)
#line 912 "structure_reuse.domain.m"
{
#line 915 "structure_reuse.domain.m"
  {
#line 915 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__Condition_3)) == (MR_mktag((MR_Integer) 1)));
#line 915 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadNodes_5;
#line 915 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__LiveNodes_6;
#line 915 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_7;
#line 915 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 916 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 916 "structure_reuse.domain.m"
      {
#line 916 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__DeadNodes_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_3, (MR_Integer) 0)));
#line 916 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__LiveNodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_3, (MR_Integer) 1)));
#line 916 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__SharingAs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_3, (MR_Integer) 2)));
#line 918 "structure_reuse.domain.m"
        {
#line 918 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_8_8 = transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0(transform_hlds__ctgc__structure_reuse__domain__SharingAs_7);
        }
#line 917 "structure_reuse.domain.m"
        {
#line 917 "structure_reuse.domain.m"
          MR_Word base;
#line 917 "structure_reuse.domain.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 917 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__StructureReuseCondition_4 = base;
#line 917 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__DeadNodes_5));
#line 917 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__LiveNodes_6));
#line 917 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_8_8));
#line 917 "structure_reuse.domain.m"
        }
#line 917 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 916 "structure_reuse.domain.m"
      }
#line 915 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 915 "structure_reuse.domain.m"
  }
#line 912 "structure_reuse.domain.m"
}

#line 884 "structure_reuse.domain.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_f_0(
#line 884 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PublicReuseCondition_3)
#line 884 "structure_reuse.domain.m"
{
#line 887 "structure_reuse.domain.m"
  {
#line 887 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 887 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4;
#line 887 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadNodes_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__PublicReuseCondition_3, (MR_Integer) 0)));
#line 887 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__LiveNodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__PublicReuseCondition_3, (MR_Integer) 1)));
#line 887 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__PublicSharing_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__PublicReuseCondition_3, (MR_Integer) 2)));
#line 887 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 891 "structure_reuse.domain.m"
    {
#line 891 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_8_8 = transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0(transform_hlds__ctgc__structure_reuse__domain__PublicSharing_7);
    }
#line 890 "structure_reuse.domain.m"
    {
#line 890 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 890 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__DeadNodes_5));
#line 890 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__LiveNodes_6));
#line 890 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_8_8));
#line 890 "structure_reuse.domain.m"
    }
#line 887 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_4;
#line 887 "structure_reuse.domain.m"
  }
#line 884 "structure_reuse.domain.m"
}

#line 804 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__collect_aliased_vars_3_p_0(
#line 804 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 804 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_0_7,
#line 804 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_8)
#line 804 "structure_reuse.domain.m"
{
#line 807 "structure_reuse.domain.m"
  {
#line 807 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 807 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_15_15 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0];
#line 807 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__DataA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 807 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__DataB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 807 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__DataA_4, (MR_Integer) 0)));
#line 807 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_10_10;
#line 807 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_11_11;
#line 808 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__DataA_4, (MR_Integer) 1)));
#line 809 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14;

#line 808 "structure_reuse.domain.m"
    {
#line 808 "structure_reuse.domain.m"
      mercury__set__insert_3_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_15_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_9_9)), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_0_7, &transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_10_10);
    }
#line 809 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__DataB_5, (MR_Integer) 0)));
#line 809 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__DataB_5, (MR_Integer) 1)));
#line 809 "structure_reuse.domain.m"
    {
#line 809 "structure_reuse.domain.m"
      mercury__set__insert_3_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_15_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_11_11)), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_10_10, transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Vars_8);
#line 809 "structure_reuse.domain.m"
      return;
    }
#line 807 "structure_reuse.domain.m"
  }
#line 804 "structure_reuse.domain.m"
}

#line 788 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__there_is_a_subsumption_relation_5_p_0(
#line 788 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 788 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 788 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3,
#line 788 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__DataA_10,
#line 788 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__DataB_11,
#line 788 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 788 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr)
#line 788 "structure_reuse.domain.m"
{
#line 792 "structure_reuse.domain.m"
  while (MR_TRUE)
#line 792 "structure_reuse.domain.m"
    {
#line 792 "structure_reuse.domain.m"
      /* tailcall optimized into a loop */
#line 792 "structure_reuse.domain.m"
      {
#line 792 "structure_reuse.domain.m"
        MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 792 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__DataB0_8;
#line 792 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__DataBs_9;

#line 791 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 791 "structure_reuse.domain.m"
          {
#line 791 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__DataB0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 0)));
#line 791 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__DataBs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3, (MR_Integer) 1)));
#line 795 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__DataB_11 = transform_hlds__ctgc__structure_reuse__domain__DataB0_8;
#line 794 "structure_reuse.domain.m"
            {
#line 794 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, transform_hlds__ctgc__structure_reuse__domain__DataA_10, *transform_hlds__ctgc__structure_reuse__domain__DataB_11);
            }
#line 794 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 794 "structure_reuse.domain.m"
              {
#line 794 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__cont(transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr);
              }
#line 798 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__DataB_11 = transform_hlds__ctgc__structure_reuse__domain__DataB0_8;
#line 797 "structure_reuse.domain.m"
            {
#line 797 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, *transform_hlds__ctgc__structure_reuse__domain__DataB_11, transform_hlds__ctgc__structure_reuse__domain__DataA_10);
            }
#line 797 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 797 "structure_reuse.domain.m"
              {
#line 797 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__cont(transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr);
              }
#line 800 "structure_reuse.domain.m"
            {
#line 800 "structure_reuse.domain.m"
              /* direct tailcall eliminated */
#line 800 "structure_reuse.domain.m"
              {
#line 800 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__3__tmp_copy_3 = transform_hlds__ctgc__structure_reuse__domain__DataBs_9;

#line 800 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__3__tmp_copy_3;
#line 800 "structure_reuse.domain.m"
              }
#line 800 "structure_reuse.domain.m"
              continue;
#line 800 "structure_reuse.domain.m"
            }
#line 791 "structure_reuse.domain.m"
          }
#line 792 "structure_reuse.domain.m"
      }
#line 792 "structure_reuse.domain.m"
      break;
#line 792 "structure_reuse.domain.m"
    }
#line 788 "structure_reuse.domain.m"
}

#line 775 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_3(
#line 775 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg)
#line 775 "structure_reuse.domain.m"
{
#line 775 "structure_reuse.domain.m"
  {
#line 775 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__domain__env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg;

#line 775 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15 = ((MR_Word) (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__conv0_SharingNode_15);
#line 775 "structure_reuse.domain.m"
    {
#line 775 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_2(transform_hlds__ctgc__structure_reuse__domain__env_ptr);
#line 775 "structure_reuse.domain.m"
      return;
    }
#line 775 "structure_reuse.domain.m"
  }
#line 775 "structure_reuse.domain.m"
}

#line 775 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_4(
#line 775 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg)
#line 775 "structure_reuse.domain.m"
{
#line 775 "structure_reuse.domain.m"
  {
#line 775 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__domain__env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg;

#line 778 "structure_reuse.domain.m"
    {
#line 778 "structure_reuse.domain.m"
      MR_Word base;
#line 778 "structure_reuse.domain.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "structure_reuse.domain.m"
      *((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12) = base;
#line 778 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15));
#line 778 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherAliasedNode_16));
#line 778 "structure_reuse.domain.m"
    }
#line 778 "structure_reuse.domain.m"
    {
#line 778 "structure_reuse.domain.m"
      ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont)((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr);
#line 778 "structure_reuse.domain.m"
      return;
    }
#line 775 "structure_reuse.domain.m"
  }
#line 775 "structure_reuse.domain.m"
}

#line 775 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_2(
#line 775 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg)
#line 775 "structure_reuse.domain.m"
{
#line 775 "structure_reuse.domain.m"
  {
#line 775 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__domain__env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg;

#line 777 "structure_reuse.domain.m"
    {
#line 777 "structure_reuse.domain.m"
      MR_Word base;
#line 777 "structure_reuse.domain.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "structure_reuse.domain.m"
      (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__V_19_19 = base;
#line 777 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10));
#line 777 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11));
#line 777 "structure_reuse.domain.m"
    }
#line 776 "structure_reuse.domain.m"
    {
#line 776 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__there_is_a_subsumption_relation_5_p_0((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__V_19_19, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15, &(transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherAliasedNode_16, transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_4, transform_hlds__ctgc__structure_reuse__domain__env_ptr);
    }
#line 775 "structure_reuse.domain.m"
  }
#line 775 "structure_reuse.domain.m"
}

#line 767 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_1(
#line 767 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg)
#line 767 "structure_reuse.domain.m"
{
#line 767 "structure_reuse.domain.m"
  {
#line 767 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__domain__env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg;

#line 775 "structure_reuse.domain.m"
    {
#line 775 "structure_reuse.domain.m"
      {
#line 775 "structure_reuse.domain.m"
        mercury__list__member_2_p_1((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__TypeCtorInfo_20_20, &(transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__conv0_SharingNode_15, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNodes_14, transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_3, transform_hlds__ctgc__structure_reuse__domain__env_ptr);
      }
#line 775 "structure_reuse.domain.m"
    }
#line 780 "structure_reuse.domain.m"
    {
#line 780 "structure_reuse.domain.m"
      MR_Word transform_hlds__ctgc__structure_reuse__domain__NextNode_17;
#line 780 "structure_reuse.domain.m"
      MR_Word transform_hlds__ctgc__structure_reuse__domain__NextOtherNodes_18;

#line 780 "structure_reuse.domain.m"
      (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11)) == (MR_mktag((MR_Integer) 1)));
#line 780 "structure_reuse.domain.m"
      if ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__succeeded)
#line 780 "structure_reuse.domain.m"
        {
#line 780 "structure_reuse.domain.m"
          {
#line 780 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__NextNode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11, (MR_Integer) 0)));
#line 780 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__NextOtherNodes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11, (MR_Integer) 1)));
#line 780 "structure_reuse.domain.m"
          }
#line 781 "structure_reuse.domain.m"
          {
#line 781 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9, transform_hlds__ctgc__structure_reuse__domain__NextNode_17, transform_hlds__ctgc__structure_reuse__domain__NextOtherNodes_18, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont, (transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr);
#line 781 "structure_reuse.domain.m"
            return;
          }
#line 780 "structure_reuse.domain.m"
        }
#line 780 "structure_reuse.domain.m"
    }
#line 767 "structure_reuse.domain.m"
  }
#line 767 "structure_reuse.domain.m"
}

#line 762 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0(
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_7,
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_8,
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_9,
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Node_10,
#line 762 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__OtherNodes_11,
#line 762 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__AliasedNodes_12,
#line 762 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 762 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr)
#line 762 "structure_reuse.domain.m"
{
#line 762 "structure_reuse.domain.m"
  {
#line 762 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s transform_hlds__ctgc__structure_reuse__domain__env;

#line 762 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7 = transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_7;
#line 762 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8 = transform_hlds__ctgc__structure_reuse__domain__ProcInfo_8;
#line 762 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9 = transform_hlds__ctgc__structure_reuse__domain__SharingAs_9;
#line 762 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10 = transform_hlds__ctgc__structure_reuse__domain__Node_10;
#line 762 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11 = transform_hlds__ctgc__structure_reuse__domain__OtherNodes_11;
#line 762 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12 = transform_hlds__ctgc__structure_reuse__domain__AliasedNodes_12;
#line 762 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont = transform_hlds__ctgc__structure_reuse__domain__cont;
#line 762 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr = transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr;
#line 767 "structure_reuse.domain.m"
    {
#line 767 "structure_reuse.domain.m"
      MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingNodes0_13;

#line 768 "structure_reuse.domain.m"
      {
#line 768 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__SharingNodes0_13 = transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0((transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8, (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9, (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10);
      }
#line 4913 "transform_hlds.ctgc.structure_reuse.domain.c"
      (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 769 "structure_reuse.domain.m"
      {
#line 769 "structure_reuse.domain.m"
        mercury__list__delete_3_p_1((transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__TypeCtorInfo_20_20, transform_hlds__ctgc__structure_reuse__domain__SharingNodes0_13, ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10)), &(transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNodes_14, transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_1, &transform_hlds__ctgc__structure_reuse__domain__env);
      }
#line 767 "structure_reuse.domain.m"
    }
#line 762 "structure_reuse.domain.m"
  }
#line 762 "structure_reuse.domain.m"
}

#line 699 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1,
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2,
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LiveData_3,
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_4,
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__StaticVars_5,
#line 699 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6,
#line 699 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7)
#line 699 "structure_reuse.domain.m"
{
#line 703 "structure_reuse.domain.m"
  while (MR_TRUE)
#line 703 "structure_reuse.domain.m"
    {
#line 703 "structure_reuse.domain.m"
      /* tailcall optimized into a loop */
#line 703 "structure_reuse.domain.m"
      {
#line 703 "structure_reuse.domain.m"
        MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 703 "structure_reuse.domain.m"
        if ((transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 703 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 703 "structure_reuse.domain.m"
        else
#line 705 "structure_reuse.domain.m"
          {
#line 705 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6, (MR_Integer) 0)));
#line 705 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__Conds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6, (MR_Integer) 1)));

#line 4970 "transform_hlds.ctgc.structure_reuse.domain.c"
            if ((transform_hlds__ctgc__structure_reuse__domain__Cond_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 709 "structure_reuse.domain.m"
              {
#line 709 "structure_reuse.domain.m"
                /* direct tailcall eliminated */
#line 709 "structure_reuse.domain.m"
                {
#line 709 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__6__tmp_copy_6 = transform_hlds__ctgc__structure_reuse__domain__Conds_19;

#line 709 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__6__tmp_copy_6;
#line 709 "structure_reuse.domain.m"
                }
#line 709 "structure_reuse.domain.m"
                continue;
#line 709 "structure_reuse.domain.m"
              }
#line 4989 "transform_hlds.ctgc.structure_reuse.domain.c"
            else
#line 4991 "transform_hlds.ctgc.structure_reuse.domain.c"
              {
#line 4993 "transform_hlds.ctgc.structure_reuse.domain.c"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadNodes0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_18, (MR_Integer) 0)));
#line 4995 "transform_hlds.ctgc.structure_reuse.domain.c"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__InUseNodes_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_18, (MR_Integer) 1)));
#line 4997 "transform_hlds.ctgc.structure_reuse.domain.c"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingNodes_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_18, (MR_Integer) 2)));
#line 4999 "transform_hlds.ctgc.structure_reuse.domain.c"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadNodes_60;
#line 5001 "transform_hlds.ctgc.structure_reuse.domain.c"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__StaticDeadNodes_61;

#line 824 "structure_reuse.domain.m"
                {
#line 824 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__DeadNodes_60 = mercury__set__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, transform_hlds__ctgc__structure_reuse__domain__DeadNodes0_57);
                }
#line 827 "structure_reuse.domain.m"
                {
#line 827 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__StaticDeadNodes_61 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__StaticVars_5, transform_hlds__ctgc__structure_reuse__domain__DeadNodes_60);
                }
#line 5014 "transform_hlds.ctgc.structure_reuse.domain.c"
                if ((transform_hlds__ctgc__structure_reuse__domain__StaticDeadNodes_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5016 "transform_hlds.ctgc.structure_reuse.domain.c"
                  {
#line 5018 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__NewSharing_62;
#line 5020 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__UpdatedLiveData_63;
#line 5022 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__NotLiveResult_64;

#line 836 "structure_reuse.domain.m"
                    {
#line 836 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__NewSharing_62 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2, transform_hlds__ctgc__structure_reuse__domain__SharingNodes_59, transform_hlds__ctgc__structure_reuse__domain__SharingAs_4);
                    }
#line 838 "structure_reuse.domain.m"
                    {
#line 838 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__UpdatedLiveData_63 = transform_hlds__ctgc__livedata__livedata_add_liveness_5_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2, transform_hlds__ctgc__structure_reuse__domain__InUseNodes_58, transform_hlds__ctgc__structure_reuse__domain__NewSharing_62, transform_hlds__ctgc__structure_reuse__domain__LiveData_3);
                    }
#line 840 "structure_reuse.domain.m"
                    {
#line 840 "structure_reuse.domain.m"
                      transform_hlds__ctgc__livedata__nodes_are_not_live_5_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2, transform_hlds__ctgc__structure_reuse__domain__DeadNodes_60, transform_hlds__ctgc__structure_reuse__domain__UpdatedLiveData_63, &transform_hlds__ctgc__structure_reuse__domain__NotLiveResult_64);
                    }
#line 5040 "transform_hlds.ctgc.structure_reuse.domain.c"
                    if ((transform_hlds__ctgc__structure_reuse__domain__NotLiveResult_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5042 "transform_hlds.ctgc.structure_reuse.domain.c"
                      {
#line 844 "structure_reuse.domain.m"
                        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ctgc__structure_reuse__domain_scalar_common_9[1]);
#line 5046 "transform_hlds.ctgc.structure_reuse.domain.c"
                      }
#line 5048 "transform_hlds.ctgc.structure_reuse.domain.c"
                    else
#line 5050 "transform_hlds.ctgc.structure_reuse.domain.c"
                      {
#line 5052 "transform_hlds.ctgc.structure_reuse.domain.c"
                        MR_Word transform_hlds__ctgc__structure_reuse__domain__StillLive_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NotLiveResult_64, (MR_Integer) 0)));

#line 5055 "transform_hlds.ctgc.structure_reuse.domain.c"
                        if ((transform_hlds__ctgc__structure_reuse__domain__StillLive_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 709 "structure_reuse.domain.m"
                          {
#line 709 "structure_reuse.domain.m"
                            /* direct tailcall eliminated */
#line 709 "structure_reuse.domain.m"
                            {
#line 709 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__6__tmp_copy_6 = transform_hlds__ctgc__structure_reuse__domain__Conds_19;

#line 709 "structure_reuse.domain.m"
                              transform_hlds__ctgc__structure_reuse__domain__HeadVar__6_6 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__6__tmp_copy_6;
#line 709 "structure_reuse.domain.m"
                            }
#line 709 "structure_reuse.domain.m"
                            continue;
#line 709 "structure_reuse.domain.m"
                          }
#line 5074 "transform_hlds.ctgc.structure_reuse.domain.c"
                        else
#line 5076 "transform_hlds.ctgc.structure_reuse.domain.c"
                          {
#line 5078 "transform_hlds.ctgc.structure_reuse.domain.c"
                            MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars_68;
#line 5080 "transform_hlds.ctgc.structure_reuse.domain.c"
                            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_72_72;
#line 5082 "transform_hlds.ctgc.structure_reuse.domain.c"
                            MR_Word transform_hlds__ctgc__structure_reuse__domain__Result1_223;
#line 5084 "transform_hlds.ctgc.structure_reuse.domain.c"
                            MR_Word transform_hlds__ctgc__structure_reuse__domain__Result0_311;

#line 852 "structure_reuse.domain.m"
                            {
#line 852 "structure_reuse.domain.m"
                              transform_hlds__ctgc__structure_reuse__domain__Vars_68 = transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0(transform_hlds__ctgc__structure_reuse__domain__StillLive_65);
                            }
#line 853 "structure_reuse.domain.m"
                            {
#line 853 "structure_reuse.domain.m"
                              transform_hlds__ctgc__structure_reuse__domain__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 853 "structure_reuse.domain.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_72_72, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Vars_68));
#line 853 "structure_reuse.domain.m"
                            }
#line 853 "structure_reuse.domain.m"
                            {
#line 853 "structure_reuse.domain.m"
                              transform_hlds__ctgc__structure_reuse__domain__Result0_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 853 "structure_reuse.domain.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Result0_311, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_72_72));
#line 853 "structure_reuse.domain.m"
                            }
#line 715 "structure_reuse.domain.m"
                            {
#line 715 "structure_reuse.domain.m"
                              transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2, transform_hlds__ctgc__structure_reuse__domain__LiveData_3, transform_hlds__ctgc__structure_reuse__domain__SharingAs_4, transform_hlds__ctgc__structure_reuse__domain__StaticVars_5, transform_hlds__ctgc__structure_reuse__domain__Conds_19, &transform_hlds__ctgc__structure_reuse__domain__Result1_223);
                            }
#line 721 "structure_reuse.domain.m"
                            if ((transform_hlds__ctgc__structure_reuse__domain__Result1_223 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 724 "structure_reuse.domain.m"
                              *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = transform_hlds__ctgc__structure_reuse__domain__Result0_311;
#line 721 "structure_reuse.domain.m"
                            else
#line 721 "structure_reuse.domain.m"
                              {
#line 721 "structure_reuse.domain.m"
                                MR_Word transform_hlds__ctgc__structure_reuse__domain__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Result1_223, (MR_Integer) 0)));

#line 721 "structure_reuse.domain.m"
#line 721 "structure_reuse.domain.m"
                                switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__V_209_209)) {
#line 721 "structure_reuse.domain.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 721 "structure_reuse.domain.m"
                                  case (MR_Integer) 0:
#line 721 "structure_reuse.domain.m"
#line 721 "structure_reuse.domain.m"
                                    switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__V_209_209)) {
#line 721 "structure_reuse.domain.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 721 "structure_reuse.domain.m"
                                      case (MR_Integer) 0:
#line 725 "structure_reuse.domain.m"
                                        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = transform_hlds__ctgc__structure_reuse__domain__Result0_311;
#line 721 "structure_reuse.domain.m"
                                        break;
#line 721 "structure_reuse.domain.m"
                                      case (MR_Integer) 1:
#line 729 "structure_reuse.domain.m"
                                        {
#line 730 "structure_reuse.domain.m"
                                          {
#line 730 "structure_reuse.domain.m"
                                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
#line 730 "structure_reuse.domain.m"
                                            return;
                                          }
#line 729 "structure_reuse.domain.m"
                                        }
#line 721 "structure_reuse.domain.m"
                                        break;
#line 721 "structure_reuse.domain.m"
                                    }
#line 721 "structure_reuse.domain.m"
                                    break;
#line 721 "structure_reuse.domain.m"
                                  case (MR_Integer) 1:
#line 718 "structure_reuse.domain.m"
                                    {
#line 718 "structure_reuse.domain.m"
                                      MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_180 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0];
#line 718 "structure_reuse.domain.m"
                                      MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars1_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_209_209, (MR_Integer) 0)));
#line 718 "structure_reuse.domain.m"
                                      MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars_177;
#line 718 "structure_reuse.domain.m"
                                      MR_Word transform_hlds__ctgc__structure_reuse__domain__V_178_178;
#line 718 "structure_reuse.domain.m"
                                      MR_Word transform_hlds__ctgc__structure_reuse__domain__V_179_179;

#line 719 "structure_reuse.domain.m"
                                      {
#line 719 "structure_reuse.domain.m"
                                        transform_hlds__ctgc__structure_reuse__domain__V_178_178 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_180, transform_hlds__ctgc__structure_reuse__domain__Vars_68, transform_hlds__ctgc__structure_reuse__domain__Vars1_176);
                                      }
#line 719 "structure_reuse.domain.m"
                                      {
#line 719 "structure_reuse.domain.m"
                                        transform_hlds__ctgc__structure_reuse__domain__Vars_177 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_180, transform_hlds__ctgc__structure_reuse__domain__V_178_178);
                                      }
#line 720 "structure_reuse.domain.m"
                                      {
#line 720 "structure_reuse.domain.m"
                                        transform_hlds__ctgc__structure_reuse__domain__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 720 "structure_reuse.domain.m"
                                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_179_179, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Vars_177));
#line 720 "structure_reuse.domain.m"
                                      }
#line 720 "structure_reuse.domain.m"
                                      {
#line 720 "structure_reuse.domain.m"
                                        MR_Word base;
#line 720 "structure_reuse.domain.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 720 "structure_reuse.domain.m"
                                        *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = base;
#line 720 "structure_reuse.domain.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_179_179));
#line 720 "structure_reuse.domain.m"
                                      }
#line 718 "structure_reuse.domain.m"
                                    }
#line 721 "structure_reuse.domain.m"
                                    break;
#line 721 "structure_reuse.domain.m"
                                  case (MR_Integer) 2:
#line 729 "structure_reuse.domain.m"
                                    {
#line 730 "structure_reuse.domain.m"
                                      {
#line 730 "structure_reuse.domain.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
#line 730 "structure_reuse.domain.m"
                                        return;
                                      }
#line 729 "structure_reuse.domain.m"
                                    }
#line 721 "structure_reuse.domain.m"
                                    break;
#line 721 "structure_reuse.domain.m"
                                }
#line 721 "structure_reuse.domain.m"
                              }
#line 5229 "transform_hlds.ctgc.structure_reuse.domain.c"
                          }
#line 5231 "transform_hlds.ctgc.structure_reuse.domain.c"
                      }
#line 5233 "transform_hlds.ctgc.structure_reuse.domain.c"
                  }
#line 5235 "transform_hlds.ctgc.structure_reuse.domain.c"
                else
#line 5237 "transform_hlds.ctgc.structure_reuse.domain.c"
                  {
#line 5239 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_71_71;
#line 5241 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars_74;
#line 5243 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__Result1_124;
#line 5245 "transform_hlds.ctgc.structure_reuse.domain.c"
                    MR_Word transform_hlds__ctgc__structure_reuse__domain__Result0_175;

#line 858 "structure_reuse.domain.m"
                    {
#line 858 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__Vars_74 = transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0(transform_hlds__ctgc__structure_reuse__domain__StaticDeadNodes_61);
                    }
#line 859 "structure_reuse.domain.m"
                    {
#line 859 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 859 "structure_reuse.domain.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_71_71, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Vars_74));
#line 859 "structure_reuse.domain.m"
                    }
#line 859 "structure_reuse.domain.m"
                    {
#line 859 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__Result0_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 859 "structure_reuse.domain.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Result0_175, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_71_71));
#line 859 "structure_reuse.domain.m"
                    }
#line 715 "structure_reuse.domain.m"
                    {
#line 715 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_1, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_2, transform_hlds__ctgc__structure_reuse__domain__LiveData_3, transform_hlds__ctgc__structure_reuse__domain__SharingAs_4, transform_hlds__ctgc__structure_reuse__domain__StaticVars_5, transform_hlds__ctgc__structure_reuse__domain__Conds_19, &transform_hlds__ctgc__structure_reuse__domain__Result1_124);
                    }
#line 721 "structure_reuse.domain.m"
                    if ((transform_hlds__ctgc__structure_reuse__domain__Result1_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 724 "structure_reuse.domain.m"
                      *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = transform_hlds__ctgc__structure_reuse__domain__Result0_175;
#line 721 "structure_reuse.domain.m"
                    else
#line 721 "structure_reuse.domain.m"
                      {
#line 721 "structure_reuse.domain.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Result1_124, (MR_Integer) 0)));

#line 721 "structure_reuse.domain.m"
#line 721 "structure_reuse.domain.m"
                        switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__V_110_110)) {
#line 721 "structure_reuse.domain.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 721 "structure_reuse.domain.m"
                          case (MR_Integer) 0:
#line 721 "structure_reuse.domain.m"
#line 721 "structure_reuse.domain.m"
                            switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__V_110_110)) {
#line 721 "structure_reuse.domain.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 721 "structure_reuse.domain.m"
                              case (MR_Integer) 0:
#line 725 "structure_reuse.domain.m"
                                *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = transform_hlds__ctgc__structure_reuse__domain__Result0_175;
#line 721 "structure_reuse.domain.m"
                                break;
#line 721 "structure_reuse.domain.m"
                              case (MR_Integer) 1:
#line 729 "structure_reuse.domain.m"
                                {
#line 730 "structure_reuse.domain.m"
                                  {
#line 730 "structure_reuse.domain.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
#line 730 "structure_reuse.domain.m"
                                    return;
                                  }
#line 729 "structure_reuse.domain.m"
                                }
#line 721 "structure_reuse.domain.m"
                                break;
#line 721 "structure_reuse.domain.m"
                            }
#line 721 "structure_reuse.domain.m"
                            break;
#line 721 "structure_reuse.domain.m"
                          case (MR_Integer) 1:
#line 718 "structure_reuse.domain.m"
                            {
#line 718 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_81 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0];
#line 718 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars1_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_110_110, (MR_Integer) 0)));
#line 718 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__Vars_78;
#line 718 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__V_79_79;
#line 718 "structure_reuse.domain.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__domain__V_80_80;

#line 719 "structure_reuse.domain.m"
                              {
#line 719 "structure_reuse.domain.m"
                                transform_hlds__ctgc__structure_reuse__domain__V_79_79 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_81, transform_hlds__ctgc__structure_reuse__domain__Vars_74, transform_hlds__ctgc__structure_reuse__domain__Vars1_77);
                              }
#line 719 "structure_reuse.domain.m"
                              {
#line 719 "structure_reuse.domain.m"
                                transform_hlds__ctgc__structure_reuse__domain__Vars_78 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_44_81, transform_hlds__ctgc__structure_reuse__domain__V_79_79);
                              }
#line 720 "structure_reuse.domain.m"
                              {
#line 720 "structure_reuse.domain.m"
                                transform_hlds__ctgc__structure_reuse__domain__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 720 "structure_reuse.domain.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_80_80, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Vars_78));
#line 720 "structure_reuse.domain.m"
                              }
#line 720 "structure_reuse.domain.m"
                              {
#line 720 "structure_reuse.domain.m"
                                MR_Word base;
#line 720 "structure_reuse.domain.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 720 "structure_reuse.domain.m"
                                *transform_hlds__ctgc__structure_reuse__domain__HeadVar__7_7 = base;
#line 720 "structure_reuse.domain.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_80_80));
#line 720 "structure_reuse.domain.m"
                              }
#line 718 "structure_reuse.domain.m"
                            }
#line 721 "structure_reuse.domain.m"
                            break;
#line 721 "structure_reuse.domain.m"
                          case (MR_Integer) 2:
#line 729 "structure_reuse.domain.m"
                            {
#line 730 "structure_reuse.domain.m"
                              {
#line 730 "structure_reuse.domain.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
#line 730 "structure_reuse.domain.m"
                                return;
                              }
#line 729 "structure_reuse.domain.m"
                            }
#line 721 "structure_reuse.domain.m"
                            break;
#line 721 "structure_reuse.domain.m"
                        }
#line 721 "structure_reuse.domain.m"
                      }
#line 5390 "transform_hlds.ctgc.structure_reuse.domain.c"
                  }
#line 5392 "transform_hlds.ctgc.structure_reuse.domain.c"
              }
#line 705 "structure_reuse.domain.m"
          }
#line 703 "structure_reuse.domain.m"
      }
#line 703 "structure_reuse.domain.m"
      break;
#line 703 "structure_reuse.domain.m"
    }
#line 699 "structure_reuse.domain.m"
}

#line 621 "structure_reuse.domain.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_f_0(
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8,
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9,
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVars_10,
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LuData_11,
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_12,
#line 621 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13)
#line 621 "structure_reuse.domain.m"
{
#line 628 "structure_reuse.domain.m"
  {
#line 628 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 628 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14;

#line 628 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "structure_reuse.domain.m"
      {
#line 629 "structure_reuse.domain.m"
        {
#line 629 "structure_reuse.domain.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.domain.reuse_condition_from_called_proc_to_local_condition\'/6", (MR_String) "explicit condition expected");
        }
#line 628 "structure_reuse.domain.m"
      }
#line 628 "structure_reuse.domain.m"
    else
#line 632 "structure_reuse.domain.m"
      {
#line 632 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 632 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledDeadNodes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13, (MR_Integer) 0)));
#line 632 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledInUseNodes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13, (MR_Integer) 1)));
#line 632 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledSharingAs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__CalledCondition_13, (MR_Integer) 2)));
#line 632 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__AllDeadNodes_18;
#line 632 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__AllDeadHeadVarNodes_19;
#line 632 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_26_26;

#line 636 "structure_reuse.domain.m"
        {
#line 636 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_26_26 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_32_32, transform_hlds__ctgc__structure_reuse__domain__CalledDeadNodes_15);
        }
#line 635 "structure_reuse.domain.m"
        {
#line 635 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__AllDeadNodes_18 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, transform_hlds__ctgc__structure_reuse__domain__SharingAs_12, transform_hlds__ctgc__structure_reuse__domain__V_26_26);
        }
#line 637 "structure_reuse.domain.m"
        {
#line 637 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__AllDeadHeadVarNodes_19 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_10, transform_hlds__ctgc__structure_reuse__domain__AllDeadNodes_18);
        }
#line 642 "structure_reuse.domain.m"
        if ((transform_hlds__ctgc__structure_reuse__domain__AllDeadHeadVarNodes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 641 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "structure_reuse.domain.m"
        else
#line 643 "structure_reuse.domain.m"
          {
#line 643 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__AllInUseNodes_22;
#line 643 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__AllInUseHeadVarNodes_23;
#line 643 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__AllLocalSharing_24;
#line 643 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__AllHeadVarLocalSharing_25;
#line 643 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_27_27;
#line 643 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__V_28_28;

#line 646 "structure_reuse.domain.m"
            {
#line 646 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__V_27_27 = mercury__list__append_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_32_32, transform_hlds__ctgc__structure_reuse__domain__LuData_11, transform_hlds__ctgc__structure_reuse__domain__CalledInUseNodes_16);
            }
#line 645 "structure_reuse.domain.m"
            {
#line 645 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__AllInUseNodes_22 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, transform_hlds__ctgc__structure_reuse__domain__SharingAs_12, transform_hlds__ctgc__structure_reuse__domain__V_27_27);
            }
#line 647 "structure_reuse.domain.m"
            {
#line 647 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__AllInUseHeadVarNodes_23 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_10, transform_hlds__ctgc__structure_reuse__domain__AllInUseNodes_22);
            }
#line 651 "structure_reuse.domain.m"
            {
#line 651 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__AllLocalSharing_24 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, transform_hlds__ctgc__structure_reuse__domain__CalledSharingAs_17, transform_hlds__ctgc__structure_reuse__domain__SharingAs_12);
            }
#line 653 "structure_reuse.domain.m"
            {
#line 653 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__AllHeadVarLocalSharing_25 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_10, transform_hlds__ctgc__structure_reuse__domain__AllLocalSharing_24);
            }
#line 656 "structure_reuse.domain.m"
            {
#line 656 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__V_28_28 = mercury__set__from_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_32_32, transform_hlds__ctgc__structure_reuse__domain__AllDeadHeadVarNodes_19);
            }
#line 656 "structure_reuse.domain.m"
            {
#line 656 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 656 "structure_reuse.domain.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_28_28));
#line 656 "structure_reuse.domain.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__AllInUseHeadVarNodes_23));
#line 656 "structure_reuse.domain.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__AllHeadVarLocalSharing_25));
#line 656 "structure_reuse.domain.m"
            }
#line 643 "structure_reuse.domain.m"
          }
#line 632 "structure_reuse.domain.m"
      }
#line 628 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__LocalCondition_14;
#line 628 "structure_reuse.domain.m"
  }
#line 621 "structure_reuse.domain.m"
}

#line 560 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_p_0(
#line 560 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 560 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 560 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NewConds_8,
#line 560 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12,
#line 560 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_13)
#line 560 "structure_reuse.domain.m"
{
#line 565 "structure_reuse.domain.m"
  while (MR_TRUE)
#line 565 "structure_reuse.domain.m"
    {
#line 565 "structure_reuse.domain.m"
      /* tailcall optimized into a loop */
#line 565 "structure_reuse.domain.m"
      {
#line 565 "structure_reuse.domain.m"
        MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 565 "structure_reuse.domain.m"
        if ((transform_hlds__ctgc__structure_reuse__domain__NewConds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_13 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12;
#line 565 "structure_reuse.domain.m"
        else
#line 565 "structure_reuse.domain.m"
          {
#line 565 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NewConds_8, (MR_Integer) 0)));
#line 565 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__RemainingConds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NewConds_8, (MR_Integer) 1)));
#line 565 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14;

#line 552 "structure_reuse.domain.m"
            {
#line 552 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, transform_hlds__ctgc__structure_reuse__domain__Cond_10, transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12);
            }
#line 556 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 556 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12;
#line 556 "structure_reuse.domain.m"
            else
#line 557 "structure_reuse.domain.m"
              {
#line 557 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Cond_10));
#line 557 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12));
#line 557 "structure_reuse.domain.m"
              }
#line 567 "structure_reuse.domain.m"
            /* direct tailcall eliminated */
#line 567 "structure_reuse.domain.m"
            {
#line 567 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__NewConds__tmp_copy_8 = transform_hlds__ctgc__structure_reuse__domain__RemainingConds_11;
#line 567 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0__tmp_copy_12 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_14_14;

#line 567 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0_12 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Conds_0__tmp_copy_12;
#line 567 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__NewConds_8 = transform_hlds__ctgc__structure_reuse__domain__NewConds__tmp_copy_8;
#line 567 "structure_reuse.domain.m"
            }
#line 567 "structure_reuse.domain.m"
            continue;
#line 565 "structure_reuse.domain.m"
          }
#line 565 "structure_reuse.domain.m"
      }
#line 565 "structure_reuse.domain.m"
      break;
#line 565 "structure_reuse.domain.m"
    }
#line 560 "structure_reuse.domain.m"
}

#line 416 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_p_0(
#line 416 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 416 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 416 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Conds_7,
#line 416 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_8)
#line 416 "structure_reuse.domain.m"
{
#line 420 "structure_reuse.domain.m"
  {
#line 420 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 420 "structure_reuse.domain.m"
    {
#line 420 "structure_reuse.domain.m"
      return transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__Cond_8, transform_hlds__ctgc__structure_reuse__domain__Conds_7);
    }
#line 420 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 420 "structure_reuse.domain.m"
  }
#line 416 "structure_reuse.domain.m"
}

#line 406 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(
#line 406 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 406 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 406 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond_7,
#line 406 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4)
#line 406 "structure_reuse.domain.m"
{
#line 409 "structure_reuse.domain.m"
  while (MR_TRUE)
#line 409 "structure_reuse.domain.m"
    {
#line 409 "structure_reuse.domain.m"
      /* tailcall optimized into a loop */
#line 409 "structure_reuse.domain.m"
      {
#line 409 "structure_reuse.domain.m"
        MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 409 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond1_8;
#line 409 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__Rest_9;

#line 409 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 409 "structure_reuse.domain.m"
          {
#line 409 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__Cond1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4, (MR_Integer) 0)));
#line 409 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4, (MR_Integer) 1)));
#line 383 "structure_reuse.domain.m"
            if ((transform_hlds__ctgc__structure_reuse__domain__Cond_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 383 "structure_reuse.domain.m"
            else
#line 385 "structure_reuse.domain.m"
              {
#line 385 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_20;
#line 385 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__Nodes1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_7, (MR_Integer) 0)));
#line 385 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalUse1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_7, (MR_Integer) 1)));
#line 385 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalSharing1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond_7, (MR_Integer) 2)));
#line 385 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__Nodes2_17;
#line 385 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalUse2_18;
#line 385 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_19;

#line 386 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__Cond1_8)) == (MR_mktag((MR_Integer) 1)));
#line 386 "structure_reuse.domain.m"
                if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 386 "structure_reuse.domain.m"
                  {
#line 386 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__Nodes2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_8, (MR_Integer) 0)));
#line 386 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__LocalUse2_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_8, (MR_Integer) 1)));
#line 386 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_8, (MR_Integer) 2)));
#line 5739 "transform_hlds.ctgc.structure_reuse.domain.c"
                    transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 398 "structure_reuse.domain.m"
                    {
#line 398 "structure_reuse.domain.m"
                      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__set__subset_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_20, transform_hlds__ctgc__structure_reuse__domain__Nodes1_14, transform_hlds__ctgc__structure_reuse__domain__Nodes2_17);
                    }
#line 385 "structure_reuse.domain.m"
                    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 385 "structure_reuse.domain.m"
                      {
#line 400 "structure_reuse.domain.m"
                        {
#line 400 "structure_reuse.domain.m"
                          transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__LocalUse1_15, transform_hlds__ctgc__structure_reuse__domain__LocalUse2_18);
                        }
#line 385 "structure_reuse.domain.m"
                        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 402 "structure_reuse.domain.m"
                          {
#line 402 "structure_reuse.domain.m"
                            transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__LocalSharing1_16, transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_19);
                          }
#line 385 "structure_reuse.domain.m"
                      }
#line 386 "structure_reuse.domain.m"
                  }
#line 385 "structure_reuse.domain.m"
              }
#line 412 "structure_reuse.domain.m"
            if (!(transform_hlds__ctgc__structure_reuse__domain__succeeded))
#line 413 "structure_reuse.domain.m"
              {
#line 413 "structure_reuse.domain.m"
                /* direct tailcall eliminated */
#line 413 "structure_reuse.domain.m"
                {
#line 413 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__4__tmp_copy_4 = transform_hlds__ctgc__structure_reuse__domain__Rest_9;

#line 413 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__HeadVar__4_4 = transform_hlds__ctgc__structure_reuse__domain__HeadVar__4__tmp_copy_4;
#line 413 "structure_reuse.domain.m"
                }
#line 413 "structure_reuse.domain.m"
                continue;
#line 413 "structure_reuse.domain.m"
              }
#line 409 "structure_reuse.domain.m"
          }
#line 409 "structure_reuse.domain.m"
        return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 409 "structure_reuse.domain.m"
      }
#line 409 "structure_reuse.domain.m"
      break;
#line 409 "structure_reuse.domain.m"
    }
#line 406 "structure_reuse.domain.m"
}

#line 984 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0_1(
#line 984 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 984 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 984 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 984 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 984 "structure_reuse.domain.m"
{
#line 984 "structure_reuse.domain.m"
  {
#line 984 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 984 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_11;

#line 984 "structure_reuse.domain.m"
    {
#line 984 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_11);
    }
#line 984 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_ReuseTable_11));
#line 984 "structure_reuse.domain.m"
  }
#line 984 "structure_reuse.domain.m"
}

#line 264 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0(
#line 264 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_3)
#line 264 "structure_reuse.domain.m"
{
#line 982 "structure_reuse.domain.m"
  {
#line 982 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 982 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseTable_4;
#line 982 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_15;
#line 982 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__PredIds_5;
#line 982 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6;
#line 982 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7;
#line 982 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_13_13;
#line 982 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14;
#line 984 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__conv1_ReuseTable_4;

#line 983 "structure_reuse.domain.m"
    {
#line 983 "structure_reuse.domain.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_3, &transform_hlds__ctgc__structure_reuse__domain__PredIds_5);
    }
#line 984 "structure_reuse.domain.m"
    {
#line 984 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 984 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_6_6, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[3]));
#line 984 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_6_6, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0_1));
#line 984 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 984 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_6_6, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_3));
#line 984 "structure_reuse.domain.m"
    }
#line 5879 "transform_hlds.ctgc.structure_reuse.domain.c"
    transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 925 "structure_reuse.domain.m"
    {
#line 925 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_13_13 = mercury__map__init_0_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_15, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0);
    }
#line 925 "structure_reuse.domain.m"
    {
#line 925 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_14_14 = mercury__bimap__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_15);
    }
#line 925 "structure_reuse.domain.m"
    {
#line 925 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 925 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_7_7, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_13_13));
#line 925 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_7_7, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_14_14));
#line 925 "structure_reuse.domain.m"
    }
#line 984 "structure_reuse.domain.m"
    {
#line 984 "structure_reuse.domain.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__domain__V_6_6, transform_hlds__ctgc__structure_reuse__domain__PredIds_5, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_7_7)), &transform_hlds__ctgc__structure_reuse__domain__conv1_ReuseTable_4);
    }
#line 984 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__ReuseTable_4 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv1_ReuseTable_4);
#line 982 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__ReuseTable_4;
#line 982 "structure_reuse.domain.m"
  }
#line 264 "structure_reuse.domain.m"
}

#line 969 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0_1(
#line 969 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 969 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 969 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 969 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3,
#line 969 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_4)
#line 969 "structure_reuse.domain.m"
{
#line 969 "structure_reuse.domain.m"
  {
#line 969 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;

#line 969 "structure_reuse.domain.m"
    {
#line 969 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__dump_entries_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2));
#line 969 "structure_reuse.domain.m"
      return;
    }
#line 969 "structure_reuse.domain.m"
  }
#line 969 "structure_reuse.domain.m"
}

#line 257 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0(
#line 257 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__DoDump_6,
#line 257 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_7,
#line 257 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Table_8)
#line 257 "structure_reuse.domain.m"
{
#line 954 "structure_reuse.domain.m"
  {
#line 954 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 954 "structure_reuse.domain.m"
#line 954 "structure_reuse.domain.m"
    switch (transform_hlds__ctgc__structure_reuse__domain__DoDump_6) {
#line 954 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 954 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 954 "structure_reuse.domain.m"
        {
#line 954 "structure_reuse.domain.m"
        }
#line 954 "structure_reuse.domain.m"
        break;
#line 954 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 963 "structure_reuse.domain.m"
        {
#line 963 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseInfoMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_8, (MR_Integer) 0)));
#line 964 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_8, (MR_Integer) 1)));

#line 965 "structure_reuse.domain.m"
          {
#line 965 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__domain__ReuseInfoMap_18);
          }
#line 967 "structure_reuse.domain.m"
          if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 966 "structure_reuse.domain.m"
            {
#line 966 "structure_reuse.domain.m"
              {
#line 966 "structure_reuse.domain.m"
                mercury__io__write_string_3_p_0((MR_String) "% ReuseTable: Empty\n");
#line 966 "structure_reuse.domain.m"
                return;
              }
#line 966 "structure_reuse.domain.m"
            }
#line 967 "structure_reuse.domain.m"
          else
#line 968 "structure_reuse.domain.m"
            {
#line 968 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__V_23_23;
#line 969 "structure_reuse.domain.m"
              MR_Box transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_IO_11;

#line 968 "structure_reuse.domain.m"
              {
#line 968 "structure_reuse.domain.m"
                mercury__io__write_string_3_p_0((MR_String) "% ReuseTable: PPId --> Reuse\n");
              }
#line 969 "structure_reuse.domain.m"
              {
#line 969 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 969 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_23_23, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[2]));
#line 969 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_23_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0_1));
#line 969 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 969 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_23_23, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_7));
#line 969 "structure_reuse.domain.m"
              }
#line 969 "structure_reuse.domain.m"
              {
#line 969 "structure_reuse.domain.m"
                mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__ctgc__structure_reuse__domain__V_23_23, transform_hlds__ctgc__structure_reuse__domain__ReuseInfoMap_18, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__ctgc__structure_reuse__domain__conv0_STATE_VARIABLE_IO_11);
              }
#line 968 "structure_reuse.domain.m"
            }
#line 963 "structure_reuse.domain.m"
        }
#line 954 "structure_reuse.domain.m"
        break;
#line 954 "structure_reuse.domain.m"
    }
#line 954 "structure_reuse.domain.m"
  }
#line 257 "structure_reuse.domain.m"
}

#line 253 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_insert_reuse_version_proc_5_p_0(
#line 253 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_6,
#line 253 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NoClobbers_7,
#line 253 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NewPPId_8,
#line 253 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_12,
#line 253 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_13)
#line 253 "structure_reuse.domain.m"
{
#line 947 "structure_reuse.domain.m"
  {
#line 947 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 947 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_12, (MR_Integer) 1)));
#line 947 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__T_11;
#line 947 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14;
#line 948 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_12, (MR_Integer) 0)));
#line 950 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_17_17;
#line 950 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_18_18;

#line 949 "structure_reuse.domain.m"
    {
#line 949 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 949 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PPId_6));
#line 949 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__NoClobbers_7));
#line 949 "structure_reuse.domain.m"
    }
#line 949 "structure_reuse.domain.m"
    {
#line 949 "structure_reuse.domain.m"
      mercury__bimap__det_insert_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_14_14)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__NewPPId_8)), transform_hlds__ctgc__structure_reuse__domain__T0_10, &transform_hlds__ctgc__structure_reuse__domain__T_11);
    }
#line 950 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_12, (MR_Integer) 0)));
#line 950 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_12, (MR_Integer) 1)));
#line 950 "structure_reuse.domain.m"
    {
#line 950 "structure_reuse.domain.m"
      MR_Word base;
#line 950 "structure_reuse.domain.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 950 "structure_reuse.domain.m"
      *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_13 = base;
#line 950 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_17_17));
#line 950 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__T_11));
#line 950 "structure_reuse.domain.m"
    }
#line 947 "structure_reuse.domain.m"
  }
#line 253 "structure_reuse.domain.m"
}

#line 250 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(
#line 250 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_5,
#line 250 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status_6,
#line 250 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_10,
#line 250 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_11)
#line 250 "structure_reuse.domain.m"
{
#line 942 "structure_reuse.domain.m"
  {
#line 942 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 942 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__T0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_10, (MR_Integer) 0)));
#line 942 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__T_9;
#line 943 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_10, (MR_Integer) 1)));
#line 945 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_15_15;
#line 945 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14;

#line 944 "structure_reuse.domain.m"
    {
#line 944 "structure_reuse.domain.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PPId_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status_6)), transform_hlds__ctgc__structure_reuse__domain__T0_8, &transform_hlds__ctgc__structure_reuse__domain__T_9);
    }
#line 945 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_10, (MR_Integer) 0)));
#line 945 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_0_10, (MR_Integer) 1)));
#line 945 "structure_reuse.domain.m"
    {
#line 945 "structure_reuse.domain.m"
      MR_Word base;
#line 945 "structure_reuse.domain.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 945 "structure_reuse.domain.m"
      *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_Table_11 = base;
#line 945 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__T_9));
#line 945 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_15_15));
#line 945 "structure_reuse.domain.m"
    }
#line 942 "structure_reuse.domain.m"
  }
#line 250 "structure_reuse.domain.m"
}

#line 247 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_reverse_search_reuse_version_proc_4_p_0(
#line 247 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Table_5,
#line 247 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NewPPId_6,
#line 247 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__OrigPPId_7,
#line 247 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__NoClobbers_8)
#line 247 "structure_reuse.domain.m"
{
#line 938 "structure_reuse.domain.m"
  {
#line 938 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 938 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Key_9;
#line 936 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_5, (MR_Integer) 1)));
#line 936 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_5, (MR_Integer) 0)));
#line 936 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__conv0_Key_9;

#line 936 "structure_reuse.domain.m"
    {
#line 936 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__domain__V_10_10, &transform_hlds__ctgc__structure_reuse__domain__conv0_Key_9, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__NewPPId_6)));
    }
#line 936 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 936 "structure_reuse.domain.m"
      {
#line 936 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__Key_9 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv0_Key_9);
#line 936 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 936 "structure_reuse.domain.m"
      }
#line 938 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 937 "structure_reuse.domain.m"
      {
#line 937 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__OrigPPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Key_9, (MR_Integer) 0)));
#line 937 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__NoClobbers_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Key_9, (MR_Integer) 1)));
#line 937 "structure_reuse.domain.m"
      }
#line 938 "structure_reuse.domain.m"
    else
#line 939 "structure_reuse.domain.m"
      {
#line 939 "structure_reuse.domain.m"
        {
#line 939 "structure_reuse.domain.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_table_reverse_search_reuse_version_proc\'/4", (MR_String) "reverse search failed");
#line 939 "structure_reuse.domain.m"
          return;
        }
#line 939 "structure_reuse.domain.m"
      }
#line 938 "structure_reuse.domain.m"
  }
#line 247 "structure_reuse.domain.m"
}

#line 244 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(
#line 244 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Table_5,
#line 244 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_6,
#line 244 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NoClobbers_7,
#line 244 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__NewPPId_8)
#line 244 "structure_reuse.domain.m"
{
#line 930 "structure_reuse.domain.m"
  {
#line 930 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 930 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_5, (MR_Integer) 1)));
#line 930 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_10_10;
#line 931 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_5, (MR_Integer) 0)));
#line 931 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__conv0_NewPPId_8;

#line 931 "structure_reuse.domain.m"
    {
#line 931 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_10_10, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PPId_6));
#line 931 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_10_10, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__NoClobbers_7));
#line 931 "structure_reuse.domain.m"
    }
#line 931 "structure_reuse.domain.m"
    {
#line 931 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__bimap__search_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__domain__V_9_9, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_10_10)), &transform_hlds__ctgc__structure_reuse__domain__conv0_NewPPId_8);
    }
#line 931 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 931 "structure_reuse.domain.m"
      {
#line 931 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__NewPPId_8 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv0_NewPPId_8);
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

#line 241 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(
#line 241 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Table_4,
#line 241 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_5,
#line 241 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status_6)
#line 241 "structure_reuse.domain.m"
{
#line 927 "structure_reuse.domain.m"
  {
#line 927 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 927 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_4, (MR_Integer) 0)));
#line 928 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__Table_4, (MR_Integer) 1)));
#line 928 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseAs_Status_6;

#line 928 "structure_reuse.domain.m"
    {
#line 928 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__domain__V_7_7, ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__PPId_5)), &transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseAs_Status_6);
    }
#line 928 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 928 "structure_reuse.domain.m"
      {
#line 928 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseAs_Status_6);
#line 928 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 928 "structure_reuse.domain.m"
      }
#line 927 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 927 "structure_reuse.domain.m"
  }
#line 241 "structure_reuse.domain.m"
}

#line 239 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_init_0_f_0(void)
#line 239 "structure_reuse.domain.m"
{
#line 925 "structure_reuse.domain.m"
  {
#line 925 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 925 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 925 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_4 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 925 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_2_2;
#line 925 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_3_3;

#line 925 "structure_reuse.domain.m"
    {
#line 925 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_2_2 = mercury__map__init_0_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_4, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0);
    }
#line 925 "structure_reuse.domain.m"
    {
#line 925 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_3_3 = mercury__bimap__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_4_4);
    }
#line 925 "structure_reuse.domain.m"
    {
#line 925 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 925 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_2_2));
#line 925 "structure_reuse.domain.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_3_3));
#line 925 "structure_reuse.domain.m"
    }
#line 925 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1;
#line 925 "structure_reuse.domain.m"
  }
#line 239 "structure_reuse.domain.m"
}

#line 910 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0_1(
#line 910 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 910 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 910 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 910 "structure_reuse.domain.m"
{
#line 910 "structure_reuse.domain.m"
  {
#line 910 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 910 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 910 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_StructureReuseCondition_4;

#line 910 "structure_reuse.domain.m"
    {
#line 910 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__domain__conv0_StructureReuseCondition_4);
    }
#line 910 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 910 "structure_reuse.domain.m"
      {
#line 910 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_StructureReuseCondition_4));
#line 910 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 910 "structure_reuse.domain.m"
      }
#line 910 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 910 "structure_reuse.domain.m"
  }
#line 910 "structure_reuse.domain.m"
}

#line 204 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0(
#line 204 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_3)
#line 204 "structure_reuse.domain.m"
{
#line 895 "structure_reuse.domain.m"
  {
#line 895 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 895 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4;

#line 895 "structure_reuse.domain.m"
#line 895 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__ReuseAs_3)) {
#line 895 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 895 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 895 "structure_reuse.domain.m"
#line 895 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__ReuseAs_3)) {
#line 895 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 895 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 896 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 895 "structure_reuse.domain.m"
            break;
#line 895 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 899 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 895 "structure_reuse.domain.m"
            break;
#line 895 "structure_reuse.domain.m"
        }
#line 895 "structure_reuse.domain.m"
        break;
#line 895 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 901 "structure_reuse.domain.m"
        {
#line 901 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseConditions_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_3, (MR_Integer) 0)));
#line 901 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6;

#line 910 "structure_reuse.domain.m"
          {
#line 910 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_6_6 = mercury__list__filter_map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[7], transform_hlds__ctgc__structure_reuse__domain__ReuseConditions_5);
          }
#line 902 "structure_reuse.domain.m"
          {
#line 902 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6));
#line 902 "structure_reuse.domain.m"
          }
#line 901 "structure_reuse.domain.m"
        }
#line 895 "structure_reuse.domain.m"
        break;
#line 895 "structure_reuse.domain.m"
    }
#line 895 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_4;
#line 895 "structure_reuse.domain.m"
  }
#line 204 "structure_reuse.domain.m"
}

#line 882 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0_1(
#line 882 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 882 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 882 "structure_reuse.domain.m"
{
#line 882 "structure_reuse.domain.m"
  {
#line 882 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 882 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 882 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseCondition_4;

#line 882 "structure_reuse.domain.m"
    {
#line 882 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseCondition_4 = transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 882 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_ReuseCondition_4));
#line 882 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 882 "structure_reuse.domain.m"
  }
#line 882 "structure_reuse.domain.m"
}

#line 203 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(
#line 203 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_3)
#line 203 "structure_reuse.domain.m"
{
#line 867 "structure_reuse.domain.m"
  {
#line 867 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 867 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4;

#line 867 "structure_reuse.domain.m"
#line 867 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_3)) {
#line 867 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 867 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 867 "structure_reuse.domain.m"
#line 867 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_3)) {
#line 867 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 867 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 868 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "structure_reuse.domain.m"
            break;
#line 867 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 871 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 867 "structure_reuse.domain.m"
            break;
#line 867 "structure_reuse.domain.m"
        }
#line 867 "structure_reuse.domain.m"
        break;
#line 867 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 873 "structure_reuse.domain.m"
        {
#line 873 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__PublicReuseConditions_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseDomain_3, (MR_Integer) 0)));
#line 873 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_6_6;

#line 882 "structure_reuse.domain.m"
          {
#line 882 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_6_6 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[6], transform_hlds__ctgc__structure_reuse__domain__PublicReuseConditions_5);
          }
#line 874 "structure_reuse.domain.m"
          {
#line 874 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 874 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_6_6));
#line 874 "structure_reuse.domain.m"
          }
#line 873 "structure_reuse.domain.m"
        }
#line 867 "structure_reuse.domain.m"
        break;
#line 867 "structure_reuse.domain.m"
    }
#line 867 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4;
#line 867 "structure_reuse.domain.m"
  }
#line 203 "structure_reuse.domain.m"
}

#line 754 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_4(
#line 754 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 754 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 754 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 754 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 754 "structure_reuse.domain.m"
{
#line 754 "structure_reuse.domain.m"
  {
#line 754 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 754 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv2_STATE_VARIABLE_Vars_8;

#line 754 "structure_reuse.domain.m"
    {
#line 754 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__collect_aliased_vars_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__domain__conv2_STATE_VARIABLE_Vars_8);
    }
#line 754 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv2_STATE_VARIABLE_Vars_8));
#line 754 "structure_reuse.domain.m"
  }
#line 754 "structure_reuse.domain.m"
}

#line 753 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_2(
#line 753 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg)
#line 753 "structure_reuse.domain.m"
{
#line 753 "structure_reuse.domain.m"
  {
#line 753 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s * transform_hlds__ctgc__structure_reuse__domain__env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s *) transform_hlds__ctgc__structure_reuse__domain__env_ptr_arg;

#line 753 "structure_reuse.domain.m"
    *((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__conv1_AliasedNodes_12));
#line 753 "structure_reuse.domain.m"
    {
#line 753 "structure_reuse.domain.m"
      ((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont)((transform_hlds__ctgc__structure_reuse__domain__env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont_env_ptr);
#line 753 "structure_reuse.domain.m"
      return;
    }
#line 753 "structure_reuse.domain.m"
  }
#line 753 "structure_reuse.domain.m"
}

#line 753 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3(
#line 753 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 753 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 753 "structure_reuse.domain.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__cont,
#line 753 "structure_reuse.domain.m"
  void * transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr)
#line 753 "structure_reuse.domain.m"
{
#line 753 "structure_reuse.domain.m"
  {
#line 753 "structure_reuse.domain.m"
    struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s transform_hlds__ctgc__structure_reuse__domain__env;

#line 753 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__wrapper_arg_1 = transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1;
#line 753 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont = transform_hlds__ctgc__structure_reuse__domain__cont;
#line 753 "structure_reuse.domain.m"
    (transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont_env_ptr = transform_hlds__ctgc__structure_reuse__domain__cont_env_ptr;
#line 753 "structure_reuse.domain.m"
    {
#line 753 "structure_reuse.domain.m"
      MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;

#line 753 "structure_reuse.domain.m"
      {
#line 753 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 7))), &(transform_hlds__ctgc__structure_reuse__domain__env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__conv1_AliasedNodes_12, transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_2, &transform_hlds__ctgc__structure_reuse__domain__env);
      }
#line 753 "structure_reuse.domain.m"
    }
#line 753 "structure_reuse.domain.m"
  }
#line 753 "structure_reuse.domain.m"
}

#line 748 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_1(
#line 748 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 748 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 748 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 748 "structure_reuse.domain.m"
{
#line 748 "structure_reuse.domain.m"
  {
#line 748 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 748 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 748 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_Nodes_3;

#line 748 "structure_reuse.domain.m"
    {
#line 748 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_reusable_nodes_2_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__domain__conv0_Nodes_3);
    }
#line 748 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 748 "structure_reuse.domain.m"
      {
#line 748 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_Nodes_3));
#line 748 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 748 "structure_reuse.domain.m"
      }
#line 748 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 748 "structure_reuse.domain.m"
  }
#line 748 "structure_reuse.domain.m"
}

#line 177 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0(
#line 177 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8,
#line 177 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9,
#line 177 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LiveData_10,
#line 177 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_11,
#line 177 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__StaticVars_12,
#line 177 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_13,
#line 177 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__Result_14)
#line 177 "structure_reuse.domain.m"
{
#line 664 "structure_reuse.domain.m"
  {
#line 664 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 664 "structure_reuse.domain.m"
#line 664 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__ReuseAs_13)) {
#line 664 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 664 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 664 "structure_reuse.domain.m"
#line 664 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__ReuseAs_13)) {
#line 664 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 664 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 664 "structure_reuse.domain.m"
            {
#line 665 "structure_reuse.domain.m"
              *transform_hlds__ctgc__structure_reuse__domain__Result_14 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ctgc__structure_reuse__domain_scalar_common_9[0]);
#line 664 "structure_reuse.domain.m"
            }
#line 664 "structure_reuse.domain.m"
            break;
#line 664 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 668 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 664 "structure_reuse.domain.m"
            break;
#line 664 "structure_reuse.domain.m"
        }
#line 664 "structure_reuse.domain.m"
        break;
#line 664 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 670 "structure_reuse.domain.m"
        {
#line 670 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__Conditions_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_13, (MR_Integer) 0)));
#line 670 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__Result0_16;

#line 671 "structure_reuse.domain.m"
          {
#line 671 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, transform_hlds__ctgc__structure_reuse__domain__LiveData_10, transform_hlds__ctgc__structure_reuse__domain__SharingAs_11, transform_hlds__ctgc__structure_reuse__domain__StaticVars_12, transform_hlds__ctgc__structure_reuse__domain__Conditions_15, &transform_hlds__ctgc__structure_reuse__domain__Result0_16);
          }
#line 693 "structure_reuse.domain.m"
          if ((transform_hlds__ctgc__structure_reuse__domain__Result0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "structure_reuse.domain.m"
            {
#line 682 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_28_45;
#line 682 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__AliasedVars_17;
#line 682 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__ListNodes_28;
#line 682 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__AllNodes0_29;
#line 682 "structure_reuse.domain.m"
              MR_Word transform_hlds__ctgc__structure_reuse__domain__AllNodes_30;

#line 748 "structure_reuse.domain.m"
              {
#line 748 "structure_reuse.domain.m"
                mercury__list__filter_map_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[2], (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[4], transform_hlds__ctgc__structure_reuse__domain__Conditions_15, &transform_hlds__ctgc__structure_reuse__domain__ListNodes_28);
              }
#line 6850 "transform_hlds.ctgc.structure_reuse.domain.c"
              transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_28_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 749 "structure_reuse.domain.m"
              {
#line 749 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__AllNodes0_29 = mercury__set__union_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_28_45, transform_hlds__ctgc__structure_reuse__domain__ListNodes_28);
              }
#line 750 "structure_reuse.domain.m"
              {
#line 750 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__AllNodes_30 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_28_45, transform_hlds__ctgc__structure_reuse__domain__AllNodes0_29);
              }
#line 757 "structure_reuse.domain.m"
              if ((transform_hlds__ctgc__structure_reuse__domain__AllNodes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 758 "structure_reuse.domain.m"
                {
#line 759 "structure_reuse.domain.m"
                  {
#line 759 "structure_reuse.domain.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.aliases_between_reuse_nodes\'/5", (MR_String) "no nodes");
#line 759 "structure_reuse.domain.m"
                    return;
                  }
#line 758 "structure_reuse.domain.m"
                }
#line 757 "structure_reuse.domain.m"
              else
#line 752 "structure_reuse.domain.m"
                {
#line 752 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeInfo_33_50;
#line 752 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__Node_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__AllNodes_30, (MR_Integer) 0)));
#line 752 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__Rest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__AllNodes_30, (MR_Integer) 1)));
#line 752 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__AliasedVarsSet_33;
#line 752 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_38_38;
#line 752 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_40_40;
#line 753 "structure_reuse.domain.m"
                  MR_Box transform_hlds__ctgc__structure_reuse__domain__conv3_AliasedVarsSet_33;

#line 753 "structure_reuse.domain.m"
                  {
#line 753 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 753 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_7[0]));
#line 753 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3));
#line 753 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 753 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8));
#line 753 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9));
#line 753 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__SharingAs_11));
#line 753 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Node_31));
#line 753 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_38_38, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Rest_32));
#line 753 "structure_reuse.domain.m"
                  }
#line 6916 "transform_hlds.ctgc.structure_reuse.domain.c"
                  transform_hlds__ctgc__structure_reuse__domain__TypeInfo_33_50 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0];
#line 754 "structure_reuse.domain.m"
                  {
#line 754 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__V_40_40 = mercury__set__init_0_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_33_50);
                  }
#line 753 "structure_reuse.domain.m"
                  {
#line 753 "structure_reuse.domain.m"
                    mercury__solutions__aggregate_4_p_3((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[3], transform_hlds__ctgc__structure_reuse__domain__V_38_38, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[5], ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_40_40)), &transform_hlds__ctgc__structure_reuse__domain__conv3_AliasedVarsSet_33);
                  }
#line 753 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__AliasedVarsSet_33 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv3_AliasedVarsSet_33);
#line 756 "structure_reuse.domain.m"
                  {
#line 756 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__AliasedVars_17 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeInfo_33_50, transform_hlds__ctgc__structure_reuse__domain__AliasedVarsSet_33);
                  }
#line 752 "structure_reuse.domain.m"
                }
#line 688 "structure_reuse.domain.m"
              if ((transform_hlds__ctgc__structure_reuse__domain__AliasedVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "structure_reuse.domain.m"
                *transform_hlds__ctgc__structure_reuse__domain__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 688 "structure_reuse.domain.m"
              else
#line 689 "structure_reuse.domain.m"
                {
#line 689 "structure_reuse.domain.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__domain__V_21_21;

#line 690 "structure_reuse.domain.m"
                  {
#line 690 "structure_reuse.domain.m"
                    transform_hlds__ctgc__structure_reuse__domain__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__domain__V_21_21, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__AliasedVars_17));
#line 690 "structure_reuse.domain.m"
                  }
#line 690 "structure_reuse.domain.m"
                  {
#line 690 "structure_reuse.domain.m"
                    MR_Word base;
#line 690 "structure_reuse.domain.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "structure_reuse.domain.m"
                    *transform_hlds__ctgc__structure_reuse__domain__Result_14 = base;
#line 690 "structure_reuse.domain.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_21_21));
#line 690 "structure_reuse.domain.m"
                  }
#line 689 "structure_reuse.domain.m"
                }
#line 682 "structure_reuse.domain.m"
            }
#line 693 "structure_reuse.domain.m"
          else
#line 695 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__Result_14 = transform_hlds__ctgc__structure_reuse__domain__Result0_16;
#line 670 "structure_reuse.domain.m"
        }
#line 664 "structure_reuse.domain.m"
        break;
#line 664 "structure_reuse.domain.m"
    }
#line 664 "structure_reuse.domain.m"
  }
#line 177 "structure_reuse.domain.m"
}

#line 617 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_2(
#line 617 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 617 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 617 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2,
#line 617 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3)
#line 617 "structure_reuse.domain.m"
{
#line 617 "structure_reuse.domain.m"
  {
#line 617 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 617 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseAs_16;

#line 617 "structure_reuse.domain.m"
    {
#line 617 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseAs_16);
    }
#line 617 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv1_STATE_VARIABLE_ReuseAs_16));
#line 617 "structure_reuse.domain.m"
  }
#line 617 "structure_reuse.domain.m"
}

#line 614 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_1(
#line 614 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 614 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 614 "structure_reuse.domain.m"
{
#line 614 "structure_reuse.domain.m"
  {
#line 614 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 614 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 614 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_LocalCondition_14;

#line 614 "structure_reuse.domain.m"
    {
#line 614 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__conv0_LocalCondition_14 = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 614 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_LocalCondition_14));
#line 614 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 614 "structure_reuse.domain.m"
  }
#line 614 "structure_reuse.domain.m"
}

#line 168 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0(
#line 168 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8,
#line 168 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9,
#line 168 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVars_10,
#line 168 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LuData_11,
#line 168 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SharingAs_12,
#line 168 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__CalledReuseAs_13)
#line 168 "structure_reuse.domain.m"
{
#line 606 "structure_reuse.domain.m"
  {
#line 606 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 606 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalReuseAs_14;

#line 606 "structure_reuse.domain.m"
#line 606 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__CalledReuseAs_13)) {
#line 606 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 606 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 606 "structure_reuse.domain.m"
#line 606 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__CalledReuseAs_13)) {
#line 606 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 606 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 606 "structure_reuse.domain.m"
            {
#line 607 "structure_reuse.domain.m"
              {
#line 607 "structure_reuse.domain.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_from_called_procedure_to_local_reuse_as\'/6", (MR_String) "reuse_as does not specify any reuses");
              }
#line 606 "structure_reuse.domain.m"
            }
#line 606 "structure_reuse.domain.m"
            break;
#line 606 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 609 "structure_reuse.domain.m"
            {
#line 610 "structure_reuse.domain.m"
              {
#line 610 "structure_reuse.domain.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.domain", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_from_called_procedure_to_local_reuse_as\'/6", (MR_String) "reuse_as is unconditional");
              }
#line 609 "structure_reuse.domain.m"
            }
#line 606 "structure_reuse.domain.m"
            break;
#line 606 "structure_reuse.domain.m"
        }
#line 606 "structure_reuse.domain.m"
        break;
#line 606 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 612 "structure_reuse.domain.m"
        {
#line 612 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_26_26 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
#line 612 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ConditionsCaller_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__CalledReuseAs_13, (MR_Integer) 0)));
#line 612 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ConditionsCallee_16;
#line 612 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_17_17;
#line 612 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_18_18;
#line 617 "structure_reuse.domain.m"
          MR_Box transform_hlds__ctgc__structure_reuse__domain__conv2_LocalReuseAs_14;

#line 614 "structure_reuse.domain.m"
          {
#line 614 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 614 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_6[0]));
#line 614 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_1));
#line 614 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 614 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8));
#line 614 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9));
#line 614 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__HeadVars_10));
#line 614 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__LuData_11));
#line 614 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_17_17, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__SharingAs_12));
#line 614 "structure_reuse.domain.m"
          }
#line 614 "structure_reuse.domain.m"
          {
#line 614 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ConditionsCallee_16 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_26_26, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_26_26, transform_hlds__ctgc__structure_reuse__domain__V_17_17, transform_hlds__ctgc__structure_reuse__domain__ConditionsCaller_15);
          }
#line 617 "structure_reuse.domain.m"
          {
#line 617 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[1]));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_2));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8));
#line 617 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_18_18, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9));
#line 617 "structure_reuse.domain.m"
          }
#line 617 "structure_reuse.domain.m"
          {
#line 617 "structure_reuse.domain.m"
            mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_26_26, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0, transform_hlds__ctgc__structure_reuse__domain__V_18_18, transform_hlds__ctgc__structure_reuse__domain__ConditionsCallee_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__ctgc__structure_reuse__domain__conv2_LocalReuseAs_14);
          }
#line 617 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__LocalReuseAs_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__conv2_LocalReuseAs_14);
#line 612 "structure_reuse.domain.m"
        }
#line 606 "structure_reuse.domain.m"
        break;
#line 606 "structure_reuse.domain.m"
    }
#line 606 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__LocalReuseAs_14;
#line 606 "structure_reuse.domain.m"
  }
#line 168 "structure_reuse.domain.m"
}

#line 152 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_f_0(
#line 152 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 152 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 152 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Reuse1_8,
#line 152 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Reuse2_9)
#line 152 "structure_reuse.domain.m"
{
#line 601 "structure_reuse.domain.m"
  {
#line 601 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 601 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Reuse_10;

#line 601 "structure_reuse.domain.m"
    {
#line 601 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, transform_hlds__ctgc__structure_reuse__domain__Reuse1_8, transform_hlds__ctgc__structure_reuse__domain__Reuse2_9, &transform_hlds__ctgc__structure_reuse__domain__Reuse_10);
    }
#line 601 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__Reuse_10;
#line 601 "structure_reuse.domain.m"
  }
#line 152 "structure_reuse.domain.m"
}

#line 150 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(
#line 150 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 150 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 150 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8,
#line 150 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13,
#line 150 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14)
#line 150 "structure_reuse.domain.m"
{
#line 575 "structure_reuse.domain.m"
  {
#line 575 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 575 "structure_reuse.domain.m"
#line 575 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8)) {
#line 575 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 575 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 575 "structure_reuse.domain.m"
#line 575 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8)) {
#line 575 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 575 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 575 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13;
#line 575 "structure_reuse.domain.m"
            break;
#line 575 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 580 "structure_reuse.domain.m"
            {
#line 578 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "structure_reuse.domain.m"
              if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 579 "structure_reuse.domain.m"
                *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 580 "structure_reuse.domain.m"
              else
#line 580 "structure_reuse.domain.m"
                *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13;
#line 580 "structure_reuse.domain.m"
            }
#line 575 "structure_reuse.domain.m"
            break;
#line 575 "structure_reuse.domain.m"
        }
#line 575 "structure_reuse.domain.m"
        break;
#line 575 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 584 "structure_reuse.domain.m"
        {
#line 584 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__NewConditions_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8, (MR_Integer) 0)));

#line 588 "structure_reuse.domain.m"
#line 588 "structure_reuse.domain.m"
          switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13)) {
#line 588 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 588 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 588 "structure_reuse.domain.m"
#line 588 "structure_reuse.domain.m"
              switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13)) {
#line 588 "structure_reuse.domain.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 588 "structure_reuse.domain.m"
                case (MR_Integer) 0:
#line 587 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8;
#line 588 "structure_reuse.domain.m"
                  break;
#line 588 "structure_reuse.domain.m"
                case (MR_Integer) 1:
#line 590 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = transform_hlds__ctgc__structure_reuse__domain__NewReuseAs_8;
#line 588 "structure_reuse.domain.m"
                  break;
#line 588 "structure_reuse.domain.m"
              }
#line 588 "structure_reuse.domain.m"
              break;
#line 588 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 592 "structure_reuse.domain.m"
              {
#line 592 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__Conditions_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_13, (MR_Integer) 0)));
#line 592 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__AllConditions_12;

#line 593 "structure_reuse.domain.m"
                {
#line 593 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, transform_hlds__ctgc__structure_reuse__domain__NewConditions_10, transform_hlds__ctgc__structure_reuse__domain__Conditions_11, &transform_hlds__ctgc__structure_reuse__domain__AllConditions_12);
                }
#line 595 "structure_reuse.domain.m"
                {
#line 595 "structure_reuse.domain.m"
                  MR_Word base;
#line 595 "structure_reuse.domain.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 595 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_14 = base;
#line 595 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__AllConditions_12));
#line 595 "structure_reuse.domain.m"
                }
#line 592 "structure_reuse.domain.m"
              }
#line 588 "structure_reuse.domain.m"
              break;
#line 588 "structure_reuse.domain.m"
          }
#line 584 "structure_reuse.domain.m"
        }
#line 575 "structure_reuse.domain.m"
        break;
#line 575 "structure_reuse.domain.m"
    }
#line 575 "structure_reuse.domain.m"
  }
#line 150 "structure_reuse.domain.m"
}

#line 145 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(
#line 145 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_5,
#line 145 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_6)
#line 145 "structure_reuse.domain.m"
{
#line 539 "structure_reuse.domain.m"
  {
#line 539 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 539 "structure_reuse.domain.m"
#line 539 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_5)) {
#line 539 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 539 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 539 "structure_reuse.domain.m"
#line 539 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_5)) {
#line 539 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 539 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 540 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 539 "structure_reuse.domain.m"
            break;
#line 539 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 542 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_6 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_5;
#line 539 "structure_reuse.domain.m"
            break;
#line 539 "structure_reuse.domain.m"
        }
#line 539 "structure_reuse.domain.m"
        break;
#line 539 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 544 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_6 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_5;
#line 539 "structure_reuse.domain.m"
        break;
#line 539 "structure_reuse.domain.m"
    }
#line 539 "structure_reuse.domain.m"
  }
#line 145 "structure_reuse.domain.m"
}

#line 139 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_p_0(
#line 139 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6,
#line 139 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7,
#line 139 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Condition_8,
#line 139 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15,
#line 139 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16)
#line 139 "structure_reuse.domain.m"
{
#line 515 "structure_reuse.domain.m"
  {
#line 515 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 515 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__Condition_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "structure_reuse.domain.m"
      {
#line 516 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 517 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 518 "structure_reuse.domain.m"
        else
#line 518 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16 = transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15;
#line 518 "structure_reuse.domain.m"
      }
#line 515 "structure_reuse.domain.m"
    else
#line 526 "structure_reuse.domain.m"
#line 526 "structure_reuse.domain.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15)) {
#line 526 "structure_reuse.domain.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 526 "structure_reuse.domain.m"
        case (MR_Integer) 0:
#line 526 "structure_reuse.domain.m"
#line 526 "structure_reuse.domain.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15)) {
#line 526 "structure_reuse.domain.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 526 "structure_reuse.domain.m"
            case (MR_Integer) 0:
#line 524 "structure_reuse.domain.m"
              {
#line 524 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__V_22_22;

#line 525 "structure_reuse.domain.m"
                {
#line 525 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_22_22, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Condition_8));
#line 525 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "structure_reuse.domain.m"
                }
#line 525 "structure_reuse.domain.m"
                {
#line 525 "structure_reuse.domain.m"
                  MR_Word base;
#line 525 "structure_reuse.domain.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "structure_reuse.domain.m"
                  *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16 = base;
#line 525 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_22_22));
#line 525 "structure_reuse.domain.m"
                }
#line 524 "structure_reuse.domain.m"
              }
#line 526 "structure_reuse.domain.m"
              break;
#line 526 "structure_reuse.domain.m"
            case (MR_Integer) 1:
#line 527 "structure_reuse.domain.m"
              {
#line 527 "structure_reuse.domain.m"
                MR_Word transform_hlds__ctgc__structure_reuse__domain__V_19_19;

#line 528 "structure_reuse.domain.m"
                {
#line 528 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_19_19, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Condition_8));
#line 528 "structure_reuse.domain.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_19_19));
#line 528 "structure_reuse.domain.m"
                }
#line 527 "structure_reuse.domain.m"
              }
#line 526 "structure_reuse.domain.m"
              break;
#line 526 "structure_reuse.domain.m"
          }
#line 526 "structure_reuse.domain.m"
          break;
#line 526 "structure_reuse.domain.m"
        case (MR_Integer) 1:
#line 530 "structure_reuse.domain.m"
          {
#line 530 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__Conditions_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_0_15, (MR_Integer) 0)));
#line 530 "structure_reuse.domain.m"
            MR_Word transform_hlds__ctgc__structure_reuse__domain__NewConditions_14;

#line 552 "structure_reuse.domain.m"
            {
#line 552 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_7, transform_hlds__ctgc__structure_reuse__domain__Condition_8, transform_hlds__ctgc__structure_reuse__domain__Conditions_13);
            }
#line 556 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 556 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__NewConditions_14 = transform_hlds__ctgc__structure_reuse__domain__Conditions_13;
#line 556 "structure_reuse.domain.m"
            else
#line 557 "structure_reuse.domain.m"
              {
#line 557 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__NewConditions_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NewConditions_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Condition_8));
#line 557 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__NewConditions_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Conditions_13));
#line 557 "structure_reuse.domain.m"
              }
#line 533 "structure_reuse.domain.m"
            {
#line 533 "structure_reuse.domain.m"
              MR_Word base;
#line 533 "structure_reuse.domain.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 533 "structure_reuse.domain.m"
              *transform_hlds__ctgc__structure_reuse__domain__STATE_VARIABLE_ReuseAs_16 = base;
#line 533 "structure_reuse.domain.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__NewConditions_14));
#line 533 "structure_reuse.domain.m"
            }
#line 530 "structure_reuse.domain.m"
          }
#line 526 "structure_reuse.domain.m"
          break;
#line 526 "structure_reuse.domain.m"
      }
#line 515 "structure_reuse.domain.m"
  }
#line 139 "structure_reuse.domain.m"
}

#line 508 "structure_reuse.domain.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0_1(
#line 508 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 508 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1,
#line 508 "structure_reuse.domain.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2)
#line 508 "structure_reuse.domain.m"
{
#line 508 "structure_reuse.domain.m"
  {
#line 508 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 508 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_RenamedCondition_8;

#line 508 "structure_reuse.domain.m"
    {
#line 508 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__domain__conv0_RenamedCondition_8);
    }
#line 508 "structure_reuse.domain.m"
    *transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_RenamedCondition_8));
#line 508 "structure_reuse.domain.m"
  }
#line 508 "structure_reuse.domain.m"
}

#line 132 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0(
#line 132 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__MapVar_5,
#line 132 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeSubst_6,
#line 132 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_7,
#line 132 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__RenamedReuseAs_8)
#line 132 "structure_reuse.domain.m"
{
#line 501 "structure_reuse.domain.m"
  {
#line 501 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 501 "structure_reuse.domain.m"
#line 501 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__ReuseAs_7)) {
#line 501 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 501 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 501 "structure_reuse.domain.m"
#line 501 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__ReuseAs_7)) {
#line 501 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 501 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 502 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__RenamedReuseAs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "structure_reuse.domain.m"
            break;
#line 501 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 505 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__RenamedReuseAs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 501 "structure_reuse.domain.m"
            break;
#line 501 "structure_reuse.domain.m"
        }
#line 501 "structure_reuse.domain.m"
        break;
#line 501 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 507 "structure_reuse.domain.m"
        {
#line 507 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_14_14;
#line 507 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseConditions_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_7, (MR_Integer) 0)));
#line 507 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__RenamedReuseConditions_10;
#line 507 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_11_11;

#line 508 "structure_reuse.domain.m"
          {
#line 508 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 508 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_11_11, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[2]));
#line 508 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_11_11, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0_1));
#line 508 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 508 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_11_11, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__MapVar_5));
#line 508 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_11_11, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__TypeSubst_6));
#line 508 "structure_reuse.domain.m"
          }
#line 7700 "transform_hlds.ctgc.structure_reuse.domain.c"
          transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_14_14 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
#line 508 "structure_reuse.domain.m"
          {
#line 508 "structure_reuse.domain.m"
            mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_14_14, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_14_14, transform_hlds__ctgc__structure_reuse__domain__V_11_11, transform_hlds__ctgc__structure_reuse__domain__ReuseConditions_9, &transform_hlds__ctgc__structure_reuse__domain__RenamedReuseConditions_10);
          }
#line 510 "structure_reuse.domain.m"
          {
#line 510 "structure_reuse.domain.m"
            MR_Word base;
#line 510 "structure_reuse.domain.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 510 "structure_reuse.domain.m"
            *transform_hlds__ctgc__structure_reuse__domain__RenamedReuseAs_8 = base;
#line 510 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__RenamedReuseConditions_10));
#line 510 "structure_reuse.domain.m"
          }
#line 507 "structure_reuse.domain.m"
        }
#line 501 "structure_reuse.domain.m"
        break;
#line 501 "structure_reuse.domain.m"
    }
#line 501 "structure_reuse.domain.m"
  }
#line 132 "structure_reuse.domain.m"
}

#line 125 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_8_p_0(
#line 125 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_9,
#line 125 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__PPId_10,
#line 125 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ActualArgs_11,
#line 125 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ActualTypes_12,
#line 125 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__CallerTypeVarSet_13,
#line 125 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__CallerHeadTypeParams_14,
#line 125 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__FormalReuse_15,
#line 125 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__ActualReuse_16)
#line 125 "structure_reuse.domain.m"
{
#line 493 "structure_reuse.domain.m"
  {
#line 493 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 493 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__VarRenaming_17;
#line 493 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeSubst_18;

#line 494 "structure_reuse.domain.m"
    {
#line 494 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__VarRenaming_17 = transform_hlds__ctgc__util__get_variable_renaming_3_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__domain__PPId_10, transform_hlds__ctgc__structure_reuse__domain__ActualArgs_11);
    }
#line 495 "structure_reuse.domain.m"
    {
#line 495 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__TypeSubst_18 = transform_hlds__ctgc__util__get_type_substitution_5_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__domain__PPId_10, transform_hlds__ctgc__structure_reuse__domain__ActualTypes_12, transform_hlds__ctgc__structure_reuse__domain__CallerTypeVarSet_13, transform_hlds__ctgc__structure_reuse__domain__CallerHeadTypeParams_14);
    }
#line 497 "structure_reuse.domain.m"
    {
#line 497 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0(transform_hlds__ctgc__structure_reuse__domain__VarRenaming_17, transform_hlds__ctgc__structure_reuse__domain__TypeSubst_18, transform_hlds__ctgc__structure_reuse__domain__FormalReuse_15, transform_hlds__ctgc__structure_reuse__domain__ActualReuse_16);
#line 497 "structure_reuse.domain.m"
      return;
    }
#line 493 "structure_reuse.domain.m"
  }
#line 125 "structure_reuse.domain.m"
}

#line 113 "structure_reuse.domain.m"
MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(
#line 113 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 113 "structure_reuse.domain.m"
{
#line 488 "structure_reuse.domain.m"
  {
#line 488 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 488 "structure_reuse.domain.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 488 "structure_reuse.domain.m"
#line 488 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 488 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 488 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 488 "structure_reuse.domain.m"
#line 488 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 488 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 488 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 488 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = (MR_Integer) 0;
#line 488 "structure_reuse.domain.m"
            break;
#line 488 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 489 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = (MR_Integer) 0;
#line 488 "structure_reuse.domain.m"
            break;
#line 488 "structure_reuse.domain.m"
        }
#line 488 "structure_reuse.domain.m"
        break;
#line 488 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 490 "structure_reuse.domain.m"
        {
#line 490 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__Conds_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));

#line 490 "structure_reuse.domain.m"
          {
#line 490 "structure_reuse.domain.m"
            return transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, transform_hlds__ctgc__structure_reuse__domain__Conds_3);
          }
#line 490 "structure_reuse.domain.m"
        }
#line 488 "structure_reuse.domain.m"
        break;
#line 488 "structure_reuse.domain.m"
    }
#line 488 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 488 "structure_reuse.domain.m"
  }
#line 113 "structure_reuse.domain.m"
}

#line 112 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(
#line 112 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 112 "structure_reuse.domain.m"
{
#line 486 "structure_reuse.domain.m"
  {
#line 486 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 486 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_2_2;

#line 486 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 486 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 486 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 486 "structure_reuse.domain.m"
  }
#line 112 "structure_reuse.domain.m"
}

#line 111 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(
#line 111 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 111 "structure_reuse.domain.m"
{
#line 485 "structure_reuse.domain.m"
  {
#line 485 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));

#line 485 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 485 "structure_reuse.domain.m"
  }
#line 111 "structure_reuse.domain.m"
}

#line 110 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(
#line 110 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 110 "structure_reuse.domain.m"
{
#line 484 "structure_reuse.domain.m"
  {
#line 484 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 484 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 484 "structure_reuse.domain.m"
  }
#line 110 "structure_reuse.domain.m"
}

#line 104 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_and_status_subsumed_by_4_p_0(
#line 104 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 104 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 104 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status1_7,
#line 104 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status2_8)
#line 104 "structure_reuse.domain.m"
{
#line 478 "structure_reuse.domain.m"
  {
#line 478 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 478 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Reuse1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status1_7, (MR_Integer) 0)));
#line 478 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Reuse2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status2_8, (MR_Integer) 0)));
#line 479 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain___Status1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status1_7, (MR_Integer) 1)));
#line 480 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain___Status2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_Status2_8, (MR_Integer) 1)));

#line 481 "structure_reuse.domain.m"
    {
#line 481 "structure_reuse.domain.m"
      return transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__Reuse1_9, transform_hlds__ctgc__structure_reuse__domain__Reuse2_11);
    }
#line 478 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 478 "structure_reuse.domain.m"
  }
#line 104 "structure_reuse.domain.m"
}

#line 471 "structure_reuse.domain.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0_1(
#line 471 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 471 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 471 "structure_reuse.domain.m"
{
#line 471 "structure_reuse.domain.m"
  {
#line 471 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 471 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;

#line 471 "structure_reuse.domain.m"
    {
#line 471 "structure_reuse.domain.m"
      return transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 471 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 471 "structure_reuse.domain.m"
  }
#line 471 "structure_reuse.domain.m"
}

#line 101 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0(
#line 101 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 101 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 101 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__FirstReuseAs_7,
#line 101 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__SecondReuseAs_8)
#line 101 "structure_reuse.domain.m"
{
#line 458 "structure_reuse.domain.m"
  {
#line 458 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 458 "structure_reuse.domain.m"
#line 458 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__FirstReuseAs_7)) {
#line 458 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 458 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 458 "structure_reuse.domain.m"
#line 458 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__FirstReuseAs_7)) {
#line 458 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 458 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 458 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 458 "structure_reuse.domain.m"
            break;
#line 458 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 458 "structure_reuse.domain.m"
            if ((transform_hlds__ctgc__structure_reuse__domain__SecondReuseAs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 466 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 458 "structure_reuse.domain.m"
            else
#line 458 "structure_reuse.domain.m"
            if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__SecondReuseAs_8)) == (MR_mktag((MR_Integer) 1))))
#line 460 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 458 "structure_reuse.domain.m"
            else
#line 458 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_FALSE;
#line 458 "structure_reuse.domain.m"
            break;
#line 458 "structure_reuse.domain.m"
        }
#line 458 "structure_reuse.domain.m"
        break;
#line 458 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 469 "structure_reuse.domain.m"
        {
#line 469 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_16_16;
#line 469 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseConditionsFirst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__FirstReuseAs_7, (MR_Integer) 0)));
#line 469 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseConditionsSecond_11;
#line 469 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__NotSubsumed_13;
#line 469 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_14_14;
#line 471 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_12_12;

#line 470 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__SecondReuseAs_8)) == (MR_mktag((MR_Integer) 1)));
#line 470 "structure_reuse.domain.m"
          if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 470 "structure_reuse.domain.m"
            {
#line 470 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__ReuseConditionsSecond_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__SecondReuseAs_8, (MR_Integer) 0)));
#line 8061 "transform_hlds.ctgc.structure_reuse.domain.c"
              transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
#line 471 "structure_reuse.domain.m"
              {
#line 471 "structure_reuse.domain.m"
                transform_hlds__ctgc__structure_reuse__domain__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 471 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[1]));
#line 471 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0_1));
#line 471 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 471 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5));
#line 471 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6));
#line 471 "structure_reuse.domain.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_14_14, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ReuseConditionsSecond_11));
#line 471 "structure_reuse.domain.m"
              }
#line 471 "structure_reuse.domain.m"
              {
#line 471 "structure_reuse.domain.m"
                mercury__list__takewhile_4_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_16_16, transform_hlds__ctgc__structure_reuse__domain__V_14_14, transform_hlds__ctgc__structure_reuse__domain__ReuseConditionsFirst_10, &transform_hlds__ctgc__structure_reuse__domain__V_12_12, &transform_hlds__ctgc__structure_reuse__domain__NotSubsumed_13);
              }
#line 474 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = (transform_hlds__ctgc__structure_reuse__domain__NotSubsumed_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "structure_reuse.domain.m"
            }
#line 469 "structure_reuse.domain.m"
        }
#line 458 "structure_reuse.domain.m"
        break;
#line 458 "structure_reuse.domain.m"
    }
#line 458 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 458 "structure_reuse.domain.m"
  }
#line 101 "structure_reuse.domain.m"
}

#line 94 "structure_reuse.domain.m"
MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_f_0(
#line 94 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 94 "structure_reuse.domain.m"
{
#line 451 "structure_reuse.domain.m"
  {
#line 451 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 451 "structure_reuse.domain.m"
    MR_String transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;

#line 451 "structure_reuse.domain.m"
#line 451 "structure_reuse.domain.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 451 "structure_reuse.domain.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 451 "structure_reuse.domain.m"
      case (MR_Integer) 0:
#line 451 "structure_reuse.domain.m"
#line 451 "structure_reuse.domain.m"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) {
#line 451 "structure_reuse.domain.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 451 "structure_reuse.domain.m"
          case (MR_Integer) 0:
#line 451 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = (MR_String) "no_reuse";
#line 451 "structure_reuse.domain.m"
            break;
#line 451 "structure_reuse.domain.m"
          case (MR_Integer) 1:
#line 452 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = (MR_String) "uncond";
#line 451 "structure_reuse.domain.m"
            break;
#line 451 "structure_reuse.domain.m"
        }
#line 451 "structure_reuse.domain.m"
        break;
#line 451 "structure_reuse.domain.m"
      case (MR_Integer) 1:
#line 453 "structure_reuse.domain.m"
        {
#line 453 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__Conds_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 453 "structure_reuse.domain.m"
          MR_String transform_hlds__ctgc__structure_reuse__domain__Size_4;
#line 453 "structure_reuse.domain.m"
          MR_String transform_hlds__ctgc__structure_reuse__domain__V_6_6;
#line 453 "structure_reuse.domain.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__domain__V_8_8;

#line 454 "structure_reuse.domain.m"
          {
#line 454 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_8_8 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, transform_hlds__ctgc__structure_reuse__domain__Conds_3);
          }
#line 454 "structure_reuse.domain.m"
          {
#line 454 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__Size_4 = mercury__string__int_to_string_1_f_0(transform_hlds__ctgc__structure_reuse__domain__V_8_8);
          }
#line 453 "structure_reuse.domain.m"
          {
#line 453 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_6_6 = mercury__string__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__domain__Size_4, (MR_String) ")");
          }
#line 453 "structure_reuse.domain.m"
          {
#line 453 "structure_reuse.domain.m"
            return transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "cond(", transform_hlds__ctgc__structure_reuse__domain__V_6_6);
          }
#line 453 "structure_reuse.domain.m"
        }
#line 451 "structure_reuse.domain.m"
        break;
#line 451 "structure_reuse.domain.m"
    }
#line 451 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__HeadVar__2_2;
#line 451 "structure_reuse.domain.m"
  }
#line 94 "structure_reuse.domain.m"
}

#line 90 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_f_0(
#line 90 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3)
#line 90 "structure_reuse.domain.m"
{
#line 447 "structure_reuse.domain.m"
  {
#line 447 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3)) == (MR_mktag((MR_Integer) 1)));
#line 447 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4;
#line 377 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_7_7;
#line 377 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_8_8;
#line 377 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_9_9;

#line 377 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 377 "structure_reuse.domain.m"
      {
#line 377 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3, (MR_Integer) 0)));
#line 377 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3, (MR_Integer) 1)));
#line 377 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3, (MR_Integer) 2)));
#line 446 "structure_reuse.domain.m"
        {
#line 446 "structure_reuse.domain.m"
          MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5;

#line 446 "structure_reuse.domain.m"
          {
#line 446 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_5_5, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ReuseCondition_3));
#line 446 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "structure_reuse.domain.m"
          }
#line 446 "structure_reuse.domain.m"
          {
#line 446 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "structure_reuse.domain.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_5_5));
#line 446 "structure_reuse.domain.m"
          }
#line 446 "structure_reuse.domain.m"
        }
#line 377 "structure_reuse.domain.m"
      }
#line 377 "structure_reuse.domain.m"
    else
#line 448 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 447 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__ReuseAs_4;
#line 447 "structure_reuse.domain.m"
  }
#line 90 "structure_reuse.domain.m"
}

#line 89 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0(void)
#line 89 "structure_reuse.domain.m"
{
#line 443 "structure_reuse.domain.m"
  {
#line 443 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 443 "structure_reuse.domain.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 443 "structure_reuse.domain.m"
  }
#line 89 "structure_reuse.domain.m"
}

#line 76 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_p_0(
#line 76 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5,
#line 76 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6,
#line 76 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond1_7,
#line 76 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Cond2_8)
#line 76 "structure_reuse.domain.m"
{
#line 383 "structure_reuse.domain.m"
  {
#line 383 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 383 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__Cond1_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = MR_TRUE;
#line 383 "structure_reuse.domain.m"
    else
#line 385 "structure_reuse.domain.m"
      {
#line 385 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_15;
#line 385 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__Nodes1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_7, (MR_Integer) 0)));
#line 385 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalUse1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_7, (MR_Integer) 1)));
#line 385 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalSharing1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond1_7, (MR_Integer) 2)));
#line 385 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__Nodes2_12;
#line 385 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalUse2_13;
#line 385 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_14;

#line 386 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__Cond2_8)) == (MR_mktag((MR_Integer) 1)));
#line 386 "structure_reuse.domain.m"
        if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 386 "structure_reuse.domain.m"
          {
#line 386 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__Nodes2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond2_8, (MR_Integer) 0)));
#line 386 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__LocalUse2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond2_8, (MR_Integer) 1)));
#line 386 "structure_reuse.domain.m"
            transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Cond2_8, (MR_Integer) 2)));
#line 8329 "transform_hlds.ctgc.structure_reuse.domain.c"
            transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 398 "structure_reuse.domain.m"
            {
#line 398 "structure_reuse.domain.m"
              transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__set__subset_2_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_15_15, transform_hlds__ctgc__structure_reuse__domain__Nodes1_9, transform_hlds__ctgc__structure_reuse__domain__Nodes2_12);
            }
#line 385 "structure_reuse.domain.m"
            if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 385 "structure_reuse.domain.m"
              {
#line 400 "structure_reuse.domain.m"
                {
#line 400 "structure_reuse.domain.m"
                  transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__LocalUse1_10, transform_hlds__ctgc__structure_reuse__domain__LocalUse2_13);
                }
#line 385 "structure_reuse.domain.m"
                if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 402 "structure_reuse.domain.m"
                  {
#line 402 "structure_reuse.domain.m"
                    return transform_hlds__ctgc__structure_reuse__domain__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_5, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_6, transform_hlds__ctgc__structure_reuse__domain__LocalSharing1_11, transform_hlds__ctgc__structure_reuse__domain__LocalSharing2_14);
                  }
#line 385 "structure_reuse.domain.m"
              }
#line 386 "structure_reuse.domain.m"
          }
#line 385 "structure_reuse.domain.m"
      }
#line 383 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 383 "structure_reuse.domain.m"
  }
#line 76 "structure_reuse.domain.m"
}

#line 428 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0_1(
#line 428 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 428 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 428 "structure_reuse.domain.m"
{
#line 428 "structure_reuse.domain.m"
  {
#line 428 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 428 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 428 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__4_4;

#line 428 "structure_reuse.domain.m"
    {
#line 428 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__4_4 = parse_tree__prog_ctgc__rename_datastruct_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 428 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__4_4));
#line 428 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 428 "structure_reuse.domain.m"
  }
#line 428 "structure_reuse.domain.m"
}

#line 69 "structure_reuse.domain.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0(
#line 69 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__MapVar_5,
#line 69 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeSubst_6,
#line 69 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Condition_7,
#line 69 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__RenamedCondition_8)
#line 69 "structure_reuse.domain.m"
{
#line 424 "structure_reuse.domain.m"
  {
#line 424 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;

#line 424 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__Condition_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "structure_reuse.domain.m"
      *transform_hlds__ctgc__structure_reuse__domain__RenamedCondition_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 424 "structure_reuse.domain.m"
    else
#line 427 "structure_reuse.domain.m"
      {
#line 427 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 427 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadNodes_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_7, (MR_Integer) 0)));
#line 427 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__InUseNodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_7, (MR_Integer) 1)));
#line 427 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LocalSharing_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_7, (MR_Integer) 2)));
#line 427 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__RenamedDeadNodes_12;
#line 427 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__RenamedInUseNodes_13;
#line 427 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__RenamedLocalSharing_14;
#line 427 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_15_15;

#line 428 "structure_reuse.domain.m"
        {
#line 428 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 428 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_15_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[0]));
#line 428 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_15_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0_1));
#line 428 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 428 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_15_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__MapVar_5));
#line 428 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_15_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__TypeSubst_6));
#line 428 "structure_reuse.domain.m"
        }
#line 428 "structure_reuse.domain.m"
        {
#line 428 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__RenamedDeadNodes_12 = mercury__set__map_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__domain__V_15_15, transform_hlds__ctgc__structure_reuse__domain__DeadNodes_9);
        }
#line 430 "structure_reuse.domain.m"
        {
#line 430 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__RenamedInUseNodes_13 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__domain__V_15_15, transform_hlds__ctgc__structure_reuse__domain__InUseNodes_10);
        }
#line 432 "structure_reuse.domain.m"
        {
#line 432 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_p_0(transform_hlds__ctgc__structure_reuse__domain__MapVar_5, transform_hlds__ctgc__structure_reuse__domain__TypeSubst_6, transform_hlds__ctgc__structure_reuse__domain__LocalSharing_11, &transform_hlds__ctgc__structure_reuse__domain__RenamedLocalSharing_14);
        }
#line 434 "structure_reuse.domain.m"
        {
#line 434 "structure_reuse.domain.m"
          MR_Word base;
#line 434 "structure_reuse.domain.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 434 "structure_reuse.domain.m"
          *transform_hlds__ctgc__structure_reuse__domain__RenamedCondition_8 = base;
#line 434 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__RenamedDeadNodes_12));
#line 434 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__RenamedInUseNodes_13));
#line 434 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__RenamedLocalSharing_14));
#line 434 "structure_reuse.domain.m"
        }
#line 427 "structure_reuse.domain.m"
      }
#line 424 "structure_reuse.domain.m"
  }
#line 69 "structure_reuse.domain.m"
}

#line 62 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_reusable_nodes_2_p_0(
#line 62 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1,
#line 62 "structure_reuse.domain.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__Nodes_3)
#line 62 "structure_reuse.domain.m"
{
#line 379 "structure_reuse.domain.m"
  {
#line 379 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 379 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4;
#line 379 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_5_5;

#line 379 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 379 "structure_reuse.domain.m"
      {
#line 379 "structure_reuse.domain.m"
        *transform_hlds__ctgc__structure_reuse__domain__Nodes_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 379 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 379 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 2)));
#line 379 "structure_reuse.domain.m"
      }
#line 379 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 379 "structure_reuse.domain.m"
  }
#line 62 "structure_reuse.domain.m"
}

#line 60 "structure_reuse.domain.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(
#line 60 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)
#line 60 "structure_reuse.domain.m"
{
#line 377 "structure_reuse.domain.m"
  {
#line 377 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 377 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_2_2;
#line 377 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_3_3;
#line 377 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__V_4_4;

#line 377 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 377 "structure_reuse.domain.m"
      {
#line 377 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 0)));
#line 377 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 1)));
#line 377 "structure_reuse.domain.m"
        transform_hlds__ctgc__structure_reuse__domain__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__HeadVar__1_1, (MR_Integer) 2)));
#line 377 "structure_reuse.domain.m"
      }
#line 377 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 377 "structure_reuse.domain.m"
  }
#line 60 "structure_reuse.domain.m"
}

#line 367 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_2(
#line 367 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 367 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 367 "structure_reuse.domain.m"
{
#line 367 "structure_reuse.domain.m"
  {
#line 367 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 367 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 367 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv1_HeadVar__5_5;

#line 367 "structure_reuse.domain.m"
    {
#line 367 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__conv1_HeadVar__5_5 = transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 367 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv1_HeadVar__5_5));
#line 367 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 367 "structure_reuse.domain.m"
  }
#line 367 "structure_reuse.domain.m"
}

#line 365 "structure_reuse.domain.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_1(
#line 365 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__closure_arg,
#line 365 "structure_reuse.domain.m"
  MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1)
#line 365 "structure_reuse.domain.m"
{
#line 365 "structure_reuse.domain.m"
  {
#line 365 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 365 "structure_reuse.domain.m"
    MR_Box transform_hlds__ctgc__structure_reuse__domain__closure = transform_hlds__ctgc__structure_reuse__domain__closure_arg;
#line 365 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__2_2;

#line 365 "structure_reuse.domain.m"
    {
#line 365 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_1));
    }
#line 365 "structure_reuse.domain.m"
    transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__conv0_HeadVar__2_2));
#line 365 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__wrapper_arg_2;
#line 365 "structure_reuse.domain.m"
  }
#line 365 "structure_reuse.domain.m"
}

#line 57 "structure_reuse.domain.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0(
#line 57 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8,
#line 57 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9,
#line 57 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__DeadVar_10,
#line 57 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LFU_11,
#line 57 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__LBU_12,
#line 57 "structure_reuse.domain.m"
  MR_Word transform_hlds__ctgc__structure_reuse__domain__Sharing_13)
#line 57 "structure_reuse.domain.m"
{
#line 328 "structure_reuse.domain.m"
  {
#line 328 "structure_reuse.domain.m"
    MR_bool transform_hlds__ctgc__structure_reuse__domain__succeeded;
#line 328 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Condition_14;
#line 328 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVars_15;
#line 328 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__TopCell_16;
#line 328 "structure_reuse.domain.m"
    MR_Word transform_hlds__ctgc__structure_reuse__domain__Nodes_17;

#line 329 "structure_reuse.domain.m"
    {
#line 329 "structure_reuse.domain.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, &transform_hlds__ctgc__structure_reuse__domain__HeadVars_15);
    }
#line 344 "structure_reuse.domain.m"
    {
#line 344 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__TopCell_16 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(transform_hlds__ctgc__structure_reuse__domain__DeadVar_10);
    }
#line 345 "structure_reuse.domain.m"
    {
#line 345 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__DeadVar_10)), transform_hlds__ctgc__structure_reuse__domain__HeadVars_15);
    }
#line 347 "structure_reuse.domain.m"
    if (transform_hlds__ctgc__structure_reuse__domain__succeeded)
#line 346 "structure_reuse.domain.m"
      {
#line 346 "structure_reuse.domain.m"
        {
#line 346 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__Nodes_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Nodes_17, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__TopCell_16));
#line 346 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Nodes_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "structure_reuse.domain.m"
        }
#line 346 "structure_reuse.domain.m"
      }
#line 347 "structure_reuse.domain.m"
    else
#line 349 "structure_reuse.domain.m"
      {
#line 349 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__SharedDatastructs_18;

#line 348 "structure_reuse.domain.m"
        {
#line 348 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__SharedDatastructs_18 = transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0(transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9, transform_hlds__ctgc__structure_reuse__domain__Sharing_13, transform_hlds__ctgc__structure_reuse__domain__TopCell_16);
        }
#line 350 "structure_reuse.domain.m"
        {
#line 350 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__Nodes_17 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_15, transform_hlds__ctgc__structure_reuse__domain__SharedDatastructs_18);
        }
#line 349 "structure_reuse.domain.m"
      }
#line 359 "structure_reuse.domain.m"
    if ((transform_hlds__ctgc__structure_reuse__domain__Nodes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "structure_reuse.domain.m"
      transform_hlds__ctgc__structure_reuse__domain__Condition_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 359 "structure_reuse.domain.m"
    else
#line 360 "structure_reuse.domain.m"
      {
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35;
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LU_21;
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__LuData_22;
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__ExtendedLuData_23;
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__SharedLU_24;
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVarSharedLU_25;
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__HeadVarSharing_26;
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_29_29;
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_30_30;
#line 360 "structure_reuse.domain.m"
        MR_Word transform_hlds__ctgc__structure_reuse__domain__V_31_31;

#line 361 "structure_reuse.domain.m"
        {
#line 361 "structure_reuse.domain.m"
          parse_tree__set_of_var__union_3_p_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_33_33, transform_hlds__ctgc__structure_reuse__domain__LFU_11, transform_hlds__ctgc__structure_reuse__domain__LBU_12, &transform_hlds__ctgc__structure_reuse__domain__LU_21);
        }
#line 8748 "transform_hlds.ctgc.structure_reuse.domain.c"
        transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 365 "structure_reuse.domain.m"
        {
#line 365 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_29_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_33_33, transform_hlds__ctgc__structure_reuse__domain__LU_21);
        }
#line 365 "structure_reuse.domain.m"
        {
#line 365 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__LuData_22 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[3], transform_hlds__ctgc__structure_reuse__domain__V_29_29);
        }
#line 367 "structure_reuse.domain.m"
        {
#line 367 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 367 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[0]));
#line 367 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_2));
#line 367 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 367 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ModuleInfo_8));
#line 367 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__ProcInfo_9));
#line 367 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__domain__V_30_30, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__Sharing_13));
#line 367 "structure_reuse.domain.m"
        }
#line 366 "structure_reuse.domain.m"
        {
#line 366 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__ExtendedLuData_23 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__domain__V_30_30, transform_hlds__ctgc__structure_reuse__domain__LuData_22);
        }
#line 368 "structure_reuse.domain.m"
        {
#line 368 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__SharedLU_24 = mercury__list__condense_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35, transform_hlds__ctgc__structure_reuse__domain__ExtendedLuData_23);
        }
#line 369 "structure_reuse.domain.m"
        {
#line 369 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__HeadVarSharedLU_25 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_15, transform_hlds__ctgc__structure_reuse__domain__SharedLU_24);
        }
#line 371 "structure_reuse.domain.m"
        {
#line 371 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_p_0(transform_hlds__ctgc__structure_reuse__domain__HeadVars_15, transform_hlds__ctgc__structure_reuse__domain__Sharing_13, &transform_hlds__ctgc__structure_reuse__domain__HeadVarSharing_26);
        }
#line 373 "structure_reuse.domain.m"
        {
#line 373 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__V_31_31 = mercury__set__list_to_set_1_f_0(transform_hlds__ctgc__structure_reuse__domain__TypeCtorInfo_35_35, transform_hlds__ctgc__structure_reuse__domain__Nodes_17);
        }
#line 373 "structure_reuse.domain.m"
        {
#line 373 "structure_reuse.domain.m"
          transform_hlds__ctgc__structure_reuse__domain__Condition_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 373 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__V_31_31));
#line 373 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__HeadVarSharedLU_25));
#line 373 "structure_reuse.domain.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__domain__Condition_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__HeadVarSharing_26));
#line 373 "structure_reuse.domain.m"
        }
#line 360 "structure_reuse.domain.m"
      }
#line 328 "structure_reuse.domain.m"
    return transform_hlds__ctgc__structure_reuse__domain__Condition_14;
#line 328 "structure_reuse.domain.m"
  }
#line 57 "structure_reuse.domain.m"
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
