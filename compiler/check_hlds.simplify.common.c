/*
** Automatically generated from `common.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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


/* :- module check_hlds.simplify.common. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__common__init
ENDINIT
*/

#include "check_hlds.simplify.common.mih"


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
#include "eqvclass.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.simplify.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.pd_cost.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 144 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3];

#line 159 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0;

#line 162 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1];

#line 165 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1];

#line 168 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0[1];

#line 171 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0[1];

#line 174 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 180 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 183 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 186 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

#line 189 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

#line 192 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[4];

#line 195 "check_hlds.simplify.common.c"
static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[4];

#line 198 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0;

#line 201 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1];

#line 204 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1];

#line 207 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1];

#line 210 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1];

#line 213 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2];

#line 216 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0;

#line 219 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1];

#line 222 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1];

#line 225 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1];

#line 228 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1];

#line 231 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
#line 234 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 236 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 239 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
#line 242 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 244 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 246 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 249 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
#line 252 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 254 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 257 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
#line 260 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 262 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 264 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 267 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
#line 270 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 272 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 275 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
#line 278 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 280 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 282 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 285 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
#line 288 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 290 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 293 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
#line 296 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 298 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 300 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 303 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
#line 306 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 308 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 311 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
#line 314 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 316 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 318 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 321 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
#line 324 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 326 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 329 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
#line 332 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 334 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 336 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 339 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
#line 342 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 344 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 347 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
#line 350 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 352 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 354 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 352 "common.m"
static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__352__1_4_p_0(
#line 352 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_72,
#line 352 "common.m"
  MR_Integer * check_hlds__simplify__common__HeadVar__2_73,
#line 352 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_74,
#line 352 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__4_75);

#line 274 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0(
#line 274 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 274 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0(
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 275 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0(
#line 275 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 275 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0(
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 267 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0(
#line 267 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 267 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0(
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 278 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0(
#line 278 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 278 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 278 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 278 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0(
#line 278 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 278 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 268 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0(
#line 268 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 268 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0(
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 280 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0(
#line 280 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 280 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 280 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 280 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0(
#line 280 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 280 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 919 "common.m"
static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
#line 919 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_5,
#line 919 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_6,
#line 919 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_17,
#line 919 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_18);

#line 893 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
#line 893 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 893 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 869 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
#line 869 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 869 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 827 "common.m"
static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_11,
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_12,
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__UniMode_13,
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_14,
#line 827 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_15,
#line 827 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_33,
#line 827 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_34,
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_35,
#line 827 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_36);

#line 787 "common.m"
static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_10,
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_11,
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__OldOutputArgs_12,
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_13,
#line 787 "common.m"
  MR_Word * check_hlds__simplify__common__AssignGoals_14,
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_27,
#line 787 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_28,
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_29,
#line 787 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_30);

#line 753 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
#line 753 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 753 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 753 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 735 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
#line 735 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 735 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_8,
#line 735 "common.m"
  MR_Word check_hlds__simplify__common__Eqv_9,
#line 735 "common.m"
  MR_Word * check_hlds__simplify__common__OutputArgs_10,
#line 735 "common.m"
  MR_Word * check_hlds__simplify__common__PrevContext_11);

#line 693 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
#line 693 "common.m"
  MR_Word check_hlds__simplify__common__VarTypes_1,
#line 693 "common.m"
  MR_Word check_hlds__simplify__common__ModuleInfo_2,
#line 693 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3,
#line 693 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__4_4,
#line 693 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__5_5,
#line 693 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__6_6,
#line 693 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__7_7);

#line 599 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__SeenCall_12,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_13,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_14,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__Modes_15,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 599 "common.m"
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__Common0_19,
#line 599 "common.m"
  MR_Word * check_hlds__simplify__common__Common_20,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 599 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49);

#line 523 "common.m"
static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
#line 523 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_6,
#line 523 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_7,
#line 523 "common.m"
  MR_Word check_hlds__simplify__common__Struct_8,
#line 523 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14,
#line 523 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);

#line 509 "common.m"
static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
#line 509 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_7,
#line 509 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_8,
#line 509 "common.m"
  MR_Word check_hlds__simplify__common__Struct_9,
#line 509 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_10,
#line 509 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_16,
#line 509 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_17);

#line 491 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
#line 491 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 491 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 491 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 480 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
#line 480 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 480 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 480 "common.m"
  MR_Integer check_hlds__simplify__common__VarId_8,
#line 480 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9);

#line 469 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
#line 469 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 469 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 469 "common.m"
  MR_Word check_hlds__simplify__common__ArgVarIds_8,
#line 469 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9);

#line 398 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__Var_15,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_16,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_17,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_18,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__CanFail_19,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__Mode_20,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_21,
#line 398 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_22,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_23,
#line 398 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_24,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 398 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 398 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49);

#line 352 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
#line 352 "common.m"
  MR_Box check_hlds__simplify__common__closure_arg,
#line 352 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 352 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_2,
#line 352 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_3,
#line 352 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_4);

#line 333 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__Var_13,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_14,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_15,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__Mode_16,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 333 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_19,
#line 333 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_20,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 333 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 333 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49);


static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_1[11][2];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_5[2][1];




static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: redundant"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Here is the previous"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_4[0])),
    ((MR_Box) (check_hlds__simplify__common__common_optimise_construct_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_5[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 907 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 915 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 923 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 931 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 939 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 946 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0 = {
  (MR_String) "call_args",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0,
  NULL,
  NULL,
  NULL
};

#line 961 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

#line 966 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0
  }
};

#line 975 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

#line 980 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0[1] = {
  (MR_Integer) 0
};

#line 985 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____call_args_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____call_args_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "call_args",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0
};

#line 1002 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1010 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1018 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1027 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1036 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0
  }
};

#line 1044 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0,
    (MR_TypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
  }
};

#line 1053 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
};

#line 1061 "check_hlds.simplify.common.c"
static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[4] = {
  (MR_String) "var_eqv",
  (MR_String) "all_structs",
  (MR_String) "since_call_structs",
  (MR_String) "seen_calls"
};

#line 1069 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0 = {
  (MR_String) "common_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0,
  NULL,
  NULL
};

#line 1084 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

#line 1089 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0
  }
};

#line 1098 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

#line 1103 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1] = {
  (MR_Integer) 0
};

#line 1108 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____common_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____common_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "common_info",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0
};

#line 1125 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_cons_id_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____cons_id_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____cons_id_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "cons_id_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1142 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_seen_calls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____seen_calls_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____seen_calls_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "seen_calls",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1159 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_struct_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____struct_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____struct_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "struct_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1176 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1182 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0 = {
  (MR_String) "structure",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0,
  NULL,
  NULL,
  NULL
};

#line 1197 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

#line 1202 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0
  }
};

#line 1211 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

#line 1216 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1] = {
  (MR_Integer) 0
};

#line 1221 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____structure_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____structure_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "structure",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0
};

#line 1238 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structures_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____structures_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____structures_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "structures",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1255 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
#line 1258 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1260 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1262 "check_hlds.simplify.common.c"
{
#line 1264 "check_hlds.simplify.common.c"
  {
#line 1266 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1269 "check_hlds.simplify.common.c"
    {
#line 1271 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____call_args_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1274 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1276 "check_hlds.simplify.common.c"
  }
#line 1278 "check_hlds.simplify.common.c"
}

#line 1281 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
#line 1284 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1286 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1288 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1290 "check_hlds.simplify.common.c"
{
#line 1292 "check_hlds.simplify.common.c"
  {
#line 1294 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1297 "check_hlds.simplify.common.c"
    {
#line 1299 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____call_args_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1302 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1304 "check_hlds.simplify.common.c"
  }
#line 1306 "check_hlds.simplify.common.c"
}

#line 1309 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
#line 1312 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1314 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1316 "check_hlds.simplify.common.c"
{
#line 1318 "check_hlds.simplify.common.c"
  {
#line 1320 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1323 "check_hlds.simplify.common.c"
    {
#line 1325 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____common_info_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1328 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1330 "check_hlds.simplify.common.c"
  }
#line 1332 "check_hlds.simplify.common.c"
}

#line 1335 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
#line 1338 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1340 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1342 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1344 "check_hlds.simplify.common.c"
{
#line 1346 "check_hlds.simplify.common.c"
  {
#line 1348 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1351 "check_hlds.simplify.common.c"
    {
#line 1353 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____common_info_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1356 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1358 "check_hlds.simplify.common.c"
  }
#line 1360 "check_hlds.simplify.common.c"
}

#line 1363 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
#line 1366 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1368 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1370 "check_hlds.simplify.common.c"
{
#line 1372 "check_hlds.simplify.common.c"
  {
#line 1374 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1377 "check_hlds.simplify.common.c"
    {
#line 1379 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____cons_id_map_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1382 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1384 "check_hlds.simplify.common.c"
  }
#line 1386 "check_hlds.simplify.common.c"
}

#line 1389 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
#line 1392 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1394 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1396 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1398 "check_hlds.simplify.common.c"
{
#line 1400 "check_hlds.simplify.common.c"
  {
#line 1402 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1405 "check_hlds.simplify.common.c"
    {
#line 1407 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____cons_id_map_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1410 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1412 "check_hlds.simplify.common.c"
  }
#line 1414 "check_hlds.simplify.common.c"
}

#line 1417 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
#line 1420 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1422 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1424 "check_hlds.simplify.common.c"
{
#line 1426 "check_hlds.simplify.common.c"
  {
#line 1428 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1431 "check_hlds.simplify.common.c"
    {
#line 1433 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____seen_calls_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1436 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1438 "check_hlds.simplify.common.c"
  }
#line 1440 "check_hlds.simplify.common.c"
}

#line 1443 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
#line 1446 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1448 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1450 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1452 "check_hlds.simplify.common.c"
{
#line 1454 "check_hlds.simplify.common.c"
  {
#line 1456 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1459 "check_hlds.simplify.common.c"
    {
#line 1461 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____seen_calls_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1464 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1466 "check_hlds.simplify.common.c"
  }
#line 1468 "check_hlds.simplify.common.c"
}

#line 1471 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
#line 1474 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1476 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1478 "check_hlds.simplify.common.c"
{
#line 1480 "check_hlds.simplify.common.c"
  {
#line 1482 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1485 "check_hlds.simplify.common.c"
    {
#line 1487 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____struct_map_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1490 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1492 "check_hlds.simplify.common.c"
  }
#line 1494 "check_hlds.simplify.common.c"
}

#line 1497 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
#line 1500 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1502 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1504 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1506 "check_hlds.simplify.common.c"
{
#line 1508 "check_hlds.simplify.common.c"
  {
#line 1510 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1513 "check_hlds.simplify.common.c"
    {
#line 1515 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____struct_map_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1518 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1520 "check_hlds.simplify.common.c"
  }
#line 1522 "check_hlds.simplify.common.c"
}

#line 1525 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
#line 1528 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1530 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1532 "check_hlds.simplify.common.c"
{
#line 1534 "check_hlds.simplify.common.c"
  {
#line 1536 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1539 "check_hlds.simplify.common.c"
    {
#line 1541 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____structure_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1544 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1546 "check_hlds.simplify.common.c"
  }
#line 1548 "check_hlds.simplify.common.c"
}

#line 1551 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
#line 1554 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1556 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1558 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1560 "check_hlds.simplify.common.c"
{
#line 1562 "check_hlds.simplify.common.c"
  {
#line 1564 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1567 "check_hlds.simplify.common.c"
    {
#line 1569 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____structure_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1572 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1574 "check_hlds.simplify.common.c"
  }
#line 1576 "check_hlds.simplify.common.c"
}

#line 1579 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
#line 1582 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1584 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1586 "check_hlds.simplify.common.c"
{
#line 1588 "check_hlds.simplify.common.c"
  {
#line 1590 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1593 "check_hlds.simplify.common.c"
    {
#line 1595 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____structures_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1598 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1600 "check_hlds.simplify.common.c"
  }
#line 1602 "check_hlds.simplify.common.c"
}

#line 1605 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
#line 1608 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1610 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1612 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1614 "check_hlds.simplify.common.c"
{
#line 1616 "check_hlds.simplify.common.c"
  {
#line 1618 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1621 "check_hlds.simplify.common.c"
    {
#line 1623 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____structures_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1626 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1628 "check_hlds.simplify.common.c"
  }
#line 1630 "check_hlds.simplify.common.c"
}

#line 352 "common.m"
static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__352__1_4_p_0(
#line 352 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_72,
#line 352 "common.m"
  MR_Integer * check_hlds__simplify__common__HeadVar__2_73,
#line 352 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_74,
#line 352 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__4_75)
#line 352 "common.m"
{
#line 352 "common.m"
  {
#line 352 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 352 "common.m"
    {
#line 352 "common.m"
      mercury__eqvclass__ensure_element_partition_id_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__HeadVar__1_72)), check_hlds__simplify__common__HeadVar__2_73, check_hlds__simplify__common__HeadVar__3_74, check_hlds__simplify__common__HeadVar__4_75);
#line 352 "common.m"
      return;
    }
#line 352 "common.m"
  }
#line 352 "common.m"
}

#line 274 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0(
#line 274 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 274 "common.m"
{
#line 274 "common.m"
  {
#line 274 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 274 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
#line 274 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

#line 274 "common.m"
    {
#line 274 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
#line 274 "common.m"
      return;
    }
#line 274 "common.m"
  }
#line 274 "common.m"
}

#line 274 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0(
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 274 "common.m"
{
#line 274 "common.m"
  {
#line 274 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 274 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
#line 274 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

#line 274 "common.m"
    {
#line 274 "common.m"
      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 274 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 274 "common.m"
  }
#line 274 "common.m"
}

#line 275 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0(
#line 275 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 275 "common.m"
{
#line 275 "common.m"
  {
#line 275 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 275 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_9 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
#line 275 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_10 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

#line 275 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_9 == check_hlds__simplify__common__CastY_10);
#line 275 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 1749 "check_hlds.simplify.common.c"
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
#line 275 "common.m"
    else
#line 275 "common.m"
      {
#line 275 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 275 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
#line 275 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8;

#line 275 "common.m"
        {
#line 275 "common.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], &check_hlds__simplify__common__V_8_8, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_6_6)));
        }
#line 1771 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_8_8 == (MR_Integer) 0);
#line 275 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 275 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 275 "common.m"
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_8_8;
#line 275 "common.m"
        else
#line 275 "common.m"
          {
#line 275 "common.m"
            {
#line 275 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
#line 275 "common.m"
              return;
            }
#line 275 "common.m"
          }
#line 275 "common.m"
      }
#line 275 "common.m"
  }
#line 275 "common.m"
}

#line 275 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0(
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 275 "common.m"
{
#line 275 "common.m"
  {
#line 275 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 275 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_7 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
#line 275 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_8 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

#line 275 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_7 == check_hlds__simplify__common__CastY_8);
#line 275 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 275 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 275 "common.m"
    else
#line 275 "common.m"
      {
#line 275 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_10_10;
#line 275 "common.m"
        MR_Word check_hlds__simplify__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 275 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 275 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));

#line 1838 "check_hlds.simplify.common.c"
        {
#line 1840 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__V_3_3)), ((MR_Box) (check_hlds__simplify__common__V_5_5)));
        }
#line 275 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 275 "common.m"
          {
#line 1847 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_10_10 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 1849 "check_hlds.simplify.common.c"
            {
#line 1851 "check_hlds.simplify.common.c"
              return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_10_10, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_6_6)));
            }
#line 275 "common.m"
          }
#line 275 "common.m"
      }
#line 275 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 275 "common.m"
  }
#line 275 "common.m"
}

#line 267 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0(
#line 267 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 267 "common.m"
{
#line 267 "common.m"
  {
#line 267 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 267 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
#line 267 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

#line 267 "common.m"
    {
#line 267 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
#line 267 "common.m"
      return;
    }
#line 267 "common.m"
  }
#line 267 "common.m"
}

#line 267 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0(
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 267 "common.m"
{
#line 267 "common.m"
  {
#line 267 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 267 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
#line 267 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

#line 267 "common.m"
    {
#line 267 "common.m"
      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 267 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 267 "common.m"
  }
#line 267 "common.m"
}

#line 278 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0(
#line 278 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 278 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 278 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 278 "common.m"
{
#line 278 "common.m"
  {
#line 278 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 278 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
#line 278 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

#line 278 "common.m"
    {
#line 278 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
#line 278 "common.m"
      return;
    }
#line 278 "common.m"
  }
#line 278 "common.m"
}

#line 278 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0(
#line 278 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 278 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 278 "common.m"
{
#line 278 "common.m"
  {
#line 278 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 278 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
#line 278 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

#line 278 "common.m"
    {
#line 278 "common.m"
      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 278 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 278 "common.m"
  }
#line 278 "common.m"
}

#line 268 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0(
#line 268 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 268 "common.m"
{
#line 268 "common.m"
  {
#line 268 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 268 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
#line 268 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

#line 268 "common.m"
    {
#line 268 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
#line 268 "common.m"
      return;
    }
#line 268 "common.m"
  }
#line 268 "common.m"
}

#line 268 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0(
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 268 "common.m"
{
#line 268 "common.m"
  {
#line 268 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 268 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
#line 268 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

#line 268 "common.m"
    {
#line 268 "common.m"
      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 268 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 268 "common.m"
  }
#line 268 "common.m"
}

#line 235 "common.m"
void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0(
#line 235 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 235 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 235 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 235 "common.m"
{
#line 235 "common.m"
  {
#line 235 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 235 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_15 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
#line 235 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_16 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

#line 235 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_15 == check_hlds__simplify__common__CastY_16);
#line 235 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 2075 "check_hlds.simplify.common.c"
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
#line 235 "common.m"
    else
#line 235 "common.m"
      {
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 2)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 3)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_12_12;

#line 235 "common.m"
        {
#line 235 "common.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[3], &check_hlds__simplify__common__V_12_12, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
        }
#line 2105 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_12_12 == (MR_Integer) 0);
#line 235 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 235 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 235 "common.m"
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_12_12;
#line 235 "common.m"
        else
#line 235 "common.m"
          {
#line 235 "common.m"
            MR_Word check_hlds__simplify__common__V_13_13;

#line 235 "common.m"
            {
#line 235 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], &check_hlds__simplify__common__V_13_13, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
            }
#line 2125 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_13_13 == (MR_Integer) 0);
#line 235 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 235 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 235 "common.m"
              *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_13_13;
#line 235 "common.m"
            else
#line 235 "common.m"
              {
#line 235 "common.m"
                MR_Word check_hlds__simplify__common__V_14_14;

#line 235 "common.m"
                {
#line 235 "common.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], &check_hlds__simplify__common__V_14_14, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_10_10)));
                }
#line 2145 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_14_14 == (MR_Integer) 0);
#line 235 "common.m"
                check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 235 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 235 "common.m"
                  *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_14_14;
#line 235 "common.m"
                else
#line 235 "common.m"
                  {
#line 235 "common.m"
                    {
#line 235 "common.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__V_7_7)), ((MR_Box) (check_hlds__simplify__common__V_11_11)));
#line 235 "common.m"
                      return;
                    }
#line 235 "common.m"
                  }
#line 235 "common.m"
              }
#line 235 "common.m"
          }
#line 235 "common.m"
      }
#line 235 "common.m"
  }
#line 235 "common.m"
}

#line 235 "common.m"
MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0(
#line 235 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 235 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 235 "common.m"
{
#line 235 "common.m"
  {
#line 235 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 235 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_11 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
#line 235 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_12 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

#line 235 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_11 == check_hlds__simplify__common__CastY_12);
#line 235 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 235 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 235 "common.m"
    else
#line 235 "common.m"
      {
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_14_14;
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_15_15;
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_16_16;
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 235 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));

#line 2228 "check_hlds.simplify.common.c"
        {
#line 2230 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[3], ((MR_Box) (check_hlds__simplify__common__V_3_3)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
        }
#line 235 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 235 "common.m"
          {
#line 2237 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[1];
#line 2239 "check_hlds.simplify.common.c"
            {
#line 2241 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_14_14, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
            }
#line 235 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 235 "common.m"
              {
#line 2248 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_15_15 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[1];
#line 2250 "check_hlds.simplify.common.c"
                {
#line 2252 "check_hlds.simplify.common.c"
                  check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_15_15, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
                }
#line 235 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 235 "common.m"
                  {
#line 2259 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[2];
#line 2261 "check_hlds.simplify.common.c"
                    {
#line 2263 "check_hlds.simplify.common.c"
                      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_16_16, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_10_10)));
                    }
#line 235 "common.m"
                  }
#line 235 "common.m"
              }
#line 235 "common.m"
          }
#line 235 "common.m"
      }
#line 235 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 235 "common.m"
  }
#line 235 "common.m"
}

#line 280 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0(
#line 280 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 280 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 280 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 280 "common.m"
{
#line 280 "common.m"
  {
#line 280 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 280 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_12 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
#line 280 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_13 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

#line 280 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_12 == check_hlds__simplify__common__CastY_13);
#line 280 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 2305 "check_hlds.simplify.common.c"
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "common.m"
    else
#line 280 "common.m"
      {
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 2)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10;

#line 280 "common.m"
        {
#line 280 "common.m"
          mercury__term____Compare____context_0_0(&check_hlds__simplify__common__V_10_10, check_hlds__simplify__common__V_4_4, check_hlds__simplify__common__V_7_7);
        }
#line 2331 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_10_10 == (MR_Integer) 0);
#line 280 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 280 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 280 "common.m"
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_10_10;
#line 280 "common.m"
        else
#line 280 "common.m"
          {
#line 280 "common.m"
            MR_Word check_hlds__simplify__common__V_11_11;

#line 280 "common.m"
            {
#line 280 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], &check_hlds__simplify__common__V_11_11, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
            }
#line 2351 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_11_11 == (MR_Integer) 0);
#line 280 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 280 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 280 "common.m"
              *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_11_11;
#line 280 "common.m"
            else
#line 280 "common.m"
              {
#line 280 "common.m"
                {
#line 280 "common.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
#line 280 "common.m"
                  return;
                }
#line 280 "common.m"
              }
#line 280 "common.m"
          }
#line 280 "common.m"
      }
#line 280 "common.m"
  }
#line 280 "common.m"
}

#line 280 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0(
#line 280 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 280 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 280 "common.m"
{
#line 280 "common.m"
  {
#line 280 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 280 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_9 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
#line 280 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_10 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

#line 280 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_9 == check_hlds__simplify__common__CastY_10);
#line 280 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 280 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 280 "common.m"
    else
#line 280 "common.m"
      {
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_12_12;
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_13_13;
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 280 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));

#line 2426 "check_hlds.simplify.common.c"
        {
#line 2428 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__common__V_3_3, check_hlds__simplify__common__V_6_6);
        }
#line 280 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 280 "common.m"
          {
#line 2435 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 2437 "check_hlds.simplify.common.c"
            {
#line 2439 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
            }
#line 280 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 280 "common.m"
              {
#line 2446 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_13_13 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 2448 "check_hlds.simplify.common.c"
                {
#line 2450 "check_hlds.simplify.common.c"
                  return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_13_13, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
                }
#line 280 "common.m"
              }
#line 280 "common.m"
          }
#line 280 "common.m"
      }
#line 280 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 280 "common.m"
  }
#line 280 "common.m"
}

#line 919 "common.m"
static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
#line 919 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_5,
#line 919 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_6,
#line 919 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_17,
#line 919 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_18)
#line 919 "common.m"
{
#line 922 "common.m"
  {
#line 922 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 922 "common.m"
    MR_Word check_hlds__simplify__common__RttiVarMaps0_8;
#line 922 "common.m"
    MR_Word check_hlds__simplify__common__FromVarRttiInfo_9;
#line 922 "common.m"
    MR_Word check_hlds__simplify__common__ToVarRttiInfo_10;
#line 933 "common.m"
    MR_Word check_hlds__simplify__common__TSubst_11;

#line 923 "common.m"
    {
#line 923 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, &check_hlds__simplify__common__RttiVarMaps0_8);
    }
#line 924 "common.m"
    {
#line 924 "common.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__simplify__common__RttiVarMaps0_8, check_hlds__simplify__common__FromVar_6, &check_hlds__simplify__common__FromVarRttiInfo_9);
    }
#line 925 "common.m"
    {
#line 925 "common.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__simplify__common__RttiVarMaps0_8, check_hlds__simplify__common__ToVar_5, &check_hlds__simplify__common__ToVarRttiInfo_10);
    }
#line 972 "common.m"
    if ((check_hlds__simplify__common__ToVarRttiInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 982 "common.m"
      {
#line 982 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_14_40;
#line 982 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_15_41;

#line 982 "common.m"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__FromVarRttiInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 982 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 982 "common.m"
          {
#line 2522 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_14_40 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 2524 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeCtorInfo_15_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 984 "common.m"
            {
#line 984 "common.m"
              mercury__map__init_1_p_0(check_hlds__simplify__common__TypeInfo_14_40, check_hlds__simplify__common__TypeCtorInfo_15_41, &check_hlds__simplify__common__TSubst_11);
            }
#line 984 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 982 "common.m"
          }
#line 982 "common.m"
      }
#line 972 "common.m"
    else
#line 972 "common.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__common__ToVarRttiInfo_10)) == (MR_mktag((MR_Integer) 1))))
#line 972 "common.m"
      {
#line 972 "common.m"
        MR_Word check_hlds__simplify__common__FromVarTypeInfoType_33;
#line 972 "common.m"
        MR_Word check_hlds__simplify__common__ToVarTypeInfoType_34;

#line 972 "common.m"
        check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 1)));
#line 972 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 972 "common.m"
          {
#line 972 "common.m"
            check_hlds__simplify__common__FromVarTypeInfoType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__FromVarRttiInfo_9, (MR_Integer) 0)));
#line 973 "common.m"
            check_hlds__simplify__common__ToVarTypeInfoType_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__ToVarRttiInfo_10, (MR_Integer) 0)));
#line 974 "common.m"
            {
#line 974 "common.m"
              check_hlds__simplify__common__succeeded = parse_tree__prog_type__type_subsumes_3_p_0(check_hlds__simplify__common__ToVarTypeInfoType_34, check_hlds__simplify__common__FromVarTypeInfoType_33, &check_hlds__simplify__common__TSubst_11);
            }
#line 972 "common.m"
          }
#line 972 "common.m"
      }
#line 972 "common.m"
    else
#line 976 "common.m"
      {
#line 976 "common.m"
        MR_Word check_hlds__simplify__common__FromVarConstraint_35;
#line 976 "common.m"
        MR_Word check_hlds__simplify__common__ToVarConstraint_36;
#line 976 "common.m"
        MR_Word check_hlds__simplify__common__Name_37;
#line 976 "common.m"
        MR_Word check_hlds__simplify__common__FromArgs_38;
#line 976 "common.m"
        MR_Word check_hlds__simplify__common__ToArgs_39;
#line 976 "common.m"
        MR_Word check_hlds__simplify__common__V_42_42;

#line 976 "common.m"
        check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 2)));
#line 976 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 976 "common.m"
          {
#line 976 "common.m"
            check_hlds__simplify__common__FromVarConstraint_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__FromVarRttiInfo_9, (MR_Integer) 0)));
#line 977 "common.m"
            check_hlds__simplify__common__ToVarConstraint_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__ToVarRttiInfo_10, (MR_Integer) 0)));
#line 978 "common.m"
            check_hlds__simplify__common__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__FromVarConstraint_35, (MR_Integer) 0)));
#line 978 "common.m"
            check_hlds__simplify__common__FromArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__FromVarConstraint_35, (MR_Integer) 1)));
#line 979 "common.m"
            check_hlds__simplify__common__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarConstraint_36, (MR_Integer) 0)));
#line 979 "common.m"
            check_hlds__simplify__common__ToArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarConstraint_36, (MR_Integer) 1)));
#line 979 "common.m"
            {
#line 979 "common.m"
              check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_37, check_hlds__simplify__common__V_42_42);
            }
#line 976 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 980 "common.m"
              {
#line 980 "common.m"
                check_hlds__simplify__common__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__simplify__common__ToArgs_39, check_hlds__simplify__common__FromArgs_38, &check_hlds__simplify__common__TSubst_11);
              }
#line 976 "common.m"
          }
#line 976 "common.m"
      }
#line 933 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 929 "common.m"
      {
#line 927 "common.m"
        {
#line 927 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__simplify__common__TSubst_11);
        }
#line 929 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 929 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_Info_18 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_17;
#line 929 "common.m"
        else
#line 930 "common.m"
          {
#line 930 "common.m"
            check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__TSubst_11, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
#line 930 "common.m"
            return;
          }
#line 929 "common.m"
      }
#line 933 "common.m"
    else
#line 943 "common.m"
    if ((check_hlds__simplify__common__FromVarRttiInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "common.m"
      {
#line 939 "common.m"
        MR_Word check_hlds__simplify__common__RttiVarMaps_12;

#line 940 "common.m"
        {
#line 940 "common.m"
          hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__RttiVarMaps0_8, &check_hlds__simplify__common__RttiVarMaps_12);
        }
#line 942 "common.m"
        {
#line 942 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__common__RttiVarMaps_12, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
#line 942 "common.m"
          return;
        }
#line 939 "common.m"
      }
#line 943 "common.m"
    else
#line 952 "common.m"
    if ((check_hlds__simplify__common__ToVarRttiInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "common.m"
      {
#line 948 "common.m"
        MR_Word check_hlds__simplify__common__RttiVarMaps_25;

#line 949 "common.m"
        {
#line 949 "common.m"
          hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__RttiVarMaps0_8, &check_hlds__simplify__common__RttiVarMaps_25);
        }
#line 951 "common.m"
        {
#line 951 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__common__RttiVarMaps_25, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
#line 951 "common.m"
          return;
        }
#line 948 "common.m"
      }
#line 952 "common.m"
    else
#line 955 "common.m"
      {
#line 959 "common.m"
        {
#line 959 "common.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.apply_induced_substitutions\'/4", (MR_String) "inconsistent info");
#line 959 "common.m"
          return;
        }
#line 955 "common.m"
      }
#line 922 "common.m"
  }
#line 919 "common.m"
}

#line 893 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
#line 893 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 893 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 893 "common.m"
{
#line 896 "common.m"
  while (MR_TRUE)
#line 896 "common.m"
    {
#line 896 "common.m"
      /* tailcall optimized into a loop */
#line 896 "common.m"
      {
#line 896 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 896 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 896 "common.m"
        else
#line 897 "common.m"
          {
#line 897 "common.m"
            MR_Word check_hlds__simplify__common__Type1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 897 "common.m"
            MR_Word check_hlds__simplify__common__Types1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 897 "common.m"
            MR_Word check_hlds__simplify__common__Type2_5;
#line 897 "common.m"
            MR_Word check_hlds__simplify__common__Types2_6;

#line 897 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 897 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 897 "common.m"
              {
#line 897 "common.m"
                check_hlds__simplify__common__Type2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 897 "common.m"
                check_hlds__simplify__common__Types2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 898 "common.m"
                {
#line 898 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(check_hlds__simplify__common__Type1_3, check_hlds__simplify__common__Type2_5);
                }
#line 897 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 899 "common.m"
                  {
#line 899 "common.m"
                    /* direct tailcall eliminated */
#line 899 "common.m"
                    {
#line 899 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Types1_4;
#line 899 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Types2_6;

#line 899 "common.m"
                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 899 "common.m"
                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 899 "common.m"
                    }
#line 899 "common.m"
                    continue;
#line 899 "common.m"
                  }
#line 897 "common.m"
              }
#line 897 "common.m"
          }
#line 896 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 896 "common.m"
      }
#line 896 "common.m"
      break;
#line 896 "common.m"
    }
#line 893 "common.m"
}

#line 869 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
#line 869 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 869 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 869 "common.m"
{
#line 871 "common.m"
  while (MR_TRUE)
#line 871 "common.m"
    {
#line 871 "common.m"
      /* tailcall optimized into a loop */
#line 871 "common.m"
      {
#line 871 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 871 "common.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 874 "common.m"
          {
#line 874 "common.m"
            MR_Word check_hlds__simplify__common__BuiltinType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 874 "common.m"
            MR_Word check_hlds__simplify__common__V_37_37;

#line 874 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 874 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 874 "common.m"
              {
#line 874 "common.m"
                check_hlds__simplify__common__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 874 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__BuiltinType_11 == check_hlds__simplify__common__V_37_37);
#line 874 "common.m"
              }
#line 874 "common.m"
          }
#line 871 "common.m"
        else
#line 871 "common.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 872 "common.m"
          {
#line 872 "common.m"
            MR_Word check_hlds__simplify__common__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 872 "common.m"
            MR_Word check_hlds__simplify__common__As_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 872 "common.m"
            MR_Word check_hlds__simplify__common__Bs_9;
#line 872 "common.m"
            MR_Word check_hlds__simplify__common__V_36_36;
#line 872 "common.m"
            MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 872 "common.m"
            MR_Word check_hlds__simplify__common__V_10_10;

#line 872 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 872 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 872 "common.m"
              {
#line 872 "common.m"
                check_hlds__simplify__common__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 872 "common.m"
                check_hlds__simplify__common__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 872 "common.m"
                check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 872 "common.m"
                {
#line 872 "common.m"
                  check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_6, check_hlds__simplify__common__V_36_36);
                }
#line 872 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 873 "common.m"
                  {
#line 873 "common.m"
                    return check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_7, check_hlds__simplify__common__Bs_9);
                  }
#line 872 "common.m"
              }
#line 872 "common.m"
          }
#line 871 "common.m"
        else
#line 871 "common.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 871 "common.m"
          {
#line 871 "common.m"
            MR_Word check_hlds__simplify__common__TypeInfo_43_43;
#line 871 "common.m"
            MR_Word check_hlds__simplify__common__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 871 "common.m"
            MR_Word check_hlds__simplify__common__V_35_35;
#line 871 "common.m"
            MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 871 "common.m"
            MR_Word check_hlds__simplify__common__V_5_5;

#line 871 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 871 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 871 "common.m"
              {
#line 871 "common.m"
                check_hlds__simplify__common__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 871 "common.m"
                check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 2913 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_43_43 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 871 "common.m"
                {
#line 871 "common.m"
                  return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_43_43, ((MR_Box) (check_hlds__simplify__common__TVar_3)), ((MR_Box) (check_hlds__simplify__common__V_35_35)));
                }
#line 871 "common.m"
              }
#line 871 "common.m"
          }
#line 871 "common.m"
        else
#line 871 "common.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 888 "common.m"
          {
#line 888 "common.m"
            MR_Word check_hlds__simplify__common__TypeInfo_41_41;
#line 888 "common.m"
            MR_Word check_hlds__simplify__common__TVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 888 "common.m"
            MR_Word check_hlds__simplify__common__As_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 888 "common.m"
            MR_Word check_hlds__simplify__common__Bs_27;
#line 888 "common.m"
            MR_Word check_hlds__simplify__common__V_40_40;
#line 888 "common.m"
            MR_Word check_hlds__simplify__common__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 888 "common.m"
            MR_Word check_hlds__simplify__common__V_28_28;

#line 888 "common.m"
            check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 888 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 888 "common.m"
              {
#line 888 "common.m"
                check_hlds__simplify__common__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 888 "common.m"
                check_hlds__simplify__common__Bs_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 888 "common.m"
                check_hlds__simplify__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 2957 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_41_41 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 888 "common.m"
                {
#line 888 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_41_41, ((MR_Box) (check_hlds__simplify__common__TVar_24)), ((MR_Box) (check_hlds__simplify__common__V_40_40)));
                }
#line 888 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 889 "common.m"
                  {
#line 889 "common.m"
                    return check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_25, check_hlds__simplify__common__Bs_27);
                  }
#line 888 "common.m"
              }
#line 888 "common.m"
          }
#line 871 "common.m"
        else
#line 871 "common.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 876 "common.m"
          {
#line 876 "common.m"
            MR_Word check_hlds__simplify__common__As_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 876 "common.m"
            MR_Word check_hlds__simplify__common__AR_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 876 "common.m"
            MR_Word check_hlds__simplify__common__P_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 876 "common.m"
            MR_Word check_hlds__simplify__common__Bs_16;
#line 876 "common.m"
            MR_Word check_hlds__simplify__common__BR_17;
#line 876 "common.m"
            MR_Word check_hlds__simplify__common__V_38_38;

#line 876 "common.m"
            check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 876 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 876 "common.m"
              {
#line 876 "common.m"
                check_hlds__simplify__common__Bs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 876 "common.m"
                check_hlds__simplify__common__BR_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 876 "common.m"
                check_hlds__simplify__common__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 876 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__P_14 == check_hlds__simplify__common__V_38_38);
#line 876 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 876 "common.m"
                  {
#line 876 "common.m"
                    check_hlds__simplify__common__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 876 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 876 "common.m"
                      {
#line 877 "common.m"
                        {
#line 877 "common.m"
                          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_12, check_hlds__simplify__common__Bs_16);
                        }
#line 876 "common.m"
                        if (check_hlds__simplify__common__succeeded)
#line 882 "common.m"
                          {
#line 882 "common.m"
                            if ((check_hlds__simplify__common__AR_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "common.m"
                              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__BR_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "common.m"
                            else
#line 879 "common.m"
                              {
#line 879 "common.m"
                                MR_Word check_hlds__simplify__common__A_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AR_13, (MR_Integer) 0)));
#line 879 "common.m"
                                MR_Word check_hlds__simplify__common__B_19;

#line 880 "common.m"
                                check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__BR_17)) == (MR_mktag((MR_Integer) 1)));
#line 880 "common.m"
                                if (check_hlds__simplify__common__succeeded)
#line 880 "common.m"
                                  {
#line 880 "common.m"
                                    check_hlds__simplify__common__B_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__BR_17, (MR_Integer) 0)));
#line 881 "common.m"
                                    /* direct tailcall eliminated */
#line 881 "common.m"
                                    {
#line 881 "common.m"
                                      MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__A_18;
#line 881 "common.m"
                                      MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__B_19;

#line 881 "common.m"
                                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 881 "common.m"
                                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 881 "common.m"
                                    }
#line 881 "common.m"
                                    continue;
#line 880 "common.m"
                                  }
#line 879 "common.m"
                              }
#line 882 "common.m"
                          }
#line 876 "common.m"
                      }
#line 876 "common.m"
                  }
#line 876 "common.m"
              }
#line 876 "common.m"
          }
#line 871 "common.m"
        else
#line 871 "common.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 890 "common.m"
          {
#line 891 "common.m"
            {
#line 891 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.types_match_exactly\'/2", (MR_String) "kind annotation");
            }
#line 890 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 890 "common.m"
          }
#line 871 "common.m"
        else
#line 886 "common.m"
          {
#line 886 "common.m"
            MR_Word check_hlds__simplify__common__As_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 886 "common.m"
            MR_Word check_hlds__simplify__common__Bs_22;
#line 886 "common.m"
            MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 886 "common.m"
            MR_Word check_hlds__simplify__common__V_23_23;

#line 886 "common.m"
            check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 886 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 886 "common.m"
              {
#line 886 "common.m"
                check_hlds__simplify__common__Bs_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 886 "common.m"
                check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 887 "common.m"
                {
#line 887 "common.m"
                  return check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_20, check_hlds__simplify__common__Bs_22);
                }
#line 886 "common.m"
              }
#line 886 "common.m"
          }
#line 871 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 871 "common.m"
      }
#line 871 "common.m"
      break;
#line 871 "common.m"
    }
#line 869 "common.m"
}

#line 827 "common.m"
static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_11,
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_12,
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__UniMode_13,
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_14,
#line 827 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_15,
#line 827 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_33,
#line 827 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_34,
#line 827 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_35,
#line 827 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_36)
#line 827 "common.m"
{
#line 833 "common.m"
  {
#line 833 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_19;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__ToVarType_20;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__FromVarType_21;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__NonLocals_22;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__ToVarInst0_24;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__ToVarInst_26;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__InstMapDelta_30;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__GoalInfo0_31;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__Context_32;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__V_38_38;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__V_39_39;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__V_41_41;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__V_42_42;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__V_63_63;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__V_64_64;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv0_75;
#line 833 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv_76;
#line 840 "common.m"
    MR_Word check_hlds__simplify__common__V_23_23;
#line 840 "common.m"
    MR_Word check_hlds__simplify__common__V_25_25;
#line 546 "common.m"
    MR_Word check_hlds__simplify__common__V_78_78;
#line 546 "common.m"
    MR_Word check_hlds__simplify__common__V_79_79;
#line 546 "common.m"
    MR_Word check_hlds__simplify__common__V_80_80;
#line 548 "common.m"
    MR_Word check_hlds__simplify__common__V_82_82;
#line 548 "common.m"
    MR_Word check_hlds__simplify__common__V_83_83;
#line 548 "common.m"
    MR_Word check_hlds__simplify__common__V_84_84;
#line 548 "common.m"
    MR_Word check_hlds__simplify__common__V_81_81;

#line 834 "common.m"
    {
#line 834 "common.m"
      check_hlds__simplify__common__apply_induced_substitutions_4_p_0(check_hlds__simplify__common__ToVar_11, check_hlds__simplify__common__FromVar_12, check_hlds__simplify__common__STATE_VARIABLE_Info_0_35, check_hlds__simplify__common__STATE_VARIABLE_Info_36);
    }
#line 835 "common.m"
    {
#line 835 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(*check_hlds__simplify__common__STATE_VARIABLE_Info_36, &check_hlds__simplify__common__VarTypes_19);
    }
#line 836 "common.m"
    {
#line 836 "common.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_19, check_hlds__simplify__common__ToVar_11, &check_hlds__simplify__common__ToVarType_20);
    }
#line 837 "common.m"
    {
#line 837 "common.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_19, check_hlds__simplify__common__FromVar_12, &check_hlds__simplify__common__FromVarType_21);
    }
#line 839 "common.m"
    {
#line 839 "common.m"
      check_hlds__simplify__common__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_39_39, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 839 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 839 "common.m"
    }
#line 839 "common.m"
    {
#line 839 "common.m"
      check_hlds__simplify__common__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_38_38, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 839 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_38_38, 1) = ((MR_Box) (check_hlds__simplify__common__V_39_39));
#line 839 "common.m"
    }
#line 839 "common.m"
    {
#line 839 "common.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__common__V_38_38, &check_hlds__simplify__common__NonLocals_22);
    }
#line 840 "common.m"
    check_hlds__simplify__common__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_13, (MR_Integer) 0)));
#line 840 "common.m"
    check_hlds__simplify__common__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_13, (MR_Integer) 1)));
#line 840 "common.m"
    check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_41_41, (MR_Integer) 0)));
#line 840 "common.m"
    check_hlds__simplify__common__ToVarInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_41_41, (MR_Integer) 1)));
#line 840 "common.m"
    check_hlds__simplify__common__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_42_42, (MR_Integer) 0)));
#line 840 "common.m"
    check_hlds__simplify__common__ToVarInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_42_42, (MR_Integer) 1)));
#line 841 "common.m"
    {
#line 841 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(check_hlds__simplify__common__ToVarType_20, check_hlds__simplify__common__FromVarType_21);
    }
#line 846 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 842 "common.m"
      {
#line 842 "common.m"
        MR_Word check_hlds__simplify__common__UnifyMode_27;
#line 842 "common.m"
        MR_Word check_hlds__simplify__common__V_43_43;
#line 842 "common.m"
        MR_Word check_hlds__simplify__common__V_44_44;
#line 842 "common.m"
        MR_Word check_hlds__simplify__common__V_48_48;
#line 842 "common.m"
        MR_Word check_hlds__simplify__common__V_49_49;

#line 842 "common.m"
        {
#line 842 "common.m"
          check_hlds__simplify__common__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst0_24));
#line 842 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_43_43, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 842 "common.m"
        }
#line 842 "common.m"
        {
#line 842 "common.m"
          check_hlds__simplify__common__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_44_44, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 842 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_44_44, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 842 "common.m"
        }
#line 842 "common.m"
        {
#line 842 "common.m"
          check_hlds__simplify__common__UnifyMode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_27, 0) = ((MR_Box) (check_hlds__simplify__common__V_43_43));
#line 842 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_27, 1) = ((MR_Box) (check_hlds__simplify__common__V_44_44));
#line 842 "common.m"
        }
#line 844 "common.m"
        {
#line 844 "common.m"
          check_hlds__simplify__common__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 844 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_48_48, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 844 "common.m"
        }
#line 845 "common.m"
        {
#line 845 "common.m"
          check_hlds__simplify__common__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "common.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__common__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 845 "common.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__common__V_49_49, 1) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 845 "common.m"
        }
#line 844 "common.m"
        {
#line 844 "common.m"
          MR_Word base;
#line 844 "common.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 844 "common.m"
          *check_hlds__simplify__common__GoalExpr_15 = base;
#line 844 "common.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 844 "common.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_48_48));
#line 844 "common.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__common__UnifyMode_27));
#line 844 "common.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_49_49));
#line 844 "common.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[10]));
#line 844 "common.m"
        }
#line 842 "common.m"
      }
#line 846 "common.m"
    else
#line 853 "common.m"
      {
#line 853 "common.m"
        MR_Word check_hlds__simplify__common__Modes_29;
#line 853 "common.m"
        MR_Word check_hlds__simplify__common__V_50_50;
#line 853 "common.m"
        MR_Word check_hlds__simplify__common__V_52_52;
#line 853 "common.m"
        MR_Word check_hlds__simplify__common__V_53_53;
#line 853 "common.m"
        MR_Word check_hlds__simplify__common__V_58_58;
#line 853 "common.m"
        MR_Word check_hlds__simplify__common__V_59_59;

#line 853 "common.m"
        {
#line 853 "common.m"
          check_hlds__simplify__common__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 853 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_50_50, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 853 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 853 "common.m"
        }
#line 853 "common.m"
        {
#line 853 "common.m"
          check_hlds__simplify__common__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 853 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_53_53, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 853 "common.m"
        }
#line 853 "common.m"
        {
#line 853 "common.m"
          check_hlds__simplify__common__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__V_53_53));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "common.m"
        }
#line 853 "common.m"
        {
#line 853 "common.m"
          check_hlds__simplify__common__Modes_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Modes_29, 0) = ((MR_Box) (check_hlds__simplify__common__V_50_50));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Modes_29, 1) = ((MR_Box) (check_hlds__simplify__common__V_52_52));
#line 853 "common.m"
        }
#line 854 "common.m"
        {
#line 854 "common.m"
          check_hlds__simplify__common__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 854 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "common.m"
        }
#line 854 "common.m"
        {
#line 854 "common.m"
          check_hlds__simplify__common__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_58_58, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 854 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_58_58, 1) = ((MR_Box) (check_hlds__simplify__common__V_59_59));
#line 854 "common.m"
        }
#line 854 "common.m"
        {
#line 854 "common.m"
          MR_Word base;
#line 854 "common.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 854 "common.m"
          *check_hlds__simplify__common__GoalExpr_15 = base;
#line 854 "common.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 854 "common.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_5[1])));
#line 854 "common.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_58_58));
#line 854 "common.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__common__Modes_29));
#line 854 "common.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "common.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 854 "common.m"
        }
#line 853 "common.m"
      }
#line 860 "common.m"
    {
#line 860 "common.m"
      check_hlds__simplify__common__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 860 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 860 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 860 "common.m"
    }
#line 860 "common.m"
    {
#line 860 "common.m"
      check_hlds__simplify__common__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__common__V_64_64));
#line 860 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "common.m"
    }
#line 860 "common.m"
    {
#line 860 "common.m"
      check_hlds__simplify__common__InstMapDelta_30 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__common__V_63_63);
    }
#line 862 "common.m"
    {
#line 862 "common.m"
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__common__NonLocals_22, check_hlds__simplify__common__InstMapDelta_30, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__common__GoalInfo0_31);
    }
#line 864 "common.m"
    {
#line 864 "common.m"
      check_hlds__simplify__common__Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__OldGoalInfo_14);
    }
#line 865 "common.m"
    {
#line 865 "common.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__simplify__common__Context_32, check_hlds__simplify__common__GoalInfo0_31, check_hlds__simplify__common__GoalInfo_16);
    }
#line 546 "common.m"
    check_hlds__simplify__common__VarEqv0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 0)));
#line 546 "common.m"
    check_hlds__simplify__common__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 1)));
#line 546 "common.m"
    check_hlds__simplify__common__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 2)));
#line 546 "common.m"
    check_hlds__simplify__common__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 3)));
#line 547 "common.m"
    {
#line 547 "common.m"
      mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__ToVar_11)), ((MR_Box) (check_hlds__simplify__common__FromVar_12)), check_hlds__simplify__common__VarEqv0_75, &check_hlds__simplify__common__VarEqv_76);
    }
#line 548 "common.m"
    check_hlds__simplify__common__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 0)));
#line 548 "common.m"
    check_hlds__simplify__common__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 1)));
#line 548 "common.m"
    check_hlds__simplify__common__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 2)));
#line 548 "common.m"
    check_hlds__simplify__common__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 3)));
#line 548 "common.m"
    {
#line 548 "common.m"
      MR_Word base;
#line 548 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 548 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Common_34 = base;
#line 548 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_76));
#line 548 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_82_82));
#line 548 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_83_83));
#line 548 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_84_84));
#line 548 "common.m"
    }
#line 833 "common.m"
  }
#line 827 "common.m"
}

#line 787 "common.m"
static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_10,
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_11,
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__OldOutputArgs_12,
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_13,
#line 787 "common.m"
  MR_Word * check_hlds__simplify__common__AssignGoals_14,
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_27,
#line 787 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_28,
#line 787 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_29,
#line 787 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_30)
#line 787 "common.m"
{
#line 815 "common.m"
  while (MR_TRUE)
#line 815 "common.m"
    {
#line 815 "common.m"
      /* tailcall optimized into a loop */
#line 815 "common.m"
      {
#line 815 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__OutputArgs_11)) == (MR_mktag((MR_Integer) 1)));
#line 815 "common.m"
        MR_Word check_hlds__simplify__common__HeadOutputArg_17;
#line 815 "common.m"
        MR_Word check_hlds__simplify__common__TailOutputArgs_18;
#line 815 "common.m"
        MR_Word check_hlds__simplify__common__HeadOldOutputArg_19;
#line 815 "common.m"
        MR_Word check_hlds__simplify__common__TailOldOutputArgs_20;
#line 815 "common.m"
        MR_Word check_hlds__simplify__common__HeadUniMode_21;
#line 815 "common.m"
        MR_Word check_hlds__simplify__common__TailUniModes_22;

#line 795 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 795 "common.m"
          {
#line 795 "common.m"
            check_hlds__simplify__common__HeadOutputArg_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OutputArgs_11, (MR_Integer) 0)));
#line 795 "common.m"
            check_hlds__simplify__common__TailOutputArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OutputArgs_11, (MR_Integer) 1)));
#line 796 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__OldOutputArgs_12)) == (MR_mktag((MR_Integer) 1)));
#line 796 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 796 "common.m"
              {
#line 796 "common.m"
                check_hlds__simplify__common__HeadOldOutputArg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OldOutputArgs_12, (MR_Integer) 0)));
#line 796 "common.m"
                check_hlds__simplify__common__TailOldOutputArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OldOutputArgs_12, (MR_Integer) 1)));
#line 797 "common.m"
                check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__UniModes_13)) == (MR_mktag((MR_Integer) 1)));
#line 797 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 797 "common.m"
                  {
#line 797 "common.m"
                    check_hlds__simplify__common__HeadUniMode_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__UniModes_13, (MR_Integer) 0)));
#line 797 "common.m"
                    check_hlds__simplify__common__TailUniModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__UniModes_13, (MR_Integer) 1)));
#line 797 "common.m"
                  }
#line 796 "common.m"
              }
#line 795 "common.m"
          }
#line 815 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 805 "common.m"
          {
#line 799 "common.m"
            {
#line 799 "common.m"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__HeadOutputArg_17)), ((MR_Box) (check_hlds__simplify__common__HeadOldOutputArg_19)));
            }
#line 805 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 802 "common.m"
              {
#line 802 "common.m"
                /* direct tailcall eliminated */
#line 802 "common.m"
                {
#line 802 "common.m"
                  MR_Word check_hlds__simplify__common__OutputArgs__tmp_copy_11 = check_hlds__simplify__common__TailOutputArgs_18;
#line 802 "common.m"
                  MR_Word check_hlds__simplify__common__OldOutputArgs__tmp_copy_12 = check_hlds__simplify__common__TailOldOutputArgs_20;
#line 802 "common.m"
                  MR_Word check_hlds__simplify__common__UniModes__tmp_copy_13 = check_hlds__simplify__common__TailUniModes_22;

#line 802 "common.m"
                  check_hlds__simplify__common__UniModes_13 = check_hlds__simplify__common__UniModes__tmp_copy_13;
#line 802 "common.m"
                  check_hlds__simplify__common__OldOutputArgs_12 = check_hlds__simplify__common__OldOutputArgs__tmp_copy_12;
#line 802 "common.m"
                  check_hlds__simplify__common__OutputArgs_11 = check_hlds__simplify__common__OutputArgs__tmp_copy_11;
#line 802 "common.m"
                }
#line 802 "common.m"
                continue;
#line 802 "common.m"
              }
#line 805 "common.m"
            else
#line 808 "common.m"
              {
#line 808 "common.m"
                MR_Word check_hlds__simplify__common__HeadAssignGoalExpr_23;
#line 808 "common.m"
                MR_Word check_hlds__simplify__common__HeadAssignGoalInfo_24;
#line 808 "common.m"
                MR_Word check_hlds__simplify__common__HeadAssignGoal_25;
#line 808 "common.m"
                MR_Word check_hlds__simplify__common__TailAssignGoals_26;
#line 808 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_33_33;
#line 808 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_34_34;

#line 806 "common.m"
                {
#line 806 "common.m"
                  check_hlds__simplify__common__generate_assign_10_p_0(check_hlds__simplify__common__HeadOutputArg_17, check_hlds__simplify__common__HeadOldOutputArg_19, check_hlds__simplify__common__HeadUniMode_21, check_hlds__simplify__common__OldGoalInfo_10, &check_hlds__simplify__common__HeadAssignGoalExpr_23, &check_hlds__simplify__common__HeadAssignGoalInfo_24, check_hlds__simplify__common__STATE_VARIABLE_Common_0_27, &check_hlds__simplify__common__STATE_VARIABLE_Common_33_33, check_hlds__simplify__common__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__common__STATE_VARIABLE_Info_34_34);
                }
#line 809 "common.m"
                {
#line 809 "common.m"
                  check_hlds__simplify__common__HeadAssignGoal_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 809 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadAssignGoal_25, 0) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoalExpr_23));
#line 809 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadAssignGoal_25, 1) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoalInfo_24));
#line 809 "common.m"
                }
#line 810 "common.m"
                {
#line 810 "common.m"
                  check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__OldGoalInfo_10, check_hlds__simplify__common__TailOutputArgs_18, check_hlds__simplify__common__TailOldOutputArgs_20, check_hlds__simplify__common__TailUniModes_22, &check_hlds__simplify__common__TailAssignGoals_26, check_hlds__simplify__common__STATE_VARIABLE_Common_33_33, check_hlds__simplify__common__STATE_VARIABLE_Common_28, check_hlds__simplify__common__STATE_VARIABLE_Info_34_34, check_hlds__simplify__common__STATE_VARIABLE_Info_30);
                }
#line 813 "common.m"
                {
#line 813 "common.m"
                  MR_Word base;
#line 813 "common.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "common.m"
                  *check_hlds__simplify__common__AssignGoals_14 = base;
#line 813 "common.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoal_25));
#line 813 "common.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__TailAssignGoals_26));
#line 813 "common.m"
                }
#line 808 "common.m"
              }
#line 805 "common.m"
          }
#line 815 "common.m"
        else
#line 821 "common.m"
          {
#line 816 "common.m"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__OutputArgs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 816 "common.m"
              {
#line 817 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__OldOutputArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 818 "common.m"
                  check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__UniModes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "common.m"
              }
#line 821 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 820 "common.m"
              *check_hlds__simplify__common__AssignGoals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 821 "common.m"
            else
#line 822 "common.m"
              {
#line 822 "common.m"
                {
#line 822 "common.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.create_output_unifications\'/9", (MR_String) "mode mismatch");
#line 822 "common.m"
                  return;
                }
#line 822 "common.m"
              }
#line 821 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_30 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_29;
#line 821 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Common_28 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_27;
#line 821 "common.m"
          }
#line 815 "common.m"
      }
#line 815 "common.m"
      break;
#line 815 "common.m"
    }
#line 787 "common.m"
}

#line 753 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
#line 753 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 753 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 753 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 753 "common.m"
{
#line 756 "common.m"
  while (MR_TRUE)
#line 756 "common.m"
    {
#line 756 "common.m"
      /* tailcall optimized into a loop */
#line 756 "common.m"
      {
#line 756 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 756 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 756 "common.m"
        else
#line 757 "common.m"
          {
#line 757 "common.m"
            MR_Word check_hlds__simplify__common__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 757 "common.m"
            MR_Word check_hlds__simplify__common__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 757 "common.m"
            MR_Word check_hlds__simplify__common__Y_7;
#line 757 "common.m"
            MR_Word check_hlds__simplify__common__Ys_8;

#line 757 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 757 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 757 "common.m"
              {
#line 757 "common.m"
                check_hlds__simplify__common__Y_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 757 "common.m"
                check_hlds__simplify__common__Ys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 773 "common.m"
                {
#line 773 "common.m"
                  {
#line 773 "common.m"
                    check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__X_5)), ((MR_Box) (check_hlds__simplify__common__Y_7)));
                  }
#line 773 "common.m"
                }
#line 773 "common.m"
                if (!(check_hlds__simplify__common__succeeded))
#line 775 "common.m"
                  {
#line 775 "common.m"
                    MR_Word check_hlds__simplify__common__TypeInfo_8_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 775 "common.m"
                    MR_Integer check_hlds__simplify__common__Id_13;
#line 775 "common.m"
                    MR_Integer check_hlds__simplify__common__V_15_15;

#line 775 "common.m"
                    {
#line 775 "common.m"
                      check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__X_5)), &check_hlds__simplify__common__Id_13);
                    }
#line 775 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 775 "common.m"
                      {
#line 776 "common.m"
                        {
#line 776 "common.m"
                          check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__Y_7)), &check_hlds__simplify__common__V_15_15);
                        }
#line 775 "common.m"
                        if (check_hlds__simplify__common__succeeded)
#line 776 "common.m"
                          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_13 == check_hlds__simplify__common__V_15_15);
#line 775 "common.m"
                      }
#line 775 "common.m"
                  }
#line 757 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 759 "common.m"
                  {
#line 759 "common.m"
                    /* direct tailcall eliminated */
#line 759 "common.m"
                    {
#line 759 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Xs_6;
#line 759 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Ys_8;

#line 759 "common.m"
                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 759 "common.m"
                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 759 "common.m"
                    }
#line 759 "common.m"
                    continue;
#line 759 "common.m"
                  }
#line 757 "common.m"
              }
#line 757 "common.m"
          }
#line 756 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 756 "common.m"
      }
#line 756 "common.m"
      break;
#line 756 "common.m"
    }
#line 753 "common.m"
}

#line 735 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
#line 735 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 735 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_8,
#line 735 "common.m"
  MR_Word check_hlds__simplify__common__Eqv_9,
#line 735 "common.m"
  MR_Word * check_hlds__simplify__common__OutputArgs_10,
#line 735 "common.m"
  MR_Word * check_hlds__simplify__common__PrevContext_11)
#line 735 "common.m"
{
#line 740 "common.m"
  {
#line 740 "common.m"
    MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 740 "common.m"
    MR_Word check_hlds__simplify__common__SeenCall_6;
#line 740 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls_7;
#line 740 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs1_12;
#line 740 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs1_13;

#line 739 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 739 "common.m"
      {
#line 739 "common.m"
        check_hlds__simplify__common__SeenCall_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 739 "common.m"
        check_hlds__simplify__common__SeenCalls_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 741 "common.m"
        *check_hlds__simplify__common__PrevContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 0)));
#line 741 "common.m"
        check_hlds__simplify__common__InputArgs1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 1)));
#line 741 "common.m"
        check_hlds__simplify__common__OutputArgs1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 2)));
#line 742 "common.m"
        {
#line 742 "common.m"
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(check_hlds__simplify__common__InputArgs_8, check_hlds__simplify__common__InputArgs1_12, check_hlds__simplify__common__Eqv_9);
        }
#line 744 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 743 "common.m"
          {
#line 743 "common.m"
            *check_hlds__simplify__common__OutputArgs_10 = check_hlds__simplify__common__OutputArgs1_13;
#line 743 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 743 "common.m"
          }
#line 744 "common.m"
        else
#line 745 "common.m"
          {
#line 745 "common.m"
            MR_Word check_hlds__simplify__common__V_14_14;

#line 745 "common.m"
            {
#line 745 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(check_hlds__simplify__common__SeenCalls_7, check_hlds__simplify__common__InputArgs_8, check_hlds__simplify__common__Eqv_9, check_hlds__simplify__common__OutputArgs_10, &check_hlds__simplify__common__V_14_14);
            }
#line 745 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 745 "common.m"
              {
#line 745 "common.m"
                return check_hlds__simplify__common__succeeded = mercury__term____Unify____context_0_0(*check_hlds__simplify__common__PrevContext_11, check_hlds__simplify__common__V_14_14);
              }
#line 745 "common.m"
          }
#line 739 "common.m"
      }
#line 740 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 740 "common.m"
  }
#line 735 "common.m"
}

#line 693 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
#line 693 "common.m"
  MR_Word check_hlds__simplify__common__VarTypes_1,
#line 693 "common.m"
  MR_Word check_hlds__simplify__common__ModuleInfo_2,
#line 693 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3,
#line 693 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__4_4,
#line 693 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__5_5,
#line 693 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__6_6,
#line 693 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__7_7)
#line 693 "common.m"
{
#line 697 "common.m"
  {
#line 697 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 697 "common.m"
    if ((check_hlds__simplify__common__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "common.m"
      {
#line 697 "common.m"
        if ((check_hlds__simplify__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "common.m"
          {
#line 697 "common.m"
            *check_hlds__simplify__common__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "common.m"
            *check_hlds__simplify__common__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "common.m"
            *check_hlds__simplify__common__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "common.m"
          }
#line 697 "common.m"
        else
#line 698 "common.m"
          {
#line 699 "common.m"
            {
#line 699 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (1)");
            }
#line 698 "common.m"
          }
#line 697 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 697 "common.m"
      }
#line 697 "common.m"
    else
#line 697 "common.m"
      {
#line 697 "common.m"
        MR_Word check_hlds__simplify__common__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 697 "common.m"
        MR_Word check_hlds__simplify__common__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));

#line 697 "common.m"
        if ((check_hlds__simplify__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 700 "common.m"
          {
#line 701 "common.m"
            {
#line 701 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (2)");
            }
#line 700 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 700 "common.m"
          }
#line 697 "common.m"
        else
#line 703 "common.m"
          {
#line 703 "common.m"
            MR_Word check_hlds__simplify__common__Arg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__4_4, (MR_Integer) 0)));
#line 703 "common.m"
            MR_Word check_hlds__simplify__common__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__4_4, (MR_Integer) 1)));
#line 703 "common.m"
            MR_Word check_hlds__simplify__common__InputArgs1_39;
#line 703 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgs1_40;
#line 703 "common.m"
            MR_Word check_hlds__simplify__common__OutputModes1_41;
#line 703 "common.m"
            MR_Word check_hlds__simplify__common__InitialInst_42;
#line 703 "common.m"
            MR_Word check_hlds__simplify__common__FinalInst_43;
#line 703 "common.m"
            MR_Word check_hlds__simplify__common__Type_44;

#line 704 "common.m"
            {
#line 704 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_1, check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__V_46_46, check_hlds__simplify__common__Args_35, &check_hlds__simplify__common__InputArgs1_39, &check_hlds__simplify__common__OutputArgs1_40, &check_hlds__simplify__common__OutputModes1_41);
            }
#line 703 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 703 "common.m"
              {
#line 706 "common.m"
                {
#line 706 "common.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__V_47_47, &check_hlds__simplify__common__InitialInst_42, &check_hlds__simplify__common__FinalInst_43);
                }
#line 707 "common.m"
                {
#line 707 "common.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_1, check_hlds__simplify__common__Arg_34, &check_hlds__simplify__common__Type_44);
                }
#line 708 "common.m"
                {
#line 708 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__simplify__common__InitialInst_42, check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__Type_44, check_hlds__simplify__common__ModuleInfo_2);
                }
#line 712 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 709 "common.m"
                  {
#line 709 "common.m"
                    {
#line 709 "common.m"
                      MR_Word base;
#line 709 "common.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "common.m"
                      *check_hlds__simplify__common__HeadVar__5_5 = base;
#line 709 "common.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Arg_34));
#line 709 "common.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs1_39));
#line 709 "common.m"
                    }
#line 710 "common.m"
                    *check_hlds__simplify__common__HeadVar__6_6 = check_hlds__simplify__common__OutputArgs1_40;
#line 711 "common.m"
                    *check_hlds__simplify__common__HeadVar__7_7 = check_hlds__simplify__common__OutputModes1_41;
#line 709 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 709 "common.m"
                  }
#line 712 "common.m"
                else
#line 715 "common.m"
                  {
#line 715 "common.m"
                    {
#line 715 "common.m"
                      check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__FinalInst_43);
                    }
#line 715 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 715 "common.m"
                      {
#line 721 "common.m"
                        {
#line 721 "common.m"
                          check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__Type_44, check_hlds__simplify__common__ModuleInfo_2);
                        }
#line 715 "common.m"
                        if (check_hlds__simplify__common__succeeded)
#line 715 "common.m"
                          {
#line 726 "common.m"
                            {
#line 726 "common.m"
                              check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__InitialInst_42);
                            }
#line 715 "common.m"
                            if (check_hlds__simplify__common__succeeded)
#line 715 "common.m"
                              {
#line 728 "common.m"
                                *check_hlds__simplify__common__HeadVar__5_5 = check_hlds__simplify__common__InputArgs1_39;
#line 729 "common.m"
                                {
#line 729 "common.m"
                                  MR_Word base;
#line 729 "common.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "common.m"
                                  *check_hlds__simplify__common__HeadVar__6_6 = base;
#line 729 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Arg_34));
#line 729 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__OutputArgs1_40));
#line 729 "common.m"
                                }
#line 730 "common.m"
                                {
#line 730 "common.m"
                                  MR_Word base;
#line 730 "common.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "common.m"
                                  *check_hlds__simplify__common__HeadVar__7_7 = base;
#line 730 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_47_47));
#line 730 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__OutputModes1_41));
#line 730 "common.m"
                                }
#line 730 "common.m"
                                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 715 "common.m"
                              }
#line 715 "common.m"
                          }
#line 715 "common.m"
                      }
#line 715 "common.m"
                  }
#line 703 "common.m"
              }
#line 703 "common.m"
          }
#line 697 "common.m"
      }
#line 697 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 697 "common.m"
  }
#line 693 "common.m"
}

#line 599 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__SeenCall_12,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_13,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_14,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__Modes_15,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 599 "common.m"
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__Common0_19,
#line 599 "common.m"
  MR_Word * check_hlds__simplify__common__Common_20,
#line 599 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 599 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 599 "common.m"
{
#line 606 "common.m"
  {
#line 606 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 606 "common.m"
    MR_Word check_hlds__simplify__common__Eqv0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 606 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 607 "common.m"
    MR_Word check_hlds__simplify__common__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 607 "common.m"
    MR_Word check_hlds__simplify__common__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 679 "common.m"
    MR_Word check_hlds__simplify__common__SeenCallsList0_24;
#line 609 "common.m"
    MR_Box check_hlds__simplify__common__conv0_SeenCallsList0_24;

#line 609 "common.m"
    {
#line 609 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], check_hlds__simplify__common__SeenCalls0_23, ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), &check_hlds__simplify__common__conv0_SeenCallsList0_24);
    }
#line 609 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 609 "common.m"
      {
#line 609 "common.m"
        check_hlds__simplify__common__SeenCallsList0_24 = ((MR_Word) check_hlds__simplify__common__conv0_SeenCallsList0_24);
#line 609 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 609 "common.m"
      }
#line 679 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 671 "common.m"
      {
#line 671 "common.m"
        MR_Word check_hlds__simplify__common__OutputArgs2_25;
#line 671 "common.m"
        MR_Word check_hlds__simplify__common__PrevContext_26;

#line 611 "common.m"
        {
#line 611 "common.m"
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(check_hlds__simplify__common__SeenCallsList0_24, check_hlds__simplify__common__InputArgs_13, check_hlds__simplify__common__Eqv0_22, &check_hlds__simplify__common__OutputArgs2_25, &check_hlds__simplify__common__PrevContext_26);
        }
#line 671 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 614 "common.m"
          {
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__ModuleInfo_27;
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__UniModes_28;
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__AssignGoals_29;
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__AssignsGoalExpr_32;
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__VarTypes_33;
#line 614 "common.m"
            MR_Integer check_hlds__simplify__common__Cost_44;
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__Detism0_45;
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_51_51;
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_97_97;
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__V_98_98;
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_99_99;
#line 614 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_100_100;
#line 620 "common.m"
            MR_Word check_hlds__simplify__common__OnlyGoalExpr_30;
#line 618 "common.m"
            MR_Word check_hlds__simplify__common__V_52_52;
#line 618 "common.m"
            MR_Word check_hlds__simplify__common__V_53_53;
#line 618 "common.m"
            MR_Word check_hlds__simplify__common___OnlyGoalInfo_31;
#line 626 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgTypes1_34;
#line 626 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgTypes2_35;

#line 614 "common.m"
            {
#line 614 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_27);
            }
#line 615 "common.m"
            {
#line 615 "common.m"
              check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__Modes_15, check_hlds__simplify__common__Modes_15, &check_hlds__simplify__common__UniModes_28);
            }
#line 616 "common.m"
            {
#line 616 "common.m"
              check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__OutputArgs_14, check_hlds__simplify__common__OutputArgs2_25, check_hlds__simplify__common__UniModes_28, &check_hlds__simplify__common__AssignGoals_29, check_hlds__simplify__common__Common0_19, check_hlds__simplify__common__Common_20, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_51_51);
            }
#line 618 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__AssignGoals_29)) == (MR_mktag((MR_Integer) 1)));
#line 618 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 618 "common.m"
              {
#line 618 "common.m"
                check_hlds__simplify__common__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AssignGoals_29, (MR_Integer) 0)));
#line 618 "common.m"
                check_hlds__simplify__common__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AssignGoals_29, (MR_Integer) 1)));
#line 618 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 618 "common.m"
                  {
#line 618 "common.m"
                    check_hlds__simplify__common__OnlyGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, (MR_Integer) 0)));
#line 618 "common.m"
                    check_hlds__simplify__common___OnlyGoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, (MR_Integer) 1)));
#line 618 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 618 "common.m"
                  }
#line 618 "common.m"
              }
#line 620 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 619 "common.m"
              check_hlds__simplify__common__AssignsGoalExpr_32 = check_hlds__simplify__common__OnlyGoalExpr_30;
#line 620 "common.m"
            else
#line 621 "common.m"
              {
#line 621 "common.m"
                {
#line 621 "common.m"
                  check_hlds__simplify__common__AssignsGoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 621 "common.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 621 "common.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 621 "common.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__common__AssignGoals_29));
#line 621 "common.m"
                }
#line 621 "common.m"
              }
#line 623 "common.m"
            {
#line 623 "common.m"
              MR_Word base;
#line 623 "common.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 623 "common.m"
              *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = base;
#line 623 "common.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__AssignsGoalExpr_32));
#line 623 "common.m"
            }
#line 624 "common.m"
            {
#line 624 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_51_51, &check_hlds__simplify__common__VarTypes_33);
            }
#line 626 "common.m"
            {
#line 626 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_51_51);
            }
#line 626 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 626 "common.m"
              {
#line 630 "common.m"
                {
#line 630 "common.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__simplify__common__VarTypes_33, check_hlds__simplify__common__OutputArgs_14, &check_hlds__simplify__common__OutputArgTypes1_34);
                }
#line 631 "common.m"
                {
#line 631 "common.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__simplify__common__VarTypes_33, check_hlds__simplify__common__OutputArgs2_25, &check_hlds__simplify__common__OutputArgTypes2_35);
                }
#line 632 "common.m"
                {
#line 632 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__OutputArgTypes1_34, check_hlds__simplify__common__OutputArgTypes2_35);
                }
#line 626 "common.m"
              }
#line 651 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 634 "common.m"
              {
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__TypeCtorInfo_125_125;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__Context_36;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__CallPieces_37;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__CurPieces_38;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__PrevPieces_39;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__Msg_41;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__PrevMsg_42;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__Spec_43;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_55_55;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_58_58;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_62_62;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_73_73;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_74_74;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_77_77;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_78_78;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_81_81;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_84_84;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_85_85;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_88_88;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_89_89;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_94_94;
#line 634 "common.m"
                MR_Word check_hlds__simplify__common__V_95_95;

#line 634 "common.m"
                {
#line 634 "common.m"
                  check_hlds__simplify__common__Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
                }
#line 635 "common.m"
                {
#line 635 "common.m"
                  check_hlds__simplify__common__CallPieces_37 = check_hlds__det_report__det_report_seen_call_id_2_f_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__SeenCall_12);
                }
#line 4499 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 636 "common.m"
                {
#line 636 "common.m"
                  check_hlds__simplify__common__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[6])));
#line 636 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_55_55, 1) = ((MR_Box) (check_hlds__simplify__common__CallPieces_37));
#line 636 "common.m"
                }
#line 637 "common.m"
                check_hlds__simplify__common__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_1[8]);
#line 637 "common.m"
                {
#line 637 "common.m"
                  check_hlds__simplify__common__CurPieces_38 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__common__TypeCtorInfo_125_125, check_hlds__simplify__common__V_55_55, check_hlds__simplify__common__V_58_58);
                }
#line 638 "common.m"
                {
#line 638 "common.m"
                  check_hlds__simplify__common__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[9])));
#line 638 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_62_62, 1) = ((MR_Box) (check_hlds__simplify__common__CallPieces_37));
#line 638 "common.m"
                }
#line 639 "common.m"
                {
#line 639 "common.m"
                  check_hlds__simplify__common__PrevPieces_39 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__common__TypeCtorInfo_125_125, check_hlds__simplify__common__V_62_62, check_hlds__simplify__common__V_58_58);
                }
#line 644 "common.m"
                {
#line 644 "common.m"
                  check_hlds__simplify__common__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 644 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_78_78, 0) = ((MR_Box) (check_hlds__simplify__common__CurPieces_38));
#line 644 "common.m"
                }
#line 644 "common.m"
                {
#line 644 "common.m"
                  check_hlds__simplify__common__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__common__V_78_78));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "common.m"
                }
#line 643 "common.m"
                {
#line 643 "common.m"
                  check_hlds__simplify__common__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_74_74, 0) = ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 643 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_74_74, 1) = ((MR_Box) (check_hlds__simplify__common__V_77_77));
#line 643 "common.m"
                }
#line 644 "common.m"
                {
#line 644 "common.m"
                  check_hlds__simplify__common__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_73_73, 0) = ((MR_Box) (check_hlds__simplify__common__V_74_74));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "common.m"
                }
#line 642 "common.m"
                {
#line 642 "common.m"
                  check_hlds__simplify__common__Msg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Msg_41, 0) = ((MR_Box) (check_hlds__simplify__common__Context_36));
#line 642 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Msg_41, 1) = ((MR_Box) (check_hlds__simplify__common__V_73_73));
#line 642 "common.m"
                }
#line 645 "common.m"
                {
#line 645 "common.m"
                  check_hlds__simplify__common__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_81_81, 0) = ((MR_Box) (check_hlds__simplify__common__PrevContext_26));
#line 645 "common.m"
                }
#line 647 "common.m"
                {
#line 647 "common.m"
                  check_hlds__simplify__common__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 647 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_89_89, 0) = ((MR_Box) (check_hlds__simplify__common__PrevPieces_39));
#line 647 "common.m"
                }
#line 647 "common.m"
                {
#line 647 "common.m"
                  check_hlds__simplify__common__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_88_88, 0) = ((MR_Box) (check_hlds__simplify__common__V_89_89));
#line 647 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "common.m"
                }
#line 646 "common.m"
                {
#line 646 "common.m"
                  check_hlds__simplify__common__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_85_85, 0) = ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_85_85, 1) = ((MR_Box) (check_hlds__simplify__common__V_88_88));
#line 646 "common.m"
                }
#line 647 "common.m"
                {
#line 647 "common.m"
                  check_hlds__simplify__common__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_84_84, 0) = ((MR_Box) (check_hlds__simplify__common__V_85_85));
#line 647 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "common.m"
                }
#line 645 "common.m"
                {
#line 645 "common.m"
                  check_hlds__simplify__common__PrevMsg_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 0) = ((MR_Box) (check_hlds__simplify__common__V_81_81));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 3) = ((MR_Box) (check_hlds__simplify__common__V_84_84));
#line 645 "common.m"
                }
#line 649 "common.m"
                {
#line 649 "common.m"
                  check_hlds__simplify__common__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_95_95, 0) = ((MR_Box) (check_hlds__simplify__common__PrevMsg_42));
#line 649 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "common.m"
                }
#line 649 "common.m"
                {
#line 649 "common.m"
                  check_hlds__simplify__common__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_94_94, 0) = ((MR_Box) (check_hlds__simplify__common__Msg_41));
#line 649 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_94_94, 1) = ((MR_Box) (check_hlds__simplify__common__V_95_95));
#line 649 "common.m"
                }
#line 648 "common.m"
                {
#line 648 "common.m"
                  check_hlds__simplify__common__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 648 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_3[0])));
#line 648 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__common_scalar_common_5[0])));
#line 648 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 2) = ((MR_Box) (check_hlds__simplify__common__V_94_94));
#line 648 "common.m"
                }
#line 650 "common.m"
                {
#line 650 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_add_error_spec_3_p_0(check_hlds__simplify__common__Spec_43, check_hlds__simplify__common__STATE_VARIABLE_Info_51_51, &check_hlds__simplify__common__STATE_VARIABLE_Info_97_97);
                }
#line 634 "common.m"
              }
#line 651 "common.m"
            else
#line 651 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Info_97_97 = check_hlds__simplify__common__STATE_VARIABLE_Info_51_51;
#line 654 "common.m"
            {
#line 654 "common.m"
              check_hlds__simplify__common__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 654 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_98_98, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_17));
#line 654 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_98_98, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo_16));
#line 654 "common.m"
            }
#line 654 "common.m"
            {
#line 654 "common.m"
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_98_98, &check_hlds__simplify__common__Cost_44);
            }
#line 655 "common.m"
            {
#line 655 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_97_97, &check_hlds__simplify__common__STATE_VARIABLE_Info_99_99);
            }
#line 656 "common.m"
            {
#line 656 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_99_99, &check_hlds__simplify__common__STATE_VARIABLE_Info_100_100);
            }
#line 657 "common.m"
            {
#line 657 "common.m"
              check_hlds__simplify__common__Detism0_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__common__GoalInfo_16);
            }
#line 660 "common.m"
            if ((check_hlds__simplify__common__Detism0_45 == (MR_Integer) 0))
#line 659 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_100_100;
#line 660 "common.m"
            else
#line 669 "common.m"
              {
#line 669 "common.m"
                check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_100_100, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
#line 669 "common.m"
                return;
              }
#line 614 "common.m"
          }
#line 671 "common.m"
        else
#line 672 "common.m"
          {
#line 672 "common.m"
            MR_Word check_hlds__simplify__common__ThisCall_46;
#line 672 "common.m"
            MR_Word check_hlds__simplify__common__SeenCalls_47;
#line 672 "common.m"
            MR_Word check_hlds__simplify__common__V_102_102;
#line 672 "common.m"
            MR_Word check_hlds__simplify__common__Context_105;
#line 676 "common.m"
            MR_Word check_hlds__simplify__common__V_115_115;
#line 676 "common.m"
            MR_Word check_hlds__simplify__common__V_116_116;
#line 676 "common.m"
            MR_Word check_hlds__simplify__common__V_117_117;
#line 676 "common.m"
            MR_Word check_hlds__simplify__common__V_118_118;

#line 672 "common.m"
            {
#line 672 "common.m"
              check_hlds__simplify__common__Context_105 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
            }
#line 673 "common.m"
            {
#line 673 "common.m"
              check_hlds__simplify__common__ThisCall_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 673 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 0) = ((MR_Box) (check_hlds__simplify__common__Context_105));
#line 673 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_13));
#line 673 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 2) = ((MR_Box) (check_hlds__simplify__common__OutputArgs_14));
#line 673 "common.m"
            }
#line 674 "common.m"
            {
#line 674 "common.m"
              check_hlds__simplify__common__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_102_102, 0) = ((MR_Box) (check_hlds__simplify__common__ThisCall_46));
#line 674 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_102_102, 1) = ((MR_Box) (check_hlds__simplify__common__SeenCallsList0_24));
#line 674 "common.m"
            }
#line 674 "common.m"
            {
#line 674 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), ((MR_Box) (check_hlds__simplify__common__V_102_102)), check_hlds__simplify__common__SeenCalls0_23, &check_hlds__simplify__common__SeenCalls_47);
            }
#line 676 "common.m"
            check_hlds__simplify__common__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 676 "common.m"
            check_hlds__simplify__common__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 676 "common.m"
            check_hlds__simplify__common__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 676 "common.m"
            check_hlds__simplify__common__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 676 "common.m"
            {
#line 676 "common.m"
              MR_Word base;
#line 676 "common.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 676 "common.m"
              *check_hlds__simplify__common__Common_20 = base;
#line 676 "common.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_115_115));
#line 676 "common.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_116_116));
#line 676 "common.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_117_117));
#line 676 "common.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls_47));
#line 676 "common.m"
            }
#line 677 "common.m"
            *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 672 "common.m"
          }
#line 671 "common.m"
      }
#line 679 "common.m"
    else
#line 680 "common.m"
      {
#line 680 "common.m"
        MR_Word check_hlds__simplify__common__V_103_103;
#line 680 "common.m"
        MR_Word check_hlds__simplify__common__Context_106;
#line 680 "common.m"
        MR_Word check_hlds__simplify__common__ThisCall_107;
#line 680 "common.m"
        MR_Word check_hlds__simplify__common__SeenCalls_108;
#line 683 "common.m"
        MR_Word check_hlds__simplify__common__V_119_119;
#line 683 "common.m"
        MR_Word check_hlds__simplify__common__V_120_120;
#line 683 "common.m"
        MR_Word check_hlds__simplify__common__V_121_121;
#line 683 "common.m"
        MR_Word check_hlds__simplify__common__V_122_122;

#line 680 "common.m"
        {
#line 680 "common.m"
          check_hlds__simplify__common__Context_106 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
        }
#line 681 "common.m"
        {
#line 681 "common.m"
          check_hlds__simplify__common__ThisCall_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 681 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 0) = ((MR_Box) (check_hlds__simplify__common__Context_106));
#line 681 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_13));
#line 681 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 2) = ((MR_Box) (check_hlds__simplify__common__OutputArgs_14));
#line 681 "common.m"
        }
#line 682 "common.m"
        {
#line 682 "common.m"
          check_hlds__simplify__common__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_103_103, 0) = ((MR_Box) (check_hlds__simplify__common__ThisCall_107));
#line 682 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "common.m"
        }
#line 682 "common.m"
        {
#line 682 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), ((MR_Box) (check_hlds__simplify__common__V_103_103)), check_hlds__simplify__common__SeenCalls0_23, &check_hlds__simplify__common__SeenCalls_108);
        }
#line 683 "common.m"
        check_hlds__simplify__common__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 683 "common.m"
        check_hlds__simplify__common__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 683 "common.m"
        check_hlds__simplify__common__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 683 "common.m"
        check_hlds__simplify__common__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 683 "common.m"
        {
#line 683 "common.m"
          MR_Word base;
#line 683 "common.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 683 "common.m"
          *check_hlds__simplify__common__Common_20 = base;
#line 683 "common.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_119_119));
#line 683 "common.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_120_120));
#line 683 "common.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_121_121));
#line 683 "common.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls_108));
#line 683 "common.m"
        }
#line 684 "common.m"
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 680 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 680 "common.m"
      }
#line 606 "common.m"
  }
#line 599 "common.m"
}

#line 523 "common.m"
static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
#line 523 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_6,
#line 523 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_7,
#line 523 "common.m"
  MR_Word check_hlds__simplify__common__Struct_8,
#line 523 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14,
#line 523 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_StructMap_15)
#line 523 "common.m"
{
#line 535 "common.m"
  {
#line 535 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 535 "common.m"
    MR_Word check_hlds__simplify__common__ConsIdMap0_10;
#line 527 "common.m"
    MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_10;

#line 527 "common.m"
    {
#line 527 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), &check_hlds__simplify__common__conv0_ConsIdMap0_10);
    }
#line 527 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 527 "common.m"
      {
#line 527 "common.m"
        check_hlds__simplify__common__ConsIdMap0_10 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_10);
#line 527 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 527 "common.m"
      }
#line 535 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 533 "common.m"
      {
#line 533 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_13;
#line 531 "common.m"
        MR_Word check_hlds__simplify__common__Structs0_11;
#line 528 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs0_11;

#line 528 "common.m"
        {
#line 528 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__ConsIdMap0_10, ((MR_Box) (check_hlds__simplify__common__ConsId_7)), &check_hlds__simplify__common__conv1_Structs0_11);
        }
#line 528 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 528 "common.m"
          {
#line 528 "common.m"
            check_hlds__simplify__common__Structs0_11 = ((MR_Word) check_hlds__simplify__common__conv1_Structs0_11);
#line 528 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 528 "common.m"
          }
#line 531 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 529 "common.m"
          {
#line 529 "common.m"
            MR_Word check_hlds__simplify__common__Structs_12;

#line 529 "common.m"
            {
#line 529 "common.m"
              check_hlds__simplify__common__Structs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_12, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 529 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_12, 1) = ((MR_Box) (check_hlds__simplify__common__Structs0_11));
#line 529 "common.m"
            }
#line 530 "common.m"
            {
#line 530 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__Structs_12)), check_hlds__simplify__common__ConsIdMap0_10, &check_hlds__simplify__common__ConsIdMap_13);
            }
#line 529 "common.m"
          }
#line 531 "common.m"
        else
#line 532 "common.m"
          {
#line 532 "common.m"
            MR_Word check_hlds__simplify__common__V_16_16;

#line 532 "common.m"
            {
#line 532 "common.m"
              check_hlds__simplify__common__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_16_16, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 532 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "common.m"
            }
#line 532 "common.m"
            {
#line 532 "common.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__V_16_16)), check_hlds__simplify__common__ConsIdMap0_10, &check_hlds__simplify__common__ConsIdMap_13);
            }
#line 532 "common.m"
          }
#line 534 "common.m"
        {
#line 534 "common.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_13)), check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);
#line 534 "common.m"
          return;
        }
#line 533 "common.m"
      }
#line 535 "common.m"
    else
#line 536 "common.m"
      {
#line 536 "common.m"
        MR_Word check_hlds__simplify__common__V_19_19;
#line 536 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_22;

#line 536 "common.m"
        {
#line 536 "common.m"
          check_hlds__simplify__common__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_19_19, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 536 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "common.m"
        }
#line 536 "common.m"
        {
#line 536 "common.m"
          check_hlds__simplify__common__ConsIdMap_22 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__V_19_19)));
        }
#line 537 "common.m"
        {
#line 537 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_22)), check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);
#line 537 "common.m"
          return;
        }
#line 536 "common.m"
      }
#line 535 "common.m"
  }
#line 523 "common.m"
}

#line 509 "common.m"
static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
#line 509 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_7,
#line 509 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_8,
#line 509 "common.m"
  MR_Word check_hlds__simplify__common__Struct_9,
#line 509 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_10,
#line 509 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_16,
#line 509 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_17)
#line 509 "common.m"
{
#line 512 "common.m"
  {
#line 512 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 512 "common.m"
    MR_Word check_hlds__simplify__common__AllStructMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 1)));
#line 512 "common.m"
    MR_Word check_hlds__simplify__common__SinceCallStructMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 2)));
#line 512 "common.m"
    MR_Word check_hlds__simplify__common__AllStructMap_14;
#line 512 "common.m"
    MR_Word check_hlds__simplify__common__SinceCallStructMap_15;
#line 512 "common.m"
    MR_Word check_hlds__simplify__common__V_30_30;
#line 512 "common.m"
    MR_Word check_hlds__simplify__common__V_31_31;
#line 512 "common.m"
    MR_Word check_hlds__simplify__common__V_34_34;
#line 513 "common.m"
    MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 0)));
#line 513 "common.m"
    MR_Word check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 3)));
#line 535 "common.m"
    MR_Word check_hlds__simplify__common__ConsIdMap0_45;
#line 527 "common.m"
    MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_45;
#line 519 "common.m"
    MR_Word check_hlds__simplify__common__V_27_27;
#line 519 "common.m"
    MR_Word check_hlds__simplify__common__V_28_28;
#line 519 "common.m"
    MR_Word check_hlds__simplify__common__V_29_29;

#line 527 "common.m"
    {
#line 527 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__AllStructMap0_12, ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), &check_hlds__simplify__common__conv0_ConsIdMap0_45);
    }
#line 527 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 527 "common.m"
      {
#line 527 "common.m"
        check_hlds__simplify__common__ConsIdMap0_45 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_45);
#line 527 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 527 "common.m"
      }
#line 535 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 533 "common.m"
      {
#line 533 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_48;
#line 531 "common.m"
        MR_Word check_hlds__simplify__common__Structs0_46;
#line 528 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs0_46;

#line 528 "common.m"
        {
#line 528 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__ConsIdMap0_45, ((MR_Box) (check_hlds__simplify__common__ConsId_8)), &check_hlds__simplify__common__conv1_Structs0_46);
        }
#line 528 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 528 "common.m"
          {
#line 528 "common.m"
            check_hlds__simplify__common__Structs0_46 = ((MR_Word) check_hlds__simplify__common__conv1_Structs0_46);
#line 528 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 528 "common.m"
          }
#line 531 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 529 "common.m"
          {
#line 529 "common.m"
            MR_Word check_hlds__simplify__common__Structs_47;

#line 529 "common.m"
            {
#line 529 "common.m"
              check_hlds__simplify__common__Structs_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_47, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 529 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_47, 1) = ((MR_Box) (check_hlds__simplify__common__Structs0_46));
#line 529 "common.m"
            }
#line 530 "common.m"
            {
#line 530 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__Structs_47)), check_hlds__simplify__common__ConsIdMap0_45, &check_hlds__simplify__common__ConsIdMap_48);
            }
#line 529 "common.m"
          }
#line 531 "common.m"
        else
#line 532 "common.m"
          {
#line 532 "common.m"
            MR_Word check_hlds__simplify__common__V_49_49;

#line 532 "common.m"
            {
#line 532 "common.m"
              check_hlds__simplify__common__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 532 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "common.m"
            }
#line 532 "common.m"
            {
#line 532 "common.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__V_49_49)), check_hlds__simplify__common__ConsIdMap0_45, &check_hlds__simplify__common__ConsIdMap_48);
            }
#line 532 "common.m"
          }
#line 534 "common.m"
        {
#line 534 "common.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_48)), check_hlds__simplify__common__AllStructMap0_12, &check_hlds__simplify__common__AllStructMap_14);
        }
#line 533 "common.m"
      }
#line 535 "common.m"
    else
#line 536 "common.m"
      {
#line 536 "common.m"
        MR_Word check_hlds__simplify__common__V_52_52;
#line 536 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_55;

#line 536 "common.m"
        {
#line 536 "common.m"
          check_hlds__simplify__common__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 536 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "common.m"
        }
#line 536 "common.m"
        {
#line 536 "common.m"
          check_hlds__simplify__common__ConsIdMap_55 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__V_52_52)));
        }
#line 537 "common.m"
        {
#line 537 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_55)), check_hlds__simplify__common__AllStructMap0_12, &check_hlds__simplify__common__AllStructMap_14);
        }
#line 536 "common.m"
      }
#line 517 "common.m"
    {
#line 517 "common.m"
      check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(check_hlds__simplify__common__TypeCtor_7, check_hlds__simplify__common__ConsId_8, check_hlds__simplify__common__Struct_9, check_hlds__simplify__common__SinceCallStructMap0_13, &check_hlds__simplify__common__SinceCallStructMap_15);
    }
#line 519 "common.m"
    check_hlds__simplify__common__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 0)));
#line 519 "common.m"
    check_hlds__simplify__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 1)));
#line 519 "common.m"
    check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 2)));
#line 519 "common.m"
    check_hlds__simplify__common__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 3)));
#line 520 "common.m"
    check_hlds__simplify__common__V_31_31 = check_hlds__simplify__common__VarEqv_10;
#line 520 "common.m"
    check_hlds__simplify__common__V_34_34 = check_hlds__simplify__common__V_30_30;
#line 521 "common.m"
    {
#line 521 "common.m"
      MR_Word base;
#line 521 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 521 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Common_17 = base;
#line 521 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_31_31));
#line 521 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__AllStructMap_14));
#line 521 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__SinceCallStructMap_15));
#line 521 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_34_34));
#line 521 "common.m"
    }
#line 512 "common.m"
  }
#line 509 "common.m"
}

#line 491 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
#line 491 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 491 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 491 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 491 "common.m"
{
#line 494 "common.m"
  while (MR_TRUE)
#line 494 "common.m"
    {
#line 494 "common.m"
      /* tailcall optimized into a loop */
#line 494 "common.m"
      {
#line 494 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 494 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "common.m"
        else
#line 495 "common.m"
          {
#line 495 "common.m"
            MR_Word check_hlds__simplify__common__TypeInfo_8_14;
#line 495 "common.m"
            MR_Integer check_hlds__simplify__common__Id_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 495 "common.m"
            MR_Word check_hlds__simplify__common__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 495 "common.m"
            MR_Word check_hlds__simplify__common__Var_7;
#line 495 "common.m"
            MR_Word check_hlds__simplify__common__Vars_8;
#line 495 "common.m"
            MR_Integer check_hlds__simplify__common__VarId_13;

#line 495 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 495 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 495 "common.m"
              {
#line 495 "common.m"
                check_hlds__simplify__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 495 "common.m"
                check_hlds__simplify__common__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 5336 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_8_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 504 "common.m"
                {
#line 504 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__Var_7)), &check_hlds__simplify__common__VarId_13);
                }
#line 495 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 495 "common.m"
                  {
#line 505 "common.m"
                    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_5 == check_hlds__simplify__common__VarId_13);
#line 495 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 497 "common.m"
                      {
#line 497 "common.m"
                        /* direct tailcall eliminated */
#line 497 "common.m"
                        {
#line 497 "common.m"
                          MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Ids_6;
#line 497 "common.m"
                          MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Vars_8;

#line 497 "common.m"
                          check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 497 "common.m"
                          check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 497 "common.m"
                        }
#line 497 "common.m"
                        continue;
#line 497 "common.m"
                      }
#line 495 "common.m"
                  }
#line 495 "common.m"
              }
#line 495 "common.m"
          }
#line 494 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 494 "common.m"
      }
#line 494 "common.m"
      break;
#line 494 "common.m"
    }
#line 491 "common.m"
}

#line 480 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
#line 480 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 480 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 480 "common.m"
  MR_Integer check_hlds__simplify__common__VarId_8,
#line 480 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9)
#line 480 "common.m"
{
#line 483 "common.m"
  while (MR_TRUE)
#line 483 "common.m"
    {
#line 483 "common.m"
      /* tailcall optimized into a loop */
#line 483 "common.m"
      {
#line 483 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 483 "common.m"
        MR_Word check_hlds__simplify__common__Struct_5;
#line 483 "common.m"
        MR_Word check_hlds__simplify__common__Structs_6;
#line 483 "common.m"
        MR_Word check_hlds__simplify__common__Var_10;
#line 484 "common.m"
        MR_Word check_hlds__simplify__common___Vars_11;
#line 503 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_8_16;
#line 503 "common.m"
        MR_Integer check_hlds__simplify__common__VarId_15;

#line 483 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 483 "common.m"
          {
#line 483 "common.m"
            check_hlds__simplify__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "common.m"
            check_hlds__simplify__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 484 "common.m"
            check_hlds__simplify__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 0)));
#line 484 "common.m"
            check_hlds__simplify__common___Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 1)));
#line 5437 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_8_16 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 504 "common.m"
            {
#line 504 "common.m"
              check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_16, check_hlds__simplify__common__VarEqv_7, ((MR_Box) (check_hlds__simplify__common__Var_10)), &check_hlds__simplify__common__VarId_15);
            }
#line 503 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 505 "common.m"
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__VarId_8 == check_hlds__simplify__common__VarId_15);
#line 487 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 486 "common.m"
              {
#line 486 "common.m"
                *check_hlds__simplify__common__Match_9 = check_hlds__simplify__common__Struct_5;
#line 486 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 486 "common.m"
              }
#line 487 "common.m"
            else
#line 488 "common.m"
              {
#line 488 "common.m"
                /* direct tailcall eliminated */
#line 488 "common.m"
                {
#line 488 "common.m"
                  MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Structs_6;

#line 488 "common.m"
                  check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 488 "common.m"
                }
#line 488 "common.m"
                continue;
#line 488 "common.m"
              }
#line 483 "common.m"
          }
#line 483 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 483 "common.m"
      }
#line 483 "common.m"
      break;
#line 483 "common.m"
    }
#line 480 "common.m"
}

#line 469 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
#line 469 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 469 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 469 "common.m"
  MR_Word check_hlds__simplify__common__ArgVarIds_8,
#line 469 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9)
#line 469 "common.m"
{
#line 472 "common.m"
  while (MR_TRUE)
#line 472 "common.m"
    {
#line 472 "common.m"
      /* tailcall optimized into a loop */
#line 472 "common.m"
      {
#line 472 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 472 "common.m"
        MR_Word check_hlds__simplify__common__Struct_5;
#line 472 "common.m"
        MR_Word check_hlds__simplify__common__Structs_6;
#line 472 "common.m"
        MR_Word check_hlds__simplify__common__Vars_11;
#line 473 "common.m"
        MR_Word check_hlds__simplify__common___Var_10;

#line 472 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 472 "common.m"
          {
#line 472 "common.m"
            check_hlds__simplify__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 472 "common.m"
            check_hlds__simplify__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 473 "common.m"
            check_hlds__simplify__common___Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 0)));
#line 473 "common.m"
            check_hlds__simplify__common__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 1)));
#line 474 "common.m"
            {
#line 474 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__ids_vars_match_3_p_0(check_hlds__simplify__common__ArgVarIds_8, check_hlds__simplify__common__Vars_11, check_hlds__simplify__common__VarEqv_7);
            }
#line 476 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 475 "common.m"
              {
#line 475 "common.m"
                *check_hlds__simplify__common__Match_9 = check_hlds__simplify__common__Struct_5;
#line 475 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 475 "common.m"
              }
#line 476 "common.m"
            else
#line 477 "common.m"
              {
#line 477 "common.m"
                /* direct tailcall eliminated */
#line 477 "common.m"
                {
#line 477 "common.m"
                  MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Structs_6;

#line 477 "common.m"
                  check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 477 "common.m"
                }
#line 477 "common.m"
                continue;
#line 477 "common.m"
              }
#line 472 "common.m"
          }
#line 472 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 472 "common.m"
      }
#line 472 "common.m"
      break;
#line 472 "common.m"
    }
#line 469 "common.m"
}

#line 398 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__Var_15,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_16,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_17,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_18,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__CanFail_19,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__Mode_20,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_21,
#line 398 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_22,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_23,
#line 398 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_24,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 398 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 398 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 398 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 398 "common.m"
{
#line 406 "common.m"
  {
#line 406 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 406 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_27;
#line 413 "common.m"
    MR_Word check_hlds__simplify__common__LVarMode_28;
#line 413 "common.m"
    MR_Word check_hlds__simplify__common__Inst0_30;
#line 413 "common.m"
    MR_Word check_hlds__simplify__common__V_29_29;
#line 414 "common.m"
    MR_Word check_hlds__simplify__common__V_31_31;

#line 407 "common.m"
    {
#line 407 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_27);
    }
#line 456 "common.m"
    *check_hlds__simplify__common__GoalInfo_24 = check_hlds__simplify__common__GoalInfo0_23;
#line 413 "common.m"
    check_hlds__simplify__common__LVarMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_20, (MR_Integer) 0)));
#line 413 "common.m"
    check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_20, (MR_Integer) 1)));
#line 414 "common.m"
    {
#line 414 "common.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__LVarMode_28, &check_hlds__simplify__common__Inst0_30, &check_hlds__simplify__common__V_31_31);
    }
#line 415 "common.m"
    {
#line 415 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__Inst0_30);
    }
#line 415 "common.m"
    check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 418 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 417 "common.m"
      {
#line 417 "common.m"
        *check_hlds__simplify__common__GoalExpr_22 = check_hlds__simplify__common__GoalExpr0_21;
#line 417 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 417 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_46;
#line 417 "common.m"
      }
#line 418 "common.m"
    else
#line 419 "common.m"
      {
#line 419 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_71_71;
#line 419 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtor_32;
#line 419 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_33;
#line 419 "common.m"
        MR_Integer check_hlds__simplify__common__VarId_34;
#line 419 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv1_35;
#line 419 "common.m"
        MR_Word check_hlds__simplify__common__SinceCallStructMap0_36;
#line 419 "common.m"
        MR_Word check_hlds__simplify__common__VarTypes_79;
#line 419 "common.m"
        MR_Word check_hlds__simplify__common__Type_80;
#line 420 "common.m"
        MR_Word check_hlds__simplify__common__V_61_61;
#line 420 "common.m"
        MR_Word check_hlds__simplify__common__V_62_62;
#line 420 "common.m"
        MR_Word check_hlds__simplify__common__V_63_63;
#line 422 "common.m"
        MR_Word check_hlds__simplify__common__V_64_64;
#line 422 "common.m"
        MR_Word check_hlds__simplify__common__V_65_65;
#line 422 "common.m"
        MR_Word check_hlds__simplify__common__V_66_66;
#line 450 "common.m"
        MR_Word check_hlds__simplify__common__OldStruct_39;
#line 427 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_72_72;
#line 427 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_73_73;
#line 427 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_74_74;
#line 427 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_75_75;
#line 427 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap0_37;
#line 427 "common.m"
        MR_Word check_hlds__simplify__common__Structs_38;
#line 428 "common.m"
        MR_Word check_hlds__simplify__common__V_51_51;
#line 430 "common.m"
        MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_37;
#line 431 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs_38;

#line 461 "common.m"
        {
#line 461 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__VarTypes_79);
        }
#line 462 "common.m"
        {
#line 462 "common.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_79, check_hlds__simplify__common__Var_15, &check_hlds__simplify__common__Type_80);
        }
#line 465 "common.m"
        {
#line 465 "common.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__common__Type_80, &check_hlds__simplify__common__TypeCtor_32);
        }
#line 420 "common.m"
        check_hlds__simplify__common__VarEqv0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 420 "common.m"
        check_hlds__simplify__common__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 420 "common.m"
        check_hlds__simplify__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 420 "common.m"
        check_hlds__simplify__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 5740 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__TypeInfo_71_71 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 421 "common.m"
        {
#line 421 "common.m"
          mercury__eqvclass__ensure_element_partition_id_4_p_0(check_hlds__simplify__common__TypeInfo_71_71, ((MR_Box) (check_hlds__simplify__common__Var_15)), &check_hlds__simplify__common__VarId_34, check_hlds__simplify__common__VarEqv0_33, &check_hlds__simplify__common__VarEqv1_35);
        }
#line 422 "common.m"
        check_hlds__simplify__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 422 "common.m"
        check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 422 "common.m"
        check_hlds__simplify__common__SinceCallStructMap0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 422 "common.m"
        check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 427 "common.m"
        {
#line 427 "common.m"
          check_hlds__simplify__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__simplify__common__GoalInfo_24, (MR_Integer) 3);
        }
#line 427 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 427 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 427 "common.m"
          {
#line 428 "common.m"
            check_hlds__simplify__common__V_51_51 = (MR_Integer) 4;
#line 428 "common.m"
            {
#line 428 "common.m"
              check_hlds__simplify__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__simplify__common__GoalInfo_24, check_hlds__simplify__common__V_51_51);
            }
#line 428 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 427 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 427 "common.m"
              {
#line 5779 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 5781 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_73_73 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[0];
#line 430 "common.m"
                {
#line 430 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_72_72, check_hlds__simplify__common__TypeInfo_73_73, check_hlds__simplify__common__SinceCallStructMap0_36, ((MR_Box) (check_hlds__simplify__common__TypeCtor_32)), &check_hlds__simplify__common__conv0_ConsIdMap0_37);
                }
#line 430 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 430 "common.m"
                  {
#line 430 "common.m"
                    check_hlds__simplify__common__ConsIdMap0_37 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_37);
#line 430 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 430 "common.m"
                  }
#line 427 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 427 "common.m"
                  {
#line 5802 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 5804 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeInfo_75_75 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[1];
#line 431 "common.m"
                    {
#line 431 "common.m"
                      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_74_74, check_hlds__simplify__common__TypeInfo_75_75, check_hlds__simplify__common__ConsIdMap0_37, ((MR_Box) (check_hlds__simplify__common__ConsId_16)), &check_hlds__simplify__common__conv1_Structs_38);
                    }
#line 431 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 431 "common.m"
                      {
#line 431 "common.m"
                        check_hlds__simplify__common__Structs_38 = ((MR_Word) check_hlds__simplify__common__conv1_Structs_38);
#line 431 "common.m"
                        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 431 "common.m"
                      }
#line 427 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 432 "common.m"
                      {
#line 432 "common.m"
                        check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(check_hlds__simplify__common__Structs_38, check_hlds__simplify__common__VarEqv1_35, check_hlds__simplify__common__VarId_34, &check_hlds__simplify__common__OldStruct_39);
                      }
#line 427 "common.m"
                  }
#line 427 "common.m"
              }
#line 427 "common.m"
          }
#line 450 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 434 "common.m"
          {
#line 434 "common.m"
            MR_Word check_hlds__simplify__common__OldArgVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_39, (MR_Integer) 1)));
#line 434 "common.m"
            MR_Word check_hlds__simplify__common__VarEqv_42;
#line 434 "common.m"
            MR_Word check_hlds__simplify__common__Goals_43;
#line 434 "common.m"
            MR_Integer check_hlds__simplify__common__Cost_44;
#line 434 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_52_52;
#line 434 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_54_54;
#line 434 "common.m"
            MR_Word check_hlds__simplify__common__V_56_56;
#line 434 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_57_57;
#line 434 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 434 "common.m"
            MR_Word check_hlds__simplify__common__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_39, (MR_Integer) 0)));
#line 437 "common.m"
            MR_Word check_hlds__simplify__common__V_68_68;
#line 437 "common.m"
            MR_Word check_hlds__simplify__common__V_69_69;
#line 437 "common.m"
            MR_Word check_hlds__simplify__common__V_70_70;
#line 437 "common.m"
            MR_Word check_hlds__simplify__common__V_67_67;

#line 435 "common.m"
            {
#line 435 "common.m"
              mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(check_hlds__simplify__common__TypeInfo_71_71, check_hlds__simplify__common__ArgVars_17, check_hlds__simplify__common__OldArgVars_41, check_hlds__simplify__common__VarEqv1_35, &check_hlds__simplify__common__VarEqv_42);
            }
#line 437 "common.m"
            check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 437 "common.m"
            check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 437 "common.m"
            check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 437 "common.m"
            check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 437 "common.m"
            {
#line 437 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Common_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 437 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_42));
#line 437 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 1) = ((MR_Box) (check_hlds__simplify__common__V_68_68));
#line 437 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 2) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 437 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 3) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 437 "common.m"
            }
#line 438 "common.m"
            {
#line 438 "common.m"
              check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__GoalInfo0_23, check_hlds__simplify__common__ArgVars_17, check_hlds__simplify__common__OldArgVars_41, check_hlds__simplify__common__UniModes_18, &check_hlds__simplify__common__Goals_43, check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, check_hlds__simplify__common__STATE_VARIABLE_Common_47, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_54_54);
            }
#line 440 "common.m"
            {
#line 440 "common.m"
              MR_Word base;
#line 440 "common.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 440 "common.m"
              *check_hlds__simplify__common__GoalExpr_22 = base;
#line 440 "common.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 440 "common.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 440 "common.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__Goals_43));
#line 440 "common.m"
            }
#line 441 "common.m"
            {
#line 441 "common.m"
              check_hlds__simplify__common__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_56_56, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_21));
#line 441 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_56_56, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo0_23));
#line 441 "common.m"
            }
#line 441 "common.m"
            {
#line 441 "common.m"
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_56_56, &check_hlds__simplify__common__Cost_44);
            }
#line 442 "common.m"
            {
#line 442 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__common__STATE_VARIABLE_Info_57_57);
            }
#line 443 "common.m"
            {
#line 443 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_57_57, &check_hlds__simplify__common__STATE_VARIABLE_Info_58_58);
            }
#line 447 "common.m"
            if ((check_hlds__simplify__common__CanFail_19 == (MR_Integer) 0))
#line 446 "common.m"
              {
#line 446 "common.m"
                check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_58_58, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
#line 446 "common.m"
                return;
              }
#line 447 "common.m"
            else
#line 448 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 434 "common.m"
          }
#line 450 "common.m"
        else
#line 451 "common.m"
          {
#line 451 "common.m"
            MR_Word check_hlds__simplify__common__Struct_45;

#line 451 "common.m"
            *check_hlds__simplify__common__GoalExpr_22 = check_hlds__simplify__common__GoalExpr0_21;
#line 452 "common.m"
            {
#line 452 "common.m"
              check_hlds__simplify__common__Struct_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 452 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 0) = ((MR_Box) (check_hlds__simplify__common__Var_15));
#line 452 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 1) = ((MR_Box) (check_hlds__simplify__common__ArgVars_17));
#line 452 "common.m"
            }
#line 453 "common.m"
            {
#line 453 "common.m"
              check_hlds__simplify__common__record_cell_in_maps_6_p_0(check_hlds__simplify__common__TypeCtor_32, check_hlds__simplify__common__ConsId_16, check_hlds__simplify__common__Struct_45, check_hlds__simplify__common__VarEqv1_35, check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, check_hlds__simplify__common__STATE_VARIABLE_Common_47);
            }
#line 451 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 451 "common.m"
          }
#line 419 "common.m"
      }
#line 406 "common.m"
  }
#line 398 "common.m"
}

#line 352 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
#line 352 "common.m"
  MR_Box check_hlds__simplify__common__closure_arg,
#line 352 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 352 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_2,
#line 352 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_3,
#line 352 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_4)
#line 352 "common.m"
{
#line 352 "common.m"
  {
#line 352 "common.m"
    MR_Box check_hlds__simplify__common__closure = check_hlds__simplify__common__closure_arg;
#line 352 "common.m"
    MR_Integer check_hlds__simplify__common__conv1_HeadVar__2_73;
#line 352 "common.m"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__4_75;

#line 352 "common.m"
    {
#line 352 "common.m"
      check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__352__1_4_p_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), &check_hlds__simplify__common__conv1_HeadVar__2_73, ((MR_Word) check_hlds__simplify__common__wrapper_arg_3), &check_hlds__simplify__common__conv0_HeadVar__4_75);
    }
#line 352 "common.m"
    *check_hlds__simplify__common__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__common__conv1_HeadVar__2_73));
#line 352 "common.m"
    *check_hlds__simplify__common__wrapper_arg_4 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__4_75));
#line 352 "common.m"
  }
#line 352 "common.m"
}

#line 333 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__Var_13,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_14,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_15,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__Mode_16,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 333 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_19,
#line 333 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_20,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 333 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 333 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 333 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 333 "common.m"
{
#line 341 "common.m"
  {
#line 341 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 341 "common.m"
    MR_Word check_hlds__simplify__common__LVarMode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_16, (MR_Integer) 0)));
#line 341 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_25;
#line 341 "common.m"
    MR_Word check_hlds__simplify__common__Inst_27;
#line 342 "common.m"
    MR_Word check_hlds__simplify__common__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_16, (MR_Integer) 1)));
#line 344 "common.m"
    MR_Word check_hlds__simplify__common__V_26_26;

#line 343 "common.m"
    {
#line 343 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_25);
    }
#line 344 "common.m"
    {
#line 344 "common.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_25, check_hlds__simplify__common__LVarMode_23, &check_hlds__simplify__common__V_26_26, &check_hlds__simplify__common__Inst_27);
    }
#line 349 "common.m"
    {
#line 349 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__simplify__common__ModuleInfo_25, check_hlds__simplify__common__Inst_27);
    }
#line 393 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 350 "common.m"
      {
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_77_77;
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtor_28;
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_29;
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__ArgVarIds_30;
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv1_31;
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__AllStructMap0_32;
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__VarTypes_87;
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__Type_88;
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__V_62_62;
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__V_63_63;
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__V_64_64;
#line 352 "common.m"
        MR_Box check_hlds__simplify__common__conv2_VarEqv1_31;
#line 354 "common.m"
        MR_Word check_hlds__simplify__common__V_65_65;
#line 354 "common.m"
        MR_Word check_hlds__simplify__common__V_66_66;
#line 354 "common.m"
        MR_Word check_hlds__simplify__common__V_67_67;
#line 387 "common.m"
        MR_Word check_hlds__simplify__common__OldStruct_37;
#line 360 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_80_80;
#line 360 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_81_81;
#line 360 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_82_82;
#line 360 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_83_83;
#line 360 "common.m"
        MR_Word check_hlds__simplify__common__InstMapDelta_33;
#line 360 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap0_35;
#line 360 "common.m"
        MR_Word check_hlds__simplify__common__Structs_36;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__V_34_34;
#line 363 "common.m"
        MR_Box check_hlds__simplify__common__conv3_ConsIdMap0_35;
#line 364 "common.m"
        MR_Box check_hlds__simplify__common__conv4_Structs_36;

#line 461 "common.m"
        {
#line 461 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__VarTypes_87);
        }
#line 462 "common.m"
        {
#line 462 "common.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_87, check_hlds__simplify__common__Var_13, &check_hlds__simplify__common__Type_88);
        }
#line 465 "common.m"
        {
#line 465 "common.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__common__Type_88, &check_hlds__simplify__common__TypeCtor_28);
        }
#line 351 "common.m"
        check_hlds__simplify__common__VarEqv0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 351 "common.m"
        check_hlds__simplify__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 351 "common.m"
        check_hlds__simplify__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 351 "common.m"
        check_hlds__simplify__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 6167 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__TypeInfo_77_77 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 352 "common.m"
        {
#line 352 "common.m"
          mercury__list__map_foldl_5_p_0(check_hlds__simplify__common__TypeInfo_77_77, (MR_Word) &mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[3], (MR_Word) &check_hlds__simplify__common_scalar_common_2[3], check_hlds__simplify__common__ArgVars_15, &check_hlds__simplify__common__ArgVarIds_30, ((MR_Box) (check_hlds__simplify__common__VarEqv0_29)), &check_hlds__simplify__common__conv2_VarEqv1_31);
        }
#line 352 "common.m"
        check_hlds__simplify__common__VarEqv1_31 = ((MR_Word) check_hlds__simplify__common__conv2_VarEqv1_31);
#line 354 "common.m"
        check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 354 "common.m"
        check_hlds__simplify__common__AllStructMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 354 "common.m"
        check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 354 "common.m"
        check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 360 "common.m"
        {
#line 360 "common.m"
          check_hlds__simplify__common__InstMapDelta_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__common__GoalInfo0_19);
        }
#line 361 "common.m"
        {
#line 361 "common.m"
          check_hlds__simplify__common__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__simplify__common__InstMapDelta_33, check_hlds__simplify__common__Var_13, &check_hlds__simplify__common__V_34_34);
        }
#line 360 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 360 "common.m"
          {
#line 6198 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeCtorInfo_80_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 6200 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_81_81 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[0];
#line 363 "common.m"
            {
#line 363 "common.m"
              check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_80_80, check_hlds__simplify__common__TypeInfo_81_81, check_hlds__simplify__common__AllStructMap0_32, ((MR_Box) (check_hlds__simplify__common__TypeCtor_28)), &check_hlds__simplify__common__conv3_ConsIdMap0_35);
            }
#line 363 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 363 "common.m"
              {
#line 363 "common.m"
                check_hlds__simplify__common__ConsIdMap0_35 = ((MR_Word) check_hlds__simplify__common__conv3_ConsIdMap0_35);
#line 363 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 363 "common.m"
              }
#line 360 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 360 "common.m"
              {
#line 6221 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 6223 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_83_83 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[1];
#line 364 "common.m"
                {
#line 364 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_82_82, check_hlds__simplify__common__TypeInfo_83_83, check_hlds__simplify__common__ConsIdMap0_35, ((MR_Box) (check_hlds__simplify__common__ConsId_14)), &check_hlds__simplify__common__conv4_Structs_36);
                }
#line 364 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 364 "common.m"
                  {
#line 364 "common.m"
                    check_hlds__simplify__common__Structs_36 = ((MR_Word) check_hlds__simplify__common__conv4_Structs_36);
#line 364 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 364 "common.m"
                  }
#line 360 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 365 "common.m"
                  {
#line 365 "common.m"
                    check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_matching_cell_construct_4_p_0(check_hlds__simplify__common__Structs_36, check_hlds__simplify__common__VarEqv1_31, check_hlds__simplify__common__ArgVarIds_30, &check_hlds__simplify__common__OldStruct_37);
                  }
#line 360 "common.m"
              }
#line 360 "common.m"
          }
#line 387 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 368 "common.m"
          {
#line 368 "common.m"
            MR_Word check_hlds__simplify__common__OldVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_37, (MR_Integer) 0)));
#line 368 "common.m"
            MR_Word check_hlds__simplify__common__VarEqv_40;
#line 368 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_51_51;
#line 368 "common.m"
            MR_Word check_hlds__simplify__common__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_37, (MR_Integer) 1)));
#line 370 "common.m"
            MR_Word check_hlds__simplify__common__V_69_69;
#line 370 "common.m"
            MR_Word check_hlds__simplify__common__V_70_70;
#line 370 "common.m"
            MR_Word check_hlds__simplify__common__V_71_71;
#line 370 "common.m"
            MR_Word check_hlds__simplify__common__V_68_68;

#line 369 "common.m"
            {
#line 369 "common.m"
              mercury__eqvclass__ensure_equivalence_4_p_0(check_hlds__simplify__common__TypeInfo_77_77, ((MR_Box) (check_hlds__simplify__common__Var_13)), ((MR_Box) (check_hlds__simplify__common__OldVar_38)), check_hlds__simplify__common__VarEqv1_31, &check_hlds__simplify__common__VarEqv_40);
            }
#line 370 "common.m"
            check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 370 "common.m"
            check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 370 "common.m"
            check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 370 "common.m"
            check_hlds__simplify__common__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 370 "common.m"
            {
#line 370 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Common_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 370 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_40));
#line 370 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 1) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 370 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 2) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 370 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 3) = ((MR_Box) (check_hlds__simplify__common__V_71_71));
#line 370 "common.m"
            }
#line 378 "common.m"
            if ((check_hlds__simplify__common__ArgVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "common.m"
              {
#line 376 "common.m"
                *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 377 "common.m"
                *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 372 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_51_51;
#line 372 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 372 "common.m"
              }
#line 378 "common.m"
            else
#line 379 "common.m"
              {
#line 379 "common.m"
                MR_Word check_hlds__simplify__common__UniMode_43;
#line 379 "common.m"
                MR_Integer check_hlds__simplify__common__Cost_44;
#line 379 "common.m"
                MR_Word check_hlds__simplify__common__V_52_52;
#line 379 "common.m"
                MR_Word check_hlds__simplify__common__V_54_54;
#line 379 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_57_57;
#line 379 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 379 "common.m"
                MR_Word check_hlds__simplify__common__V_59_59;

#line 380 "common.m"
                {
#line 380 "common.m"
                  check_hlds__simplify__common__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 380 "common.m"
                }
#line 380 "common.m"
                {
#line 380 "common.m"
                  check_hlds__simplify__common__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_54_54, 0) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 380 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_54_54, 1) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 380 "common.m"
                }
#line 380 "common.m"
                {
#line 380 "common.m"
                  check_hlds__simplify__common__UniMode_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_43, 0) = ((MR_Box) (check_hlds__simplify__common__V_52_52));
#line 380 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_43, 1) = ((MR_Box) (check_hlds__simplify__common__V_54_54));
#line 380 "common.m"
                }
#line 381 "common.m"
                {
#line 381 "common.m"
                  check_hlds__simplify__common__generate_assign_10_p_0(check_hlds__simplify__common__Var_13, check_hlds__simplify__common__OldVar_38, check_hlds__simplify__common__UniMode_43, check_hlds__simplify__common__GoalInfo0_19, check_hlds__simplify__common__GoalExpr_18, check_hlds__simplify__common__GoalInfo_20, check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, check_hlds__simplify__common__STATE_VARIABLE_Common_47, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_57_57);
                }
#line 383 "common.m"
                {
#line 383 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_57_57, &check_hlds__simplify__common__STATE_VARIABLE_Info_58_58);
                }
#line 384 "common.m"
                {
#line 384 "common.m"
                  check_hlds__simplify__common__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_17));
#line 384 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_59_59, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo0_19));
#line 384 "common.m"
                }
#line 384 "common.m"
                {
#line 384 "common.m"
                  transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_59_59, &check_hlds__simplify__common__Cost_44);
                }
#line 385 "common.m"
                {
#line 385 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_58_58, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
#line 385 "common.m"
                  return;
                }
#line 379 "common.m"
              }
#line 368 "common.m"
          }
#line 387 "common.m"
        else
#line 388 "common.m"
          {
#line 388 "common.m"
            MR_Word check_hlds__simplify__common__Struct_45;

#line 388 "common.m"
            *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 389 "common.m"
            *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 390 "common.m"
            {
#line 390 "common.m"
              check_hlds__simplify__common__Struct_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 0) = ((MR_Box) (check_hlds__simplify__common__Var_13));
#line 390 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 1) = ((MR_Box) (check_hlds__simplify__common__ArgVars_15));
#line 390 "common.m"
            }
#line 391 "common.m"
            {
#line 391 "common.m"
              check_hlds__simplify__common__record_cell_in_maps_6_p_0(check_hlds__simplify__common__TypeCtor_28, check_hlds__simplify__common__ConsId_14, check_hlds__simplify__common__Struct_45, check_hlds__simplify__common__VarEqv1_31, check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, check_hlds__simplify__common__STATE_VARIABLE_Common_47);
            }
#line 388 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 388 "common.m"
          }
#line 350 "common.m"
      }
#line 393 "common.m"
    else
#line 394 "common.m"
      {
#line 394 "common.m"
        *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 395 "common.m"
        *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 394 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 394 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_46;
#line 394 "common.m"
      }
#line 341 "common.m"
  }
#line 333 "common.m"
}

#line 155 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_info_clear_structs_2_p_0(
#line 155 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_4,
#line 155 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_5)
#line 155 "common.m"
{
#line 302 "common.m"
  {
#line 302 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 302 "common.m"
    MR_Word check_hlds__simplify__common__V_7_7;
#line 303 "common.m"
    MR_Word check_hlds__simplify__common__V_8_8;
#line 303 "common.m"
    MR_Word check_hlds__simplify__common__V_9_9;
#line 303 "common.m"
    MR_Word check_hlds__simplify__common__V_11_11;
#line 303 "common.m"
    MR_Word check_hlds__simplify__common__V_10_10;

#line 303 "common.m"
    {
#line 303 "common.m"
      check_hlds__simplify__common__V_7_7 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0]);
    }
#line 303 "common.m"
    check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 303 "common.m"
    check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 303 "common.m"
    check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 303 "common.m"
    check_hlds__simplify__common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 303 "common.m"
    {
#line 303 "common.m"
      MR_Word base;
#line 303 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 303 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Info_5 = base;
#line 303 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_8_8));
#line 303 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_9_9));
#line 303 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_7_7));
#line 303 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_11_11));
#line 303 "common.m"
    }
#line 302 "common.m"
  }
#line 155 "common.m"
}

#line 151 "common.m"
MR_Word MR_CALL 
check_hlds__simplify__common__common_info_init_0_f_0(void)
#line 151 "common.m"
{
#line 296 "common.m"
  {
#line 296 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 296 "common.m"
    MR_Word check_hlds__simplify__common__CommonInfo_2;
#line 296 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv0_3;
#line 296 "common.m"
    MR_Word check_hlds__simplify__common__StructMap0_4;
#line 296 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls0_5;

#line 297 "common.m"
    {
#line 297 "common.m"
      mercury__eqvclass__init_1_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], &check_hlds__simplify__common__VarEqv0_3);
    }
#line 298 "common.m"
    {
#line 298 "common.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], &check_hlds__simplify__common__StructMap0_4);
    }
#line 299 "common.m"
    {
#line 299 "common.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], &check_hlds__simplify__common__SeenCalls0_5);
    }
#line 300 "common.m"
    {
#line 300 "common.m"
      check_hlds__simplify__common__CommonInfo_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 300 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv0_3));
#line 300 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 1) = ((MR_Box) (check_hlds__simplify__common__StructMap0_4));
#line 300 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 2) = ((MR_Box) (check_hlds__simplify__common__StructMap0_4));
#line 300 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls0_5));
#line 300 "common.m"
    }
#line 296 "common.m"
    return check_hlds__simplify__common__CommonInfo_2;
#line 296 "common.m"
  }
#line 151 "common.m"
}

#line 144 "common.m"
MR_bool MR_CALL 
check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(
#line 144 "common.m"
  MR_Word check_hlds__simplify__common__X_4,
#line 144 "common.m"
  MR_Word check_hlds__simplify__common__Y_5,
#line 144 "common.m"
  MR_Word check_hlds__simplify__common__CommonInfo_6)
#line 144 "common.m"
{
#line 761 "common.m"
  {
#line 761 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 761 "common.m"
    MR_Word check_hlds__simplify__common__EqvVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 0)));
#line 762 "common.m"
    MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 1)));
#line 762 "common.m"
    MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 2)));
#line 762 "common.m"
    MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 3)));

#line 773 "common.m"
    {
#line 773 "common.m"
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__X_4)), ((MR_Box) (check_hlds__simplify__common__Y_5)));
    }
#line 773 "common.m"
    if (!(check_hlds__simplify__common__succeeded))
#line 775 "common.m"
      {
#line 775 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_8_15 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 775 "common.m"
        MR_Integer check_hlds__simplify__common__Id_14;
#line 775 "common.m"
        MR_Integer check_hlds__simplify__common__V_16_16;

#line 775 "common.m"
        {
#line 775 "common.m"
          check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_15, check_hlds__simplify__common__EqvVars_7, ((MR_Box) (check_hlds__simplify__common__X_4)), &check_hlds__simplify__common__Id_14);
        }
#line 775 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 775 "common.m"
          {
#line 776 "common.m"
            {
#line 776 "common.m"
              check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_15, check_hlds__simplify__common__EqvVars_7, ((MR_Box) (check_hlds__simplify__common__Y_5)), &check_hlds__simplify__common__V_16_16);
            }
#line 775 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 776 "common.m"
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_14 == check_hlds__simplify__common__V_16_16);
#line 775 "common.m"
          }
#line 775 "common.m"
      }
#line 761 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 761 "common.m"
  }
#line 144 "common.m"
}

#line 135 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(
#line 135 "common.m"
  MR_Word check_hlds__simplify__common__Closure_13,
#line 135 "common.m"
  MR_Word check_hlds__simplify__common__Args_14,
#line 135 "common.m"
  MR_Word check_hlds__simplify__common__Modes_15,
#line 135 "common.m"
  MR_Word check_hlds__simplify__common__Det_16,
#line 135 "common.m"
  MR_Word check_hlds__simplify__common__Purity_17,
#line 135 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_18,
#line 135 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_19,
#line 135 "common.m"
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_20,
#line 135 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_28,
#line 135 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_29,
#line 135 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_30,
#line 135 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_31)
#line 135 "common.m"
{
#line 586 "common.m"
  {
#line 586 "common.m"
    MR_bool check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Purity_17 == (MR_Integer) 0);
#line 586 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs_25;
#line 586 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs_26;
#line 586 "common.m"
    MR_Word check_hlds__simplify__common__OutputModes_27;
#line 576 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_23;
#line 576 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_24;
#line 576 "common.m"
    MR_Word check_hlds__simplify__common__SolnCount_38;
#line 593 "common.m"
    MR_Word check_hlds__simplify__common__V_37_37;

#line 576 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 576 "common.m"
      {
#line 593 "common.m"
        {
#line 593 "common.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__common__Det_16, &check_hlds__simplify__common__V_37_37, &check_hlds__simplify__common__SolnCount_38);
        }
#line 596 "common.m"
        if ((check_hlds__simplify__common__SolnCount_38 == (MR_Integer) 2))
#line 596 "common.m"
          check_hlds__simplify__common__succeeded = MR_TRUE;
#line 596 "common.m"
        else
#line 596 "common.m"
        if ((check_hlds__simplify__common__SolnCount_38 == (MR_Integer) 1))
#line 595 "common.m"
          check_hlds__simplify__common__succeeded = MR_TRUE;
#line 596 "common.m"
        else
#line 596 "common.m"
          check_hlds__simplify__common__succeeded = MR_FALSE;
#line 576 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 576 "common.m"
          {
#line 578 "common.m"
            {
#line 578 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__common__VarTypes_23);
            }
#line 579 "common.m"
            {
#line 579 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__common__ModuleInfo_24);
            }
#line 580 "common.m"
            {
#line 580 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_23, check_hlds__simplify__common__ModuleInfo_24, check_hlds__simplify__common__Modes_15, check_hlds__simplify__common__Args_14, &check_hlds__simplify__common__InputArgs_25, &check_hlds__simplify__common__OutputArgs_26, &check_hlds__simplify__common__OutputModes_27);
            }
#line 576 "common.m"
          }
#line 576 "common.m"
      }
#line 586 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 583 "common.m"
      {
#line 583 "common.m"
        MR_Word check_hlds__simplify__common__V_33_33;

#line 583 "common.m"
        {
#line 583 "common.m"
          check_hlds__simplify__common__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_33_33, 0) = ((MR_Box) (check_hlds__simplify__common__Closure_13));
#line 583 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_33_33, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_25));
#line 583 "common.m"
        }
#line 583 "common.m"
        {
#line 583 "common.m"
          check_hlds__simplify__common__common_optimise_call_2_11_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__common__V_33_33, check_hlds__simplify__common__OutputArgs_26, check_hlds__simplify__common__OutputModes_27, check_hlds__simplify__common__GoalInfo_18, check_hlds__simplify__common__GoalExpr0_19, check_hlds__simplify__common__MaybeAssignsGoalExpr_20, check_hlds__simplify__common__STATE_VARIABLE_Common_0_28, check_hlds__simplify__common__STATE_VARIABLE_Common_29, check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, check_hlds__simplify__common__STATE_VARIABLE_Info_31);
#line 583 "common.m"
          return;
        }
#line 583 "common.m"
      }
#line 586 "common.m"
    else
#line 587 "common.m"
      {
#line 587 "common.m"
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_31 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_30;
#line 587 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_29 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_28;
#line 587 "common.m"
      }
#line 586 "common.m"
  }
#line 135 "common.m"
}

#line 129 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_optimise_call_11_p_0(
#line 129 "common.m"
  MR_Word check_hlds__simplify__common__PredId_12,
#line 129 "common.m"
  MR_Integer check_hlds__simplify__common__ProcId_13,
#line 129 "common.m"
  MR_Word check_hlds__simplify__common__Args_14,
#line 129 "common.m"
  MR_Word check_hlds__simplify__common__Purity_15,
#line 129 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 129 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 129 "common.m"
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
#line 129 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_30,
#line 129 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_31,
#line 129 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_32,
#line 129 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_33)
#line 129 "common.m"
{
#line 569 "common.m"
  {
#line 569 "common.m"
    MR_bool check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Purity_15 == (MR_Integer) 0);
#line 569 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs_27;
#line 569 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs_28;
#line 569 "common.m"
    MR_Word check_hlds__simplify__common__OutputModes_29;
#line 556 "common.m"
    MR_Word check_hlds__simplify__common__Det_21;
#line 556 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_22;
#line 556 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_23;
#line 556 "common.m"
    MR_Word check_hlds__simplify__common__ProcInfo_25;
#line 556 "common.m"
    MR_Word check_hlds__simplify__common__ArgModes_26;
#line 556 "common.m"
    MR_Word check_hlds__simplify__common__SolnCount_39;
#line 593 "common.m"
    MR_Word check_hlds__simplify__common__V_38_38;
#line 561 "common.m"
    MR_Word check_hlds__simplify__common__V_24_24;

#line 556 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 556 "common.m"
      {
#line 557 "common.m"
        {
#line 557 "common.m"
          check_hlds__simplify__common__Det_21 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__common__GoalInfo_16);
        }
#line 593 "common.m"
        {
#line 593 "common.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__common__Det_21, &check_hlds__simplify__common__V_38_38, &check_hlds__simplify__common__SolnCount_39);
        }
#line 596 "common.m"
        if ((check_hlds__simplify__common__SolnCount_39 == (MR_Integer) 2))
#line 596 "common.m"
          check_hlds__simplify__common__succeeded = MR_TRUE;
#line 596 "common.m"
        else
#line 596 "common.m"
        if ((check_hlds__simplify__common__SolnCount_39 == (MR_Integer) 1))
#line 595 "common.m"
          check_hlds__simplify__common__succeeded = MR_TRUE;
#line 596 "common.m"
        else
#line 596 "common.m"
          check_hlds__simplify__common__succeeded = MR_FALSE;
#line 556 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 556 "common.m"
          {
#line 559 "common.m"
            {
#line 559 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, &check_hlds__simplify__common__VarTypes_22);
            }
#line 560 "common.m"
            {
#line 560 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, &check_hlds__simplify__common__ModuleInfo_23);
            }
#line 561 "common.m"
            {
#line 561 "common.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__common__ModuleInfo_23, check_hlds__simplify__common__PredId_12, check_hlds__simplify__common__ProcId_13, &check_hlds__simplify__common__V_24_24, &check_hlds__simplify__common__ProcInfo_25);
            }
#line 562 "common.m"
            {
#line 562 "common.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__common__ProcInfo_25, &check_hlds__simplify__common__ArgModes_26);
            }
#line 563 "common.m"
            {
#line 563 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_22, check_hlds__simplify__common__ModuleInfo_23, check_hlds__simplify__common__ArgModes_26, check_hlds__simplify__common__Args_14, &check_hlds__simplify__common__InputArgs_27, &check_hlds__simplify__common__OutputArgs_28, &check_hlds__simplify__common__OutputModes_29);
            }
#line 556 "common.m"
          }
#line 556 "common.m"
      }
#line 569 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 566 "common.m"
      {
#line 566 "common.m"
        MR_Word check_hlds__simplify__common__V_34_34;

#line 566 "common.m"
        {
#line 566 "common.m"
          check_hlds__simplify__common__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_34_34, 0) = ((MR_Box) (check_hlds__simplify__common__PredId_12));
#line 566 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_34_34, 1) = ((MR_Box) (check_hlds__simplify__common__ProcId_13));
#line 566 "common.m"
        }
#line 566 "common.m"
        {
#line 566 "common.m"
          check_hlds__simplify__common__common_optimise_call_2_11_p_0(check_hlds__simplify__common__V_34_34, check_hlds__simplify__common__InputArgs_27, check_hlds__simplify__common__OutputArgs_28, check_hlds__simplify__common__OutputModes_29, check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__GoalExpr0_17, check_hlds__simplify__common__MaybeAssignsGoalExpr_18, check_hlds__simplify__common__STATE_VARIABLE_Common_0_30, check_hlds__simplify__common__STATE_VARIABLE_Common_31, check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, check_hlds__simplify__common__STATE_VARIABLE_Info_33);
#line 566 "common.m"
          return;
        }
#line 566 "common.m"
      }
#line 569 "common.m"
    else
#line 570 "common.m"
      {
#line 570 "common.m"
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 570 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_33 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_32;
#line 570 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_31 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_30;
#line 570 "common.m"
      }
#line 569 "common.m"
  }
#line 129 "common.m"
}

#line 115 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_optimise_unification_10_p_0(
#line 115 "common.m"
  MR_Word check_hlds__simplify__common__Unification0_11,
#line 115 "common.m"
  MR_Word check_hlds__simplify__common__Mode_12,
#line 115 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35,
#line 115 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36,
#line 115 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37,
#line 115 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38,
#line 115 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_39,
#line 115 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_40,
#line 115 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_41,
#line 115 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_42)
#line 115 "common.m"
{
#line 310 "common.m"
  {
#line 310 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 310 "common.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) == (MR_mktag((MR_Integer) 2))))
#line 327 "common.m"
      {
#line 327 "common.m"
        MR_Word check_hlds__simplify__common__Var1_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 327 "common.m"
        MR_Word check_hlds__simplify__common__Var2_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 327 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 327 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv_63;
#line 546 "common.m"
        MR_Word check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 546 "common.m"
        MR_Word check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 546 "common.m"
        MR_Word check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 548 "common.m"
        MR_Word check_hlds__simplify__common__V_69_69;
#line 548 "common.m"
        MR_Word check_hlds__simplify__common__V_70_70;
#line 548 "common.m"
        MR_Word check_hlds__simplify__common__V_71_71;
#line 548 "common.m"
        MR_Word check_hlds__simplify__common__V_68_68;

#line 547 "common.m"
        {
#line 547 "common.m"
          mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var1_30)), ((MR_Box) (check_hlds__simplify__common__Var2_31)), check_hlds__simplify__common__VarEqv0_62, &check_hlds__simplify__common__VarEqv_63);
        }
#line 548 "common.m"
        check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 548 "common.m"
        check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 548 "common.m"
        check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 548 "common.m"
        check_hlds__simplify__common__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 548 "common.m"
        {
#line 548 "common.m"
          MR_Word base;
#line 548 "common.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 548 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = base;
#line 548 "common.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_63));
#line 548 "common.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 548 "common.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 548 "common.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_71_71));
#line 548 "common.m"
        }
#line 327 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 327 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 327 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 327 "common.m"
      }
#line 310 "common.m"
    else
#line 310 "common.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) == (MR_mktag((MR_Integer) 0))))
#line 310 "common.m"
      {
#line 310 "common.m"
        MR_Word check_hlds__simplify__common__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 310 "common.m"
        MR_Word check_hlds__simplify__common__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 310 "common.m"
        MR_Word check_hlds__simplify__common__ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 310 "common.m"
        MR_Word check_hlds__simplify__common__SubInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 6)));
#line 310 "common.m"
        MR_Word check_hlds__simplify__common__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 3)));
#line 310 "common.m"
        MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 4)));
#line 310 "common.m"
        MR_Word check_hlds__simplify__common__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 5)));
#line 312 "common.m"
        MR_Word check_hlds__simplify__common__MaybeTakeAddr_24;
#line 312 "common.m"
        MR_Word check_hlds__simplify__common__V_25_25;
#line 313 "common.m"
        MR_Word check_hlds__simplify__common__V_26_26;

#line 312 "common.m"
        check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__SubInfo_23)) == (MR_mktag((MR_Integer) 1)));
#line 312 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 312 "common.m"
          {
#line 312 "common.m"
            check_hlds__simplify__common__MaybeTakeAddr_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__SubInfo_23, (MR_Integer) 0)));
#line 312 "common.m"
            check_hlds__simplify__common__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__SubInfo_23, (MR_Integer) 1)));
#line 313 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__MaybeTakeAddr_24)) == (MR_mktag((MR_Integer) 1)));
#line 313 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 313 "common.m"
              check_hlds__simplify__common__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__MaybeTakeAddr_24, (MR_Integer) 0)));
#line 312 "common.m"
          }
#line 316 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 315 "common.m"
          {
#line 315 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 315 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_39;
#line 315 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 315 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 315 "common.m"
          }
#line 316 "common.m"
        else
#line 317 "common.m"
          {
#line 317 "common.m"
            check_hlds__simplify__common__common_optimise_construct_12_p_0(check_hlds__simplify__common__Var_17, check_hlds__simplify__common__ConsId_18, check_hlds__simplify__common__ArgVars_19, check_hlds__simplify__common__Mode_12, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38, check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, check_hlds__simplify__common__STATE_VARIABLE_Common_40, check_hlds__simplify__common__STATE_VARIABLE_Info_0_41, check_hlds__simplify__common__STATE_VARIABLE_Info_42);
#line 317 "common.m"
            return;
          }
#line 310 "common.m"
      }
#line 310 "common.m"
    else
#line 310 "common.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) == (MR_mktag((MR_Integer) 1))))
#line 321 "common.m"
      {
#line 321 "common.m"
        MR_Word check_hlds__simplify__common__UniModes_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 3)));
#line 321 "common.m"
        MR_Word check_hlds__simplify__common__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 4)));
#line 321 "common.m"
        MR_Word check_hlds__simplify__common__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 321 "common.m"
        MR_Word check_hlds__simplify__common__ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 321 "common.m"
        MR_Word check_hlds__simplify__common__ArgVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 321 "common.m"
        MR_Word check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 5)));

#line 322 "common.m"
        {
#line 322 "common.m"
          check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(check_hlds__simplify__common__Var_52, check_hlds__simplify__common__ConsId_53, check_hlds__simplify__common__ArgVars_54, check_hlds__simplify__common__UniModes_27, check_hlds__simplify__common__CanFail_28, check_hlds__simplify__common__Mode_12, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38, check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, check_hlds__simplify__common__STATE_VARIABLE_Common_40, check_hlds__simplify__common__STATE_VARIABLE_Info_0_41, check_hlds__simplify__common__STATE_VARIABLE_Info_42);
#line 322 "common.m"
          return;
        }
#line 321 "common.m"
      }
#line 310 "common.m"
    else
#line 310 "common.m"
    if (((((MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 330 "common.m"
      {
#line 330 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 330 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 330 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_39;
#line 330 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 330 "common.m"
      }
#line 310 "common.m"
    else
#line 327 "common.m"
      {
#line 327 "common.m"
        MR_Word check_hlds__simplify__common__Var1_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 327 "common.m"
        MR_Word check_hlds__simplify__common__Var2_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 327 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 327 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv_79;
#line 546 "common.m"
        MR_Word check_hlds__simplify__common__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 546 "common.m"
        MR_Word check_hlds__simplify__common__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 546 "common.m"
        MR_Word check_hlds__simplify__common__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 548 "common.m"
        MR_Word check_hlds__simplify__common__V_85_85;
#line 548 "common.m"
        MR_Word check_hlds__simplify__common__V_86_86;
#line 548 "common.m"
        MR_Word check_hlds__simplify__common__V_87_87;
#line 548 "common.m"
        MR_Word check_hlds__simplify__common__V_84_84;

#line 547 "common.m"
        {
#line 547 "common.m"
          mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var1_55)), ((MR_Box) (check_hlds__simplify__common__Var2_56)), check_hlds__simplify__common__VarEqv0_78, &check_hlds__simplify__common__VarEqv_79);
        }
#line 548 "common.m"
        check_hlds__simplify__common__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 548 "common.m"
        check_hlds__simplify__common__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 548 "common.m"
        check_hlds__simplify__common__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 548 "common.m"
        check_hlds__simplify__common__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 548 "common.m"
        {
#line 548 "common.m"
          MR_Word base;
#line 548 "common.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 548 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = base;
#line 548 "common.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_79));
#line 548 "common.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_85_85));
#line 548 "common.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_86_86));
#line 548 "common.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_87_87));
#line 548 "common.m"
        }
#line 327 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 327 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 327 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 327 "common.m"
      }
#line 310 "common.m"
  }
#line 115 "common.m"
}

void mercury__check_hlds__simplify__common__init(void)
{
}

void mercury__check_hlds__simplify__common__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_info_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_cons_id_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_seen_calls_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_struct_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structures_0);
}

void mercury__check_hlds__simplify__common__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.common. */
