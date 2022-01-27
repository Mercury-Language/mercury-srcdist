/*
** Automatically generated from `untupling.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "tree_bitset.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 145 "transform_hlds.untupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0;

#line 148 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 151 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2];

#line 154 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0;

#line 157 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1;

#line 160 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1];

#line 163 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1];

#line 166 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0[2];

#line 169 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0[2];

#line 172 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0[2];

#line 175 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0;

#line 178 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2];

#line 181 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0;

#line 184 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1];

#line 187 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1];

#line 190 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1];

#line 193 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1];

#line 196 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 199 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 202 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 205 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
#line 208 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 210 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 213 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
#line 216 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 218 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 220 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 223 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
#line 226 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 228 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 231 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
#line 234 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 236 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 238 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 241 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
#line 244 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 246 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 249 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
#line 252 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 254 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 256 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 259 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
#line 262 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 264 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 267 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
#line 270 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 272 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 274 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 766 "untupling.m"
static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__766__1_1_f_0(
#line 766 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_28);

#line 186 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(
#line 186 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 186 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 215 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
#line 215 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 215 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 215 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 215 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
#line 215 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 215 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 136 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
#line 136 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 136 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 136 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 136 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
#line 136 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 136 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 134 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
#line 134 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 134 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 134 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 134 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
#line 134 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 134 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 704 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
#line 704 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 704 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 704 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 704 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
#line 704 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 704 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 766 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
#line 766 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 766 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1);

#line 719 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
#line 719 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode_6,
#line 719 "untupling.m"
  MR_Word transform_hlds__untupling__ArgType_7,
#line 719 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_8,
#line 719 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_9,
#line 719 "untupling.m"
  MR_Word * transform_hlds__untupling__Expansion_10);

#line 655 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 655 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 655 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 655 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__5_5,
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__6_6,
#line 655 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__7_7,
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__8_8,
#line 655 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__9_9,
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_10,
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_11);

#line 646 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
#line 646 "untupling.m"
  MR_Word transform_hlds__untupling__Args0_11,
#line 646 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_12,
#line 646 "untupling.m"
  MR_Word * transform_hlds__untupling__Args_13,
#line 646 "untupling.m"
  MR_Word * transform_hlds__untupling__EnterUnifs_14,
#line 646 "untupling.m"
  MR_Word * transform_hlds__untupling__ExitUnifs_15,
#line 646 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19,
#line 646 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_20,
#line 646 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21,
#line 646 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_22,
#line 646 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_18);

#line 630 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
#line 630 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 630 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 630 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 630 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 630 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 630 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 630 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 630 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 618 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
#line 618 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 618 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 618 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 618 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 618 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 618 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 618 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 618 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 601 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
#line 601 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 601 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 601 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 601 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 601 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 601 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 601 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 601 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 499 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
#line 499 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_9,
#line 499 "untupling.m"
  MR_Word * transform_hlds__untupling__Goal_10,
#line 499 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74,
#line 499 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_75,
#line 499 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76,
#line 499 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_77,
#line 499 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_13,
#line 499 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_14);

#line 471 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
#line 471 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_6,
#line 471 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_7,
#line 471 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_8,
#line 471 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18,
#line 471 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19);

#line 469 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
#line 469 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 469 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 469 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 469 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3);

#line 463 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
#line 463 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_5,
#line 463 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_6,
#line 463 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10,
#line 463 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11);

#line 403 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
#line 403 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_13,
#line 403 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_14,
#line 403 "untupling.m"
  MR_Word transform_hlds__untupling__PredInfo_15,
#line 403 "untupling.m"
  MR_Word transform_hlds__untupling__ProcInfo_16,
#line 403 "untupling.m"
  MR_Integer transform_hlds__untupling__Counter_17,
#line 403 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredId_18,
#line 403 "untupling.m"
  MR_Integer * transform_hlds__untupling__AuxProcId_19,
#line 403 "untupling.m"
  MR_Word * transform_hlds__untupling__CallAux_20,
#line 403 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredInfo_21,
#line 403 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxProcInfo_22,
#line 403 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51,
#line 403 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52);

#line 375 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
#line 375 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 375 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 375 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 375 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4);

#line 351 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
#line 351 "untupling.m"
  MR_String transform_hlds__untupling__ParentName_1,
#line 351 "untupling.m"
  MR_Integer transform_hlds__untupling__Num_2,
#line 351 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 351 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 351 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5,
#line 351 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_6,
#line 351 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7,
#line 351 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_8);

#line 317 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 317 "untupling.m"
  MR_Word * transform_hlds__untupling__MaybeHeadVarsAndArgModes_15,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_30,
#line 317 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_31,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32,
#line 317 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_33,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34,
#line 317 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_35,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_19,
#line 317 "untupling.m"
  MR_Word * transform_hlds__untupling__ContainerTypes_20,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21);

#line 295 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 295 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 295 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_28,
#line 295 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_29,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30,
#line 295 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_31,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32,
#line 295 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_33,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_20,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21);

#line 277 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 277 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 277 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__5_5,
#line 277 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__7_7,
#line 277 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__8_8,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__9_9,
#line 277 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__10_10,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_11,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_12);

#line 260 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVars0_13,
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_14,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_17,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_29,
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_31,
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_22,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__UntupleMap_23);

#line 217 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
#line 217 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_9,
#line 217 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_10,
#line 217 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35,
#line 217 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36,
#line 217 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37,
#line 217 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_38,
#line 217 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_39,
#line 217 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_40);

#line 766 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
#line 766 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 766 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1);

#line 199 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
#line 199 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 199 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_5);

#line 193 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
#line 193 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 193 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 193 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 193 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 193 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 193 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 193 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 193 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7);

#line 169 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
#line 169 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_8,
#line 169 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20,
#line 169 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21,
#line 169 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22,
#line 169 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_23,
#line 169 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_24,
#line 169 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_25);

#line 461 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
#line 461 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 461 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 461 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 461 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3);

#line 166 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
#line 166 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 166 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 166 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 166 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 166 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 166 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 166 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 166 "untupling.m"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1012 "transform_hlds.untupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0
  }
};

#line 1021 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1029 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1035 "transform_hlds.untupling.c"
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

#line 1050 "transform_hlds.untupling.c"
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

#line 1065 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

#line 1070 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0
};

#line 1075 "transform_hlds.untupling.c"
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

#line 1089 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0[2] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0,
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

#line 1095 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1101 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_expansion_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__untupling____Unify____expansion_result_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____expansion_result_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "expansion_result",
  {
    transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0
  },
  {
    transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0
};

#line 1122 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0
  }
};

#line 1131 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transform_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__untupling____Unify____transform_map_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____transform_map_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "transform_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1152 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1158 "transform_hlds.untupling.c"
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

#line 1173 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

#line 1178 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0
  }
};

#line 1187 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

#line 1192 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1] = {
  (MR_Integer) 0
};

#line 1197 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__untupling____Unify____transformed_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____transformed_proc_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "transformed_proc",
  {
    transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0
  },
  {
    transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0
};

#line 1218 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1226 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1234 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1243 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_untuple_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__untupling____Unify____untuple_map_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____untuple_map_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "untuple_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1264 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
#line 1267 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1269 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1271 "transform_hlds.untupling.c"
{
#line 1273 "transform_hlds.untupling.c"
  {
#line 1275 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1278 "transform_hlds.untupling.c"
    {
#line 1280 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____expansion_result_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1283 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1285 "transform_hlds.untupling.c"
  }
#line 1287 "transform_hlds.untupling.c"
}

#line 1290 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
#line 1293 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1295 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1297 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1299 "transform_hlds.untupling.c"
{
#line 1301 "transform_hlds.untupling.c"
  {
#line 1303 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1306 "transform_hlds.untupling.c"
    {
#line 1308 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____expansion_result_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1311 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1313 "transform_hlds.untupling.c"
  }
#line 1315 "transform_hlds.untupling.c"
}

#line 1318 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
#line 1321 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1323 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1325 "transform_hlds.untupling.c"
{
#line 1327 "transform_hlds.untupling.c"
  {
#line 1329 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1332 "transform_hlds.untupling.c"
    {
#line 1334 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____transform_map_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1337 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1339 "transform_hlds.untupling.c"
  }
#line 1341 "transform_hlds.untupling.c"
}

#line 1344 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
#line 1347 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1349 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1351 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1353 "transform_hlds.untupling.c"
{
#line 1355 "transform_hlds.untupling.c"
  {
#line 1357 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1360 "transform_hlds.untupling.c"
    {
#line 1362 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____transform_map_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1365 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1367 "transform_hlds.untupling.c"
  }
#line 1369 "transform_hlds.untupling.c"
}

#line 1372 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
#line 1375 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1377 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1379 "transform_hlds.untupling.c"
{
#line 1381 "transform_hlds.untupling.c"
  {
#line 1383 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1386 "transform_hlds.untupling.c"
    {
#line 1388 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____transformed_proc_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1391 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1393 "transform_hlds.untupling.c"
  }
#line 1395 "transform_hlds.untupling.c"
}

#line 1398 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
#line 1401 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1403 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1405 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1407 "transform_hlds.untupling.c"
{
#line 1409 "transform_hlds.untupling.c"
  {
#line 1411 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1414 "transform_hlds.untupling.c"
    {
#line 1416 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____transformed_proc_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1419 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1421 "transform_hlds.untupling.c"
  }
#line 1423 "transform_hlds.untupling.c"
}

#line 1426 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
#line 1429 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1431 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1433 "transform_hlds.untupling.c"
{
#line 1435 "transform_hlds.untupling.c"
  {
#line 1437 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1440 "transform_hlds.untupling.c"
    {
#line 1442 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____untuple_map_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1445 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1447 "transform_hlds.untupling.c"
  }
#line 1449 "transform_hlds.untupling.c"
}

#line 1452 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
#line 1455 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1457 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1459 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1461 "transform_hlds.untupling.c"
{
#line 1463 "transform_hlds.untupling.c"
  {
#line 1465 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1468 "transform_hlds.untupling.c"
    {
#line 1470 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____untuple_map_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1473 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1475 "transform_hlds.untupling.c"
  }
#line 1477 "transform_hlds.untupling.c"
}

#line 766 "untupling.m"
static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__766__1_1_f_0(
#line 766 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_28)
#line 766 "untupling.m"
{
#line 766 "untupling.m"
  {
#line 766 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 766 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVar__2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 1)));
#line 766 "untupling.m"
    MR_Word transform_hlds__untupling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 0)));
#line 766 "untupling.m"
    MR_Word transform_hlds__untupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 2)));
#line 766 "untupling.m"
    MR_Word transform_hlds__untupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 3)));

#line 766 "untupling.m"
    return transform_hlds__untupling__HeadVar__2_29;
#line 766 "untupling.m"
  }
#line 766 "untupling.m"
}

#line 186 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(
#line 186 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 186 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 186 "untupling.m"
{
#line 186 "untupling.m"
  {
#line 186 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 186 "untupling.m"
    MR_Word transform_hlds__untupling__V_44_44;

#line 186 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 186 "untupling.m"
      {
#line 186 "untupling.m"
        transform_hlds__untupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "untupling.m"
        (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)) = ((MR_Box) (transform_hlds__untupling__V_44_44));
#line 186 "untupling.m"
        transform_hlds__untupling__succeeded = MR_TRUE;
#line 186 "untupling.m"
      }
#line 186 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 186 "untupling.m"
  }
#line 186 "untupling.m"
}

#line 215 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
#line 215 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 215 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 215 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 215 "untupling.m"
{
#line 215 "untupling.m"
  {
#line 215 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 215 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_4 = transform_hlds__untupling__HeadVar__2_2;
#line 215 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_5 = transform_hlds__untupling__HeadVar__3_3;

#line 215 "untupling.m"
    {
#line 215 "untupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_5)));
#line 215 "untupling.m"
      return;
    }
#line 215 "untupling.m"
  }
#line 215 "untupling.m"
}

#line 215 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
#line 215 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 215 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 215 "untupling.m"
{
#line 215 "untupling.m"
  {
#line 215 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 215 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_3 = transform_hlds__untupling__HeadVar__1_1;
#line 215 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_4 = transform_hlds__untupling__HeadVar__2_2;

#line 215 "untupling.m"
    {
#line 215 "untupling.m"
      return transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_4)));
    }
#line 215 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 215 "untupling.m"
  }
#line 215 "untupling.m"
}

#line 136 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
#line 136 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 136 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 136 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 136 "untupling.m"
{
#line 136 "untupling.m"
  {
#line 136 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 136 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_9 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;
#line 136 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_10 = (MR_Integer) transform_hlds__untupling__HeadVar__3_3;

#line 136 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_9 == transform_hlds__untupling__CastY_10);
#line 136 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 1628 "transform_hlds.untupling.c"
      *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 136 "untupling.m"
    else
#line 136 "untupling.m"
      {
#line 136 "untupling.m"
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 136 "untupling.m"
        MR_Word transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "untupling.m"
        MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 136 "untupling.m"
        MR_Word transform_hlds__untupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "untupling.m"
        MR_Word transform_hlds__untupling__V_8_8;

#line 136 "untupling.m"
        {
#line 136 "untupling.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__untupling__V_8_8, transform_hlds__untupling__V_4_4, transform_hlds__untupling__V_6_6);
        }
#line 1650 "transform_hlds.untupling.c"
        transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_8_8 == (MR_Integer) 0);
#line 136 "untupling.m"
        transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 136 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 136 "untupling.m"
          *transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__V_8_8;
#line 136 "untupling.m"
        else
#line 136 "untupling.m"
          {
#line 136 "untupling.m"
            hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__untupling__HeadVar__1_1, transform_hlds__untupling__V_5_5, transform_hlds__untupling__V_7_7);
#line 136 "untupling.m"
            return;
          }
#line 136 "untupling.m"
      }
#line 136 "untupling.m"
  }
#line 136 "untupling.m"
}

#line 136 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
#line 136 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 136 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 136 "untupling.m"
{
#line 136 "untupling.m"
  {
#line 136 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 136 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_7 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 136 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_8 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 136 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_7 == transform_hlds__untupling__CastY_8);
#line 136 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 136 "untupling.m"
      transform_hlds__untupling__succeeded = MR_TRUE;
#line 136 "untupling.m"
    else
#line 136 "untupling.m"
      {
#line 136 "untupling.m"
        MR_Word transform_hlds__untupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "untupling.m"
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "untupling.m"
        MR_Word transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 136 "untupling.m"
        MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));

#line 1711 "transform_hlds.untupling.c"
        {
#line 1713 "transform_hlds.untupling.c"
          transform_hlds__untupling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__untupling__V_3_3, transform_hlds__untupling__V_5_5);
        }
#line 136 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 1718 "transform_hlds.untupling.c"
          {
#line 1720 "transform_hlds.untupling.c"
            return transform_hlds__untupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__untupling__V_4_4, transform_hlds__untupling__V_6_6);
          }
#line 136 "untupling.m"
      }
#line 136 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 136 "untupling.m"
  }
#line 136 "untupling.m"
}

#line 134 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
#line 134 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 134 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 134 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 134 "untupling.m"
{
#line 134 "untupling.m"
  {
#line 134 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 134 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_4 = transform_hlds__untupling__HeadVar__2_2;
#line 134 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_5 = transform_hlds__untupling__HeadVar__3_3;

#line 134 "untupling.m"
    {
#line 134 "untupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_5)));
#line 134 "untupling.m"
      return;
    }
#line 134 "untupling.m"
  }
#line 134 "untupling.m"
}

#line 134 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
#line 134 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 134 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 134 "untupling.m"
{
#line 134 "untupling.m"
  {
#line 134 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 134 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_3 = transform_hlds__untupling__HeadVar__1_1;
#line 134 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_4 = transform_hlds__untupling__HeadVar__2_2;

#line 134 "untupling.m"
    {
#line 134 "untupling.m"
      return transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_4)));
    }
#line 134 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 134 "untupling.m"
  }
#line 134 "untupling.m"
}

#line 704 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
#line 704 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 704 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 704 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 704 "untupling.m"
{
#line 704 "untupling.m"
  {
#line 704 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 704 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_13 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;
#line 704 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_14 = (MR_Integer) transform_hlds__untupling__HeadVar__3_3;

#line 704 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_13 == transform_hlds__untupling__CastY_14);
#line 704 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 1818 "transform_hlds.untupling.c"
      *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 704 "untupling.m"
    else
#line 704 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "untupling.m"
          *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 704 "untupling.m"
        else
#line 1830 "transform_hlds.untupling.c"
          *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 2;
#line 704 "untupling.m"
      else
#line 704 "untupling.m"
        {
#line 704 "untupling.m"
          MR_Word transform_hlds__untupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 704 "untupling.m"
          MR_Word transform_hlds__untupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));

#line 704 "untupling.m"
          if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1843 "transform_hlds.untupling.c"
            *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 1;
#line 704 "untupling.m"
          else
#line 704 "untupling.m"
            {
#line 704 "untupling.m"
              MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 704 "untupling.m"
              MR_Word transform_hlds__untupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 704 "untupling.m"
              MR_Word transform_hlds__untupling__V_8_8;

#line 704 "untupling.m"
              {
#line 704 "untupling.m"
                parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__untupling__V_8_8, transform_hlds__untupling__V_18_18, transform_hlds__untupling__V_6_6);
              }
#line 1861 "transform_hlds.untupling.c"
              transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_8_8 == (MR_Integer) 0);
#line 704 "untupling.m"
              transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 704 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 704 "untupling.m"
                *transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__V_8_8;
#line 704 "untupling.m"
              else
#line 704 "untupling.m"
                {
#line 704 "untupling.m"
                  {
#line 704 "untupling.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[2], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__V_17_17)), ((MR_Box) (transform_hlds__untupling__V_7_7)));
#line 704 "untupling.m"
                    return;
                  }
#line 704 "untupling.m"
                }
#line 704 "untupling.m"
            }
#line 704 "untupling.m"
        }
#line 704 "untupling.m"
  }
#line 704 "untupling.m"
}

#line 704 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
#line 704 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 704 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 704 "untupling.m"
{
#line 704 "untupling.m"
  {
#line 704 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 704 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_9 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 704 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_10 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 704 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_9 == transform_hlds__untupling__CastY_10);
#line 704 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 704 "untupling.m"
      transform_hlds__untupling__succeeded = MR_TRUE;
#line 704 "untupling.m"
    else
#line 704 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "untupling.m"
        {
#line 704 "untupling.m"
          MR_Integer transform_hlds__untupling__CastX_7 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 704 "untupling.m"
          MR_Integer transform_hlds__untupling__CastY_8 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 704 "untupling.m"
          transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastY_8 == transform_hlds__untupling__CastX_7);
#line 704 "untupling.m"
        }
#line 704 "untupling.m"
      else
#line 704 "untupling.m"
        {
#line 704 "untupling.m"
          MR_Word transform_hlds__untupling__TypeInfo_12_12;
#line 704 "untupling.m"
          MR_Word transform_hlds__untupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 704 "untupling.m"
          MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 704 "untupling.m"
          MR_Word transform_hlds__untupling__V_5_5;
#line 704 "untupling.m"
          MR_Word transform_hlds__untupling__V_6_6;

#line 704 "untupling.m"
          transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 704 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 704 "untupling.m"
            {
#line 704 "untupling.m"
              transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 704 "untupling.m"
              transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1955 "transform_hlds.untupling.c"
              {
#line 1957 "transform_hlds.untupling.c"
                transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__untupling__V_3_3, transform_hlds__untupling__V_5_5);
              }
#line 704 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 704 "untupling.m"
                {
#line 1964 "transform_hlds.untupling.c"
                  transform_hlds__untupling__TypeInfo_12_12 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 1966 "transform_hlds.untupling.c"
                  {
#line 1968 "transform_hlds.untupling.c"
                    return transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_12_12, ((MR_Box) (transform_hlds__untupling__V_4_4)), ((MR_Box) (transform_hlds__untupling__V_6_6)));
                  }
#line 704 "untupling.m"
                }
#line 704 "untupling.m"
            }
#line 704 "untupling.m"
        }
#line 704 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 704 "untupling.m"
  }
#line 704 "untupling.m"
}

#line 766 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
#line 766 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 766 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1)
#line 766 "untupling.m"
{
#line 766 "untupling.m"
  {
#line 766 "untupling.m"
    MR_Box transform_hlds__untupling__wrapper_arg_2;
#line 766 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 766 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_HeadVar__2_29;

#line 766 "untupling.m"
    {
#line 766 "untupling.m"
      transform_hlds__untupling__conv0_HeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__766__1_1_f_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1));
    }
#line 766 "untupling.m"
    transform_hlds__untupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__2_29));
#line 766 "untupling.m"
    return transform_hlds__untupling__wrapper_arg_2;
#line 766 "untupling.m"
  }
#line 766 "untupling.m"
}

#line 719 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
#line 719 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode_6,
#line 719 "untupling.m"
  MR_Word transform_hlds__untupling__ArgType_7,
#line 719 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_8,
#line 719 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_9,
#line 719 "untupling.m"
  MR_Word * transform_hlds__untupling__Expansion_10)
#line 719 "untupling.m"
{
#line 725 "untupling.m"
  {
#line 725 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 734 "untupling.m"
    {
#line 734 "untupling.m"
      MR_Word transform_hlds__untupling__V_11_11;

#line 734 "untupling.m"
      {
#line 734 "untupling.m"
        transform_hlds__untupling__V_11_11 = parse_tree__prog_mode__in_mode_0_f_0();
      }
#line 734 "untupling.m"
      {
#line 734 "untupling.m"
        transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_6, transform_hlds__untupling__V_11_11);
      }
#line 734 "untupling.m"
    }
#line 734 "untupling.m"
    if (!(transform_hlds__untupling__succeeded))
#line 735 "untupling.m"
      {
#line 735 "untupling.m"
        MR_Word transform_hlds__untupling__V_12_12;

#line 735 "untupling.m"
        {
#line 735 "untupling.m"
          transform_hlds__untupling__V_12_12 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 735 "untupling.m"
        {
#line 735 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_6, transform_hlds__untupling__V_12_12);
        }
#line 735 "untupling.m"
      }
#line 725 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
      {
#line 749 "untupling.m"
        MR_Word transform_hlds__untupling__TypeArgs_20;
#line 743 "untupling.m"
        MR_Word transform_hlds__untupling__TypeCtor_19;

#line 743 "untupling.m"
        {
#line 743 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__ArgType_7, &transform_hlds__untupling__TypeCtor_19, &transform_hlds__untupling__TypeArgs_20);
        }
#line 743 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 744 "untupling.m"
          {
#line 744 "untupling.m"
            transform_hlds__untupling__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__untupling__TypeCtor_19);
          }
#line 749 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 746 "untupling.m"
          {
#line 746 "untupling.m"
            MR_Integer transform_hlds__untupling__Arity_21;
#line 746 "untupling.m"
            MR_Word transform_hlds__untupling__ConsId_22;

#line 746 "untupling.m"
            {
#line 746 "untupling.m"
              transform_hlds__untupling__Arity_21 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__TypeArgs_20);
            }
#line 747 "untupling.m"
            {
#line 747 "untupling.m"
              transform_hlds__untupling__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 747 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_22, 1) = ((MR_Box) (transform_hlds__untupling__Arity_21));
#line 747 "untupling.m"
            }
#line 748 "untupling.m"
            {
#line 748 "untupling.m"
              MR_Word base;
#line 748 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "untupling.m"
              *transform_hlds__untupling__Expansion_10 = base;
#line 748 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_22));
#line 748 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__TypeArgs_20));
#line 748 "untupling.m"
            }
#line 746 "untupling.m"
          }
#line 749 "untupling.m"
        else
#line 768 "untupling.m"
          {
#line 768 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtorName_26;
#line 768 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtorArgs_27;
#line 768 "untupling.m"
            MR_Word transform_hlds__untupling__TypeCtor_43;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__TypeInfo_65_75;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__TypeInfo_66_76;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__TypeDefn_23;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__TypeBody_24;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtor_25;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__V_33_33;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__V_34_34;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__V_35_35;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__V_36_36;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__V_73_73;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__V_74_74;
#line 756 "untupling.m"
            MR_Word transform_hlds__untupling__V_46_46;
#line 756 "untupling.m"
            MR_Word transform_hlds__untupling__V_47_47;
#line 756 "untupling.m"
            MR_Word transform_hlds__untupling__V_48_48;
#line 756 "untupling.m"
            MR_Word transform_hlds__untupling__V_49_49;
#line 756 "untupling.m"
            MR_Word transform_hlds__untupling__V_50_50;
#line 756 "untupling.m"
            MR_Word transform_hlds__untupling__V_51_51;
#line 756 "untupling.m"
            MR_Word transform_hlds__untupling__V_52_52;
#line 756 "untupling.m"
            MR_Word transform_hlds__untupling__V_53_53;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_54_54;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_57_57;
#line 760 "untupling.m"
            MR_Word transform_hlds__untupling__V_28_28;
#line 760 "untupling.m"
            MR_Word transform_hlds__untupling__V_29_29;
#line 762 "untupling.m"
            MR_Word transform_hlds__untupling__TypeCtorInfo_60_70;

#line 752 "untupling.m"
            {
#line 752 "untupling.m"
              transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__ArgType_7, &transform_hlds__untupling__TypeCtor_43, &transform_hlds__untupling__V_73_73);
            }
#line 752 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
              {
#line 2201 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeInfo_65_75 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 752 "untupling.m"
                {
#line 752 "untupling.m"
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_65_75, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__untupling__V_73_73)));
                }
#line 752 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                  {
#line 753 "untupling.m"
                    {
#line 753 "untupling.m"
                      transform_hlds__untupling__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__untupling__TypeTable_9, transform_hlds__untupling__TypeCtor_43, &transform_hlds__untupling__TypeDefn_23);
                    }
#line 752 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                      {
#line 754 "untupling.m"
                        transform_hlds__untupling__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 754 "untupling.m"
                        {
#line 754 "untupling.m"
                          hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__untupling__TypeDefn_23, &transform_hlds__untupling__V_74_74);
                        }
#line 2228 "transform_hlds.untupling.c"
                        transform_hlds__untupling__TypeInfo_66_76 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 754 "untupling.m"
                        {
#line 754 "untupling.m"
                          transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_66_76, ((MR_Box) (transform_hlds__untupling__V_33_33)), ((MR_Box) (transform_hlds__untupling__V_74_74)));
                        }
#line 752 "untupling.m"
                        if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                          {
#line 755 "untupling.m"
                            {
#line 755 "untupling.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__untupling__TypeDefn_23, &transform_hlds__untupling__TypeBody_24);
                            }
#line 756 "untupling.m"
                            transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__TypeBody_24)) == (MR_mktag((MR_Integer) 1)));
#line 756 "untupling.m"
                            if (transform_hlds__untupling__succeeded)
#line 756 "untupling.m"
                              {
#line 756 "untupling.m"
                                transform_hlds__untupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 0)));
#line 756 "untupling.m"
                                transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 1)));
#line 756 "untupling.m"
                                transform_hlds__untupling__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 2)));
#line 756 "untupling.m"
                                transform_hlds__untupling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 3)));
#line 756 "untupling.m"
                                transform_hlds__untupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 4)));
#line 756 "untupling.m"
                                transform_hlds__untupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 5)));
#line 756 "untupling.m"
                                transform_hlds__untupling__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 756 "untupling.m"
                                transform_hlds__untupling__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 756 "untupling.m"
                                transform_hlds__untupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 7)));
#line 756 "untupling.m"
                                transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 756 "untupling.m"
                                if (transform_hlds__untupling__succeeded)
#line 756 "untupling.m"
                                  {
#line 756 "untupling.m"
                                    transform_hlds__untupling__SingleCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_34_34, (MR_Integer) 0)));
#line 756 "untupling.m"
                                    transform_hlds__untupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_34_34, (MR_Integer) 1)));
#line 756 "untupling.m"
                                    transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "untupling.m"
                                    if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                                      {
#line 757 "untupling.m"
                                        transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 0)));
#line 757 "untupling.m"
                                        transform_hlds__untupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 1)));
#line 757 "untupling.m"
                                        transform_hlds__untupling__SingleCtorName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 2)));
#line 757 "untupling.m"
                                        transform_hlds__untupling__SingleCtorArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 3)));
#line 757 "untupling.m"
                                        transform_hlds__untupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 4)));
#line 757 "untupling.m"
                                        transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "untupling.m"
                                        if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                                          {
#line 760 "untupling.m"
                                            transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__SingleCtorArgs_27)) == (MR_mktag((MR_Integer) 1)));
#line 760 "untupling.m"
                                            if (transform_hlds__untupling__succeeded)
#line 760 "untupling.m"
                                              {
#line 760 "untupling.m"
                                                transform_hlds__untupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_27, (MR_Integer) 0)));
#line 760 "untupling.m"
                                                transform_hlds__untupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_27, (MR_Integer) 1)));
#line 2310 "transform_hlds.untupling.c"
                                                transform_hlds__untupling__TypeCtorInfo_60_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 762 "untupling.m"
                                                {
#line 762 "untupling.m"
                                                  transform_hlds__untupling__succeeded = mercury__list__member_2_p_0(transform_hlds__untupling__TypeCtorInfo_60_70, ((MR_Box) (transform_hlds__untupling__ArgType_7)), transform_hlds__untupling__ContainerTypes_8);
                                                }
#line 762 "untupling.m"
                                                transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 760 "untupling.m"
                                              }
#line 752 "untupling.m"
                                          }
#line 752 "untupling.m"
                                      }
#line 756 "untupling.m"
                                  }
#line 756 "untupling.m"
                              }
#line 752 "untupling.m"
                          }
#line 752 "untupling.m"
                      }
#line 752 "untupling.m"
                  }
#line 752 "untupling.m"
              }
#line 768 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 764 "untupling.m"
              {
#line 764 "untupling.m"
                MR_Word transform_hlds__untupling__TypeCtorInfo_61_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 764 "untupling.m"
                MR_Word transform_hlds__untupling__ExpandedTypes_30;
#line 764 "untupling.m"
                MR_Integer transform_hlds__untupling__Arity_41;
#line 764 "untupling.m"
                MR_Word transform_hlds__untupling__ConsId_42;

#line 764 "untupling.m"
                {
#line 764 "untupling.m"
                  transform_hlds__untupling__Arity_41 = mercury__list__length_1_f_0(transform_hlds__untupling__TypeCtorInfo_61_71, transform_hlds__untupling__SingleCtorArgs_27);
                }
#line 765 "untupling.m"
                {
#line 765 "untupling.m"
                  transform_hlds__untupling__ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 765 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 765 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 1) = ((MR_Box) (transform_hlds__untupling__SingleCtorName_26));
#line 765 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 2) = ((MR_Box) (transform_hlds__untupling__Arity_41));
#line 765 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 3) = ((MR_Box) (transform_hlds__untupling__TypeCtor_43));
#line 765 "untupling.m"
                }
#line 766 "untupling.m"
                {
#line 766 "untupling.m"
                  transform_hlds__untupling__ExpandedTypes_30 = mercury__list__map_2_f_0(transform_hlds__untupling__TypeCtorInfo_61_71, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[4], transform_hlds__untupling__SingleCtorArgs_27);
                }
#line 767 "untupling.m"
                {
#line 767 "untupling.m"
                  MR_Word base;
#line 767 "untupling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "untupling.m"
                  *transform_hlds__untupling__Expansion_10 = base;
#line 767 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_42));
#line 767 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ExpandedTypes_30));
#line 767 "untupling.m"
                }
#line 764 "untupling.m"
              }
#line 768 "untupling.m"
            else
#line 769 "untupling.m"
              *transform_hlds__untupling__Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 768 "untupling.m"
          }
#line 749 "untupling.m"
      }
#line 725 "untupling.m"
    else
#line 726 "untupling.m"
      *transform_hlds__untupling__Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 725 "untupling.m"
  }
#line 719 "untupling.m"
}

#line 655 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 655 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 655 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 655 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__5_5,
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__6_6,
#line 655 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__7_7,
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__8_8,
#line 655 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__9_9,
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_10,
#line 655 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_11)
#line 655 "untupling.m"
{
#line 659 "untupling.m"
  {
#line 659 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 659 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 659 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 659 "untupling.m"
        {
#line 659 "untupling.m"
          *transform_hlds__untupling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 659 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 659 "untupling.m"
          *transform_hlds__untupling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 659 "untupling.m"
          *transform_hlds__untupling__HeadVar__9_9 = transform_hlds__untupling__HeadVar__8_8;
#line 659 "untupling.m"
          *transform_hlds__untupling__HeadVar__7_7 = transform_hlds__untupling__HeadVar__6_6;
#line 659 "untupling.m"
        }
#line 659 "untupling.m"
      else
#line 696 "untupling.m"
        {
#line 697 "untupling.m"
          {
#line 697 "untupling.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
#line 697 "untupling.m"
            return;
          }
#line 696 "untupling.m"
        }
#line 659 "untupling.m"
    else
#line 659 "untupling.m"
      {
#line 659 "untupling.m"
        MR_Word transform_hlds__untupling__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 659 "untupling.m"
        MR_Word transform_hlds__untupling__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 659 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "untupling.m"
          {
#line 699 "untupling.m"
            {
#line 699 "untupling.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
#line 699 "untupling.m"
              return;
            }
#line 698 "untupling.m"
          }
#line 659 "untupling.m"
        else
#line 662 "untupling.m"
          {
#line 662 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 662 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 662 "untupling.m"
            MR_Word transform_hlds__untupling__Arg0Type_31;
#line 662 "untupling.m"
            MR_Word transform_hlds__untupling__Expansion_32;

#line 663 "untupling.m"
            {
#line 663 "untupling.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__V_107_107, &transform_hlds__untupling__Arg0Type_31);
            }
#line 664 "untupling.m"
            {
#line 664 "untupling.m"
              transform_hlds__untupling__expand_argument_5_p_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__Arg0Type_31, transform_hlds__untupling__ContainerTypes0_10, transform_hlds__untupling__TypeTable_11, &transform_hlds__untupling__Expansion_32);
            }
#line 689 "untupling.m"
            if ((transform_hlds__untupling__Expansion_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 690 "untupling.m"
              {
#line 690 "untupling.m"
                MR_Word transform_hlds__untupling__Args1_42;

#line 692 "untupling.m"
                {
#line 692 "untupling.m"
                  transform_hlds__untupling__expand_call_args_10_p_0(transform_hlds__untupling__V_106_106, transform_hlds__untupling__ArgModes_23, &transform_hlds__untupling__Args1_42, transform_hlds__untupling__HeadVar__4_4, transform_hlds__untupling__HeadVar__5_5, transform_hlds__untupling__HeadVar__6_6, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__TypeTable_11);
                }
#line 691 "untupling.m"
                {
#line 691 "untupling.m"
                  MR_Word base;
#line 691 "untupling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "untupling.m"
                  *transform_hlds__untupling__HeadVar__3_3 = base;
#line 691 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__V_107_107));
#line 691 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Args1_42));
#line 691 "untupling.m"
                }
#line 690 "untupling.m"
              }
#line 689 "untupling.m"
            else
#line 666 "untupling.m"
              {
#line 666 "untupling.m"
                MR_Word transform_hlds__untupling__TypeCtorInfo_100_100;
#line 666 "untupling.m"
                MR_Word transform_hlds__untupling__ConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_32, (MR_Integer) 0)));
#line 666 "untupling.m"
                MR_Word transform_hlds__untupling__Types_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_32, (MR_Integer) 1)));
#line 666 "untupling.m"
                MR_Integer transform_hlds__untupling__NumVars_35;
#line 666 "untupling.m"
                MR_Word transform_hlds__untupling__ReplacementArgs_36;
#line 666 "untupling.m"
                MR_Word transform_hlds__untupling__ReplacementModes_37;
#line 666 "untupling.m"
                MR_Word transform_hlds__untupling__ContainerTypes_38;
#line 666 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49;
#line 666 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50;
#line 672 "untupling.m"
                MR_Word transform_hlds__untupling__V_104_104;

#line 667 "untupling.m"
                {
#line 667 "untupling.m"
                  transform_hlds__untupling__NumVars_35 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__Types_34);
                }
#line 668 "untupling.m"
                {
#line 668 "untupling.m"
                  mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__NumVars_35, &transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__HeadVar__6_6, &transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49);
                }
#line 669 "untupling.m"
                {
#line 669 "untupling.m"
                  parse_tree__prog_data__vartypes_add_corresponding_lists_4_p_0(transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__Types_34, transform_hlds__untupling__HeadVar__8_8, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50);
                }
#line 2583 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 670 "untupling.m"
                {
#line 670 "untupling.m"
                  mercury__list__duplicate_3_p_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__NumVars_35, ((MR_Box) (transform_hlds__untupling__ArgMode_22)), &transform_hlds__untupling__ReplacementModes_37);
                }
#line 671 "untupling.m"
                {
#line 671 "untupling.m"
                  transform_hlds__untupling__ContainerTypes_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "untupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__untupling__ContainerTypes_38, 0) = ((MR_Box) (transform_hlds__untupling__Arg0Type_31));
#line 671 "untupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__untupling__ContainerTypes_38, 1) = ((MR_Box) (transform_hlds__untupling__ContainerTypes0_10));
#line 671 "untupling.m"
                }
#line 672 "untupling.m"
                {
#line 672 "untupling.m"
                  transform_hlds__untupling__V_104_104 = parse_tree__prog_mode__in_mode_0_f_0();
                }
#line 672 "untupling.m"
                {
#line 672 "untupling.m"
                  transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__V_104_104);
                }
#line 679 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 673 "untupling.m"
                  {
#line 673 "untupling.m"
                    MR_Word transform_hlds__untupling__Unif_39;
#line 673 "untupling.m"
                    MR_Word transform_hlds__untupling__EnterUnifs1_40;
#line 673 "untupling.m"
                    MR_Word transform_hlds__untupling__V_51_51;
#line 673 "untupling.m"
                    MR_Word transform_hlds__untupling__V_52_52;

#line 673 "untupling.m"
                    {
#line 673 "untupling.m"
                      hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__untupling__V_107_107, transform_hlds__untupling__ConsId_33, transform_hlds__untupling__ReplacementArgs_36, &transform_hlds__untupling__Unif_39);
                    }
#line 675 "untupling.m"
                    {
#line 675 "untupling.m"
                      transform_hlds__untupling__V_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__V_106_106);
                    }
#line 676 "untupling.m"
                    {
#line 676 "untupling.m"
                      transform_hlds__untupling__V_52_52 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__ReplacementModes_37, transform_hlds__untupling__ArgModes_23);
                    }
#line 675 "untupling.m"
                    {
#line 675 "untupling.m"
                      transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__V_51_51, transform_hlds__untupling__V_52_52, transform_hlds__untupling__HeadVar__3_3, &transform_hlds__untupling__EnterUnifs1_40, transform_hlds__untupling__HeadVar__5_5, transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__ContainerTypes_38, transform_hlds__untupling__TypeTable_11);
                    }
#line 674 "untupling.m"
                    {
#line 674 "untupling.m"
                      MR_Word base;
#line 674 "untupling.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "untupling.m"
                      *transform_hlds__untupling__HeadVar__4_4 = base;
#line 674 "untupling.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Unif_39));
#line 674 "untupling.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__EnterUnifs1_40));
#line 674 "untupling.m"
                    }
#line 673 "untupling.m"
                  }
#line 679 "untupling.m"
                else
#line 686 "untupling.m"
                  {
#line 679 "untupling.m"
                    MR_Word transform_hlds__untupling__V_105_105;

#line 679 "untupling.m"
                    {
#line 679 "untupling.m"
                      transform_hlds__untupling__V_105_105 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
#line 679 "untupling.m"
                    {
#line 679 "untupling.m"
                      transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__V_105_105);
                    }
#line 686 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 680 "untupling.m"
                      {
#line 680 "untupling.m"
                        MR_Word transform_hlds__untupling__ExitUnifs1_41;
#line 680 "untupling.m"
                        MR_Word transform_hlds__untupling__V_55_55;
#line 680 "untupling.m"
                        MR_Word transform_hlds__untupling__V_57_57;
#line 680 "untupling.m"
                        MR_Word transform_hlds__untupling__V_58_58;
#line 680 "untupling.m"
                        MR_Word transform_hlds__untupling__Unif_64;

#line 680 "untupling.m"
                        {
#line 680 "untupling.m"
                          hlds__make_goal__construct_functor_4_p_0(transform_hlds__untupling__V_107_107, transform_hlds__untupling__ConsId_33, transform_hlds__untupling__ReplacementArgs_36, &transform_hlds__untupling__Unif_64);
                        }
#line 681 "untupling.m"
                        {
#line 681 "untupling.m"
                          transform_hlds__untupling__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "untupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_55_55, 0) = ((MR_Box) (transform_hlds__untupling__Unif_64));
#line 681 "untupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "untupling.m"
                        }
#line 682 "untupling.m"
                        {
#line 682 "untupling.m"
                          transform_hlds__untupling__V_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__V_106_106);
                        }
#line 683 "untupling.m"
                        {
#line 683 "untupling.m"
                          transform_hlds__untupling__V_58_58 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__ReplacementModes_37, transform_hlds__untupling__ArgModes_23);
                        }
#line 682 "untupling.m"
                        {
#line 682 "untupling.m"
                          transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__V_57_57, transform_hlds__untupling__V_58_58, transform_hlds__untupling__HeadVar__3_3, transform_hlds__untupling__HeadVar__4_4, &transform_hlds__untupling__ExitUnifs1_41, transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__ContainerTypes_38, transform_hlds__untupling__TypeTable_11);
                        }
#line 681 "untupling.m"
                        {
#line 681 "untupling.m"
                          *transform_hlds__untupling__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__ExitUnifs1_41, transform_hlds__untupling__V_55_55);
                        }
#line 680 "untupling.m"
                      }
#line 686 "untupling.m"
                    else
#line 687 "untupling.m"
                      {
#line 687 "untupling.m"
                        {
#line 687 "untupling.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "unsupported mode");
#line 687 "untupling.m"
                          return;
                        }
#line 687 "untupling.m"
                      }
#line 686 "untupling.m"
                  }
#line 666 "untupling.m"
              }
#line 662 "untupling.m"
          }
#line 659 "untupling.m"
      }
#line 659 "untupling.m"
  }
#line 655 "untupling.m"
}

#line 646 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
#line 646 "untupling.m"
  MR_Word transform_hlds__untupling__Args0_11,
#line 646 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_12,
#line 646 "untupling.m"
  MR_Word * transform_hlds__untupling__Args_13,
#line 646 "untupling.m"
  MR_Word * transform_hlds__untupling__EnterUnifs_14,
#line 646 "untupling.m"
  MR_Word * transform_hlds__untupling__ExitUnifs_15,
#line 646 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19,
#line 646 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_20,
#line 646 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21,
#line 646 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_22,
#line 646 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_18)
#line 646 "untupling.m"
{
#line 651 "untupling.m"
  {
#line 651 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 652 "untupling.m"
    {
#line 652 "untupling.m"
      transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__Args0_11, transform_hlds__untupling__ArgModes0_12, transform_hlds__untupling__Args_13, transform_hlds__untupling__EnterUnifs_14, transform_hlds__untupling__ExitUnifs_15, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19, transform_hlds__untupling__STATE_VARIABLE_VarSet_20, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21, transform_hlds__untupling__STATE_VARIABLE_VarTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__untupling__TypeTable_18);
#line 652 "untupling.m"
      return;
    }
#line 651 "untupling.m"
  }
#line 646 "untupling.m"
}

#line 630 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
#line 630 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 630 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 630 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 630 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 630 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 630 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 630 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 630 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 630 "untupling.m"
{
#line 634 "untupling.m"
  {
#line 634 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 634 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "untupling.m"
      {
#line 634 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 634 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 634 "untupling.m"
      }
#line 634 "untupling.m"
    else
#line 636 "untupling.m"
      {
#line 636 "untupling.m"
        MR_Word transform_hlds__untupling__Case0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 636 "untupling.m"
        MR_Word transform_hlds__untupling__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 636 "untupling.m"
        MR_Word transform_hlds__untupling__Case_19;
#line 636 "untupling.m"
        MR_Word transform_hlds__untupling__Cases_20;
#line 636 "untupling.m"
        MR_Word transform_hlds__untupling__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 0)));
#line 636 "untupling.m"
        MR_Word transform_hlds__untupling__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 1)));
#line 636 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 2)));
#line 636 "untupling.m"
        MR_Word transform_hlds__untupling__Goal_28;
#line 636 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33;
#line 636 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34;

#line 638 "untupling.m"
        {
#line 638 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_27, &transform_hlds__untupling__Goal_28, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 640 "untupling.m"
        {
#line 640 "untupling.m"
          transform_hlds__untupling__Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 640 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 0) = ((MR_Box) (transform_hlds__untupling__MainConsId_25));
#line 640 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 1) = ((MR_Box) (transform_hlds__untupling__OtherConsIds_26));
#line 640 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 2) = ((MR_Box) (transform_hlds__untupling__Goal_28));
#line 640 "untupling.m"
        }
#line 641 "untupling.m"
        {
#line 641 "untupling.m"
          transform_hlds__untupling__fix_calls_in_cases_8_p_0(transform_hlds__untupling__Cases0_18, &transform_hlds__untupling__Cases_20, transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 635 "untupling.m"
        {
#line 635 "untupling.m"
          MR_Word base;
#line 635 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "untupling.m"
          *transform_hlds__untupling__HeadVar__2_2 = base;
#line 635 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Case_19));
#line 635 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Cases_20));
#line 635 "untupling.m"
        }
#line 636 "untupling.m"
      }
#line 634 "untupling.m"
  }
#line 630 "untupling.m"
}

#line 618 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
#line 618 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 618 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 618 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 618 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 618 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 618 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 618 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 618 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 618 "untupling.m"
{
#line 622 "untupling.m"
  {
#line 622 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 622 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "untupling.m"
      {
#line 622 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 622 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 622 "untupling.m"
      }
#line 622 "untupling.m"
    else
#line 624 "untupling.m"
      {
#line 624 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 624 "untupling.m"
        MR_Word transform_hlds__untupling__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 624 "untupling.m"
        MR_Word transform_hlds__untupling__Goal_19;
#line 624 "untupling.m"
        MR_Word transform_hlds__untupling__Goals_20;
#line 624 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29;
#line 624 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30;

#line 625 "untupling.m"
        {
#line 625 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__Goal_19, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 627 "untupling.m"
        {
#line 627 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_18, &transform_hlds__untupling__Goals_20, transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 623 "untupling.m"
        {
#line 623 "untupling.m"
          MR_Word base;
#line 623 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "untupling.m"
          *transform_hlds__untupling__HeadVar__2_2 = base;
#line 623 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Goal_19));
#line 623 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Goals_20));
#line 623 "untupling.m"
        }
#line 624 "untupling.m"
      }
#line 622 "untupling.m"
  }
#line 618 "untupling.m"
}

#line 601 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
#line 601 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 601 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 601 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 601 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 601 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 601 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 601 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 601 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 601 "untupling.m"
{
#line 605 "untupling.m"
  {
#line 605 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 605 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "untupling.m"
      {
#line 605 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 605 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 605 "untupling.m"
      }
#line 605 "untupling.m"
    else
#line 607 "untupling.m"
      {
#line 607 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 607 "untupling.m"
        MR_Word transform_hlds__untupling__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 607 "untupling.m"
        MR_Word transform_hlds__untupling__Goal1_24;
#line 607 "untupling.m"
        MR_Word transform_hlds__untupling__Goals1_25;
#line 607 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32;
#line 607 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33;
#line 614 "untupling.m"
        MR_Word transform_hlds__untupling__ConjGoals_26;
#line 612 "untupling.m"
        MR_Word transform_hlds__untupling__V_36_36;
#line 612 "untupling.m"
        MR_Word transform_hlds__untupling__V_37_37;
#line 612 "untupling.m"
        MR_Word transform_hlds__untupling__V_27_27;

#line 608 "untupling.m"
        {
#line 608 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__Goal1_24, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 610 "untupling.m"
        {
#line 610 "untupling.m"
          transform_hlds__untupling__fix_calls_in_conj_8_p_0(transform_hlds__untupling__Goals0_18, &transform_hlds__untupling__Goals1_25, transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 612 "untupling.m"
        transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal1_24, (MR_Integer) 0)));
#line 612 "untupling.m"
        transform_hlds__untupling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal1_24, (MR_Integer) 1)));
#line 612 "untupling.m"
        transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 612 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 612 "untupling.m"
          {
#line 612 "untupling.m"
            transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 1)));
#line 612 "untupling.m"
            transform_hlds__untupling__ConjGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 2)));
#line 612 "untupling.m"
            transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_37_37 == (MR_Integer) 0);
#line 612 "untupling.m"
          }
#line 614 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 613 "untupling.m"
          {
#line 613 "untupling.m"
            {
#line 613 "untupling.m"
              *transform_hlds__untupling__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__ConjGoals_26, transform_hlds__untupling__Goals1_25);
            }
#line 613 "untupling.m"
          }
#line 614 "untupling.m"
        else
#line 615 "untupling.m"
          {
#line 615 "untupling.m"
            MR_Word base;
#line 615 "untupling.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "untupling.m"
            *transform_hlds__untupling__HeadVar__2_2 = base;
#line 615 "untupling.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Goal1_24));
#line 615 "untupling.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Goals1_25));
#line 615 "untupling.m"
          }
#line 607 "untupling.m"
      }
#line 605 "untupling.m"
  }
#line 601 "untupling.m"
}

#line 499 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
#line 499 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_9,
#line 499 "untupling.m"
  MR_Word * transform_hlds__untupling__Goal_10,
#line 499 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74,
#line 499 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_75,
#line 499 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76,
#line 499 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_77,
#line 499 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_13,
#line 499 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_14)
#line 499 "untupling.m"
{
#line 503 "untupling.m"
  {
#line 503 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 503 "untupling.m"
    MR_Word transform_hlds__untupling__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_9, (MR_Integer) 0)));
#line 503 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_9, (MR_Integer) 1)));

#line 511 "untupling.m"
    if (((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 0))))
#line 534 "untupling.m"
      {
#line 534 "untupling.m"
        MR_Word transform_hlds__untupling__SubGoal0_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__untupling__GoalExpr0_15), (MR_Integer) 0);
#line 534 "untupling.m"
        MR_Word transform_hlds__untupling__SubGoal_54;
#line 534 "untupling.m"
        MR_Word transform_hlds__untupling__GoalExpr_55;

#line 535 "untupling.m"
        {
#line 535 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__SubGoal0_53, &transform_hlds__untupling__SubGoal_54, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
        }
#line 537 "untupling.m"
        transform_hlds__untupling__GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__untupling__SubGoal_54);
#line 538 "untupling.m"
        {
#line 538 "untupling.m"
          MR_Word base;
#line 538 "untupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 538 "untupling.m"
          *transform_hlds__untupling__Goal_10 = base;
#line 538 "untupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_55));
#line 538 "untupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 538 "untupling.m"
        }
#line 534 "untupling.m"
      }
#line 511 "untupling.m"
    else
#line 511 "untupling.m"
      if (((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 2))))
#line 512 "untupling.m"
        {
#line 512 "untupling.m"
          MR_Word transform_hlds__untupling__CalleePredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)));
#line 512 "untupling.m"
          MR_Integer transform_hlds__untupling__CalleeProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 512 "untupling.m"
          MR_Word transform_hlds__untupling__OrigArgs_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 512 "untupling.m"
          MR_Word transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 512 "untupling.m"
          MR_Word transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 4)));
#line 512 "untupling.m"
          MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 5)));
#line 530 "untupling.m"
          MR_Word transform_hlds__untupling__CallAux0_41;
#line 530 "untupling.m"
          MR_Word transform_hlds__untupling__CallAuxInfo_42;
#line 514 "untupling.m"
          MR_Word transform_hlds__untupling__V_99_99;
#line 514 "untupling.m"
          MR_Word transform_hlds__untupling__V_100_100;
#line 514 "untupling.m"
          MR_Word transform_hlds__untupling__V_101_101;
#line 514 "untupling.m"
          MR_Box transform_hlds__untupling__conv0_V_100_100;
#line 515 "untupling.m"
          MR_Word transform_hlds__untupling__V_40_40;

#line 514 "untupling.m"
          {
#line 514 "untupling.m"
            transform_hlds__untupling__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 514 "untupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_99_99, 0) = ((MR_Box) (transform_hlds__untupling__CalleePredId_34));
#line 514 "untupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_99_99, 1) = ((MR_Box) (transform_hlds__untupling__CalleeProcId_35));
#line 514 "untupling.m"
          }
#line 514 "untupling.m"
          {
#line 514 "untupling.m"
            transform_hlds__untupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, transform_hlds__untupling__TransformMap_13, ((MR_Box) (transform_hlds__untupling__V_99_99)), &transform_hlds__untupling__conv0_V_100_100);
          }
#line 514 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 514 "untupling.m"
            {
#line 514 "untupling.m"
              transform_hlds__untupling__V_100_100 = ((MR_Word) transform_hlds__untupling__conv0_V_100_100);
#line 514 "untupling.m"
              transform_hlds__untupling__succeeded = MR_TRUE;
#line 514 "untupling.m"
            }
#line 514 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 514 "untupling.m"
            {
#line 515 "untupling.m"
              transform_hlds__untupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_100_100, (MR_Integer) 0)));
#line 515 "untupling.m"
              transform_hlds__untupling__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_100_100, (MR_Integer) 1)));
#line 515 "untupling.m"
              transform_hlds__untupling__CallAux0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_101_101, (MR_Integer) 0)));
#line 515 "untupling.m"
              transform_hlds__untupling__CallAuxInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_101_101, (MR_Integer) 1)));
#line 515 "untupling.m"
              transform_hlds__untupling__succeeded = MR_TRUE;
#line 514 "untupling.m"
            }
#line 530 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 517 "untupling.m"
            {
#line 517 "untupling.m"
              MR_Word transform_hlds__untupling__TypeTable_43;
#line 517 "untupling.m"
              MR_Word transform_hlds__untupling__CalleeProcInfo_45;
#line 517 "untupling.m"
              MR_Word transform_hlds__untupling__OrigArgModes_46;
#line 517 "untupling.m"
              MR_Word transform_hlds__untupling__Args_47;
#line 517 "untupling.m"
              MR_Word transform_hlds__untupling__EnterUnifs_48;
#line 517 "untupling.m"
              MR_Word transform_hlds__untupling__ExitUnifs_49;
#line 518 "untupling.m"
              MR_Word transform_hlds__untupling___CalleePredInfo_44;
#line 527 "untupling.m"
              MR_Word transform_hlds__untupling__CallAux_50;
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__V_123_123;
#line 523 "untupling.m"
              MR_Integer transform_hlds__untupling__V_124_124;
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__V_126_126;
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__V_127_127;
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__V_128_128;
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__V_125_125;

#line 517 "untupling.m"
              {
#line 517 "untupling.m"
                hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__ModuleInfo_14, &transform_hlds__untupling__TypeTable_43);
              }
#line 518 "untupling.m"
              {
#line 518 "untupling.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__ModuleInfo_14, transform_hlds__untupling__CalleePredId_34, transform_hlds__untupling__CalleeProcId_35, &transform_hlds__untupling___CalleePredInfo_44, &transform_hlds__untupling__CalleeProcInfo_45);
              }
#line 520 "untupling.m"
              {
#line 520 "untupling.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__untupling__CalleeProcInfo_45, &transform_hlds__untupling__OrigArgModes_46);
              }
#line 521 "untupling.m"
              {
#line 521 "untupling.m"
                transform_hlds__untupling__expand_call_args_10_p_0(transform_hlds__untupling__OrigArgs_36, transform_hlds__untupling__OrigArgModes_46, &transform_hlds__untupling__Args_47, &transform_hlds__untupling__EnterUnifs_48, &transform_hlds__untupling__ExitUnifs_49, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TypeTable_43);
              }
#line 523 "untupling.m"
              transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__CallAux0_41)) == (MR_mktag((MR_Integer) 2)));
#line 523 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 523 "untupling.m"
                {
#line 523 "untupling.m"
                  transform_hlds__untupling__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 0)));
#line 523 "untupling.m"
                  transform_hlds__untupling__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 1)));
#line 523 "untupling.m"
                  transform_hlds__untupling__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 2)));
#line 523 "untupling.m"
                  transform_hlds__untupling__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 3)));
#line 523 "untupling.m"
                  transform_hlds__untupling__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 4)));
#line 523 "untupling.m"
                  transform_hlds__untupling__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 5)));
#line 523 "untupling.m"
                  {
#line 523 "untupling.m"
                    transform_hlds__untupling__CallAux_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 523 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 0) = ((MR_Box) (transform_hlds__untupling__V_123_123));
#line 523 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 1) = ((MR_Box) (transform_hlds__untupling__V_124_124));
#line 523 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 2) = ((MR_Box) (transform_hlds__untupling__Args_47));
#line 523 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 3) = ((MR_Box) (transform_hlds__untupling__V_126_126));
#line 523 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 4) = ((MR_Box) (transform_hlds__untupling__V_127_127));
#line 523 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 5) = ((MR_Box) (transform_hlds__untupling__V_128_128));
#line 523 "untupling.m"
                  }
#line 523 "untupling.m"
                  transform_hlds__untupling__succeeded = MR_TRUE;
#line 523 "untupling.m"
                }
#line 527 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 524 "untupling.m"
                {
#line 524 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtorInfo_131_131;
#line 524 "untupling.m"
                  MR_Word transform_hlds__untupling__Call_51;
#line 524 "untupling.m"
                  MR_Word transform_hlds__untupling__ConjList_52;
#line 524 "untupling.m"
                  MR_Word transform_hlds__untupling__V_104_104;
#line 524 "untupling.m"
                  MR_Word transform_hlds__untupling__V_105_105;

#line 524 "untupling.m"
                  {
#line 524 "untupling.m"
                    transform_hlds__untupling__Call_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "untupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__untupling__Call_51, 0) = ((MR_Box) (transform_hlds__untupling__CallAux_50));
#line 524 "untupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__untupling__Call_51, 1) = ((MR_Box) (transform_hlds__untupling__CallAuxInfo_42));
#line 524 "untupling.m"
                  }
#line 3369 "transform_hlds.untupling.c"
                  transform_hlds__untupling__TypeCtorInfo_131_131 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 525 "untupling.m"
                  {
#line 525 "untupling.m"
                    transform_hlds__untupling__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_105_105, 0) = ((MR_Box) (transform_hlds__untupling__Call_51));
#line 525 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "untupling.m"
                  }
#line 525 "untupling.m"
                  {
#line 525 "untupling.m"
                    transform_hlds__untupling__V_104_104 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_131_131, transform_hlds__untupling__V_105_105, transform_hlds__untupling__ExitUnifs_49);
                  }
#line 525 "untupling.m"
                  {
#line 525 "untupling.m"
                    transform_hlds__untupling__ConjList_52 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_131_131, transform_hlds__untupling__EnterUnifs_48, transform_hlds__untupling__V_104_104);
                  }
#line 526 "untupling.m"
                  {
#line 526 "untupling.m"
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__untupling__ConjList_52, transform_hlds__untupling__GoalInfo0_16, transform_hlds__untupling__Goal_10);
#line 526 "untupling.m"
                    return;
                  }
#line 524 "untupling.m"
                }
#line 527 "untupling.m"
              else
#line 528 "untupling.m"
                {
#line 528 "untupling.m"
                  {
#line 528 "untupling.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "not a call template");
#line 528 "untupling.m"
                    return;
                  }
#line 528 "untupling.m"
                }
#line 517 "untupling.m"
            }
#line 530 "untupling.m"
          else
#line 531 "untupling.m"
            {
#line 531 "untupling.m"
              *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 531 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 531 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 531 "untupling.m"
            }
#line 512 "untupling.m"
        }
#line 511 "untupling.m"
      else
#line 511 "untupling.m"
        if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 556 "untupling.m"
          {
#line 556 "untupling.m"
            MR_Word transform_hlds__untupling__ConjType_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 556 "untupling.m"
            MR_Word transform_hlds__untupling__Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 556 "untupling.m"
            MR_Word transform_hlds__untupling__Goals_61;
#line 556 "untupling.m"
            MR_Word transform_hlds__untupling__GoalExpr_117;

#line 561 "untupling.m"
            if ((transform_hlds__untupling__ConjType_59 == (MR_Integer) 1))
#line 566 "untupling.m"
              {
#line 566 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_60, &transform_hlds__untupling__Goals_61, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 561 "untupling.m"
            else
#line 559 "untupling.m"
              {
#line 559 "untupling.m"
                transform_hlds__untupling__fix_calls_in_conj_8_p_0(transform_hlds__untupling__Goals0_60, &transform_hlds__untupling__Goals_61, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 569 "untupling.m"
            {
#line 569 "untupling.m"
              transform_hlds__untupling__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 569 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 569 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 1) = ((MR_Box) (transform_hlds__untupling__ConjType_59));
#line 569 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 2) = ((MR_Box) (transform_hlds__untupling__Goals_61));
#line 569 "untupling.m"
            }
#line 570 "untupling.m"
            {
#line 570 "untupling.m"
              MR_Word base;
#line 570 "untupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 570 "untupling.m"
              *transform_hlds__untupling__Goal_10 = base;
#line 570 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_117));
#line 570 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 570 "untupling.m"
            }
#line 556 "untupling.m"
          }
#line 511 "untupling.m"
        else
#line 511 "untupling.m"
          if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 572 "untupling.m"
            {
#line 572 "untupling.m"
              MR_Word transform_hlds__untupling__GoalExpr_118;
#line 572 "untupling.m"
              MR_Word transform_hlds__untupling__Goals0_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 572 "untupling.m"
              MR_Word transform_hlds__untupling__Goals_120;

#line 573 "untupling.m"
              {
#line 573 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_119, &transform_hlds__untupling__Goals_120, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 575 "untupling.m"
              {
#line 575 "untupling.m"
                transform_hlds__untupling__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 575 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__untupling__Goals_120));
#line 575 "untupling.m"
              }
#line 576 "untupling.m"
              {
#line 576 "untupling.m"
                MR_Word base;
#line 576 "untupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "untupling.m"
                *transform_hlds__untupling__Goal_10 = base;
#line 576 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_118));
#line 576 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 576 "untupling.m"
              }
#line 572 "untupling.m"
            }
#line 511 "untupling.m"
          else
#line 511 "untupling.m"
            if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 584 "untupling.m"
              {
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__Vars_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__Then0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__Else0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 4)));
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__Cond_70;
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__Then_71;
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__Else_72;
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81;
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82;
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83;
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84;
#line 584 "untupling.m"
                MR_Word transform_hlds__untupling__GoalExpr_122;

#line 585 "untupling.m"
                {
#line 585 "untupling.m"
                  transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Cond0_67, &transform_hlds__untupling__Cond_70, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, &transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                }
#line 587 "untupling.m"
                {
#line 587 "untupling.m"
                  transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Then0_68, &transform_hlds__untupling__Then_71, transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81, &transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83, transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                }
#line 589 "untupling.m"
                {
#line 589 "untupling.m"
                  transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Else0_69, &transform_hlds__untupling__Else_72, transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                }
#line 591 "untupling.m"
                {
#line 591 "untupling.m"
                  transform_hlds__untupling__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 591 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 591 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 1) = ((MR_Box) (transform_hlds__untupling__Vars_66));
#line 591 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 2) = ((MR_Box) (transform_hlds__untupling__Cond_70));
#line 591 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 3) = ((MR_Box) (transform_hlds__untupling__Then_71));
#line 591 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 4) = ((MR_Box) (transform_hlds__untupling__Else_72));
#line 591 "untupling.m"
                }
#line 592 "untupling.m"
                {
#line 592 "untupling.m"
                  MR_Word base;
#line 592 "untupling.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 592 "untupling.m"
                  *transform_hlds__untupling__Goal_10 = base;
#line 592 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_122));
#line 592 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 592 "untupling.m"
                }
#line 584 "untupling.m"
              }
#line 511 "untupling.m"
            else
#line 511 "untupling.m"
              if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 540 "untupling.m"
                {
#line 540 "untupling.m"
                  MR_Word transform_hlds__untupling__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 540 "untupling.m"
                  MR_Word transform_hlds__untupling__SubGoal0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 542 "untupling.m"
                  MR_Word transform_hlds__untupling__FGT_58;
#line 542 "untupling.m"
                  MR_Word transform_hlds__untupling__V_57_57;

#line 542 "untupling.m"
                  transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__Reason_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 542 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 542 "untupling.m"
                    {
#line 542 "untupling.m"
                      transform_hlds__untupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 1)));
#line 542 "untupling.m"
                      transform_hlds__untupling__FGT_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 2)));
#line 544 "untupling.m"
                      if ((transform_hlds__untupling__FGT_58 == (MR_Integer) 1))
#line 543 "untupling.m"
                        transform_hlds__untupling__succeeded = MR_TRUE;
#line 544 "untupling.m"
                      else
#line 544 "untupling.m"
                        if ((transform_hlds__untupling__FGT_58 == (MR_Integer) 2))
#line 544 "untupling.m"
                          transform_hlds__untupling__succeeded = MR_TRUE;
#line 544 "untupling.m"
                        else
#line 544 "untupling.m"
                          transform_hlds__untupling__succeeded = MR_FALSE;
#line 542 "untupling.m"
                    }
#line 549 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 548 "untupling.m"
                    {
#line 548 "untupling.m"
                      *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 548 "untupling.m"
                      *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 548 "untupling.m"
                      *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 548 "untupling.m"
                    }
#line 549 "untupling.m"
                  else
#line 551 "untupling.m"
                    {
#line 551 "untupling.m"
                      MR_Word transform_hlds__untupling__SubGoal_110;
#line 551 "untupling.m"
                      MR_Word transform_hlds__untupling__GoalExpr_111;

#line 550 "untupling.m"
                      {
#line 550 "untupling.m"
                        transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__SubGoal0_114, &transform_hlds__untupling__SubGoal_110, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                      }
#line 552 "untupling.m"
                      {
#line 552 "untupling.m"
                        transform_hlds__untupling__GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 552 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 552 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 1) = ((MR_Box) (transform_hlds__untupling__Reason_56));
#line 552 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 2) = ((MR_Box) (transform_hlds__untupling__SubGoal_110));
#line 552 "untupling.m"
                      }
#line 553 "untupling.m"
                      {
#line 553 "untupling.m"
                        MR_Word base;
#line 553 "untupling.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "untupling.m"
                        *transform_hlds__untupling__Goal_10 = base;
#line 553 "untupling.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_111));
#line 553 "untupling.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 553 "untupling.m"
                      }
#line 551 "untupling.m"
                    }
#line 540 "untupling.m"
                }
#line 511 "untupling.m"
              else
#line 511 "untupling.m"
                if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 594 "untupling.m"
                  {
#line 596 "untupling.m"
                    {
#line 596 "untupling.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "shorthand");
#line 596 "untupling.m"
                      return;
                    }
#line 594 "untupling.m"
                  }
#line 511 "untupling.m"
                else
#line 511 "untupling.m"
                  if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 578 "untupling.m"
                    {
#line 578 "untupling.m"
                      MR_Word transform_hlds__untupling__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 578 "untupling.m"
                      MR_Word transform_hlds__untupling__CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 578 "untupling.m"
                      MR_Word transform_hlds__untupling__Cases0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 578 "untupling.m"
                      MR_Word transform_hlds__untupling__Cases_65;
#line 578 "untupling.m"
                      MR_Word transform_hlds__untupling__GoalExpr_121;

#line 579 "untupling.m"
                      {
#line 579 "untupling.m"
                        transform_hlds__untupling__fix_calls_in_cases_8_p_0(transform_hlds__untupling__Cases0_64, &transform_hlds__untupling__Cases_65, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                      }
#line 581 "untupling.m"
                      {
#line 581 "untupling.m"
                        transform_hlds__untupling__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 581 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 581 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 1) = ((MR_Box) (transform_hlds__untupling__Var_62));
#line 581 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 2) = ((MR_Box) (transform_hlds__untupling__CanFail_63));
#line 581 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 3) = ((MR_Box) (transform_hlds__untupling__Cases_65));
#line 581 "untupling.m"
                      }
#line 582 "untupling.m"
                      {
#line 582 "untupling.m"
                        MR_Word base;
#line 582 "untupling.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "untupling.m"
                        *transform_hlds__untupling__Goal_10 = base;
#line 582 "untupling.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_121));
#line 582 "untupling.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 582 "untupling.m"
                      }
#line 578 "untupling.m"
                    }
#line 511 "untupling.m"
                  else
#line 509 "untupling.m"
                    {
#line 510 "untupling.m"
                      *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 509 "untupling.m"
                      *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 509 "untupling.m"
                      *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 509 "untupling.m"
                    }
#line 503 "untupling.m"
  }
#line 499 "untupling.m"
}

#line 471 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
#line 471 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_6,
#line 471 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_7,
#line 471 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_8,
#line 471 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18,
#line 471 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19)
#line 471 "untupling.m"
{
#line 477 "untupling.m"
  {
#line 477 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 477 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_11;
#line 477 "untupling.m"
    MR_Word transform_hlds__untupling__Goal0_12;
#line 477 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes0_13;
#line 477 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet0_14;
#line 477 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_15;
#line 477 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_16;
#line 477 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_17;
#line 477 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20;

#line 476 "untupling.m"
    {
#line 476 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__untupling__PredId_7, transform_hlds__untupling__ProcId_8, &transform_hlds__untupling__PredInfo_11, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20);
    }
#line 478 "untupling.m"
    {
#line 478 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__Goal0_12);
    }
#line 479 "untupling.m"
    {
#line 479 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__VarTypes0_13);
    }
#line 480 "untupling.m"
    {
#line 480 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__VarSet0_14);
    }
#line 481 "untupling.m"
    {
#line 481 "untupling.m"
      transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_12, &transform_hlds__untupling__Goal_15, transform_hlds__untupling__VarSet0_14, &transform_hlds__untupling__VarSet_16, transform_hlds__untupling__VarTypes0_13, &transform_hlds__untupling__VarTypes_17, transform_hlds__untupling__TransformMap_6, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18);
    }
#line 483 "untupling.m"
    {
#line 483 "untupling.m"
      transform_hlds__untupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__untupling__Goal0_12, transform_hlds__untupling__Goal_15);
    }
#line 483 "untupling.m"
    transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 492 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 484 "untupling.m"
      {
#line 484 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21;
#line 484 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22;
#line 484 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23;
#line 484 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25;
#line 484 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_27;
#line 484 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28;

#line 484 "untupling.m"
        {
#line 484 "untupling.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__untupling__Goal_15, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21);
        }
#line 485 "untupling.m"
        {
#line 485 "untupling.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__untupling__VarSet_16, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22);
        }
#line 486 "untupling.m"
        {
#line 486 "untupling.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__untupling__VarTypes_17, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23);
        }
#line 487 "untupling.m"
        {
#line 487 "untupling.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25);
        }
#line 488 "untupling.m"
        {
#line 488 "untupling.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_27, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 490 "untupling.m"
        {
#line 490 "untupling.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__untupling__PredId_7, transform_hlds__untupling__ProcId_8, transform_hlds__untupling__PredInfo_11, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_27, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19);
#line 490 "untupling.m"
          return;
        }
#line 484 "untupling.m"
      }
#line 492 "untupling.m"
    else
#line 493 "untupling.m"
      *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18;
#line 477 "untupling.m"
  }
#line 471 "untupling.m"
}

#line 469 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
#line 469 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 469 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 469 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 469 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3)
#line 469 "untupling.m"
{
#line 469 "untupling.m"
  {
#line 469 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 469 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19;

#line 469 "untupling.m"
    {
#line 469 "untupling.m"
      transform_hlds__untupling__fix_calls_in_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
#line 469 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19));
#line 469 "untupling.m"
  }
#line 469 "untupling.m"
}

#line 463 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
#line 463 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_5,
#line 463 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_6,
#line 463 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10,
#line 463 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11)
#line 463 "untupling.m"
{
#line 466 "untupling.m"
  {
#line 466 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 466 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_8;
#line 466 "untupling.m"
    MR_Word transform_hlds__untupling__ProcIds_9;
#line 466 "untupling.m"
    MR_Word transform_hlds__untupling__V_12_12;
#line 469 "untupling.m"
    MR_Box transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11;

#line 467 "untupling.m"
    {
#line 467 "untupling.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__untupling__PredId_6, &transform_hlds__untupling__PredInfo_8);
    }
#line 468 "untupling.m"
    {
#line 468 "untupling.m"
      transform_hlds__untupling__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__untupling__PredInfo_8);
    }
#line 469 "untupling.m"
    {
#line 469 "untupling.m"
      transform_hlds__untupling__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 469 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_8[0]));
#line 469 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 1) = ((MR_Box) (transform_hlds__untupling__fix_calls_in_pred_4_p_0_1));
#line 469 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 469 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 3) = ((MR_Box) (transform_hlds__untupling__TransformMap_5));
#line 469 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 4) = ((MR_Box) (transform_hlds__untupling__PredId_6));
#line 469 "untupling.m"
    }
#line 469 "untupling.m"
    {
#line 469 "untupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__untupling__V_12_12, transform_hlds__untupling__ProcIds_9, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10)), &transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11);
    }
#line 469 "untupling.m"
    *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11);
#line 466 "untupling.m"
  }
#line 463 "untupling.m"
}

#line 403 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
#line 403 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_13,
#line 403 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_14,
#line 403 "untupling.m"
  MR_Word transform_hlds__untupling__PredInfo_15,
#line 403 "untupling.m"
  MR_Word transform_hlds__untupling__ProcInfo_16,
#line 403 "untupling.m"
  MR_Integer transform_hlds__untupling__Counter_17,
#line 403 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredId_18,
#line 403 "untupling.m"
  MR_Integer * transform_hlds__untupling__AuxProcId_19,
#line 403 "untupling.m"
  MR_Word * transform_hlds__untupling__CallAux_20,
#line 403 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredInfo_21,
#line 403 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxProcInfo_22,
#line 403 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51,
#line 403 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52)
#line 403 "untupling.m"
{
#line 410 "untupling.m"
  {
#line 410 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__AuxHeadVars_24;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_25;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo_27;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__InitialAuxInstMap_28;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__TVarSet_29;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_30;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__ClassContext_31;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__RttiVarMaps_32;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_33;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__InstVarSet_34;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__Markers_35;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__OrigOrigin_36;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__HasParallelConj_37;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__VarNameRemap_38;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__PredModule_39;
#line 410 "untupling.m"
    MR_String transform_hlds__untupling__PredName_40;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__PredOrFunc_41;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__Context_42;
#line 410 "untupling.m"
    MR_Integer transform_hlds__untupling__Line_43;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredSymName0_44;
#line 410 "untupling.m"
    MR_Integer transform_hlds__untupling__ProcNo_45;
#line 410 "untupling.m"
    MR_String transform_hlds__untupling__Suffix_46;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredSymName_47;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__Origin_48;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredProcId_50;
#line 410 "untupling.m"
    MR_Word transform_hlds__untupling__V_59_59;
#line 410 "untupling.m"
    MR_String transform_hlds__untupling__V_62_62;
#line 412 "untupling.m"
    MR_Word transform_hlds__untupling___GoalExpr_26;
#line 437 "untupling.m"
    MR_Word transform_hlds__untupling___ExtraArgs_49;

#line 411 "untupling.m"
    {
#line 411 "untupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__AuxHeadVars_24);
    }
#line 412 "untupling.m"
    {
#line 412 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__Goal_25);
    }
#line 412 "untupling.m"
    transform_hlds__untupling___GoalExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal_25, (MR_Integer) 0)));
#line 412 "untupling.m"
    transform_hlds__untupling__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal_25, (MR_Integer) 1)));
#line 413 "untupling.m"
    {
#line 413 "untupling.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__untupling__ProcInfo_16, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51, &transform_hlds__untupling__InitialAuxInstMap_28);
    }
#line 414 "untupling.m"
    {
#line 414 "untupling.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__TVarSet_29);
    }
#line 415 "untupling.m"
    {
#line 415 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__VarTypes_30);
    }
#line 416 "untupling.m"
    {
#line 416 "untupling.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__ClassContext_31);
    }
#line 417 "untupling.m"
    {
#line 417 "untupling.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__RttiVarMaps_32);
    }
#line 418 "untupling.m"
    {
#line 418 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__VarSet_33);
    }
#line 419 "untupling.m"
    {
#line 419 "untupling.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__InstVarSet_34);
    }
#line 420 "untupling.m"
    {
#line 420 "untupling.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__Markers_35);
    }
#line 421 "untupling.m"
    {
#line 421 "untupling.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__OrigOrigin_36);
    }
#line 422 "untupling.m"
    {
#line 422 "untupling.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__HasParallelConj_37);
    }
#line 423 "untupling.m"
    {
#line 423 "untupling.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__VarNameRemap_38);
    }
#line 425 "untupling.m"
    {
#line 425 "untupling.m"
      transform_hlds__untupling__PredModule_39 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 426 "untupling.m"
    {
#line 426 "untupling.m"
      transform_hlds__untupling__PredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 427 "untupling.m"
    {
#line 427 "untupling.m"
      transform_hlds__untupling__PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 428 "untupling.m"
    {
#line 428 "untupling.m"
      transform_hlds__untupling__Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__untupling__GoalInfo_27);
    }
#line 429 "untupling.m"
    {
#line 429 "untupling.m"
      mercury__term__context_line_2_p_0(transform_hlds__untupling__Context_42, &transform_hlds__untupling__Line_43);
    }
#line 430 "untupling.m"
    {
#line 430 "untupling.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__untupling__PredModule_39, (MR_String) "untupling", transform_hlds__untupling__PredOrFunc_41, transform_hlds__untupling__PredName_40, transform_hlds__untupling__Line_43, transform_hlds__untupling__Counter_17, &transform_hlds__untupling__AuxPredSymName0_44);
    }
#line 432 "untupling.m"
    {
#line 432 "untupling.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__untupling__ProcId_14, &transform_hlds__untupling__ProcNo_45);
    }
#line 433 "untupling.m"
    {
#line 433 "untupling.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_7[0], transform_hlds__untupling__ProcNo_45, &transform_hlds__untupling__V_62_62);
    }
#line 433 "untupling.m"
    {
#line 433 "untupling.m"
      transform_hlds__untupling__Suffix_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__untupling__V_62_62);
    }
#line 434 "untupling.m"
    {
#line 434 "untupling.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__untupling__AuxPredSymName0_44, transform_hlds__untupling__Suffix_46, &transform_hlds__untupling__AuxPredSymName_47);
    }
#line 436 "untupling.m"
    {
#line 436 "untupling.m"
      transform_hlds__untupling__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "untupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 436 "untupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_59_59, 1) = ((MR_Box) (transform_hlds__untupling__ProcNo_45));
#line 436 "untupling.m"
    }
#line 436 "untupling.m"
    {
#line 436 "untupling.m"
      transform_hlds__untupling__Origin_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 436 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 0) = ((MR_Box) (transform_hlds__untupling__V_59_59));
#line 436 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 1) = ((MR_Box) (transform_hlds__untupling__OrigOrigin_36));
#line 436 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 2) = ((MR_Box) (transform_hlds__untupling__PredId_13));
#line 436 "untupling.m"
    }
#line 437 "untupling.m"
    {
#line 437 "untupling.m"
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__untupling__Origin_48, transform_hlds__untupling__Goal_25, transform_hlds__untupling__CallAux_20, transform_hlds__untupling__AuxHeadVars_24, &transform_hlds__untupling___ExtraArgs_49, transform_hlds__untupling__InitialAuxInstMap_28, transform_hlds__untupling__AuxPredSymName_47, transform_hlds__untupling__TVarSet_29, transform_hlds__untupling__VarTypes_30, transform_hlds__untupling__ClassContext_31, transform_hlds__untupling__RttiVarMaps_32, transform_hlds__untupling__VarSet_33, transform_hlds__untupling__InstVarSet_34, transform_hlds__untupling__Markers_35, (MR_Integer) 1, transform_hlds__untupling__HasParallelConj_37, transform_hlds__untupling__VarNameRemap_38, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52, &transform_hlds__untupling__AuxPredProcId_50);
    }
#line 441 "untupling.m"
    *transform_hlds__untupling__AuxPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__AuxPredProcId_50, (MR_Integer) 0)));
#line 441 "untupling.m"
    *transform_hlds__untupling__AuxProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__AuxPredProcId_50, (MR_Integer) 1)));
#line 443 "untupling.m"
    {
#line 443 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(*transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52, *transform_hlds__untupling__AuxPredId_18, *transform_hlds__untupling__AuxProcId_19, transform_hlds__untupling__AuxPredInfo_21, transform_hlds__untupling__AuxProcInfo_22);
#line 443 "untupling.m"
      return;
    }
#line 410 "untupling.m"
  }
#line 403 "untupling.m"
}

#line 375 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
#line 375 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 375 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 375 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 375 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4)
#line 375 "untupling.m"
{
#line 378 "untupling.m"
  while (MR_TRUE)
#line 378 "untupling.m"
    {
#line 378 "untupling.m"
      /* tailcall optimized into a loop */
#line 378 "untupling.m"
      {
#line 378 "untupling.m"
        MR_bool transform_hlds__untupling__succeeded;

#line 378 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "untupling.m"
          if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "untupling.m"
            *transform_hlds__untupling__HeadVar__4_4 = transform_hlds__untupling__HeadVar__3_3;
#line 378 "untupling.m"
          else
#line 386 "untupling.m"
            {
#line 387 "untupling.m"
              {
#line 387 "untupling.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
#line 387 "untupling.m"
                return;
              }
#line 386 "untupling.m"
            }
#line 378 "untupling.m"
        else
#line 378 "untupling.m"
          {
#line 378 "untupling.m"
            MR_Word transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 378 "untupling.m"
            MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 378 "untupling.m"
            if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "untupling.m"
              {
#line 389 "untupling.m"
                {
#line 389 "untupling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
#line 389 "untupling.m"
                  return;
                }
#line 388 "untupling.m"
              }
#line 378 "untupling.m"
            else
#line 379 "untupling.m"
              {
#line 379 "untupling.m"
                MR_Word transform_hlds__untupling__NewVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "untupling.m"
                MR_Word transform_hlds__untupling__NewVarss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "untupling.m"
                MR_Word transform_hlds__untupling__TypeInfo_40_40;
#line 380 "untupling.m"
                MR_Word transform_hlds__untupling__V_15_15;
#line 380 "untupling.m"
                MR_Word transform_hlds__untupling__V_37_37;

#line 380 "untupling.m"
                transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__NewVars_10)) == (MR_mktag((MR_Integer) 1)));
#line 380 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 380 "untupling.m"
                  {
#line 380 "untupling.m"
                    transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__NewVars_10, (MR_Integer) 0)));
#line 380 "untupling.m"
                    transform_hlds__untupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__NewVars_10, (MR_Integer) 1)));
#line 4357 "transform_hlds.untupling.c"
                    transform_hlds__untupling__TypeInfo_40_40 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
#line 380 "untupling.m"
                    {
#line 380 "untupling.m"
                      transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_40_40, ((MR_Box) (transform_hlds__untupling__V_39_39)), ((MR_Box) (transform_hlds__untupling__V_37_37)));
                    }
#line 380 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 380 "untupling.m"
                      transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "untupling.m"
                  }
#line 382 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 381 "untupling.m"
                  {
#line 381 "untupling.m"
                    /* direct tailcall eliminated */
#line 381 "untupling.m"
                    {
#line 381 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__V_38_38;
#line 381 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__2__tmp_copy_2 = transform_hlds__untupling__NewVarss_11;

#line 381 "untupling.m"
                      transform_hlds__untupling__HeadVar__2_2 = transform_hlds__untupling__HeadVar__2__tmp_copy_2;
#line 381 "untupling.m"
                      transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 381 "untupling.m"
                    }
#line 381 "untupling.m"
                    continue;
#line 381 "untupling.m"
                  }
#line 382 "untupling.m"
                else
#line 383 "untupling.m"
                  {
#line 383 "untupling.m"
                    MR_Word transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17;

#line 383 "untupling.m"
                    {
#line 383 "untupling.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], (MR_Word) &transform_hlds__untupling_scalar_common_2[1], ((MR_Box) (transform_hlds__untupling__V_39_39)), ((MR_Box) (transform_hlds__untupling__NewVars_10)), transform_hlds__untupling__HeadVar__3_3, &transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17);
                    }
#line 384 "untupling.m"
                    /* direct tailcall eliminated */
#line 384 "untupling.m"
                    {
#line 384 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__V_38_38;
#line 384 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__2__tmp_copy_2 = transform_hlds__untupling__NewVarss_11;
#line 384 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__3__tmp_copy_3 = transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17;

#line 384 "untupling.m"
                      transform_hlds__untupling__HeadVar__3_3 = transform_hlds__untupling__HeadVar__3__tmp_copy_3;
#line 384 "untupling.m"
                      transform_hlds__untupling__HeadVar__2_2 = transform_hlds__untupling__HeadVar__2__tmp_copy_2;
#line 384 "untupling.m"
                      transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 384 "untupling.m"
                    }
#line 384 "untupling.m"
                    continue;
#line 383 "untupling.m"
                  }
#line 379 "untupling.m"
              }
#line 378 "untupling.m"
          }
#line 378 "untupling.m"
      }
#line 378 "untupling.m"
      break;
#line 378 "untupling.m"
    }
#line 375 "untupling.m"
}

#line 351 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
#line 351 "untupling.m"
  MR_String transform_hlds__untupling__ParentName_1,
#line 351 "untupling.m"
  MR_Integer transform_hlds__untupling__Num_2,
#line 351 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 351 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 351 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5,
#line 351 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_6,
#line 351 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7,
#line 351 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_8)
#line 351 "untupling.m"
{
#line 355 "untupling.m"
  {
#line 355 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 355 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 355 "untupling.m"
      {
#line 355 "untupling.m"
        *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 355 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_8 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7;
#line 355 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_6 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5;
#line 355 "untupling.m"
      }
#line 355 "untupling.m"
    else
#line 357 "untupling.m"
      {
#line 357 "untupling.m"
        MR_Word transform_hlds__untupling__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 357 "untupling.m"
        MR_Word transform_hlds__untupling__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 357 "untupling.m"
        MR_Word transform_hlds__untupling__NewVar_21;
#line 357 "untupling.m"
        MR_Word transform_hlds__untupling__NewVars_22;
#line 357 "untupling.m"
        MR_String transform_hlds__untupling__Name_25;
#line 357 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36;
#line 357 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37;
#line 357 "untupling.m"
        MR_Integer transform_hlds__untupling__V_38_38;
#line 357 "untupling.m"
        MR_String transform_hlds__untupling__V_43_43;
#line 357 "untupling.m"
        MR_Word transform_hlds__untupling__V_49_49 = (MR_Word) &transform_hlds__untupling_scalar_common_7[0];
#line 357 "untupling.m"
        MR_String transform_hlds__untupling__V_51_51;
#line 357 "untupling.m"
        MR_String transform_hlds__untupling__V_52_52;
#line 357 "untupling.m"
        MR_String transform_hlds__untupling__V_59_59;

#line 358 "untupling.m"
        {
#line 358 "untupling.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(transform_hlds__untupling__V_49_49, transform_hlds__untupling__Num_2, &transform_hlds__untupling__V_43_43);
        }
#line 358 "untupling.m"
        {
#line 358 "untupling.m"
          transform_hlds__untupling__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__untupling__V_43_43);
        }
#line 358 "untupling.m"
        {
#line 358 "untupling.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__untupling__V_49_49, transform_hlds__untupling__ParentName_1, &transform_hlds__untupling__V_52_52);
        }
#line 358 "untupling.m"
        {
#line 358 "untupling.m"
          transform_hlds__untupling__V_59_59 = mercury__string__f_43_43_2_f_0(transform_hlds__untupling__V_52_52, transform_hlds__untupling__V_51_51);
        }
#line 358 "untupling.m"
        {
#line 358 "untupling.m"
          transform_hlds__untupling__Name_25 = mercury__string__f_43_43_2_f_0((MR_String) "Untupled_", transform_hlds__untupling__V_59_59);
        }
#line 359 "untupling.m"
        {
#line 359 "untupling.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__Name_25, &transform_hlds__untupling__NewVar_21, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36);
        }
#line 360 "untupling.m"
        {
#line 360 "untupling.m"
          parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__untupling__NewVar_21, transform_hlds__untupling__Type_19, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37);
        }
#line 361 "untupling.m"
        transform_hlds__untupling__V_38_38 = (transform_hlds__untupling__Num_2 + (MR_Integer) 1);
#line 361 "untupling.m"
        {
#line 361 "untupling.m"
          transform_hlds__untupling__create_untuple_vars_8_p_0(transform_hlds__untupling__ParentName_1, transform_hlds__untupling__V_38_38, transform_hlds__untupling__Types_20, &transform_hlds__untupling__NewVars_22, transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36, transform_hlds__untupling__STATE_VARIABLE_VarSet_6, transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37, transform_hlds__untupling__STATE_VARIABLE_VarTypes_8);
        }
#line 356 "untupling.m"
        {
#line 356 "untupling.m"
          MR_Word base;
#line 356 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = base;
#line 356 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__NewVar_21));
#line 356 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__NewVars_22));
#line 356 "untupling.m"
        }
#line 357 "untupling.m"
      }
#line 355 "untupling.m"
  }
#line 351 "untupling.m"
}

#line 317 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 317 "untupling.m"
  MR_Word * transform_hlds__untupling__MaybeHeadVarsAndArgModes_15,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_30,
#line 317 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_31,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32,
#line 317 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_33,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34,
#line 317 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_35,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_19,
#line 317 "untupling.m"
  MR_Word * transform_hlds__untupling__ContainerTypes_20,
#line 317 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21)
#line 317 "untupling.m"
{
#line 325 "untupling.m"
  {
#line 325 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 325 "untupling.m"
    MR_Word transform_hlds__untupling__Type_22;
#line 325 "untupling.m"
    MR_Word transform_hlds__untupling__Expansion_23;

#line 326 "untupling.m"
    {
#line 326 "untupling.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34, transform_hlds__untupling__HeadVar0_13, &transform_hlds__untupling__Type_22);
    }
#line 327 "untupling.m"
    {
#line 327 "untupling.m"
      transform_hlds__untupling__expand_argument_5_p_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__Type_22, transform_hlds__untupling__ContainerTypes0_19, transform_hlds__untupling__TypeTable_21, &transform_hlds__untupling__Expansion_23);
    }
#line 345 "untupling.m"
    if ((transform_hlds__untupling__Expansion_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "untupling.m"
      {
#line 347 "untupling.m"
        *transform_hlds__untupling__MaybeHeadVarsAndArgModes_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "untupling.m"
        *transform_hlds__untupling__ContainerTypes_20 = transform_hlds__untupling__ContainerTypes0_19;
#line 346 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = transform_hlds__untupling__STATE_VARIABLE_Goal_0_30;
#line 346 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_33 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32;
#line 346 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_35 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34;
#line 346 "untupling.m"
      }
#line 345 "untupling.m"
    else
#line 329 "untupling.m"
      {
#line 329 "untupling.m"
        MR_Word transform_hlds__untupling__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_23, (MR_Integer) 0)));
#line 329 "untupling.m"
        MR_Word transform_hlds__untupling__NewTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_23, (MR_Integer) 1)));
#line 329 "untupling.m"
        MR_String transform_hlds__untupling__ParentName_26;
#line 329 "untupling.m"
        MR_Word transform_hlds__untupling__NewHeadVars_27;
#line 329 "untupling.m"
        MR_Word transform_hlds__untupling__NewArgModes_28;
#line 329 "untupling.m"
        MR_Integer transform_hlds__untupling__V_39_39;
#line 329 "untupling.m"
        MR_Word transform_hlds__untupling__V_40_40;
#line 335 "untupling.m"
        MR_Word transform_hlds__untupling__V_51_51;

#line 330 "untupling.m"
        {
#line 330 "untupling.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32, transform_hlds__untupling__HeadVar0_13, &transform_hlds__untupling__ParentName_26);
        }
#line 331 "untupling.m"
        {
#line 331 "untupling.m"
          transform_hlds__untupling__create_untuple_vars_8_p_0(transform_hlds__untupling__ParentName_26, (MR_Integer) 0, transform_hlds__untupling__NewTypes_25, &transform_hlds__untupling__NewHeadVars_27, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34, transform_hlds__untupling__STATE_VARIABLE_VarTypes_35);
        }
#line 333 "untupling.m"
        {
#line 333 "untupling.m"
          transform_hlds__untupling__V_39_39 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__NewHeadVars_27);
        }
#line 333 "untupling.m"
        {
#line 333 "untupling.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__V_39_39, ((MR_Box) (transform_hlds__untupling__ArgMode0_14)), &transform_hlds__untupling__NewArgModes_28);
        }
#line 334 "untupling.m"
        {
#line 334 "untupling.m"
          transform_hlds__untupling__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 334 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_40_40, 0) = ((MR_Box) (transform_hlds__untupling__NewHeadVars_27));
#line 334 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_40_40, 1) = ((MR_Box) (transform_hlds__untupling__NewArgModes_28));
#line 334 "untupling.m"
        }
#line 334 "untupling.m"
        {
#line 334 "untupling.m"
          MR_Word base;
#line 334 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 334 "untupling.m"
          *transform_hlds__untupling__MaybeHeadVarsAndArgModes_15 = base;
#line 334 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__V_40_40));
#line 334 "untupling.m"
        }
#line 335 "untupling.m"
        {
#line 335 "untupling.m"
          transform_hlds__untupling__V_51_51 = parse_tree__prog_mode__in_mode_0_f_0();
        }
#line 335 "untupling.m"
        {
#line 335 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__V_51_51);
        }
#line 338 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 336 "untupling.m"
          {
#line 336 "untupling.m"
            MR_Word transform_hlds__untupling__UnifGoal_29;
#line 336 "untupling.m"
            MR_Word transform_hlds__untupling__GoalListA_58;
#line 336 "untupling.m"
            MR_Word transform_hlds__untupling__GoalListB_59;
#line 336 "untupling.m"
            MR_Word transform_hlds__untupling__GoalList_60;
#line 336 "untupling.m"
            MR_Word transform_hlds__untupling__Determinism_61;
#line 336 "untupling.m"
            MR_Word transform_hlds__untupling__GoalInfo0_62;
#line 336 "untupling.m"
            MR_Word transform_hlds__untupling__GoalInfo_63;
#line 336 "untupling.m"
            MR_Word transform_hlds__untupling__V_64_64;

#line 336 "untupling.m"
            {
#line 336 "untupling.m"
              hlds__make_goal__construct_functor_4_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ConsId_24, transform_hlds__untupling__NewHeadVars_27, &transform_hlds__untupling__UnifGoal_29);
            }
#line 367 "untupling.m"
            {
#line 367 "untupling.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__UnifGoal_29, &transform_hlds__untupling__GoalListA_58);
            }
#line 368 "untupling.m"
            {
#line 368 "untupling.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__STATE_VARIABLE_Goal_0_30, &transform_hlds__untupling__GoalListB_59);
            }
#line 369 "untupling.m"
            {
#line 369 "untupling.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__GoalListA_58, transform_hlds__untupling__GoalListB_59, &transform_hlds__untupling__GoalList_60);
            }
#line 370 "untupling.m"
            {
#line 370 "untupling.m"
              hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__untupling__GoalList_60, &transform_hlds__untupling__Determinism_61);
            }
#line 371 "untupling.m"
            {
#line 371 "untupling.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__untupling__GoalInfo0_62);
            }
#line 372 "untupling.m"
            {
#line 372 "untupling.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__untupling__Determinism_61, transform_hlds__untupling__GoalInfo0_62, &transform_hlds__untupling__GoalInfo_63);
            }
#line 373 "untupling.m"
            {
#line 373 "untupling.m"
              transform_hlds__untupling__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 373 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 373 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 1) = ((MR_Box) ((MR_Integer) 0));
#line 373 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 2) = ((MR_Box) (transform_hlds__untupling__GoalList_60));
#line 373 "untupling.m"
            }
#line 373 "untupling.m"
            {
#line 373 "untupling.m"
              MR_Word base;
#line 373 "untupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 373 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = base;
#line 373 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__V_64_64));
#line 373 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_63));
#line 373 "untupling.m"
            }
#line 336 "untupling.m"
          }
#line 338 "untupling.m"
        else
#line 341 "untupling.m"
          {
#line 338 "untupling.m"
            MR_Word transform_hlds__untupling__V_52_52;

#line 338 "untupling.m"
            {
#line 338 "untupling.m"
              transform_hlds__untupling__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
            }
#line 338 "untupling.m"
            {
#line 338 "untupling.m"
              transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__V_52_52);
            }
#line 341 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 339 "untupling.m"
              {
#line 339 "untupling.m"
                MR_Word transform_hlds__untupling__UnifGoal_46;
#line 339 "untupling.m"
                MR_Word transform_hlds__untupling__GoalListA_70;
#line 339 "untupling.m"
                MR_Word transform_hlds__untupling__GoalListB_71;
#line 339 "untupling.m"
                MR_Word transform_hlds__untupling__GoalList_72;
#line 339 "untupling.m"
                MR_Word transform_hlds__untupling__Determinism_73;
#line 339 "untupling.m"
                MR_Word transform_hlds__untupling__GoalInfo0_74;
#line 339 "untupling.m"
                MR_Word transform_hlds__untupling__GoalInfo_75;
#line 339 "untupling.m"
                MR_Word transform_hlds__untupling__V_76_76;

#line 339 "untupling.m"
                {
#line 339 "untupling.m"
                  hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ConsId_24, transform_hlds__untupling__NewHeadVars_27, &transform_hlds__untupling__UnifGoal_46);
                }
#line 367 "untupling.m"
                {
#line 367 "untupling.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__STATE_VARIABLE_Goal_0_30, &transform_hlds__untupling__GoalListA_70);
                }
#line 368 "untupling.m"
                {
#line 368 "untupling.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__UnifGoal_46, &transform_hlds__untupling__GoalListB_71);
                }
#line 369 "untupling.m"
                {
#line 369 "untupling.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__GoalListA_70, transform_hlds__untupling__GoalListB_71, &transform_hlds__untupling__GoalList_72);
                }
#line 370 "untupling.m"
                {
#line 370 "untupling.m"
                  hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__untupling__GoalList_72, &transform_hlds__untupling__Determinism_73);
                }
#line 371 "untupling.m"
                {
#line 371 "untupling.m"
                  hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__untupling__GoalInfo0_74);
                }
#line 372 "untupling.m"
                {
#line 372 "untupling.m"
                  hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__untupling__Determinism_73, transform_hlds__untupling__GoalInfo0_74, &transform_hlds__untupling__GoalInfo_75);
                }
#line 373 "untupling.m"
                {
#line 373 "untupling.m"
                  transform_hlds__untupling__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 373 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 373 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 1) = ((MR_Box) ((MR_Integer) 0));
#line 373 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 2) = ((MR_Box) (transform_hlds__untupling__GoalList_72));
#line 373 "untupling.m"
                }
#line 373 "untupling.m"
                {
#line 373 "untupling.m"
                  MR_Word base;
#line 373 "untupling.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 373 "untupling.m"
                  *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = base;
#line 373 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__V_76_76));
#line 373 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_75));
#line 373 "untupling.m"
                }
#line 339 "untupling.m"
              }
#line 341 "untupling.m"
            else
#line 342 "untupling.m"
              {
#line 342 "untupling.m"
                {
#line 342 "untupling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_one_arg_in_proc_2\'/12", (MR_String) "unsupported mode");
#line 342 "untupling.m"
                  return;
                }
#line 342 "untupling.m"
              }
#line 341 "untupling.m"
          }
#line 344 "untupling.m"
        {
#line 344 "untupling.m"
          MR_Word base;
#line 344 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "untupling.m"
          *transform_hlds__untupling__ContainerTypes_20 = base;
#line 344 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Type_22));
#line 344 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ContainerTypes0_19));
#line 344 "untupling.m"
        }
#line 329 "untupling.m"
      }
#line 325 "untupling.m"
  }
#line 317 "untupling.m"
}

#line 295 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 295 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 295 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_28,
#line 295 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_29,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30,
#line 295 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_31,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32,
#line 295 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_33,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_20,
#line 295 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21)
#line 295 "untupling.m"
{
#line 301 "untupling.m"
  {
#line 301 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 301 "untupling.m"
    MR_Word transform_hlds__untupling__MaybeHeadVarsAndArgModes_22;
#line 301 "untupling.m"
    MR_Word transform_hlds__untupling__ContainerTypes_23;
#line 301 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_34_34;
#line 301 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35;
#line 301 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36;

#line 302 "untupling.m"
    {
#line 302 "untupling.m"
      transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ArgMode0_14, &transform_hlds__untupling__MaybeHeadVarsAndArgModes_22, transform_hlds__untupling__STATE_VARIABLE_Goal_0_28, &transform_hlds__untupling__STATE_VARIABLE_Goal_34_34, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30, &transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36, transform_hlds__untupling__ContainerTypes0_20, &transform_hlds__untupling__ContainerTypes_23, transform_hlds__untupling__TypeTable_21);
    }
#line 311 "untupling.m"
    if ((transform_hlds__untupling__MaybeHeadVarsAndArgModes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "untupling.m"
      {
#line 313 "untupling.m"
        {
#line 313 "untupling.m"
          MR_Word base;
#line 313 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "untupling.m"
          *transform_hlds__untupling__HeadVars_15 = base;
#line 313 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__HeadVar0_13));
#line 313 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "untupling.m"
        }
#line 314 "untupling.m"
        {
#line 314 "untupling.m"
          MR_Word base;
#line 314 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "untupling.m"
          *transform_hlds__untupling__ArgModes_16 = base;
#line 314 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ArgMode0_14));
#line 314 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "untupling.m"
        }
#line 312 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Goal_29 = transform_hlds__untupling__STATE_VARIABLE_Goal_34_34;
#line 312 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_31 = transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35;
#line 312 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_33 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36;
#line 312 "untupling.m"
      }
#line 311 "untupling.m"
    else
#line 305 "untupling.m"
      {
#line 305 "untupling.m"
        MR_Word transform_hlds__untupling__HeadVars1_24;
#line 305 "untupling.m"
        MR_Word transform_hlds__untupling__ArgModes1_25;
#line 305 "untupling.m"
        MR_Word transform_hlds__untupling__ListOfHeadVars_26;
#line 305 "untupling.m"
        MR_Word transform_hlds__untupling__ListOfArgModes_27;
#line 305 "untupling.m"
        MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__MaybeHeadVarsAndArgModes_22, (MR_Integer) 0)));

#line 305 "untupling.m"
        transform_hlds__untupling__HeadVars1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_39_39, (MR_Integer) 0)));
#line 305 "untupling.m"
        transform_hlds__untupling__ArgModes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_39_39, (MR_Integer) 1)));
#line 306 "untupling.m"
        {
#line 306 "untupling.m"
          transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__HeadVars1_24, transform_hlds__untupling__ArgModes1_25, &transform_hlds__untupling__ListOfHeadVars_26, &transform_hlds__untupling__ListOfArgModes_27, transform_hlds__untupling__STATE_VARIABLE_Goal_34_34, transform_hlds__untupling__STATE_VARIABLE_Goal_29, transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35, transform_hlds__untupling__STATE_VARIABLE_VarSet_31, transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36, transform_hlds__untupling__STATE_VARIABLE_VarTypes_33, transform_hlds__untupling__ContainerTypes_23, transform_hlds__untupling__TypeTable_21);
        }
#line 309 "untupling.m"
        {
#line 309 "untupling.m"
          *transform_hlds__untupling__HeadVars_15 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ListOfHeadVars_26);
        }
#line 310 "untupling.m"
        {
#line 310 "untupling.m"
          *transform_hlds__untupling__ArgModes_16 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__ListOfArgModes_27);
        }
#line 305 "untupling.m"
      }
#line 301 "untupling.m"
  }
#line 295 "untupling.m"
}

#line 277 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 277 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 277 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__5_5,
#line 277 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__7_7,
#line 277 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__8_8,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__9_9,
#line 277 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__10_10,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_11,
#line 277 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_12)
#line 277 "untupling.m"
{
#line 282 "untupling.m"
  {
#line 282 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 282 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "untupling.m"
        {
#line 282 "untupling.m"
          *transform_hlds__untupling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 282 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 282 "untupling.m"
          *transform_hlds__untupling__HeadVar__10_10 = transform_hlds__untupling__HeadVar__9_9;
#line 282 "untupling.m"
          *transform_hlds__untupling__HeadVar__8_8 = transform_hlds__untupling__HeadVar__7_7;
#line 282 "untupling.m"
          *transform_hlds__untupling__HeadVar__6_6 = transform_hlds__untupling__HeadVar__5_5;
#line 282 "untupling.m"
        }
#line 282 "untupling.m"
      else
#line 290 "untupling.m"
        {
#line 291 "untupling.m"
          {
#line 291 "untupling.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
#line 291 "untupling.m"
            return;
          }
#line 290 "untupling.m"
        }
#line 282 "untupling.m"
    else
#line 282 "untupling.m"
      {
#line 282 "untupling.m"
        MR_Word transform_hlds__untupling__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 282 "untupling.m"
        MR_Word transform_hlds__untupling__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 282 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "untupling.m"
          {
#line 293 "untupling.m"
            {
#line 293 "untupling.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
#line 293 "untupling.m"
              return;
            }
#line 292 "untupling.m"
          }
#line 282 "untupling.m"
        else
#line 285 "untupling.m"
          {
#line 285 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 285 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 285 "untupling.m"
            MR_Word transform_hlds__untupling__HeadVar_28;
#line 285 "untupling.m"
            MR_Word transform_hlds__untupling__HeadVars_29;
#line 285 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode_30;
#line 285 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes_31;
#line 285 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_43_43;
#line 285 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44;
#line 285 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45;

#line 286 "untupling.m"
            {
#line 286 "untupling.m"
              transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(transform_hlds__untupling__V_86_86, transform_hlds__untupling__ArgMode0_26, &transform_hlds__untupling__HeadVar_28, &transform_hlds__untupling__ArgMode_30, transform_hlds__untupling__HeadVar__5_5, &transform_hlds__untupling__STATE_VARIABLE_Goal_43_43, transform_hlds__untupling__HeadVar__7_7, &transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44, transform_hlds__untupling__HeadVar__9_9, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45, transform_hlds__untupling__ContainerTypes_11, transform_hlds__untupling__TypeTable_12);
            }
#line 288 "untupling.m"
            {
#line 288 "untupling.m"
              transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__V_85_85, transform_hlds__untupling__ArgModes0_27, &transform_hlds__untupling__HeadVars_29, &transform_hlds__untupling__ArgModes_31, transform_hlds__untupling__STATE_VARIABLE_Goal_43_43, transform_hlds__untupling__HeadVar__6_6, transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44, transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45, transform_hlds__untupling__HeadVar__10_10, transform_hlds__untupling__ContainerTypes_11, transform_hlds__untupling__TypeTable_12);
            }
#line 284 "untupling.m"
            {
#line 284 "untupling.m"
              MR_Word base;
#line 284 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "untupling.m"
              *transform_hlds__untupling__HeadVar__3_3 = base;
#line 284 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__HeadVar_28));
#line 284 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__HeadVars_29));
#line 284 "untupling.m"
            }
#line 284 "untupling.m"
            {
#line 284 "untupling.m"
              MR_Word base;
#line 284 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "untupling.m"
              *transform_hlds__untupling__HeadVar__4_4 = base;
#line 284 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ArgMode_30));
#line 284 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ArgModes_31));
#line 284 "untupling.m"
            }
#line 285 "untupling.m"
          }
#line 282 "untupling.m"
      }
#line 282 "untupling.m"
  }
#line 277 "untupling.m"
}

#line 260 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVars0_13,
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_14,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_17,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_29,
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_31,
#line 260 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_22,
#line 260 "untupling.m"
  MR_Word * transform_hlds__untupling__UntupleMap_23)
#line 260 "untupling.m"
{
#line 267 "untupling.m"
  {
#line 267 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 267 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_39_39;
#line 267 "untupling.m"
    MR_Word transform_hlds__untupling__GoalExpr_18;
#line 267 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo_19;
#line 267 "untupling.m"
    MR_Word transform_hlds__untupling__ListOfHeadVars_24;
#line 267 "untupling.m"
    MR_Word transform_hlds__untupling__ListOfArgModes_25;
#line 267 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo1_26;
#line 267 "untupling.m"
    MR_Word transform_hlds__untupling__Context_27;
#line 267 "untupling.m"
    MR_Word transform_hlds__untupling__V_32_32;
#line 267 "untupling.m"
    MR_Word transform_hlds__untupling__V_36_36;
#line 267 "untupling.m"
    MR_Word transform_hlds__untupling__V_37_37;
#line 271 "untupling.m"
    MR_Word transform_hlds__untupling__V_38_38;

#line 268 "untupling.m"
    {
#line 268 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__HeadVars0_13, transform_hlds__untupling__ArgModes0_14, &transform_hlds__untupling__ListOfHeadVars_24, &transform_hlds__untupling__ListOfArgModes_25, transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__V_32_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28, transform_hlds__untupling__STATE_VARIABLE_VarSet_29, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30, transform_hlds__untupling__STATE_VARIABLE_VarTypes_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__untupling__TypeTable_22);
    }
#line 269 "untupling.m"
    transform_hlds__untupling__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_32_32, (MR_Integer) 0)));
#line 269 "untupling.m"
    transform_hlds__untupling__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_32_32, (MR_Integer) 1)));
#line 271 "untupling.m"
    transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_17, (MR_Integer) 0)));
#line 271 "untupling.m"
    transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_17, (MR_Integer) 1)));
#line 271 "untupling.m"
    {
#line 271 "untupling.m"
      transform_hlds__untupling__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__untupling__V_36_36);
    }
#line 272 "untupling.m"
    {
#line 272 "untupling.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(transform_hlds__untupling__Context_27, transform_hlds__untupling__GoalInfo1_26, &transform_hlds__untupling__GoalInfo_19);
    }
#line 266 "untupling.m"
    {
#line 266 "untupling.m"
      MR_Word base;
#line 266 "untupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "untupling.m"
      *transform_hlds__untupling__HeadVar__6_6 = base;
#line 266 "untupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_18));
#line 266 "untupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_19));
#line 266 "untupling.m"
    }
#line 5311 "transform_hlds.untupling.c"
    transform_hlds__untupling__TypeInfo_39_39 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
#line 273 "untupling.m"
    {
#line 273 "untupling.m"
      mercury__list__condense_2_p_0(transform_hlds__untupling__TypeInfo_39_39, transform_hlds__untupling__ListOfHeadVars_24, transform_hlds__untupling__HeadVars_15);
    }
#line 274 "untupling.m"
    {
#line 274 "untupling.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__ListOfArgModes_25, transform_hlds__untupling__ArgModes_16);
    }
#line 275 "untupling.m"
    {
#line 275 "untupling.m"
      transform_hlds__untupling__V_37_37 = mercury__map__init_0_f_0(transform_hlds__untupling__TypeInfo_39_39, (MR_Word) &transform_hlds__untupling_scalar_common_2[1]);
    }
#line 275 "untupling.m"
    {
#line 275 "untupling.m"
      transform_hlds__untupling__build_untuple_map_4_p_0(transform_hlds__untupling__HeadVars0_13, transform_hlds__untupling__ListOfHeadVars_24, transform_hlds__untupling__V_37_37, transform_hlds__untupling__UntupleMap_23);
#line 275 "untupling.m"
      return;
    }
#line 267 "untupling.m"
  }
#line 260 "untupling.m"
}

#line 217 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
#line 217 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_9,
#line 217 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_10,
#line 217 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35,
#line 217 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36,
#line 217 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37,
#line 217 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_38,
#line 217 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_39,
#line 217 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_40)
#line 217 "untupling.m"
{
#line 223 "untupling.m"
  {
#line 223 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__TypeTable_15;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo0_16;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVars0_17;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__ArgModes0_18;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__Goal0_19;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes0_20;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet0_21;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVars_22;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__ArgModes_23;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_24;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_25;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_26;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__UntupleMap_27;
#line 223 "untupling.m"
    MR_Integer transform_hlds__untupling__Num_28;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredId_29;
#line 223 "untupling.m"
    MR_Integer transform_hlds__untupling__AuxProcId_30;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__CallAux_31;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredInfo_32;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__AuxProcInfo0_33;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__AuxProcInfo_34;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__V_54_54;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__V_55_55;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__V_57_57;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__V_58_58;
#line 223 "untupling.m"
    MR_Word transform_hlds__untupling__V_60_60;

#line 223 "untupling.m"
    {
#line 223 "untupling.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__untupling__TypeTable_15);
    }
#line 224 "untupling.m"
    {
#line 224 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__untupling__PredId_9, transform_hlds__untupling__ProcId_10, &transform_hlds__untupling__PredInfo0_16, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41);
    }
#line 227 "untupling.m"
    {
#line 227 "untupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__HeadVars0_17);
    }
#line 228 "untupling.m"
    {
#line 228 "untupling.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__ArgModes0_18);
    }
#line 229 "untupling.m"
    {
#line 229 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__Goal0_19);
    }
#line 230 "untupling.m"
    {
#line 230 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__VarTypes0_20);
    }
#line 231 "untupling.m"
    {
#line 231 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__VarSet0_21);
    }
#line 233 "untupling.m"
    {
#line 233 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_2_12_p_0(transform_hlds__untupling__HeadVars0_17, transform_hlds__untupling__ArgModes0_18, &transform_hlds__untupling__HeadVars_22, &transform_hlds__untupling__ArgModes_23, transform_hlds__untupling__Goal0_19, &transform_hlds__untupling__Goal_24, transform_hlds__untupling__VarSet0_21, &transform_hlds__untupling__VarSet_25, transform_hlds__untupling__VarTypes0_20, &transform_hlds__untupling__VarTypes_26, transform_hlds__untupling__TypeTable_15, &transform_hlds__untupling__UntupleMap_27);
    }
#line 237 "untupling.m"
    {
#line 237 "untupling.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__untupling__HeadVars_22, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42);
    }
#line 238 "untupling.m"
    {
#line 238 "untupling.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__untupling__ArgModes_23, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 239 "untupling.m"
    {
#line 239 "untupling.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__untupling__Goal_24, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44);
    }
#line 240 "untupling.m"
    {
#line 240 "untupling.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__untupling__VarSet_25, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45);
    }
#line 241 "untupling.m"
    {
#line 241 "untupling.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__untupling__VarTypes_26, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 242 "untupling.m"
    {
#line 242 "untupling.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48);
    }
#line 243 "untupling.m"
    {
#line 243 "untupling.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51);
    }
#line 246 "untupling.m"
    {
#line 246 "untupling.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__untupling__Num_28, transform_hlds__untupling__STATE_VARIABLE_Counter_0_39, transform_hlds__untupling__STATE_VARIABLE_Counter_40);
    }
#line 247 "untupling.m"
    {
#line 247 "untupling.m"
      transform_hlds__untupling__create_aux_pred_12_p_0(transform_hlds__untupling__PredId_9, transform_hlds__untupling__ProcId_10, transform_hlds__untupling__PredInfo0_16, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__untupling__Num_28, &transform_hlds__untupling__AuxPredId_29, &transform_hlds__untupling__AuxProcId_30, &transform_hlds__untupling__CallAux_31, &transform_hlds__untupling__AuxPredInfo_32, &transform_hlds__untupling__AuxProcInfo0_33, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53);
    }
#line 251 "untupling.m"
    transform_hlds__untupling__V_55_55 = (MR_Word) transform_hlds__untupling__UntupleMap_27;
#line 251 "untupling.m"
    {
#line 251 "untupling.m"
      transform_hlds__untupling__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 251 "untupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_54_54, 0) = ((MR_Box) (transform_hlds__untupling__V_55_55));
#line 251 "untupling.m"
    }
#line 250 "untupling.m"
    {
#line 250 "untupling.m"
      hlds__hlds_pred__proc_info_set_maybe_untuple_info_3_p_0(transform_hlds__untupling__V_54_54, transform_hlds__untupling__AuxProcInfo0_33, &transform_hlds__untupling__AuxProcInfo_34);
    }
#line 253 "untupling.m"
    {
#line 253 "untupling.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__untupling__AuxPredId_29, transform_hlds__untupling__AuxProcId_30, transform_hlds__untupling__AuxPredInfo_32, transform_hlds__untupling__AuxProcInfo_34, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36);
    }
#line 255 "untupling.m"
    {
#line 255 "untupling.m"
      transform_hlds__untupling__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_57_57, 0) = ((MR_Box) (transform_hlds__untupling__PredId_9));
#line 255 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_57_57, 1) = ((MR_Box) (transform_hlds__untupling__ProcId_10));
#line 255 "untupling.m"
    }
#line 256 "untupling.m"
    {
#line 256 "untupling.m"
      transform_hlds__untupling__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, 0) = ((MR_Box) (transform_hlds__untupling__AuxPredId_29));
#line 256 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, 1) = ((MR_Box) (transform_hlds__untupling__AuxProcId_30));
#line 256 "untupling.m"
    }
#line 256 "untupling.m"
    {
#line 256 "untupling.m"
      transform_hlds__untupling__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_58_58, 0) = ((MR_Box) (transform_hlds__untupling__V_60_60));
#line 256 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_58_58, 1) = ((MR_Box) (transform_hlds__untupling__CallAux_31));
#line 256 "untupling.m"
    }
#line 255 "untupling.m"
    {
#line 255 "untupling.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, ((MR_Box) (transform_hlds__untupling__V_57_57)), ((MR_Box) (transform_hlds__untupling__V_58_58)), transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37, transform_hlds__untupling__STATE_VARIABLE_TransformMap_38);
#line 255 "untupling.m"
      return;
    }
#line 223 "untupling.m"
  }
#line 217 "untupling.m"
}

#line 766 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
#line 766 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 766 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1)
#line 766 "untupling.m"
{
#line 766 "untupling.m"
  {
#line 766 "untupling.m"
    MR_Box transform_hlds__untupling__wrapper_arg_2;
#line 766 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 766 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_HeadVar__2_29;

#line 766 "untupling.m"
    {
#line 766 "untupling.m"
      transform_hlds__untupling__conv0_HeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__766__1_1_f_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1));
    }
#line 766 "untupling.m"
    transform_hlds__untupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__2_29));
#line 766 "untupling.m"
    return transform_hlds__untupling__wrapper_arg_2;
#line 766 "untupling.m"
  }
#line 766 "untupling.m"
}

#line 199 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
#line 199 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 199 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_5)
#line 199 "untupling.m"
{
#line 202 "untupling.m"
  while (MR_TRUE)
#line 202 "untupling.m"
    {
#line 202 "untupling.m"
      /* tailcall optimized into a loop */
#line 202 "untupling.m"
      {
#line 202 "untupling.m"
        MR_bool transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 202 "untupling.m"
        MR_Word transform_hlds__untupling__Type_3;
#line 202 "untupling.m"
        MR_Word transform_hlds__untupling__Types_4;

#line 202 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 202 "untupling.m"
          {
#line 202 "untupling.m"
            transform_hlds__untupling__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 202 "untupling.m"
            transform_hlds__untupling__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "untupling.m"
            {
#line 203 "untupling.m"
              MR_Word transform_hlds__untupling__V_10_10;
#line 749 "untupling.m"
              MR_Word transform_hlds__untupling__TypeArgs_16;
#line 743 "untupling.m"
              MR_Word transform_hlds__untupling__TypeCtor_15;
#line 203 "untupling.m"
              MR_Word transform_hlds__untupling__V_75_75;
#line 203 "untupling.m"
              MR_Word transform_hlds__untupling__V_76_76;

#line 743 "untupling.m"
              {
#line 743 "untupling.m"
                transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__Type_3, &transform_hlds__untupling__TypeCtor_15, &transform_hlds__untupling__TypeArgs_16);
              }
#line 743 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 744 "untupling.m"
                {
#line 744 "untupling.m"
                  transform_hlds__untupling__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__untupling__TypeCtor_15);
                }
#line 749 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 746 "untupling.m"
                {
#line 746 "untupling.m"
                  MR_Integer transform_hlds__untupling__Arity_17;
#line 746 "untupling.m"
                  MR_Word transform_hlds__untupling__ConsId_18;

#line 746 "untupling.m"
                  {
#line 746 "untupling.m"
                    transform_hlds__untupling__Arity_17 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__TypeArgs_16);
                  }
#line 747 "untupling.m"
                  {
#line 747 "untupling.m"
                    transform_hlds__untupling__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 747 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_18, 1) = ((MR_Box) (transform_hlds__untupling__Arity_17));
#line 747 "untupling.m"
                  }
#line 748 "untupling.m"
                  {
#line 748 "untupling.m"
                    transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_18));
#line 748 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 1) = ((MR_Box) (transform_hlds__untupling__TypeArgs_16));
#line 748 "untupling.m"
                  }
#line 746 "untupling.m"
                }
#line 749 "untupling.m"
              else
#line 768 "untupling.m"
                {
#line 768 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtorName_22;
#line 768 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtorArgs_23;
#line 768 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtor_39;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeInfo_65_71;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeInfo_66_72;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeDefn_19;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeBody_20;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtor_21;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__V_29_29;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__V_30_30;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__V_31_31;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__V_32_32;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__V_69_69;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__V_70_70;
#line 756 "untupling.m"
                  MR_Word transform_hlds__untupling__V_42_42;
#line 756 "untupling.m"
                  MR_Word transform_hlds__untupling__V_43_43;
#line 756 "untupling.m"
                  MR_Word transform_hlds__untupling__V_44_44;
#line 756 "untupling.m"
                  MR_Word transform_hlds__untupling__V_45_45;
#line 756 "untupling.m"
                  MR_Word transform_hlds__untupling__V_46_46;
#line 756 "untupling.m"
                  MR_Word transform_hlds__untupling__V_47_47;
#line 756 "untupling.m"
                  MR_Word transform_hlds__untupling__V_48_48;
#line 756 "untupling.m"
                  MR_Word transform_hlds__untupling__V_49_49;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_50_50;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_53_53;
#line 760 "untupling.m"
                  MR_Word transform_hlds__untupling__V_24_24;
#line 760 "untupling.m"
                  MR_Word transform_hlds__untupling__V_25_25;
#line 762 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtorInfo_60_66;

#line 752 "untupling.m"
                  {
#line 752 "untupling.m"
                    transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__Type_3, &transform_hlds__untupling__TypeCtor_39, &transform_hlds__untupling__V_69_69);
                  }
#line 752 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                    {
#line 5776 "transform_hlds.untupling.c"
                      transform_hlds__untupling__TypeInfo_65_71 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 752 "untupling.m"
                      {
#line 752 "untupling.m"
                        transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_65_71, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__untupling__V_69_69)));
                      }
#line 752 "untupling.m"
                      if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                        {
#line 753 "untupling.m"
                          {
#line 753 "untupling.m"
                            transform_hlds__untupling__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__untupling__TypeTable_5, transform_hlds__untupling__TypeCtor_39, &transform_hlds__untupling__TypeDefn_19);
                          }
#line 752 "untupling.m"
                          if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                            {
#line 754 "untupling.m"
                              transform_hlds__untupling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 754 "untupling.m"
                              {
#line 754 "untupling.m"
                                hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__untupling__TypeDefn_19, &transform_hlds__untupling__V_70_70);
                              }
#line 5803 "transform_hlds.untupling.c"
                              transform_hlds__untupling__TypeInfo_66_72 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 754 "untupling.m"
                              {
#line 754 "untupling.m"
                                transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_66_72, ((MR_Box) (transform_hlds__untupling__V_29_29)), ((MR_Box) (transform_hlds__untupling__V_70_70)));
                              }
#line 752 "untupling.m"
                              if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                                {
#line 755 "untupling.m"
                                  {
#line 755 "untupling.m"
                                    hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__untupling__TypeDefn_19, &transform_hlds__untupling__TypeBody_20);
                                  }
#line 756 "untupling.m"
                                  transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__TypeBody_20)) == (MR_mktag((MR_Integer) 1)));
#line 756 "untupling.m"
                                  if (transform_hlds__untupling__succeeded)
#line 756 "untupling.m"
                                    {
#line 756 "untupling.m"
                                      transform_hlds__untupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 0)));
#line 756 "untupling.m"
                                      transform_hlds__untupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 1)));
#line 756 "untupling.m"
                                      transform_hlds__untupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 2)));
#line 756 "untupling.m"
                                      transform_hlds__untupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 3)));
#line 756 "untupling.m"
                                      transform_hlds__untupling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 4)));
#line 756 "untupling.m"
                                      transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 5)));
#line 756 "untupling.m"
                                      transform_hlds__untupling__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 756 "untupling.m"
                                      transform_hlds__untupling__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 756 "untupling.m"
                                      transform_hlds__untupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 7)));
#line 756 "untupling.m"
                                      transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 756 "untupling.m"
                                      if (transform_hlds__untupling__succeeded)
#line 756 "untupling.m"
                                        {
#line 756 "untupling.m"
                                          transform_hlds__untupling__SingleCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_30_30, (MR_Integer) 0)));
#line 756 "untupling.m"
                                          transform_hlds__untupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_30_30, (MR_Integer) 1)));
#line 756 "untupling.m"
                                          transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "untupling.m"
                                          if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                                            {
#line 757 "untupling.m"
                                              transform_hlds__untupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 0)));
#line 757 "untupling.m"
                                              transform_hlds__untupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 1)));
#line 757 "untupling.m"
                                              transform_hlds__untupling__SingleCtorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 2)));
#line 757 "untupling.m"
                                              transform_hlds__untupling__SingleCtorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 3)));
#line 757 "untupling.m"
                                              transform_hlds__untupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 4)));
#line 757 "untupling.m"
                                              transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "untupling.m"
                                              if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                                                {
#line 760 "untupling.m"
                                                  transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__SingleCtorArgs_23)) == (MR_mktag((MR_Integer) 1)));
#line 760 "untupling.m"
                                                  if (transform_hlds__untupling__succeeded)
#line 760 "untupling.m"
                                                    {
#line 760 "untupling.m"
                                                      transform_hlds__untupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_23, (MR_Integer) 0)));
#line 760 "untupling.m"
                                                      transform_hlds__untupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_23, (MR_Integer) 1)));
#line 5885 "transform_hlds.untupling.c"
                                                      transform_hlds__untupling__TypeCtorInfo_60_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 762 "untupling.m"
                                                      {
#line 762 "untupling.m"
                                                        transform_hlds__untupling__succeeded = mercury__list__member_2_p_0(transform_hlds__untupling__TypeCtorInfo_60_66, ((MR_Box) (transform_hlds__untupling__Type_3)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                      }
#line 762 "untupling.m"
                                                      transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 760 "untupling.m"
                                                    }
#line 752 "untupling.m"
                                                }
#line 752 "untupling.m"
                                            }
#line 756 "untupling.m"
                                        }
#line 756 "untupling.m"
                                    }
#line 752 "untupling.m"
                                }
#line 752 "untupling.m"
                            }
#line 752 "untupling.m"
                        }
#line 752 "untupling.m"
                    }
#line 768 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 764 "untupling.m"
                    {
#line 764 "untupling.m"
                      MR_Word transform_hlds__untupling__TypeCtorInfo_61_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 764 "untupling.m"
                      MR_Word transform_hlds__untupling__ExpandedTypes_26;
#line 764 "untupling.m"
                      MR_Integer transform_hlds__untupling__Arity_37;
#line 764 "untupling.m"
                      MR_Word transform_hlds__untupling__ConsId_38;

#line 764 "untupling.m"
                      {
#line 764 "untupling.m"
                        transform_hlds__untupling__Arity_37 = mercury__list__length_1_f_0(transform_hlds__untupling__TypeCtorInfo_61_67, transform_hlds__untupling__SingleCtorArgs_23);
                      }
#line 765 "untupling.m"
                      {
#line 765 "untupling.m"
                        transform_hlds__untupling__ConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 765 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 765 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 1) = ((MR_Box) (transform_hlds__untupling__SingleCtorName_22));
#line 765 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 2) = ((MR_Box) (transform_hlds__untupling__Arity_37));
#line 765 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 3) = ((MR_Box) (transform_hlds__untupling__TypeCtor_39));
#line 765 "untupling.m"
                      }
#line 766 "untupling.m"
                      {
#line 766 "untupling.m"
                        transform_hlds__untupling__ExpandedTypes_26 = mercury__list__map_2_f_0(transform_hlds__untupling__TypeCtorInfo_61_67, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[3], transform_hlds__untupling__SingleCtorArgs_23);
                      }
#line 767 "untupling.m"
                      {
#line 767 "untupling.m"
                        transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "untupling.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_38));
#line 767 "untupling.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 1) = ((MR_Box) (transform_hlds__untupling__ExpandedTypes_26));
#line 767 "untupling.m"
                      }
#line 764 "untupling.m"
                    }
#line 768 "untupling.m"
                  else
#line 769 "untupling.m"
                    transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 768 "untupling.m"
                }
#line 203 "untupling.m"
              transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 203 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 203 "untupling.m"
                {
#line 203 "untupling.m"
                  transform_hlds__untupling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, (MR_Integer) 0)));
#line 203 "untupling.m"
                  transform_hlds__untupling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, (MR_Integer) 1)));
#line 203 "untupling.m"
                }
#line 203 "untupling.m"
            }
#line 204 "untupling.m"
            if (!(transform_hlds__untupling__succeeded))
#line 204 "untupling.m"
              {
#line 204 "untupling.m"
                /* direct tailcall eliminated */
#line 204 "untupling.m"
                {
#line 204 "untupling.m"
                  MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__Types_4;

#line 204 "untupling.m"
                  transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 204 "untupling.m"
                }
#line 204 "untupling.m"
                continue;
#line 204 "untupling.m"
              }
#line 202 "untupling.m"
          }
#line 202 "untupling.m"
        return transform_hlds__untupling__succeeded;
#line 202 "untupling.m"
      }
#line 202 "untupling.m"
      break;
#line 202 "untupling.m"
    }
#line 199 "untupling.m"
}

#line 193 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
#line 193 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 193 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 193 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 193 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 193 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 193 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 193 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 193 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7)
#line 193 "untupling.m"
{
#line 193 "untupling.m"
  {
#line 193 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 193 "untupling.m"
    MR_Word transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36;
#line 193 "untupling.m"
    MR_Word transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38;
#line 193 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40;

#line 193 "untupling.m"
    {
#line 193 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36, ((MR_Word) transform_hlds__untupling__wrapper_arg_4), &transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38, ((MR_Word) transform_hlds__untupling__wrapper_arg_6), &transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40);
    }
#line 193 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36));
#line 193 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38));
#line 193 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40));
#line 193 "untupling.m"
  }
#line 193 "untupling.m"
}

#line 169 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
#line 169 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_8,
#line 169 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20,
#line 169 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21,
#line 169 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22,
#line 169 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_23,
#line 169 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_24,
#line 169 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_25)
#line 169 "untupling.m"
{
#line 172 "untupling.m"
  {
#line 172 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 172 "untupling.m"
    MR_Word transform_hlds__untupling__TypeTable_12;
#line 172 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_13;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__TypeCtorInfo_38_38;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_56_56;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_57_57;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__ImportStatus_14;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__TypeVarSet_16;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__ExistQVars_17;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__ArgTypes_18;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_26_26;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_27_27;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_28_28;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_29_29;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_30_30;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_31_31;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_32_32;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_33_33;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_50_50;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_51_51;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_52_52;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_53_53;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__V_54_54;
#line 186 "untupling.m"
    MR_Word transform_hlds__untupling__V_15_15;

#line 173 "untupling.m"
    {
#line 173 "untupling.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__untupling__TypeTable_12);
    }
#line 174 "untupling.m"
    {
#line 174 "untupling.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__untupling__PredId_8, &transform_hlds__untupling__PredInfo_13);
    }
#line 178 "untupling.m"
    {
#line 178 "untupling.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__ImportStatus_14);
    }
#line 179 "untupling.m"
    {
#line 179 "untupling.m"
      transform_hlds__untupling__V_26_26 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__untupling__ImportStatus_14);
    }
#line 179 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_26_26 == (MR_Integer) 1);
#line 178 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 178 "untupling.m"
      {
#line 180 "untupling.m"
        transform_hlds__untupling__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 180 "untupling.m"
        {
#line 180 "untupling.m"
          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_50_50);
        }
#line 180 "untupling.m"
        {
#line 180 "untupling.m"
          transform_hlds__untupling__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(transform_hlds__untupling__V_27_27, transform_hlds__untupling__V_50_50);
        }
#line 178 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 178 "untupling.m"
          {
#line 183 "untupling.m"
            transform_hlds__untupling__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "untupling.m"
            {
#line 183 "untupling.m"
              hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_51_51);
            }
#line 6180 "transform_hlds.untupling.c"
            transform_hlds__untupling__TypeInfo_56_56 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 183 "untupling.m"
            {
#line 183 "untupling.m"
              transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_56_56, ((MR_Box) (transform_hlds__untupling__V_28_28)), ((MR_Box) (transform_hlds__untupling__V_51_51)));
            }
#line 178 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 178 "untupling.m"
              {
#line 184 "untupling.m"
                transform_hlds__untupling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "untupling.m"
                {
#line 184 "untupling.m"
                  hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_52_52);
                }
#line 6198 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeInfo_57_57 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 184 "untupling.m"
                {
#line 184 "untupling.m"
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_57_57, ((MR_Box) (transform_hlds__untupling__V_29_29)), ((MR_Box) (transform_hlds__untupling__V_52_52)));
                }
#line 178 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 178 "untupling.m"
                  {
#line 185 "untupling.m"
                    transform_hlds__untupling__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "untupling.m"
                    transform_hlds__untupling__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "untupling.m"
                    transform_hlds__untupling__V_30_30 = (MR_Word) &transform_hlds__untupling_scalar_common_2[5];
#line 185 "untupling.m"
                    {
#line 185 "untupling.m"
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_53_53);
                    }
#line 185 "untupling.m"
                    {
#line 185 "untupling.m"
                      transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(transform_hlds__untupling__V_30_30, transform_hlds__untupling__V_53_53);
                    }
#line 178 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 178 "untupling.m"
                      {
#line 186 "untupling.m"
                        {
#line 186 "untupling.m"
                          transform_hlds__untupling__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "untupling.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 186 "untupling.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_33_33, 1) = NULL;
#line 186 "untupling.m"
                        }
#line 186 "untupling.m"
                        {
#line 186 "untupling.m"
                          hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_54_54);
                        }
#line 186 "untupling.m"
                        {
#line 186 "untupling.m"
                          transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(transform_hlds__untupling__V_33_33, transform_hlds__untupling__V_54_54);
                        }
#line 178 "untupling.m"
                        if (transform_hlds__untupling__succeeded)
#line 178 "untupling.m"
                          {
#line 187 "untupling.m"
                            {
#line 187 "untupling.m"
                              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__TypeVarSet_16, &transform_hlds__untupling__ExistQVars_17, &transform_hlds__untupling__ArgTypes_18);
                            }
#line 6258 "transform_hlds.untupling.c"
                            transform_hlds__untupling__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 188 "untupling.m"
                            {
#line 188 "untupling.m"
                              transform_hlds__untupling__succeeded = mercury__varset__is_empty_1_p_0(transform_hlds__untupling__TypeCtorInfo_38_38, transform_hlds__untupling__TypeVarSet_16);
                            }
#line 178 "untupling.m"
                            if (transform_hlds__untupling__succeeded)
#line 178 "untupling.m"
                              {
#line 189 "untupling.m"
                                transform_hlds__untupling__succeeded = (transform_hlds__untupling__ExistQVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "untupling.m"
                                if (transform_hlds__untupling__succeeded)
#line 190 "untupling.m"
                                  {
#line 190 "untupling.m"
                                    transform_hlds__untupling__succeeded = transform_hlds__untupling__at_least_one_expandable_type_2_p_0(transform_hlds__untupling__ArgTypes_18, transform_hlds__untupling__TypeTable_12);
                                  }
#line 178 "untupling.m"
                              }
#line 178 "untupling.m"
                          }
#line 178 "untupling.m"
                      }
#line 178 "untupling.m"
                  }
#line 178 "untupling.m"
              }
#line 178 "untupling.m"
          }
#line 178 "untupling.m"
      }
#line 195 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 192 "untupling.m"
      {
#line 192 "untupling.m"
        MR_Word transform_hlds__untupling__ProcIds_19;
#line 192 "untupling.m"
        MR_Word transform_hlds__untupling__V_34_34;
#line 193 "untupling.m"
        MR_Box transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21;
#line 193 "untupling.m"
        MR_Box transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23;
#line 193 "untupling.m"
        MR_Box transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25;

#line 192 "untupling.m"
        {
#line 192 "untupling.m"
          transform_hlds__untupling__ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__untupling__PredInfo_13);
        }
#line 193 "untupling.m"
        {
#line 193 "untupling.m"
          transform_hlds__untupling__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 193 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_5[0]));
#line 193 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 1) = ((MR_Box) (transform_hlds__untupling__expand_args_in_pred_7_p_0_1));
#line 193 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 193 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 3) = ((MR_Box) (transform_hlds__untupling__PredId_8));
#line 193 "untupling.m"
        }
#line 193 "untupling.m"
        {
#line 193 "untupling.m"
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, transform_hlds__untupling__V_34_34, transform_hlds__untupling__ProcIds_19, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22)), &transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_Counter_0_24)), &transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25);
        }
#line 193 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21);
#line 193 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_TransformMap_23 = ((MR_Word) transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23);
#line 193 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Counter_25 = ((MR_Word) transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25);
#line 192 "untupling.m"
      }
#line 195 "untupling.m"
    else
#line 196 "untupling.m"
      {
#line 196 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Counter_25 = transform_hlds__untupling__STATE_VARIABLE_Counter_0_24;
#line 196 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_TransformMap_23 = transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22;
#line 196 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20;
#line 196 "untupling.m"
      }
#line 172 "untupling.m"
  }
#line 169 "untupling.m"
}

#line 461 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
#line 461 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 461 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 461 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 461 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3)
#line 461 "untupling.m"
{
#line 461 "untupling.m"
  {
#line 461 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 461 "untupling.m"
    MR_Word transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11;

#line 461 "untupling.m"
    {
#line 461 "untupling.m"
      transform_hlds__untupling__fix_calls_in_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11);
    }
#line 461 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11));
#line 461 "untupling.m"
  }
#line 461 "untupling.m"
}

#line 166 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
#line 166 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 166 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 166 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 166 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 166 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 166 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 166 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 166 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7)
#line 166 "untupling.m"
{
#line 166 "untupling.m"
  {
#line 166 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 166 "untupling.m"
    MR_Word transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21;
#line 166 "untupling.m"
    MR_Word transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23;
#line 166 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25;

#line 166 "untupling.m"
    {
#line 166 "untupling.m"
      transform_hlds__untupling__expand_args_in_pred_7_p_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21, ((MR_Word) transform_hlds__untupling__wrapper_arg_4), &transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23, ((MR_Word) transform_hlds__untupling__wrapper_arg_6), &transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25);
    }
#line 166 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21));
#line 166 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23));
#line 166 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25));
#line 166 "untupling.m"
  }
#line 166 "untupling.m"
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
#line 147 "untupling.m"
  {
#line 147 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 147 "untupling.m"
    MR_Word transform_hlds__untupling__TransformMap_7;
#line 147 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12;
#line 147 "untupling.m"
    MR_Word transform_hlds__untupling__PredIds_18;
#line 147 "untupling.m"
    MR_Word transform_hlds__untupling__V_22_22;
#line 147 "untupling.m"
    MR_Word transform_hlds__untupling__V_23_23;
#line 147 "untupling.m"
    MR_Word transform_hlds__untupling__PredIds_42;
#line 147 "untupling.m"
    MR_Word transform_hlds__untupling__V_43_43;
#line 166 "untupling.m"
    MR_Word transform_hlds__untupling__V_19_19;
#line 166 "untupling.m"
    MR_Box transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12;
#line 166 "untupling.m"
    MR_Box transform_hlds__untupling__conv4_TransformMap_7;
#line 166 "untupling.m"
    MR_Box transform_hlds__untupling__conv3_V_19_19;
#line 461 "untupling.m"
    MR_Box transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9;

#line 165 "untupling.m"
    {
#line 165 "untupling.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__untupling__PredIds_18);
    }
#line 167 "untupling.m"
    {
#line 167 "untupling.m"
      transform_hlds__untupling__V_22_22 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0);
    }
#line 167 "untupling.m"
    {
#line 167 "untupling.m"
      transform_hlds__untupling__V_23_23 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 166 "untupling.m"
    {
#line 166 "untupling.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[2], transform_hlds__untupling__PredIds_18, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12, ((MR_Box) (transform_hlds__untupling__V_22_22)), &transform_hlds__untupling__conv4_TransformMap_7, ((MR_Box) (transform_hlds__untupling__V_23_23)), &transform_hlds__untupling__conv3_V_19_19);
    }
#line 166 "untupling.m"
    transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12);
#line 166 "untupling.m"
    transform_hlds__untupling__TransformMap_7 = ((MR_Word) transform_hlds__untupling__conv4_TransformMap_7);
#line 166 "untupling.m"
    transform_hlds__untupling__V_19_19 = ((MR_Word) transform_hlds__untupling__conv3_V_19_19);
#line 460 "untupling.m"
    {
#line 460 "untupling.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12, &transform_hlds__untupling__PredIds_42);
    }
#line 461 "untupling.m"
    {
#line 461 "untupling.m"
      transform_hlds__untupling__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 461 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_4[0]));
#line 461 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 1) = ((MR_Box) (transform_hlds__untupling__untuple_arguments_4_p_0_2));
#line 461 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 461 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 3) = ((MR_Box) (transform_hlds__untupling__TransformMap_7));
#line 461 "untupling.m"
    }
#line 461 "untupling.m"
    {
#line 461 "untupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__untupling__V_43_43, transform_hlds__untupling__PredIds_42, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12)), &transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9);
    }
#line 461 "untupling.m"
    *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9);
#line 147 "untupling.m"
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
