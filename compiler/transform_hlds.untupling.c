/*
** Automatically generated from `untupling.m'
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


/* :- module transform_hlds.untupling. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__untupling__init
ENDINIT
*/

#include "transform_hlds.untupling.mih"


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
#include "counter.mih"
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
#include "hlds.make_goal.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "transform_hlds.untupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0;

#line 149 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 152 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2];

#line 155 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0;

#line 158 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1;

#line 161 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1];

#line 164 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1];

#line 167 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0[2];

#line 170 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0[2];

#line 173 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0[2];

#line 176 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0;

#line 179 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2];

#line 182 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0;

#line 185 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1];

#line 188 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1];

#line 191 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1];

#line 194 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1];

#line 197 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 203 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 206 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
#line 209 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 211 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 214 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
#line 217 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 219 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 221 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 224 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
#line 227 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 229 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 232 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
#line 235 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 237 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 239 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 242 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
#line 245 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 247 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 250 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
#line 253 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 255 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 257 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 260 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
#line 263 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 265 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 268 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
#line 271 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 273 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 275 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 767 "untupling.m"
static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__767__1_1_f_0(
#line 767 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_28);

#line 187 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(
#line 187 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 187 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 216 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
#line 216 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 216 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 137 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
#line 137 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 137 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 137 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 137 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
#line 137 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 137 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 135 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
#line 135 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 135 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 705 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
#line 705 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 705 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 705 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 705 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
#line 705 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 705 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 767 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
#line 767 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 767 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1);

#line 720 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
#line 720 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode_6,
#line 720 "untupling.m"
  MR_Word transform_hlds__untupling__ArgType_7,
#line 720 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_8,
#line 720 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_9,
#line 720 "untupling.m"
  MR_Word * transform_hlds__untupling__Expansion_10);

#line 656 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 656 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 656 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 656 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__5_5,
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__6_6,
#line 656 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__7_7,
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__8_8,
#line 656 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__9_9,
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_10,
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_11);

#line 647 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
#line 647 "untupling.m"
  MR_Word transform_hlds__untupling__Args0_11,
#line 647 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_12,
#line 647 "untupling.m"
  MR_Word * transform_hlds__untupling__Args_13,
#line 647 "untupling.m"
  MR_Word * transform_hlds__untupling__EnterUnifs_14,
#line 647 "untupling.m"
  MR_Word * transform_hlds__untupling__ExitUnifs_15,
#line 647 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19,
#line 647 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_20,
#line 647 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21,
#line 647 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_22,
#line 647 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_18);

#line 631 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
#line 631 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 631 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 631 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 631 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 631 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 631 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 631 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 631 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 619 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
#line 619 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 619 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 619 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 619 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 619 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 619 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 619 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 619 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 602 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
#line 602 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 602 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 602 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 602 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 602 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 602 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 602 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 602 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 500 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
#line 500 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_9,
#line 500 "untupling.m"
  MR_Word * transform_hlds__untupling__Goal_10,
#line 500 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74,
#line 500 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_75,
#line 500 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76,
#line 500 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_77,
#line 500 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_13,
#line 500 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_14);

#line 472 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
#line 472 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_6,
#line 472 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_7,
#line 472 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_8,
#line 472 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18,
#line 472 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19);

#line 470 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
#line 470 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 470 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 470 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 470 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3);

#line 464 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
#line 464 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_5,
#line 464 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_6,
#line 464 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10,
#line 464 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11);

#line 404 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
#line 404 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_13,
#line 404 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_14,
#line 404 "untupling.m"
  MR_Word transform_hlds__untupling__PredInfo_15,
#line 404 "untupling.m"
  MR_Word transform_hlds__untupling__ProcInfo_16,
#line 404 "untupling.m"
  MR_Integer transform_hlds__untupling__Counter_17,
#line 404 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredId_18,
#line 404 "untupling.m"
  MR_Integer * transform_hlds__untupling__AuxProcId_19,
#line 404 "untupling.m"
  MR_Word * transform_hlds__untupling__CallAux_20,
#line 404 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredInfo_21,
#line 404 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxProcInfo_22,
#line 404 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51,
#line 404 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52);

#line 376 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
#line 376 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 376 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 376 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 376 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4);

#line 352 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
#line 352 "untupling.m"
  MR_String transform_hlds__untupling__ParentName_1,
#line 352 "untupling.m"
  MR_Integer transform_hlds__untupling__Num_2,
#line 352 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 352 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 352 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5,
#line 352 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_6,
#line 352 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7,
#line 352 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_8);

#line 318 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 318 "untupling.m"
  MR_Word * transform_hlds__untupling__MaybeHeadVarsAndArgModes_15,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_30,
#line 318 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_31,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32,
#line 318 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_33,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34,
#line 318 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_35,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_19,
#line 318 "untupling.m"
  MR_Word * transform_hlds__untupling__ContainerTypes_20,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21);

#line 296 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 296 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 296 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_28,
#line 296 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_29,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30,
#line 296 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_31,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32,
#line 296 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_33,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_20,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21);

#line 278 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 278 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 278 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__5_5,
#line 278 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__7_7,
#line 278 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__8_8,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__9_9,
#line 278 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__10_10,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_11,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_12);

#line 261 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVars0_13,
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_14,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_17,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_29,
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_31,
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_22,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__UntupleMap_23);

#line 218 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
#line 218 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_9,
#line 218 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_10,
#line 218 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35,
#line 218 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36,
#line 218 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37,
#line 218 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_38,
#line 218 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_39,
#line 218 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_40);

#line 767 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
#line 767 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 767 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1);

#line 200 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
#line 200 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 200 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_5);

#line 194 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
#line 194 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 194 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 194 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 194 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 194 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 194 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 194 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 194 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7);

#line 170 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
#line 170 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_8,
#line 170 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20,
#line 170 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21,
#line 170 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22,
#line 170 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_23,
#line 170 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_24,
#line 170 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_25);

#line 462 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
#line 462 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 462 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 462 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 462 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3);

#line 167 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
#line 167 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 167 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 167 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 167 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 167 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 167 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 167 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 167 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__untupling_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_3[1][10];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_4[1][7];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_5[1][11];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_6[1][5];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_7[1][1];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_8[1][8];




static /* final */ const MR_Box transform_hlds__untupling_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__untupling__untuple_arguments_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__untupling__expand_argument_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1007 "transform_hlds.untupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0
  }
};

#line 1016 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1024 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1030 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0 = {
  (MR_String) "expansion",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 1045 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1 = {
  (MR_String) "no_expansion",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1060 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

#line 1065 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0
};

#line 1070 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1
  }
};

#line 1084 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0[2] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0,
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

#line 1090 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1096 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_expansion_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__untupling____Unify____expansion_result_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____expansion_result_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "expansion_result",
  {     transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0 },
  {     transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0
};

#line 1113 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0
  }
};

#line 1122 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transform_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__untupling____Unify____transform_map_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____transform_map_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "transform_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1139 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1145 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0 = {
  (MR_String) "transformed_proc",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0,
  NULL,
  NULL,
  NULL
};

#line 1160 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

#line 1165 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0
  }
};

#line 1174 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

#line 1179 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1] = {
  (MR_Integer) 0
};

#line 1184 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__untupling____Unify____transformed_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____transformed_proc_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "transformed_proc",
  {     transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0 },
  {     transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0
};

#line 1201 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1209 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1217 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1226 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_untuple_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__untupling____Unify____untuple_map_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____untuple_map_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "untuple_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1243 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
#line 1246 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1248 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1250 "transform_hlds.untupling.c"
{
#line 1252 "transform_hlds.untupling.c"
  {
#line 1254 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1257 "transform_hlds.untupling.c"
    {
#line 1259 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____expansion_result_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1262 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1264 "transform_hlds.untupling.c"
  }
#line 1266 "transform_hlds.untupling.c"
}

#line 1269 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
#line 1272 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1274 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1276 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1278 "transform_hlds.untupling.c"
{
#line 1280 "transform_hlds.untupling.c"
  {
#line 1282 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1285 "transform_hlds.untupling.c"
    {
#line 1287 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____expansion_result_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1290 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1292 "transform_hlds.untupling.c"
  }
#line 1294 "transform_hlds.untupling.c"
}

#line 1297 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
#line 1300 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1302 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1304 "transform_hlds.untupling.c"
{
#line 1306 "transform_hlds.untupling.c"
  {
#line 1308 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1311 "transform_hlds.untupling.c"
    {
#line 1313 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____transform_map_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1316 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1318 "transform_hlds.untupling.c"
  }
#line 1320 "transform_hlds.untupling.c"
}

#line 1323 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
#line 1326 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1328 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1330 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1332 "transform_hlds.untupling.c"
{
#line 1334 "transform_hlds.untupling.c"
  {
#line 1336 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1339 "transform_hlds.untupling.c"
    {
#line 1341 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____transform_map_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1344 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1346 "transform_hlds.untupling.c"
  }
#line 1348 "transform_hlds.untupling.c"
}

#line 1351 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
#line 1354 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1356 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1358 "transform_hlds.untupling.c"
{
#line 1360 "transform_hlds.untupling.c"
  {
#line 1362 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1365 "transform_hlds.untupling.c"
    {
#line 1367 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____transformed_proc_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1370 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1372 "transform_hlds.untupling.c"
  }
#line 1374 "transform_hlds.untupling.c"
}

#line 1377 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
#line 1380 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1382 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1384 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1386 "transform_hlds.untupling.c"
{
#line 1388 "transform_hlds.untupling.c"
  {
#line 1390 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1393 "transform_hlds.untupling.c"
    {
#line 1395 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____transformed_proc_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1398 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1400 "transform_hlds.untupling.c"
  }
#line 1402 "transform_hlds.untupling.c"
}

#line 1405 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
#line 1408 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1410 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1412 "transform_hlds.untupling.c"
{
#line 1414 "transform_hlds.untupling.c"
  {
#line 1416 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1419 "transform_hlds.untupling.c"
    {
#line 1421 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____untuple_map_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1424 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1426 "transform_hlds.untupling.c"
  }
#line 1428 "transform_hlds.untupling.c"
}

#line 1431 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
#line 1434 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1436 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1438 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1440 "transform_hlds.untupling.c"
{
#line 1442 "transform_hlds.untupling.c"
  {
#line 1444 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1447 "transform_hlds.untupling.c"
    {
#line 1449 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____untuple_map_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1452 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1454 "transform_hlds.untupling.c"
  }
#line 1456 "transform_hlds.untupling.c"
}

#line 767 "untupling.m"
static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__767__1_1_f_0(
#line 767 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_28)
#line 767 "untupling.m"
{
#line 767 "untupling.m"
  {
#line 767 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 767 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVar__2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 1)));
#line 767 "untupling.m"
    MR_Word transform_hlds__untupling__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 0)));
#line 767 "untupling.m"
    MR_Word transform_hlds__untupling__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 2)));
#line 767 "untupling.m"
    MR_Word transform_hlds__untupling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 3)));

#line 767 "untupling.m"
    return transform_hlds__untupling__HeadVar__2_29;
#line 767 "untupling.m"
  }
#line 767 "untupling.m"
}

#line 187 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(
#line 187 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 187 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 187 "untupling.m"
{
#line 187 "untupling.m"
  {
#line 187 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 187 "untupling.m"
    MR_Word transform_hlds__untupling__V_44_44;

#line 187 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 187 "untupling.m"
      {
#line 187 "untupling.m"
        transform_hlds__untupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 187 "untupling.m"
        (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)) = ((MR_Box) (transform_hlds__untupling__V_44_44));
#line 187 "untupling.m"
        transform_hlds__untupling__succeeded = MR_TRUE;
#line 187 "untupling.m"
      }
#line 187 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 187 "untupling.m"
  }
#line 187 "untupling.m"
}

#line 216 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
#line 216 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 216 "untupling.m"
{
#line 216 "untupling.m"
  {
#line 216 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 216 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_4 = transform_hlds__untupling__HeadVar__2_2;
#line 216 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_5 = transform_hlds__untupling__HeadVar__3_3;

#line 216 "untupling.m"
    {
#line 216 "untupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_5)));
#line 216 "untupling.m"
      return;
    }
#line 216 "untupling.m"
  }
#line 216 "untupling.m"
}

#line 216 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 216 "untupling.m"
{
#line 216 "untupling.m"
  {
#line 216 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 216 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_3 = transform_hlds__untupling__HeadVar__1_1;
#line 216 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_4 = transform_hlds__untupling__HeadVar__2_2;

#line 216 "untupling.m"
    {
#line 216 "untupling.m"
      return transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_4)));
    }
#line 216 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 216 "untupling.m"
  }
#line 216 "untupling.m"
}

#line 137 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
#line 137 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 137 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 137 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 137 "untupling.m"
{
#line 137 "untupling.m"
  {
#line 137 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 137 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_9 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;
#line 137 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_10 = (MR_Integer) transform_hlds__untupling__HeadVar__3_3;

#line 137 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_9 == transform_hlds__untupling__CastY_10);
#line 137 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 1607 "transform_hlds.untupling.c"
      *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 137 "untupling.m"
    else
#line 137 "untupling.m"
      {
#line 137 "untupling.m"
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "untupling.m"
        MR_Word transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 137 "untupling.m"
        MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 137 "untupling.m"
        MR_Word transform_hlds__untupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 137 "untupling.m"
        MR_Word transform_hlds__untupling__V_8_8;

#line 137 "untupling.m"
        {
#line 137 "untupling.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__untupling__V_8_8, transform_hlds__untupling__V_4_4, transform_hlds__untupling__V_6_6);
        }
#line 1629 "transform_hlds.untupling.c"
        transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_8_8 == (MR_Integer) 0);
#line 137 "untupling.m"
        transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 137 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 137 "untupling.m"
          *transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__V_8_8;
#line 137 "untupling.m"
        else
#line 137 "untupling.m"
          {
#line 137 "untupling.m"
            hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__untupling__HeadVar__1_1, transform_hlds__untupling__V_5_5, transform_hlds__untupling__V_7_7);
#line 137 "untupling.m"
            return;
          }
#line 137 "untupling.m"
      }
#line 137 "untupling.m"
  }
#line 137 "untupling.m"
}

#line 137 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
#line 137 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 137 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 137 "untupling.m"
{
#line 137 "untupling.m"
  {
#line 137 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 137 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_7 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 137 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_8 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 137 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_7 == transform_hlds__untupling__CastY_8);
#line 137 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 137 "untupling.m"
      transform_hlds__untupling__succeeded = MR_TRUE;
#line 137 "untupling.m"
    else
#line 137 "untupling.m"
      {
#line 137 "untupling.m"
        MR_Word transform_hlds__untupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 137 "untupling.m"
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 137 "untupling.m"
        MR_Word transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "untupling.m"
        MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));

#line 1690 "transform_hlds.untupling.c"
        {
#line 1692 "transform_hlds.untupling.c"
          transform_hlds__untupling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__untupling__V_3_3, transform_hlds__untupling__V_5_5);
        }
#line 137 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 1697 "transform_hlds.untupling.c"
          {
#line 1699 "transform_hlds.untupling.c"
            return transform_hlds__untupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__untupling__V_4_4, transform_hlds__untupling__V_6_6);
          }
#line 137 "untupling.m"
      }
#line 137 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 137 "untupling.m"
  }
#line 137 "untupling.m"
}

#line 135 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
#line 135 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 135 "untupling.m"
{
#line 135 "untupling.m"
  {
#line 135 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 135 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_4 = transform_hlds__untupling__HeadVar__2_2;
#line 135 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_5 = transform_hlds__untupling__HeadVar__3_3;

#line 135 "untupling.m"
    {
#line 135 "untupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_5)));
#line 135 "untupling.m"
      return;
    }
#line 135 "untupling.m"
  }
#line 135 "untupling.m"
}

#line 135 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 135 "untupling.m"
{
#line 135 "untupling.m"
  {
#line 135 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 135 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_3 = transform_hlds__untupling__HeadVar__1_1;
#line 135 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_4 = transform_hlds__untupling__HeadVar__2_2;

#line 135 "untupling.m"
    {
#line 135 "untupling.m"
      return transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_4)));
    }
#line 135 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 135 "untupling.m"
  }
#line 135 "untupling.m"
}

#line 705 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
#line 705 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 705 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 705 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 705 "untupling.m"
{
#line 705 "untupling.m"
  {
#line 705 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 705 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_13 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;
#line 705 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_14 = (MR_Integer) transform_hlds__untupling__HeadVar__3_3;

#line 705 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_13 == transform_hlds__untupling__CastY_14);
#line 705 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 1797 "transform_hlds.untupling.c"
      *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 705 "untupling.m"
    else
#line 705 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "untupling.m"
        *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 705 "untupling.m"
      else
#line 1809 "transform_hlds.untupling.c"
        *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 2;
#line 705 "untupling.m"
    else
#line 705 "untupling.m"
      {
#line 705 "untupling.m"
        MR_Word transform_hlds__untupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 705 "untupling.m"
        MR_Word transform_hlds__untupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));

#line 705 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1822 "transform_hlds.untupling.c"
          *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 1;
#line 705 "untupling.m"
        else
#line 705 "untupling.m"
          {
#line 705 "untupling.m"
            MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 705 "untupling.m"
            MR_Word transform_hlds__untupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 705 "untupling.m"
            MR_Word transform_hlds__untupling__V_8_8;

#line 705 "untupling.m"
            {
#line 705 "untupling.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__untupling__V_8_8, transform_hlds__untupling__V_18_18, transform_hlds__untupling__V_6_6);
            }
#line 1840 "transform_hlds.untupling.c"
            transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_8_8 == (MR_Integer) 0);
#line 705 "untupling.m"
            transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 705 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 705 "untupling.m"
              *transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__V_8_8;
#line 705 "untupling.m"
            else
#line 705 "untupling.m"
              {
#line 705 "untupling.m"
                {
#line 705 "untupling.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[2], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__V_17_17)), ((MR_Box) (transform_hlds__untupling__V_7_7)));
#line 705 "untupling.m"
                  return;
                }
#line 705 "untupling.m"
              }
#line 705 "untupling.m"
          }
#line 705 "untupling.m"
      }
#line 705 "untupling.m"
  }
#line 705 "untupling.m"
}

#line 705 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
#line 705 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 705 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 705 "untupling.m"
{
#line 705 "untupling.m"
  {
#line 705 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 705 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_9 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 705 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_10 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 705 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_9 == transform_hlds__untupling__CastY_10);
#line 705 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 705 "untupling.m"
      transform_hlds__untupling__succeeded = MR_TRUE;
#line 705 "untupling.m"
    else
#line 705 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "untupling.m"
      {
#line 705 "untupling.m"
        MR_Integer transform_hlds__untupling__CastX_7 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 705 "untupling.m"
        MR_Integer transform_hlds__untupling__CastY_8 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 705 "untupling.m"
        transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastY_8 == transform_hlds__untupling__CastX_7);
#line 705 "untupling.m"
      }
#line 705 "untupling.m"
    else
#line 705 "untupling.m"
      {
#line 705 "untupling.m"
        MR_Word transform_hlds__untupling__TypeInfo_12_12;
#line 705 "untupling.m"
        MR_Word transform_hlds__untupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 705 "untupling.m"
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 705 "untupling.m"
        MR_Word transform_hlds__untupling__V_5_5;
#line 705 "untupling.m"
        MR_Word transform_hlds__untupling__V_6_6;

#line 705 "untupling.m"
        transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 705 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 705 "untupling.m"
          {
#line 705 "untupling.m"
            transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 705 "untupling.m"
            transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1934 "transform_hlds.untupling.c"
            {
#line 1936 "transform_hlds.untupling.c"
              transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__untupling__V_3_3, transform_hlds__untupling__V_5_5);
            }
#line 705 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 705 "untupling.m"
              {
#line 1943 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeInfo_12_12 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 1945 "transform_hlds.untupling.c"
                {
#line 1947 "transform_hlds.untupling.c"
                  return transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_12_12, ((MR_Box) (transform_hlds__untupling__V_4_4)), ((MR_Box) (transform_hlds__untupling__V_6_6)));
                }
#line 705 "untupling.m"
              }
#line 705 "untupling.m"
          }
#line 705 "untupling.m"
      }
#line 705 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 705 "untupling.m"
  }
#line 705 "untupling.m"
}

#line 767 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
#line 767 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 767 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1)
#line 767 "untupling.m"
{
#line 767 "untupling.m"
  {
#line 767 "untupling.m"
    MR_Box transform_hlds__untupling__wrapper_arg_2;
#line 767 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 767 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_HeadVar__2_29;

#line 767 "untupling.m"
    {
#line 767 "untupling.m"
      transform_hlds__untupling__conv0_HeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__767__1_1_f_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1));
    }
#line 767 "untupling.m"
    transform_hlds__untupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__2_29));
#line 767 "untupling.m"
    return transform_hlds__untupling__wrapper_arg_2;
#line 767 "untupling.m"
  }
#line 767 "untupling.m"
}

#line 720 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
#line 720 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode_6,
#line 720 "untupling.m"
  MR_Word transform_hlds__untupling__ArgType_7,
#line 720 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_8,
#line 720 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_9,
#line 720 "untupling.m"
  MR_Word * transform_hlds__untupling__Expansion_10)
#line 720 "untupling.m"
{
#line 726 "untupling.m"
  {
#line 726 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 735 "untupling.m"
    {
#line 735 "untupling.m"
      MR_Word transform_hlds__untupling__V_11_11;

#line 735 "untupling.m"
      {
#line 735 "untupling.m"
        transform_hlds__untupling__V_11_11 = parse_tree__prog_mode__in_mode_0_f_0();
      }
#line 735 "untupling.m"
      {
#line 735 "untupling.m"
        transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_6, transform_hlds__untupling__V_11_11);
      }
#line 735 "untupling.m"
    }
#line 735 "untupling.m"
    if (!(transform_hlds__untupling__succeeded))
#line 736 "untupling.m"
      {
#line 736 "untupling.m"
        MR_Word transform_hlds__untupling__V_12_12;

#line 736 "untupling.m"
        {
#line 736 "untupling.m"
          transform_hlds__untupling__V_12_12 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 736 "untupling.m"
        {
#line 736 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_6, transform_hlds__untupling__V_12_12);
        }
#line 736 "untupling.m"
      }
#line 726 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 750 "untupling.m"
      {
#line 750 "untupling.m"
        MR_Word transform_hlds__untupling__TypeArgs_20;
#line 744 "untupling.m"
        MR_Word transform_hlds__untupling__TypeCtor_19;

#line 744 "untupling.m"
        {
#line 744 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__ArgType_7, &transform_hlds__untupling__TypeCtor_19, &transform_hlds__untupling__TypeArgs_20);
        }
#line 744 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 745 "untupling.m"
          {
#line 745 "untupling.m"
            transform_hlds__untupling__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__untupling__TypeCtor_19);
          }
#line 750 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 747 "untupling.m"
          {
#line 747 "untupling.m"
            MR_Integer transform_hlds__untupling__Arity_21;
#line 747 "untupling.m"
            MR_Word transform_hlds__untupling__ConsId_22;

#line 747 "untupling.m"
            {
#line 747 "untupling.m"
              transform_hlds__untupling__Arity_21 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__TypeArgs_20);
            }
#line 748 "untupling.m"
            {
#line 748 "untupling.m"
              transform_hlds__untupling__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 748 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_22, 1) = ((MR_Box) (transform_hlds__untupling__Arity_21));
#line 748 "untupling.m"
            }
#line 749 "untupling.m"
            {
#line 749 "untupling.m"
              MR_Word base;
#line 749 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "untupling.m"
              *transform_hlds__untupling__Expansion_10 = base;
#line 749 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_22));
#line 749 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__TypeArgs_20));
#line 749 "untupling.m"
            }
#line 747 "untupling.m"
          }
#line 750 "untupling.m"
        else
#line 769 "untupling.m"
          {
#line 769 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtorName_26;
#line 769 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtorArgs_27;
#line 769 "untupling.m"
            MR_Word transform_hlds__untupling__TypeCtor_43;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__TypeInfo_68_78;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__TypeInfo_69_79;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__TypeDefn_23;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__TypeBody_24;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtor_25;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_33_33;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_34_34;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_35_35;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_36_36;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_76_76;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_77_77;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_46_46;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_47_47;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_48_48;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_49_49;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_50_50;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_51_51;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_52_52;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_53_53;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__V_54_54;
#line 758 "untupling.m"
            MR_Integer transform_hlds__untupling__V_57_57;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__V_58_58;
#line 761 "untupling.m"
            MR_Word transform_hlds__untupling__V_28_28;
#line 761 "untupling.m"
            MR_Word transform_hlds__untupling__V_29_29;
#line 763 "untupling.m"
            MR_Word transform_hlds__untupling__TypeCtorInfo_63_73;

#line 753 "untupling.m"
            {
#line 753 "untupling.m"
              transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__ArgType_7, &transform_hlds__untupling__TypeCtor_43, &transform_hlds__untupling__V_76_76);
            }
#line 753 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
              {
#line 2182 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeInfo_68_78 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 753 "untupling.m"
                {
#line 753 "untupling.m"
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_68_78, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__untupling__V_76_76)));
                }
#line 753 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                  {
#line 754 "untupling.m"
                    {
#line 754 "untupling.m"
                      transform_hlds__untupling__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__untupling__TypeTable_9, transform_hlds__untupling__TypeCtor_43, &transform_hlds__untupling__TypeDefn_23);
                    }
#line 753 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                      {
#line 755 "untupling.m"
                        transform_hlds__untupling__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "untupling.m"
                        {
#line 755 "untupling.m"
                          hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__untupling__TypeDefn_23, &transform_hlds__untupling__V_77_77);
                        }
#line 2209 "transform_hlds.untupling.c"
                        transform_hlds__untupling__TypeInfo_69_79 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 755 "untupling.m"
                        {
#line 755 "untupling.m"
                          transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_69_79, ((MR_Box) (transform_hlds__untupling__V_33_33)), ((MR_Box) (transform_hlds__untupling__V_77_77)));
                        }
#line 753 "untupling.m"
                        if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                          {
#line 756 "untupling.m"
                            {
#line 756 "untupling.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__untupling__TypeDefn_23, &transform_hlds__untupling__TypeBody_24);
                            }
#line 757 "untupling.m"
                            transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__TypeBody_24)) == (MR_mktag((MR_Integer) 1)));
#line 757 "untupling.m"
                            if (transform_hlds__untupling__succeeded)
#line 757 "untupling.m"
                              {
#line 757 "untupling.m"
                                transform_hlds__untupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 0)));
#line 757 "untupling.m"
                                transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 1)));
#line 757 "untupling.m"
                                transform_hlds__untupling__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 2)));
#line 757 "untupling.m"
                                transform_hlds__untupling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 3)));
#line 757 "untupling.m"
                                transform_hlds__untupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 4)));
#line 757 "untupling.m"
                                transform_hlds__untupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 5)));
#line 757 "untupling.m"
                                transform_hlds__untupling__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 757 "untupling.m"
                                transform_hlds__untupling__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 757 "untupling.m"
                                transform_hlds__untupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 7)));
#line 757 "untupling.m"
                                transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 757 "untupling.m"
                                if (transform_hlds__untupling__succeeded)
#line 757 "untupling.m"
                                  {
#line 757 "untupling.m"
                                    transform_hlds__untupling__SingleCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_34_34, (MR_Integer) 0)));
#line 757 "untupling.m"
                                    transform_hlds__untupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_34_34, (MR_Integer) 1)));
#line 757 "untupling.m"
                                    transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "untupling.m"
                                    if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                                      {
#line 758 "untupling.m"
                                        transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 0)));
#line 758 "untupling.m"
                                        transform_hlds__untupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 1)));
#line 758 "untupling.m"
                                        transform_hlds__untupling__SingleCtorName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 2)));
#line 758 "untupling.m"
                                        transform_hlds__untupling__SingleCtorArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 3)));
#line 758 "untupling.m"
                                        transform_hlds__untupling__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 4)));
#line 758 "untupling.m"
                                        transform_hlds__untupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 5)));
#line 758 "untupling.m"
                                        transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "untupling.m"
                                        if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                                          {
#line 761 "untupling.m"
                                            transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__SingleCtorArgs_27)) == (MR_mktag((MR_Integer) 1)));
#line 761 "untupling.m"
                                            if (transform_hlds__untupling__succeeded)
#line 761 "untupling.m"
                                              {
#line 761 "untupling.m"
                                                transform_hlds__untupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_27, (MR_Integer) 0)));
#line 761 "untupling.m"
                                                transform_hlds__untupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_27, (MR_Integer) 1)));
#line 2293 "transform_hlds.untupling.c"
                                                transform_hlds__untupling__TypeCtorInfo_63_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 763 "untupling.m"
                                                {
#line 763 "untupling.m"
                                                  transform_hlds__untupling__succeeded = mercury__list__member_2_p_0(transform_hlds__untupling__TypeCtorInfo_63_73, ((MR_Box) (transform_hlds__untupling__ArgType_7)), transform_hlds__untupling__ContainerTypes_8);
                                                }
#line 763 "untupling.m"
                                                transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 761 "untupling.m"
                                              }
#line 753 "untupling.m"
                                          }
#line 753 "untupling.m"
                                      }
#line 757 "untupling.m"
                                  }
#line 757 "untupling.m"
                              }
#line 753 "untupling.m"
                          }
#line 753 "untupling.m"
                      }
#line 753 "untupling.m"
                  }
#line 753 "untupling.m"
              }
#line 769 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 765 "untupling.m"
              {
#line 765 "untupling.m"
                MR_Word transform_hlds__untupling__TypeCtorInfo_64_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 765 "untupling.m"
                MR_Word transform_hlds__untupling__ExpandedTypes_30;
#line 765 "untupling.m"
                MR_Integer transform_hlds__untupling__Arity_41;
#line 765 "untupling.m"
                MR_Word transform_hlds__untupling__ConsId_42;

#line 765 "untupling.m"
                {
#line 765 "untupling.m"
                  transform_hlds__untupling__Arity_41 = mercury__list__length_1_f_0(transform_hlds__untupling__TypeCtorInfo_64_74, transform_hlds__untupling__SingleCtorArgs_27);
                }
#line 766 "untupling.m"
                {
#line 766 "untupling.m"
                  transform_hlds__untupling__ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 766 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 766 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 1) = ((MR_Box) (transform_hlds__untupling__SingleCtorName_26));
#line 766 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 2) = ((MR_Box) (transform_hlds__untupling__Arity_41));
#line 766 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 3) = ((MR_Box) (transform_hlds__untupling__TypeCtor_43));
#line 766 "untupling.m"
                }
#line 767 "untupling.m"
                {
#line 767 "untupling.m"
                  transform_hlds__untupling__ExpandedTypes_30 = mercury__list__map_2_f_0(transform_hlds__untupling__TypeCtorInfo_64_74, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[4], transform_hlds__untupling__SingleCtorArgs_27);
                }
#line 768 "untupling.m"
                {
#line 768 "untupling.m"
                  MR_Word base;
#line 768 "untupling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "untupling.m"
                  *transform_hlds__untupling__Expansion_10 = base;
#line 768 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_42));
#line 768 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ExpandedTypes_30));
#line 768 "untupling.m"
                }
#line 765 "untupling.m"
              }
#line 769 "untupling.m"
            else
#line 770 "untupling.m"
              *transform_hlds__untupling__Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 769 "untupling.m"
          }
#line 750 "untupling.m"
      }
#line 726 "untupling.m"
    else
#line 727 "untupling.m"
      *transform_hlds__untupling__Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 726 "untupling.m"
  }
#line 720 "untupling.m"
}

#line 656 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 656 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 656 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 656 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__5_5,
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__6_6,
#line 656 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__7_7,
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__8_8,
#line 656 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__9_9,
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_10,
#line 656 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_11)
#line 656 "untupling.m"
{
#line 660 "untupling.m"
  {
#line 660 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 660 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "untupling.m"
        {
#line 660 "untupling.m"
          *transform_hlds__untupling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "untupling.m"
          *transform_hlds__untupling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "untupling.m"
          *transform_hlds__untupling__HeadVar__9_9 = transform_hlds__untupling__HeadVar__8_8;
#line 660 "untupling.m"
          *transform_hlds__untupling__HeadVar__7_7 = transform_hlds__untupling__HeadVar__6_6;
#line 660 "untupling.m"
        }
#line 660 "untupling.m"
      else
#line 697 "untupling.m"
        {
#line 698 "untupling.m"
          {
#line 698 "untupling.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
#line 698 "untupling.m"
            return;
          }
#line 697 "untupling.m"
        }
#line 660 "untupling.m"
    else
#line 660 "untupling.m"
      {
#line 660 "untupling.m"
        MR_Word transform_hlds__untupling__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 660 "untupling.m"
        MR_Word transform_hlds__untupling__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 660 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "untupling.m"
          {
#line 700 "untupling.m"
            {
#line 700 "untupling.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
#line 700 "untupling.m"
              return;
            }
#line 699 "untupling.m"
          }
#line 660 "untupling.m"
        else
#line 663 "untupling.m"
          {
#line 663 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 663 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 663 "untupling.m"
            MR_Word transform_hlds__untupling__Arg0Type_31;
#line 663 "untupling.m"
            MR_Word transform_hlds__untupling__Expansion_32;

#line 664 "untupling.m"
            {
#line 664 "untupling.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__V_107_107, &transform_hlds__untupling__Arg0Type_31);
            }
#line 665 "untupling.m"
            {
#line 665 "untupling.m"
              transform_hlds__untupling__expand_argument_5_p_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__Arg0Type_31, transform_hlds__untupling__ContainerTypes0_10, transform_hlds__untupling__TypeTable_11, &transform_hlds__untupling__Expansion_32);
            }
#line 690 "untupling.m"
            if ((transform_hlds__untupling__Expansion_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "untupling.m"
              {
#line 691 "untupling.m"
                MR_Word transform_hlds__untupling__Args1_42;

#line 693 "untupling.m"
                {
#line 693 "untupling.m"
                  transform_hlds__untupling__expand_call_args_10_p_0(transform_hlds__untupling__V_106_106, transform_hlds__untupling__ArgModes_23, &transform_hlds__untupling__Args1_42, transform_hlds__untupling__HeadVar__4_4, transform_hlds__untupling__HeadVar__5_5, transform_hlds__untupling__HeadVar__6_6, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__TypeTable_11);
                }
#line 692 "untupling.m"
                {
#line 692 "untupling.m"
                  MR_Word base;
#line 692 "untupling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "untupling.m"
                  *transform_hlds__untupling__HeadVar__3_3 = base;
#line 692 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__V_107_107));
#line 692 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Args1_42));
#line 692 "untupling.m"
                }
#line 691 "untupling.m"
              }
#line 690 "untupling.m"
            else
#line 667 "untupling.m"
              {
#line 667 "untupling.m"
                MR_Word transform_hlds__untupling__TypeCtorInfo_100_100;
#line 667 "untupling.m"
                MR_Word transform_hlds__untupling__ConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_32, (MR_Integer) 0)));
#line 667 "untupling.m"
                MR_Word transform_hlds__untupling__Types_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_32, (MR_Integer) 1)));
#line 667 "untupling.m"
                MR_Integer transform_hlds__untupling__NumVars_35;
#line 667 "untupling.m"
                MR_Word transform_hlds__untupling__ReplacementArgs_36;
#line 667 "untupling.m"
                MR_Word transform_hlds__untupling__ReplacementModes_37;
#line 667 "untupling.m"
                MR_Word transform_hlds__untupling__ContainerTypes_38;
#line 667 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49;
#line 667 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50;
#line 673 "untupling.m"
                MR_Word transform_hlds__untupling__V_104_104;

#line 668 "untupling.m"
                {
#line 668 "untupling.m"
                  transform_hlds__untupling__NumVars_35 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__Types_34);
                }
#line 669 "untupling.m"
                {
#line 669 "untupling.m"
                  mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__NumVars_35, &transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__HeadVar__6_6, &transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49);
                }
#line 670 "untupling.m"
                {
#line 670 "untupling.m"
                  parse_tree__prog_data__vartypes_add_corresponding_lists_4_p_0(transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__Types_34, transform_hlds__untupling__HeadVar__8_8, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50);
                }
#line 2566 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 671 "untupling.m"
                {
#line 671 "untupling.m"
                  mercury__list__duplicate_3_p_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__NumVars_35, ((MR_Box) (transform_hlds__untupling__ArgMode_22)), &transform_hlds__untupling__ReplacementModes_37);
                }
#line 672 "untupling.m"
                {
#line 672 "untupling.m"
                  transform_hlds__untupling__ContainerTypes_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "untupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__untupling__ContainerTypes_38, 0) = ((MR_Box) (transform_hlds__untupling__Arg0Type_31));
#line 672 "untupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__untupling__ContainerTypes_38, 1) = ((MR_Box) (transform_hlds__untupling__ContainerTypes0_10));
#line 672 "untupling.m"
                }
#line 673 "untupling.m"
                {
#line 673 "untupling.m"
                  transform_hlds__untupling__V_104_104 = parse_tree__prog_mode__in_mode_0_f_0();
                }
#line 673 "untupling.m"
                {
#line 673 "untupling.m"
                  transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__V_104_104);
                }
#line 680 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 674 "untupling.m"
                  {
#line 674 "untupling.m"
                    MR_Word transform_hlds__untupling__Unif_39;
#line 674 "untupling.m"
                    MR_Word transform_hlds__untupling__EnterUnifs1_40;
#line 674 "untupling.m"
                    MR_Word transform_hlds__untupling__V_51_51;
#line 674 "untupling.m"
                    MR_Word transform_hlds__untupling__V_52_52;

#line 674 "untupling.m"
                    {
#line 674 "untupling.m"
                      hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__untupling__V_107_107, transform_hlds__untupling__ConsId_33, transform_hlds__untupling__ReplacementArgs_36, &transform_hlds__untupling__Unif_39);
                    }
#line 676 "untupling.m"
                    {
#line 676 "untupling.m"
                      transform_hlds__untupling__V_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__V_106_106);
                    }
#line 677 "untupling.m"
                    {
#line 677 "untupling.m"
                      transform_hlds__untupling__V_52_52 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__ReplacementModes_37, transform_hlds__untupling__ArgModes_23);
                    }
#line 676 "untupling.m"
                    {
#line 676 "untupling.m"
                      transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__V_51_51, transform_hlds__untupling__V_52_52, transform_hlds__untupling__HeadVar__3_3, &transform_hlds__untupling__EnterUnifs1_40, transform_hlds__untupling__HeadVar__5_5, transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__ContainerTypes_38, transform_hlds__untupling__TypeTable_11);
                    }
#line 675 "untupling.m"
                    {
#line 675 "untupling.m"
                      MR_Word base;
#line 675 "untupling.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "untupling.m"
                      *transform_hlds__untupling__HeadVar__4_4 = base;
#line 675 "untupling.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Unif_39));
#line 675 "untupling.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__EnterUnifs1_40));
#line 675 "untupling.m"
                    }
#line 674 "untupling.m"
                  }
#line 680 "untupling.m"
                else
#line 687 "untupling.m"
                  {
#line 680 "untupling.m"
                    MR_Word transform_hlds__untupling__V_105_105;

#line 680 "untupling.m"
                    {
#line 680 "untupling.m"
                      transform_hlds__untupling__V_105_105 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
#line 680 "untupling.m"
                    {
#line 680 "untupling.m"
                      transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__V_105_105);
                    }
#line 687 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 681 "untupling.m"
                      {
#line 681 "untupling.m"
                        MR_Word transform_hlds__untupling__ExitUnifs1_41;
#line 681 "untupling.m"
                        MR_Word transform_hlds__untupling__V_55_55;
#line 681 "untupling.m"
                        MR_Word transform_hlds__untupling__V_57_57;
#line 681 "untupling.m"
                        MR_Word transform_hlds__untupling__V_58_58;
#line 681 "untupling.m"
                        MR_Word transform_hlds__untupling__Unif_64;

#line 681 "untupling.m"
                        {
#line 681 "untupling.m"
                          hlds__make_goal__construct_functor_4_p_0(transform_hlds__untupling__V_107_107, transform_hlds__untupling__ConsId_33, transform_hlds__untupling__ReplacementArgs_36, &transform_hlds__untupling__Unif_64);
                        }
#line 682 "untupling.m"
                        {
#line 682 "untupling.m"
                          transform_hlds__untupling__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "untupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_55_55, 0) = ((MR_Box) (transform_hlds__untupling__Unif_64));
#line 682 "untupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "untupling.m"
                        }
#line 683 "untupling.m"
                        {
#line 683 "untupling.m"
                          transform_hlds__untupling__V_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__V_106_106);
                        }
#line 684 "untupling.m"
                        {
#line 684 "untupling.m"
                          transform_hlds__untupling__V_58_58 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__ReplacementModes_37, transform_hlds__untupling__ArgModes_23);
                        }
#line 683 "untupling.m"
                        {
#line 683 "untupling.m"
                          transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__V_57_57, transform_hlds__untupling__V_58_58, transform_hlds__untupling__HeadVar__3_3, transform_hlds__untupling__HeadVar__4_4, &transform_hlds__untupling__ExitUnifs1_41, transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__ContainerTypes_38, transform_hlds__untupling__TypeTable_11);
                        }
#line 682 "untupling.m"
                        {
#line 682 "untupling.m"
                          *transform_hlds__untupling__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__ExitUnifs1_41, transform_hlds__untupling__V_55_55);
                        }
#line 681 "untupling.m"
                      }
#line 687 "untupling.m"
                    else
#line 688 "untupling.m"
                      {
#line 688 "untupling.m"
                        {
#line 688 "untupling.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "unsupported mode");
#line 688 "untupling.m"
                          return;
                        }
#line 688 "untupling.m"
                      }
#line 687 "untupling.m"
                  }
#line 667 "untupling.m"
              }
#line 663 "untupling.m"
          }
#line 660 "untupling.m"
      }
#line 660 "untupling.m"
  }
#line 656 "untupling.m"
}

#line 647 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
#line 647 "untupling.m"
  MR_Word transform_hlds__untupling__Args0_11,
#line 647 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_12,
#line 647 "untupling.m"
  MR_Word * transform_hlds__untupling__Args_13,
#line 647 "untupling.m"
  MR_Word * transform_hlds__untupling__EnterUnifs_14,
#line 647 "untupling.m"
  MR_Word * transform_hlds__untupling__ExitUnifs_15,
#line 647 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19,
#line 647 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_20,
#line 647 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21,
#line 647 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_22,
#line 647 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_18)
#line 647 "untupling.m"
{
#line 652 "untupling.m"
  {
#line 652 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 653 "untupling.m"
    {
#line 653 "untupling.m"
      transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__Args0_11, transform_hlds__untupling__ArgModes0_12, transform_hlds__untupling__Args_13, transform_hlds__untupling__EnterUnifs_14, transform_hlds__untupling__ExitUnifs_15, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19, transform_hlds__untupling__STATE_VARIABLE_VarSet_20, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21, transform_hlds__untupling__STATE_VARIABLE_VarTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__untupling__TypeTable_18);
#line 653 "untupling.m"
      return;
    }
#line 652 "untupling.m"
  }
#line 647 "untupling.m"
}

#line 631 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
#line 631 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 631 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 631 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 631 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 631 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 631 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 631 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 631 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 631 "untupling.m"
{
#line 635 "untupling.m"
  {
#line 635 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 635 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "untupling.m"
      {
#line 635 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 635 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 635 "untupling.m"
      }
#line 635 "untupling.m"
    else
#line 637 "untupling.m"
      {
#line 637 "untupling.m"
        MR_Word transform_hlds__untupling__Case0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 637 "untupling.m"
        MR_Word transform_hlds__untupling__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 637 "untupling.m"
        MR_Word transform_hlds__untupling__Case_19;
#line 637 "untupling.m"
        MR_Word transform_hlds__untupling__Cases_20;
#line 637 "untupling.m"
        MR_Word transform_hlds__untupling__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 0)));
#line 637 "untupling.m"
        MR_Word transform_hlds__untupling__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 1)));
#line 637 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 2)));
#line 637 "untupling.m"
        MR_Word transform_hlds__untupling__Goal_28;
#line 637 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33;
#line 637 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34;

#line 639 "untupling.m"
        {
#line 639 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_27, &transform_hlds__untupling__Goal_28, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 641 "untupling.m"
        {
#line 641 "untupling.m"
          transform_hlds__untupling__Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 641 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 0) = ((MR_Box) (transform_hlds__untupling__MainConsId_25));
#line 641 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 1) = ((MR_Box) (transform_hlds__untupling__OtherConsIds_26));
#line 641 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 2) = ((MR_Box) (transform_hlds__untupling__Goal_28));
#line 641 "untupling.m"
        }
#line 642 "untupling.m"
        {
#line 642 "untupling.m"
          transform_hlds__untupling__fix_calls_in_cases_8_p_0(transform_hlds__untupling__Cases0_18, &transform_hlds__untupling__Cases_20, transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 636 "untupling.m"
        {
#line 636 "untupling.m"
          MR_Word base;
#line 636 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "untupling.m"
          *transform_hlds__untupling__HeadVar__2_2 = base;
#line 636 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Case_19));
#line 636 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Cases_20));
#line 636 "untupling.m"
        }
#line 637 "untupling.m"
      }
#line 635 "untupling.m"
  }
#line 631 "untupling.m"
}

#line 619 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
#line 619 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 619 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 619 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 619 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 619 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 619 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 619 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 619 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 619 "untupling.m"
{
#line 623 "untupling.m"
  {
#line 623 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 623 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "untupling.m"
      {
#line 623 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 623 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 623 "untupling.m"
      }
#line 623 "untupling.m"
    else
#line 625 "untupling.m"
      {
#line 625 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 625 "untupling.m"
        MR_Word transform_hlds__untupling__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 625 "untupling.m"
        MR_Word transform_hlds__untupling__Goal_19;
#line 625 "untupling.m"
        MR_Word transform_hlds__untupling__Goals_20;
#line 625 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29;
#line 625 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30;

#line 626 "untupling.m"
        {
#line 626 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__Goal_19, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 628 "untupling.m"
        {
#line 628 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_18, &transform_hlds__untupling__Goals_20, transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 624 "untupling.m"
        {
#line 624 "untupling.m"
          MR_Word base;
#line 624 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "untupling.m"
          *transform_hlds__untupling__HeadVar__2_2 = base;
#line 624 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Goal_19));
#line 624 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Goals_20));
#line 624 "untupling.m"
        }
#line 625 "untupling.m"
      }
#line 623 "untupling.m"
  }
#line 619 "untupling.m"
}

#line 602 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
#line 602 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 602 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 602 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 602 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 602 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 602 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 602 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 602 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 602 "untupling.m"
{
#line 606 "untupling.m"
  {
#line 606 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 606 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "untupling.m"
      {
#line 606 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 606 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 606 "untupling.m"
      }
#line 606 "untupling.m"
    else
#line 608 "untupling.m"
      {
#line 608 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 608 "untupling.m"
        MR_Word transform_hlds__untupling__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 608 "untupling.m"
        MR_Word transform_hlds__untupling__Goal1_24;
#line 608 "untupling.m"
        MR_Word transform_hlds__untupling__Goals1_25;
#line 608 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32;
#line 608 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33;
#line 615 "untupling.m"
        MR_Word transform_hlds__untupling__ConjGoals_26;
#line 613 "untupling.m"
        MR_Word transform_hlds__untupling__V_36_36;
#line 613 "untupling.m"
        MR_Word transform_hlds__untupling__V_37_37;
#line 613 "untupling.m"
        MR_Word transform_hlds__untupling__V_27_27;

#line 609 "untupling.m"
        {
#line 609 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__Goal1_24, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 611 "untupling.m"
        {
#line 611 "untupling.m"
          transform_hlds__untupling__fix_calls_in_conj_8_p_0(transform_hlds__untupling__Goals0_18, &transform_hlds__untupling__Goals1_25, transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 613 "untupling.m"
        transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal1_24, (MR_Integer) 0)));
#line 613 "untupling.m"
        transform_hlds__untupling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal1_24, (MR_Integer) 1)));
#line 613 "untupling.m"
        transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 613 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 613 "untupling.m"
          {
#line 613 "untupling.m"
            transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 1)));
#line 613 "untupling.m"
            transform_hlds__untupling__ConjGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 2)));
#line 613 "untupling.m"
            transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_37_37 == (MR_Integer) 0);
#line 613 "untupling.m"
          }
#line 615 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 614 "untupling.m"
          {
#line 614 "untupling.m"
            {
#line 614 "untupling.m"
              *transform_hlds__untupling__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__ConjGoals_26, transform_hlds__untupling__Goals1_25);
            }
#line 614 "untupling.m"
          }
#line 615 "untupling.m"
        else
#line 616 "untupling.m"
          {
#line 616 "untupling.m"
            MR_Word base;
#line 616 "untupling.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "untupling.m"
            *transform_hlds__untupling__HeadVar__2_2 = base;
#line 616 "untupling.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Goal1_24));
#line 616 "untupling.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Goals1_25));
#line 616 "untupling.m"
          }
#line 608 "untupling.m"
      }
#line 606 "untupling.m"
  }
#line 602 "untupling.m"
}

#line 500 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
#line 500 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_9,
#line 500 "untupling.m"
  MR_Word * transform_hlds__untupling__Goal_10,
#line 500 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74,
#line 500 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_75,
#line 500 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76,
#line 500 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_77,
#line 500 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_13,
#line 500 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_14)
#line 500 "untupling.m"
{
#line 504 "untupling.m"
  {
#line 504 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 504 "untupling.m"
    MR_Word transform_hlds__untupling__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_9, (MR_Integer) 0)));
#line 504 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_9, (MR_Integer) 1)));

#line 512 "untupling.m"
#line 512 "untupling.m"
    switch (MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) {
#line 512 "untupling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 512 "untupling.m"
      case (MR_Integer) 0:
#line 535 "untupling.m"
        {
#line 535 "untupling.m"
          MR_Word transform_hlds__untupling__SubGoal0_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__untupling__GoalExpr0_15), (MR_Integer) 0);
#line 535 "untupling.m"
          MR_Word transform_hlds__untupling__SubGoal_54;
#line 535 "untupling.m"
          MR_Word transform_hlds__untupling__GoalExpr_55;

#line 536 "untupling.m"
          {
#line 536 "untupling.m"
            transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__SubGoal0_53, &transform_hlds__untupling__SubGoal_54, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
          }
#line 538 "untupling.m"
          transform_hlds__untupling__GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__untupling__SubGoal_54);
#line 539 "untupling.m"
          {
#line 539 "untupling.m"
            MR_Word base;
#line 539 "untupling.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "untupling.m"
            *transform_hlds__untupling__Goal_10 = base;
#line 539 "untupling.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_55));
#line 539 "untupling.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 539 "untupling.m"
          }
#line 535 "untupling.m"
        }
#line 512 "untupling.m"
        break;
#line 512 "untupling.m"
      case (MR_Integer) 1:
#line 510 "untupling.m"
        {
#line 511 "untupling.m"
          *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 510 "untupling.m"
          *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 510 "untupling.m"
          *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 510 "untupling.m"
        }
#line 512 "untupling.m"
        break;
#line 512 "untupling.m"
      case (MR_Integer) 2:
#line 513 "untupling.m"
        {
#line 513 "untupling.m"
          MR_Word transform_hlds__untupling__CalleePredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)));
#line 513 "untupling.m"
          MR_Integer transform_hlds__untupling__CalleeProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 513 "untupling.m"
          MR_Word transform_hlds__untupling__OrigArgs_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 513 "untupling.m"
          MR_Word transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 513 "untupling.m"
          MR_Word transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 4)));
#line 513 "untupling.m"
          MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 5)));
#line 531 "untupling.m"
          MR_Word transform_hlds__untupling__CallAux0_41;
#line 531 "untupling.m"
          MR_Word transform_hlds__untupling__CallAuxInfo_42;
#line 515 "untupling.m"
          MR_Word transform_hlds__untupling__V_99_99;
#line 515 "untupling.m"
          MR_Word transform_hlds__untupling__V_100_100;
#line 515 "untupling.m"
          MR_Word transform_hlds__untupling__V_101_101;
#line 515 "untupling.m"
          MR_Box transform_hlds__untupling__conv0_V_100_100;
#line 516 "untupling.m"
          MR_Word transform_hlds__untupling__V_40_40;

#line 515 "untupling.m"
          {
#line 515 "untupling.m"
            transform_hlds__untupling__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "untupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_99_99, 0) = ((MR_Box) (transform_hlds__untupling__CalleePredId_34));
#line 515 "untupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_99_99, 1) = ((MR_Box) (transform_hlds__untupling__CalleeProcId_35));
#line 515 "untupling.m"
          }
#line 515 "untupling.m"
          {
#line 515 "untupling.m"
            transform_hlds__untupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, transform_hlds__untupling__TransformMap_13, ((MR_Box) (transform_hlds__untupling__V_99_99)), &transform_hlds__untupling__conv0_V_100_100);
          }
#line 515 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 515 "untupling.m"
            {
#line 515 "untupling.m"
              transform_hlds__untupling__V_100_100 = ((MR_Word) transform_hlds__untupling__conv0_V_100_100);
#line 515 "untupling.m"
              transform_hlds__untupling__succeeded = MR_TRUE;
#line 515 "untupling.m"
            }
#line 515 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 515 "untupling.m"
            {
#line 516 "untupling.m"
              transform_hlds__untupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_100_100, (MR_Integer) 0)));
#line 516 "untupling.m"
              transform_hlds__untupling__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_100_100, (MR_Integer) 1)));
#line 516 "untupling.m"
              transform_hlds__untupling__CallAux0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_101_101, (MR_Integer) 0)));
#line 516 "untupling.m"
              transform_hlds__untupling__CallAuxInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_101_101, (MR_Integer) 1)));
#line 516 "untupling.m"
              transform_hlds__untupling__succeeded = MR_TRUE;
#line 515 "untupling.m"
            }
#line 531 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 518 "untupling.m"
            {
#line 518 "untupling.m"
              MR_Word transform_hlds__untupling__TypeTable_43;
#line 518 "untupling.m"
              MR_Word transform_hlds__untupling__CalleeProcInfo_45;
#line 518 "untupling.m"
              MR_Word transform_hlds__untupling__OrigArgModes_46;
#line 518 "untupling.m"
              MR_Word transform_hlds__untupling__Args_47;
#line 518 "untupling.m"
              MR_Word transform_hlds__untupling__EnterUnifs_48;
#line 518 "untupling.m"
              MR_Word transform_hlds__untupling__ExitUnifs_49;
#line 519 "untupling.m"
              MR_Word transform_hlds__untupling___CalleePredInfo_44;
#line 528 "untupling.m"
              MR_Word transform_hlds__untupling__CallAux_50;
#line 524 "untupling.m"
              MR_Word transform_hlds__untupling__V_123_123;
#line 524 "untupling.m"
              MR_Integer transform_hlds__untupling__V_124_124;
#line 524 "untupling.m"
              MR_Word transform_hlds__untupling__V_126_126;
#line 524 "untupling.m"
              MR_Word transform_hlds__untupling__V_127_127;
#line 524 "untupling.m"
              MR_Word transform_hlds__untupling__V_128_128;
#line 524 "untupling.m"
              MR_Word transform_hlds__untupling__V_125_125;

#line 518 "untupling.m"
              {
#line 518 "untupling.m"
                hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__ModuleInfo_14, &transform_hlds__untupling__TypeTable_43);
              }
#line 519 "untupling.m"
              {
#line 519 "untupling.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__ModuleInfo_14, transform_hlds__untupling__CalleePredId_34, transform_hlds__untupling__CalleeProcId_35, &transform_hlds__untupling___CalleePredInfo_44, &transform_hlds__untupling__CalleeProcInfo_45);
              }
#line 521 "untupling.m"
              {
#line 521 "untupling.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__untupling__CalleeProcInfo_45, &transform_hlds__untupling__OrigArgModes_46);
              }
#line 522 "untupling.m"
              {
#line 522 "untupling.m"
                transform_hlds__untupling__expand_call_args_10_p_0(transform_hlds__untupling__OrigArgs_36, transform_hlds__untupling__OrigArgModes_46, &transform_hlds__untupling__Args_47, &transform_hlds__untupling__EnterUnifs_48, &transform_hlds__untupling__ExitUnifs_49, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TypeTable_43);
              }
#line 524 "untupling.m"
              transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__CallAux0_41)) == (MR_mktag((MR_Integer) 2)));
#line 524 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 524 "untupling.m"
                {
#line 524 "untupling.m"
                  transform_hlds__untupling__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 0)));
#line 524 "untupling.m"
                  transform_hlds__untupling__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 1)));
#line 524 "untupling.m"
                  transform_hlds__untupling__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 2)));
#line 524 "untupling.m"
                  transform_hlds__untupling__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 3)));
#line 524 "untupling.m"
                  transform_hlds__untupling__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 4)));
#line 524 "untupling.m"
                  transform_hlds__untupling__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 5)));
#line 524 "untupling.m"
                  {
#line 524 "untupling.m"
                    transform_hlds__untupling__CallAux_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 524 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 0) = ((MR_Box) (transform_hlds__untupling__V_123_123));
#line 524 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 1) = ((MR_Box) (transform_hlds__untupling__V_124_124));
#line 524 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 2) = ((MR_Box) (transform_hlds__untupling__Args_47));
#line 524 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 3) = ((MR_Box) (transform_hlds__untupling__V_126_126));
#line 524 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 4) = ((MR_Box) (transform_hlds__untupling__V_127_127));
#line 524 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 5) = ((MR_Box) (transform_hlds__untupling__V_128_128));
#line 524 "untupling.m"
                  }
#line 524 "untupling.m"
                  transform_hlds__untupling__succeeded = MR_TRUE;
#line 524 "untupling.m"
                }
#line 528 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 525 "untupling.m"
                {
#line 525 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtorInfo_131_131;
#line 525 "untupling.m"
                  MR_Word transform_hlds__untupling__Call_51;
#line 525 "untupling.m"
                  MR_Word transform_hlds__untupling__ConjList_52;
#line 525 "untupling.m"
                  MR_Word transform_hlds__untupling__V_104_104;
#line 525 "untupling.m"
                  MR_Word transform_hlds__untupling__V_105_105;

#line 525 "untupling.m"
                  {
#line 525 "untupling.m"
                    transform_hlds__untupling__Call_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "untupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__untupling__Call_51, 0) = ((MR_Box) (transform_hlds__untupling__CallAux_50));
#line 525 "untupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__untupling__Call_51, 1) = ((MR_Box) (transform_hlds__untupling__CallAuxInfo_42));
#line 525 "untupling.m"
                  }
#line 3371 "transform_hlds.untupling.c"
                  transform_hlds__untupling__TypeCtorInfo_131_131 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 526 "untupling.m"
                  {
#line 526 "untupling.m"
                    transform_hlds__untupling__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_105_105, 0) = ((MR_Box) (transform_hlds__untupling__Call_51));
#line 526 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "untupling.m"
                  }
#line 526 "untupling.m"
                  {
#line 526 "untupling.m"
                    transform_hlds__untupling__V_104_104 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_131_131, transform_hlds__untupling__V_105_105, transform_hlds__untupling__ExitUnifs_49);
                  }
#line 526 "untupling.m"
                  {
#line 526 "untupling.m"
                    transform_hlds__untupling__ConjList_52 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_131_131, transform_hlds__untupling__EnterUnifs_48, transform_hlds__untupling__V_104_104);
                  }
#line 527 "untupling.m"
                  {
#line 527 "untupling.m"
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__untupling__ConjList_52, transform_hlds__untupling__GoalInfo0_16, transform_hlds__untupling__Goal_10);
#line 527 "untupling.m"
                    return;
                  }
#line 525 "untupling.m"
                }
#line 528 "untupling.m"
              else
#line 529 "untupling.m"
                {
#line 529 "untupling.m"
                  {
#line 529 "untupling.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "not a call template");
#line 529 "untupling.m"
                    return;
                  }
#line 529 "untupling.m"
                }
#line 518 "untupling.m"
            }
#line 531 "untupling.m"
          else
#line 532 "untupling.m"
            {
#line 532 "untupling.m"
              *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 532 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 532 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 532 "untupling.m"
            }
#line 513 "untupling.m"
        }
#line 512 "untupling.m"
        break;
#line 512 "untupling.m"
      case (MR_Integer) 3:
#line 512 "untupling.m"
#line 512 "untupling.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) {
#line 512 "untupling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 512 "untupling.m"
          case (MR_Integer) 0:
#line 512 "untupling.m"
          case (MR_Integer) 1:
#line 510 "untupling.m"
            {
#line 511 "untupling.m"
              *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 510 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 510 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 510 "untupling.m"
            }
#line 512 "untupling.m"
            break;
#line 512 "untupling.m"
          case (MR_Integer) 2:
#line 557 "untupling.m"
            {
#line 557 "untupling.m"
              MR_Word transform_hlds__untupling__ConjType_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 557 "untupling.m"
              MR_Word transform_hlds__untupling__Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 557 "untupling.m"
              MR_Word transform_hlds__untupling__Goals_61;
#line 557 "untupling.m"
              MR_Word transform_hlds__untupling__GoalExpr_117;

#line 562 "untupling.m"
#line 562 "untupling.m"
              switch (transform_hlds__untupling__ConjType_59) {
#line 562 "untupling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 562 "untupling.m"
                case (MR_Integer) 1:
#line 567 "untupling.m"
                  {
#line 567 "untupling.m"
                    transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_60, &transform_hlds__untupling__Goals_61, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                  }
#line 562 "untupling.m"
                  break;
#line 562 "untupling.m"
                case (MR_Integer) 0:
#line 560 "untupling.m"
                  {
#line 560 "untupling.m"
                    transform_hlds__untupling__fix_calls_in_conj_8_p_0(transform_hlds__untupling__Goals0_60, &transform_hlds__untupling__Goals_61, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                  }
#line 562 "untupling.m"
                  break;
#line 562 "untupling.m"
              }
#line 570 "untupling.m"
              {
#line 570 "untupling.m"
                transform_hlds__untupling__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 570 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 570 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 1) = ((MR_Box) (transform_hlds__untupling__ConjType_59));
#line 570 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 2) = ((MR_Box) (transform_hlds__untupling__Goals_61));
#line 570 "untupling.m"
              }
#line 571 "untupling.m"
              {
#line 571 "untupling.m"
                MR_Word base;
#line 571 "untupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 571 "untupling.m"
                *transform_hlds__untupling__Goal_10 = base;
#line 571 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_117));
#line 571 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 571 "untupling.m"
              }
#line 557 "untupling.m"
            }
#line 512 "untupling.m"
            break;
#line 512 "untupling.m"
          case (MR_Integer) 3:
#line 573 "untupling.m"
            {
#line 573 "untupling.m"
              MR_Word transform_hlds__untupling__GoalExpr_118;
#line 573 "untupling.m"
              MR_Word transform_hlds__untupling__Goals0_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 573 "untupling.m"
              MR_Word transform_hlds__untupling__Goals_120;

#line 574 "untupling.m"
              {
#line 574 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_119, &transform_hlds__untupling__Goals_120, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 576 "untupling.m"
              {
#line 576 "untupling.m"
                transform_hlds__untupling__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 576 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__untupling__Goals_120));
#line 576 "untupling.m"
              }
#line 577 "untupling.m"
              {
#line 577 "untupling.m"
                MR_Word base;
#line 577 "untupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "untupling.m"
                *transform_hlds__untupling__Goal_10 = base;
#line 577 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_118));
#line 577 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 577 "untupling.m"
              }
#line 573 "untupling.m"
            }
#line 512 "untupling.m"
            break;
#line 512 "untupling.m"
          case (MR_Integer) 4:
#line 579 "untupling.m"
            {
#line 579 "untupling.m"
              MR_Word transform_hlds__untupling__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 579 "untupling.m"
              MR_Word transform_hlds__untupling__CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 579 "untupling.m"
              MR_Word transform_hlds__untupling__Cases0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 579 "untupling.m"
              MR_Word transform_hlds__untupling__Cases_65;
#line 579 "untupling.m"
              MR_Word transform_hlds__untupling__GoalExpr_121;

#line 580 "untupling.m"
              {
#line 580 "untupling.m"
                transform_hlds__untupling__fix_calls_in_cases_8_p_0(transform_hlds__untupling__Cases0_64, &transform_hlds__untupling__Cases_65, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 582 "untupling.m"
              {
#line 582 "untupling.m"
                transform_hlds__untupling__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 582 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 582 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 1) = ((MR_Box) (transform_hlds__untupling__Var_62));
#line 582 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 2) = ((MR_Box) (transform_hlds__untupling__CanFail_63));
#line 582 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 3) = ((MR_Box) (transform_hlds__untupling__Cases_65));
#line 582 "untupling.m"
              }
#line 583 "untupling.m"
              {
#line 583 "untupling.m"
                MR_Word base;
#line 583 "untupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "untupling.m"
                *transform_hlds__untupling__Goal_10 = base;
#line 583 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_121));
#line 583 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 583 "untupling.m"
              }
#line 579 "untupling.m"
            }
#line 512 "untupling.m"
            break;
#line 512 "untupling.m"
          case (MR_Integer) 5:
#line 541 "untupling.m"
            {
#line 541 "untupling.m"
              MR_Word transform_hlds__untupling__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 541 "untupling.m"
              MR_Word transform_hlds__untupling__SubGoal0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 543 "untupling.m"
              MR_Word transform_hlds__untupling__FGT_58;
#line 543 "untupling.m"
              MR_Word transform_hlds__untupling__V_57_57;

#line 543 "untupling.m"
              transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__Reason_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 543 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 543 "untupling.m"
                {
#line 543 "untupling.m"
                  transform_hlds__untupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 1)));
#line 543 "untupling.m"
                  transform_hlds__untupling__FGT_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 2)));
#line 545 "untupling.m"
#line 545 "untupling.m"
                  switch (transform_hlds__untupling__FGT_58) {
#line 545 "untupling.m"
                    default:
#line 545 "untupling.m"
                      transform_hlds__untupling__succeeded = MR_FALSE;
#line 545 "untupling.m"
                      break;
#line 545 "untupling.m"
                    case (MR_Integer) 1:
#line 544 "untupling.m"
                      transform_hlds__untupling__succeeded = MR_TRUE;
#line 545 "untupling.m"
                      break;
#line 545 "untupling.m"
                    case (MR_Integer) 2:
#line 545 "untupling.m"
                      transform_hlds__untupling__succeeded = MR_TRUE;
#line 545 "untupling.m"
                      break;
#line 545 "untupling.m"
                  }
#line 543 "untupling.m"
                }
#line 550 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 549 "untupling.m"
                {
#line 549 "untupling.m"
                  *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 549 "untupling.m"
                  *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 549 "untupling.m"
                  *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 549 "untupling.m"
                }
#line 550 "untupling.m"
              else
#line 552 "untupling.m"
                {
#line 552 "untupling.m"
                  MR_Word transform_hlds__untupling__SubGoal_110;
#line 552 "untupling.m"
                  MR_Word transform_hlds__untupling__GoalExpr_111;

#line 551 "untupling.m"
                  {
#line 551 "untupling.m"
                    transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__SubGoal0_114, &transform_hlds__untupling__SubGoal_110, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                  }
#line 553 "untupling.m"
                  {
#line 553 "untupling.m"
                    transform_hlds__untupling__GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 553 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 553 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 1) = ((MR_Box) (transform_hlds__untupling__Reason_56));
#line 553 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 2) = ((MR_Box) (transform_hlds__untupling__SubGoal_110));
#line 553 "untupling.m"
                  }
#line 554 "untupling.m"
                  {
#line 554 "untupling.m"
                    MR_Word base;
#line 554 "untupling.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 554 "untupling.m"
                    *transform_hlds__untupling__Goal_10 = base;
#line 554 "untupling.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_111));
#line 554 "untupling.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 554 "untupling.m"
                  }
#line 552 "untupling.m"
                }
#line 541 "untupling.m"
            }
#line 512 "untupling.m"
            break;
#line 512 "untupling.m"
          case (MR_Integer) 6:
#line 585 "untupling.m"
            {
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__Vars_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__Then0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__Else0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 4)));
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__Cond_70;
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__Then_71;
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__Else_72;
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81;
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82;
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83;
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84;
#line 585 "untupling.m"
              MR_Word transform_hlds__untupling__GoalExpr_122;

#line 586 "untupling.m"
              {
#line 586 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Cond0_67, &transform_hlds__untupling__Cond_70, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, &transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 588 "untupling.m"
              {
#line 588 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Then0_68, &transform_hlds__untupling__Then_71, transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81, &transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83, transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 590 "untupling.m"
              {
#line 590 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Else0_69, &transform_hlds__untupling__Else_72, transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 592 "untupling.m"
              {
#line 592 "untupling.m"
                transform_hlds__untupling__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 592 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 592 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 1) = ((MR_Box) (transform_hlds__untupling__Vars_66));
#line 592 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 2) = ((MR_Box) (transform_hlds__untupling__Cond_70));
#line 592 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 3) = ((MR_Box) (transform_hlds__untupling__Then_71));
#line 592 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 4) = ((MR_Box) (transform_hlds__untupling__Else_72));
#line 592 "untupling.m"
              }
#line 593 "untupling.m"
              {
#line 593 "untupling.m"
                MR_Word base;
#line 593 "untupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "untupling.m"
                *transform_hlds__untupling__Goal_10 = base;
#line 593 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_122));
#line 593 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 593 "untupling.m"
              }
#line 585 "untupling.m"
            }
#line 512 "untupling.m"
            break;
#line 512 "untupling.m"
          case (MR_Integer) 7:
#line 595 "untupling.m"
            {
#line 597 "untupling.m"
              {
#line 597 "untupling.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "shorthand");
#line 597 "untupling.m"
                return;
              }
#line 595 "untupling.m"
            }
#line 512 "untupling.m"
            break;
#line 512 "untupling.m"
        }
#line 512 "untupling.m"
        break;
#line 512 "untupling.m"
    }
#line 504 "untupling.m"
  }
#line 500 "untupling.m"
}

#line 472 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
#line 472 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_6,
#line 472 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_7,
#line 472 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_8,
#line 472 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18,
#line 472 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19)
#line 472 "untupling.m"
{
#line 478 "untupling.m"
  {
#line 478 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 478 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_11;
#line 478 "untupling.m"
    MR_Word transform_hlds__untupling__Goal0_12;
#line 478 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes0_13;
#line 478 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet0_14;
#line 478 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_15;
#line 478 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_16;
#line 478 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_17;
#line 478 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20;

#line 477 "untupling.m"
    {
#line 477 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__untupling__PredId_7, transform_hlds__untupling__ProcId_8, &transform_hlds__untupling__PredInfo_11, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20);
    }
#line 479 "untupling.m"
    {
#line 479 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__Goal0_12);
    }
#line 480 "untupling.m"
    {
#line 480 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__VarTypes0_13);
    }
#line 481 "untupling.m"
    {
#line 481 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__VarSet0_14);
    }
#line 482 "untupling.m"
    {
#line 482 "untupling.m"
      transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_12, &transform_hlds__untupling__Goal_15, transform_hlds__untupling__VarSet0_14, &transform_hlds__untupling__VarSet_16, transform_hlds__untupling__VarTypes0_13, &transform_hlds__untupling__VarTypes_17, transform_hlds__untupling__TransformMap_6, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18);
    }
#line 484 "untupling.m"
    {
#line 484 "untupling.m"
      transform_hlds__untupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__untupling__Goal0_12, transform_hlds__untupling__Goal_15);
    }
#line 484 "untupling.m"
    transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 493 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 485 "untupling.m"
      {
#line 485 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21;
#line 485 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22;
#line 485 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23;
#line 485 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25;
#line 485 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_27;
#line 485 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28;

#line 485 "untupling.m"
        {
#line 485 "untupling.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__untupling__Goal_15, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21);
        }
#line 486 "untupling.m"
        {
#line 486 "untupling.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__untupling__VarSet_16, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22);
        }
#line 487 "untupling.m"
        {
#line 487 "untupling.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__untupling__VarTypes_17, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23);
        }
#line 488 "untupling.m"
        {
#line 488 "untupling.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25);
        }
#line 489 "untupling.m"
        {
#line 489 "untupling.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_27, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 491 "untupling.m"
        {
#line 491 "untupling.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__untupling__PredId_7, transform_hlds__untupling__ProcId_8, transform_hlds__untupling__PredInfo_11, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_27, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19);
#line 491 "untupling.m"
          return;
        }
#line 485 "untupling.m"
      }
#line 493 "untupling.m"
    else
#line 494 "untupling.m"
      *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18;
#line 478 "untupling.m"
  }
#line 472 "untupling.m"
}

#line 470 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
#line 470 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 470 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 470 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 470 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3)
#line 470 "untupling.m"
{
#line 470 "untupling.m"
  {
#line 470 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 470 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19;

#line 470 "untupling.m"
    {
#line 470 "untupling.m"
      transform_hlds__untupling__fix_calls_in_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
#line 470 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19));
#line 470 "untupling.m"
  }
#line 470 "untupling.m"
}

#line 464 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
#line 464 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_5,
#line 464 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_6,
#line 464 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10,
#line 464 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11)
#line 464 "untupling.m"
{
#line 467 "untupling.m"
  {
#line 467 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 467 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_8;
#line 467 "untupling.m"
    MR_Word transform_hlds__untupling__ProcIds_9;
#line 467 "untupling.m"
    MR_Word transform_hlds__untupling__V_12_12;
#line 470 "untupling.m"
    MR_Box transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11;

#line 468 "untupling.m"
    {
#line 468 "untupling.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__untupling__PredId_6, &transform_hlds__untupling__PredInfo_8);
    }
#line 469 "untupling.m"
    {
#line 469 "untupling.m"
      transform_hlds__untupling__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__untupling__PredInfo_8);
    }
#line 470 "untupling.m"
    {
#line 470 "untupling.m"
      transform_hlds__untupling__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 470 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_8[0]));
#line 470 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 1) = ((MR_Box) (transform_hlds__untupling__fix_calls_in_pred_4_p_0_1));
#line 470 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 470 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 3) = ((MR_Box) (transform_hlds__untupling__TransformMap_5));
#line 470 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 4) = ((MR_Box) (transform_hlds__untupling__PredId_6));
#line 470 "untupling.m"
    }
#line 470 "untupling.m"
    {
#line 470 "untupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__untupling__V_12_12, transform_hlds__untupling__ProcIds_9, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10)), &transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11);
    }
#line 470 "untupling.m"
    *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11);
#line 467 "untupling.m"
  }
#line 464 "untupling.m"
}

#line 404 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
#line 404 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_13,
#line 404 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_14,
#line 404 "untupling.m"
  MR_Word transform_hlds__untupling__PredInfo_15,
#line 404 "untupling.m"
  MR_Word transform_hlds__untupling__ProcInfo_16,
#line 404 "untupling.m"
  MR_Integer transform_hlds__untupling__Counter_17,
#line 404 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredId_18,
#line 404 "untupling.m"
  MR_Integer * transform_hlds__untupling__AuxProcId_19,
#line 404 "untupling.m"
  MR_Word * transform_hlds__untupling__CallAux_20,
#line 404 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredInfo_21,
#line 404 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxProcInfo_22,
#line 404 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51,
#line 404 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52)
#line 404 "untupling.m"
{
#line 411 "untupling.m"
  {
#line 411 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__AuxHeadVars_24;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_25;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo_27;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__InitialAuxInstMap_28;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__TVarSet_29;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_30;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__ClassContext_31;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__RttiVarMaps_32;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_33;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__InstVarSet_34;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__Markers_35;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__OrigOrigin_36;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__HasParallelConj_37;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__VarNameRemap_38;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__PredModule_39;
#line 411 "untupling.m"
    MR_String transform_hlds__untupling__PredName_40;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__PredOrFunc_41;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__Context_42;
#line 411 "untupling.m"
    MR_Integer transform_hlds__untupling__Line_43;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredSymName0_44;
#line 411 "untupling.m"
    MR_Integer transform_hlds__untupling__ProcNo_45;
#line 411 "untupling.m"
    MR_String transform_hlds__untupling__Suffix_46;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredSymName_47;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__Origin_48;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredProcId_50;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling__V_59_59;
#line 411 "untupling.m"
    MR_String transform_hlds__untupling__V_62_62;
#line 413 "untupling.m"
    MR_Word transform_hlds__untupling___GoalExpr_26;
#line 438 "untupling.m"
    MR_Word transform_hlds__untupling___ExtraArgs_49;

#line 412 "untupling.m"
    {
#line 412 "untupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__AuxHeadVars_24);
    }
#line 413 "untupling.m"
    {
#line 413 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__Goal_25);
    }
#line 413 "untupling.m"
    transform_hlds__untupling___GoalExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal_25, (MR_Integer) 0)));
#line 413 "untupling.m"
    transform_hlds__untupling__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal_25, (MR_Integer) 1)));
#line 414 "untupling.m"
    {
#line 414 "untupling.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__untupling__ProcInfo_16, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51, &transform_hlds__untupling__InitialAuxInstMap_28);
    }
#line 415 "untupling.m"
    {
#line 415 "untupling.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__TVarSet_29);
    }
#line 416 "untupling.m"
    {
#line 416 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__VarTypes_30);
    }
#line 417 "untupling.m"
    {
#line 417 "untupling.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__ClassContext_31);
    }
#line 418 "untupling.m"
    {
#line 418 "untupling.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__RttiVarMaps_32);
    }
#line 419 "untupling.m"
    {
#line 419 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__VarSet_33);
    }
#line 420 "untupling.m"
    {
#line 420 "untupling.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__InstVarSet_34);
    }
#line 421 "untupling.m"
    {
#line 421 "untupling.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__Markers_35);
    }
#line 422 "untupling.m"
    {
#line 422 "untupling.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__OrigOrigin_36);
    }
#line 423 "untupling.m"
    {
#line 423 "untupling.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__HasParallelConj_37);
    }
#line 424 "untupling.m"
    {
#line 424 "untupling.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__VarNameRemap_38);
    }
#line 426 "untupling.m"
    {
#line 426 "untupling.m"
      transform_hlds__untupling__PredModule_39 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 427 "untupling.m"
    {
#line 427 "untupling.m"
      transform_hlds__untupling__PredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 428 "untupling.m"
    {
#line 428 "untupling.m"
      transform_hlds__untupling__PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 429 "untupling.m"
    {
#line 429 "untupling.m"
      transform_hlds__untupling__Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__untupling__GoalInfo_27);
    }
#line 430 "untupling.m"
    {
#line 430 "untupling.m"
      mercury__term__context_line_2_p_0(transform_hlds__untupling__Context_42, &transform_hlds__untupling__Line_43);
    }
#line 431 "untupling.m"
    {
#line 431 "untupling.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__untupling__PredModule_39, (MR_String) "untupling", transform_hlds__untupling__PredOrFunc_41, transform_hlds__untupling__PredName_40, transform_hlds__untupling__Line_43, transform_hlds__untupling__Counter_17, &transform_hlds__untupling__AuxPredSymName0_44);
    }
#line 433 "untupling.m"
    {
#line 433 "untupling.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__untupling__ProcId_14, &transform_hlds__untupling__ProcNo_45);
    }
#line 434 "untupling.m"
    {
#line 434 "untupling.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_7[0], transform_hlds__untupling__ProcNo_45, &transform_hlds__untupling__V_62_62);
    }
#line 434 "untupling.m"
    {
#line 434 "untupling.m"
      transform_hlds__untupling__Suffix_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__untupling__V_62_62);
    }
#line 435 "untupling.m"
    {
#line 435 "untupling.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__untupling__AuxPredSymName0_44, transform_hlds__untupling__Suffix_46, &transform_hlds__untupling__AuxPredSymName_47);
    }
#line 437 "untupling.m"
    {
#line 437 "untupling.m"
      transform_hlds__untupling__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "untupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 437 "untupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_59_59, 1) = ((MR_Box) (transform_hlds__untupling__ProcNo_45));
#line 437 "untupling.m"
    }
#line 437 "untupling.m"
    {
#line 437 "untupling.m"
      transform_hlds__untupling__Origin_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 437 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 0) = ((MR_Box) (transform_hlds__untupling__V_59_59));
#line 437 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 1) = ((MR_Box) (transform_hlds__untupling__OrigOrigin_36));
#line 437 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 2) = ((MR_Box) (transform_hlds__untupling__PredId_13));
#line 437 "untupling.m"
    }
#line 438 "untupling.m"
    {
#line 438 "untupling.m"
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__untupling__Origin_48, transform_hlds__untupling__Goal_25, transform_hlds__untupling__CallAux_20, transform_hlds__untupling__AuxHeadVars_24, &transform_hlds__untupling___ExtraArgs_49, transform_hlds__untupling__InitialAuxInstMap_28, transform_hlds__untupling__AuxPredSymName_47, transform_hlds__untupling__TVarSet_29, transform_hlds__untupling__VarTypes_30, transform_hlds__untupling__ClassContext_31, transform_hlds__untupling__RttiVarMaps_32, transform_hlds__untupling__VarSet_33, transform_hlds__untupling__InstVarSet_34, transform_hlds__untupling__Markers_35, (MR_Integer) 1, transform_hlds__untupling__HasParallelConj_37, transform_hlds__untupling__VarNameRemap_38, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52, &transform_hlds__untupling__AuxPredProcId_50);
    }
#line 442 "untupling.m"
    *transform_hlds__untupling__AuxPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__AuxPredProcId_50, (MR_Integer) 0)));
#line 442 "untupling.m"
    *transform_hlds__untupling__AuxProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__AuxPredProcId_50, (MR_Integer) 1)));
#line 444 "untupling.m"
    {
#line 444 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(*transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52, *transform_hlds__untupling__AuxPredId_18, *transform_hlds__untupling__AuxProcId_19, transform_hlds__untupling__AuxPredInfo_21, transform_hlds__untupling__AuxProcInfo_22);
#line 444 "untupling.m"
      return;
    }
#line 411 "untupling.m"
  }
#line 404 "untupling.m"
}

#line 376 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
#line 376 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 376 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 376 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 376 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4)
#line 376 "untupling.m"
{
#line 379 "untupling.m"
  while (MR_TRUE)
#line 379 "untupling.m"
    {
#line 379 "untupling.m"
      /* tailcall optimized into a loop */
#line 379 "untupling.m"
      {
#line 379 "untupling.m"
        MR_bool transform_hlds__untupling__succeeded;

#line 379 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "untupling.m"
          if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "untupling.m"
            *transform_hlds__untupling__HeadVar__4_4 = transform_hlds__untupling__HeadVar__3_3;
#line 379 "untupling.m"
          else
#line 387 "untupling.m"
            {
#line 388 "untupling.m"
              {
#line 388 "untupling.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
#line 388 "untupling.m"
                return;
              }
#line 387 "untupling.m"
            }
#line 379 "untupling.m"
        else
#line 379 "untupling.m"
          {
#line 379 "untupling.m"
            MR_Word transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 379 "untupling.m"
            MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 379 "untupling.m"
            if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "untupling.m"
              {
#line 390 "untupling.m"
                {
#line 390 "untupling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
#line 390 "untupling.m"
                  return;
                }
#line 389 "untupling.m"
              }
#line 379 "untupling.m"
            else
#line 380 "untupling.m"
              {
#line 380 "untupling.m"
                MR_Word transform_hlds__untupling__NewVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "untupling.m"
                MR_Word transform_hlds__untupling__NewVarss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 381 "untupling.m"
                MR_Word transform_hlds__untupling__TypeInfo_40_40;
#line 381 "untupling.m"
                MR_Word transform_hlds__untupling__V_15_15;
#line 381 "untupling.m"
                MR_Word transform_hlds__untupling__V_37_37;

#line 381 "untupling.m"
                transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__NewVars_10)) == (MR_mktag((MR_Integer) 1)));
#line 381 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 381 "untupling.m"
                  {
#line 381 "untupling.m"
                    transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__NewVars_10, (MR_Integer) 0)));
#line 381 "untupling.m"
                    transform_hlds__untupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__NewVars_10, (MR_Integer) 1)));
#line 4398 "transform_hlds.untupling.c"
                    transform_hlds__untupling__TypeInfo_40_40 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
#line 381 "untupling.m"
                    {
#line 381 "untupling.m"
                      transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_40_40, ((MR_Box) (transform_hlds__untupling__V_39_39)), ((MR_Box) (transform_hlds__untupling__V_37_37)));
                    }
#line 381 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 381 "untupling.m"
                      transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "untupling.m"
                  }
#line 383 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 382 "untupling.m"
                  {
#line 382 "untupling.m"
                    /* direct tailcall eliminated */
#line 382 "untupling.m"
                    {
#line 382 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__V_38_38;
#line 382 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__2__tmp_copy_2 = transform_hlds__untupling__NewVarss_11;

#line 382 "untupling.m"
                      transform_hlds__untupling__HeadVar__2_2 = transform_hlds__untupling__HeadVar__2__tmp_copy_2;
#line 382 "untupling.m"
                      transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 382 "untupling.m"
                    }
#line 382 "untupling.m"
                    continue;
#line 382 "untupling.m"
                  }
#line 383 "untupling.m"
                else
#line 384 "untupling.m"
                  {
#line 384 "untupling.m"
                    MR_Word transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17;

#line 384 "untupling.m"
                    {
#line 384 "untupling.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], (MR_Word) &transform_hlds__untupling_scalar_common_2[1], ((MR_Box) (transform_hlds__untupling__V_39_39)), ((MR_Box) (transform_hlds__untupling__NewVars_10)), transform_hlds__untupling__HeadVar__3_3, &transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17);
                    }
#line 385 "untupling.m"
                    /* direct tailcall eliminated */
#line 385 "untupling.m"
                    {
#line 385 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__V_38_38;
#line 385 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__2__tmp_copy_2 = transform_hlds__untupling__NewVarss_11;
#line 385 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__3__tmp_copy_3 = transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17;

#line 385 "untupling.m"
                      transform_hlds__untupling__HeadVar__3_3 = transform_hlds__untupling__HeadVar__3__tmp_copy_3;
#line 385 "untupling.m"
                      transform_hlds__untupling__HeadVar__2_2 = transform_hlds__untupling__HeadVar__2__tmp_copy_2;
#line 385 "untupling.m"
                      transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 385 "untupling.m"
                    }
#line 385 "untupling.m"
                    continue;
#line 384 "untupling.m"
                  }
#line 380 "untupling.m"
              }
#line 379 "untupling.m"
          }
#line 379 "untupling.m"
      }
#line 379 "untupling.m"
      break;
#line 379 "untupling.m"
    }
#line 376 "untupling.m"
}

#line 352 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
#line 352 "untupling.m"
  MR_String transform_hlds__untupling__ParentName_1,
#line 352 "untupling.m"
  MR_Integer transform_hlds__untupling__Num_2,
#line 352 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 352 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 352 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5,
#line 352 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_6,
#line 352 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7,
#line 352 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_8)
#line 352 "untupling.m"
{
#line 356 "untupling.m"
  {
#line 356 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 356 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "untupling.m"
      {
#line 356 "untupling.m"
        *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 356 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_8 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7;
#line 356 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_6 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5;
#line 356 "untupling.m"
      }
#line 356 "untupling.m"
    else
#line 358 "untupling.m"
      {
#line 358 "untupling.m"
        MR_Word transform_hlds__untupling__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 358 "untupling.m"
        MR_Word transform_hlds__untupling__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 358 "untupling.m"
        MR_Word transform_hlds__untupling__NewVar_21;
#line 358 "untupling.m"
        MR_Word transform_hlds__untupling__NewVars_22;
#line 358 "untupling.m"
        MR_String transform_hlds__untupling__Name_25;
#line 358 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36;
#line 358 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37;
#line 358 "untupling.m"
        MR_Integer transform_hlds__untupling__V_38_38;
#line 358 "untupling.m"
        MR_String transform_hlds__untupling__V_43_43;
#line 358 "untupling.m"
        MR_Word transform_hlds__untupling__V_49_49 = (MR_Word) &transform_hlds__untupling_scalar_common_7[0];
#line 358 "untupling.m"
        MR_String transform_hlds__untupling__V_51_51;
#line 358 "untupling.m"
        MR_String transform_hlds__untupling__V_52_52;
#line 358 "untupling.m"
        MR_String transform_hlds__untupling__V_59_59;

#line 359 "untupling.m"
        {
#line 359 "untupling.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(transform_hlds__untupling__V_49_49, transform_hlds__untupling__Num_2, &transform_hlds__untupling__V_43_43);
        }
#line 359 "untupling.m"
        {
#line 359 "untupling.m"
          transform_hlds__untupling__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__untupling__V_43_43);
        }
#line 359 "untupling.m"
        {
#line 359 "untupling.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__untupling__V_49_49, transform_hlds__untupling__ParentName_1, &transform_hlds__untupling__V_52_52);
        }
#line 359 "untupling.m"
        {
#line 359 "untupling.m"
          transform_hlds__untupling__V_59_59 = mercury__string__f_43_43_2_f_0(transform_hlds__untupling__V_52_52, transform_hlds__untupling__V_51_51);
        }
#line 359 "untupling.m"
        {
#line 359 "untupling.m"
          transform_hlds__untupling__Name_25 = mercury__string__f_43_43_2_f_0((MR_String) "Untupled_", transform_hlds__untupling__V_59_59);
        }
#line 360 "untupling.m"
        {
#line 360 "untupling.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__Name_25, &transform_hlds__untupling__NewVar_21, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36);
        }
#line 361 "untupling.m"
        {
#line 361 "untupling.m"
          parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__untupling__NewVar_21, transform_hlds__untupling__Type_19, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37);
        }
#line 362 "untupling.m"
        transform_hlds__untupling__V_38_38 = (transform_hlds__untupling__Num_2 + (MR_Integer) 1);
#line 362 "untupling.m"
        {
#line 362 "untupling.m"
          transform_hlds__untupling__create_untuple_vars_8_p_0(transform_hlds__untupling__ParentName_1, transform_hlds__untupling__V_38_38, transform_hlds__untupling__Types_20, &transform_hlds__untupling__NewVars_22, transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36, transform_hlds__untupling__STATE_VARIABLE_VarSet_6, transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37, transform_hlds__untupling__STATE_VARIABLE_VarTypes_8);
        }
#line 357 "untupling.m"
        {
#line 357 "untupling.m"
          MR_Word base;
#line 357 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = base;
#line 357 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__NewVar_21));
#line 357 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__NewVars_22));
#line 357 "untupling.m"
        }
#line 358 "untupling.m"
      }
#line 356 "untupling.m"
  }
#line 352 "untupling.m"
}

#line 318 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 318 "untupling.m"
  MR_Word * transform_hlds__untupling__MaybeHeadVarsAndArgModes_15,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_30,
#line 318 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_31,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32,
#line 318 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_33,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34,
#line 318 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_35,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_19,
#line 318 "untupling.m"
  MR_Word * transform_hlds__untupling__ContainerTypes_20,
#line 318 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21)
#line 318 "untupling.m"
{
#line 326 "untupling.m"
  {
#line 326 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 326 "untupling.m"
    MR_Word transform_hlds__untupling__Type_22;
#line 326 "untupling.m"
    MR_Word transform_hlds__untupling__Expansion_23;

#line 327 "untupling.m"
    {
#line 327 "untupling.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34, transform_hlds__untupling__HeadVar0_13, &transform_hlds__untupling__Type_22);
    }
#line 328 "untupling.m"
    {
#line 328 "untupling.m"
      transform_hlds__untupling__expand_argument_5_p_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__Type_22, transform_hlds__untupling__ContainerTypes0_19, transform_hlds__untupling__TypeTable_21, &transform_hlds__untupling__Expansion_23);
    }
#line 346 "untupling.m"
    if ((transform_hlds__untupling__Expansion_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "untupling.m"
      {
#line 348 "untupling.m"
        *transform_hlds__untupling__MaybeHeadVarsAndArgModes_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "untupling.m"
        *transform_hlds__untupling__ContainerTypes_20 = transform_hlds__untupling__ContainerTypes0_19;
#line 347 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = transform_hlds__untupling__STATE_VARIABLE_Goal_0_30;
#line 347 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_33 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32;
#line 347 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_35 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34;
#line 347 "untupling.m"
      }
#line 346 "untupling.m"
    else
#line 330 "untupling.m"
      {
#line 330 "untupling.m"
        MR_Word transform_hlds__untupling__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_23, (MR_Integer) 0)));
#line 330 "untupling.m"
        MR_Word transform_hlds__untupling__NewTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_23, (MR_Integer) 1)));
#line 330 "untupling.m"
        MR_String transform_hlds__untupling__ParentName_26;
#line 330 "untupling.m"
        MR_Word transform_hlds__untupling__NewHeadVars_27;
#line 330 "untupling.m"
        MR_Word transform_hlds__untupling__NewArgModes_28;
#line 330 "untupling.m"
        MR_Integer transform_hlds__untupling__V_39_39;
#line 330 "untupling.m"
        MR_Word transform_hlds__untupling__V_40_40;
#line 336 "untupling.m"
        MR_Word transform_hlds__untupling__V_51_51;

#line 331 "untupling.m"
        {
#line 331 "untupling.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32, transform_hlds__untupling__HeadVar0_13, &transform_hlds__untupling__ParentName_26);
        }
#line 332 "untupling.m"
        {
#line 332 "untupling.m"
          transform_hlds__untupling__create_untuple_vars_8_p_0(transform_hlds__untupling__ParentName_26, (MR_Integer) 0, transform_hlds__untupling__NewTypes_25, &transform_hlds__untupling__NewHeadVars_27, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34, transform_hlds__untupling__STATE_VARIABLE_VarTypes_35);
        }
#line 334 "untupling.m"
        {
#line 334 "untupling.m"
          transform_hlds__untupling__V_39_39 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__NewHeadVars_27);
        }
#line 334 "untupling.m"
        {
#line 334 "untupling.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__V_39_39, ((MR_Box) (transform_hlds__untupling__ArgMode0_14)), &transform_hlds__untupling__NewArgModes_28);
        }
#line 335 "untupling.m"
        {
#line 335 "untupling.m"
          transform_hlds__untupling__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_40_40, 0) = ((MR_Box) (transform_hlds__untupling__NewHeadVars_27));
#line 335 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_40_40, 1) = ((MR_Box) (transform_hlds__untupling__NewArgModes_28));
#line 335 "untupling.m"
        }
#line 335 "untupling.m"
        {
#line 335 "untupling.m"
          MR_Word base;
#line 335 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 335 "untupling.m"
          *transform_hlds__untupling__MaybeHeadVarsAndArgModes_15 = base;
#line 335 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__V_40_40));
#line 335 "untupling.m"
        }
#line 336 "untupling.m"
        {
#line 336 "untupling.m"
          transform_hlds__untupling__V_51_51 = parse_tree__prog_mode__in_mode_0_f_0();
        }
#line 336 "untupling.m"
        {
#line 336 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__V_51_51);
        }
#line 339 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 337 "untupling.m"
          {
#line 337 "untupling.m"
            MR_Word transform_hlds__untupling__UnifGoal_29;
#line 337 "untupling.m"
            MR_Word transform_hlds__untupling__GoalListA_58;
#line 337 "untupling.m"
            MR_Word transform_hlds__untupling__GoalListB_59;
#line 337 "untupling.m"
            MR_Word transform_hlds__untupling__GoalList_60;
#line 337 "untupling.m"
            MR_Word transform_hlds__untupling__Determinism_61;
#line 337 "untupling.m"
            MR_Word transform_hlds__untupling__GoalInfo0_62;
#line 337 "untupling.m"
            MR_Word transform_hlds__untupling__GoalInfo_63;
#line 337 "untupling.m"
            MR_Word transform_hlds__untupling__V_64_64;

#line 337 "untupling.m"
            {
#line 337 "untupling.m"
              hlds__make_goal__construct_functor_4_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ConsId_24, transform_hlds__untupling__NewHeadVars_27, &transform_hlds__untupling__UnifGoal_29);
            }
#line 368 "untupling.m"
            {
#line 368 "untupling.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__UnifGoal_29, &transform_hlds__untupling__GoalListA_58);
            }
#line 369 "untupling.m"
            {
#line 369 "untupling.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__STATE_VARIABLE_Goal_0_30, &transform_hlds__untupling__GoalListB_59);
            }
#line 370 "untupling.m"
            {
#line 370 "untupling.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__GoalListA_58, transform_hlds__untupling__GoalListB_59, &transform_hlds__untupling__GoalList_60);
            }
#line 371 "untupling.m"
            {
#line 371 "untupling.m"
              hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__untupling__GoalList_60, &transform_hlds__untupling__Determinism_61);
            }
#line 372 "untupling.m"
            {
#line 372 "untupling.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__untupling__GoalInfo0_62);
            }
#line 373 "untupling.m"
            {
#line 373 "untupling.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__untupling__Determinism_61, transform_hlds__untupling__GoalInfo0_62, &transform_hlds__untupling__GoalInfo_63);
            }
#line 374 "untupling.m"
            {
#line 374 "untupling.m"
              transform_hlds__untupling__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 374 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 374 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 1) = ((MR_Box) ((MR_Integer) 0));
#line 374 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 2) = ((MR_Box) (transform_hlds__untupling__GoalList_60));
#line 374 "untupling.m"
            }
#line 374 "untupling.m"
            {
#line 374 "untupling.m"
              MR_Word base;
#line 374 "untupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = base;
#line 374 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__V_64_64));
#line 374 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_63));
#line 374 "untupling.m"
            }
#line 337 "untupling.m"
          }
#line 339 "untupling.m"
        else
#line 342 "untupling.m"
          {
#line 339 "untupling.m"
            MR_Word transform_hlds__untupling__V_52_52;

#line 339 "untupling.m"
            {
#line 339 "untupling.m"
              transform_hlds__untupling__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
            }
#line 339 "untupling.m"
            {
#line 339 "untupling.m"
              transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__V_52_52);
            }
#line 342 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 340 "untupling.m"
              {
#line 340 "untupling.m"
                MR_Word transform_hlds__untupling__UnifGoal_46;
#line 340 "untupling.m"
                MR_Word transform_hlds__untupling__GoalListA_70;
#line 340 "untupling.m"
                MR_Word transform_hlds__untupling__GoalListB_71;
#line 340 "untupling.m"
                MR_Word transform_hlds__untupling__GoalList_72;
#line 340 "untupling.m"
                MR_Word transform_hlds__untupling__Determinism_73;
#line 340 "untupling.m"
                MR_Word transform_hlds__untupling__GoalInfo0_74;
#line 340 "untupling.m"
                MR_Word transform_hlds__untupling__GoalInfo_75;
#line 340 "untupling.m"
                MR_Word transform_hlds__untupling__V_76_76;

#line 340 "untupling.m"
                {
#line 340 "untupling.m"
                  hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ConsId_24, transform_hlds__untupling__NewHeadVars_27, &transform_hlds__untupling__UnifGoal_46);
                }
#line 368 "untupling.m"
                {
#line 368 "untupling.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__STATE_VARIABLE_Goal_0_30, &transform_hlds__untupling__GoalListA_70);
                }
#line 369 "untupling.m"
                {
#line 369 "untupling.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__UnifGoal_46, &transform_hlds__untupling__GoalListB_71);
                }
#line 370 "untupling.m"
                {
#line 370 "untupling.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__GoalListA_70, transform_hlds__untupling__GoalListB_71, &transform_hlds__untupling__GoalList_72);
                }
#line 371 "untupling.m"
                {
#line 371 "untupling.m"
                  hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__untupling__GoalList_72, &transform_hlds__untupling__Determinism_73);
                }
#line 372 "untupling.m"
                {
#line 372 "untupling.m"
                  hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__untupling__GoalInfo0_74);
                }
#line 373 "untupling.m"
                {
#line 373 "untupling.m"
                  hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__untupling__Determinism_73, transform_hlds__untupling__GoalInfo0_74, &transform_hlds__untupling__GoalInfo_75);
                }
#line 374 "untupling.m"
                {
#line 374 "untupling.m"
                  transform_hlds__untupling__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 374 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 374 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 1) = ((MR_Box) ((MR_Integer) 0));
#line 374 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 2) = ((MR_Box) (transform_hlds__untupling__GoalList_72));
#line 374 "untupling.m"
                }
#line 374 "untupling.m"
                {
#line 374 "untupling.m"
                  MR_Word base;
#line 374 "untupling.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "untupling.m"
                  *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = base;
#line 374 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__V_76_76));
#line 374 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_75));
#line 374 "untupling.m"
                }
#line 340 "untupling.m"
              }
#line 342 "untupling.m"
            else
#line 343 "untupling.m"
              {
#line 343 "untupling.m"
                {
#line 343 "untupling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_one_arg_in_proc_2\'/12", (MR_String) "unsupported mode");
#line 343 "untupling.m"
                  return;
                }
#line 343 "untupling.m"
              }
#line 342 "untupling.m"
          }
#line 345 "untupling.m"
        {
#line 345 "untupling.m"
          MR_Word base;
#line 345 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "untupling.m"
          *transform_hlds__untupling__ContainerTypes_20 = base;
#line 345 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Type_22));
#line 345 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ContainerTypes0_19));
#line 345 "untupling.m"
        }
#line 330 "untupling.m"
      }
#line 326 "untupling.m"
  }
#line 318 "untupling.m"
}

#line 296 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 296 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 296 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_28,
#line 296 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_29,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30,
#line 296 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_31,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32,
#line 296 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_33,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_20,
#line 296 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21)
#line 296 "untupling.m"
{
#line 302 "untupling.m"
  {
#line 302 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 302 "untupling.m"
    MR_Word transform_hlds__untupling__MaybeHeadVarsAndArgModes_22;
#line 302 "untupling.m"
    MR_Word transform_hlds__untupling__ContainerTypes_23;
#line 302 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_34_34;
#line 302 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35;
#line 302 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36;

#line 303 "untupling.m"
    {
#line 303 "untupling.m"
      transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ArgMode0_14, &transform_hlds__untupling__MaybeHeadVarsAndArgModes_22, transform_hlds__untupling__STATE_VARIABLE_Goal_0_28, &transform_hlds__untupling__STATE_VARIABLE_Goal_34_34, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30, &transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36, transform_hlds__untupling__ContainerTypes0_20, &transform_hlds__untupling__ContainerTypes_23, transform_hlds__untupling__TypeTable_21);
    }
#line 312 "untupling.m"
    if ((transform_hlds__untupling__MaybeHeadVarsAndArgModes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "untupling.m"
      {
#line 314 "untupling.m"
        {
#line 314 "untupling.m"
          MR_Word base;
#line 314 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "untupling.m"
          *transform_hlds__untupling__HeadVars_15 = base;
#line 314 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__HeadVar0_13));
#line 314 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "untupling.m"
        }
#line 315 "untupling.m"
        {
#line 315 "untupling.m"
          MR_Word base;
#line 315 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "untupling.m"
          *transform_hlds__untupling__ArgModes_16 = base;
#line 315 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ArgMode0_14));
#line 315 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "untupling.m"
        }
#line 313 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Goal_29 = transform_hlds__untupling__STATE_VARIABLE_Goal_34_34;
#line 313 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_31 = transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35;
#line 313 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_33 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36;
#line 313 "untupling.m"
      }
#line 312 "untupling.m"
    else
#line 306 "untupling.m"
      {
#line 306 "untupling.m"
        MR_Word transform_hlds__untupling__HeadVars1_24;
#line 306 "untupling.m"
        MR_Word transform_hlds__untupling__ArgModes1_25;
#line 306 "untupling.m"
        MR_Word transform_hlds__untupling__ListOfHeadVars_26;
#line 306 "untupling.m"
        MR_Word transform_hlds__untupling__ListOfArgModes_27;
#line 306 "untupling.m"
        MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__MaybeHeadVarsAndArgModes_22, (MR_Integer) 0)));

#line 306 "untupling.m"
        transform_hlds__untupling__HeadVars1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_39_39, (MR_Integer) 0)));
#line 306 "untupling.m"
        transform_hlds__untupling__ArgModes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_39_39, (MR_Integer) 1)));
#line 307 "untupling.m"
        {
#line 307 "untupling.m"
          transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__HeadVars1_24, transform_hlds__untupling__ArgModes1_25, &transform_hlds__untupling__ListOfHeadVars_26, &transform_hlds__untupling__ListOfArgModes_27, transform_hlds__untupling__STATE_VARIABLE_Goal_34_34, transform_hlds__untupling__STATE_VARIABLE_Goal_29, transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35, transform_hlds__untupling__STATE_VARIABLE_VarSet_31, transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36, transform_hlds__untupling__STATE_VARIABLE_VarTypes_33, transform_hlds__untupling__ContainerTypes_23, transform_hlds__untupling__TypeTable_21);
        }
#line 310 "untupling.m"
        {
#line 310 "untupling.m"
          *transform_hlds__untupling__HeadVars_15 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ListOfHeadVars_26);
        }
#line 311 "untupling.m"
        {
#line 311 "untupling.m"
          *transform_hlds__untupling__ArgModes_16 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__ListOfArgModes_27);
        }
#line 306 "untupling.m"
      }
#line 302 "untupling.m"
  }
#line 296 "untupling.m"
}

#line 278 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 278 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 278 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__5_5,
#line 278 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__7_7,
#line 278 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__8_8,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__9_9,
#line 278 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__10_10,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_11,
#line 278 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_12)
#line 278 "untupling.m"
{
#line 283 "untupling.m"
  {
#line 283 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 283 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "untupling.m"
        {
#line 283 "untupling.m"
          *transform_hlds__untupling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "untupling.m"
          *transform_hlds__untupling__HeadVar__10_10 = transform_hlds__untupling__HeadVar__9_9;
#line 283 "untupling.m"
          *transform_hlds__untupling__HeadVar__8_8 = transform_hlds__untupling__HeadVar__7_7;
#line 283 "untupling.m"
          *transform_hlds__untupling__HeadVar__6_6 = transform_hlds__untupling__HeadVar__5_5;
#line 283 "untupling.m"
        }
#line 283 "untupling.m"
      else
#line 291 "untupling.m"
        {
#line 292 "untupling.m"
          {
#line 292 "untupling.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
#line 292 "untupling.m"
            return;
          }
#line 291 "untupling.m"
        }
#line 283 "untupling.m"
    else
#line 283 "untupling.m"
      {
#line 283 "untupling.m"
        MR_Word transform_hlds__untupling__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 283 "untupling.m"
        MR_Word transform_hlds__untupling__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 283 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "untupling.m"
          {
#line 294 "untupling.m"
            {
#line 294 "untupling.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
#line 294 "untupling.m"
              return;
            }
#line 293 "untupling.m"
          }
#line 283 "untupling.m"
        else
#line 286 "untupling.m"
          {
#line 286 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "untupling.m"
            MR_Word transform_hlds__untupling__HeadVar_28;
#line 286 "untupling.m"
            MR_Word transform_hlds__untupling__HeadVars_29;
#line 286 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode_30;
#line 286 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes_31;
#line 286 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_43_43;
#line 286 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44;
#line 286 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45;

#line 287 "untupling.m"
            {
#line 287 "untupling.m"
              transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(transform_hlds__untupling__V_86_86, transform_hlds__untupling__ArgMode0_26, &transform_hlds__untupling__HeadVar_28, &transform_hlds__untupling__ArgMode_30, transform_hlds__untupling__HeadVar__5_5, &transform_hlds__untupling__STATE_VARIABLE_Goal_43_43, transform_hlds__untupling__HeadVar__7_7, &transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44, transform_hlds__untupling__HeadVar__9_9, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45, transform_hlds__untupling__ContainerTypes_11, transform_hlds__untupling__TypeTable_12);
            }
#line 289 "untupling.m"
            {
#line 289 "untupling.m"
              transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__V_85_85, transform_hlds__untupling__ArgModes0_27, &transform_hlds__untupling__HeadVars_29, &transform_hlds__untupling__ArgModes_31, transform_hlds__untupling__STATE_VARIABLE_Goal_43_43, transform_hlds__untupling__HeadVar__6_6, transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44, transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45, transform_hlds__untupling__HeadVar__10_10, transform_hlds__untupling__ContainerTypes_11, transform_hlds__untupling__TypeTable_12);
            }
#line 285 "untupling.m"
            {
#line 285 "untupling.m"
              MR_Word base;
#line 285 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "untupling.m"
              *transform_hlds__untupling__HeadVar__3_3 = base;
#line 285 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__HeadVar_28));
#line 285 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__HeadVars_29));
#line 285 "untupling.m"
            }
#line 285 "untupling.m"
            {
#line 285 "untupling.m"
              MR_Word base;
#line 285 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "untupling.m"
              *transform_hlds__untupling__HeadVar__4_4 = base;
#line 285 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ArgMode_30));
#line 285 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ArgModes_31));
#line 285 "untupling.m"
            }
#line 286 "untupling.m"
          }
#line 283 "untupling.m"
      }
#line 283 "untupling.m"
  }
#line 278 "untupling.m"
}

#line 261 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVars0_13,
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_14,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_17,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_29,
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_31,
#line 261 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_22,
#line 261 "untupling.m"
  MR_Word * transform_hlds__untupling__UntupleMap_23)
#line 261 "untupling.m"
{
#line 268 "untupling.m"
  {
#line 268 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 268 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_39_39;
#line 268 "untupling.m"
    MR_Word transform_hlds__untupling__GoalExpr_18;
#line 268 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo_19;
#line 268 "untupling.m"
    MR_Word transform_hlds__untupling__ListOfHeadVars_24;
#line 268 "untupling.m"
    MR_Word transform_hlds__untupling__ListOfArgModes_25;
#line 268 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo1_26;
#line 268 "untupling.m"
    MR_Word transform_hlds__untupling__Context_27;
#line 268 "untupling.m"
    MR_Word transform_hlds__untupling__V_32_32;
#line 268 "untupling.m"
    MR_Word transform_hlds__untupling__V_36_36;
#line 268 "untupling.m"
    MR_Word transform_hlds__untupling__V_37_37;
#line 272 "untupling.m"
    MR_Word transform_hlds__untupling__V_38_38;

#line 269 "untupling.m"
    {
#line 269 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__HeadVars0_13, transform_hlds__untupling__ArgModes0_14, &transform_hlds__untupling__ListOfHeadVars_24, &transform_hlds__untupling__ListOfArgModes_25, transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__V_32_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28, transform_hlds__untupling__STATE_VARIABLE_VarSet_29, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30, transform_hlds__untupling__STATE_VARIABLE_VarTypes_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__untupling__TypeTable_22);
    }
#line 270 "untupling.m"
    transform_hlds__untupling__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_32_32, (MR_Integer) 0)));
#line 270 "untupling.m"
    transform_hlds__untupling__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_32_32, (MR_Integer) 1)));
#line 272 "untupling.m"
    transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_17, (MR_Integer) 0)));
#line 272 "untupling.m"
    transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_17, (MR_Integer) 1)));
#line 272 "untupling.m"
    {
#line 272 "untupling.m"
      transform_hlds__untupling__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__untupling__V_36_36);
    }
#line 273 "untupling.m"
    {
#line 273 "untupling.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(transform_hlds__untupling__Context_27, transform_hlds__untupling__GoalInfo1_26, &transform_hlds__untupling__GoalInfo_19);
    }
#line 267 "untupling.m"
    {
#line 267 "untupling.m"
      MR_Word base;
#line 267 "untupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "untupling.m"
      *transform_hlds__untupling__HeadVar__6_6 = base;
#line 267 "untupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_18));
#line 267 "untupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_19));
#line 267 "untupling.m"
    }
#line 5352 "transform_hlds.untupling.c"
    transform_hlds__untupling__TypeInfo_39_39 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
#line 274 "untupling.m"
    {
#line 274 "untupling.m"
      mercury__list__condense_2_p_0(transform_hlds__untupling__TypeInfo_39_39, transform_hlds__untupling__ListOfHeadVars_24, transform_hlds__untupling__HeadVars_15);
    }
#line 275 "untupling.m"
    {
#line 275 "untupling.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__ListOfArgModes_25, transform_hlds__untupling__ArgModes_16);
    }
#line 276 "untupling.m"
    {
#line 276 "untupling.m"
      transform_hlds__untupling__V_37_37 = mercury__map__init_0_f_0(transform_hlds__untupling__TypeInfo_39_39, (MR_Word) &transform_hlds__untupling_scalar_common_2[1]);
    }
#line 276 "untupling.m"
    {
#line 276 "untupling.m"
      transform_hlds__untupling__build_untuple_map_4_p_0(transform_hlds__untupling__HeadVars0_13, transform_hlds__untupling__ListOfHeadVars_24, transform_hlds__untupling__V_37_37, transform_hlds__untupling__UntupleMap_23);
#line 276 "untupling.m"
      return;
    }
#line 268 "untupling.m"
  }
#line 261 "untupling.m"
}

#line 218 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
#line 218 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_9,
#line 218 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_10,
#line 218 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35,
#line 218 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36,
#line 218 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37,
#line 218 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_38,
#line 218 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_39,
#line 218 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_40)
#line 218 "untupling.m"
{
#line 224 "untupling.m"
  {
#line 224 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__TypeTable_15;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo0_16;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVars0_17;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__ArgModes0_18;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__Goal0_19;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes0_20;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet0_21;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVars_22;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__ArgModes_23;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_24;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_25;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_26;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__UntupleMap_27;
#line 224 "untupling.m"
    MR_Integer transform_hlds__untupling__Num_28;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredId_29;
#line 224 "untupling.m"
    MR_Integer transform_hlds__untupling__AuxProcId_30;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__CallAux_31;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredInfo_32;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__AuxProcInfo0_33;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__AuxProcInfo_34;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__V_54_54;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__V_55_55;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__V_57_57;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__V_58_58;
#line 224 "untupling.m"
    MR_Word transform_hlds__untupling__V_60_60;

#line 224 "untupling.m"
    {
#line 224 "untupling.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__untupling__TypeTable_15);
    }
#line 225 "untupling.m"
    {
#line 225 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__untupling__PredId_9, transform_hlds__untupling__ProcId_10, &transform_hlds__untupling__PredInfo0_16, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41);
    }
#line 228 "untupling.m"
    {
#line 228 "untupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__HeadVars0_17);
    }
#line 229 "untupling.m"
    {
#line 229 "untupling.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__ArgModes0_18);
    }
#line 230 "untupling.m"
    {
#line 230 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__Goal0_19);
    }
#line 231 "untupling.m"
    {
#line 231 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__VarTypes0_20);
    }
#line 232 "untupling.m"
    {
#line 232 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__VarSet0_21);
    }
#line 234 "untupling.m"
    {
#line 234 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_2_12_p_0(transform_hlds__untupling__HeadVars0_17, transform_hlds__untupling__ArgModes0_18, &transform_hlds__untupling__HeadVars_22, &transform_hlds__untupling__ArgModes_23, transform_hlds__untupling__Goal0_19, &transform_hlds__untupling__Goal_24, transform_hlds__untupling__VarSet0_21, &transform_hlds__untupling__VarSet_25, transform_hlds__untupling__VarTypes0_20, &transform_hlds__untupling__VarTypes_26, transform_hlds__untupling__TypeTable_15, &transform_hlds__untupling__UntupleMap_27);
    }
#line 238 "untupling.m"
    {
#line 238 "untupling.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__untupling__HeadVars_22, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42);
    }
#line 239 "untupling.m"
    {
#line 239 "untupling.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__untupling__ArgModes_23, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 240 "untupling.m"
    {
#line 240 "untupling.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__untupling__Goal_24, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44);
    }
#line 241 "untupling.m"
    {
#line 241 "untupling.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__untupling__VarSet_25, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45);
    }
#line 242 "untupling.m"
    {
#line 242 "untupling.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__untupling__VarTypes_26, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 243 "untupling.m"
    {
#line 243 "untupling.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48);
    }
#line 244 "untupling.m"
    {
#line 244 "untupling.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51);
    }
#line 247 "untupling.m"
    {
#line 247 "untupling.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__untupling__Num_28, transform_hlds__untupling__STATE_VARIABLE_Counter_0_39, transform_hlds__untupling__STATE_VARIABLE_Counter_40);
    }
#line 248 "untupling.m"
    {
#line 248 "untupling.m"
      transform_hlds__untupling__create_aux_pred_12_p_0(transform_hlds__untupling__PredId_9, transform_hlds__untupling__ProcId_10, transform_hlds__untupling__PredInfo0_16, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__untupling__Num_28, &transform_hlds__untupling__AuxPredId_29, &transform_hlds__untupling__AuxProcId_30, &transform_hlds__untupling__CallAux_31, &transform_hlds__untupling__AuxPredInfo_32, &transform_hlds__untupling__AuxProcInfo0_33, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53);
    }
#line 252 "untupling.m"
    transform_hlds__untupling__V_55_55 = (MR_Word) transform_hlds__untupling__UntupleMap_27;
#line 252 "untupling.m"
    {
#line 252 "untupling.m"
      transform_hlds__untupling__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 252 "untupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_54_54, 0) = ((MR_Box) (transform_hlds__untupling__V_55_55));
#line 252 "untupling.m"
    }
#line 251 "untupling.m"
    {
#line 251 "untupling.m"
      hlds__hlds_pred__proc_info_set_maybe_untuple_info_3_p_0(transform_hlds__untupling__V_54_54, transform_hlds__untupling__AuxProcInfo0_33, &transform_hlds__untupling__AuxProcInfo_34);
    }
#line 254 "untupling.m"
    {
#line 254 "untupling.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__untupling__AuxPredId_29, transform_hlds__untupling__AuxProcId_30, transform_hlds__untupling__AuxPredInfo_32, transform_hlds__untupling__AuxProcInfo_34, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36);
    }
#line 256 "untupling.m"
    {
#line 256 "untupling.m"
      transform_hlds__untupling__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_57_57, 0) = ((MR_Box) (transform_hlds__untupling__PredId_9));
#line 256 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_57_57, 1) = ((MR_Box) (transform_hlds__untupling__ProcId_10));
#line 256 "untupling.m"
    }
#line 257 "untupling.m"
    {
#line 257 "untupling.m"
      transform_hlds__untupling__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, 0) = ((MR_Box) (transform_hlds__untupling__AuxPredId_29));
#line 257 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, 1) = ((MR_Box) (transform_hlds__untupling__AuxProcId_30));
#line 257 "untupling.m"
    }
#line 257 "untupling.m"
    {
#line 257 "untupling.m"
      transform_hlds__untupling__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_58_58, 0) = ((MR_Box) (transform_hlds__untupling__V_60_60));
#line 257 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_58_58, 1) = ((MR_Box) (transform_hlds__untupling__CallAux_31));
#line 257 "untupling.m"
    }
#line 256 "untupling.m"
    {
#line 256 "untupling.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, ((MR_Box) (transform_hlds__untupling__V_57_57)), ((MR_Box) (transform_hlds__untupling__V_58_58)), transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37, transform_hlds__untupling__STATE_VARIABLE_TransformMap_38);
#line 256 "untupling.m"
      return;
    }
#line 224 "untupling.m"
  }
#line 218 "untupling.m"
}

#line 767 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
#line 767 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 767 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1)
#line 767 "untupling.m"
{
#line 767 "untupling.m"
  {
#line 767 "untupling.m"
    MR_Box transform_hlds__untupling__wrapper_arg_2;
#line 767 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 767 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_HeadVar__2_29;

#line 767 "untupling.m"
    {
#line 767 "untupling.m"
      transform_hlds__untupling__conv0_HeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__767__1_1_f_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1));
    }
#line 767 "untupling.m"
    transform_hlds__untupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__2_29));
#line 767 "untupling.m"
    return transform_hlds__untupling__wrapper_arg_2;
#line 767 "untupling.m"
  }
#line 767 "untupling.m"
}

#line 200 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
#line 200 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 200 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_5)
#line 200 "untupling.m"
{
#line 203 "untupling.m"
  while (MR_TRUE)
#line 203 "untupling.m"
    {
#line 203 "untupling.m"
      /* tailcall optimized into a loop */
#line 203 "untupling.m"
      {
#line 203 "untupling.m"
        MR_bool transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 203 "untupling.m"
        MR_Word transform_hlds__untupling__Type_3;
#line 203 "untupling.m"
        MR_Word transform_hlds__untupling__Types_4;

#line 203 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 203 "untupling.m"
          {
#line 203 "untupling.m"
            transform_hlds__untupling__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 203 "untupling.m"
            transform_hlds__untupling__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "untupling.m"
            {
#line 204 "untupling.m"
              MR_Word transform_hlds__untupling__V_10_10;
#line 750 "untupling.m"
              MR_Word transform_hlds__untupling__TypeArgs_16;
#line 744 "untupling.m"
              MR_Word transform_hlds__untupling__TypeCtor_15;
#line 204 "untupling.m"
              MR_Word transform_hlds__untupling__V_78_78;
#line 204 "untupling.m"
              MR_Word transform_hlds__untupling__V_79_79;

#line 744 "untupling.m"
              {
#line 744 "untupling.m"
                transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__Type_3, &transform_hlds__untupling__TypeCtor_15, &transform_hlds__untupling__TypeArgs_16);
              }
#line 744 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 745 "untupling.m"
                {
#line 745 "untupling.m"
                  transform_hlds__untupling__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__untupling__TypeCtor_15);
                }
#line 750 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 747 "untupling.m"
                {
#line 747 "untupling.m"
                  MR_Integer transform_hlds__untupling__Arity_17;
#line 747 "untupling.m"
                  MR_Word transform_hlds__untupling__ConsId_18;

#line 747 "untupling.m"
                  {
#line 747 "untupling.m"
                    transform_hlds__untupling__Arity_17 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__TypeArgs_16);
                  }
#line 748 "untupling.m"
                  {
#line 748 "untupling.m"
                    transform_hlds__untupling__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 748 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_18, 1) = ((MR_Box) (transform_hlds__untupling__Arity_17));
#line 748 "untupling.m"
                  }
#line 749 "untupling.m"
                  {
#line 749 "untupling.m"
                    transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_18));
#line 749 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 1) = ((MR_Box) (transform_hlds__untupling__TypeArgs_16));
#line 749 "untupling.m"
                  }
#line 747 "untupling.m"
                }
#line 750 "untupling.m"
              else
#line 769 "untupling.m"
                {
#line 769 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtorName_22;
#line 769 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtorArgs_23;
#line 769 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtor_39;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeInfo_68_74;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeInfo_69_75;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeDefn_19;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeBody_20;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtor_21;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_29_29;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_30_30;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_31_31;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_32_32;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_72_72;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_73_73;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_42_42;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_43_43;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_44_44;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_45_45;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_46_46;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_47_47;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_48_48;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_49_49;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__V_50_50;
#line 758 "untupling.m"
                  MR_Integer transform_hlds__untupling__V_53_53;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__V_54_54;
#line 761 "untupling.m"
                  MR_Word transform_hlds__untupling__V_24_24;
#line 761 "untupling.m"
                  MR_Word transform_hlds__untupling__V_25_25;
#line 763 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtorInfo_63_69;

#line 753 "untupling.m"
                  {
#line 753 "untupling.m"
                    transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__Type_3, &transform_hlds__untupling__TypeCtor_39, &transform_hlds__untupling__V_72_72);
                  }
#line 753 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                    {
#line 5819 "transform_hlds.untupling.c"
                      transform_hlds__untupling__TypeInfo_68_74 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 753 "untupling.m"
                      {
#line 753 "untupling.m"
                        transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_68_74, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__untupling__V_72_72)));
                      }
#line 753 "untupling.m"
                      if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                        {
#line 754 "untupling.m"
                          {
#line 754 "untupling.m"
                            transform_hlds__untupling__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__untupling__TypeTable_5, transform_hlds__untupling__TypeCtor_39, &transform_hlds__untupling__TypeDefn_19);
                          }
#line 753 "untupling.m"
                          if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                            {
#line 755 "untupling.m"
                              transform_hlds__untupling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "untupling.m"
                              {
#line 755 "untupling.m"
                                hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__untupling__TypeDefn_19, &transform_hlds__untupling__V_73_73);
                              }
#line 5846 "transform_hlds.untupling.c"
                              transform_hlds__untupling__TypeInfo_69_75 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 755 "untupling.m"
                              {
#line 755 "untupling.m"
                                transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_69_75, ((MR_Box) (transform_hlds__untupling__V_29_29)), ((MR_Box) (transform_hlds__untupling__V_73_73)));
                              }
#line 753 "untupling.m"
                              if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                                {
#line 756 "untupling.m"
                                  {
#line 756 "untupling.m"
                                    hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__untupling__TypeDefn_19, &transform_hlds__untupling__TypeBody_20);
                                  }
#line 757 "untupling.m"
                                  transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__TypeBody_20)) == (MR_mktag((MR_Integer) 1)));
#line 757 "untupling.m"
                                  if (transform_hlds__untupling__succeeded)
#line 757 "untupling.m"
                                    {
#line 757 "untupling.m"
                                      transform_hlds__untupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 0)));
#line 757 "untupling.m"
                                      transform_hlds__untupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 1)));
#line 757 "untupling.m"
                                      transform_hlds__untupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 2)));
#line 757 "untupling.m"
                                      transform_hlds__untupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 3)));
#line 757 "untupling.m"
                                      transform_hlds__untupling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 4)));
#line 757 "untupling.m"
                                      transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 5)));
#line 757 "untupling.m"
                                      transform_hlds__untupling__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 757 "untupling.m"
                                      transform_hlds__untupling__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 757 "untupling.m"
                                      transform_hlds__untupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 7)));
#line 757 "untupling.m"
                                      transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 757 "untupling.m"
                                      if (transform_hlds__untupling__succeeded)
#line 757 "untupling.m"
                                        {
#line 757 "untupling.m"
                                          transform_hlds__untupling__SingleCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_30_30, (MR_Integer) 0)));
#line 757 "untupling.m"
                                          transform_hlds__untupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_30_30, (MR_Integer) 1)));
#line 757 "untupling.m"
                                          transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "untupling.m"
                                          if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                                            {
#line 758 "untupling.m"
                                              transform_hlds__untupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 0)));
#line 758 "untupling.m"
                                              transform_hlds__untupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 1)));
#line 758 "untupling.m"
                                              transform_hlds__untupling__SingleCtorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 2)));
#line 758 "untupling.m"
                                              transform_hlds__untupling__SingleCtorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 3)));
#line 758 "untupling.m"
                                              transform_hlds__untupling__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 4)));
#line 758 "untupling.m"
                                              transform_hlds__untupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 5)));
#line 758 "untupling.m"
                                              transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "untupling.m"
                                              if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                                                {
#line 761 "untupling.m"
                                                  transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__SingleCtorArgs_23)) == (MR_mktag((MR_Integer) 1)));
#line 761 "untupling.m"
                                                  if (transform_hlds__untupling__succeeded)
#line 761 "untupling.m"
                                                    {
#line 761 "untupling.m"
                                                      transform_hlds__untupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_23, (MR_Integer) 0)));
#line 761 "untupling.m"
                                                      transform_hlds__untupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_23, (MR_Integer) 1)));
#line 5930 "transform_hlds.untupling.c"
                                                      transform_hlds__untupling__TypeCtorInfo_63_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 763 "untupling.m"
                                                      {
#line 763 "untupling.m"
                                                        transform_hlds__untupling__succeeded = mercury__list__member_2_p_0(transform_hlds__untupling__TypeCtorInfo_63_69, ((MR_Box) (transform_hlds__untupling__Type_3)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                      }
#line 763 "untupling.m"
                                                      transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 761 "untupling.m"
                                                    }
#line 753 "untupling.m"
                                                }
#line 753 "untupling.m"
                                            }
#line 757 "untupling.m"
                                        }
#line 757 "untupling.m"
                                    }
#line 753 "untupling.m"
                                }
#line 753 "untupling.m"
                            }
#line 753 "untupling.m"
                        }
#line 753 "untupling.m"
                    }
#line 769 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 765 "untupling.m"
                    {
#line 765 "untupling.m"
                      MR_Word transform_hlds__untupling__TypeCtorInfo_64_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 765 "untupling.m"
                      MR_Word transform_hlds__untupling__ExpandedTypes_26;
#line 765 "untupling.m"
                      MR_Integer transform_hlds__untupling__Arity_37;
#line 765 "untupling.m"
                      MR_Word transform_hlds__untupling__ConsId_38;

#line 765 "untupling.m"
                      {
#line 765 "untupling.m"
                        transform_hlds__untupling__Arity_37 = mercury__list__length_1_f_0(transform_hlds__untupling__TypeCtorInfo_64_70, transform_hlds__untupling__SingleCtorArgs_23);
                      }
#line 766 "untupling.m"
                      {
#line 766 "untupling.m"
                        transform_hlds__untupling__ConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 766 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 766 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 1) = ((MR_Box) (transform_hlds__untupling__SingleCtorName_22));
#line 766 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 2) = ((MR_Box) (transform_hlds__untupling__Arity_37));
#line 766 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 3) = ((MR_Box) (transform_hlds__untupling__TypeCtor_39));
#line 766 "untupling.m"
                      }
#line 767 "untupling.m"
                      {
#line 767 "untupling.m"
                        transform_hlds__untupling__ExpandedTypes_26 = mercury__list__map_2_f_0(transform_hlds__untupling__TypeCtorInfo_64_70, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[3], transform_hlds__untupling__SingleCtorArgs_23);
                      }
#line 768 "untupling.m"
                      {
#line 768 "untupling.m"
                        transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "untupling.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_38));
#line 768 "untupling.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 1) = ((MR_Box) (transform_hlds__untupling__ExpandedTypes_26));
#line 768 "untupling.m"
                      }
#line 765 "untupling.m"
                    }
#line 769 "untupling.m"
                  else
#line 770 "untupling.m"
                    transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 769 "untupling.m"
                }
#line 204 "untupling.m"
              transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 204 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 204 "untupling.m"
                {
#line 204 "untupling.m"
                  transform_hlds__untupling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, (MR_Integer) 0)));
#line 204 "untupling.m"
                  transform_hlds__untupling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, (MR_Integer) 1)));
#line 204 "untupling.m"
                }
#line 204 "untupling.m"
            }
#line 205 "untupling.m"
            if (!(transform_hlds__untupling__succeeded))
#line 205 "untupling.m"
              {
#line 205 "untupling.m"
                /* direct tailcall eliminated */
#line 205 "untupling.m"
                {
#line 205 "untupling.m"
                  MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__Types_4;

#line 205 "untupling.m"
                  transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 205 "untupling.m"
                }
#line 205 "untupling.m"
                continue;
#line 205 "untupling.m"
              }
#line 203 "untupling.m"
          }
#line 203 "untupling.m"
        return transform_hlds__untupling__succeeded;
#line 203 "untupling.m"
      }
#line 203 "untupling.m"
      break;
#line 203 "untupling.m"
    }
#line 200 "untupling.m"
}

#line 194 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
#line 194 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 194 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 194 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 194 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 194 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 194 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 194 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 194 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7)
#line 194 "untupling.m"
{
#line 194 "untupling.m"
  {
#line 194 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 194 "untupling.m"
    MR_Word transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36;
#line 194 "untupling.m"
    MR_Word transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38;
#line 194 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40;

#line 194 "untupling.m"
    {
#line 194 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36, ((MR_Word) transform_hlds__untupling__wrapper_arg_4), &transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38, ((MR_Word) transform_hlds__untupling__wrapper_arg_6), &transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40);
    }
#line 194 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36));
#line 194 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38));
#line 194 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40));
#line 194 "untupling.m"
  }
#line 194 "untupling.m"
}

#line 170 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
#line 170 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_8,
#line 170 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20,
#line 170 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21,
#line 170 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22,
#line 170 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_23,
#line 170 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_24,
#line 170 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_25)
#line 170 "untupling.m"
{
#line 173 "untupling.m"
  {
#line 173 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 173 "untupling.m"
    MR_Word transform_hlds__untupling__TypeTable_12;
#line 173 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_13;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__TypeCtorInfo_38_38;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_56_56;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_57_57;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__ImportStatus_14;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__TypeVarSet_16;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__ExistQVars_17;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__ArgTypes_18;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_26_26;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_27_27;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_28_28;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_29_29;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_30_30;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_31_31;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_32_32;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_33_33;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_50_50;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_51_51;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_52_52;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_53_53;
#line 179 "untupling.m"
    MR_Word transform_hlds__untupling__V_54_54;
#line 187 "untupling.m"
    MR_Word transform_hlds__untupling__V_15_15;

#line 174 "untupling.m"
    {
#line 174 "untupling.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__untupling__TypeTable_12);
    }
#line 175 "untupling.m"
    {
#line 175 "untupling.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__untupling__PredId_8, &transform_hlds__untupling__PredInfo_13);
    }
#line 179 "untupling.m"
    {
#line 179 "untupling.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__ImportStatus_14);
    }
#line 180 "untupling.m"
    {
#line 180 "untupling.m"
      transform_hlds__untupling__V_26_26 = parse_tree__status__status_defined_in_this_module_1_f_0(transform_hlds__untupling__ImportStatus_14);
    }
#line 180 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_26_26 == (MR_Integer) 1);
#line 179 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 179 "untupling.m"
      {
#line 181 "untupling.m"
        transform_hlds__untupling__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "untupling.m"
        {
#line 181 "untupling.m"
          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_50_50);
        }
#line 181 "untupling.m"
        {
#line 181 "untupling.m"
          transform_hlds__untupling__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(transform_hlds__untupling__V_27_27, transform_hlds__untupling__V_50_50);
        }
#line 179 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 179 "untupling.m"
          {
#line 184 "untupling.m"
            transform_hlds__untupling__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "untupling.m"
            {
#line 184 "untupling.m"
              hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_51_51);
            }
#line 6225 "transform_hlds.untupling.c"
            transform_hlds__untupling__TypeInfo_56_56 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 184 "untupling.m"
            {
#line 184 "untupling.m"
              transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_56_56, ((MR_Box) (transform_hlds__untupling__V_28_28)), ((MR_Box) (transform_hlds__untupling__V_51_51)));
            }
#line 179 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 179 "untupling.m"
              {
#line 185 "untupling.m"
                transform_hlds__untupling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "untupling.m"
                {
#line 185 "untupling.m"
                  hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_52_52);
                }
#line 6243 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeInfo_57_57 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 185 "untupling.m"
                {
#line 185 "untupling.m"
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_57_57, ((MR_Box) (transform_hlds__untupling__V_29_29)), ((MR_Box) (transform_hlds__untupling__V_52_52)));
                }
#line 179 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 179 "untupling.m"
                  {
#line 186 "untupling.m"
                    transform_hlds__untupling__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 186 "untupling.m"
                    transform_hlds__untupling__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 186 "untupling.m"
                    transform_hlds__untupling__V_30_30 = (MR_Word) &transform_hlds__untupling_scalar_common_2[5];
#line 186 "untupling.m"
                    {
#line 186 "untupling.m"
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_53_53);
                    }
#line 186 "untupling.m"
                    {
#line 186 "untupling.m"
                      transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(transform_hlds__untupling__V_30_30, transform_hlds__untupling__V_53_53);
                    }
#line 179 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 179 "untupling.m"
                      {
#line 187 "untupling.m"
                        {
#line 187 "untupling.m"
                          transform_hlds__untupling__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "untupling.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 187 "untupling.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_33_33, 1) = NULL;
#line 187 "untupling.m"
                        }
#line 187 "untupling.m"
                        {
#line 187 "untupling.m"
                          hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_54_54);
                        }
#line 187 "untupling.m"
                        {
#line 187 "untupling.m"
                          transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(transform_hlds__untupling__V_33_33, transform_hlds__untupling__V_54_54);
                        }
#line 179 "untupling.m"
                        if (transform_hlds__untupling__succeeded)
#line 179 "untupling.m"
                          {
#line 188 "untupling.m"
                            {
#line 188 "untupling.m"
                              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__TypeVarSet_16, &transform_hlds__untupling__ExistQVars_17, &transform_hlds__untupling__ArgTypes_18);
                            }
#line 6303 "transform_hlds.untupling.c"
                            transform_hlds__untupling__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 189 "untupling.m"
                            {
#line 189 "untupling.m"
                              transform_hlds__untupling__succeeded = mercury__varset__is_empty_1_p_0(transform_hlds__untupling__TypeCtorInfo_38_38, transform_hlds__untupling__TypeVarSet_16);
                            }
#line 179 "untupling.m"
                            if (transform_hlds__untupling__succeeded)
#line 179 "untupling.m"
                              {
#line 190 "untupling.m"
                                transform_hlds__untupling__succeeded = (transform_hlds__untupling__ExistQVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 179 "untupling.m"
                                if (transform_hlds__untupling__succeeded)
#line 191 "untupling.m"
                                  {
#line 191 "untupling.m"
                                    transform_hlds__untupling__succeeded = transform_hlds__untupling__at_least_one_expandable_type_2_p_0(transform_hlds__untupling__ArgTypes_18, transform_hlds__untupling__TypeTable_12);
                                  }
#line 179 "untupling.m"
                              }
#line 179 "untupling.m"
                          }
#line 179 "untupling.m"
                      }
#line 179 "untupling.m"
                  }
#line 179 "untupling.m"
              }
#line 179 "untupling.m"
          }
#line 179 "untupling.m"
      }
#line 196 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 193 "untupling.m"
      {
#line 193 "untupling.m"
        MR_Word transform_hlds__untupling__ProcIds_19;
#line 193 "untupling.m"
        MR_Word transform_hlds__untupling__V_34_34;
#line 194 "untupling.m"
        MR_Box transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21;
#line 194 "untupling.m"
        MR_Box transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23;
#line 194 "untupling.m"
        MR_Box transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25;

#line 193 "untupling.m"
        {
#line 193 "untupling.m"
          transform_hlds__untupling__ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__untupling__PredInfo_13);
        }
#line 194 "untupling.m"
        {
#line 194 "untupling.m"
          transform_hlds__untupling__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 194 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_5[0]));
#line 194 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 1) = ((MR_Box) (transform_hlds__untupling__expand_args_in_pred_7_p_0_1));
#line 194 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 194 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 3) = ((MR_Box) (transform_hlds__untupling__PredId_8));
#line 194 "untupling.m"
        }
#line 194 "untupling.m"
        {
#line 194 "untupling.m"
          mercury__list__foldl3_8_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, transform_hlds__untupling__V_34_34, transform_hlds__untupling__ProcIds_19, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22)), &transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_Counter_0_24)), &transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25);
        }
#line 194 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21);
#line 194 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_TransformMap_23 = ((MR_Word) transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23);
#line 194 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Counter_25 = ((MR_Word) transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25);
#line 193 "untupling.m"
      }
#line 196 "untupling.m"
    else
#line 197 "untupling.m"
      {
#line 197 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Counter_25 = transform_hlds__untupling__STATE_VARIABLE_Counter_0_24;
#line 197 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_TransformMap_23 = transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22;
#line 197 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20;
#line 197 "untupling.m"
      }
#line 173 "untupling.m"
  }
#line 170 "untupling.m"
}

#line 462 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
#line 462 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 462 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 462 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 462 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3)
#line 462 "untupling.m"
{
#line 462 "untupling.m"
  {
#line 462 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 462 "untupling.m"
    MR_Word transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11;

#line 462 "untupling.m"
    {
#line 462 "untupling.m"
      transform_hlds__untupling__fix_calls_in_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11);
    }
#line 462 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11));
#line 462 "untupling.m"
  }
#line 462 "untupling.m"
}

#line 167 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
#line 167 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 167 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 167 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 167 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 167 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 167 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 167 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 167 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7)
#line 167 "untupling.m"
{
#line 167 "untupling.m"
  {
#line 167 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 167 "untupling.m"
    MR_Word transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21;
#line 167 "untupling.m"
    MR_Word transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23;
#line 167 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25;

#line 167 "untupling.m"
    {
#line 167 "untupling.m"
      transform_hlds__untupling__expand_args_in_pred_7_p_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21, ((MR_Word) transform_hlds__untupling__wrapper_arg_4), &transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23, ((MR_Word) transform_hlds__untupling__wrapper_arg_6), &transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25);
    }
#line 167 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21));
#line 167 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23));
#line 167 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25));
#line 167 "untupling.m"
  }
#line 167 "untupling.m"
}

#line 97 "untupling.m"
void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0(
#line 97 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8,
#line 97 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9)
#line 97 "untupling.m"
{
#line 148 "untupling.m"
  {
#line 148 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 148 "untupling.m"
    MR_Word transform_hlds__untupling__TransformMap_7;
#line 148 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12;
#line 148 "untupling.m"
    MR_Word transform_hlds__untupling__PredIds_18;
#line 148 "untupling.m"
    MR_Word transform_hlds__untupling__V_22_22;
#line 148 "untupling.m"
    MR_Word transform_hlds__untupling__V_23_23;
#line 148 "untupling.m"
    MR_Word transform_hlds__untupling__PredIds_42;
#line 148 "untupling.m"
    MR_Word transform_hlds__untupling__V_43_43;
#line 167 "untupling.m"
    MR_Word transform_hlds__untupling__V_19_19;
#line 167 "untupling.m"
    MR_Box transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12;
#line 167 "untupling.m"
    MR_Box transform_hlds__untupling__conv4_TransformMap_7;
#line 167 "untupling.m"
    MR_Box transform_hlds__untupling__conv3_V_19_19;
#line 462 "untupling.m"
    MR_Box transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9;

#line 166 "untupling.m"
    {
#line 166 "untupling.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__untupling__PredIds_18);
    }
#line 168 "untupling.m"
    {
#line 168 "untupling.m"
      transform_hlds__untupling__V_22_22 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0);
    }
#line 168 "untupling.m"
    {
#line 168 "untupling.m"
      transform_hlds__untupling__V_23_23 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 167 "untupling.m"
    {
#line 167 "untupling.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[2], transform_hlds__untupling__PredIds_18, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12, ((MR_Box) (transform_hlds__untupling__V_22_22)), &transform_hlds__untupling__conv4_TransformMap_7, ((MR_Box) (transform_hlds__untupling__V_23_23)), &transform_hlds__untupling__conv3_V_19_19);
    }
#line 167 "untupling.m"
    transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12);
#line 167 "untupling.m"
    transform_hlds__untupling__TransformMap_7 = ((MR_Word) transform_hlds__untupling__conv4_TransformMap_7);
#line 167 "untupling.m"
    transform_hlds__untupling__V_19_19 = ((MR_Word) transform_hlds__untupling__conv3_V_19_19);
#line 461 "untupling.m"
    {
#line 461 "untupling.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12, &transform_hlds__untupling__PredIds_42);
    }
#line 462 "untupling.m"
    {
#line 462 "untupling.m"
      transform_hlds__untupling__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 462 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_4[0]));
#line 462 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 1) = ((MR_Box) (transform_hlds__untupling__untuple_arguments_4_p_0_2));
#line 462 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 462 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 3) = ((MR_Box) (transform_hlds__untupling__TransformMap_7));
#line 462 "untupling.m"
    }
#line 462 "untupling.m"
    {
#line 462 "untupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__untupling__V_43_43, transform_hlds__untupling__PredIds_42, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12)), &transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9);
    }
#line 462 "untupling.m"
    *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9);
#line 148 "untupling.m"
  }
#line 97 "untupling.m"
}

void mercury__transform_hlds__untupling__init(void)
{
}

void mercury__transform_hlds__untupling__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_expansion_result_0);
	MR_register_type_ctor_info(&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transform_map_0);
	MR_register_type_ctor_info(&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0);
	MR_register_type_ctor_info(&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_untuple_map_0);
}

void mercury__transform_hlds__untupling__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.untupling. */
