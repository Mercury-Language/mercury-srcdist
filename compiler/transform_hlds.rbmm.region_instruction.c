/*
** Automatically generated from `rbmm.region_instruction.m'
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


/* :- module transform_hlds.rbmm.region_instruction. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__region_instruction__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_instruction.mih"


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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
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




#line 154 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 157 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 160 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 163 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 166 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 169 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 172 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 175 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 178 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 181 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 184 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 187 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 190 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 193 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 196 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_instrs_before_after_0_0[2];

#line 199 "transform_hlds.rbmm.region_instruction.c"
static const MR_ConstString transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_names_instrs_before_after_0_0[2];

#line 202 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0;

#line 205 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0[1];

#line 208 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0[1];

#line 211 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0[1];

#line 214 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0[1];

#line 217 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_0[1];

#line 220 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0;

#line 223 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_1[1];

#line 226 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1;

#line 229 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_2[2];

#line 232 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2;

#line 235 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_0[1];

#line 238 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_1[1];

#line 241 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_2[1];

#line 244 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_region_instr_0[3];

#line 247 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0[3];

#line 250 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0[3];

#line 253 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 256 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0;

#line 259 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1;

#line 262 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2;

#line 265 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_value_ordered_region_instr_type_0[3];

#line 268 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0[3];

#line 271 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0[3];

#line 274 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0_10001(
#line 277 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 279 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2);

#line 282 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0_10001(
#line 285 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 287 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 289 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 292 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0_10001(
#line 295 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 297 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2);

#line 300 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0_10001(
#line 303 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 305 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 307 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 310 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0_10001(
#line 313 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 315 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2);

#line 318 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0_10001(
#line 321 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 323 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 325 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 328 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0_10001(
#line 331 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 333 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2);

#line 336 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0_10001(
#line 339 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 341 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 343 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 346 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0_10001(
#line 349 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 351 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2);

#line 354 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0_10001(
#line 357 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 359 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 361 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 477 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(
#line 477 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RegionInstrType_7,
#line 477 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_8,
#line 477 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Graph_9,
#line 477 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Region_10,
#line 477 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17,
#line 477 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_18);

#line 445 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_p_0(
#line 445 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RegionInstType_7,
#line 445 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_8,
#line 445 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Graph_9,
#line 445 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Region_10,
#line 445 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16,
#line 445 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_17);

#line 431 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_p_0(
#line 431 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDead_7,
#line 431 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__CalleeDeadR_8,
#line 431 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__SourceRegion_9,
#line 431 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__TargetRegion_10,
#line 431 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_0_12,
#line 431 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_13);

#line 413 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_p_0(
#line 413 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeLive_7,
#line 413 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__CalleeBornR_8,
#line 413 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__SourceRegion_9,
#line 413 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__TargetRegion_10,
#line 413 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_0_12,
#line 413 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_13);

#line 349 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_2(
#line 349 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 349 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 349 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 349 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 349 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_4);

#line 341 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_1(
#line 341 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 341 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 341 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 341 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 341 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_4);

#line 315 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0(
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Expr_12,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_13,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeLive_14,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDead_15,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_16,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_17,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_18,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_19,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_20,
#line 315 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21,
#line 315 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22);

#line 279 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_3(
#line 279 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 279 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 279 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 279 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 276 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_2(
#line 276 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 276 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 276 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 276 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 273 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_1(
#line 273 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 273 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 273 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 273 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3);

#line 228 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0(
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_2,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornR_3,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadR_4,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalR_5,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRBefore_6,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRAfter_7,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_9,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_10,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_11,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_12,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint_13,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_14,
#line 228 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_15,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_16,
#line 228 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_17,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_18,
#line 228 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_19,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_20,
#line 228 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_21);

#line 199 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_p_0(
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_2,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornR_3,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadR_4,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalR_5,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRBefore_6,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRAfter_7,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_9,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_10,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_11,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_12,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_13,
#line 199 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_14,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_15,
#line 199 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_16,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_17,
#line 199 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_18,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_19,
#line 199 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_20);

#line 155 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_p_0(
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_20,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__PredId_21,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfoTable_22,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ExecPathTable_23,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRBeforeTable_24,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRAfterTable_25,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegionTable_26,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_27,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_28,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalRTable_29,
#line 155 "rbmm.region_instruction.m"
  MR_Integer transform_hlds__rbmm__region_instruction__ProcId_30,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_49,
#line 155 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_50,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_51,
#line 155 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_52,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_53,
#line 155 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_54,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_55,
#line 155 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_56);

#line 149 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0_1(
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 149 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_4,
#line 149 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_5,
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_6,
#line 149 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_7,
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_8,
#line 149 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_9);

#line 132 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0(
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_19,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfoTable_20,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ExecPathTable_21,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRBeforeTable_22,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRAfterTable_23,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegionTable_24,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_25,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_26,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalRTable_27,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__PredId_28,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_35,
#line 132 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_36,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_37,
#line 132 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_38,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_39,
#line 132 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_40,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_41,
#line 132 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_42);

#line 124 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0_1(
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 124 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_4,
#line 124 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_5,
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_6,
#line 124 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_7,
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_8,
#line 124 "rbmm.region_instruction.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 905 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 914 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 923 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 931 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 939 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 948 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 956 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 965 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 974 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 983 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 992 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1001 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1010 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1018 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1026 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_instrs_before_after_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
};

#line 1032 "transform_hlds.rbmm.region_instruction.c"
static const MR_ConstString transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_names_instrs_before_after_0_0[2] = {
  (MR_String) "instrs_before",
  (MR_String) "instrs_after"
};

#line 1038 "transform_hlds.rbmm.region_instruction.c"
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

#line 1053 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0[1] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0
};

#line 1058 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0
  }
};

#line 1067 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0[1] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0
};

#line 1072 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0[1] = {
  (MR_Integer) 0
};

#line 1077 "transform_hlds.rbmm.region_instruction.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "instrs_before_after",
  {     transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0 },
  {     transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0
};

#line 1094 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1099 "transform_hlds.rbmm.region_instruction.c"
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

#line 1114 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1119 "transform_hlds.rbmm.region_instruction.c"
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

#line 1134 "transform_hlds.rbmm.region_instruction.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1140 "transform_hlds.rbmm.region_instruction.c"
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

#line 1155 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_0[1] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0
};

#line 1160 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_1[1] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1
};

#line 1165 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_2[1] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2
};

#line 1170 "transform_hlds.rbmm.region_instruction.c"
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

#line 1189 "transform_hlds.rbmm.region_instruction.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0[3] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2
};

#line 1196 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1203 "transform_hlds.rbmm.region_instruction.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr",
  {     transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0 },
  {     transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_region_instr_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0
};

#line 1220 "transform_hlds.rbmm.region_instruction.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr_proc",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1237 "transform_hlds.rbmm.region_instruction.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1246 "transform_hlds.rbmm.region_instruction.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1263 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0 = {
  (MR_String) "create_region_instr",
  (MR_Integer) 0
};

#line 1269 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1 = {
  (MR_String) "remove_region_instr",
  (MR_Integer) 1
};

#line 1275 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2 = {
  (MR_String) "renaming_region_instr",
  (MR_Integer) 2
};

#line 1281 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_value_ordered_region_instr_type_0[3] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2
};

#line 1288 "transform_hlds.rbmm.region_instruction.c"
static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0[3] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2
};

#line 1295 "transform_hlds.rbmm.region_instruction.c"
static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1302 "transform_hlds.rbmm.region_instruction.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr_type",
  {     transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0 },
  {     transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_value_ordered_region_instr_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0
};

#line 1319 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0_10001(
#line 1322 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1324 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2)
#line 1326 "transform_hlds.rbmm.region_instruction.c"
{
#line 1328 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1330 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 1333 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1335 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0(((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2));
    }
#line 1338 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1340 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1342 "transform_hlds.rbmm.region_instruction.c"
}

#line 1345 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0_10001(
#line 1348 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1350 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 1352 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 1354 "transform_hlds.rbmm.region_instruction.c"
{
#line 1356 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1358 "transform_hlds.rbmm.region_instruction.c"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1;

#line 1361 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1363 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0(&transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3));
    }
#line 1366 "transform_hlds.rbmm.region_instruction.c"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1));
#line 1368 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1370 "transform_hlds.rbmm.region_instruction.c"
}

#line 1373 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0_10001(
#line 1376 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1378 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2)
#line 1380 "transform_hlds.rbmm.region_instruction.c"
{
#line 1382 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1384 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 1387 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1389 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0(((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2));
    }
#line 1392 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1394 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1396 "transform_hlds.rbmm.region_instruction.c"
}

#line 1399 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0_10001(
#line 1402 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1404 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 1406 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 1408 "transform_hlds.rbmm.region_instruction.c"
{
#line 1410 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1412 "transform_hlds.rbmm.region_instruction.c"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1;

#line 1415 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1417 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0(&transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3));
    }
#line 1420 "transform_hlds.rbmm.region_instruction.c"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1));
#line 1422 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1424 "transform_hlds.rbmm.region_instruction.c"
}

#line 1427 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0_10001(
#line 1430 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1432 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2)
#line 1434 "transform_hlds.rbmm.region_instruction.c"
{
#line 1436 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1438 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 1441 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1443 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0(((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2));
    }
#line 1446 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1448 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1450 "transform_hlds.rbmm.region_instruction.c"
}

#line 1453 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0_10001(
#line 1456 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1458 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 1460 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 1462 "transform_hlds.rbmm.region_instruction.c"
{
#line 1464 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1466 "transform_hlds.rbmm.region_instruction.c"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1;

#line 1469 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1471 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0(&transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3));
    }
#line 1474 "transform_hlds.rbmm.region_instruction.c"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1));
#line 1476 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1478 "transform_hlds.rbmm.region_instruction.c"
}

#line 1481 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0_10001(
#line 1484 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1486 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2)
#line 1488 "transform_hlds.rbmm.region_instruction.c"
{
#line 1490 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1492 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 1495 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1497 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0(((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2));
    }
#line 1500 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1502 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1504 "transform_hlds.rbmm.region_instruction.c"
}

#line 1507 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0_10001(
#line 1510 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1512 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 1514 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 1516 "transform_hlds.rbmm.region_instruction.c"
{
#line 1518 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1520 "transform_hlds.rbmm.region_instruction.c"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1;

#line 1523 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1525 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0(&transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3));
    }
#line 1528 "transform_hlds.rbmm.region_instruction.c"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1));
#line 1530 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1532 "transform_hlds.rbmm.region_instruction.c"
}

#line 1535 "transform_hlds.rbmm.region_instruction.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0_10001(
#line 1538 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1540 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2)
#line 1542 "transform_hlds.rbmm.region_instruction.c"
{
#line 1544 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1546 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 1549 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1551 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0(((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2));
    }
#line 1554 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1556 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1558 "transform_hlds.rbmm.region_instruction.c"
}

#line 1561 "transform_hlds.rbmm.region_instruction.c"
static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0_10001(
#line 1564 "transform_hlds.rbmm.region_instruction.c"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 1566 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 1568 "transform_hlds.rbmm.region_instruction.c"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 1570 "transform_hlds.rbmm.region_instruction.c"
{
#line 1572 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1574 "transform_hlds.rbmm.region_instruction.c"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1;

#line 1577 "transform_hlds.rbmm.region_instruction.c"
    {
#line 1579 "transform_hlds.rbmm.region_instruction.c"
      transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0(&transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3));
    }
#line 1582 "transform_hlds.rbmm.region_instruction.c"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_HeadVar__1_1));
#line 1584 "transform_hlds.rbmm.region_instruction.c"
  }
#line 1586 "transform_hlds.rbmm.region_instruction.c"
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
#line 1628 "transform_hlds.rbmm.region_instruction.c"
  {
#line 1630 "transform_hlds.rbmm.region_instruction.c"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__HeadVar__2_1 == transform_hlds__rbmm__region_instruction__HeadVar__2_2);

#line 1633 "transform_hlds.rbmm.region_instruction.c"
    return transform_hlds__rbmm__region_instruction__succeeded;
#line 1635 "transform_hlds.rbmm.region_instruction.c"
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
      transform_hlds__rbmm__region_instruction__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[3], ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar2_4)));
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
      transform_hlds__rbmm__region_instruction__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_instruction__Cast_HeadVar2_4)));
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
#line 1784 "transform_hlds.rbmm.region_instruction.c"
      *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 0;
#line 49 "rbmm.region_instruction.m"
    else
#line 49 "rbmm.region_instruction.m"
#line 49 "rbmm.region_instruction.m"
      switch (MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__2_2)) {
#line 49 "rbmm.region_instruction.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 49 "rbmm.region_instruction.m"
        case (MR_Integer) 0:
#line 49 "rbmm.region_instruction.m"
          {
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "rbmm.region_instruction.m"
#line 49 "rbmm.region_instruction.m"
            switch (MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__3_3)) {
#line 49 "rbmm.region_instruction.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 49 "rbmm.region_instruction.m"
              case (MR_Integer) 0:
#line 49 "rbmm.region_instruction.m"
                {
#line 49 "rbmm.region_instruction.m"
                  MR_String transform_hlds__rbmm__region_instruction__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__HeadVar__3_3, (MR_Integer) 0)));

#line 49 "rbmm.region_instruction.m"
                  {
#line 49 "rbmm.region_instruction.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(transform_hlds__rbmm__region_instruction__HeadVar__1_1, transform_hlds__rbmm__region_instruction__V_35_35, transform_hlds__rbmm__region_instruction__V_5_5);
                  }
#line 49 "rbmm.region_instruction.m"
                }
#line 49 "rbmm.region_instruction.m"
                break;
#line 49 "rbmm.region_instruction.m"
              case (MR_Integer) 1:
#line 1823 "transform_hlds.rbmm.region_instruction.c"
                *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "rbmm.region_instruction.m"
                break;
#line 49 "rbmm.region_instruction.m"
              case (MR_Integer) 2:
#line 1829 "transform_hlds.rbmm.region_instruction.c"
                *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "rbmm.region_instruction.m"
                break;
#line 49 "rbmm.region_instruction.m"
            }
#line 49 "rbmm.region_instruction.m"
          }
#line 49 "rbmm.region_instruction.m"
          break;
#line 49 "rbmm.region_instruction.m"
        case (MR_Integer) 1:
#line 49 "rbmm.region_instruction.m"
          {
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "rbmm.region_instruction.m"
#line 49 "rbmm.region_instruction.m"
            switch (MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__3_3)) {
#line 49 "rbmm.region_instruction.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 49 "rbmm.region_instruction.m"
              case (MR_Integer) 0:
#line 1853 "transform_hlds.rbmm.region_instruction.c"
                *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "rbmm.region_instruction.m"
                break;
#line 49 "rbmm.region_instruction.m"
              case (MR_Integer) 1:
#line 49 "rbmm.region_instruction.m"
                {
#line 49 "rbmm.region_instruction.m"
                  MR_String transform_hlds__rbmm__region_instruction__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__3_3, (MR_Integer) 0)));

#line 49 "rbmm.region_instruction.m"
                  {
#line 49 "rbmm.region_instruction.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(transform_hlds__rbmm__region_instruction__HeadVar__1_1, transform_hlds__rbmm__region_instruction__V_36_36, transform_hlds__rbmm__region_instruction__V_14_14);
                  }
#line 49 "rbmm.region_instruction.m"
                }
#line 49 "rbmm.region_instruction.m"
                break;
#line 49 "rbmm.region_instruction.m"
              case (MR_Integer) 2:
#line 1875 "transform_hlds.rbmm.region_instruction.c"
                *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "rbmm.region_instruction.m"
                break;
#line 49 "rbmm.region_instruction.m"
            }
#line 49 "rbmm.region_instruction.m"
          }
#line 49 "rbmm.region_instruction.m"
          break;
#line 49 "rbmm.region_instruction.m"
        case (MR_Integer) 2:
#line 49 "rbmm.region_instruction.m"
          {
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 1)));
#line 49 "rbmm.region_instruction.m"
            MR_String transform_hlds__rbmm__region_instruction__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "rbmm.region_instruction.m"
#line 49 "rbmm.region_instruction.m"
            switch (MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__3_3)) {
#line 49 "rbmm.region_instruction.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 49 "rbmm.region_instruction.m"
              case (MR_Integer) 0:
#line 1901 "transform_hlds.rbmm.region_instruction.c"
                *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "rbmm.region_instruction.m"
                break;
#line 49 "rbmm.region_instruction.m"
              case (MR_Integer) 1:
#line 1907 "transform_hlds.rbmm.region_instruction.c"
                *transform_hlds__rbmm__region_instruction__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "rbmm.region_instruction.m"
                break;
#line 49 "rbmm.region_instruction.m"
              case (MR_Integer) 2:
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
#line 1927 "transform_hlds.rbmm.region_instruction.c"
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
                    }
#line 49 "rbmm.region_instruction.m"
                }
#line 49 "rbmm.region_instruction.m"
                break;
#line 49 "rbmm.region_instruction.m"
            }
#line 49 "rbmm.region_instruction.m"
          }
#line 49 "rbmm.region_instruction.m"
          break;
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
#line 49 "rbmm.region_instruction.m"
      switch (MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__HeadVar__1_1)) {
#line 49 "rbmm.region_instruction.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 49 "rbmm.region_instruction.m"
        case (MR_Integer) 0:
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
#line 2007 "transform_hlds.rbmm.region_instruction.c"
                transform_hlds__rbmm__region_instruction__succeeded = (strcmp(transform_hlds__rbmm__region_instruction__V_3_3, transform_hlds__rbmm__region_instruction__V_4_4) == 0);
#line 49 "rbmm.region_instruction.m"
              }
#line 49 "rbmm.region_instruction.m"
          }
#line 49 "rbmm.region_instruction.m"
          break;
#line 49 "rbmm.region_instruction.m"
        case (MR_Integer) 1:
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
#line 2032 "transform_hlds.rbmm.region_instruction.c"
                transform_hlds__rbmm__region_instruction__succeeded = (strcmp(transform_hlds__rbmm__region_instruction__V_5_5, transform_hlds__rbmm__region_instruction__V_6_6) == 0);
#line 49 "rbmm.region_instruction.m"
              }
#line 49 "rbmm.region_instruction.m"
          }
#line 49 "rbmm.region_instruction.m"
          break;
#line 49 "rbmm.region_instruction.m"
        case (MR_Integer) 2:
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
#line 2063 "transform_hlds.rbmm.region_instruction.c"
                transform_hlds__rbmm__region_instruction__succeeded = (strcmp(transform_hlds__rbmm__region_instruction__V_7_7, transform_hlds__rbmm__region_instruction__V_9_9) == 0);
#line 49 "rbmm.region_instruction.m"
                if (transform_hlds__rbmm__region_instruction__succeeded)
#line 2067 "transform_hlds.rbmm.region_instruction.c"
                  transform_hlds__rbmm__region_instruction__succeeded = (strcmp(transform_hlds__rbmm__region_instruction__V_8_8, transform_hlds__rbmm__region_instruction__V_10_10) == 0);
#line 49 "rbmm.region_instruction.m"
              }
#line 49 "rbmm.region_instruction.m"
          }
#line 49 "rbmm.region_instruction.m"
          break;
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
#line 2108 "transform_hlds.rbmm.region_instruction.c"
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
#line 2130 "transform_hlds.rbmm.region_instruction.c"
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

#line 2195 "transform_hlds.rbmm.region_instruction.c"
        {
#line 2197 "transform_hlds.rbmm.region_instruction.c"
          transform_hlds__rbmm__region_instruction__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[3], ((MR_Box) (transform_hlds__rbmm__region_instruction__V_3_3)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_5_5)));
        }
#line 38 "rbmm.region_instruction.m"
        if (transform_hlds__rbmm__region_instruction__succeeded)
#line 38 "rbmm.region_instruction.m"
          {
#line 2204 "transform_hlds.rbmm.region_instruction.c"
            transform_hlds__rbmm__region_instruction__TypeInfo_10_10 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[3];
#line 2206 "transform_hlds.rbmm.region_instruction.c"
            {
#line 2208 "transform_hlds.rbmm.region_instruction.c"
              transform_hlds__rbmm__region_instruction__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__region_instruction__TypeInfo_10_10, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_4_4)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_6_6)));
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

#line 477 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(
#line 477 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RegionInstrType_7,
#line 477 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_8,
#line 477 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Graph_9,
#line 477 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Region_10,
#line 477 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17,
#line 477 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_18)
#line 477 "rbmm.region_instruction.m"
{
#line 482 "rbmm.region_instruction.m"
  {
#line 482 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 482 "rbmm.region_instruction.m"
    MR_String transform_hlds__rbmm__region_instruction__RegionName_12;
#line 482 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__RegionInstruction_13;
#line 506 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__InstrsBefore_14;
#line 506 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__InstrsAfter_15;
#line 488 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_19_19;
#line 488 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv0_V_19_19;

#line 483 "rbmm.region_instruction.m"
    {
#line 483 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__RegionName_12 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_instruction__Graph_9, transform_hlds__rbmm__region_instruction__Region_10);
    }
#line 518 "rbmm.region_instruction.m"
#line 518 "rbmm.region_instruction.m"
    switch (transform_hlds__rbmm__region_instruction__RegionInstrType_7) {
#line 518 "rbmm.region_instruction.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 518 "rbmm.region_instruction.m"
      case (MR_Integer) 0:
#line 519 "rbmm.region_instruction.m"
        {
#line 519 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__RegionInstruction_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 519 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RegionInstruction_13, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionName_12));
#line 519 "rbmm.region_instruction.m"
        }
#line 518 "rbmm.region_instruction.m"
        break;
#line 518 "rbmm.region_instruction.m"
      case (MR_Integer) 1:
#line 522 "rbmm.region_instruction.m"
        {
#line 522 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__RegionInstruction_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__RegionInstruction_13, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionName_12));
#line 522 "rbmm.region_instruction.m"
        }
#line 518 "rbmm.region_instruction.m"
        break;
#line 518 "rbmm.region_instruction.m"
      case (MR_Integer) 2:
#line 524 "rbmm.region_instruction.m"
        {
#line 525 "rbmm.region_instruction.m"
          {
#line 525 "rbmm.region_instruction.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_instruction", (MR_String) "predicate \140transform_hlds.rbmm.region_instruction.make_create_or_remove_instruction\'/3", (MR_String) "unexpected region instruction type");
#line 525 "rbmm.region_instruction.m"
            return;
          }
#line 524 "rbmm.region_instruction.m"
        }
#line 518 "rbmm.region_instruction.m"
        break;
#line 518 "rbmm.region_instruction.m"
    }
#line 488 "rbmm.region_instruction.m"
    {
#line 488 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), &transform_hlds__rbmm__region_instruction__conv0_V_19_19);
    }
#line 488 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 488 "rbmm.region_instruction.m"
      {
#line 488 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_19_19 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv0_V_19_19);
#line 488 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 488 "rbmm.region_instruction.m"
      }
#line 488 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 488 "rbmm.region_instruction.m"
      {
#line 489 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__InstrsBefore_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_19_19, (MR_Integer) 0)));
#line 489 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__InstrsAfter_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_19_19, (MR_Integer) 1)));
#line 489 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 488 "rbmm.region_instruction.m"
      }
#line 506 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 493 "rbmm.region_instruction.m"
      {
#line 491 "rbmm.region_instruction.m"
        {
#line 491 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13)), transform_hlds__rbmm__region_instruction__InstrsBefore_14);
        }
#line 493 "rbmm.region_instruction.m"
        if (transform_hlds__rbmm__region_instruction__succeeded)
#line 493 "rbmm.region_instruction.m"
          *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_18 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17;
#line 493 "rbmm.region_instruction.m"
        else
#line 501 "rbmm.region_instruction.m"
          {
#line 501 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__NewInstrsBefore_16;
#line 501 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_22_22;

#line 497 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__RegionInstrType_7 == (MR_Integer) 0);
#line 499 "rbmm.region_instruction.m"
            if (transform_hlds__rbmm__region_instruction__succeeded)
#line 498 "rbmm.region_instruction.m"
              {
#line 498 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__V_20_20;

#line 498 "rbmm.region_instruction.m"
                {
#line 498 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "rbmm.region_instruction.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_20_20, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13));
#line 498 "rbmm.region_instruction.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 498 "rbmm.region_instruction.m"
                }
#line 498 "rbmm.region_instruction.m"
                {
#line 498 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__NewInstrsBefore_16 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, transform_hlds__rbmm__region_instruction__InstrsBefore_14, transform_hlds__rbmm__region_instruction__V_20_20);
                }
#line 498 "rbmm.region_instruction.m"
              }
#line 499 "rbmm.region_instruction.m"
            else
#line 500 "rbmm.region_instruction.m"
              {
#line 500 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__NewInstrsBefore_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__NewInstrsBefore_16, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13));
#line 500 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__NewInstrsBefore_16, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__InstrsBefore_14));
#line 500 "rbmm.region_instruction.m"
              }
#line 503 "rbmm.region_instruction.m"
            {
#line 503 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 503 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_22_22, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__NewInstrsBefore_16));
#line 503 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_22_22, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__InstrsAfter_15));
#line 503 "rbmm.region_instruction.m"
            }
#line 502 "rbmm.region_instruction.m"
            {
#line 502 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_22_22)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_18);
            }
#line 501 "rbmm.region_instruction.m"
          }
#line 493 "rbmm.region_instruction.m"
      }
#line 506 "rbmm.region_instruction.m"
    else
#line 507 "rbmm.region_instruction.m"
      {
#line 507 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_24_24;
#line 507 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_26_26;

#line 508 "rbmm.region_instruction.m"
        {
#line 508 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_26_26, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13));
#line 508 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "rbmm.region_instruction.m"
        }
#line 508 "rbmm.region_instruction.m"
        {
#line 508 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 508 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_24_24, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__V_26_26));
#line 508 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "rbmm.region_instruction.m"
        }
#line 507 "rbmm.region_instruction.m"
        {
#line 507 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_24_24)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_17, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_18);
        }
#line 507 "rbmm.region_instruction.m"
      }
#line 482 "rbmm.region_instruction.m"
  }
#line 477 "rbmm.region_instruction.m"
}

#line 445 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_p_0(
#line 445 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RegionInstType_7,
#line 445 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_8,
#line 445 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Graph_9,
#line 445 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Region_10,
#line 445 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16,
#line 445 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_17)
#line 445 "rbmm.region_instruction.m"
{
#line 450 "rbmm.region_instruction.m"
  {
#line 450 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 450 "rbmm.region_instruction.m"
    MR_String transform_hlds__rbmm__region_instruction__RegionName_12;
#line 450 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__RegionInstruction_13;
#line 467 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__InstsBefore_14;
#line 467 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__InstsAfter_15;
#line 456 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_18_18;
#line 456 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv0_V_18_18;

#line 451 "rbmm.region_instruction.m"
    {
#line 451 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__RegionName_12 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_instruction__Graph_9, transform_hlds__rbmm__region_instruction__Region_10);
    }
#line 518 "rbmm.region_instruction.m"
#line 518 "rbmm.region_instruction.m"
    switch (transform_hlds__rbmm__region_instruction__RegionInstType_7) {
#line 518 "rbmm.region_instruction.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 518 "rbmm.region_instruction.m"
      case (MR_Integer) 0:
#line 519 "rbmm.region_instruction.m"
        {
#line 519 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__RegionInstruction_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 519 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RegionInstruction_13, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionName_12));
#line 519 "rbmm.region_instruction.m"
        }
#line 518 "rbmm.region_instruction.m"
        break;
#line 518 "rbmm.region_instruction.m"
      case (MR_Integer) 1:
#line 522 "rbmm.region_instruction.m"
        {
#line 522 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__RegionInstruction_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__RegionInstruction_13, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionName_12));
#line 522 "rbmm.region_instruction.m"
        }
#line 518 "rbmm.region_instruction.m"
        break;
#line 518 "rbmm.region_instruction.m"
      case (MR_Integer) 2:
#line 524 "rbmm.region_instruction.m"
        {
#line 525 "rbmm.region_instruction.m"
          {
#line 525 "rbmm.region_instruction.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_instruction", (MR_String) "predicate \140transform_hlds.rbmm.region_instruction.make_create_or_remove_instruction\'/3", (MR_String) "unexpected region instruction type");
#line 525 "rbmm.region_instruction.m"
            return;
          }
#line 524 "rbmm.region_instruction.m"
        }
#line 518 "rbmm.region_instruction.m"
        break;
#line 518 "rbmm.region_instruction.m"
    }
#line 456 "rbmm.region_instruction.m"
    {
#line 456 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), &transform_hlds__rbmm__region_instruction__conv0_V_18_18);
    }
#line 456 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 456 "rbmm.region_instruction.m"
      {
#line 456 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_18_18 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv0_V_18_18);
#line 456 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 456 "rbmm.region_instruction.m"
      }
#line 456 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 456 "rbmm.region_instruction.m"
      {
#line 457 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__InstsBefore_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_18_18, (MR_Integer) 0)));
#line 457 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__InstsAfter_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_18_18, (MR_Integer) 1)));
#line 457 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 456 "rbmm.region_instruction.m"
      }
#line 467 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 461 "rbmm.region_instruction.m"
      {
#line 459 "rbmm.region_instruction.m"
        {
#line 459 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13)), transform_hlds__rbmm__region_instruction__InstsAfter_15);
        }
#line 461 "rbmm.region_instruction.m"
        if (transform_hlds__rbmm__region_instruction__succeeded)
#line 461 "rbmm.region_instruction.m"
          *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_17 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16;
#line 461 "rbmm.region_instruction.m"
        else
#line 462 "rbmm.region_instruction.m"
          {
#line 462 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_19_19;
#line 462 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_21_21;

#line 464 "rbmm.region_instruction.m"
            {
#line 464 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_21_21, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13));
#line 464 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_21_21, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__InstsAfter_15));
#line 464 "rbmm.region_instruction.m"
            }
#line 463 "rbmm.region_instruction.m"
            {
#line 463 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 463 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_19_19, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__InstsBefore_14));
#line 463 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_19_19, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__V_21_21));
#line 463 "rbmm.region_instruction.m"
            }
#line 462 "rbmm.region_instruction.m"
            {
#line 462 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_19_19)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_17);
            }
#line 462 "rbmm.region_instruction.m"
          }
#line 461 "rbmm.region_instruction.m"
      }
#line 467 "rbmm.region_instruction.m"
    else
#line 468 "rbmm.region_instruction.m"
      {
#line 468 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_22_22;
#line 468 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_25_25;

#line 469 "rbmm.region_instruction.m"
        {
#line 469 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_25_25, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstruction_13));
#line 469 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "rbmm.region_instruction.m"
        }
#line 469 "rbmm.region_instruction.m"
        {
#line 469 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "rbmm.region_instruction.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_22_22, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__V_25_25));
#line 469 "rbmm.region_instruction.m"
        }
#line 468 "rbmm.region_instruction.m"
        {
#line 468 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_8)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_22_22)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_16, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_17);
        }
#line 468 "rbmm.region_instruction.m"
      }
#line 450 "rbmm.region_instruction.m"
  }
#line 445 "rbmm.region_instruction.m"
}

#line 431 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_p_0(
#line 431 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDead_7,
#line 431 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__CalleeDeadR_8,
#line 431 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__SourceRegion_9,
#line 431 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__TargetRegion_10,
#line 431 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_0_12,
#line 431 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_13)
#line 431 "rbmm.region_instruction.m"
{
#line 441 "rbmm.region_instruction.m"
  {
#line 441 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 437 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 437 "rbmm.region_instruction.m"
    {
#line 437 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = mercury__set__contains_2_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15, transform_hlds__rbmm__region_instruction__BecomeDead_7, ((MR_Box) (transform_hlds__rbmm__region_instruction__TargetRegion_10)));
    }
#line 437 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 437 "rbmm.region_instruction.m"
      {
#line 438 "rbmm.region_instruction.m"
        {
#line 438 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__succeeded = mercury__set__contains_2_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15, transform_hlds__rbmm__region_instruction__CalleeDeadR_8, ((MR_Box) (transform_hlds__rbmm__region_instruction__SourceRegion_9)));
        }
#line 438 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = !(transform_hlds__rbmm__region_instruction__succeeded);
#line 437 "rbmm.region_instruction.m"
      }
#line 441 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 440 "rbmm.region_instruction.m"
      {
#line 440 "rbmm.region_instruction.m"
        {
#line 440 "rbmm.region_instruction.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__TargetRegion_10)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_0_12, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_13);
        }
#line 440 "rbmm.region_instruction.m"
      }
#line 441 "rbmm.region_instruction.m"
    else
#line 441 "rbmm.region_instruction.m"
      *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_13 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RemovedAfterProgPoint_0_12;
#line 441 "rbmm.region_instruction.m"
  }
#line 431 "rbmm.region_instruction.m"
}

#line 413 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_p_0(
#line 413 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeLive_7,
#line 413 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__CalleeBornR_8,
#line 413 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__SourceRegion_9,
#line 413 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__TargetRegion_10,
#line 413 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_0_12,
#line 413 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_13)
#line 413 "rbmm.region_instruction.m"
{
#line 423 "rbmm.region_instruction.m"
  {
#line 423 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 419 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 419 "rbmm.region_instruction.m"
    {
#line 419 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = mercury__set__contains_2_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15, transform_hlds__rbmm__region_instruction__BecomeLive_7, ((MR_Box) (transform_hlds__rbmm__region_instruction__TargetRegion_10)));
    }
#line 419 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 419 "rbmm.region_instruction.m"
      {
#line 420 "rbmm.region_instruction.m"
        {
#line 420 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__succeeded = mercury__set__contains_2_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_15_15, transform_hlds__rbmm__region_instruction__CalleeBornR_8, ((MR_Box) (transform_hlds__rbmm__region_instruction__SourceRegion_9)));
        }
#line 420 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = !(transform_hlds__rbmm__region_instruction__succeeded);
#line 419 "rbmm.region_instruction.m"
      }
#line 423 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 422 "rbmm.region_instruction.m"
      {
#line 422 "rbmm.region_instruction.m"
        {
#line 422 "rbmm.region_instruction.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__region_instruction__TargetRegion_10)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_0_12, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_13);
        }
#line 422 "rbmm.region_instruction.m"
      }
#line 423 "rbmm.region_instruction.m"
    else
#line 423 "rbmm.region_instruction.m"
      *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_13 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_CreatedBeforeProgPoint_0_12;
#line 423 "rbmm.region_instruction.m"
  }
#line 413 "rbmm.region_instruction.m"
}

#line 349 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_2(
#line 349 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 349 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 349 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 349 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 349 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_4)
#line 349 "rbmm.region_instruction.m"
{
#line 349 "rbmm.region_instruction.m"
  {
#line 349 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 349 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RemovedAfterProgPoint_13;

#line 349 "rbmm.region_instruction.m"
    {
#line 349 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3), &transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RemovedAfterProgPoint_13);
    }
#line 349 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RemovedAfterProgPoint_13));
#line 349 "rbmm.region_instruction.m"
  }
#line 349 "rbmm.region_instruction.m"
}

#line 341 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_1(
#line 341 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 341 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 341 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 341 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 341 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_4)
#line 341 "rbmm.region_instruction.m"
{
#line 341 "rbmm.region_instruction.m"
  {
#line 341 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 341 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_CreatedBeforeProgPoint_13;

#line 341 "rbmm.region_instruction.m"
    {
#line 341 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_3), &transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_CreatedBeforeProgPoint_13);
    }
#line 341 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_CreatedBeforeProgPoint_13));
#line 341 "rbmm.region_instruction.m"
  }
#line 341 "rbmm.region_instruction.m"
}

#line 315 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0(
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__Expr_12,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_13,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeLive_14,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDead_15,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_16,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_17,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_18,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_19,
#line 315 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_20,
#line 315 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21,
#line 315 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22)
#line 315 "rbmm.region_instruction.m"
{
#line 360 "rbmm.region_instruction.m"
  {
#line 360 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Expr_12)) == (MR_mktag((MR_Integer) 2)));
#line 360 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__CalleePredId_23;
#line 360 "rbmm.region_instruction.m"
    MR_Integer transform_hlds__rbmm__region_instruction__CalleeProcId_24;
#line 324 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_25_25;
#line 324 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_26_26;
#line 324 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_27_27;
#line 324 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_28_28;

#line 324 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 324 "rbmm.region_instruction.m"
      {
#line 324 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__CalleePredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 0)));
#line 324 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__CalleeProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 1)));
#line 324 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 2)));
#line 324 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 3)));
#line 324 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 4)));
#line 324 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 5)));
#line 326 "rbmm.region_instruction.m"
        {
#line 326 "rbmm.region_instruction.m"
          MR_Word transform_hlds__rbmm__region_instruction__CalleePPId_29;
#line 326 "rbmm.region_instruction.m"
          MR_Word transform_hlds__rbmm__region_instruction__AlphaMapping_31;
#line 327 "rbmm.region_instruction.m"
          MR_Word transform_hlds__rbmm__region_instruction___CallerGraph_30;
#line 332 "rbmm.region_instruction.m"
          MR_Word transform_hlds__rbmm__region_instruction__V_32_32;
#line 332 "rbmm.region_instruction.m"
          MR_Box transform_hlds__rbmm__region_instruction__conv0_V_32_32;

#line 326 "rbmm.region_instruction.m"
          {
#line 326 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__CalleePPId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "rbmm.region_instruction.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__CalleePPId_29, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleePredId_23));
#line 326 "rbmm.region_instruction.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__CalleePPId_29, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleeProcId_24));
#line 326 "rbmm.region_instruction.m"
          }
#line 327 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction___CallerGraph_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_16, (MR_Integer) 0)));
#line 327 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__AlphaMapping_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_16, (MR_Integer) 1)));
#line 332 "rbmm.region_instruction.m"
          {
#line 332 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[0], transform_hlds__rbmm__region_instruction__BornRTable_17, ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleePPId_29)), &transform_hlds__rbmm__region_instruction__conv0_V_32_32);
          }
#line 332 "rbmm.region_instruction.m"
          if (transform_hlds__rbmm__region_instruction__succeeded)
#line 332 "rbmm.region_instruction.m"
            {
#line 332 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_32_32 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv0_V_32_32);
#line 332 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__succeeded = MR_TRUE;
#line 332 "rbmm.region_instruction.m"
            }
#line 351 "rbmm.region_instruction.m"
          if (transform_hlds__rbmm__region_instruction__succeeded)
#line 334 "rbmm.region_instruction.m"
            {
#line 334 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_82_82;
#line 334 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_83_83;
#line 334 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88;
#line 334 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__AlphaAtProgPoint_33;
#line 334 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__CalleeBornR_34;
#line 334 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__CalleeDeadR_35;
#line 334 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__V_68_68;
#line 334 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__V_69_69;
#line 334 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__V_70_70;
#line 334 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__V_71_71;
#line 334 "rbmm.region_instruction.m"
              MR_Box transform_hlds__rbmm__region_instruction__conv1_AlphaAtProgPoint_33;
#line 339 "rbmm.region_instruction.m"
              MR_Box transform_hlds__rbmm__region_instruction__conv2_CalleeBornR_34;
#line 340 "rbmm.region_instruction.m"
              MR_Box transform_hlds__rbmm__region_instruction__conv4_CreatedBeforeProgPoint_21;
#line 348 "rbmm.region_instruction.m"
              MR_Box transform_hlds__rbmm__region_instruction__conv5_CalleeDeadR_35;
#line 349 "rbmm.region_instruction.m"
              MR_Box transform_hlds__rbmm__region_instruction__conv7_RemovedAfterProgPoint_22;

#line 334 "rbmm.region_instruction.m"
              {
#line 334 "rbmm.region_instruction.m"
                mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[5], transform_hlds__rbmm__region_instruction__AlphaMapping_31, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_13)), &transform_hlds__rbmm__region_instruction__conv1_AlphaAtProgPoint_33);
              }
#line 334 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__AlphaAtProgPoint_33 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv1_AlphaAtProgPoint_33);
#line 2994 "transform_hlds.rbmm.region_instruction.c"
              transform_hlds__rbmm__region_instruction__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 2996 "transform_hlds.rbmm.region_instruction.c"
              transform_hlds__rbmm__region_instruction__TypeInfo_83_83 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[0];
#line 339 "rbmm.region_instruction.m"
              {
#line 339 "rbmm.region_instruction.m"
                mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_82_82, transform_hlds__rbmm__region_instruction__TypeInfo_83_83, transform_hlds__rbmm__region_instruction__BornRTable_17, ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleePPId_29)), &transform_hlds__rbmm__region_instruction__conv2_CalleeBornR_34);
              }
#line 339 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__CalleeBornR_34 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv2_CalleeBornR_34);
#line 341 "rbmm.region_instruction.m"
              {
#line 341 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 341 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_68_68, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[1]));
#line 341 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_68_68, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_1));
#line 341 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 341 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_68_68, 3) = ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeLive_14));
#line 341 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_68_68, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleeBornR_34));
#line 341 "rbmm.region_instruction.m"
              }
#line 3021 "transform_hlds.rbmm.region_instruction.c"
              transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 342 "rbmm.region_instruction.m"
              {
#line 342 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_69_69 = mercury__set__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88);
              }
#line 340 "rbmm.region_instruction.m"
              {
#line 340 "rbmm.region_instruction.m"
                mercury__map__foldl_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88, transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88, transform_hlds__rbmm__region_instruction__TypeInfo_83_83, transform_hlds__rbmm__region_instruction__V_68_68, transform_hlds__rbmm__region_instruction__AlphaAtProgPoint_33, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_69_69)), &transform_hlds__rbmm__region_instruction__conv4_CreatedBeforeProgPoint_21);
              }
#line 340 "rbmm.region_instruction.m"
              *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv4_CreatedBeforeProgPoint_21);
#line 348 "rbmm.region_instruction.m"
              {
#line 348 "rbmm.region_instruction.m"
                mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_82_82, transform_hlds__rbmm__region_instruction__TypeInfo_83_83, transform_hlds__rbmm__region_instruction__DeadRTable_18, ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleePPId_29)), &transform_hlds__rbmm__region_instruction__conv5_CalleeDeadR_35);
              }
#line 348 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__CalleeDeadR_35 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv5_CalleeDeadR_35);
#line 349 "rbmm.region_instruction.m"
              {
#line 349 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 349 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_70_70, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[1]));
#line 349 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_70_70, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_2));
#line 349 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 349 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_70_70, 3) = ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeDead_15));
#line 349 "rbmm.region_instruction.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_70_70, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CalleeDeadR_35));
#line 349 "rbmm.region_instruction.m"
              }
#line 350 "rbmm.region_instruction.m"
              {
#line 350 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_71_71 = mercury__set__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88);
              }
#line 349 "rbmm.region_instruction.m"
              {
#line 349 "rbmm.region_instruction.m"
                mercury__map__foldl_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88, transform_hlds__rbmm__region_instruction__TypeCtorInfo_88_88, transform_hlds__rbmm__region_instruction__TypeInfo_83_83, transform_hlds__rbmm__region_instruction__V_70_70, transform_hlds__rbmm__region_instruction__AlphaAtProgPoint_33, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_71_71)), &transform_hlds__rbmm__region_instruction__conv7_RemovedAfterProgPoint_22);
              }
#line 349 "rbmm.region_instruction.m"
              *transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv7_RemovedAfterProgPoint_22);
#line 334 "rbmm.region_instruction.m"
            }
#line 351 "rbmm.region_instruction.m"
          else
#line 357 "rbmm.region_instruction.m"
            {
#line 357 "rbmm.region_instruction.m"
              *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = transform_hlds__rbmm__region_instruction__BecomeLive_14;
#line 358 "rbmm.region_instruction.m"
              *transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22 = transform_hlds__rbmm__region_instruction__BecomeDead_15;
#line 357 "rbmm.region_instruction.m"
            }
#line 326 "rbmm.region_instruction.m"
        }
#line 324 "rbmm.region_instruction.m"
      }
#line 324 "rbmm.region_instruction.m"
    else
#line 389 "rbmm.region_instruction.m"
      {
#line 389 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__X_36;
#line 389 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__Kind_39;
#line 361 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_37_37;
#line 361 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_38_38;
#line 361 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_40_40;

#line 361 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Expr_12)) == (MR_mktag((MR_Integer) 1)));
#line 361 "rbmm.region_instruction.m"
        if (transform_hlds__rbmm__region_instruction__succeeded)
#line 361 "rbmm.region_instruction.m"
          {
#line 361 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__X_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 0)));
#line 361 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 1)));
#line 361 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 2)));
#line 361 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__Kind_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 3)));
#line 361 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 4)));
#line 363 "rbmm.region_instruction.m"
            {
#line 363 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__Graph_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_16, (MR_Integer) 0)));
#line 363 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction___AlphaMapping_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_16, (MR_Integer) 1)));

#line 376 "rbmm.region_instruction.m"
#line 376 "rbmm.region_instruction.m"
              switch (MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Kind_39)) {
#line 376 "rbmm.region_instruction.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 376 "rbmm.region_instruction.m"
                case (MR_Integer) 0:
#line 365 "rbmm.region_instruction.m"
                  {
#line 365 "rbmm.region_instruction.m"
                    MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_93_93 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 365 "rbmm.region_instruction.m"
                    MR_Word transform_hlds__rbmm__region_instruction__Reach_X_50;
#line 365 "rbmm.region_instruction.m"
                    MR_Word transform_hlds__rbmm__region_instruction__V_72_72;

#line 373 "rbmm.region_instruction.m"
                    {
#line 373 "rbmm.region_instruction.m"
                      transform_hlds__rbmm__region_instruction__V_72_72 = mercury__set__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_93_93);
                    }
#line 372 "rbmm.region_instruction.m"
                    {
#line 372 "rbmm.region_instruction.m"
                      transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(transform_hlds__rbmm__region_instruction__Graph_41, transform_hlds__rbmm__region_instruction__ModuleInfo_19, transform_hlds__rbmm__region_instruction__ProcInfo_20, transform_hlds__rbmm__region_instruction__X_36, transform_hlds__rbmm__region_instruction__V_72_72, &transform_hlds__rbmm__region_instruction__Reach_X_50);
                    }
#line 375 "rbmm.region_instruction.m"
                    {
#line 375 "rbmm.region_instruction.m"
                      mercury__set__intersect_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_93_93, transform_hlds__rbmm__region_instruction__Reach_X_50, transform_hlds__rbmm__region_instruction__BecomeLive_14, transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21);
                    }
#line 365 "rbmm.region_instruction.m"
                  }
#line 376 "rbmm.region_instruction.m"
                  break;
#line 376 "rbmm.region_instruction.m"
                case (MR_Integer) 1:
#line 376 "rbmm.region_instruction.m"
                case (MR_Integer) 2:
#line 381 "rbmm.region_instruction.m"
                  {
#line 382 "rbmm.region_instruction.m"
                    {
#line 382 "rbmm.region_instruction.m"
                      *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
                    }
#line 381 "rbmm.region_instruction.m"
                  }
#line 376 "rbmm.region_instruction.m"
                  break;
#line 376 "rbmm.region_instruction.m"
                case (MR_Integer) 3:
#line 381 "rbmm.region_instruction.m"
                  {
#line 382 "rbmm.region_instruction.m"
                    {
#line 382 "rbmm.region_instruction.m"
                      *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
                    }
#line 381 "rbmm.region_instruction.m"
                  }
#line 376 "rbmm.region_instruction.m"
                  break;
#line 376 "rbmm.region_instruction.m"
              }
#line 388 "rbmm.region_instruction.m"
              *transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22 = transform_hlds__rbmm__region_instruction__BecomeDead_15;
#line 363 "rbmm.region_instruction.m"
            }
#line 361 "rbmm.region_instruction.m"
          }
#line 361 "rbmm.region_instruction.m"
        else
#line 398 "rbmm.region_instruction.m"
          {
#line 390 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_64_64;
#line 390 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_65_65;
#line 390 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_66_66;

#line 390 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__succeeded = ((((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Expr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 390 "rbmm.region_instruction.m"
            if (transform_hlds__rbmm__region_instruction__succeeded)
#line 390 "rbmm.region_instruction.m"
              {
#line 390 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 1)));
#line 390 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 2)));
#line 390 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 3)));
#line 396 "rbmm.region_instruction.m"
                {
#line 396 "rbmm.region_instruction.m"
                  *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
                }
#line 397 "rbmm.region_instruction.m"
                *transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22 = transform_hlds__rbmm__region_instruction__BecomeDead_15;
#line 390 "rbmm.region_instruction.m"
              }
#line 390 "rbmm.region_instruction.m"
            else
#line 405 "rbmm.region_instruction.m"
              {
#line 400 "rbmm.region_instruction.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Expr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 399 "rbmm.region_instruction.m"
                  {
#line 399 "rbmm.region_instruction.m"
                    MR_Word transform_hlds__rbmm__region_instruction__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 2)));
#line 399 "rbmm.region_instruction.m"
                    MR_Word transform_hlds__rbmm__region_instruction__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 1)));

#line 399 "rbmm.region_instruction.m"
                    transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 399 "rbmm.region_instruction.m"
                  }
#line 400 "rbmm.region_instruction.m"
                else
#line 400 "rbmm.region_instruction.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_instruction__Expr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 400 "rbmm.region_instruction.m"
                  {
#line 400 "rbmm.region_instruction.m"
                    MR_Word transform_hlds__rbmm__region_instruction__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_instruction__Expr_12, (MR_Integer) 1)));

#line 400 "rbmm.region_instruction.m"
                    transform_hlds__rbmm__region_instruction__succeeded = (transform_hlds__rbmm__region_instruction__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "rbmm.region_instruction.m"
                  }
#line 400 "rbmm.region_instruction.m"
                else
#line 400 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__succeeded = MR_FALSE;
#line 405 "rbmm.region_instruction.m"
                if (transform_hlds__rbmm__region_instruction__succeeded)
#line 403 "rbmm.region_instruction.m"
                  {
#line 403 "rbmm.region_instruction.m"
                    MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_96_96 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 403 "rbmm.region_instruction.m"
                    {
#line 403 "rbmm.region_instruction.m"
                      *transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_96_96);
                    }
#line 404 "rbmm.region_instruction.m"
                    {
#line 404 "rbmm.region_instruction.m"
                      *transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_22 = mercury__set__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_96_96);
                    }
#line 403 "rbmm.region_instruction.m"
                  }
#line 405 "rbmm.region_instruction.m"
                else
#line 406 "rbmm.region_instruction.m"
                  {
#line 406 "rbmm.region_instruction.m"
                    {
#line 406 "rbmm.region_instruction.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_instruction", (MR_String) "predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", (MR_String) "non-atomic goal");
#line 406 "rbmm.region_instruction.m"
                      return;
                    }
#line 406 "rbmm.region_instruction.m"
                  }
#line 405 "rbmm.region_instruction.m"
              }
#line 398 "rbmm.region_instruction.m"
          }
#line 389 "rbmm.region_instruction.m"
      }
#line 360 "rbmm.region_instruction.m"
  }
#line 315 "rbmm.region_instruction.m"
}

#line 279 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_3(
#line 279 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 279 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 279 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 279 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 279 "rbmm.region_instruction.m"
{
#line 279 "rbmm.region_instruction.m"
  {
#line 279 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 279 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_RegionInstructionProc_17;

#line 279 "rbmm.region_instruction.m"
    {
#line 279 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), &transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_RegionInstructionProc_17);
    }
#line 279 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_RegionInstructionProc_17));
#line 279 "rbmm.region_instruction.m"
  }
#line 279 "rbmm.region_instruction.m"
}

#line 276 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_2(
#line 276 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 276 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 276 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 276 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 276 "rbmm.region_instruction.m"
{
#line 276 "rbmm.region_instruction.m"
  {
#line 276 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 276 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_RegionInstructionProc_18;

#line 276 "rbmm.region_instruction.m"
    {
#line 276 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), &transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_RegionInstructionProc_18);
    }
#line 276 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_RegionInstructionProc_18));
#line 276 "rbmm.region_instruction.m"
  }
#line 276 "rbmm.region_instruction.m"
}

#line 273 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_1(
#line 273 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 273 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 273 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 273 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3)
#line 273 "rbmm.region_instruction.m"
{
#line 273 "rbmm.region_instruction.m"
  {
#line 273 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 273 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_RegionInstructionProc_18;

#line 273 "rbmm.region_instruction.m"
    {
#line 273 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), &transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_RegionInstructionProc_18);
    }
#line 273 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_RegionInstructionProc_18));
#line 273 "rbmm.region_instruction.m"
  }
#line 273 "rbmm.region_instruction.m"
}

#line 228 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0(
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_2,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornR_3,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadR_4,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalR_5,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRBefore_6,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRAfter_7,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_9,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_10,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_11,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_12,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint_13,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_14,
#line 228 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_15,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_16,
#line 228 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_17,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_18,
#line 228 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_19,
#line 228 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_20,
#line 228 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_21)
#line 228 "rbmm.region_instruction.m"
{
#line 238 "rbmm.region_instruction.m"
  while (MR_TRUE)
#line 238 "rbmm.region_instruction.m"
    {
#line 238 "rbmm.region_instruction.m"
      /* tailcall optimized into a loop */
#line 238 "rbmm.region_instruction.m"
      {
#line 238 "rbmm.region_instruction.m"
        MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 238 "rbmm.region_instruction.m"
        if ((transform_hlds__rbmm__region_instruction__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "rbmm.region_instruction.m"
          {
#line 240 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_21 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_20;
#line 239 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_19 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_18;
#line 239 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_17 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_16;
#line 239 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_15 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_14;
#line 238 "rbmm.region_instruction.m"
          }
#line 238 "rbmm.region_instruction.m"
        else
#line 246 "rbmm.region_instruction.m"
          {
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_120_120;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_125_125;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_46;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__Goal_47;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__ProgPoint_Goals_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 1)));
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__LRBefore_65;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__LRAfter_66;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegions_67;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__Allowed_68;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__DeadVoidVarRegions0_69;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__DeadVoidVarRegions_70;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__CallerGraph_71;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__BecomeDead_73;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__BecomeLive_74;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__Expr_75;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_77;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_78;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_93_93;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_94_94;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_95_95;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_96_96;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_97_97;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_98_98;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_100_100;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_101_101;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_103_103;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_104_104;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_107_107;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_109_109;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_110_110;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_111_111;
#line 246 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_112_112;
#line 247 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv0_LRBefore_65;
#line 248 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv1_LRAfter_66;
#line 249 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv2_VoidVarRegions_67;
#line 261 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_72_72;
#line 266 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_76_76;
#line 273 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionProc_98_98;
#line 276 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RegionInstructionProc_101_101;
#line 279 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv8_STATE_VARIABLE_RegionInstructionProc_104_104;
#line 282 "rbmm.region_instruction.m"
            MR_Box transform_hlds__rbmm__region_instruction__conv9_STATE_VARIABLE_RegionInstructionProc_107_107;

#line 241 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__ProgPoint_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_92_92, (MR_Integer) 0)));
#line 241 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__Goal_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_92_92, (MR_Integer) 1)));
#line 3569 "transform_hlds.rbmm.region_instruction.c"
            transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 3571 "transform_hlds.rbmm.region_instruction.c"
            transform_hlds__rbmm__region_instruction__TypeInfo_120_120 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[0];
#line 247 "rbmm.region_instruction.m"
            {
#line 247 "rbmm.region_instruction.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, transform_hlds__rbmm__region_instruction__ProcLRBefore_6, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), &transform_hlds__rbmm__region_instruction__conv0_LRBefore_65);
            }
#line 247 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__LRBefore_65 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv0_LRBefore_65);
#line 248 "rbmm.region_instruction.m"
            {
#line 248 "rbmm.region_instruction.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, transform_hlds__rbmm__region_instruction__ProcLRAfter_7, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), &transform_hlds__rbmm__region_instruction__conv1_LRAfter_66);
            }
#line 248 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__LRAfter_66 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv1_LRAfter_66);
#line 249 "rbmm.region_instruction.m"
            {
#line 249 "rbmm.region_instruction.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), &transform_hlds__rbmm__region_instruction__conv2_VoidVarRegions_67);
            }
#line 249 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__VoidVarRegions_67 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv2_VoidVarRegions_67);
#line 3594 "transform_hlds.rbmm.region_instruction.c"
            transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 251 "rbmm.region_instruction.m"
            {
#line 251 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_93_93 = mercury__set__union_2_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__LocalR_5, transform_hlds__rbmm__region_instruction__BornR_3);
            }
#line 251 "rbmm.region_instruction.m"
            {
#line 251 "rbmm.region_instruction.m"
              mercury__set__union_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__V_93_93, transform_hlds__rbmm__region_instruction__DeadR_4, &transform_hlds__rbmm__region_instruction__Allowed_68);
            }
#line 258 "rbmm.region_instruction.m"
            {
#line 258 "rbmm.region_instruction.m"
              mercury__set__difference_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__VoidVarRegions_67, transform_hlds__rbmm__region_instruction__LRAfter_66, &transform_hlds__rbmm__region_instruction__DeadVoidVarRegions0_69);
            }
#line 259 "rbmm.region_instruction.m"
            {
#line 259 "rbmm.region_instruction.m"
              mercury__set__intersect_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__Allowed_68, transform_hlds__rbmm__region_instruction__DeadVoidVarRegions0_69, &transform_hlds__rbmm__region_instruction__DeadVoidVarRegions_70);
            }
#line 261 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__CallerGraph_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_2, (MR_Integer) 0)));
#line 261 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__RptaInfo_2, (MR_Integer) 1)));
#line 263 "rbmm.region_instruction.m"
            {
#line 263 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_94_94 = mercury__set__difference_2_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__LRBefore_65, transform_hlds__rbmm__region_instruction__LRAfter_66);
            }
#line 263 "rbmm.region_instruction.m"
            {
#line 263 "rbmm.region_instruction.m"
              mercury__set__intersect_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__Allowed_68, transform_hlds__rbmm__region_instruction__V_94_94, &transform_hlds__rbmm__region_instruction__BecomeDead_73);
            }
#line 264 "rbmm.region_instruction.m"
            {
#line 264 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_95_95 = mercury__set__difference_2_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__LRAfter_66, transform_hlds__rbmm__region_instruction__LRBefore_65);
            }
#line 264 "rbmm.region_instruction.m"
            {
#line 264 "rbmm.region_instruction.m"
              mercury__set__intersect_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__Allowed_68, transform_hlds__rbmm__region_instruction__V_95_95, &transform_hlds__rbmm__region_instruction__BecomeLive_74);
            }
#line 266 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__Expr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__Goal_47, (MR_Integer) 0)));
#line 266 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__Goal_47, (MR_Integer) 1)));
#line 267 "rbmm.region_instruction.m"
            {
#line 267 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeLive_74)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_14, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_96_96);
            }
#line 269 "rbmm.region_instruction.m"
            {
#line 269 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0(transform_hlds__rbmm__region_instruction__Expr_75, transform_hlds__rbmm__region_instruction__ProgPoint_46, transform_hlds__rbmm__region_instruction__BecomeLive_74, transform_hlds__rbmm__region_instruction__BecomeDead_73, transform_hlds__rbmm__region_instruction__RptaInfo_2, transform_hlds__rbmm__region_instruction__BornRTable_9, transform_hlds__rbmm__region_instruction__DeadRTable_10, transform_hlds__rbmm__region_instruction__ModuleInfo_11, transform_hlds__rbmm__region_instruction__ProcInfo_12, &transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_77, &transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_78);
            }
#line 273 "rbmm.region_instruction.m"
            {
#line 273 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 273 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[0]));
#line 273 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_1));
#line 273 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 273 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 3) = ((MR_Box) ((MR_Integer) 0));
#line 273 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46));
#line 273 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_97_97, 5) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CallerGraph_71));
#line 273 "rbmm.region_instruction.m"
            }
#line 3672 "transform_hlds.rbmm.region_instruction.c"
            transform_hlds__rbmm__region_instruction__TypeInfo_125_125 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[1];
#line 273 "rbmm.region_instruction.m"
            {
#line 273 "rbmm.region_instruction.m"
              mercury__set__fold_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__TypeInfo_125_125, transform_hlds__rbmm__region_instruction__V_97_97, transform_hlds__rbmm__region_instruction__CreatedBeforeProgPoint_77, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_20)), &transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionProc_98_98);
            }
#line 273 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_98_98 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionProc_98_98);
#line 276 "rbmm.region_instruction.m"
            {
#line 276 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 276 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[0]));
#line 276 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_2));
#line 276 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 276 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 3) = ((MR_Box) ((MR_Integer) 1));
#line 276 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46));
#line 276 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_100_100, 5) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CallerGraph_71));
#line 276 "rbmm.region_instruction.m"
            }
#line 276 "rbmm.region_instruction.m"
            {
#line 276 "rbmm.region_instruction.m"
              mercury__set__fold_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__TypeInfo_125_125, transform_hlds__rbmm__region_instruction__V_100_100, transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint_13, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_98_98)), &transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RegionInstructionProc_101_101);
            }
#line 276 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_101_101 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_RegionInstructionProc_101_101);
#line 279 "rbmm.region_instruction.m"
            {
#line 279 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 279 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[0]));
#line 279 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_3));
#line 279 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 279 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 3) = ((MR_Box) ((MR_Integer) 1));
#line 279 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46));
#line 279 "rbmm.region_instruction.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_103_103, 5) = ((MR_Box) (transform_hlds__rbmm__region_instruction__CallerGraph_71));
#line 279 "rbmm.region_instruction.m"
            }
#line 279 "rbmm.region_instruction.m"
            {
#line 279 "rbmm.region_instruction.m"
              mercury__set__fold_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__TypeInfo_125_125, transform_hlds__rbmm__region_instruction__V_103_103, transform_hlds__rbmm__region_instruction__RemovedAfterProgPoint_78, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_101_101)), &transform_hlds__rbmm__region_instruction__conv8_STATE_VARIABLE_RegionInstructionProc_104_104);
            }
#line 279 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_104_104 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv8_STATE_VARIABLE_RegionInstructionProc_104_104);
#line 282 "rbmm.region_instruction.m"
            {
#line 282 "rbmm.region_instruction.m"
              mercury__set__fold_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__TypeInfo_125_125, transform_hlds__rbmm__region_instruction__V_103_103, transform_hlds__rbmm__region_instruction__DeadVoidVarRegions_70, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_104_104)), &transform_hlds__rbmm__region_instruction__conv9_STATE_VARIABLE_RegionInstructionProc_107_107);
            }
#line 282 "rbmm.region_instruction.m"
            transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_107_107 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv9_STATE_VARIABLE_RegionInstructionProc_107_107);
#line 286 "rbmm.region_instruction.m"
            {
#line 286 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_109_109 = mercury__set__union_2_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__BecomeDead_73, transform_hlds__rbmm__region_instruction__DeadVoidVarRegions_70);
            }
#line 286 "rbmm.region_instruction.m"
            {
#line 286 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), ((MR_Box) (transform_hlds__rbmm__region_instruction__V_109_109)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_18, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_110_110);
            }
#line 288 "rbmm.region_instruction.m"
            {
#line 288 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeLive_74)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_96_96, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_111_111);
            }
#line 289 "rbmm.region_instruction.m"
            {
#line 289 "rbmm.region_instruction.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, ((MR_Box) (transform_hlds__rbmm__region_instruction__ProgPoint_46)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint_13)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_16, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_112_112);
            }
#line 310 "rbmm.region_instruction.m"
            if ((transform_hlds__rbmm__region_instruction__ProgPoint_Goals_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "rbmm.region_instruction.m"
              {
#line 312 "rbmm.region_instruction.m"
                *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_15 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_111_111;
#line 312 "rbmm.region_instruction.m"
                *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_17 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_112_112;
#line 312 "rbmm.region_instruction.m"
                *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_19 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_110_110;
#line 312 "rbmm.region_instruction.m"
                *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_21 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_107_107;
#line 312 "rbmm.region_instruction.m"
              }
#line 310 "rbmm.region_instruction.m"
            else
#line 292 "rbmm.region_instruction.m"
              {
#line 292 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__NextProgPoint_79;
#line 292 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__LRBeforeNext_82;
#line 292 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadBeforeNextProgPoint_83;
#line 292 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__ProgPoint_Goals_48, (MR_Integer) 0)));
#line 292 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__V_114_114;
#line 292 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__ProgPoint_Goals_48, (MR_Integer) 1)));
#line 292 "rbmm.region_instruction.m"
                MR_Word transform_hlds__rbmm__region_instruction__V_80_80;
#line 298 "rbmm.region_instruction.m"
                MR_Box transform_hlds__rbmm__region_instruction__conv10_LRBeforeNext_82;

#line 292 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__NextProgPoint_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_113_113, (MR_Integer) 0)));
#line 292 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_113_113, (MR_Integer) 1)));
#line 298 "rbmm.region_instruction.m"
                {
#line 298 "rbmm.region_instruction.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_119_119, transform_hlds__rbmm__region_instruction__TypeInfo_120_120, transform_hlds__rbmm__region_instruction__ProcLRBefore_6, ((MR_Box) (transform_hlds__rbmm__region_instruction__NextProgPoint_79)), &transform_hlds__rbmm__region_instruction__conv10_LRBeforeNext_82);
                }
#line 298 "rbmm.region_instruction.m"
                transform_hlds__rbmm__region_instruction__LRBeforeNext_82 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv10_LRBeforeNext_82);
#line 300 "rbmm.region_instruction.m"
                {
#line 300 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__V_114_114 = mercury__set__difference_2_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__LRAfter_66, transform_hlds__rbmm__region_instruction__LRBeforeNext_82);
                }
#line 300 "rbmm.region_instruction.m"
                {
#line 300 "rbmm.region_instruction.m"
                  mercury__set__intersect_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_121_121, transform_hlds__rbmm__region_instruction__Allowed_68, transform_hlds__rbmm__region_instruction__V_114_114, &transform_hlds__rbmm__region_instruction__BecomeDeadBeforeNextProgPoint_83);
                }
#line 303 "rbmm.region_instruction.m"
                /* direct tailcall eliminated */
#line 303 "rbmm.region_instruction.m"
                {
#line 303 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__region_instruction__ProgPoint_Goals_48;
#line 303 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint__tmp_copy_13 = transform_hlds__rbmm__region_instruction__BecomeDeadBeforeNextProgPoint_83;
#line 303 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0__tmp_copy_14 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_111_111;
#line 303 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0__tmp_copy_16 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_112_112;
#line 303 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0__tmp_copy_18 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_110_110;
#line 303 "rbmm.region_instruction.m"
                  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0__tmp_copy_20 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_107_107;

#line 303 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_20 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0__tmp_copy_20;
#line 303 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_18 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0__tmp_copy_18;
#line 303 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_16 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0__tmp_copy_16;
#line 303 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_14 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0__tmp_copy_14;
#line 303 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint_13 = transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProgPoint__tmp_copy_13;
#line 303 "rbmm.region_instruction.m"
                  transform_hlds__rbmm__region_instruction__HeadVar__1_1 = transform_hlds__rbmm__region_instruction__HeadVar__1__tmp_copy_1;
#line 303 "rbmm.region_instruction.m"
                }
#line 303 "rbmm.region_instruction.m"
                continue;
#line 292 "rbmm.region_instruction.m"
              }
#line 246 "rbmm.region_instruction.m"
          }
#line 238 "rbmm.region_instruction.m"
      }
#line 238 "rbmm.region_instruction.m"
      break;
#line 238 "rbmm.region_instruction.m"
    }
#line 228 "rbmm.region_instruction.m"
}

#line 199 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_p_0(
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1_1,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_2,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornR_3,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadR_4,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalR_5,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRBefore_6,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcLRAfter_7,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_9,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_10,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_11,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_12,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_13,
#line 199 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_14,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_15,
#line 199 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_16,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_17,
#line 199 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_18,
#line 199 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_19,
#line 199 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_20)
#line 199 "rbmm.region_instruction.m"
{
#line 209 "rbmm.region_instruction.m"
  while (MR_TRUE)
#line 209 "rbmm.region_instruction.m"
    {
#line 209 "rbmm.region_instruction.m"
      /* tailcall optimized into a loop */
#line 209 "rbmm.region_instruction.m"
      {
#line 209 "rbmm.region_instruction.m"
        MR_bool transform_hlds__rbmm__region_instruction__succeeded;

#line 209 "rbmm.region_instruction.m"
        if ((transform_hlds__rbmm__region_instruction__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "rbmm.region_instruction.m"
          {
#line 211 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_20 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_19;
#line 210 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_18 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_17;
#line 210 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_16 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_15;
#line 210 "rbmm.region_instruction.m"
            *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_14 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_13;
#line 209 "rbmm.region_instruction.m"
          }
#line 209 "rbmm.region_instruction.m"
        else
#line 216 "rbmm.region_instruction.m"
          {
#line 216 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__ExecPath_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__ExecPaths_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__HeadVar__1_1, (MR_Integer) 1)));
#line 216 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__V_69_69;
#line 216 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_70_70;
#line 216 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_71_71;
#line 216 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_72_72;
#line 216 "rbmm.region_instruction.m"
            MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_73_73;

#line 219 "rbmm.region_instruction.m"
            {
#line 219 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__V_69_69 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
            }
#line 217 "rbmm.region_instruction.m"
            {
#line 217 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0(transform_hlds__rbmm__region_instruction__ExecPath_44, transform_hlds__rbmm__region_instruction__RptaInfo_2, transform_hlds__rbmm__region_instruction__BornR_3, transform_hlds__rbmm__region_instruction__DeadR_4, transform_hlds__rbmm__region_instruction__LocalR_5, transform_hlds__rbmm__region_instruction__ProcLRBefore_6, transform_hlds__rbmm__region_instruction__ProcLRAfter_7, transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_8, transform_hlds__rbmm__region_instruction__BornRTable_9, transform_hlds__rbmm__region_instruction__DeadRTable_10, transform_hlds__rbmm__region_instruction__ModuleInfo_11, transform_hlds__rbmm__region_instruction__ProcInfo_12, transform_hlds__rbmm__region_instruction__V_69_69, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_13, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_70_70, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_15, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_71_71, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_17, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_72_72, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_19, &transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_73_73);
            }
#line 222 "rbmm.region_instruction.m"
            /* direct tailcall eliminated */
#line 222 "rbmm.region_instruction.m"
            {
#line 222 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__region_instruction__ExecPaths_45;
#line 222 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0__tmp_copy_13 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_70_70;
#line 222 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0__tmp_copy_15 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_71_71;
#line 222 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0__tmp_copy_17 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_72_72;
#line 222 "rbmm.region_instruction.m"
              MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0__tmp_copy_19 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_73_73;

#line 222 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0_19 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionProc_0__tmp_copy_19;
#line 222 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0_17 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterProc_0__tmp_copy_17;
#line 222 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0_15 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeProc_0__tmp_copy_15;
#line 222 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0_13 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveProc_0__tmp_copy_13;
#line 222 "rbmm.region_instruction.m"
              transform_hlds__rbmm__region_instruction__HeadVar__1_1 = transform_hlds__rbmm__region_instruction__HeadVar__1__tmp_copy_1;
#line 222 "rbmm.region_instruction.m"
            }
#line 222 "rbmm.region_instruction.m"
            continue;
#line 216 "rbmm.region_instruction.m"
          }
#line 209 "rbmm.region_instruction.m"
      }
#line 209 "rbmm.region_instruction.m"
      break;
#line 209 "rbmm.region_instruction.m"
    }
#line 199 "rbmm.region_instruction.m"
}

#line 155 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_p_0(
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_20,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__PredId_21,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfoTable_22,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ExecPathTable_23,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRBeforeTable_24,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRAfterTable_25,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegionTable_26,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_27,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_28,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalRTable_29,
#line 155 "rbmm.region_instruction.m"
  MR_Integer transform_hlds__rbmm__region_instruction__ProcId_30,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_49,
#line 155 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_50,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_51,
#line 155 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_52,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_53,
#line 155 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_54,
#line 155 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_55,
#line 155 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_56)
#line 155 "rbmm.region_instruction.m"
{
#line 169 "rbmm.region_instruction.m"
  {
#line 169 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 169 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__PPId_35;
#line 171 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_57_57;

#line 170 "rbmm.region_instruction.m"
    {
#line 170 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__PPId_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__PPId_35, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__PredId_21));
#line 170 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__PPId_35, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ProcId_30));
#line 170 "rbmm.region_instruction.m"
    }
#line 171 "rbmm.region_instruction.m"
    {
#line 171 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_57_57, 0) = ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35));
#line 171 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_instruction__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "rbmm.region_instruction.m"
    }
#line 171 "rbmm.region_instruction.m"
    {
#line 171 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__region_instruction__V_57_57, transform_hlds__rbmm__region_instruction__ModuleInfo_20);
    }
#line 173 "rbmm.region_instruction.m"
    if (transform_hlds__rbmm__region_instruction__succeeded)
#line 172 "rbmm.region_instruction.m"
      {
#line 172 "rbmm.region_instruction.m"
        *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_56 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_55;
#line 172 "rbmm.region_instruction.m"
        *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_54 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_53;
#line 172 "rbmm.region_instruction.m"
        *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_52 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_51;
#line 172 "rbmm.region_instruction.m"
        *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_50 = transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_49;
#line 172 "rbmm.region_instruction.m"
      }
#line 173 "rbmm.region_instruction.m"
    else
#line 174 "rbmm.region_instruction.m"
      {
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_69_69;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_70_70;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__ProcInfo_36;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__RptaInfo_37;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__BornR_38;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__DeadR_39;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__LocalR_40;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__ProcLRBefore_41;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__ProcLRAfter_42;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_43;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__ExecPaths_44;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__BecomeLiveProc_45;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProc_46;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__BecomeDeadAfterProc_47;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__RegionInstructionProc_48;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_59_59;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_60_60;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_61_61;
#line 174 "rbmm.region_instruction.m"
        MR_Word transform_hlds__rbmm__region_instruction__V_62_62;
#line 175 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv0_RptaInfo_37;
#line 176 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv1_BornR_38;
#line 177 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv2_DeadR_39;
#line 178 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv3_LocalR_40;
#line 179 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv4_ProcLRBefore_41;
#line 180 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv5_ProcLRAfter_42;
#line 181 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv6_ProcVoidVarRegion_43;
#line 182 "rbmm.region_instruction.m"
        MR_Box transform_hlds__rbmm__region_instruction__conv7_ExecPaths_44;

#line 174 "rbmm.region_instruction.m"
        {
#line 174 "rbmm.region_instruction.m"
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__region_instruction__ModuleInfo_20, transform_hlds__rbmm__region_instruction__PPId_35, &transform_hlds__rbmm__region_instruction__ProcInfo_36);
        }
#line 4158 "transform_hlds.rbmm.region_instruction.c"
        transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 175 "rbmm.region_instruction.m"
        {
#line 175 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_instruction__RptaInfoTable_22, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv0_RptaInfo_37);
        }
#line 175 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__RptaInfo_37 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv0_RptaInfo_37);
#line 4167 "transform_hlds.rbmm.region_instruction.c"
        transform_hlds__rbmm__region_instruction__TypeInfo_69_69 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[0];
#line 176 "rbmm.region_instruction.m"
        {
#line 176 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_69_69, transform_hlds__rbmm__region_instruction__BornRTable_27, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv1_BornR_38);
        }
#line 176 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__BornR_38 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv1_BornR_38);
#line 177 "rbmm.region_instruction.m"
        {
#line 177 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_69_69, transform_hlds__rbmm__region_instruction__DeadRTable_28, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv2_DeadR_39);
        }
#line 177 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__DeadR_39 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv2_DeadR_39);
#line 178 "rbmm.region_instruction.m"
        {
#line 178 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_69_69, transform_hlds__rbmm__region_instruction__LocalRTable_29, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv3_LocalR_40);
        }
#line 178 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__LocalR_40 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv3_LocalR_40);
#line 4190 "transform_hlds.rbmm.region_instruction.c"
        transform_hlds__rbmm__region_instruction__TypeInfo_70_70 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[0];
#line 179 "rbmm.region_instruction.m"
        {
#line 179 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, transform_hlds__rbmm__region_instruction__LRBeforeTable_24, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv4_ProcLRBefore_41);
        }
#line 179 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__ProcLRBefore_41 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv4_ProcLRBefore_41);
#line 180 "rbmm.region_instruction.m"
        {
#line 180 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, transform_hlds__rbmm__region_instruction__LRAfterTable_25, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv5_ProcLRAfter_42);
        }
#line 180 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__ProcLRAfter_42 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv5_ProcLRAfter_42);
#line 181 "rbmm.region_instruction.m"
        {
#line 181 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, transform_hlds__rbmm__region_instruction__VoidVarRegionTable_26, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv6_ProcVoidVarRegion_43);
        }
#line 181 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_43 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv6_ProcVoidVarRegion_43);
#line 182 "rbmm.region_instruction.m"
        {
#line 182 "rbmm.region_instruction.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_1[2], transform_hlds__rbmm__region_instruction__ExecPathTable_23, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), &transform_hlds__rbmm__region_instruction__conv7_ExecPaths_44);
        }
#line 182 "rbmm.region_instruction.m"
        transform_hlds__rbmm__region_instruction__ExecPaths_44 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv7_ExecPaths_44);
#line 4220 "transform_hlds.rbmm.region_instruction.c"
        transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 186 "rbmm.region_instruction.m"
        {
#line 186 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_59_59 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72, transform_hlds__rbmm__region_instruction__TypeInfo_69_69);
        }
#line 187 "rbmm.region_instruction.m"
        {
#line 187 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_60_60 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72, transform_hlds__rbmm__region_instruction__TypeInfo_69_69);
        }
#line 188 "rbmm.region_instruction.m"
        {
#line 188 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_61_61 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72, transform_hlds__rbmm__region_instruction__TypeInfo_69_69);
        }
#line 189 "rbmm.region_instruction.m"
        {
#line 189 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__V_62_62 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_72_72, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0);
        }
#line 183 "rbmm.region_instruction.m"
        {
#line 183 "rbmm.region_instruction.m"
          transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_p_0(transform_hlds__rbmm__region_instruction__ExecPaths_44, transform_hlds__rbmm__region_instruction__RptaInfo_37, transform_hlds__rbmm__region_instruction__BornR_38, transform_hlds__rbmm__region_instruction__DeadR_39, transform_hlds__rbmm__region_instruction__LocalR_40, transform_hlds__rbmm__region_instruction__ProcLRBefore_41, transform_hlds__rbmm__region_instruction__ProcLRAfter_42, transform_hlds__rbmm__region_instruction__ProcVoidVarRegion_43, transform_hlds__rbmm__region_instruction__BornRTable_27, transform_hlds__rbmm__region_instruction__DeadRTable_28, transform_hlds__rbmm__region_instruction__ModuleInfo_20, transform_hlds__rbmm__region_instruction__ProcInfo_36, transform_hlds__rbmm__region_instruction__V_59_59, &transform_hlds__rbmm__region_instruction__BecomeLiveProc_45, transform_hlds__rbmm__region_instruction__V_60_60, &transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProc_46, transform_hlds__rbmm__region_instruction__V_61_61, &transform_hlds__rbmm__region_instruction__BecomeDeadAfterProc_47, transform_hlds__rbmm__region_instruction__V_62_62, &transform_hlds__rbmm__region_instruction__RegionInstructionProc_48);
        }
#line 190 "rbmm.region_instruction.m"
        {
#line 190 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), ((MR_Box) (transform_hlds__rbmm__region_instruction__RegionInstructionProc_48)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_55, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_56);
        }
#line 191 "rbmm.region_instruction.m"
        {
#line 191 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeLiveProc_45)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_49, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_50);
        }
#line 192 "rbmm.region_instruction.m"
        {
#line 192 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeDeadBeforeProc_46)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_51, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_52);
        }
#line 193 "rbmm.region_instruction.m"
        {
#line 193 "rbmm.region_instruction.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_67_67, transform_hlds__rbmm__region_instruction__TypeInfo_70_70, ((MR_Box) (transform_hlds__rbmm__region_instruction__PPId_35)), ((MR_Box) (transform_hlds__rbmm__region_instruction__BecomeDeadAfterProc_47)), transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_53, transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_54);
        }
#line 174 "rbmm.region_instruction.m"
      }
#line 169 "rbmm.region_instruction.m"
  }
#line 155 "rbmm.region_instruction.m"
}

#line 149 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0_1(
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 149 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_4,
#line 149 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_5,
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_6,
#line 149 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_7,
#line 149 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_8,
#line 149 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_9)
#line 149 "rbmm.region_instruction.m"
{
#line 149 "rbmm.region_instruction.m"
  {
#line 149 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 149 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_50;
#line 149 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_52;
#line 149 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_54;
#line 149 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_56;

#line 149 "rbmm.region_instruction.m"
    {
#line 149 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 11))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 12))), ((MR_Integer) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), &transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_50, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_4), &transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_52, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_6), &transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_54, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_8), &transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_56);
    }
#line 149 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_50));
#line 149 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_52));
#line 149 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_54));
#line 149 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_56));
#line 149 "rbmm.region_instruction.m"
  }
#line 149 "rbmm.region_instruction.m"
}

#line 132 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0(
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ModuleInfo_19,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__RptaInfoTable_20,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__ExecPathTable_21,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRBeforeTable_22,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LRAfterTable_23,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__VoidVarRegionTable_24,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__BornRTable_25,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__DeadRTable_26,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__LocalRTable_27,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__PredId_28,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_35,
#line 132 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_36,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_37,
#line 132 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_38,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_39,
#line 132 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_40,
#line 132 "rbmm.region_instruction.m"
  MR_Word transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_41,
#line 132 "rbmm.region_instruction.m"
  MR_Word * transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_42)
#line 132 "rbmm.region_instruction.m"
{
#line 146 "rbmm.region_instruction.m"
  {
#line 146 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 146 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_58_58;
#line 146 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__PredInfo_33;
#line 146 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__ProcIds_34;
#line 146 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_43_43;
#line 149 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_BecomeLiveTable_36;
#line 149 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_BecomeDeadBeforeTable_38;
#line 149 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_BecomeDeadAfterTable_40;
#line 149 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionTable_42;

#line 147 "rbmm.region_instruction.m"
    {
#line 147 "rbmm.region_instruction.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_instruction__ModuleInfo_19, transform_hlds__rbmm__region_instruction__PredId_28, &transform_hlds__rbmm__region_instruction__PredInfo_33);
    }
#line 148 "rbmm.region_instruction.m"
    {
#line 148 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__ProcIds_34 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_instruction__PredInfo_33);
    }
#line 149 "rbmm.region_instruction.m"
    {
#line 149 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_4[0]));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0_1));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 3) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ModuleInfo_19));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__PredId_28));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 5) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RptaInfoTable_20));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 6) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ExecPathTable_21));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 7) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LRBeforeTable_22));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 8) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LRAfterTable_23));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 9) = ((MR_Box) (transform_hlds__rbmm__region_instruction__VoidVarRegionTable_24));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 10) = ((MR_Box) (transform_hlds__rbmm__region_instruction__BornRTable_25));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 11) = ((MR_Box) (transform_hlds__rbmm__region_instruction__DeadRTable_26));
#line 149 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_43_43, 12) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LocalRTable_27));
#line 149 "rbmm.region_instruction.m"
    }
#line 4434 "transform_hlds.rbmm.region_instruction.c"
    transform_hlds__rbmm__region_instruction__TypeInfo_58_58 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[2];
#line 149 "rbmm.region_instruction.m"
    {
#line 149 "rbmm.region_instruction.m"
      mercury__list__foldl4_10_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__rbmm__region_instruction__TypeInfo_58_58, transform_hlds__rbmm__region_instruction__TypeInfo_58_58, transform_hlds__rbmm__region_instruction__TypeInfo_58_58, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[3], transform_hlds__rbmm__region_instruction__V_43_43, transform_hlds__rbmm__region_instruction__ProcIds_34, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_0_35)), &transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_BecomeLiveTable_36, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_0_37)), &transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_BecomeDeadBeforeTable_38, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_0_39)), &transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_BecomeDeadAfterTable_40, ((MR_Box) (transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_0_41)), &transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionTable_42);
    }
#line 149 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeLiveTable_36 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv7_STATE_VARIABLE_BecomeLiveTable_36);
#line 149 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadBeforeTable_38 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv6_STATE_VARIABLE_BecomeDeadBeforeTable_38);
#line 149 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_BecomeDeadAfterTable_40 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv5_STATE_VARIABLE_BecomeDeadAfterTable_40);
#line 149 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__STATE_VARIABLE_RegionInstructionTable_42 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv4_STATE_VARIABLE_RegionInstructionTable_42);
#line 146 "rbmm.region_instruction.m"
  }
#line 132 "rbmm.region_instruction.m"
}

#line 124 "rbmm.region_instruction.m"
static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0_1(
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__closure_arg,
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_1,
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_2,
#line 124 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_3,
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_4,
#line 124 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_5,
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_6,
#line 124 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_7,
#line 124 "rbmm.region_instruction.m"
  MR_Box transform_hlds__rbmm__region_instruction__wrapper_arg_8,
#line 124 "rbmm.region_instruction.m"
  MR_Box * transform_hlds__rbmm__region_instruction__wrapper_arg_9)
#line 124 "rbmm.region_instruction.m"
{
#line 124 "rbmm.region_instruction.m"
  {
#line 124 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__closure = transform_hlds__rbmm__region_instruction__closure_arg;
#line 124 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_36;
#line 124 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_38;
#line 124 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_40;
#line 124 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_42;

#line 124 "rbmm.region_instruction.m"
    {
#line 124 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__closure, (MR_Integer) 11))), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_2), &transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_36, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_4), &transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_38, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_6), &transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_40, ((MR_Word) transform_hlds__rbmm__region_instruction__wrapper_arg_8), &transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_42);
    }
#line 124 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv3_STATE_VARIABLE_BecomeLiveTable_36));
#line 124 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv2_STATE_VARIABLE_BecomeDeadBeforeTable_38));
#line 124 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv1_STATE_VARIABLE_BecomeDeadAfterTable_40));
#line 124 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_instruction__conv0_STATE_VARIABLE_RegionInstructionTable_42));
#line 124 "rbmm.region_instruction.m"
  }
#line 124 "rbmm.region_instruction.m"
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
#line 122 "rbmm.region_instruction.m"
  {
#line 122 "rbmm.region_instruction.m"
    MR_bool transform_hlds__rbmm__region_instruction__succeeded;
#line 122 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42;
#line 122 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_43_43;
#line 122 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__TypeInfo_46_46;
#line 122 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__PredIds_27;
#line 122 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_28_28;
#line 122 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_29_29;
#line 122 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_30_30;
#line 122 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_31_31;
#line 122 "rbmm.region_instruction.m"
    MR_Word transform_hlds__rbmm__region_instruction__V_32_32;
#line 124 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv7_BecomeLiveTable_23;
#line 124 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv6_BecomeDeadBeforeTable_24;
#line 124 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv5_BecomeDeadAfterTable_25;
#line 124 "rbmm.region_instruction.m"
    MR_Box transform_hlds__rbmm__region_instruction__conv4_RegionInstructionTable_26;

#line 123 "rbmm.region_instruction.m"
    {
#line 123 "rbmm.region_instruction.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__region_instruction__ModuleInfo_14, &transform_hlds__rbmm__region_instruction__PredIds_27);
    }
#line 124 "rbmm.region_instruction.m"
    {
#line 124 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_3[0]));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0_1));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 3) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ModuleInfo_14));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 4) = ((MR_Box) (transform_hlds__rbmm__region_instruction__RptaInfoTable_15));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 5) = ((MR_Box) (transform_hlds__rbmm__region_instruction__ExecPathTable_16));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 6) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LRBeforeTable_17));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 7) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LRAfterTable_18));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 8) = ((MR_Box) (transform_hlds__rbmm__region_instruction__VoidVarRegionTable_19));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 9) = ((MR_Box) (transform_hlds__rbmm__region_instruction__BornRTable_20));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 10) = ((MR_Box) (transform_hlds__rbmm__region_instruction__DeadRTable_21));
#line 124 "rbmm.region_instruction.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_instruction__V_28_28, 11) = ((MR_Box) (transform_hlds__rbmm__region_instruction__LocalRTable_22));
#line 124 "rbmm.region_instruction.m"
    }
#line 4607 "transform_hlds.rbmm.region_instruction.c"
    transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4609 "transform_hlds.rbmm.region_instruction.c"
    transform_hlds__rbmm__region_instruction__TypeInfo_43_43 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[0];
#line 127 "rbmm.region_instruction.m"
    {
#line 127 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_29_29 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42, transform_hlds__rbmm__region_instruction__TypeInfo_43_43);
    }
#line 128 "rbmm.region_instruction.m"
    {
#line 128 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_30_30 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42, transform_hlds__rbmm__region_instruction__TypeInfo_43_43);
    }
#line 129 "rbmm.region_instruction.m"
    {
#line 129 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_31_31 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42, transform_hlds__rbmm__region_instruction__TypeInfo_43_43);
    }
#line 130 "rbmm.region_instruction.m"
    {
#line 130 "rbmm.region_instruction.m"
      transform_hlds__rbmm__region_instruction__V_32_32 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_instruction__TypeCtorInfo_42_42, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[1]);
    }
#line 4631 "transform_hlds.rbmm.region_instruction.c"
    transform_hlds__rbmm__region_instruction__TypeInfo_46_46 = (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[2];
#line 124 "rbmm.region_instruction.m"
    {
#line 124 "rbmm.region_instruction.m"
      mercury__list__foldl4_10_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__rbmm__region_instruction__TypeInfo_46_46, transform_hlds__rbmm__region_instruction__TypeInfo_46_46, transform_hlds__rbmm__region_instruction__TypeInfo_46_46, (MR_Word) &transform_hlds__rbmm__region_instruction_scalar_common_2[3], transform_hlds__rbmm__region_instruction__V_28_28, transform_hlds__rbmm__region_instruction__PredIds_27, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_29_29)), &transform_hlds__rbmm__region_instruction__conv7_BecomeLiveTable_23, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_30_30)), &transform_hlds__rbmm__region_instruction__conv6_BecomeDeadBeforeTable_24, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_31_31)), &transform_hlds__rbmm__region_instruction__conv5_BecomeDeadAfterTable_25, ((MR_Box) (transform_hlds__rbmm__region_instruction__V_32_32)), &transform_hlds__rbmm__region_instruction__conv4_RegionInstructionTable_26);
    }
#line 124 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__BecomeLiveTable_23 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv7_BecomeLiveTable_23);
#line 124 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__BecomeDeadBeforeTable_24 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv6_BecomeDeadBeforeTable_24);
#line 124 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__BecomeDeadAfterTable_25 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv5_BecomeDeadAfterTable_25);
#line 124 "rbmm.region_instruction.m"
    *transform_hlds__rbmm__region_instruction__RegionInstructionTable_26 = ((MR_Word) transform_hlds__rbmm__region_instruction__conv4_RegionInstructionTable_26);
#line 122 "rbmm.region_instruction.m"
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
