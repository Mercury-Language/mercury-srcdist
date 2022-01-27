/*
** Automatically generated from `rbmm.region_instruction.m'
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


/* :- module transform_hlds.rbmm.region_instruction. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__region_instruction__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_instruction.mih"


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
#include "transform_hlds.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




#line 149 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 152 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 155 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 158 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 161 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 164 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 167 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 170 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 173 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 176 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 179 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 182 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 185 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 188 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 191 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_instrs_before_after_0_0[2];

#line 194 "transform_hlds.rbmm.region_instruction.c"
static const MR_ConstString transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_names_instrs_before_after_0_0[2];

#line 197 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0;

#line 200 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0[1];

#line 203 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0[1];

#line 206 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0[1];

#line 209 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0[1];

#line 212 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_0[1];

#line 215 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0;

#line 218 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_1[1];

#line 221 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1;

#line 224 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_2[2];

#line 227 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2;

#line 230 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_0[1];

#line 233 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_1[1];

#line 236 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_2[1];

#line 239 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_region_instr_0[3];

#line 242 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0[3];

#line 245 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0[3];

#line 248 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 251 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0;

#line 254 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1;

#line 257 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2;

#line 260 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_value_ordered_region_instr_type_0[3];

#line 263 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0[3];

#line 266 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0[3];

#line 269 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0_10001(
#line 272 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 274 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2);

#line 277 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0_10001(
#line 280 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 282 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 284 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 287 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0_10001(
#line 290 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 292 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2);

#line 295 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0_10001(
#line 298 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 300 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 302 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 305 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0_10001(
#line 308 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 310 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2);

#line 313 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0_10001(
#line 316 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 318 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 320 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 323 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0_10001(
#line 326 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 328 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2);

#line 331 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0_10001(
#line 334 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 336 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 338 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 341 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0_10001(
#line 344 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 346 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2);

#line 349 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0_10001(
#line 352 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 354 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 356 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 478 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(
#line 478 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RegionInstrType_7,
#line 478 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_8,
#line 478 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Graph_9,
#line 478 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Region_10,
#line 478 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17,
#line 478 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_18);

#line 446 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_p_0(
#line 446 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RegionInstType_7,
#line 446 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_8,
#line 446 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Graph_9,
#line 446 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Region_10,
#line 446 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16,
#line 446 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_17);

#line 432 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_p_0(
#line 432 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDead_7,
#line 432 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__CalleeDeadR_8,
#line 432 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__SourceRegion_9,
#line 432 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__TargetRegion_10,
#line 432 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_0_12,
#line 432 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_13);

#line 414 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_p_0(
#line 414 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeLive_7,
#line 414 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__CalleeBornR_8,
#line 414 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__SourceRegion_9,
#line 414 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__TargetRegion_10,
#line 414 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_0_12,
#line 414 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_13);

#line 350 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_2(
#line 350 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 350 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 350 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 350 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 350 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_4);

#line 342 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_1(
#line 342 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 342 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 342 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 342 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 342 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_4);

#line 316 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0(
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Expr_12,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_13,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeLive_14,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDead_15,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_16,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_17,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_18,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_19,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_20,
#line 316 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21,
#line 316 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22);

#line 280 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_3(
#line 280 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 280 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 280 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 280 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 277 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_2(
#line 277 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 277 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 277 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 277 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 274 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_1(
#line 274 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 274 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 274 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 274 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 229 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0(
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_2,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornR_3,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadR_4,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalR_5,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRBefore_6,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRAfter_7,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_9,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_10,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_11,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_12,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint_13,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_14,
#line 229 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_15,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_16,
#line 229 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_17,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_18,
#line 229 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_19,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_20,
#line 229 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_21);

#line 200 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_p_0(
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_2,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornR_3,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadR_4,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalR_5,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRBefore_6,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRAfter_7,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_9,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_10,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_11,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_12,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_13,
#line 200 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_14,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_15,
#line 200 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_16,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_17,
#line 200 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_18,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_19,
#line 200 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_20);

#line 156 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_p_0(
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_20,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__PredId_21,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfoTable_22,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ExecPathTable_23,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRBeforeTable_24,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRAfterTable_25,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegionTable_26,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_27,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_28,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalRTable_29,
#line 156 "rbmm.region_instruction.m"
  MR_Integer transform_hlds__rbmm__region_instruction__ProcId_30,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_49,
#line 156 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_50,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_51,
#line 156 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_52,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_53,
#line 156 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_54,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_55,
#line 156 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_56);

#line 150 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0_1(
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 150 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_4,
#line 150 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_5,
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_6,
#line 150 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_7,
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_8,
#line 150 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_9);

#line 133 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0(
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_19,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfoTable_20,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ExecPathTable_21,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRBeforeTable_22,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRAfterTable_23,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegionTable_24,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_25,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_26,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalRTable_27,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__PredId_28,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_35,
#line 133 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_36,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_37,
#line 133 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_38,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_39,
#line 133 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_40,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_41,
#line 133 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_42);

#line 125 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0_1(
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 125 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_4,
#line 125 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_5,
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_6,
#line 125 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_7,
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_8,
#line 125 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_9);


static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_3[1][21];

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_4[1][22];

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_5[2][9];




static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_2[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_3[1][21] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_4[1][22] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 19)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_5[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
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



#line 908 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 917 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 926 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 934 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 942 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 951 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 959 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 968 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 977 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 986 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 995 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1004 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1013 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1021 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1029 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_instrs_before_after_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
};

#line 1035 "transform_hlds.rbmm.region_instruction.c"
static const MR_ConstString transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_names_instrs_before_after_0_0[2] = {
  (MR_String) "instrs_before",
  (MR_String) "instrs_after"
};

#line 1041 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0 = {
  (MR_String) "instrs_before_after",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_instrs_before_after_0_0,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_names_instrs_before_after_0_0,
  NULL,
  NULL
};

#line 1056 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0[1] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0
};

#line 1061 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0
  }
};

#line 1070 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0[1] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0
};

#line 1075 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0[1] = {
  (MR_Integer) 0
};

#line 1080 "transform_hlds.rbmm.region_instruction.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "instrs_before_after",
  {
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0
  },
  {
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0
};

#line 1101 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1106 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0 = {
  (MR_String) "create_region",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_0,
  NULL,
  NULL,
  NULL
};

#line 1121 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1126 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1 = {
  (MR_String) "remove_region",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_1,
  NULL,
  NULL,
  NULL
};

#line 1141 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1147 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2 = {
  (MR_String) "rename_region",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_2,
  NULL,
  NULL,
  NULL
};

#line 1162 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_0[1] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0
};

#line 1167 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_1[1] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1
};

#line 1172 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_2[1] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2
};

#line 1177 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_region_instr_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_2
  }
};

#line 1196 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0[3] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2
};

#line 1203 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1210 "transform_hlds.rbmm.region_instruction.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr",
  {
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0
  },
  {
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_region_instr_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0
};

#line 1231 "transform_hlds.rbmm.region_instruction.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr_proc",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1252 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1261 "transform_hlds.rbmm.region_instruction.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1282 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0 = {
  (MR_String) "create_region_instr",
  (MR_Integer) 0
};

#line 1288 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1 = {
  (MR_String) "remove_region_instr",
  (MR_Integer) 1
};

#line 1294 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2 = {
  (MR_String) "renaming_region_instr",
  (MR_Integer) 2
};

#line 1300 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_value_ordered_region_instr_type_0[3] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2
};

#line 1307 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0[3] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2
};

#line 1314 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1321 "transform_hlds.rbmm.region_instruction.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr_type",
  {
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0
  },
  {
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_value_ordered_region_instr_type_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0
};

#line 1342 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0_10001(
#line 1345 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1347 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2)
#line 1349 "transform_hlds.rbmm.region_instruction.c"
{
#line 1351 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1353 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 1356 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1358 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0(((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2));
    }
#line 1361 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1363 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1365 "transform_hlds.rbmm.region_instruction.c"
}

#line 1368 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0_10001(
#line 1371 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1373 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 1375 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 1377 "transform_hlds.rbmm.region_instruction.c"
{
#line 1379 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1381 "transform_hlds.rbmm.region_instruction.c"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1;

#line 1384 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1386 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0(&transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3));
    }
#line 1389 "transform_hlds.rbmm.region_instruction.c"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1));
#line 1391 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1393 "transform_hlds.rbmm.region_instruction.c"
}

#line 1396 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0_10001(
#line 1399 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1401 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2)
#line 1403 "transform_hlds.rbmm.region_instruction.c"
{
#line 1405 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1407 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 1410 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1412 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0(((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2));
    }
#line 1415 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1417 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1419 "transform_hlds.rbmm.region_instruction.c"
}

#line 1422 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0_10001(
#line 1425 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1427 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 1429 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 1431 "transform_hlds.rbmm.region_instruction.c"
{
#line 1433 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1435 "transform_hlds.rbmm.region_instruction.c"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1;

#line 1438 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1440 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0(&transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3));
    }
#line 1443 "transform_hlds.rbmm.region_instruction.c"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1));
#line 1445 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1447 "transform_hlds.rbmm.region_instruction.c"
}

#line 1450 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0_10001(
#line 1453 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1455 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2)
#line 1457 "transform_hlds.rbmm.region_instruction.c"
{
#line 1459 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1461 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 1464 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1466 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0(((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2));
    }
#line 1469 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1471 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1473 "transform_hlds.rbmm.region_instruction.c"
}

#line 1476 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0_10001(
#line 1479 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1481 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 1483 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 1485 "transform_hlds.rbmm.region_instruction.c"
{
#line 1487 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1489 "transform_hlds.rbmm.region_instruction.c"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1;

#line 1492 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1494 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0(&transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3));
    }
#line 1497 "transform_hlds.rbmm.region_instruction.c"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1));
#line 1499 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1501 "transform_hlds.rbmm.region_instruction.c"
}

#line 1504 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0_10001(
#line 1507 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1509 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2)
#line 1511 "transform_hlds.rbmm.region_instruction.c"
{
#line 1513 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1515 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 1518 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1520 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0(((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2));
    }
#line 1523 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1525 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1527 "transform_hlds.rbmm.region_instruction.c"
}

#line 1530 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0_10001(
#line 1533 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1535 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 1537 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 1539 "transform_hlds.rbmm.region_instruction.c"
{
#line 1541 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1543 "transform_hlds.rbmm.region_instruction.c"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1;

#line 1546 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1548 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0(&transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3));
    }
#line 1551 "transform_hlds.rbmm.region_instruction.c"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1));
#line 1553 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1555 "transform_hlds.rbmm.region_instruction.c"
}

#line 1558 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0_10001(
#line 1561 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1563 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2)
#line 1565 "transform_hlds.rbmm.region_instruction.c"
{
#line 1567 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1569 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 1572 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1574 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0(((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2));
    }
#line 1577 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1579 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1581 "transform_hlds.rbmm.region_instruction.c"
}

#line 1584 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0_10001(
#line 1587 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1589 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 1591 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 1593 "transform_hlds.rbmm.region_instruction.c"
{
#line 1595 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1597 "transform_hlds.rbmm.region_instruction.c"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1;

#line 1600 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1602 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0(&transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3));
    }
#line 1605 "transform_hlds.rbmm.region_instruction.c"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1));
#line 1607 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1609 "transform_hlds.rbmm.region_instruction.c"
}

#line 68 "rbmm.region_instruction.m"
void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0(
#line 68 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 68 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_2,
#line 68 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__3_3)
#line 68 "rbmm.region_instruction.m"
{
#line 68 "rbmm.region_instruction.m"
  {
#line 68 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 68 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__rbmm__region_instruction__HeadVar__2_2;
#line 68 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__rbmm__region_instruction__HeadVar__3_3;

#line 68 "rbmm.region_instruction.m"
    {
#line 68 "rbmm.region_instruction.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__rbmm__region_instruction__HeadVar__1_1, transform_hlds__rbmm__region_instruction__Cast_HeadVar1_4, transform_hlds__rbmm__region_instruction__Cast_HeadVar2_5);
#line 68 "rbmm.region_instruction.m"
      return;
    }
#line 68 "rbmm.region_instruction.m"
  }
#line 68 "rbmm.region_instruction.m"
}

#line 68 "rbmm.region_instruction.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0(
#line 68 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_1,
#line 68 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_2)
#line 68 "rbmm.region_instruction.m"
{
#line 1653 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1655 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__HeadVar__2_1 == transform_hlds__rbmm__region_instruction__HeadVar__2_2);

#line 1658 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1660 "transform_hlds.rbmm.region_instruction.c"
  }
#line 68 "rbmm.region_instruction.m"
}

#line 31 "rbmm.region_instruction.m"
void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0(
#line 31 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 31 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_2,
#line 31 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__3_3)
#line 31 "rbmm.region_instruction.m"
{
#line 31 "rbmm.region_instruction.m"
  {
#line 31 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 31 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__Cast_HeadVar1_4 = transform_hlds__rbmm__region_instruction__HeadVar__2_2;
#line 31 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__Cast_HeadVar2_5 = transform_hlds__rbmm__region_instruction__HeadVar__3_3;

#line 31 "rbmm.region_instruction.m"
    {
#line 31 "rbmm.region_instruction.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[3], transform_hlds__rbmm__region_instruction__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar2_5)));
#line 31 "rbmm.region_instruction.m"
      return;
    }
#line 31 "rbmm.region_instruction.m"
  }
#line 31 "rbmm.region_instruction.m"
}

#line 31 "rbmm.region_instruction.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0(
#line 31 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 31 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_2)
#line 31 "rbmm.region_instruction.m"
{
#line 31 "rbmm.region_instruction.m"
  {
#line 31 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 31 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__Cast_HeadVar1_3 = transform_hlds__rbmm__region_instruction__HeadVar__1_1;
#line 31 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__Cast_HeadVar2_4 = transform_hlds__rbmm__region_instruction__HeadVar__2_2;

#line 31 "rbmm.region_instruction.m"
    {
#line 31 "rbmm.region_instruction.m"
      return transform_hlds__rbmm__region_instruction__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[3], ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar2_4)));
    }
#line 31 "rbmm.region_instruction.m"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 31 "rbmm.region_instruction.m"
  }
#line 31 "rbmm.region_instruction.m"
}

#line 34 "rbmm.region_instruction.m"
void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0(
#line 34 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 34 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_2,
#line 34 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__3_3)
#line 34 "rbmm.region_instruction.m"
{
#line 34 "rbmm.region_instruction.m"
  {
#line 34 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 34 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__Cast_HeadVar1_4 = transform_hlds__rbmm__region_instruction__HeadVar__2_2;
#line 34 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__Cast_HeadVar2_5 = transform_hlds__rbmm__region_instruction__HeadVar__3_3;

#line 34 "rbmm.region_instruction.m"
    {
#line 34 "rbmm.region_instruction.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[1], transform_hlds__rbmm__region_instruction__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar2_5)));
#line 34 "rbmm.region_instruction.m"
      return;
    }
#line 34 "rbmm.region_instruction.m"
  }
#line 34 "rbmm.region_instruction.m"
}

#line 34 "rbmm.region_instruction.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0(
#line 34 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 34 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_2)
#line 34 "rbmm.region_instruction.m"
{
#line 34 "rbmm.region_instruction.m"
  {
#line 34 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 34 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__Cast_HeadVar1_3 = transform_hlds__rbmm__region_instruction__HeadVar__1_1;
#line 34 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__Cast_HeadVar2_4 = transform_hlds__rbmm__region_instruction__HeadVar__2_2;

#line 34 "rbmm.region_instruction.m"
    {
#line 34 "rbmm.region_instruction.m"
      return transform_hlds__rbmm__region_instruction__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar2_4)));
    }
#line 34 "rbmm.region_instruction.m"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 34 "rbmm.region_instruction.m"
  }
#line 34 "rbmm.region_instruction.m"
}

#line 49 "rbmm.region_instruction.m"
void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0(
#line 49 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 49 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_2,
#line 49 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__3_3)
#line 49 "rbmm.region_instruction.m"
{
#line 49 "rbmm.region_instruction.m"
  {
#line 49 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 49 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__CastX_29 = (MR_Integer) transform_hlds__rbmm__region_instruction__HeadVar__2_2;
#line 49 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__CastY_30 = (MR_Integer) transform_hlds__rbmm__region_instruction__HeadVar__3_3;

#line 49 "rbmm.region_instruction.m"
    transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__CastX_29 == transform_hlds__rbmm__region_instruction__CastY_30);
#line 49 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 1813 "transform_hlds.rbmm.region_instruction.c"
      *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 0;
#line 49 "rbmm.region_instruction.m"
    else
#line 49 "rbmm.region_instruction.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 49 "rbmm.region_instruction.m"
        {
#line 49 "rbmm.region_instruction.m"
          MR_String transform_hlds__rbmm__region_instruction__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "rbmm.region_instruction.m"
          if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 49 "rbmm.region_instruction.m"
            {
#line 49 "rbmm.region_instruction.m"
              MR_String transform_hlds__rbmm__region_instruction__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__3_3, (MR_Integer) 0)));

#line 49 "rbmm.region_instruction.m"
              {
#line 49 "rbmm.region_instruction.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(transform_hlds__rbmm__region_instruction__HeadVar__1_1, transform_hlds__rbmm__region_instruction__V_35_35, transform_hlds__rbmm__region_instruction__V_5_5);
#line 49 "rbmm.region_instruction.m"
                return;
              }
#line 49 "rbmm.region_instruction.m"
            }
#line 49 "rbmm.region_instruction.m"
          else
#line 49 "rbmm.region_instruction.m"
            if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1844 "transform_hlds.rbmm.region_instruction.c"
              *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "rbmm.region_instruction.m"
            else
#line 1848 "transform_hlds.rbmm.region_instruction.c"
              *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "rbmm.region_instruction.m"
        }
#line 49 "rbmm.region_instruction.m"
      else
#line 49 "rbmm.region_instruction.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 49 "rbmm.region_instruction.m"
          {
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "rbmm.region_instruction.m"
            if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1863 "transform_hlds.rbmm.region_instruction.c"
              *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "rbmm.region_instruction.m"
            else
#line 49 "rbmm.region_instruction.m"
              if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 49 "rbmm.region_instruction.m"
                {
#line 49 "rbmm.region_instruction.m"
                  MR_String transform_hlds__rbmm__region_instruction__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__3_3, (MR_Integer) 0)));

#line 49 "rbmm.region_instruction.m"
                  {
#line 49 "rbmm.region_instruction.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(transform_hlds__rbmm__region_instruction__HeadVar__1_1, transform_hlds__rbmm__region_instruction__V_36_36, transform_hlds__rbmm__region_instruction__V_14_14);
#line 49 "rbmm.region_instruction.m"
                    return;
                  }
#line 49 "rbmm.region_instruction.m"
                }
#line 49 "rbmm.region_instruction.m"
              else
#line 1885 "transform_hlds.rbmm.region_instruction.c"
                *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "rbmm.region_instruction.m"
          }
#line 49 "rbmm.region_instruction.m"
        else
#line 49 "rbmm.region_instruction.m"
          {
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 1)));
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "rbmm.region_instruction.m"
            if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1900 "transform_hlds.rbmm.region_instruction.c"
              *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "rbmm.region_instruction.m"
            else
#line 49 "rbmm.region_instruction.m"
              if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1906 "transform_hlds.rbmm.region_instruction.c"
                *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "rbmm.region_instruction.m"
              else
#line 49 "rbmm.region_instruction.m"
                {
#line 49 "rbmm.region_instruction.m"
                  MR_String transform_hlds__rbmm__region_instruction__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__HeadVar__3_3, (MR_Integer) 0)));
#line 49 "rbmm.region_instruction.m"
                  MR_String transform_hlds__rbmm__region_instruction__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__HeadVar__3_3, (MR_Integer) 1)));
#line 49 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__V_28_28;

#line 49 "rbmm.region_instruction.m"
                  {
#line 49 "rbmm.region_instruction.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(&transform_hlds__rbmm__region_instruction__V_28_28, transform_hlds__rbmm__region_instruction__V_38_38, transform_hlds__rbmm__region_instruction__V_26_26);
                  }
#line 1924 "transform_hlds.rbmm.region_instruction.c"
                  transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__V_28_28 == (MR_Integer) 0);
#line 49 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__succeeded = !(transform_hlds__rbmm__region_instruction__succeeded);
#line 49 "rbmm.region_instruction.m"
                  if (transform_hlds__rbmm__region_instruction__succeeded)
#line 49 "rbmm.region_instruction.m"
                    *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = transform_hlds__rbmm__region_instruction__V_28_28;
#line 49 "rbmm.region_instruction.m"
                  else
#line 49 "rbmm.region_instruction.m"
                    {
#line 49 "rbmm.region_instruction.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(transform_hlds__rbmm__region_instruction__HeadVar__1_1, transform_hlds__rbmm__region_instruction__V_37_37, transform_hlds__rbmm__region_instruction__V_27_27);
#line 49 "rbmm.region_instruction.m"
                      return;
                    }
#line 49 "rbmm.region_instruction.m"
                }
#line 49 "rbmm.region_instruction.m"
          }
#line 49 "rbmm.region_instruction.m"
  }
#line 49 "rbmm.region_instruction.m"
}

#line 49 "rbmm.region_instruction.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0(
#line 49 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 49 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_2)
#line 49 "rbmm.region_instruction.m"
{
#line 49 "rbmm.region_instruction.m"
  {
#line 49 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 49 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__CastX_11 = (MR_Integer) transform_hlds__rbmm__region_instruction__HeadVar__1_1;
#line 49 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__CastY_12 = (MR_Integer) transform_hlds__rbmm__region_instruction__HeadVar__2_2;

#line 49 "rbmm.region_instruction.m"
    transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__CastX_11 == transform_hlds__rbmm__region_instruction__CastY_12);
#line 49 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 49 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 49 "rbmm.region_instruction.m"
    else
#line 49 "rbmm.region_instruction.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 49 "rbmm.region_instruction.m"
        {
#line 49 "rbmm.region_instruction.m"
          MR_String transform_hlds__rbmm__region_instruction__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 0)));
#line 49 "rbmm.region_instruction.m"
          MR_String transform_hlds__rbmm__region_instruction__V_4_4;

#line 49 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 49 "rbmm.region_instruction.m"
          if (transform_hlds__rbmm__region_instruction__succeeded)
#line 49 "rbmm.region_instruction.m"
            {
#line 49 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));
#line 1993 "transform_hlds.rbmm.region_instruction.c"
              transform_hlds__rbmm__region_instruction__succeeded = (strcmp(transform_hlds__rbmm__region_instruction__V_3_3, transform_hlds__rbmm__region_instruction__V_4_4) == 0);
#line 49 "rbmm.region_instruction.m"
            }
#line 49 "rbmm.region_instruction.m"
        }
#line 49 "rbmm.region_instruction.m"
      else
#line 49 "rbmm.region_instruction.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 49 "rbmm.region_instruction.m"
          {
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 0)));
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_6_6;

#line 49 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 49 "rbmm.region_instruction.m"
            if (transform_hlds__rbmm__region_instruction__succeeded)
#line 49 "rbmm.region_instruction.m"
              {
#line 49 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));
#line 2018 "transform_hlds.rbmm.region_instruction.c"
                transform_hlds__rbmm__region_instruction__succeeded = (strcmp(transform_hlds__rbmm__region_instruction__V_5_5, transform_hlds__rbmm__region_instruction__V_6_6) == 0);
#line 49 "rbmm.region_instruction.m"
              }
#line 49 "rbmm.region_instruction.m"
          }
#line 49 "rbmm.region_instruction.m"
        else
#line 49 "rbmm.region_instruction.m"
          {
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 0)));
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 1)));
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_9_9;
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_10_10;

#line 49 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 49 "rbmm.region_instruction.m"
            if (transform_hlds__rbmm__region_instruction__succeeded)
#line 49 "rbmm.region_instruction.m"
              {
#line 49 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));
#line 49 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 1)));
#line 2047 "transform_hlds.rbmm.region_instruction.c"
                transform_hlds__rbmm__region_instruction__succeeded = (strcmp(transform_hlds__rbmm__region_instruction__V_7_7, transform_hlds__rbmm__region_instruction__V_9_9) == 0);
#line 49 "rbmm.region_instruction.m"
                if (transform_hlds__rbmm__region_instruction__succeeded)
#line 2051 "transform_hlds.rbmm.region_instruction.c"
                  transform_hlds__rbmm__region_instruction__succeeded = (strcmp(transform_hlds__rbmm__region_instruction__V_8_8, transform_hlds__rbmm__region_instruction__V_10_10) == 0);
#line 49 "rbmm.region_instruction.m"
              }
#line 49 "rbmm.region_instruction.m"
          }
#line 49 "rbmm.region_instruction.m"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 49 "rbmm.region_instruction.m"
  }
#line 49 "rbmm.region_instruction.m"
}

#line 38 "rbmm.region_instruction.m"
void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0(
#line 38 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 38 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_2,
#line 38 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__3_3)
#line 38 "rbmm.region_instruction.m"
{
#line 38 "rbmm.region_instruction.m"
  {
#line 38 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 38 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__CastX_9 = (MR_Integer) transform_hlds__rbmm__region_instruction__HeadVar__2_2;
#line 38 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__CastY_10 = (MR_Integer) transform_hlds__rbmm__region_instruction__HeadVar__3_3;

#line 38 "rbmm.region_instruction.m"
    transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__CastX_9 == transform_hlds__rbmm__region_instruction__CastY_10);
#line 38 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 2088 "transform_hlds.rbmm.region_instruction.c"
      *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 0;
#line 38 "rbmm.region_instruction.m"
    else
#line 38 "rbmm.region_instruction.m"
      {
#line 38 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__3_3, (MR_Integer) 0)));
#line 38 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_8_8;

#line 38 "rbmm.region_instruction.m"
        {
#line 38 "rbmm.region_instruction.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[3], &transform_hlds__rbmm__region_instruction__V_8_8, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_4_4)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_6_6)));
        }
#line 2110 "transform_hlds.rbmm.region_instruction.c"
        transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__V_8_8 == (MR_Integer) 0);
#line 38 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = !(transform_hlds__rbmm__region_instruction__succeeded);
#line 38 "rbmm.region_instruction.m"
        if (transform_hlds__rbmm__region_instruction__succeeded)
#line 38 "rbmm.region_instruction.m"
          *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = transform_hlds__rbmm__region_instruction__V_8_8;
#line 38 "rbmm.region_instruction.m"
        else
#line 38 "rbmm.region_instruction.m"
          {
#line 38 "rbmm.region_instruction.m"
            {
#line 38 "rbmm.region_instruction.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[3], transform_hlds__rbmm__region_instruction__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_5_5)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_7_7)));
#line 38 "rbmm.region_instruction.m"
              return;
            }
#line 38 "rbmm.region_instruction.m"
          }
#line 38 "rbmm.region_instruction.m"
      }
#line 38 "rbmm.region_instruction.m"
  }
#line 38 "rbmm.region_instruction.m"
}

#line 38 "rbmm.region_instruction.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0(
#line 38 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 38 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__2_2)
#line 38 "rbmm.region_instruction.m"
{
#line 38 "rbmm.region_instruction.m"
  {
#line 38 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 38 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__CastX_7 = (MR_Integer) transform_hlds__rbmm__region_instruction__HeadVar__1_1;
#line 38 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__CastY_8 = (MR_Integer) transform_hlds__rbmm__region_instruction__HeadVar__2_2;

#line 38 "rbmm.region_instruction.m"
    transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__CastX_7 == transform_hlds__rbmm__region_instruction__CastY_8);
#line 38 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 38 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 38 "rbmm.region_instruction.m"
    else
#line 38 "rbmm.region_instruction.m"
      {
#line 38 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_10_10;
#line 38 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 0)));
#line 38 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 1)));

#line 2177 "transform_hlds.rbmm.region_instruction.c"
        {
#line 2179 "transform_hlds.rbmm.region_instruction.c"
          transform_hlds__rbmm__region_instruction__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[3], ((MR_Box) (transform_hlds__rbmm__region_instruction__V_3_3)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_5_5)));
        }
#line 38 "rbmm.region_instruction.m"
        if (transform_hlds__rbmm__region_instruction__succeeded)
#line 38 "rbmm.region_instruction.m"
          {
#line 2186 "transform_hlds.rbmm.region_instruction.c"
            transform_hlds__rbmm__region_instruction__TypeInfo_10_10 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[3];
#line 2188 "transform_hlds.rbmm.region_instruction.c"
            {
#line 2190 "transform_hlds.rbmm.region_instruction.c"
              return transform_hlds__rbmm__region_instruction__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__region_instruction__TypeInfo_10_10, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_4_4)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_6_6)));
            }
#line 38 "rbmm.region_instruction.m"
          }
#line 38 "rbmm.region_instruction.m"
      }
#line 38 "rbmm.region_instruction.m"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 38 "rbmm.region_instruction.m"
  }
#line 38 "rbmm.region_instruction.m"
}

#line 478 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(
#line 478 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RegionInstrType_7,
#line 478 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_8,
#line 478 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Graph_9,
#line 478 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Region_10,
#line 478 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17,
#line 478 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_18)
#line 478 "rbmm.region_instruction.m"
{
#line 483 "rbmm.region_instruction.m"
  {
#line 483 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 483 "rbmm.region_instruction.m"
    MR_String transform_hlds__rbmm__region_instruction__RegionName_12;
#line 483 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__RegionInstruction_13;
#line 507 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__InstrsBefore_14;
#line 507 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__InstrsAfter_15;
#line 489 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_19_19;
#line 489 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv0_V_19_19;

#line 484 "rbmm.region_instruction.m"
    {
#line 484 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__RegionName_12 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_instruction__Graph_9, transform_hlds__rbmm__region_instruction__Region_10);
    }
#line 519 "rbmm.region_instruction.m"
    if ((transform_hlds__rbmm__region_instruction__RegionInstrType_7 == (MR_Integer) 0))
#line 520 "rbmm.region_instruction.m"
      {
#line 520 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__RegionInstruction_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 520 "rbmm.region_instruction.m"
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RegionInstruction_13, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionName_12));
#line 520 "rbmm.region_instruction.m"
      }
#line 519 "rbmm.region_instruction.m"
    else
#line 519 "rbmm.region_instruction.m"
      if ((transform_hlds__rbmm__region_instruction__RegionInstrType_7 == (MR_Integer) 1))
#line 523 "rbmm.region_instruction.m"
        {
#line 523 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__RegionInstruction_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 523 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__RegionInstruction_13, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionName_12));
#line 523 "rbmm.region_instruction.m"
        }
#line 519 "rbmm.region_instruction.m"
      else
#line 525 "rbmm.region_instruction.m"
        {
#line 526 "rbmm.region_instruction.m"
          {
#line 526 "rbmm.region_instruction.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_instruction", (MR_String) "predicate \140transform_hlds.rbmm.region_instruction.make_create_or_remove_instruction\'/3", (MR_String) "unexpected region instruction type");
#line 526 "rbmm.region_instruction.m"
            return;
          }
#line 525 "rbmm.region_instruction.m"
        }
#line 489 "rbmm.region_instruction.m"
    {
#line 489 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), &transform_hlds__rbmm__region_instruction__conv0_V_19_19);
    }
#line 489 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 489 "rbmm.region_instruction.m"
      {
#line 489 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_19_19 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv0_V_19_19);
#line 489 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 489 "rbmm.region_instruction.m"
      }
#line 489 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 489 "rbmm.region_instruction.m"
      {
#line 490 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__InstrsBefore_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_19_19, (MR_Integer) 0)));
#line 490 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__InstrsAfter_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_19_19, (MR_Integer) 1)));
#line 490 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 489 "rbmm.region_instruction.m"
      }
#line 507 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 494 "rbmm.region_instruction.m"
      {
#line 492 "rbmm.region_instruction.m"
        {
#line 492 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13)), transform_hlds__rbmm__region_instruction__InstrsBefore_14);
        }
#line 494 "rbmm.region_instruction.m"
        if (transform_hlds__rbmm__region_instruction__succeeded)
#line 492 "rbmm.region_instruction.m"
          *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_18 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17;
#line 494 "rbmm.region_instruction.m"
        else
#line 502 "rbmm.region_instruction.m"
          {
#line 502 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__NewInstrsBefore_16;
#line 502 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_22_22;

#line 498 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__RegionInstrType_7 == (MR_Integer) 0);
#line 500 "rbmm.region_instruction.m"
            if (transform_hlds__rbmm__region_instruction__succeeded)
#line 499 "rbmm.region_instruction.m"
              {
#line 499 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__V_20_20;

#line 499 "rbmm.region_instruction.m"
                {
#line 499 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "rbmm.region_instruction.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_20_20, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13));
#line 499 "rbmm.region_instruction.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 499 "rbmm.region_instruction.m"
                }
#line 499 "rbmm.region_instruction.m"
                {
#line 499 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__NewInstrsBefore_16 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, transform_hlds__rbmm__region_instruction__InstrsBefore_14, transform_hlds__rbmm__region_instruction__V_20_20);
                }
#line 499 "rbmm.region_instruction.m"
              }
#line 500 "rbmm.region_instruction.m"
            else
#line 501 "rbmm.region_instruction.m"
              {
#line 501 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__NewInstrsBefore_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__NewInstrsBefore_16, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13));
#line 501 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__NewInstrsBefore_16, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__InstrsBefore_14));
#line 501 "rbmm.region_instruction.m"
              }
#line 504 "rbmm.region_instruction.m"
            {
#line 504 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_22_22, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__NewInstrsBefore_16));
#line 504 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_22_22, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__InstrsAfter_15));
#line 504 "rbmm.region_instruction.m"
            }
#line 503 "rbmm.region_instruction.m"
            {
#line 503 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_22_22)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_18);
#line 503 "rbmm.region_instruction.m"
              return;
            }
#line 502 "rbmm.region_instruction.m"
          }
#line 494 "rbmm.region_instruction.m"
      }
#line 507 "rbmm.region_instruction.m"
    else
#line 508 "rbmm.region_instruction.m"
      {
#line 508 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_24_24;
#line 508 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_26_26;

#line 509 "rbmm.region_instruction.m"
        {
#line 509 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_26_26, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13));
#line 509 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "rbmm.region_instruction.m"
        }
#line 509 "rbmm.region_instruction.m"
        {
#line 509 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 509 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_24_24, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__V_26_26));
#line 509 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "rbmm.region_instruction.m"
        }
#line 508 "rbmm.region_instruction.m"
        {
#line 508 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_24_24)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_18);
#line 508 "rbmm.region_instruction.m"
          return;
        }
#line 508 "rbmm.region_instruction.m"
      }
#line 483 "rbmm.region_instruction.m"
  }
#line 478 "rbmm.region_instruction.m"
}

#line 446 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_p_0(
#line 446 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RegionInstType_7,
#line 446 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_8,
#line 446 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Graph_9,
#line 446 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Region_10,
#line 446 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16,
#line 446 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_17)
#line 446 "rbmm.region_instruction.m"
{
#line 451 "rbmm.region_instruction.m"
  {
#line 451 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 451 "rbmm.region_instruction.m"
    MR_String transform_hlds__rbmm__region_instruction__RegionName_12;
#line 451 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__RegionInstruction_13;
#line 468 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__InstsBefore_14;
#line 468 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__InstsAfter_15;
#line 457 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_18_18;
#line 457 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv0_V_18_18;

#line 452 "rbmm.region_instruction.m"
    {
#line 452 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__RegionName_12 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_instruction__Graph_9, transform_hlds__rbmm__region_instruction__Region_10);
    }
#line 519 "rbmm.region_instruction.m"
    if ((transform_hlds__rbmm__region_instruction__RegionInstType_7 == (MR_Integer) 0))
#line 520 "rbmm.region_instruction.m"
      {
#line 520 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__RegionInstruction_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 520 "rbmm.region_instruction.m"
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RegionInstruction_13, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionName_12));
#line 520 "rbmm.region_instruction.m"
      }
#line 519 "rbmm.region_instruction.m"
    else
#line 519 "rbmm.region_instruction.m"
      if ((transform_hlds__rbmm__region_instruction__RegionInstType_7 == (MR_Integer) 1))
#line 523 "rbmm.region_instruction.m"
        {
#line 523 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__RegionInstruction_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 523 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__RegionInstruction_13, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionName_12));
#line 523 "rbmm.region_instruction.m"
        }
#line 519 "rbmm.region_instruction.m"
      else
#line 525 "rbmm.region_instruction.m"
        {
#line 526 "rbmm.region_instruction.m"
          {
#line 526 "rbmm.region_instruction.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_instruction", (MR_String) "predicate \140transform_hlds.rbmm.region_instruction.make_create_or_remove_instruction\'/3", (MR_String) "unexpected region instruction type");
#line 526 "rbmm.region_instruction.m"
            return;
          }
#line 525 "rbmm.region_instruction.m"
        }
#line 457 "rbmm.region_instruction.m"
    {
#line 457 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), &transform_hlds__rbmm__region_instruction__conv0_V_18_18);
    }
#line 457 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 457 "rbmm.region_instruction.m"
      {
#line 457 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_18_18 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv0_V_18_18);
#line 457 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 457 "rbmm.region_instruction.m"
      }
#line 457 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 457 "rbmm.region_instruction.m"
      {
#line 458 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__InstsBefore_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_18_18, (MR_Integer) 0)));
#line 458 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__InstsAfter_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_18_18, (MR_Integer) 1)));
#line 458 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 457 "rbmm.region_instruction.m"
      }
#line 468 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 462 "rbmm.region_instruction.m"
      {
#line 460 "rbmm.region_instruction.m"
        {
#line 460 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13)), transform_hlds__rbmm__region_instruction__InstsAfter_15);
        }
#line 462 "rbmm.region_instruction.m"
        if (transform_hlds__rbmm__region_instruction__succeeded)
#line 460 "rbmm.region_instruction.m"
          *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_17 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16;
#line 462 "rbmm.region_instruction.m"
        else
#line 463 "rbmm.region_instruction.m"
          {
#line 463 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_19_19;
#line 463 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_21_21;

#line 465 "rbmm.region_instruction.m"
            {
#line 465 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_21_21, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13));
#line 465 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_21_21, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__InstsAfter_15));
#line 465 "rbmm.region_instruction.m"
            }
#line 464 "rbmm.region_instruction.m"
            {
#line 464 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 464 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_19_19, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__InstsBefore_14));
#line 464 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_19_19, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__V_21_21));
#line 464 "rbmm.region_instruction.m"
            }
#line 463 "rbmm.region_instruction.m"
            {
#line 463 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_19_19)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_17);
#line 463 "rbmm.region_instruction.m"
              return;
            }
#line 463 "rbmm.region_instruction.m"
          }
#line 462 "rbmm.region_instruction.m"
      }
#line 468 "rbmm.region_instruction.m"
    else
#line 469 "rbmm.region_instruction.m"
      {
#line 469 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_22_22;
#line 469 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_25_25;

#line 470 "rbmm.region_instruction.m"
        {
#line 470 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_25_25, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13));
#line 470 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "rbmm.region_instruction.m"
        }
#line 470 "rbmm.region_instruction.m"
        {
#line 470 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 470 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_22_22, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__V_25_25));
#line 470 "rbmm.region_instruction.m"
        }
#line 469 "rbmm.region_instruction.m"
        {
#line 469 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_22_22)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_17);
#line 469 "rbmm.region_instruction.m"
          return;
        }
#line 469 "rbmm.region_instruction.m"
      }
#line 451 "rbmm.region_instruction.m"
  }
#line 446 "rbmm.region_instruction.m"
}

#line 432 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_p_0(
#line 432 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDead_7,
#line 432 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__CalleeDeadR_8,
#line 432 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__SourceRegion_9,
#line 432 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__TargetRegion_10,
#line 432 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_0_12,
#line 432 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_13)
#line 432 "rbmm.region_instruction.m"
{
#line 442 "rbmm.region_instruction.m"
  {
#line 442 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 438 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 438 "rbmm.region_instruction.m"
    {
#line 438 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = mercury__set__contains_2_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15, transform_hlds__rbmm__region_instruction__BecomeDead_7, ((MR_Box) (transform_hlds__rbmm__region_instruction__TargetRegion_10)));
    }
#line 438 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 438 "rbmm.region_instruction.m"
      {
#line 439 "rbmm.region_instruction.m"
        {
#line 439 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__succeeded = mercury__set__contains_2_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15, transform_hlds__rbmm__region_instruction__CalleeDeadR_8, ((MR_Box) (transform_hlds__rbmm__region_instruction__SourceRegion_9)));
        }
#line 439 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = !(transform_hlds__rbmm__region_instruction__succeeded);
#line 438 "rbmm.region_instruction.m"
      }
#line 442 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 441 "rbmm.region_instruction.m"
      {
#line 441 "rbmm.region_instruction.m"
        {
#line 441 "rbmm.region_instruction.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__TargetRegion_10)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_0_12, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_13);
#line 441 "rbmm.region_instruction.m"
          return;
        }
#line 441 "rbmm.region_instruction.m"
      }
#line 442 "rbmm.region_instruction.m"
    else
#line 441 "rbmm.region_instruction.m"
      *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_13 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_0_12;
#line 442 "rbmm.region_instruction.m"
  }
#line 432 "rbmm.region_instruction.m"
}

#line 414 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_p_0(
#line 414 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeLive_7,
#line 414 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__CalleeBornR_8,
#line 414 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__SourceRegion_9,
#line 414 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__TargetRegion_10,
#line 414 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_0_12,
#line 414 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_13)
#line 414 "rbmm.region_instruction.m"
{
#line 424 "rbmm.region_instruction.m"
  {
#line 424 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 420 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 420 "rbmm.region_instruction.m"
    {
#line 420 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = mercury__set__contains_2_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15, transform_hlds__rbmm__region_instruction__BecomeLive_7, ((MR_Box) (transform_hlds__rbmm__region_instruction__TargetRegion_10)));
    }
#line 420 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 420 "rbmm.region_instruction.m"
      {
#line 421 "rbmm.region_instruction.m"
        {
#line 421 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__succeeded = mercury__set__contains_2_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15, transform_hlds__rbmm__region_instruction__CalleeBornR_8, ((MR_Box) (transform_hlds__rbmm__region_instruction__SourceRegion_9)));
        }
#line 421 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = !(transform_hlds__rbmm__region_instruction__succeeded);
#line 420 "rbmm.region_instruction.m"
      }
#line 424 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 423 "rbmm.region_instruction.m"
      {
#line 423 "rbmm.region_instruction.m"
        {
#line 423 "rbmm.region_instruction.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__TargetRegion_10)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_0_12, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_13);
#line 423 "rbmm.region_instruction.m"
          return;
        }
#line 423 "rbmm.region_instruction.m"
      }
#line 424 "rbmm.region_instruction.m"
    else
#line 423 "rbmm.region_instruction.m"
      *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_13 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_0_12;
#line 424 "rbmm.region_instruction.m"
  }
#line 414 "rbmm.region_instruction.m"
}

#line 350 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_2(
#line 350 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 350 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 350 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 350 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 350 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_4)
#line 350 "rbmm.region_instruction.m"
{
#line 350 "rbmm.region_instruction.m"
  {
#line 350 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 350 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RemovedAfterProgPoint_13;

#line 350 "rbmm.region_instruction.m"
    {
#line 350 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3), &transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RemovedAfterProgPoint_13);
    }
#line 350 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RemovedAfterProgPoint_13));
#line 350 "rbmm.region_instruction.m"
  }
#line 350 "rbmm.region_instruction.m"
}

#line 342 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_1(
#line 342 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 342 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 342 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 342 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 342 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_4)
#line 342 "rbmm.region_instruction.m"
{
#line 342 "rbmm.region_instruction.m"
  {
#line 342 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 342 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_CreatedBeforeProgPoint_13;

#line 342 "rbmm.region_instruction.m"
    {
#line 342 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3), &transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_CreatedBeforeProgPoint_13);
    }
#line 342 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_CreatedBeforeProgPoint_13));
#line 342 "rbmm.region_instruction.m"
  }
#line 342 "rbmm.region_instruction.m"
}

#line 316 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0(
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Expr_12,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_13,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeLive_14,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDead_15,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_16,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_17,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_18,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_19,
#line 316 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_20,
#line 316 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21,
#line 316 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22)
#line 316 "rbmm.region_instruction.m"
{
#line 361 "rbmm.region_instruction.m"
  {
#line 361 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Expr_12)) == (MR_mktag((MR_Integer) 2)));
#line 361 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__CalleePredId_23;
#line 361 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__CalleeProcId_24;
#line 325 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_25_25;
#line 325 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_26_26;
#line 325 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_27_27;
#line 325 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_28_28;

#line 325 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 325 "rbmm.region_instruction.m"
      {
#line 325 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__CalleePredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 0)));
#line 325 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__CalleeProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 1)));
#line 325 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 2)));
#line 325 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 3)));
#line 325 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 4)));
#line 325 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 5)));
#line 327 "rbmm.region_instruction.m"
        {
#line 327 "rbmm.region_instruction.m"
          MR_Word transform_hlds__rbmm__region_instruction__CalleePPId_29;
#line 327 "rbmm.region_instruction.m"
          MR_Word transform_hlds__rbmm__region_instruction__AlphaMapping_31;
#line 328 "rbmm.region_instruction.m"
          MR_Word transform_hlds__rbmm__region_instruction___CallerGraph_30;
#line 333 "rbmm.region_instruction.m"
          MR_Word transform_hlds__rbmm__region_instruction__V_32_32;
#line 333 "rbmm.region_instruction.m"
          MR_Box transform_hlds__rbmm__region_instruction__conv0_V_32_32;

#line 327 "rbmm.region_instruction.m"
          {
#line 327 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__CalleePPId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 327 "rbmm.region_instruction.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__CalleePPId_29, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleePredId_23));
#line 327 "rbmm.region_instruction.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__CalleePPId_29, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleeProcId_24));
#line 327 "rbmm.region_instruction.m"
          }
#line 328 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction___CallerGraph_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_16, (MR_Integer) 0)));
#line 328 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__AlphaMapping_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_16, (MR_Integer) 1)));
#line 333 "rbmm.region_instruction.m"
          {
#line 333 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[0], transform_hlds__rbmm__region_instruction__BornRTable_17, ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleePPId_29)), &transform_hlds__rbmm__region_instruction__conv0_V_32_32);
          }
#line 333 "rbmm.region_instruction.m"
          if (transform_hlds__rbmm__region_instruction__succeeded)
#line 333 "rbmm.region_instruction.m"
            {
#line 333 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_32_32 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv0_V_32_32);
#line 333 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 333 "rbmm.region_instruction.m"
            }
#line 352 "rbmm.region_instruction.m"
          if (transform_hlds__rbmm__region_instruction__succeeded)
#line 335 "rbmm.region_instruction.m"
            {
#line 335 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_82_82;
#line 335 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_83_83;
#line 335 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88;
#line 335 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__AlphaAtProgPoint_33;
#line 335 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__CalleeBornR_34;
#line 335 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__CalleeDeadR_35;
#line 335 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__V_68_68;
#line 335 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__V_69_69;
#line 335 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__V_70_70;
#line 335 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__V_71_71;
#line 335 "rbmm.region_instruction.m"
              MR_Box transform_hlds__rbmm__region_instruction__conv1_AlphaAtProgPoint_33;
#line 340 "rbmm.region_instruction.m"
              MR_Box transform_hlds__rbmm__region_instruction__conv2_CalleeBornR_34;
#line 341 "rbmm.region_instruction.m"
              MR_Box transform_hlds__rbmm__region_instruction__conv4_CreatedBeforeProgPoint_21;
#line 349 "rbmm.region_instruction.m"
              MR_Box transform_hlds__rbmm__region_instruction__conv5_CalleeDeadR_35;
#line 350 "rbmm.region_instruction.m"
              MR_Box transform_hlds__rbmm__region_instruction__conv7_RemovedAfterProgPoint_22;

#line 335 "rbmm.region_instruction.m"
              {
#line 335 "rbmm.region_instruction.m"
                mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[5], transform_hlds__rbmm__region_instruction__AlphaMapping_31, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_13)), &transform_hlds__rbmm__region_instruction__conv1_AlphaAtProgPoint_33);
              }
#line 335 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__AlphaAtProgPoint_33 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv1_AlphaAtProgPoint_33);
#line 2966 "transform_hlds.rbmm.region_instruction.c"
              transform_hlds__rbmm__region_instruction__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 2968 "transform_hlds.rbmm.region_instruction.c"
              transform_hlds__rbmm__region_instruction__TypeInfo_83_83 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[0];
#line 340 "rbmm.region_instruction.m"
              {
#line 340 "rbmm.region_instruction.m"
                mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_82_82, transform_hlds__rbmm__region_instruction__TypeInfo_83_83, transform_hlds__rbmm__region_instruction__BornRTable_17, ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleePPId_29)), &transform_hlds__rbmm__region_instruction__conv2_CalleeBornR_34);
              }
#line 340 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__CalleeBornR_34 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv2_CalleeBornR_34);
#line 342 "rbmm.region_instruction.m"
              {
#line 342 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 342 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_68_68, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[1]));
#line 342 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_68_68, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_1));
#line 342 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 342 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_68_68, 3) = ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeLive_14));
#line 342 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_68_68, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleeBornR_34));
#line 342 "rbmm.region_instruction.m"
              }
#line 2993 "transform_hlds.rbmm.region_instruction.c"
              transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 343 "rbmm.region_instruction.m"
              {
#line 343 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_69_69 = mercury__set__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88);
              }
#line 341 "rbmm.region_instruction.m"
              {
#line 341 "rbmm.region_instruction.m"
                mercury__map__foldl_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88, transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88, transform_hlds__rbmm__region_instruction__TypeInfo_83_83, transform_hlds__rbmm__region_instruction__V_68_68, transform_hlds__rbmm__region_instruction__AlphaAtProgPoint_33, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_69_69)), &transform_hlds__rbmm__region_instruction__conv4_CreatedBeforeProgPoint_21);
              }
#line 341 "rbmm.region_instruction.m"
              *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv4_CreatedBeforeProgPoint_21);
#line 349 "rbmm.region_instruction.m"
              {
#line 349 "rbmm.region_instruction.m"
                mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_82_82, transform_hlds__rbmm__region_instruction__TypeInfo_83_83, transform_hlds__rbmm__region_instruction__DeadRTable_18, ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleePPId_29)), &transform_hlds__rbmm__region_instruction__conv5_CalleeDeadR_35);
              }
#line 349 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__CalleeDeadR_35 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv5_CalleeDeadR_35);
#line 350 "rbmm.region_instruction.m"
              {
#line 350 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 350 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_70_70, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[1]));
#line 350 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_70_70, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_2));
#line 350 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 350 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_70_70, 3) = ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeDead_15));
#line 350 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_70_70, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleeDeadR_35));
#line 350 "rbmm.region_instruction.m"
              }
#line 351 "rbmm.region_instruction.m"
              {
#line 351 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_71_71 = mercury__set__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88);
              }
#line 350 "rbmm.region_instruction.m"
              {
#line 350 "rbmm.region_instruction.m"
                mercury__map__foldl_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88, transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88, transform_hlds__rbmm__region_instruction__TypeInfo_83_83, transform_hlds__rbmm__region_instruction__V_70_70, transform_hlds__rbmm__region_instruction__AlphaAtProgPoint_33, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_71_71)), &transform_hlds__rbmm__region_instruction__conv7_RemovedAfterProgPoint_22);
              }
#line 350 "rbmm.region_instruction.m"
              *transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv7_RemovedAfterProgPoint_22);
#line 335 "rbmm.region_instruction.m"
            }
#line 352 "rbmm.region_instruction.m"
          else
#line 358 "rbmm.region_instruction.m"
            {
#line 358 "rbmm.region_instruction.m"
              *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = transform_hlds__rbmm__region_instruction__BecomeLive_14;
#line 359 "rbmm.region_instruction.m"
              *transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22 = transform_hlds__rbmm__region_instruction__BecomeDead_15;
#line 358 "rbmm.region_instruction.m"
            }
#line 327 "rbmm.region_instruction.m"
        }
#line 325 "rbmm.region_instruction.m"
      }
#line 325 "rbmm.region_instruction.m"
    else
#line 390 "rbmm.region_instruction.m"
      {
#line 390 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__X_36;
#line 390 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__Kind_39;
#line 362 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_37_37;
#line 362 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_38_38;
#line 362 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_40_40;

#line 362 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Expr_12)) == (MR_mktag((MR_Integer) 1)));
#line 362 "rbmm.region_instruction.m"
        if (transform_hlds__rbmm__region_instruction__succeeded)
#line 362 "rbmm.region_instruction.m"
          {
#line 362 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__X_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 0)));
#line 362 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 1)));
#line 362 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 2)));
#line 362 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__Kind_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 3)));
#line 362 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 4)));
#line 364 "rbmm.region_instruction.m"
            {
#line 364 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__Graph_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_16, (MR_Integer) 0)));
#line 364 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction___AlphaMapping_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_16, (MR_Integer) 1)));

#line 377 "rbmm.region_instruction.m"
              if (((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Kind_39)) == (MR_mktag((MR_Integer) 0))))
#line 366 "rbmm.region_instruction.m"
                {
#line 366 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_93_93 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 366 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__Reach_X_50;
#line 366 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__V_72_72;

#line 374 "rbmm.region_instruction.m"
                  {
#line 374 "rbmm.region_instruction.m"
                    transform_hlds__rbmm__region_instruction__V_72_72 = mercury__set__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_93_93);
                  }
#line 373 "rbmm.region_instruction.m"
                  {
#line 373 "rbmm.region_instruction.m"
                    transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(transform_hlds__rbmm__region_instruction__Graph_41, transform_hlds__rbmm__region_instruction__ModuleInfo_19, transform_hlds__rbmm__region_instruction__ProcInfo_20, transform_hlds__rbmm__region_instruction__X_36, transform_hlds__rbmm__region_instruction__V_72_72, &transform_hlds__rbmm__region_instruction__Reach_X_50);
                  }
#line 376 "rbmm.region_instruction.m"
                  {
#line 376 "rbmm.region_instruction.m"
                    mercury__set__intersect_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_93_93, transform_hlds__rbmm__region_instruction__Reach_X_50, transform_hlds__rbmm__region_instruction__BecomeLive_14, transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21);
                  }
#line 366 "rbmm.region_instruction.m"
                }
#line 377 "rbmm.region_instruction.m"
              else
#line 382 "rbmm.region_instruction.m"
                {
#line 383 "rbmm.region_instruction.m"
                  {
#line 383 "rbmm.region_instruction.m"
                    *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
                  }
#line 382 "rbmm.region_instruction.m"
                }
#line 389 "rbmm.region_instruction.m"
              *transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22 = transform_hlds__rbmm__region_instruction__BecomeDead_15;
#line 364 "rbmm.region_instruction.m"
            }
#line 362 "rbmm.region_instruction.m"
          }
#line 362 "rbmm.region_instruction.m"
        else
#line 399 "rbmm.region_instruction.m"
          {
#line 391 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_64_64;
#line 391 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_65_65;
#line 391 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_66_66;

#line 391 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__succeeded = ((((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Expr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 391 "rbmm.region_instruction.m"
            if (transform_hlds__rbmm__region_instruction__succeeded)
#line 391 "rbmm.region_instruction.m"
              {
#line 391 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 1)));
#line 391 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 2)));
#line 391 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 3)));
#line 397 "rbmm.region_instruction.m"
                {
#line 397 "rbmm.region_instruction.m"
                  *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
                }
#line 398 "rbmm.region_instruction.m"
                *transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22 = transform_hlds__rbmm__region_instruction__BecomeDead_15;
#line 391 "rbmm.region_instruction.m"
              }
#line 391 "rbmm.region_instruction.m"
            else
#line 406 "rbmm.region_instruction.m"
              {
#line 401 "rbmm.region_instruction.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Expr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 400 "rbmm.region_instruction.m"
                  {
#line 400 "rbmm.region_instruction.m"
                    MR_Word transform_hlds__rbmm__region_instruction__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 2)));
#line 400 "rbmm.region_instruction.m"
                    MR_Word transform_hlds__rbmm__region_instruction__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 1)));

#line 400 "rbmm.region_instruction.m"
                    transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "rbmm.region_instruction.m"
                  }
#line 401 "rbmm.region_instruction.m"
                else
#line 401 "rbmm.region_instruction.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Expr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 401 "rbmm.region_instruction.m"
                    {
#line 401 "rbmm.region_instruction.m"
                      MR_Word transform_hlds__rbmm__region_instruction__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 1)));

#line 401 "rbmm.region_instruction.m"
                      transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "rbmm.region_instruction.m"
                    }
#line 401 "rbmm.region_instruction.m"
                  else
#line 401 "rbmm.region_instruction.m"
                    transform_hlds__rbmm__region_instruction__succeeded = MR_FALSE;
#line 406 "rbmm.region_instruction.m"
                if (transform_hlds__rbmm__region_instruction__succeeded)
#line 404 "rbmm.region_instruction.m"
                  {
#line 404 "rbmm.region_instruction.m"
                    MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_96_96 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 404 "rbmm.region_instruction.m"
                    {
#line 404 "rbmm.region_instruction.m"
                      *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_96_96);
                    }
#line 405 "rbmm.region_instruction.m"
                    {
#line 405 "rbmm.region_instruction.m"
                      *transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22 = mercury__set__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_96_96);
                    }
#line 404 "rbmm.region_instruction.m"
                  }
#line 406 "rbmm.region_instruction.m"
                else
#line 407 "rbmm.region_instruction.m"
                  {
#line 407 "rbmm.region_instruction.m"
                    {
#line 407 "rbmm.region_instruction.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_instruction", (MR_String) "predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", (MR_String) "non-atomic goal");
#line 407 "rbmm.region_instruction.m"
                      return;
                    }
#line 407 "rbmm.region_instruction.m"
                  }
#line 406 "rbmm.region_instruction.m"
              }
#line 399 "rbmm.region_instruction.m"
          }
#line 390 "rbmm.region_instruction.m"
      }
#line 361 "rbmm.region_instruction.m"
  }
#line 316 "rbmm.region_instruction.m"
}

#line 280 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_3(
#line 280 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 280 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 280 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 280 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 280 "rbmm.region_instruction.m"
{
#line 280 "rbmm.region_instruction.m"
  {
#line 280 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 280 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_RegionInstructionProc_17;

#line 280 "rbmm.region_instruction.m"
    {
#line 280 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), &transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_RegionInstructionProc_17);
    }
#line 280 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_RegionInstructionProc_17));
#line 280 "rbmm.region_instruction.m"
  }
#line 280 "rbmm.region_instruction.m"
}

#line 277 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_2(
#line 277 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 277 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 277 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 277 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 277 "rbmm.region_instruction.m"
{
#line 277 "rbmm.region_instruction.m"
  {
#line 277 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 277 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_RegionInstructionProc_18;

#line 277 "rbmm.region_instruction.m"
    {
#line 277 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), &transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_RegionInstructionProc_18);
    }
#line 277 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_RegionInstructionProc_18));
#line 277 "rbmm.region_instruction.m"
  }
#line 277 "rbmm.region_instruction.m"
}

#line 274 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_1(
#line 274 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 274 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 274 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 274 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 274 "rbmm.region_instruction.m"
{
#line 274 "rbmm.region_instruction.m"
  {
#line 274 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 274 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_RegionInstructionProc_18;

#line 274 "rbmm.region_instruction.m"
    {
#line 274 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), &transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_RegionInstructionProc_18);
    }
#line 274 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_RegionInstructionProc_18));
#line 274 "rbmm.region_instruction.m"
  }
#line 274 "rbmm.region_instruction.m"
}

#line 229 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0(
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_2,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornR_3,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadR_4,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalR_5,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRBefore_6,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRAfter_7,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_9,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_10,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_11,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_12,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint_13,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_14,
#line 229 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_15,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_16,
#line 229 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_17,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_18,
#line 229 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_19,
#line 229 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_20,
#line 229 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_21)
#line 229 "rbmm.region_instruction.m"
{
#line 239 "rbmm.region_instruction.m"
  while (MR_TRUE)
#line 239 "rbmm.region_instruction.m"
    {
#line 239 "rbmm.region_instruction.m"
      /* tailcall optimized into a loop */
#line 239 "rbmm.region_instruction.m"
      {
#line 239 "rbmm.region_instruction.m"
        MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 239 "rbmm.region_instruction.m"
        if ((transform_hlds__rbmm__region_instruction__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "rbmm.region_instruction.m"
          {
#line 241 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_21 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_20;
#line 240 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_19 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_18;
#line 240 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_17 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_16;
#line 240 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_15 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_14;
#line 239 "rbmm.region_instruction.m"
          }
#line 239 "rbmm.region_instruction.m"
        else
#line 247 "rbmm.region_instruction.m"
          {
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_120_120;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_125_125;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_46;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__Goal_47;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_Goals_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 1)));
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__LRBefore_65;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__LRAfter_66;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegions_67;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__Allowed_68;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__DeadVoidVarRegions0_69;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__DeadVoidVarRegions_70;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__CallerGraph_71;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__BecomeDead_73;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__BecomeLive_74;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__Expr_75;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_77;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_78;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 0)));
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_93_93;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_94_94;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_95_95;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_96_96;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_97_97;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_98_98;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_100_100;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_101_101;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_103_103;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_104_104;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_107_107;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_109_109;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_110_110;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_111_111;
#line 247 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_112_112;
#line 248 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv0_LRBefore_65;
#line 249 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv1_LRAfter_66;
#line 250 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv2_VoidVarRegions_67;
#line 262 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_72_72;
#line 267 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_76_76;
#line 274 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionProc_98_98;
#line 277 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RegionInstructionProc_101_101;
#line 280 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv8_STATE_VARIABLE_RegionInstructionProc_104_104;
#line 283 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv9_STATE_VARIABLE_RegionInstructionProc_107_107;

#line 242 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__ProgPoint_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_92_92, (MR_Integer) 0)));
#line 242 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__Goal_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_92_92, (MR_Integer) 1)));
#line 3515 "transform_hlds.rbmm.region_instruction.c"
            transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 3517 "transform_hlds.rbmm.region_instruction.c"
            transform_hlds__rbmm__region_instruction__TypeInfo_120_120 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[0];
#line 248 "rbmm.region_instruction.m"
            {
#line 248 "rbmm.region_instruction.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, transform_hlds__rbmm__region_instruction__ProcLRBefore_6, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), &transform_hlds__rbmm__region_instruction__conv0_LRBefore_65);
            }
#line 248 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__LRBefore_65 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv0_LRBefore_65);
#line 249 "rbmm.region_instruction.m"
            {
#line 249 "rbmm.region_instruction.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, transform_hlds__rbmm__region_instruction__ProcLRAfter_7, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), &transform_hlds__rbmm__region_instruction__conv1_LRAfter_66);
            }
#line 249 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__LRAfter_66 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv1_LRAfter_66);
#line 250 "rbmm.region_instruction.m"
            {
#line 250 "rbmm.region_instruction.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), &transform_hlds__rbmm__region_instruction__conv2_VoidVarRegions_67);
            }
#line 250 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__VoidVarRegions_67 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv2_VoidVarRegions_67);
#line 3540 "transform_hlds.rbmm.region_instruction.c"
            transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 252 "rbmm.region_instruction.m"
            {
#line 252 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_93_93 = mercury__set__union_2_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__LocalR_5, transform_hlds__rbmm__region_instruction__BornR_3);
            }
#line 252 "rbmm.region_instruction.m"
            {
#line 252 "rbmm.region_instruction.m"
              mercury__set__union_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__V_93_93, transform_hlds__rbmm__region_instruction__DeadR_4, &transform_hlds__rbmm__region_instruction__Allowed_68);
            }
#line 259 "rbmm.region_instruction.m"
            {
#line 259 "rbmm.region_instruction.m"
              mercury__set__difference_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__VoidVarRegions_67, transform_hlds__rbmm__region_instruction__LRAfter_66, &transform_hlds__rbmm__region_instruction__DeadVoidVarRegions0_69);
            }
#line 260 "rbmm.region_instruction.m"
            {
#line 260 "rbmm.region_instruction.m"
              mercury__set__intersect_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__Allowed_68, transform_hlds__rbmm__region_instruction__DeadVoidVarRegions0_69, &transform_hlds__rbmm__region_instruction__DeadVoidVarRegions_70);
            }
#line 262 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__CallerGraph_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_2, (MR_Integer) 0)));
#line 262 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_2, (MR_Integer) 1)));
#line 264 "rbmm.region_instruction.m"
            {
#line 264 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_94_94 = mercury__set__difference_2_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__LRBefore_65, transform_hlds__rbmm__region_instruction__LRAfter_66);
            }
#line 264 "rbmm.region_instruction.m"
            {
#line 264 "rbmm.region_instruction.m"
              mercury__set__intersect_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__Allowed_68, transform_hlds__rbmm__region_instruction__V_94_94, &transform_hlds__rbmm__region_instruction__BecomeDead_73);
            }
#line 265 "rbmm.region_instruction.m"
            {
#line 265 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_95_95 = mercury__set__difference_2_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__LRAfter_66, transform_hlds__rbmm__region_instruction__LRBefore_65);
            }
#line 265 "rbmm.region_instruction.m"
            {
#line 265 "rbmm.region_instruction.m"
              mercury__set__intersect_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__Allowed_68, transform_hlds__rbmm__region_instruction__V_95_95, &transform_hlds__rbmm__region_instruction__BecomeLive_74);
            }
#line 267 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__Expr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__Goal_47, (MR_Integer) 0)));
#line 267 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__Goal_47, (MR_Integer) 1)));
#line 268 "rbmm.region_instruction.m"
            {
#line 268 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeLive_74)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_14, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_96_96);
            }
#line 270 "rbmm.region_instruction.m"
            {
#line 270 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0(transform_hlds__rbmm__region_instruction__Expr_75, transform_hlds__rbmm__region_instruction__ProgPoint_46, transform_hlds__rbmm__region_instruction__BecomeLive_74, transform_hlds__rbmm__region_instruction__BecomeDead_73, transform_hlds__rbmm__region_instruction__RptaInfo_2, transform_hlds__rbmm__region_instruction__BornRTable_9, transform_hlds__rbmm__region_instruction__DeadRTable_10, transform_hlds__rbmm__region_instruction__ModuleInfo_11, transform_hlds__rbmm__region_instruction__ProcInfo_12, &transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_77, &transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_78);
            }
#line 274 "rbmm.region_instruction.m"
            {
#line 274 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 274 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[0]));
#line 274 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_1));
#line 274 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 274 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 3) = ((MR_Box) ((MR_Integer) 0));
#line 274 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46));
#line 274 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 5) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CallerGraph_71));
#line 274 "rbmm.region_instruction.m"
            }
#line 3618 "transform_hlds.rbmm.region_instruction.c"
            transform_hlds__rbmm__region_instruction__TypeInfo_125_125 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[1];
#line 274 "rbmm.region_instruction.m"
            {
#line 274 "rbmm.region_instruction.m"
              mercury__set__fold_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__TypeInfo_125_125, transform_hlds__rbmm__region_instruction__V_97_97, transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_77, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_20)), &transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionProc_98_98);
            }
#line 274 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_98_98 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionProc_98_98);
#line 277 "rbmm.region_instruction.m"
            {
#line 277 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 277 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[0]));
#line 277 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_2));
#line 277 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 277 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 3) = ((MR_Box) ((MR_Integer) 1));
#line 277 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46));
#line 277 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 5) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CallerGraph_71));
#line 277 "rbmm.region_instruction.m"
            }
#line 277 "rbmm.region_instruction.m"
            {
#line 277 "rbmm.region_instruction.m"
              mercury__set__fold_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__TypeInfo_125_125, transform_hlds__rbmm__region_instruction__V_100_100, transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint_13, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_98_98)), &transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RegionInstructionProc_101_101);
            }
#line 277 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_101_101 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RegionInstructionProc_101_101);
#line 280 "rbmm.region_instruction.m"
            {
#line 280 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 280 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[0]));
#line 280 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_3));
#line 280 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 280 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 3) = ((MR_Box) ((MR_Integer) 1));
#line 280 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46));
#line 280 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 5) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CallerGraph_71));
#line 280 "rbmm.region_instruction.m"
            }
#line 280 "rbmm.region_instruction.m"
            {
#line 280 "rbmm.region_instruction.m"
              mercury__set__fold_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__TypeInfo_125_125, transform_hlds__rbmm__region_instruction__V_103_103, transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_78, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_101_101)), &transform_hlds__rbmm__region_instruction__conv8_STATE_VARIABLE_RegionInstructionProc_104_104);
            }
#line 280 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_104_104 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv8_STATE_VARIABLE_RegionInstructionProc_104_104);
#line 283 "rbmm.region_instruction.m"
            {
#line 283 "rbmm.region_instruction.m"
              mercury__set__fold_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__TypeInfo_125_125, transform_hlds__rbmm__region_instruction__V_103_103, transform_hlds__rbmm__region_instruction__DeadVoidVarRegions_70, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_104_104)), &transform_hlds__rbmm__region_instruction__conv9_STATE_VARIABLE_RegionInstructionProc_107_107);
            }
#line 283 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_107_107 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv9_STATE_VARIABLE_RegionInstructionProc_107_107);
#line 287 "rbmm.region_instruction.m"
            {
#line 287 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_109_109 = mercury__set__union_2_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__BecomeDead_73, transform_hlds__rbmm__region_instruction__DeadVoidVarRegions_70);
            }
#line 287 "rbmm.region_instruction.m"
            {
#line 287 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_109_109)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_18, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_110_110);
            }
#line 289 "rbmm.region_instruction.m"
            {
#line 289 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeLive_74)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_96_96, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_111_111);
            }
#line 290 "rbmm.region_instruction.m"
            {
#line 290 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint_13)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_16, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_112_112);
            }
#line 311 "rbmm.region_instruction.m"
            if ((transform_hlds__rbmm__region_instruction__ProgPoint_Goals_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "rbmm.region_instruction.m"
              {
#line 313 "rbmm.region_instruction.m"
                *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_15 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_111_111;
#line 313 "rbmm.region_instruction.m"
                *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_17 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_112_112;
#line 313 "rbmm.region_instruction.m"
                *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_19 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_110_110;
#line 313 "rbmm.region_instruction.m"
                *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_21 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_107_107;
#line 313 "rbmm.region_instruction.m"
              }
#line 311 "rbmm.region_instruction.m"
            else
#line 293 "rbmm.region_instruction.m"
              {
#line 293 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__NextProgPoint_79;
#line 293 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__LRBeforeNext_82;
#line 293 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadBeforeNextProgPoint_83;
#line 293 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__ProgPoint_Goals_48, (MR_Integer) 0)));
#line 293 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__V_114_114;
#line 293 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__ProgPoint_Goals_48, (MR_Integer) 1)));
#line 293 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__V_80_80;
#line 299 "rbmm.region_instruction.m"
                MR_Box transform_hlds__rbmm__region_instruction__conv10_LRBeforeNext_82;

#line 293 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__NextProgPoint_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_113_113, (MR_Integer) 0)));
#line 293 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_113_113, (MR_Integer) 1)));
#line 299 "rbmm.region_instruction.m"
                {
#line 299 "rbmm.region_instruction.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, transform_hlds__rbmm__region_instruction__ProcLRBefore_6, ((MR_Box) (transform_hlds__rbmm__region_instruction__NextProgPoint_79)), &transform_hlds__rbmm__region_instruction__conv10_LRBeforeNext_82);
                }
#line 299 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__LRBeforeNext_82 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv10_LRBeforeNext_82);
#line 301 "rbmm.region_instruction.m"
                {
#line 301 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__V_114_114 = mercury__set__difference_2_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__LRAfter_66, transform_hlds__rbmm__region_instruction__LRBeforeNext_82);
                }
#line 301 "rbmm.region_instruction.m"
                {
#line 301 "rbmm.region_instruction.m"
                  mercury__set__intersect_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__Allowed_68, transform_hlds__rbmm__region_instruction__V_114_114, &transform_hlds__rbmm__region_instruction__BecomeDeadBeforeNextProgPoint_83);
                }
#line 304 "rbmm.region_instruction.m"
                /* direct tailcall eliminated */
#line 304 "rbmm.region_instruction.m"
                {
#line 304 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__region_instruction__ProgPoint_Goals_48;
#line 304 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint__tmp_copy_13 = transform_hlds__rbmm__region_instruction__BecomeDeadBeforeNextProgPoint_83;
#line 304 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0__tmp_copy_14 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_111_111;
#line 304 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0__tmp_copy_16 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_112_112;
#line 304 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0__tmp_copy_18 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_110_110;
#line 304 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0__tmp_copy_20 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_107_107;

#line 304 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_20 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0__tmp_copy_20;
#line 304 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_18 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0__tmp_copy_18;
#line 304 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_16 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0__tmp_copy_16;
#line 304 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_14 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0__tmp_copy_14;
#line 304 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint_13 = transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint__tmp_copy_13;
#line 304 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__HeadVar__1_1 = transform_hlds__rbmm__region_instruction__HeadVar__1__tmp_copy_1;
#line 304 "rbmm.region_instruction.m"
                }
#line 304 "rbmm.region_instruction.m"
                continue;
#line 293 "rbmm.region_instruction.m"
              }
#line 247 "rbmm.region_instruction.m"
          }
#line 239 "rbmm.region_instruction.m"
      }
#line 239 "rbmm.region_instruction.m"
      break;
#line 239 "rbmm.region_instruction.m"
    }
#line 229 "rbmm.region_instruction.m"
}

#line 200 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_p_0(
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_2,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornR_3,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadR_4,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalR_5,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRBefore_6,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRAfter_7,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_9,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_10,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_11,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_12,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_13,
#line 200 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_14,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_15,
#line 200 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_16,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_17,
#line 200 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_18,
#line 200 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_19,
#line 200 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_20)
#line 200 "rbmm.region_instruction.m"
{
#line 210 "rbmm.region_instruction.m"
  while (MR_TRUE)
#line 210 "rbmm.region_instruction.m"
    {
#line 210 "rbmm.region_instruction.m"
      /* tailcall optimized into a loop */
#line 210 "rbmm.region_instruction.m"
      {
#line 210 "rbmm.region_instruction.m"
        MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 210 "rbmm.region_instruction.m"
        if ((transform_hlds__rbmm__region_instruction__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "rbmm.region_instruction.m"
          {
#line 212 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_20 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_19;
#line 211 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_18 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_17;
#line 211 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_16 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_15;
#line 211 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_14 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_13;
#line 210 "rbmm.region_instruction.m"
          }
#line 210 "rbmm.region_instruction.m"
        else
#line 217 "rbmm.region_instruction.m"
          {
#line 217 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__ExecPath_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__ExecPaths_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_69_69;
#line 217 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_70_70;
#line 217 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_71_71;
#line 217 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_72_72;
#line 217 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_73_73;

#line 220 "rbmm.region_instruction.m"
            {
#line 220 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_69_69 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
            }
#line 218 "rbmm.region_instruction.m"
            {
#line 218 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0(transform_hlds__rbmm__region_instruction__ExecPath_44, transform_hlds__rbmm__region_instruction__RptaInfo_2, transform_hlds__rbmm__region_instruction__BornR_3, transform_hlds__rbmm__region_instruction__DeadR_4, transform_hlds__rbmm__region_instruction__LocalR_5, transform_hlds__rbmm__region_instruction__ProcLRBefore_6, transform_hlds__rbmm__region_instruction__ProcLRAfter_7, transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8, transform_hlds__rbmm__region_instruction__BornRTable_9, transform_hlds__rbmm__region_instruction__DeadRTable_10, transform_hlds__rbmm__region_instruction__ModuleInfo_11, transform_hlds__rbmm__region_instruction__ProcInfo_12, transform_hlds__rbmm__region_instruction__V_69_69, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_13, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_70_70, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_15, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_71_71, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_17, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_72_72, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_19, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_73_73);
            }
#line 223 "rbmm.region_instruction.m"
            /* direct tailcall eliminated */
#line 223 "rbmm.region_instruction.m"
            {
#line 223 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__region_instruction__ExecPaths_45;
#line 223 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0__tmp_copy_13 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_70_70;
#line 223 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0__tmp_copy_15 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_71_71;
#line 223 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0__tmp_copy_17 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_72_72;
#line 223 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0__tmp_copy_19 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_73_73;

#line 223 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_19 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0__tmp_copy_19;
#line 223 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_17 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0__tmp_copy_17;
#line 223 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_15 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0__tmp_copy_15;
#line 223 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_13 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0__tmp_copy_13;
#line 223 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__HeadVar__1_1 = transform_hlds__rbmm__region_instruction__HeadVar__1__tmp_copy_1;
#line 223 "rbmm.region_instruction.m"
            }
#line 223 "rbmm.region_instruction.m"
            continue;
#line 217 "rbmm.region_instruction.m"
          }
#line 210 "rbmm.region_instruction.m"
      }
#line 210 "rbmm.region_instruction.m"
      break;
#line 210 "rbmm.region_instruction.m"
    }
#line 200 "rbmm.region_instruction.m"
}

#line 156 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_p_0(
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_20,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__PredId_21,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfoTable_22,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ExecPathTable_23,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRBeforeTable_24,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRAfterTable_25,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegionTable_26,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_27,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_28,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalRTable_29,
#line 156 "rbmm.region_instruction.m"
  MR_Integer transform_hlds__rbmm__region_instruction__ProcId_30,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_49,
#line 156 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_50,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_51,
#line 156 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_52,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_53,
#line 156 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_54,
#line 156 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_55,
#line 156 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_56)
#line 156 "rbmm.region_instruction.m"
{
#line 170 "rbmm.region_instruction.m"
  {
#line 170 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 170 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__PPId_35;
#line 172 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_57_57;

#line 171 "rbmm.region_instruction.m"
    {
#line 171 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__PPId_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 171 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__PPId_35, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__PredId_21));
#line 171 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__PPId_35, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ProcId_30));
#line 171 "rbmm.region_instruction.m"
    }
#line 172 "rbmm.region_instruction.m"
    {
#line 172 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_57_57, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35));
#line 172 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 172 "rbmm.region_instruction.m"
    }
#line 172 "rbmm.region_instruction.m"
    {
#line 172 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__region_instruction__V_57_57, transform_hlds__rbmm__region_instruction__ModuleInfo_20);
    }
#line 174 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 173 "rbmm.region_instruction.m"
      {
#line 173 "rbmm.region_instruction.m"
        *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_56 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_55;
#line 173 "rbmm.region_instruction.m"
        *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_54 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_53;
#line 173 "rbmm.region_instruction.m"
        *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_52 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_51;
#line 173 "rbmm.region_instruction.m"
        *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_50 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_49;
#line 173 "rbmm.region_instruction.m"
      }
#line 174 "rbmm.region_instruction.m"
    else
#line 175 "rbmm.region_instruction.m"
      {
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_69_69;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_70_70;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_36;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_37;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__BornR_38;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__DeadR_39;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__LocalR_40;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__ProcLRBefore_41;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__ProcLRAfter_42;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_43;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__ExecPaths_44;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__BecomeLiveProc_45;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProc_46;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadAfterProc_47;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__RegionInstructionProc_48;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_59_59;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_60_60;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_61_61;
#line 175 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_62_62;
#line 176 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv0_RptaInfo_37;
#line 177 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv1_BornR_38;
#line 178 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv2_DeadR_39;
#line 179 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv3_LocalR_40;
#line 180 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv4_ProcLRBefore_41;
#line 181 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv5_ProcLRAfter_42;
#line 182 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv6_ProcVoidVarRegion_43;
#line 183 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv7_ExecPaths_44;

#line 175 "rbmm.region_instruction.m"
        {
#line 175 "rbmm.region_instruction.m"
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__region_instruction__ModuleInfo_20, transform_hlds__rbmm__region_instruction__PPId_35, &transform_hlds__rbmm__region_instruction__ProcInfo_36);
        }
#line 4104 "transform_hlds.rbmm.region_instruction.c"
        transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 176 "rbmm.region_instruction.m"
        {
#line 176 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_instruction__RptaInfoTable_22, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv0_RptaInfo_37);
        }
#line 176 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__RptaInfo_37 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv0_RptaInfo_37);
#line 4113 "transform_hlds.rbmm.region_instruction.c"
        transform_hlds__rbmm__region_instruction__TypeInfo_69_69 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[0];
#line 177 "rbmm.region_instruction.m"
        {
#line 177 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_69_69, transform_hlds__rbmm__region_instruction__BornRTable_27, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv1_BornR_38);
        }
#line 177 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__BornR_38 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv1_BornR_38);
#line 178 "rbmm.region_instruction.m"
        {
#line 178 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_69_69, transform_hlds__rbmm__region_instruction__DeadRTable_28, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv2_DeadR_39);
        }
#line 178 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__DeadR_39 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv2_DeadR_39);
#line 179 "rbmm.region_instruction.m"
        {
#line 179 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_69_69, transform_hlds__rbmm__region_instruction__LocalRTable_29, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv3_LocalR_40);
        }
#line 179 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__LocalR_40 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv3_LocalR_40);
#line 4136 "transform_hlds.rbmm.region_instruction.c"
        transform_hlds__rbmm__region_instruction__TypeInfo_70_70 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[0];
#line 180 "rbmm.region_instruction.m"
        {
#line 180 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, transform_hlds__rbmm__region_instruction__LRBeforeTable_24, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv4_ProcLRBefore_41);
        }
#line 180 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__ProcLRBefore_41 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv4_ProcLRBefore_41);
#line 181 "rbmm.region_instruction.m"
        {
#line 181 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, transform_hlds__rbmm__region_instruction__LRAfterTable_25, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv5_ProcLRAfter_42);
        }
#line 181 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__ProcLRAfter_42 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv5_ProcLRAfter_42);
#line 182 "rbmm.region_instruction.m"
        {
#line 182 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, transform_hlds__rbmm__region_instruction__VoidVarRegionTable_26, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv6_ProcVoidVarRegion_43);
        }
#line 182 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_43 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv6_ProcVoidVarRegion_43);
#line 183 "rbmm.region_instruction.m"
        {
#line 183 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[2], transform_hlds__rbmm__region_instruction__ExecPathTable_23, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv7_ExecPaths_44);
        }
#line 183 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__ExecPaths_44 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv7_ExecPaths_44);
#line 4166 "transform_hlds.rbmm.region_instruction.c"
        transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 187 "rbmm.region_instruction.m"
        {
#line 187 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_59_59 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72, transform_hlds__rbmm__region_instruction__TypeInfo_69_69);
        }
#line 188 "rbmm.region_instruction.m"
        {
#line 188 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_60_60 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72, transform_hlds__rbmm__region_instruction__TypeInfo_69_69);
        }
#line 189 "rbmm.region_instruction.m"
        {
#line 189 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_61_61 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72, transform_hlds__rbmm__region_instruction__TypeInfo_69_69);
        }
#line 190 "rbmm.region_instruction.m"
        {
#line 190 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_62_62 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0);
        }
#line 184 "rbmm.region_instruction.m"
        {
#line 184 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_p_0(transform_hlds__rbmm__region_instruction__ExecPaths_44, transform_hlds__rbmm__region_instruction__RptaInfo_37, transform_hlds__rbmm__region_instruction__BornR_38, transform_hlds__rbmm__region_instruction__DeadR_39, transform_hlds__rbmm__region_instruction__LocalR_40, transform_hlds__rbmm__region_instruction__ProcLRBefore_41, transform_hlds__rbmm__region_instruction__ProcLRAfter_42, transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_43, transform_hlds__rbmm__region_instruction__BornRTable_27, transform_hlds__rbmm__region_instruction__DeadRTable_28, transform_hlds__rbmm__region_instruction__ModuleInfo_20, transform_hlds__rbmm__region_instruction__ProcInfo_36, transform_hlds__rbmm__region_instruction__V_59_59, &transform_hlds__rbmm__region_instruction__BecomeLiveProc_45, transform_hlds__rbmm__region_instruction__V_60_60, &transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProc_46, transform_hlds__rbmm__region_instruction__V_61_61, &transform_hlds__rbmm__region_instruction__BecomeDeadAfterProc_47, transform_hlds__rbmm__region_instruction__V_62_62, &transform_hlds__rbmm__region_instruction__RegionInstructionProc_48);
        }
#line 191 "rbmm.region_instruction.m"
        {
#line 191 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstructionProc_48)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_55, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_56);
        }
#line 192 "rbmm.region_instruction.m"
        {
#line 192 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeLiveProc_45)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_49, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_50);
        }
#line 193 "rbmm.region_instruction.m"
        {
#line 193 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProc_46)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_51, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_52);
        }
#line 194 "rbmm.region_instruction.m"
        {
#line 194 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeDeadAfterProc_47)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_53, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_54);
#line 194 "rbmm.region_instruction.m"
          return;
        }
#line 175 "rbmm.region_instruction.m"
      }
#line 170 "rbmm.region_instruction.m"
  }
#line 156 "rbmm.region_instruction.m"
}

#line 150 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0_1(
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 150 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_4,
#line 150 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_5,
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_6,
#line 150 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_7,
#line 150 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_8,
#line 150 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_9)
#line 150 "rbmm.region_instruction.m"
{
#line 150 "rbmm.region_instruction.m"
  {
#line 150 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 150 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_50;
#line 150 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_52;
#line 150 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_54;
#line 150 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_56;

#line 150 "rbmm.region_instruction.m"
    {
#line 150 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 11))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 12))), ((MR_Integer) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), &transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_50, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_4), &transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_52, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_6), &transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_54, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_8), &transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_56);
    }
#line 150 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_50));
#line 150 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_52));
#line 150 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_54));
#line 150 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_56));
#line 150 "rbmm.region_instruction.m"
  }
#line 150 "rbmm.region_instruction.m"
}

#line 133 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0(
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_19,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfoTable_20,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ExecPathTable_21,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRBeforeTable_22,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRAfterTable_23,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegionTable_24,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_25,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_26,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalRTable_27,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__PredId_28,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_35,
#line 133 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_36,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_37,
#line 133 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_38,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_39,
#line 133 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_40,
#line 133 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_41,
#line 133 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_42)
#line 133 "rbmm.region_instruction.m"
{
#line 147 "rbmm.region_instruction.m"
  {
#line 147 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 147 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_58_58;
#line 147 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__PredInfo_33;
#line 147 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__ProcIds_34;
#line 147 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_43_43;
#line 150 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_BecomeLiveTable_36;
#line 150 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_BecomeDeadBeforeTable_38;
#line 150 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_BecomeDeadAfterTable_40;
#line 150 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionTable_42;

#line 148 "rbmm.region_instruction.m"
    {
#line 148 "rbmm.region_instruction.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_instruction__ModuleInfo_19, transform_hlds__rbmm__region_instruction__PredId_28, &transform_hlds__rbmm__region_instruction__PredInfo_33);
    }
#line 149 "rbmm.region_instruction.m"
    {
#line 149 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__ProcIds_34 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_instruction__PredInfo_33);
    }
#line 150 "rbmm.region_instruction.m"
    {
#line 150 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_4[0]));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0_1));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 3) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ModuleInfo_19));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__PredId_28));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 5) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RptaInfoTable_20));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 6) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ExecPathTable_21));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 7) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LRBeforeTable_22));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 8) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LRAfterTable_23));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 9) = ((MR_Box) (transform_hlds__rbmm__region_instruction__VoidVarRegionTable_24));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 10) = ((MR_Box) (transform_hlds__rbmm__region_instruction__BornRTable_25));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 11) = ((MR_Box) (transform_hlds__rbmm__region_instruction__DeadRTable_26));
#line 150 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 12) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LocalRTable_27));
#line 150 "rbmm.region_instruction.m"
    }
#line 4382 "transform_hlds.rbmm.region_instruction.c"
    transform_hlds__rbmm__region_instruction__TypeInfo_58_58 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[2];
#line 150 "rbmm.region_instruction.m"
    {
#line 150 "rbmm.region_instruction.m"
      mercury__list__foldl4_10_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, transform_hlds__rbmm__region_instruction__TypeInfo_58_58, transform_hlds__rbmm__region_instruction__TypeInfo_58_58, transform_hlds__rbmm__region_instruction__TypeInfo_58_58, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[3], transform_hlds__rbmm__region_instruction__V_43_43, transform_hlds__rbmm__region_instruction__ProcIds_34, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_35)), &transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_BecomeLiveTable_36, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_37)), &transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_BecomeDeadBeforeTable_38, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_39)), &transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_BecomeDeadAfterTable_40, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_41)), &transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionTable_42);
    }
#line 150 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_36 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_BecomeLiveTable_36);
#line 150 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_38 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_BecomeDeadBeforeTable_38);
#line 150 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_40 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_BecomeDeadAfterTable_40);
#line 150 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_42 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionTable_42);
#line 147 "rbmm.region_instruction.m"
  }
#line 133 "rbmm.region_instruction.m"
}

#line 125 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0_1(
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 125 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_4,
#line 125 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_5,
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_6,
#line 125 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_7,
#line 125 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_8,
#line 125 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_9)
#line 125 "rbmm.region_instruction.m"
{
#line 125 "rbmm.region_instruction.m"
  {
#line 125 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 125 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_36;
#line 125 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_38;
#line 125 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_40;
#line 125 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_42;

#line 125 "rbmm.region_instruction.m"
    {
#line 125 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 11))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), &transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_36, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_4), &transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_38, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_6), &transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_40, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_8), &transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_42);
    }
#line 125 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_36));
#line 125 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_38));
#line 125 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_40));
#line 125 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_42));
#line 125 "rbmm.region_instruction.m"
  }
#line 125 "rbmm.region_instruction.m"
}

#line 98 "rbmm.region_instruction.m"
void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0(
#line 98 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_14,
#line 98 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfoTable_15,
#line 98 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ExecPathTable_16,
#line 98 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRBeforeTable_17,
#line 98 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRAfterTable_18,
#line 98 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegionTable_19,
#line 98 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_20,
#line 98 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_21,
#line 98 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalRTable_22,
#line 98 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__BecomeLiveTable_23,
#line 98 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__BecomeDeadBeforeTable_24,
#line 98 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__BecomeDeadAfterTable_25,
#line 98 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__RegionInstructionTable_26)
#line 98 "rbmm.region_instruction.m"
{
#line 123 "rbmm.region_instruction.m"
  {
#line 123 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 123 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42;
#line 123 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_43_43;
#line 123 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_46_46;
#line 123 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__PredIds_27;
#line 123 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_28_28;
#line 123 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_29_29;
#line 123 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_30_30;
#line 123 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_31_31;
#line 123 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_32_32;
#line 125 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv7_BecomeLiveTable_23;
#line 125 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv6_BecomeDeadBeforeTable_24;
#line 125 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv5_BecomeDeadAfterTable_25;
#line 125 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv4_RegionInstructionTable_26;

#line 124 "rbmm.region_instruction.m"
    {
#line 124 "rbmm.region_instruction.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__region_instruction__ModuleInfo_14, &transform_hlds__rbmm__region_instruction__PredIds_27);
    }
#line 125 "rbmm.region_instruction.m"
    {
#line 125 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_3[0]));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0_1));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 3) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ModuleInfo_14));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RptaInfoTable_15));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 5) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ExecPathTable_16));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 6) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LRBeforeTable_17));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 7) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LRAfterTable_18));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 8) = ((MR_Box) (transform_hlds__rbmm__region_instruction__VoidVarRegionTable_19));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 9) = ((MR_Box) (transform_hlds__rbmm__region_instruction__BornRTable_20));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 10) = ((MR_Box) (transform_hlds__rbmm__region_instruction__DeadRTable_21));
#line 125 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 11) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LocalRTable_22));
#line 125 "rbmm.region_instruction.m"
    }
#line 4555 "transform_hlds.rbmm.region_instruction.c"
    transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4557 "transform_hlds.rbmm.region_instruction.c"
    transform_hlds__rbmm__region_instruction__TypeInfo_43_43 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[0];
#line 128 "rbmm.region_instruction.m"
    {
#line 128 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_29_29 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42, transform_hlds__rbmm__region_instruction__TypeInfo_43_43);
    }
#line 129 "rbmm.region_instruction.m"
    {
#line 129 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_30_30 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42, transform_hlds__rbmm__region_instruction__TypeInfo_43_43);
    }
#line 130 "rbmm.region_instruction.m"
    {
#line 130 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_31_31 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42, transform_hlds__rbmm__region_instruction__TypeInfo_43_43);
    }
#line 131 "rbmm.region_instruction.m"
    {
#line 131 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_32_32 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[1]);
    }
#line 4579 "transform_hlds.rbmm.region_instruction.c"
    transform_hlds__rbmm__region_instruction__TypeInfo_46_46 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[2];
#line 125 "rbmm.region_instruction.m"
    {
#line 125 "rbmm.region_instruction.m"
      mercury__list__foldl4_10_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__rbmm__region_instruction__TypeInfo_46_46, transform_hlds__rbmm__region_instruction__TypeInfo_46_46, transform_hlds__rbmm__region_instruction__TypeInfo_46_46, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[3], transform_hlds__rbmm__region_instruction__V_28_28, transform_hlds__rbmm__region_instruction__PredIds_27, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_29_29)), &transform_hlds__rbmm__region_instruction__conv7_BecomeLiveTable_23, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_30_30)), &transform_hlds__rbmm__region_instruction__conv6_BecomeDeadBeforeTable_24, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_31_31)), &transform_hlds__rbmm__region_instruction__conv5_BecomeDeadAfterTable_25, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_32_32)), &transform_hlds__rbmm__region_instruction__conv4_RegionInstructionTable_26);
    }
#line 125 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__BecomeLiveTable_23 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv7_BecomeLiveTable_23);
#line 125 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__BecomeDeadBeforeTable_24 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv6_BecomeDeadBeforeTable_24);
#line 125 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__BecomeDeadAfterTable_25 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv5_BecomeDeadAfterTable_25);
#line 125 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__RegionInstructionTable_26 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv4_RegionInstructionTable_26);
#line 123 "rbmm.region_instruction.m"
  }
#line 98 "rbmm.region_instruction.m"
}

void mercury__transform_hlds__rbmm__region_instruction__init(void)
{
}

void mercury__transform_hlds__rbmm__region_instruction__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0);
}

void mercury__transform_hlds__rbmm__region_instruction__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.region_instruction. */
