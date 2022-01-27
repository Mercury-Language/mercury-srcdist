/*
** Automatically generated from `transform_hlds.ctgc.structure_reuse.versions.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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


/* :- module transform_hlds.ctgc.structure_reuse.versions. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__versions__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.versions.mih"


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
#include "check_hlds.mode_util.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.structure_reuse.analysis.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




#line 146 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__versions__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 149 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 152 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0;

#line 155 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1;

#line 158 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_value_ordered_convert_potential_reuse_0[2];

#line 161 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_name_ordered_convert_potential_reuse_0[2];

#line 164 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__functor_number_map_convert_potential_reuse_0[2];

#line 167 "transform_hlds.ctgc.structure_reuse.versions.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0_10001(
#line 170 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 172 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2);

#line 175 "transform_hlds.ctgc.structure_reuse.versions.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0_10001(
#line 178 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 180 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 182 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3);

#line 185 "transform_hlds.ctgc.structure_reuse.versions.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0_10001(
#line 188 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 190 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2);

#line 193 "transform_hlds.ctgc.structure_reuse.versions.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0_10001(
#line 196 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 198 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 200 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3);

#line 85 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0(
#line 85 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
#line 85 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2,
#line 85 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3);

#line 85 "structure_reuse.versions.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0(
#line 85 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
#line 85 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2);

#line 236 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0(
#line 236 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
#line 236 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2,
#line 236 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3);

#line 236 "structure_reuse.versions.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0(
#line 236 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_1,
#line 236 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2);

#line 490 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_case_5_p_0(
#line 490 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
#line 490 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseMap_7,
#line 490 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8,
#line 490 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__Case0_9,
#line 490 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__Case_10);

#line 469 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(
#line 469 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_10,
#line 469 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_11,
#line 469 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PredId_12,
#line 469 "structure_reuse.versions.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__versions__ProcId_13,
#line 469 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PredName_14,
#line 469 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_15,
#line 469 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__ReusePredId_16,
#line 469 "structure_reuse.versions.m"
  MR_Integer * transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_17,
#line 469 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__ReusePredName_18);

#line 443 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(
#line 443 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4,
#line 443 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15,
#line 443 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16);

#line 407 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_3(
#line 407 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 407 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 407 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2);

#line 401 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_2(
#line 401 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 401 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 401 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2);

#line 330 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_1(
#line 330 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 330 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 330 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2);

#line 323 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(
#line 323 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
#line 323 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
#line 323 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8,
#line 323 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69,
#line 323 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70);

#line 290 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(
#line 290 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
#line 290 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
#line 290 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_8,
#line 290 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17,
#line 290 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_18);

#line 254 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_p_0(
#line 254 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
#line 254 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
#line 254 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8,
#line 254 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14,
#line 254 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15);

#line 161 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_p_0(
#line 161 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_7,
#line 161 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__NewPPId_8,
#line 161 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14,
#line 161 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15,
#line 161 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_16,
#line 161 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_17);

#line 141 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_p_0(
#line 141 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8,
#line 141 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_9,
#line 141 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_10,
#line 141 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_0_15,
#line 141 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_16,
#line 141 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17,
#line 141 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18);

#line 132 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_4(
#line 132 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 132 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 132 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 132 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3);

#line 125 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_3(
#line 125 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 125 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 125 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 125 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3);

#line 119 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_2(
#line 119 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 119 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 119 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 119 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3,
#line 119 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4,
#line 119 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5,
#line 119 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6);

#line 112 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_1(
#line 112 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 112 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 112 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 112 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3,
#line 112 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4,
#line 112 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5,
#line 112 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_2[1][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_3[1][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_4[1][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[3][8];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
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



#line 566 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__versions__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 574 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 582 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0 = {
  (MR_String) "convert_potential_reuse",
  (MR_Integer) 0
};

#line 588 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1 = {
  (MR_String) "leave_potential_reuse",
  (MR_Integer) 1
};

#line 594 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_value_ordered_convert_potential_reuse_0[2] = {
  &transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0,
  &transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1
};

#line 600 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_name_ordered_convert_potential_reuse_0[2] = {
  &transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0,
  &transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1
};

#line 606 "transform_hlds.ctgc.structure_reuse.versions.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__functor_number_map_convert_potential_reuse_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 612 "transform_hlds.ctgc.structure_reuse.versions.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.versions",
  (MR_String) "convert_potential_reuse",
  {     transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_name_ordered_convert_potential_reuse_0 },
  {     transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_value_ordered_convert_potential_reuse_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__functor_number_map_convert_potential_reuse_0
};

#line 629 "transform_hlds.ctgc.structure_reuse.versions.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.versions",
  (MR_String) "reuse_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 646 "transform_hlds.ctgc.structure_reuse.versions.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0_10001(
#line 649 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 651 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2)
#line 653 "transform_hlds.ctgc.structure_reuse.versions.c"
{
#line 655 "transform_hlds.ctgc.structure_reuse.versions.c"
  {
#line 657 "transform_hlds.ctgc.structure_reuse.versions.c"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;

#line 660 "transform_hlds.ctgc.structure_reuse.versions.c"
    {
#line 662 "transform_hlds.ctgc.structure_reuse.versions.c"
      transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2));
    }
#line 665 "transform_hlds.ctgc.structure_reuse.versions.c"
    return transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 667 "transform_hlds.ctgc.structure_reuse.versions.c"
  }
#line 669 "transform_hlds.ctgc.structure_reuse.versions.c"
}

#line 672 "transform_hlds.ctgc.structure_reuse.versions.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0_10001(
#line 675 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 677 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 679 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3)
#line 681 "transform_hlds.ctgc.structure_reuse.versions.c"
{
#line 683 "transform_hlds.ctgc.structure_reuse.versions.c"
  {
#line 685 "transform_hlds.ctgc.structure_reuse.versions.c"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1;

#line 688 "transform_hlds.ctgc.structure_reuse.versions.c"
    {
#line 690 "transform_hlds.ctgc.structure_reuse.versions.c"
      transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0(&transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3));
    }
#line 693 "transform_hlds.ctgc.structure_reuse.versions.c"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1));
#line 695 "transform_hlds.ctgc.structure_reuse.versions.c"
  }
#line 697 "transform_hlds.ctgc.structure_reuse.versions.c"
}

#line 700 "transform_hlds.ctgc.structure_reuse.versions.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0_10001(
#line 703 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 705 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2)
#line 707 "transform_hlds.ctgc.structure_reuse.versions.c"
{
#line 709 "transform_hlds.ctgc.structure_reuse.versions.c"
  {
#line 711 "transform_hlds.ctgc.structure_reuse.versions.c"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;

#line 714 "transform_hlds.ctgc.structure_reuse.versions.c"
    {
#line 716 "transform_hlds.ctgc.structure_reuse.versions.c"
      transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2));
    }
#line 719 "transform_hlds.ctgc.structure_reuse.versions.c"
    return transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 721 "transform_hlds.ctgc.structure_reuse.versions.c"
  }
#line 723 "transform_hlds.ctgc.structure_reuse.versions.c"
}

#line 726 "transform_hlds.ctgc.structure_reuse.versions.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0_10001(
#line 729 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 731 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 733 "transform_hlds.ctgc.structure_reuse.versions.c"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3)
#line 735 "transform_hlds.ctgc.structure_reuse.versions.c"
{
#line 737 "transform_hlds.ctgc.structure_reuse.versions.c"
  {
#line 739 "transform_hlds.ctgc.structure_reuse.versions.c"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1;

#line 742 "transform_hlds.ctgc.structure_reuse.versions.c"
    {
#line 744 "transform_hlds.ctgc.structure_reuse.versions.c"
      transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0(&transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3));
    }
#line 747 "transform_hlds.ctgc.structure_reuse.versions.c"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1));
#line 749 "transform_hlds.ctgc.structure_reuse.versions.c"
  }
#line 751 "transform_hlds.ctgc.structure_reuse.versions.c"
}

#line 85 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0(
#line 85 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
#line 85 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2,
#line 85 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3)
#line 85 "structure_reuse.versions.m"
{
#line 85 "structure_reuse.versions.m"
  {
#line 85 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 85 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2;
#line 85 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3;

#line 85 "structure_reuse.versions.m"
    {
#line 85 "structure_reuse.versions.m"
      mdbcomp__sym_name____Compare____sym_name_0_0(transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_4, transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_5);
#line 85 "structure_reuse.versions.m"
      return;
    }
#line 85 "structure_reuse.versions.m"
  }
#line 85 "structure_reuse.versions.m"
}

#line 85 "structure_reuse.versions.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0(
#line 85 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
#line 85 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2)
#line 85 "structure_reuse.versions.m"
{
#line 85 "structure_reuse.versions.m"
  {
#line 85 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 85 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1;
#line 85 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2;

#line 85 "structure_reuse.versions.m"
    {
#line 85 "structure_reuse.versions.m"
      return transform_hlds__ctgc__structure_reuse__versions__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_3, transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_4);
    }
#line 85 "structure_reuse.versions.m"
    return transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 85 "structure_reuse.versions.m"
  }
#line 85 "structure_reuse.versions.m"
}

#line 236 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0(
#line 236 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
#line 236 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2,
#line 236 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3)
#line 236 "structure_reuse.versions.m"
{
#line 236 "structure_reuse.versions.m"
  {
#line 236 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 236 "structure_reuse.versions.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2;
#line 236 "structure_reuse.versions.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3;

#line 236 "structure_reuse.versions.m"
    {
#line 236 "structure_reuse.versions.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_4, transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_5);
#line 236 "structure_reuse.versions.m"
      return;
    }
#line 236 "structure_reuse.versions.m"
  }
#line 236 "structure_reuse.versions.m"
}

#line 236 "structure_reuse.versions.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0(
#line 236 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_1,
#line 236 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2)
#line 236 "structure_reuse.versions.m"
{
#line 857 "transform_hlds.ctgc.structure_reuse.versions.c"
  {
#line 859 "transform_hlds.ctgc.structure_reuse.versions.c"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_1 == transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2);

#line 862 "transform_hlds.ctgc.structure_reuse.versions.c"
    return transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 864 "transform_hlds.ctgc.structure_reuse.versions.c"
  }
#line 236 "structure_reuse.versions.m"
}

#line 490 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_case_5_p_0(
#line 490 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
#line 490 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseMap_7,
#line 490 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8,
#line 490 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__Case0_9,
#line 490 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__Case_10)
#line 490 "structure_reuse.versions.m"
{
#line 493 "structure_reuse.versions.m"
  {
#line 493 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 493 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__MainConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Case0_9, (MR_Integer) 0)));
#line 493 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__OtherConsIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Case0_9, (MR_Integer) 1)));
#line 493 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Case0_9, (MR_Integer) 2)));
#line 493 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Goal_14;

#line 495 "structure_reuse.versions.m"
    {
#line 495 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseMap_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__Goal0_13, &transform_hlds__ctgc__structure_reuse__versions__Goal_14);
    }
#line 496 "structure_reuse.versions.m"
    {
#line 496 "structure_reuse.versions.m"
      MR_Word base;
#line 496 "structure_reuse.versions.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 496 "structure_reuse.versions.m"
      *transform_hlds__ctgc__structure_reuse__versions__Case_10 = base;
#line 496 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__MainConsId_11));
#line 496 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__OtherConsIds_12));
#line 496 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Goal_14));
#line 496 "structure_reuse.versions.m"
    }
#line 493 "structure_reuse.versions.m"
  }
#line 490 "structure_reuse.versions.m"
}

#line 469 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(
#line 469 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_10,
#line 469 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_11,
#line 469 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PredId_12,
#line 469 "structure_reuse.versions.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__versions__ProcId_13,
#line 469 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PredName_14,
#line 469 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_15,
#line 469 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__ReusePredId_16,
#line 469 "structure_reuse.versions.m"
  MR_Integer * transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_17,
#line 469 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__ReusePredName_18)
#line 469 "structure_reuse.versions.m"
{
#line 484 "structure_reuse.versions.m"
  {
#line 484 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 484 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Result_19;
#line 476 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_23_23;

#line 477 "structure_reuse.versions.m"
    {
#line 477 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_23_23, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PredId_12));
#line 477 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_23_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ProcId_13));
#line 477 "structure_reuse.versions.m"
    }
#line 476 "structure_reuse.versions.m"
    {
#line 476 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseTable_10, transform_hlds__ctgc__structure_reuse__versions__V_23_23, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_15, &transform_hlds__ctgc__structure_reuse__versions__Result_19);
    }
#line 484 "structure_reuse.versions.m"
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 479 "structure_reuse.versions.m"
      {
#line 479 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_20;
#line 479 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleName_21;
#line 479 "structure_reuse.versions.m"
        MR_String transform_hlds__ctgc__structure_reuse__versions__Name_22;

#line 479 "structure_reuse.versions.m"
        *transform_hlds__ctgc__structure_reuse__versions__ReusePredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Result_19, (MR_Integer) 0)));
#line 479 "structure_reuse.versions.m"
        *transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Result_19, (MR_Integer) 1)));
#line 480 "structure_reuse.versions.m"
        {
#line 480 "structure_reuse.versions.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_11, *transform_hlds__ctgc__structure_reuse__versions__ReusePredId_16, &transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_20);
        }
#line 481 "structure_reuse.versions.m"
        {
#line 481 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__ModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_20);
        }
#line 482 "structure_reuse.versions.m"
        {
#line 482 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__Name_22 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_20);
        }
#line 483 "structure_reuse.versions.m"
        {
#line 483 "structure_reuse.versions.m"
          MR_Word base;
#line 483 "structure_reuse.versions.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "structure_reuse.versions.m"
          *transform_hlds__ctgc__structure_reuse__versions__ReusePredName_18 = base;
#line 483 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ModuleName_21));
#line 483 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Name_22));
#line 483 "structure_reuse.versions.m"
        }
#line 479 "structure_reuse.versions.m"
      }
#line 484 "structure_reuse.versions.m"
    else
#line 485 "structure_reuse.versions.m"
      {
#line 485 "structure_reuse.versions.m"
        *transform_hlds__ctgc__structure_reuse__versions__ReusePredId_16 = transform_hlds__ctgc__structure_reuse__versions__PredId_12;
#line 486 "structure_reuse.versions.m"
        *transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_17 = transform_hlds__ctgc__structure_reuse__versions__ProcId_13;
#line 487 "structure_reuse.versions.m"
        *transform_hlds__ctgc__structure_reuse__versions__ReusePredName_18 = transform_hlds__ctgc__structure_reuse__versions__PredName_14;
#line 485 "structure_reuse.versions.m"
      }
#line 484 "structure_reuse.versions.m"
  }
#line 469 "structure_reuse.versions.m"
}

#line 443 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(
#line 443 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4,
#line 443 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15,
#line 443 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16)
#line 443 "structure_reuse.versions.m"
{
#line 465 "structure_reuse.versions.m"
  {
#line 465 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15)) == (MR_mktag((MR_Integer) 0)));
#line 465 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__HowToConstruct0_6;
#line 465 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__DeadVar_7;
#line 465 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PossibleConsIds_9;
#line 465 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__CellsToUpdate_10;
#line 465 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_18_18;
#line 465 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_19_19;
#line 465 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_20_20;
#line 465 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_21_21;
#line 465 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_22_22;
#line 465 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_23_23;
#line 449 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_8_8;

#line 448 "structure_reuse.versions.m"
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 448 "structure_reuse.versions.m"
      {
#line 448 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 0)));
#line 448 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 1)));
#line 448 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 2)));
#line 448 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 3)));
#line 448 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__HowToConstruct0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 4)));
#line 448 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 5)));
#line 448 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 6)));
#line 449 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4)) == (MR_mktag((MR_Integer) 1)));
#line 449 "structure_reuse.versions.m"
        if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 449 "structure_reuse.versions.m"
          {
#line 449 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__DeadVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4, (MR_Integer) 0)));
#line 449 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4, (MR_Integer) 1)));
#line 449 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__PossibleConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4, (MR_Integer) 2)));
#line 449 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__CellsToUpdate_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4, (MR_Integer) 3)));
#line 449 "structure_reuse.versions.m"
          }
#line 448 "structure_reuse.versions.m"
      }
#line 465 "structure_reuse.versions.m"
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 455 "structure_reuse.versions.m"
      if ((transform_hlds__ctgc__structure_reuse__versions__HowToConstruct0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "structure_reuse.versions.m"
        *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15;
#line 455 "structure_reuse.versions.m"
      else
#line 459 "structure_reuse.versions.m"
        {
#line 459 "structure_reuse.versions.m"
          MR_Word transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13;
#line 459 "structure_reuse.versions.m"
          MR_Word transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14;

#line 460 "structure_reuse.versions.m"
          {
#line 460 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 460 "structure_reuse.versions.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__DeadVar_7));
#line 460 "structure_reuse.versions.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PossibleConsIds_9));
#line 460 "structure_reuse.versions.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__CellsToUpdate_10));
#line 460 "structure_reuse.versions.m"
          }
#line 462 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13);
#line 463 "structure_reuse.versions.m"
          {
#line 463 "structure_reuse.versions.m"
            MR_Word base;
#line 463 "structure_reuse.versions.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 463 "structure_reuse.versions.m"
            *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16 = base;
#line 463 "structure_reuse.versions.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_18_18));
#line 463 "structure_reuse.versions.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_19_19));
#line 463 "structure_reuse.versions.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_20_20));
#line 463 "structure_reuse.versions.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_21_21));
#line 463 "structure_reuse.versions.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14));
#line 463 "structure_reuse.versions.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_22_22));
#line 463 "structure_reuse.versions.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_23_23));
#line 463 "structure_reuse.versions.m"
          }
#line 459 "structure_reuse.versions.m"
        }
#line 465 "structure_reuse.versions.m"
    else
#line 465 "structure_reuse.versions.m"
      *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15;
#line 465 "structure_reuse.versions.m"
  }
#line 443 "structure_reuse.versions.m"
}

#line 407 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_3(
#line 407 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 407 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 407 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2)
#line 407 "structure_reuse.versions.m"
{
#line 407 "structure_reuse.versions.m"
  {
#line 407 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
#line 407 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv2_Case_10;

#line 407 "structure_reuse.versions.m"
    {
#line 407 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__process_case_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__versions__conv2_Case_10);
    }
#line 407 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv2_Case_10));
#line 407 "structure_reuse.versions.m"
  }
#line 407 "structure_reuse.versions.m"
}

#line 401 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_2(
#line 401 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 401 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 401 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2)
#line 401 "structure_reuse.versions.m"
{
#line 401 "structure_reuse.versions.m"
  {
#line 401 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
#line 401 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_Goal_70;

#line 401 "structure_reuse.versions.m"
    {
#line 401 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_Goal_70);
    }
#line 401 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_Goal_70));
#line 401 "structure_reuse.versions.m"
  }
#line 401 "structure_reuse.versions.m"
}

#line 330 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_1(
#line 330 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 330 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 330 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2)
#line 330 "structure_reuse.versions.m"
{
#line 330 "structure_reuse.versions.m"
  {
#line 330 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
#line 330 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_Goal_70;

#line 330 "structure_reuse.versions.m"
    {
#line 330 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_Goal_70);
    }
#line 330 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_Goal_70));
#line 330 "structure_reuse.versions.m"
  }
#line 330 "structure_reuse.versions.m"
}

#line 323 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(
#line 323 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
#line 323 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
#line 323 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8,
#line 323 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69,
#line 323 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70)
#line 323 "structure_reuse.versions.m"
{
#line 326 "structure_reuse.versions.m"
  {
#line 326 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 326 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69, (MR_Integer) 0)));
#line 326 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69, (MR_Integer) 1)));

#line 334 "structure_reuse.versions.m"
    if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) == (MR_mktag((MR_Integer) 0))))
#line 413 "structure_reuse.versions.m"
      *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
#line 334 "structure_reuse.versions.m"
    else
#line 334 "structure_reuse.versions.m"
    if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) == (MR_mktag((MR_Integer) 2))))
#line 336 "structure_reuse.versions.m"
      {
#line 336 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__CalleePredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)));
#line 336 "structure_reuse.versions.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__versions__CalleeProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
#line 336 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
#line 336 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__BI_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
#line 336 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__UC_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 4)));
#line 336 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__CalleePredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 5)));
#line 336 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22;
#line 353 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_24;
#line 345 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__V_82_82;
#line 345 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions___CondDescr_23;

#line 337 "structure_reuse.versions.m"
        {
#line 337 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11);
        }
#line 345 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22)) == (MR_mktag((MR_Integer) 3)));
#line 345 "structure_reuse.versions.m"
        if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 345 "structure_reuse.versions.m"
          {
#line 345 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22, (MR_Integer) 0)));
#line 345 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__V_82_82)) == (MR_mktag((MR_Integer) 2)));
#line 345 "structure_reuse.versions.m"
            if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 345 "structure_reuse.versions.m"
              {
#line 345 "structure_reuse.versions.m"
                transform_hlds__ctgc__structure_reuse__versions___CondDescr_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__V_82_82, (MR_Integer) 0)));
#line 345 "structure_reuse.versions.m"
                transform_hlds__ctgc__structure_reuse__versions__NoClobbers_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__V_82_82, (MR_Integer) 1)));
#line 345 "structure_reuse.versions.m"
              }
#line 345 "structure_reuse.versions.m"
          }
#line 353 "structure_reuse.versions.m"
        if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 349 "structure_reuse.versions.m"
          {
#line 349 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_25;
#line 349 "structure_reuse.versions.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_26;
#line 349 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_27;
#line 349 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89;

#line 347 "structure_reuse.versions.m"
            {
#line 347 "structure_reuse.versions.m"
              transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__CalleePredId_16, transform_hlds__ctgc__structure_reuse__versions__CalleeProcId_17, transform_hlds__ctgc__structure_reuse__versions__CalleePredName_21, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_24, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_25, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_26, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_27);
            }
#line 350 "structure_reuse.versions.m"
            {
#line 350 "structure_reuse.versions.m"
              transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 350 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_25));
#line 350 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_26));
#line 350 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Args_18));
#line 350 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__BI_19));
#line 350 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__UC_20));
#line 350 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_27));
#line 350 "structure_reuse.versions.m"
            }
#line 352 "structure_reuse.versions.m"
            {
#line 352 "structure_reuse.versions.m"
              MR_Word base;
#line 352 "structure_reuse.versions.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "structure_reuse.versions.m"
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
#line 352 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89));
#line 352 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
#line 352 "structure_reuse.versions.m"
            }
#line 349 "structure_reuse.versions.m"
          }
#line 353 "structure_reuse.versions.m"
        else
#line 369 "structure_reuse.versions.m"
          {
#line 369 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__V_84_84;
#line 369 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_95;
#line 354 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__CondDescr_28;

#line 356 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6 == (MR_Integer) 0);
#line 355 "structure_reuse.versions.m"
            if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 355 "structure_reuse.versions.m"
              {
#line 354 "structure_reuse.versions.m"
                transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22)) == (MR_mktag((MR_Integer) 2)));
#line 354 "structure_reuse.versions.m"
                if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 354 "structure_reuse.versions.m"
                  {
#line 354 "structure_reuse.versions.m"
                    transform_hlds__ctgc__structure_reuse__versions__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22, (MR_Integer) 0)));
#line 354 "structure_reuse.versions.m"
                    transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__V_84_84)) == (MR_mktag((MR_Integer) 2)));
#line 354 "structure_reuse.versions.m"
                    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 354 "structure_reuse.versions.m"
                      {
#line 354 "structure_reuse.versions.m"
                        transform_hlds__ctgc__structure_reuse__versions__CondDescr_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__V_84_84, (MR_Integer) 0)));
#line 354 "structure_reuse.versions.m"
                        transform_hlds__ctgc__structure_reuse__versions__NoClobbers_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__V_84_84, (MR_Integer) 1)));
#line 354 "structure_reuse.versions.m"
                      }
#line 354 "structure_reuse.versions.m"
                  }
#line 355 "structure_reuse.versions.m"
              }
#line 369 "structure_reuse.versions.m"
            if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 358 "structure_reuse.versions.m"
              {
#line 358 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_29;
#line 358 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo_30;
#line 358 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90;
#line 358 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_91;
#line 358 "structure_reuse.versions.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_92;
#line 358 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_93;

#line 361 "structure_reuse.versions.m"
                {
#line 361 "structure_reuse.versions.m"
                  transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__CalleePredId_16, transform_hlds__ctgc__structure_reuse__versions__CalleeProcId_17, transform_hlds__ctgc__structure_reuse__versions__CalleePredName_21, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_95, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_91, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_92, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_93);
                }
#line 364 "structure_reuse.versions.m"
                {
#line 364 "structure_reuse.versions.m"
                  transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 364 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_91));
#line 364 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_92));
#line 364 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Args_18));
#line 364 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__BI_19));
#line 364 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__UC_20));
#line 364 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_93));
#line 364 "structure_reuse.versions.m"
                }
#line 366 "structure_reuse.versions.m"
                {
#line 366 "structure_reuse.versions.m"
                  transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 366 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_29, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_84_84));
#line 366 "structure_reuse.versions.m"
                }
#line 367 "structure_reuse.versions.m"
                {
#line 367 "structure_reuse.versions.m"
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_29, transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11, &transform_hlds__ctgc__structure_reuse__versions__GoalInfo_30);
                }
#line 368 "structure_reuse.versions.m"
                {
#line 368 "structure_reuse.versions.m"
                  MR_Word base;
#line 368 "structure_reuse.versions.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 368 "structure_reuse.versions.m"
                  *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
#line 368 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90));
#line 368 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo_30));
#line 368 "structure_reuse.versions.m"
                }
#line 358 "structure_reuse.versions.m"
              }
#line 369 "structure_reuse.versions.m"
            else
#line 369 "structure_reuse.versions.m"
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
#line 369 "structure_reuse.versions.m"
          }
#line 336 "structure_reuse.versions.m"
      }
#line 334 "structure_reuse.versions.m"
    else
#line 334 "structure_reuse.versions.m"
    if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) == (MR_mktag((MR_Integer) 1))))
#line 375 "structure_reuse.versions.m"
      {
#line 375 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Unification0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
#line 375 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108;
#line 375 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)));
#line 375 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
#line 375 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
#line 375 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 4)));

#line 376 "structure_reuse.versions.m"
        {
#line 376 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11);
        }
#line 389 "structure_reuse.versions.m"
        if ((transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 395 "structure_reuse.versions.m"
          *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
#line 389 "structure_reuse.versions.m"
        else
#line 389 "structure_reuse.versions.m"
        if ((transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "structure_reuse.versions.m"
          *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
#line 389 "structure_reuse.versions.m"
        else
#line 389 "structure_reuse.versions.m"
        if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108)) == (MR_mktag((MR_Integer) 1))))
#line 397 "structure_reuse.versions.m"
          *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
#line 389 "structure_reuse.versions.m"
        else
#line 389 "structure_reuse.versions.m"
        if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108)) == (MR_mktag((MR_Integer) 2))))
#line 389 "structure_reuse.versions.m"
          {
#line 389 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108, (MR_Integer) 0)));

#line 389 "structure_reuse.versions.m"
            if ((transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6 == (MR_Integer) 0))
#line 383 "structure_reuse.versions.m"
              {
#line 383 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__Unification_42;
#line 383 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101;
#line 383 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_102;
#line 383 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo_103;
#line 386 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__V_119_119;
#line 386 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__V_120_120;
#line 386 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__V_121_121;
#line 386 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__V_123_123;
#line 386 "structure_reuse.versions.m"
                MR_Word transform_hlds__ctgc__structure_reuse__versions__V_122_122;

#line 384 "structure_reuse.versions.m"
                {
#line 384 "structure_reuse.versions.m"
                  transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_102, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_154_154));
#line 384 "structure_reuse.versions.m"
                }
#line 385 "structure_reuse.versions.m"
                {
#line 385 "structure_reuse.versions.m"
                  transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__versions__V_154_154, transform_hlds__ctgc__structure_reuse__versions__Unification0_39, &transform_hlds__ctgc__structure_reuse__versions__Unification_42);
                }
#line 386 "structure_reuse.versions.m"
                transform_hlds__ctgc__structure_reuse__versions__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)));
#line 386 "structure_reuse.versions.m"
                transform_hlds__ctgc__structure_reuse__versions__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
#line 386 "structure_reuse.versions.m"
                transform_hlds__ctgc__structure_reuse__versions__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
#line 386 "structure_reuse.versions.m"
                transform_hlds__ctgc__structure_reuse__versions__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
#line 386 "structure_reuse.versions.m"
                transform_hlds__ctgc__structure_reuse__versions__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 4)));
#line 386 "structure_reuse.versions.m"
                {
#line 386 "structure_reuse.versions.m"
                  transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 386 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_119_119));
#line 386 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_120_120));
#line 386 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_121_121));
#line 386 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Unification_42));
#line 386 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_123_123));
#line 386 "structure_reuse.versions.m"
                }
#line 387 "structure_reuse.versions.m"
                {
#line 387 "structure_reuse.versions.m"
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_102, transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11, &transform_hlds__ctgc__structure_reuse__versions__GoalInfo_103);
                }
#line 388 "structure_reuse.versions.m"
                {
#line 388 "structure_reuse.versions.m"
                  MR_Word base;
#line 388 "structure_reuse.versions.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 388 "structure_reuse.versions.m"
                  *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
#line 388 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101));
#line 388 "structure_reuse.versions.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo_103));
#line 388 "structure_reuse.versions.m"
                }
#line 383 "structure_reuse.versions.m"
              }
#line 389 "structure_reuse.versions.m"
            else
#line 390 "structure_reuse.versions.m"
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
#line 389 "structure_reuse.versions.m"
          }
#line 389 "structure_reuse.versions.m"
        else
#line 383 "structure_reuse.versions.m"
          {
#line 383 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__Descr_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108, (MR_Integer) 0)));
#line 383 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__Unification_145;
#line 383 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146;
#line 383 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo_148;
#line 386 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__V_134_134;
#line 386 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__V_135_135;
#line 386 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__V_136_136;
#line 386 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__V_138_138;
#line 386 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__V_133_133;

#line 385 "structure_reuse.versions.m"
            {
#line 385 "structure_reuse.versions.m"
              transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Descr_144, transform_hlds__ctgc__structure_reuse__versions__Unification0_39, &transform_hlds__ctgc__structure_reuse__versions__Unification_145);
            }
#line 386 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)));
#line 386 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
#line 386 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
#line 386 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
#line 386 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 4)));
#line 386 "structure_reuse.versions.m"
            {
#line 386 "structure_reuse.versions.m"
              transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 386 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_134_134));
#line 386 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_135_135));
#line 386 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_136_136));
#line 386 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Unification_145));
#line 386 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_138_138));
#line 386 "structure_reuse.versions.m"
            }
#line 387 "structure_reuse.versions.m"
            {
#line 387 "structure_reuse.versions.m"
              hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108, transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11, &transform_hlds__ctgc__structure_reuse__versions__GoalInfo_148);
            }
#line 388 "structure_reuse.versions.m"
            {
#line 388 "structure_reuse.versions.m"
              MR_Word base;
#line 388 "structure_reuse.versions.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 388 "structure_reuse.versions.m"
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
#line 388 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146));
#line 388 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo_148));
#line 388 "structure_reuse.versions.m"
            }
#line 383 "structure_reuse.versions.m"
          }
#line 375 "structure_reuse.versions.m"
      }
#line 334 "structure_reuse.versions.m"
    else
#line 334 "structure_reuse.versions.m"
    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 435 "structure_reuse.versions.m"
      *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
#line 334 "structure_reuse.versions.m"
    else
#line 334 "structure_reuse.versions.m"
    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 329 "structure_reuse.versions.m"
      {
#line 329 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_126_126;
#line 329 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
#line 329 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
#line 329 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Goals_14;
#line 329 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15;
#line 329 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__V_87_87;

#line 330 "structure_reuse.versions.m"
        {
#line 330 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 330 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_87_87, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[1]));
#line 330 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_87_87, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_1));
#line 330 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 330 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_87_87, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6));
#line 330 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_87_87, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7));
#line 330 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_87_87, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8));
#line 330 "structure_reuse.versions.m"
        }
#line 1771 "transform_hlds.ctgc.structure_reuse.versions.c"
        transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_126_126 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 330 "structure_reuse.versions.m"
        {
#line 330 "structure_reuse.versions.m"
          mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_126_126, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_126_126, transform_hlds__ctgc__structure_reuse__versions__V_87_87, transform_hlds__ctgc__structure_reuse__versions__Goals0_13, &transform_hlds__ctgc__structure_reuse__versions__Goals_14);
        }
#line 332 "structure_reuse.versions.m"
        {
#line 332 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 332 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 332 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ConjType_12));
#line 332 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Goals_14));
#line 332 "structure_reuse.versions.m"
        }
#line 333 "structure_reuse.versions.m"
        {
#line 333 "structure_reuse.versions.m"
          MR_Word base;
#line 333 "structure_reuse.versions.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "structure_reuse.versions.m"
          *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
#line 333 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15));
#line 333 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
#line 333 "structure_reuse.versions.m"
        }
#line 329 "structure_reuse.versions.m"
      }
#line 334 "structure_reuse.versions.m"
    else
#line 334 "structure_reuse.versions.m"
    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 400 "structure_reuse.versions.m"
      {
#line 400 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_129_129;
#line 400 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__V_79_79;
#line 400 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Goals0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
#line 400 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Goals_112;
#line 400 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_113;

#line 401 "structure_reuse.versions.m"
        {
#line 401 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 401 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_79_79, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[1]));
#line 401 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_79_79, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_2));
#line 401 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 401 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_79_79, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6));
#line 401 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_79_79, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7));
#line 401 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_79_79, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8));
#line 401 "structure_reuse.versions.m"
        }
#line 1841 "transform_hlds.ctgc.structure_reuse.versions.c"
        transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_129_129 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 401 "structure_reuse.versions.m"
        {
#line 401 "structure_reuse.versions.m"
          mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_129_129, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_129_129, transform_hlds__ctgc__structure_reuse__versions__V_79_79, transform_hlds__ctgc__structure_reuse__versions__Goals0_111, &transform_hlds__ctgc__structure_reuse__versions__Goals_112);
        }
#line 403 "structure_reuse.versions.m"
        {
#line 403 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 403 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_113, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Goals_112));
#line 403 "structure_reuse.versions.m"
        }
#line 404 "structure_reuse.versions.m"
        {
#line 404 "structure_reuse.versions.m"
          MR_Word base;
#line 404 "structure_reuse.versions.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 404 "structure_reuse.versions.m"
          *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
#line 404 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_113));
#line 404 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
#line 404 "structure_reuse.versions.m"
        }
#line 400 "structure_reuse.versions.m"
      }
#line 334 "structure_reuse.versions.m"
    else
#line 334 "structure_reuse.versions.m"
    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 373 "structure_reuse.versions.m"
      *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
#line 334 "structure_reuse.versions.m"
    else
#line 334 "structure_reuse.versions.m"
    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 425 "structure_reuse.versions.m"
      {
#line 425 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Vars_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
#line 425 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__IfGoal0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
#line 425 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__ThenGoal0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
#line 425 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__ElseGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 4)));
#line 425 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__IfGoal_58;
#line 425 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__ThenGoal_59;
#line 425 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__ElseGoal_60;
#line 425 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118;

#line 426 "structure_reuse.versions.m"
        {
#line 426 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__IfGoal0_55, &transform_hlds__ctgc__structure_reuse__versions__IfGoal_58);
        }
#line 428 "structure_reuse.versions.m"
        {
#line 428 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__ThenGoal0_56, &transform_hlds__ctgc__structure_reuse__versions__ThenGoal_59);
        }
#line 430 "structure_reuse.versions.m"
        {
#line 430 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__ElseGoal0_57, &transform_hlds__ctgc__structure_reuse__versions__ElseGoal_60);
        }
#line 432 "structure_reuse.versions.m"
        {
#line 432 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 432 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 432 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Vars_54));
#line 432 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__IfGoal_58));
#line 432 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ThenGoal_59));
#line 432 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ElseGoal_60));
#line 432 "structure_reuse.versions.m"
        }
#line 433 "structure_reuse.versions.m"
        {
#line 433 "structure_reuse.versions.m"
          MR_Word base;
#line 433 "structure_reuse.versions.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "structure_reuse.versions.m"
          *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
#line 433 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118));
#line 433 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
#line 433 "structure_reuse.versions.m"
        }
#line 425 "structure_reuse.versions.m"
      }
#line 334 "structure_reuse.versions.m"
    else
#line 334 "structure_reuse.versions.m"
    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 415 "structure_reuse.versions.m"
      {
#line 415 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
#line 415 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__SubGoal0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
#line 416 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__V_75_75;
#line 416 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__V_52_52;

#line 416 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__succeeded = ((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 416 "structure_reuse.versions.m"
        if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 416 "structure_reuse.versions.m"
          {
#line 416 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__Reason_50, (MR_Integer) 1)));
#line 416 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__Reason_50, (MR_Integer) 2)));
#line 416 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__V_75_75 == (MR_Integer) 1);
#line 416 "structure_reuse.versions.m"
          }
#line 418 "structure_reuse.versions.m"
        if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 418 "structure_reuse.versions.m"
          *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
#line 418 "structure_reuse.versions.m"
        else
#line 420 "structure_reuse.versions.m"
          {
#line 420 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__SubGoal_53;
#line 420 "structure_reuse.versions.m"
            MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115;

#line 419 "structure_reuse.versions.m"
            {
#line 419 "structure_reuse.versions.m"
              transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__SubGoal0_51, &transform_hlds__ctgc__structure_reuse__versions__SubGoal_53);
            }
#line 421 "structure_reuse.versions.m"
            {
#line 421 "structure_reuse.versions.m"
              transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 421 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 421 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Reason_50));
#line 421 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__SubGoal_53));
#line 421 "structure_reuse.versions.m"
            }
#line 422 "structure_reuse.versions.m"
            {
#line 422 "structure_reuse.versions.m"
              MR_Word base;
#line 422 "structure_reuse.versions.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 422 "structure_reuse.versions.m"
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
#line 422 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115));
#line 422 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
#line 422 "structure_reuse.versions.m"
            }
#line 420 "structure_reuse.versions.m"
          }
#line 415 "structure_reuse.versions.m"
      }
#line 334 "structure_reuse.versions.m"
    else
#line 334 "structure_reuse.versions.m"
    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 438 "structure_reuse.versions.m"
      {
#line 440 "structure_reuse.versions.m"
        {
#line 440 "structure_reuse.versions.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.versions", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.process_goal\'/5", (MR_String) "shorthand");
#line 440 "structure_reuse.versions.m"
          return;
        }
#line 438 "structure_reuse.versions.m"
      }
#line 334 "structure_reuse.versions.m"
    else
#line 406 "structure_reuse.versions.m"
      {
#line 406 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_132_132;
#line 406 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__A_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
#line 406 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__B_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
#line 406 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Cases0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
#line 406 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Cases_48;
#line 406 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__V_77_77;
#line 406 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114;

#line 407 "structure_reuse.versions.m"
        {
#line 407 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 407 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_77_77, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[2]));
#line 407 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_77_77, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_3));
#line 407 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 407 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_77_77, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6));
#line 407 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_77_77, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7));
#line 407 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_77_77, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8));
#line 407 "structure_reuse.versions.m"
        }
#line 2079 "transform_hlds.ctgc.structure_reuse.versions.c"
        transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_132_132 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 407 "structure_reuse.versions.m"
        {
#line 407 "structure_reuse.versions.m"
          mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_132_132, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_132_132, transform_hlds__ctgc__structure_reuse__versions__V_77_77, transform_hlds__ctgc__structure_reuse__versions__Cases0_47, &transform_hlds__ctgc__structure_reuse__versions__Cases_48);
        }
#line 409 "structure_reuse.versions.m"
        {
#line 409 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 409 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 409 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__A_45));
#line 409 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__B_46));
#line 409 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Cases_48));
#line 409 "structure_reuse.versions.m"
        }
#line 410 "structure_reuse.versions.m"
        {
#line 410 "structure_reuse.versions.m"
          MR_Word base;
#line 410 "structure_reuse.versions.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 410 "structure_reuse.versions.m"
          *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
#line 410 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114));
#line 410 "structure_reuse.versions.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
#line 410 "structure_reuse.versions.m"
        }
#line 406 "structure_reuse.versions.m"
      }
#line 326 "structure_reuse.versions.m"
  }
#line 323 "structure_reuse.versions.m"
}

#line 290 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(
#line 290 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
#line 290 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
#line 290 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_8,
#line 290 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17,
#line 290 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_18)
#line 290 "structure_reuse.versions.m"
{
#line 293 "structure_reuse.versions.m"
  {
#line 293 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 293 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredInfo0_12;
#line 293 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ImportStatus_13;
#line 293 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_22_22;
#line 301 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_14_14;

#line 295 "structure_reuse.versions.m"
    {
#line 295 "structure_reuse.versions.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "(reuse version) ", transform_hlds__ctgc__structure_reuse__versions__PPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17);
    }
#line 299 "structure_reuse.versions.m"
    {
#line 299 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ctgc__structure_reuse__versions__PPId_8, &transform_hlds__ctgc__structure_reuse__versions__PredInfo0_12, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_22_22);
    }
#line 300 "structure_reuse.versions.m"
    {
#line 300 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_12, &transform_hlds__ctgc__structure_reuse__versions__ImportStatus_13);
    }
#line 301 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__ImportStatus_13)) == (MR_mktag((MR_Integer) 2)));
#line 301 "structure_reuse.versions.m"
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 301 "structure_reuse.versions.m"
      {
#line 301 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__ImportStatus_13, (MR_Integer) 0)));
#line 303 "structure_reuse.versions.m"
        *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_18 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17;
#line 301 "structure_reuse.versions.m"
      }
#line 301 "structure_reuse.versions.m"
    else
#line 305 "structure_reuse.versions.m"
      {
#line 305 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Goal0_15;
#line 305 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__Goal_16;
#line 305 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_23_23;
#line 305 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_25_25;
#line 305 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_28_28;
#line 305 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_27_30;

#line 305 "structure_reuse.versions.m"
        {
#line 305 "structure_reuse.versions.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__ctgc__structure_reuse__versions__Goal0_15);
        }
#line 306 "structure_reuse.versions.m"
        {
#line 306 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ctgc__structure_reuse__versions__Goal0_15, &transform_hlds__ctgc__structure_reuse__versions__Goal_16);
        }
#line 308 "structure_reuse.versions.m"
        {
#line 308 "structure_reuse.versions.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Goal_16, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_23_23);
        }
#line 314 "structure_reuse.versions.m"
        {
#line 314 "structure_reuse.versions.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_23_23, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_25_25);
        }
#line 315 "structure_reuse.versions.m"
        {
#line 315 "structure_reuse.versions.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_27_30, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 318 "structure_reuse.versions.m"
        {
#line 318 "structure_reuse.versions.m"
          hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__ctgc__structure_reuse__versions__PPId_8, transform_hlds__ctgc__structure_reuse__versions__PredInfo0_12, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_27_30, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_28_28, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_18);
#line 318 "structure_reuse.versions.m"
          return;
        }
#line 305 "structure_reuse.versions.m"
      }
#line 293 "structure_reuse.versions.m"
  }
#line 290 "structure_reuse.versions.m"
}

#line 254 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_p_0(
#line 254 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
#line 254 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
#line 254 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8,
#line 254 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14,
#line 254 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15)
#line 254 "structure_reuse.versions.m"
{
#line 259 "structure_reuse.versions.m"
  {
#line 259 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 259 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Globals_10;
#line 259 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__IntermodAnalysis_11;
#line 259 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__MakeAnalysisReg_12;

#line 260 "structure_reuse.versions.m"
    {
#line 260 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, &transform_hlds__ctgc__structure_reuse__versions__Globals_10);
    }
#line 261 "structure_reuse.versions.m"
    {
#line 261 "structure_reuse.versions.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Globals_10, (MR_Integer) 333, &transform_hlds__ctgc__structure_reuse__versions__IntermodAnalysis_11);
    }
#line 263 "structure_reuse.versions.m"
    {
#line 263 "structure_reuse.versions.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Globals_10, (MR_Integer) 89, &transform_hlds__ctgc__structure_reuse__versions__MakeAnalysisReg_12);
    }
#line 266 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__IntermodAnalysis_11 == (MR_Integer) 1);
#line 266 "structure_reuse.versions.m"
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 267 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__MakeAnalysisReg_12 == (MR_Integer) 0);
#line 2279 "transform_hlds.ctgc.structure_reuse.versions.c"
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 2281 "transform_hlds.ctgc.structure_reuse.versions.c"
      {
#line 2283 "transform_hlds.ctgc.structure_reuse.versions.c"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__IsHarsher_13;

#line 269 "structure_reuse.versions.m"
        {
#line 269 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer_harsher_than_in_analysis_registry_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8, &transform_hlds__ctgc__structure_reuse__versions__IsHarsher_13);
        }
#line 279 "structure_reuse.versions.m"
        if ((transform_hlds__ctgc__structure_reuse__versions__IsHarsher_13 == (MR_Integer) 0))
#line 281 "structure_reuse.versions.m"
          {
#line 281 "structure_reuse.versions.m"
            transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15);
#line 281 "structure_reuse.versions.m"
            return;
          }
#line 279 "structure_reuse.versions.m"
        else
#line 275 "structure_reuse.versions.m"
          {
#line 278 "structure_reuse.versions.m"
            {
#line 278 "structure_reuse.versions.m"
              transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0((MR_Integer) 1, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15);
#line 278 "structure_reuse.versions.m"
              return;
            }
#line 275 "structure_reuse.versions.m"
          }
#line 2313 "transform_hlds.ctgc.structure_reuse.versions.c"
      }
#line 2315 "transform_hlds.ctgc.structure_reuse.versions.c"
    else
#line 281 "structure_reuse.versions.m"
      {
#line 281 "structure_reuse.versions.m"
        transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15);
#line 281 "structure_reuse.versions.m"
        return;
      }
#line 259 "structure_reuse.versions.m"
  }
#line 254 "structure_reuse.versions.m"
}

#line 161 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_p_0(
#line 161 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_7,
#line 161 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__NewPPId_8,
#line 161 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14,
#line 161 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15,
#line 161 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_16,
#line 161 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_17)
#line 161 "structure_reuse.versions.m"
{
#line 165 "structure_reuse.versions.m"
  {
#line 165 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 165 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 168 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_12_12;
#line 180 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_13;

#line 168 "structure_reuse.versions.m"
    {
#line 168 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_16, transform_hlds__ctgc__structure_reuse__versions__PPId_7, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_11, &transform_hlds__ctgc__structure_reuse__versions__V_12_12);
    }
#line 172 "structure_reuse.versions.m"
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 171 "structure_reuse.versions.m"
      {
#line 171 "structure_reuse.versions.m"
        {
#line 171 "structure_reuse.versions.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.versions", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.maybe_create_full_reuse_proc_copy\'/6", (MR_String) "procedure already exists");
#line 171 "structure_reuse.versions.m"
          return;
        }
#line 171 "structure_reuse.versions.m"
      }
#line 172 "structure_reuse.versions.m"
    else
#line 173 "structure_reuse.versions.m"
      {
#line 173 "structure_reuse.versions.m"
      }
#line 175 "structure_reuse.versions.m"
    {
#line 175 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(transform_hlds__ctgc__structure_reuse__versions__PPId_7, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_11, transform_hlds__ctgc__structure_reuse__versions__NewPPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15);
    }
#line 176 "structure_reuse.versions.m"
    {
#line 176 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_16, transform_hlds__ctgc__structure_reuse__versions__PPId_7, &transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_13);
    }
#line 180 "structure_reuse.versions.m"
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 177 "structure_reuse.versions.m"
      {
#line 177 "structure_reuse.versions.m"
        MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_22_22;

#line 177 "structure_reuse.versions.m"
        {
#line 177 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(*transform_hlds__ctgc__structure_reuse__versions__NewPPId_8, transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_13, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_16, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_22_22);
        }
#line 178 "structure_reuse.versions.m"
        {
#line 178 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_insert_reuse_version_proc_5_p_0(transform_hlds__ctgc__structure_reuse__versions__PPId_7, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_11, *transform_hlds__ctgc__structure_reuse__versions__NewPPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_22_22, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_17);
#line 178 "structure_reuse.versions.m"
          return;
        }
#line 177 "structure_reuse.versions.m"
      }
#line 180 "structure_reuse.versions.m"
    else
#line 181 "structure_reuse.versions.m"
      {
#line 181 "structure_reuse.versions.m"
        {
#line 181 "structure_reuse.versions.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.versions", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.maybe_create_full_reuse_proc_copy\'/6", (MR_String) "no reuse information");
#line 181 "structure_reuse.versions.m"
          return;
        }
#line 181 "structure_reuse.versions.m"
      }
#line 165 "structure_reuse.versions.m"
  }
#line 161 "structure_reuse.versions.m"
}

#line 141 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_p_0(
#line 141 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8,
#line 141 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_9,
#line 141 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_10,
#line 141 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_0_15,
#line 141 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_16,
#line 141 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17,
#line 141 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18)
#line 141 "structure_reuse.versions.m"
{
#line 147 "structure_reuse.versions.m"
  {
#line 147 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 147 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseAs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_10, (MR_Integer) 0)));
#line 148 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_10, (MR_Integer) 1)));

#line 149 "structure_reuse.versions.m"
    {
#line 149 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PPId_9)));
    }
#line 151 "structure_reuse.versions.m"
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 150 "structure_reuse.versions.m"
      {
#line 150 "structure_reuse.versions.m"
        *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17;
#line 150 "structure_reuse.versions.m"
        *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_16 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_0_15;
#line 150 "structure_reuse.versions.m"
      }
#line 151 "structure_reuse.versions.m"
    else
#line 153 "structure_reuse.versions.m"
      {
#line 151 "structure_reuse.versions.m"
        {
#line 151 "structure_reuse.versions.m"
          transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseAs_13);
        }
#line 153 "structure_reuse.versions.m"
        if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 152 "structure_reuse.versions.m"
          {
#line 152 "structure_reuse.versions.m"
            {
#line 152 "structure_reuse.versions.m"
              MR_Word base;
#line 152 "structure_reuse.versions.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "structure_reuse.versions.m"
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_16 = base;
#line 152 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PPId_9));
#line 152 "structure_reuse.versions.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_0_15));
#line 152 "structure_reuse.versions.m"
            }
#line 152 "structure_reuse.versions.m"
            *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17;
#line 152 "structure_reuse.versions.m"
          }
#line 153 "structure_reuse.versions.m"
        else
#line 155 "structure_reuse.versions.m"
          {
#line 153 "structure_reuse.versions.m"
            {
#line 153 "structure_reuse.versions.m"
              transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseAs_13);
            }
#line 155 "structure_reuse.versions.m"
            if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 154 "structure_reuse.versions.m"
              {
#line 154 "structure_reuse.versions.m"
                MR_Word base;
#line 154 "structure_reuse.versions.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "structure_reuse.versions.m"
                *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18 = base;
#line 154 "structure_reuse.versions.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PPId_9));
#line 154 "structure_reuse.versions.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17));
#line 154 "structure_reuse.versions.m"
              }
#line 155 "structure_reuse.versions.m"
            else
#line 157 "structure_reuse.versions.m"
              {
#line 155 "structure_reuse.versions.m"
                {
#line 155 "structure_reuse.versions.m"
                  transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseAs_13);
                }
#line 157 "structure_reuse.versions.m"
                if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 156 "structure_reuse.versions.m"
                  {
#line 156 "structure_reuse.versions.m"
                  }
#line 157 "structure_reuse.versions.m"
                else
#line 158 "structure_reuse.versions.m"
                  {
#line 158 "structure_reuse.versions.m"
                    {
#line 158 "structure_reuse.versions.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.versions", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.divide_reuse_procs\'/7", (MR_String) "conditions failed");
#line 158 "structure_reuse.versions.m"
                      return;
                    }
#line 158 "structure_reuse.versions.m"
                  }
#line 157 "structure_reuse.versions.m"
                *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17;
#line 157 "structure_reuse.versions.m"
              }
#line 155 "structure_reuse.versions.m"
            *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_16 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_0_15;
#line 155 "structure_reuse.versions.m"
          }
#line 153 "structure_reuse.versions.m"
      }
#line 147 "structure_reuse.versions.m"
  }
#line 141 "structure_reuse.versions.m"
}

#line 54 "structure_reuse.versions.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_p_0(
#line 54 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_5,
#line 54 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_6,
#line 54 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_25,
#line 54 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_26)
#line 54 "structure_reuse.versions.m"
{
#line 500 "structure_reuse.versions.m"
  {
#line 500 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_5, (MR_Integer) 0)));
#line 500 "structure_reuse.versions.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_5, (MR_Integer) 1)));
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__OldPredInfo_10;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__OldProcInfo_11;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__OldPredModule_12;
#line 500 "structure_reuse.versions.m"
    MR_String transform_hlds__ctgc__structure_reuse__versions__OldPredName_13;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Determinism_14;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__NewPPId_15;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Body_18;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_20;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVars_21;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo_23;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Goal_24;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_27_27;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_PredInfo_28_28;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_29_29;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_32_32;
#line 500 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_33_33;
#line 512 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_19_19;

#line 502 "structure_reuse.versions.m"
    {
#line 502 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_25, transform_hlds__ctgc__structure_reuse__versions__PPId_5, &transform_hlds__ctgc__structure_reuse__versions__OldPredInfo_10, &transform_hlds__ctgc__structure_reuse__versions__OldProcInfo_11);
    }
#line 503 "structure_reuse.versions.m"
    {
#line 503 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__OldPredModule_12 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ctgc__structure_reuse__versions__OldPredInfo_10);
    }
#line 504 "structure_reuse.versions.m"
    {
#line 504 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__OldPredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ctgc__structure_reuse__versions__OldPredInfo_10);
    }
#line 505 "structure_reuse.versions.m"
    {
#line 505 "structure_reuse.versions.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ctgc__structure_reuse__versions__OldProcInfo_11, &transform_hlds__ctgc__structure_reuse__versions__Determinism_14);
    }
#line 507 "structure_reuse.versions.m"
    {
#line 507 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(transform_hlds__ctgc__structure_reuse__versions__PPId_5, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_6, &transform_hlds__ctgc__structure_reuse__versions__NewPPId_15, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_25, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_27_27);
    }
#line 509 "structure_reuse.versions.m"
    {
#line 509 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_27_27, transform_hlds__ctgc__structure_reuse__versions__NewPPId_15, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_PredInfo_28_28, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_29_29);
    }
#line 511 "structure_reuse.versions.m"
    {
#line 511 "structure_reuse.versions.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_29_29, &transform_hlds__ctgc__structure_reuse__versions__Body_18);
    }
#line 512 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Body_18, (MR_Integer) 0)));
#line 512 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Body_18, (MR_Integer) 1)));
#line 513 "structure_reuse.versions.m"
    {
#line 513 "structure_reuse.versions.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_29_29, &transform_hlds__ctgc__structure_reuse__versions__HeadVars_21);
    }
#line 515 "structure_reuse.versions.m"
    {
#line 515 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__V_32_32, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__OldPredModule_12));
#line 515 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__V_32_32, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__OldPredName_13));
#line 515 "structure_reuse.versions.m"
    }
#line 514 "structure_reuse.versions.m"
    {
#line 514 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 514 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PredId_8));
#line 514 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ProcId_9));
#line 514 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__HeadVars_21));
#line 514 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 3) = ((MR_Box) ((MR_Integer) 2));
#line 514 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 514 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__V_32_32));
#line 514 "structure_reuse.versions.m"
    }
#line 516 "structure_reuse.versions.m"
    {
#line 516 "structure_reuse.versions.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Determinism_14, transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_20, &transform_hlds__ctgc__structure_reuse__versions__GoalInfo_23);
    }
#line 517 "structure_reuse.versions.m"
    {
#line 517 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__Goal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Goal_24, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22));
#line 517 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Goal_24, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo_23));
#line 517 "structure_reuse.versions.m"
    }
#line 518 "structure_reuse.versions.m"
    {
#line 518 "structure_reuse.versions.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Goal_24, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_29_29, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_33_33);
    }
#line 519 "structure_reuse.versions.m"
    {
#line 519 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__ctgc__structure_reuse__versions__NewPPId_15, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_PredInfo_28_28, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_33_33, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_27_27, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_26);
#line 519 "structure_reuse.versions.m"
      return;
    }
#line 500 "structure_reuse.versions.m"
  }
#line 54 "structure_reuse.versions.m"
}

#line 49 "structure_reuse.versions.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(
#line 49 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_6,
#line 49 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_7,
#line 49 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__NewPPId_8,
#line 49 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_22,
#line 49 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_23)
#line 49 "structure_reuse.versions.m"
{
#line 186 "structure_reuse.versions.m"
  {
#line 186 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ProcInfo0_11;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePredName_12;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredId_13;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_15;
#line 186 "structure_reuse.versions.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_16;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePredId_17;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredTable0_18;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredTable_19;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePreds0_20;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePreds_21;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_24_24;
#line 186 "structure_reuse.versions.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__ProcId_32;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredInfo_33;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredModule_35;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_36;
#line 186 "structure_reuse.versions.m"
    MR_String transform_hlds__ctgc__structure_reuse__versions__PredName_37;
#line 186 "structure_reuse.versions.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__ProcInt_38;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_40_40;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_41_41;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleName_48;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_49;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ProgContext_50;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredOrigin_51;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ImportStatus0_52;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ImportStatus_53;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredMarkers_54;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__MerTypes_55;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__TVarset_56;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ExistQTVars_57;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ProgConstraints_58;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__AssertIds_59;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__VarNameRemap_60;
#line 186 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61;
#line 90 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_31_31;
#line 91 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions___ProcInfo_34;
#line 189 "structure_reuse.versions.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__V_14_14;

#line 187 "structure_reuse.versions.m"
    {
#line 187 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ctgc__structure_reuse__versions__PPId_6, &transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__ProcInfo0_11);
    }
#line 90 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_6, (MR_Integer) 0)));
#line 90 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_6, (MR_Integer) 1)));
#line 91 "structure_reuse.versions.m"
    {
#line 91 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ctgc__structure_reuse__versions__PPId_6, &transform_hlds__ctgc__structure_reuse__versions__PredInfo_33, &transform_hlds__ctgc__structure_reuse__versions___ProcInfo_34);
    }
#line 92 "structure_reuse.versions.m"
    {
#line 92 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__PredModule_35 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo_33);
    }
#line 93 "structure_reuse.versions.m"
    {
#line 93 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo_33);
    }
#line 94 "structure_reuse.versions.m"
    {
#line 94 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__PredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo_33);
    }
#line 95 "structure_reuse.versions.m"
    {
#line 95 "structure_reuse.versions.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__ctgc__structure_reuse__versions__ProcId_32, &transform_hlds__ctgc__structure_reuse__versions__ProcInt_38);
    }
#line 96 "structure_reuse.versions.m"
    {
#line 96 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 96 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__V_40_40, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_36));
#line 96 "structure_reuse.versions.m"
    }
#line 97 "structure_reuse.versions.m"
    {
#line 97 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 97 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 97 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__V_41_41, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ProcInt_38));
#line 97 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__V_41_41, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__NoClobbers_7));
#line 97 "structure_reuse.versions.m"
    }
#line 96 "structure_reuse.versions.m"
    {
#line 96 "structure_reuse.versions.m"
      parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__ctgc__structure_reuse__versions__PredModule_35, (MR_String) "ctgc", transform_hlds__ctgc__structure_reuse__versions__V_40_40, transform_hlds__ctgc__structure_reuse__versions__PredName_37, transform_hlds__ctgc__structure_reuse__versions__V_41_41, &transform_hlds__ctgc__structure_reuse__versions__ReusePredName_12);
    }
#line 189 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_6, (MR_Integer) 0)));
#line 189 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_6, (MR_Integer) 1)));
#line 208 "structure_reuse.versions.m"
    {
#line 208 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__ModuleName_48 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10);
    }
#line 209 "structure_reuse.versions.m"
    {
#line 209 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_49 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10);
    }
#line 210 "structure_reuse.versions.m"
    {
#line 210 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__ProgContext_50);
    }
#line 211 "structure_reuse.versions.m"
    {
#line 211 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__PredOrigin_51);
    }
#line 212 "structure_reuse.versions.m"
    {
#line 212 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__ImportStatus0_52);
    }
#line 215 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__ImportStatus0_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "structure_reuse.versions.m"
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
#line 216 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__ImportStatus_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 217 "structure_reuse.versions.m"
    else
#line 218 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__ImportStatus_53 = transform_hlds__ctgc__structure_reuse__versions__ImportStatus0_52;
#line 220 "structure_reuse.versions.m"
    {
#line 220 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__PredMarkers_54);
    }
#line 221 "structure_reuse.versions.m"
    {
#line 221 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__MerTypes_55);
    }
#line 222 "structure_reuse.versions.m"
    {
#line 222 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__TVarset_56);
    }
#line 223 "structure_reuse.versions.m"
    {
#line 223 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__ExistQTVars_57);
    }
#line 224 "structure_reuse.versions.m"
    {
#line 224 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__ProgConstraints_58);
    }
#line 225 "structure_reuse.versions.m"
    {
#line 225 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_assertions_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__AssertIds_59);
    }
#line 226 "structure_reuse.versions.m"
    {
#line 226 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__VarNameRemap_60);
    }
#line 227 "structure_reuse.versions.m"
    {
#line 227 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 227 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 227 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PredOrigin_51));
#line 227 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PredId_13));
#line 227 "structure_reuse.versions.m"
    }
#line 229 "structure_reuse.versions.m"
    {
#line 229 "structure_reuse.versions.m"
      hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__ctgc__structure_reuse__versions__ModuleName_48, transform_hlds__ctgc__structure_reuse__versions__ReusePredName_12, transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_49, transform_hlds__ctgc__structure_reuse__versions__ProgContext_50, transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61, transform_hlds__ctgc__structure_reuse__versions__ImportStatus_53, transform_hlds__ctgc__structure_reuse__versions__PredMarkers_54, transform_hlds__ctgc__structure_reuse__versions__MerTypes_55, transform_hlds__ctgc__structure_reuse__versions__TVarset_56, transform_hlds__ctgc__structure_reuse__versions__ExistQTVars_57, transform_hlds__ctgc__structure_reuse__versions__ProgConstraints_58, transform_hlds__ctgc__structure_reuse__versions__AssertIds_59, transform_hlds__ctgc__structure_reuse__versions__VarNameRemap_60, transform_hlds__ctgc__structure_reuse__versions__ProcInfo0_11, &transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_16, &transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_15);
    }
#line 195 "structure_reuse.versions.m"
    {
#line 195 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__ctgc__structure_reuse__versions__PredTable0_18);
    }
#line 196 "structure_reuse.versions.m"
    {
#line 196 "structure_reuse.versions.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_15, &transform_hlds__ctgc__structure_reuse__versions__ReusePredId_17, transform_hlds__ctgc__structure_reuse__versions__PredTable0_18, &transform_hlds__ctgc__structure_reuse__versions__PredTable_19);
    }
#line 193 "structure_reuse.versions.m"
    {
#line 193 "structure_reuse.versions.m"
      MR_Word base;
#line 193 "structure_reuse.versions.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 193 "structure_reuse.versions.m"
      *transform_hlds__ctgc__structure_reuse__versions__NewPPId_8 = base;
#line 193 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReusePredId_17));
#line 193 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_16));
#line 193 "structure_reuse.versions.m"
    }
#line 197 "structure_reuse.versions.m"
    {
#line 197 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__ctgc__structure_reuse__versions__PredTable_19, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_24_24);
    }
#line 199 "structure_reuse.versions.m"
    {
#line 199 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_get_structure_reuse_preds_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_24_24, &transform_hlds__ctgc__structure_reuse__versions__ReusePreds0_20);
    }
#line 200 "structure_reuse.versions.m"
    {
#line 200 "structure_reuse.versions.m"
      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReusePredId_17)), transform_hlds__ctgc__structure_reuse__versions__ReusePreds0_20, &transform_hlds__ctgc__structure_reuse__versions__ReusePreds_21);
    }
#line 201 "structure_reuse.versions.m"
    {
#line 201 "structure_reuse.versions.m"
      hlds__hlds_module__module_info_set_structure_reuse_preds_3_p_0(transform_hlds__ctgc__structure_reuse__versions__ReusePreds_21, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_24_24, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_23);
#line 201 "structure_reuse.versions.m"
      return;
    }
#line 186 "structure_reuse.versions.m"
  }
#line 49 "structure_reuse.versions.m"
}

#line 132 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_4(
#line 132 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 132 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 132 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 132 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3)
#line 132 "structure_reuse.versions.m"
{
#line 132 "structure_reuse.versions.m"
  {
#line 132 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
#line 132 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv12_STATE_VARIABLE_ModuleInfo_18;

#line 132 "structure_reuse.versions.m"
    {
#line 132 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__versions__conv12_STATE_VARIABLE_ModuleInfo_18);
    }
#line 132 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv12_STATE_VARIABLE_ModuleInfo_18));
#line 132 "structure_reuse.versions.m"
  }
#line 132 "structure_reuse.versions.m"
}

#line 125 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_3(
#line 125 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 125 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 125 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 125 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3)
#line 125 "structure_reuse.versions.m"
{
#line 125 "structure_reuse.versions.m"
  {
#line 125 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
#line 125 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv9_STATE_VARIABLE_ModuleInfo_15;

#line 125 "structure_reuse.versions.m"
    {
#line 125 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__versions__conv9_STATE_VARIABLE_ModuleInfo_15);
    }
#line 125 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv9_STATE_VARIABLE_ModuleInfo_15));
#line 125 "structure_reuse.versions.m"
  }
#line 125 "structure_reuse.versions.m"
}

#line 119 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_2(
#line 119 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 119 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 119 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 119 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3,
#line 119 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4,
#line 119 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5,
#line 119 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6)
#line 119 "structure_reuse.versions.m"
{
#line 119 "structure_reuse.versions.m"
  {
#line 119 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
#line 119 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv6_NewPPId_8;
#line 119 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv5_STATE_VARIABLE_ModuleInfo_15;
#line 119 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv4_STATE_VARIABLE_ReuseTable_17;

#line 119 "structure_reuse.versions.m"
    {
#line 119 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__versions__conv6_NewPPId_8, ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__versions__conv5_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5), &transform_hlds__ctgc__structure_reuse__versions__conv4_STATE_VARIABLE_ReuseTable_17);
    }
#line 119 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv6_NewPPId_8));
#line 119 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv5_STATE_VARIABLE_ModuleInfo_15));
#line 119 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv4_STATE_VARIABLE_ReuseTable_17));
#line 119 "structure_reuse.versions.m"
  }
#line 119 "structure_reuse.versions.m"
}

#line 112 "structure_reuse.versions.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_1(
#line 112 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
#line 112 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
#line 112 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
#line 112 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3,
#line 112 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4,
#line 112 "structure_reuse.versions.m"
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5,
#line 112 "structure_reuse.versions.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6)
#line 112 "structure_reuse.versions.m"
{
#line 112 "structure_reuse.versions.m"
  {
#line 112 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
#line 112 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_CondPPIds_16;
#line 112 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_UncondPPIds_18;

#line 112 "structure_reuse.versions.m"
    {
#line 112 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_CondPPIds_16, ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5), &transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_UncondPPIds_18);
    }
#line 112 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_CondPPIds_16));
#line 112 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_UncondPPIds_18));
#line 112 "structure_reuse.versions.m"
  }
#line 112 "structure_reuse.versions.m"
}

#line 41 "structure_reuse.versions.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0(
#line 41 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12,
#line 41 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_13,
#line 41 "structure_reuse.versions.m"
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14,
#line 41 "structure_reuse.versions.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15)
#line 41 "structure_reuse.versions.m"
{
#line 107 "structure_reuse.versions.m"
  {
#line 107 "structure_reuse.versions.m"
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeInfo_47_47;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIds_7;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__CondOrigPPIds_9;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__UncondOrigPPIds_10;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseCondPPIds_11;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12, (MR_Integer) 1)));
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_17_17;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_18_18;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_22_22;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_24_24;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_25_25;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_28_28;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_30_30;
#line 107 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_31_31;
#line 109 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12, (MR_Integer) 0)));
#line 112 "structure_reuse.versions.m"
    MR_Word transform_hlds__ctgc__structure_reuse__versions__V_37_37;
#line 112 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv3_CondOrigPPIds_9;
#line 112 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv2_UncondOrigPPIds_10;
#line 119 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv8_STATE_VARIABLE_ModuleInfo_22_22;
#line 119 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv7_STATE_VARIABLE_ReuseTable_13;
#line 125 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv10_STATE_VARIABLE_ModuleInfo_25_25;
#line 127 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv11_STATE_VARIABLE_ModuleInfo_28_28;
#line 132 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv13_STATE_VARIABLE_ModuleInfo_31_31;
#line 134 "structure_reuse.versions.m"
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv14_STATE_VARIABLE_ModuleInfo_15;

#line 109 "structure_reuse.versions.m"
    {
#line 109 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIds_7 = mercury__bimap__coordinates_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__V_16_16);
    }
#line 110 "structure_reuse.versions.m"
    {
#line 110 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8 = mercury__set__from_list_1_f_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIds_7);
    }
#line 112 "structure_reuse.versions.m"
    {
#line 112 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 112 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_17_17, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_2[0]));
#line 112 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_17_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_1));
#line 112 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 112 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_17_17, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8));
#line 112 "structure_reuse.versions.m"
    }
#line 112 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12, (MR_Integer) 0)));
#line 112 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12, (MR_Integer) 1)));
#line 3281 "transform_hlds.ctgc.structure_reuse.versions.c"
    transform_hlds__ctgc__structure_reuse__versions__TypeInfo_47_47 = (MR_Word) &transform_hlds__ctgc__structure_reuse__versions_scalar_common_1[0];
#line 112 "structure_reuse.versions.m"
    {
#line 112 "structure_reuse.versions.m"
      mercury__map__foldl2_6_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__versions__TypeInfo_47_47, transform_hlds__ctgc__structure_reuse__versions__TypeInfo_47_47, transform_hlds__ctgc__structure_reuse__versions__V_17_17, transform_hlds__ctgc__structure_reuse__versions__V_18_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__ctgc__structure_reuse__versions__conv3_CondOrigPPIds_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__ctgc__structure_reuse__versions__conv2_UncondOrigPPIds_10);
    }
#line 112 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__CondOrigPPIds_9 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv3_CondOrigPPIds_9);
#line 112 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__UncondOrigPPIds_10 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv2_UncondOrigPPIds_10);
#line 3292 "transform_hlds.ctgc.structure_reuse.versions.c"
    transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 119 "structure_reuse.versions.m"
    {
#line 119 "structure_reuse.versions.m"
      mercury__list__map_foldl2_7_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__versions_scalar_common_4[0], transform_hlds__ctgc__structure_reuse__versions__CondOrigPPIds_9, &transform_hlds__ctgc__structure_reuse__versions__ReuseCondPPIds_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14)), &transform_hlds__ctgc__structure_reuse__versions__conv8_STATE_VARIABLE_ModuleInfo_22_22, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12)), &transform_hlds__ctgc__structure_reuse__versions__conv7_STATE_VARIABLE_ReuseTable_13);
    }
#line 119 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_22_22 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv8_STATE_VARIABLE_ModuleInfo_22_22);
#line 119 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_13 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv7_STATE_VARIABLE_ReuseTable_13);
#line 125 "structure_reuse.versions.m"
    {
#line 125 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 125 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_24_24, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[0]));
#line 125 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_24_24, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_3));
#line 125 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 125 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_24_24, 3) = ((MR_Box) ((MR_Integer) 0));
#line 125 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_24_24, 4) = ((MR_Box) (*transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_13));
#line 125 "structure_reuse.versions.m"
    }
#line 125 "structure_reuse.versions.m"
    {
#line 125 "structure_reuse.versions.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54, transform_hlds__ctgc__structure_reuse__versions__V_24_24, transform_hlds__ctgc__structure_reuse__versions__ReuseCondPPIds_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_22_22)), &transform_hlds__ctgc__structure_reuse__versions__conv10_STATE_VARIABLE_ModuleInfo_25_25);
    }
#line 125 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_25_25 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv10_STATE_VARIABLE_ModuleInfo_25_25);
#line 127 "structure_reuse.versions.m"
    {
#line 127 "structure_reuse.versions.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54, transform_hlds__ctgc__structure_reuse__versions__V_24_24, transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIds_7, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_25_25)), &transform_hlds__ctgc__structure_reuse__versions__conv11_STATE_VARIABLE_ModuleInfo_28_28);
    }
#line 127 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv11_STATE_VARIABLE_ModuleInfo_28_28);
#line 132 "structure_reuse.versions.m"
    {
#line 132 "structure_reuse.versions.m"
      transform_hlds__ctgc__structure_reuse__versions__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 132 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_30_30, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[0]));
#line 132 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_30_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_4));
#line 132 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 132 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_30_30, 3) = ((MR_Box) ((MR_Integer) 1));
#line 132 "structure_reuse.versions.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__V_30_30, 4) = ((MR_Box) (*transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_13));
#line 132 "structure_reuse.versions.m"
    }
#line 132 "structure_reuse.versions.m"
    {
#line 132 "structure_reuse.versions.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54, transform_hlds__ctgc__structure_reuse__versions__V_30_30, transform_hlds__ctgc__structure_reuse__versions__CondOrigPPIds_9, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_28_28)), &transform_hlds__ctgc__structure_reuse__versions__conv13_STATE_VARIABLE_ModuleInfo_31_31);
    }
#line 132 "structure_reuse.versions.m"
    transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv13_STATE_VARIABLE_ModuleInfo_31_31);
#line 134 "structure_reuse.versions.m"
    {
#line 134 "structure_reuse.versions.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54, transform_hlds__ctgc__structure_reuse__versions__V_30_30, transform_hlds__ctgc__structure_reuse__versions__UncondOrigPPIds_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_31_31)), &transform_hlds__ctgc__structure_reuse__versions__conv14_STATE_VARIABLE_ModuleInfo_15);
    }
#line 134 "structure_reuse.versions.m"
    *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv14_STATE_VARIABLE_ModuleInfo_15);
#line 107 "structure_reuse.versions.m"
  }
#line 41 "structure_reuse.versions.m"
}

void mercury__transform_hlds__ctgc__structure_reuse__versions__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__versions__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__versions__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.structure_reuse.versions. */
