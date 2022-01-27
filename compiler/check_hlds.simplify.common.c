/*
** Automatically generated from `common.m'
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


/* :- module check_hlds.simplify.common. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__common__init
ENDINIT
*/

#include "check_hlds.simplify.common.mih"


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
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
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
#include "eqvclass.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.pd_cost.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 151 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3];

#line 166 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0;

#line 169 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1];

#line 172 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1];

#line 175 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0[1];

#line 178 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0[1];

#line 181 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 187 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 190 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 193 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

#line 196 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

#line 199 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[4];

#line 202 "check_hlds.simplify.common.c"
static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[4];

#line 205 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0;

#line 208 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1];

#line 211 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1];

#line 214 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1];

#line 217 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1];

#line 220 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2];

#line 223 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0;

#line 226 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1];

#line 229 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1];

#line 232 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1];

#line 235 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1];

#line 238 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
#line 241 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 243 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 246 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
#line 249 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 251 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 253 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 256 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
#line 259 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 261 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 264 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
#line 267 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 269 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 271 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 274 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
#line 277 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 279 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 282 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
#line 285 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 287 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 289 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 292 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
#line 295 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 297 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 300 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
#line 303 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 305 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 307 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 310 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
#line 313 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 315 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 318 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
#line 321 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 323 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 325 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 328 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
#line 331 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 333 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 336 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
#line 339 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 341 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 343 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 346 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
#line 349 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 351 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 354 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
#line 357 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 359 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 361 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 353 "common.m"
static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__353__1_4_p_0(
#line 353 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_72,
#line 353 "common.m"
  MR_Integer * check_hlds__simplify__common__HeadVar__2_73,
#line 353 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_74,
#line 353 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__4_75);

#line 275 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0(
#line 275 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 275 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0(
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 275 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 276 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0(
#line 276 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 276 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 276 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 276 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0(
#line 276 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 276 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 268 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0(
#line 268 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 268 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0(
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 268 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 279 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0(
#line 279 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 279 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0(
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 269 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0(
#line 269 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 269 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 269 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 269 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0(
#line 269 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 269 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 281 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0(
#line 281 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 281 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 281 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 281 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0(
#line 281 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 281 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 920 "common.m"
static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
#line 920 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_5,
#line 920 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_6,
#line 920 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_17,
#line 920 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_18);

#line 894 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
#line 894 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 894 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 870 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
#line 870 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 870 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 828 "common.m"
static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_11,
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_12,
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__UniMode_13,
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_14,
#line 828 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_15,
#line 828 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_33,
#line 828 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_34,
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_35,
#line 828 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_36);

#line 788 "common.m"
static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_10,
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_11,
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__OldOutputArgs_12,
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_13,
#line 788 "common.m"
  MR_Word * check_hlds__simplify__common__AssignGoals_14,
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_27,
#line 788 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_28,
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_29,
#line 788 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_30);

#line 754 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
#line 754 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 754 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 754 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 736 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
#line 736 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 736 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_8,
#line 736 "common.m"
  MR_Word check_hlds__simplify__common__Eqv_9,
#line 736 "common.m"
  MR_Word * check_hlds__simplify__common__OutputArgs_10,
#line 736 "common.m"
  MR_Word * check_hlds__simplify__common__PrevContext_11);

#line 694 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
#line 694 "common.m"
  MR_Word check_hlds__simplify__common__VarTypes_1,
#line 694 "common.m"
  MR_Word check_hlds__simplify__common__ModuleInfo_2,
#line 694 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3,
#line 694 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__4_4,
#line 694 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__5_5,
#line 694 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__6_6,
#line 694 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__7_7);

#line 600 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__SeenCall_12,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_13,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_14,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__Modes_15,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 600 "common.m"
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__Common0_19,
#line 600 "common.m"
  MR_Word * check_hlds__simplify__common__Common_20,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 600 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49);

#line 524 "common.m"
static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
#line 524 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_6,
#line 524 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_7,
#line 524 "common.m"
  MR_Word check_hlds__simplify__common__Struct_8,
#line 524 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14,
#line 524 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);

#line 510 "common.m"
static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
#line 510 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_7,
#line 510 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_8,
#line 510 "common.m"
  MR_Word check_hlds__simplify__common__Struct_9,
#line 510 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_10,
#line 510 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_16,
#line 510 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_17);

#line 492 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
#line 492 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 492 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 492 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 481 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
#line 481 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 481 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 481 "common.m"
  MR_Integer check_hlds__simplify__common__VarId_8,
#line 481 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9);

#line 470 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
#line 470 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 470 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 470 "common.m"
  MR_Word check_hlds__simplify__common__ArgVarIds_8,
#line 470 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9);

#line 399 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__Var_15,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_16,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_17,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_18,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__CanFail_19,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__Mode_20,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_21,
#line 399 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_22,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_23,
#line 399 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_24,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 399 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 399 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49);

#line 353 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
#line 353 "common.m"
  MR_Box check_hlds__simplify__common__closure_arg,
#line 353 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 353 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_2,
#line 353 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_3,
#line 353 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_4);

#line 334 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__Var_13,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_14,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_15,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__Mode_16,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 334 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_19,
#line 334 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_20,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 334 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 334 "common.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: redundant"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 21)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 906 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 914 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 922 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 930 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 938 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 945 "check_hlds.simplify.common.c"
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

#line 960 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

#line 965 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0
  }
};

#line 974 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

#line 979 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0[1] = {
  (MR_Integer) 0
};

#line 984 "check_hlds.simplify.common.c"
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

#line 1001 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1009 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1017 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1026 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1035 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0
  }
};

#line 1043 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0,
    (MR_TypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
  }
};

#line 1052 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
};

#line 1060 "check_hlds.simplify.common.c"
static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[4] = {
  (MR_String) "var_eqv",
  (MR_String) "all_structs",
  (MR_String) "since_call_structs",
  (MR_String) "seen_calls"
};

#line 1068 "check_hlds.simplify.common.c"
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

#line 1083 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

#line 1088 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0
  }
};

#line 1097 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

#line 1102 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1] = {
  (MR_Integer) 0
};

#line 1107 "check_hlds.simplify.common.c"
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

#line 1124 "check_hlds.simplify.common.c"
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

#line 1141 "check_hlds.simplify.common.c"
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

#line 1158 "check_hlds.simplify.common.c"
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

#line 1175 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1181 "check_hlds.simplify.common.c"
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

#line 1196 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

#line 1201 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0
  }
};

#line 1210 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

#line 1215 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1] = {
  (MR_Integer) 0
};

#line 1220 "check_hlds.simplify.common.c"
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

#line 1237 "check_hlds.simplify.common.c"
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

#line 1254 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
#line 1257 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1259 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1261 "check_hlds.simplify.common.c"
{
#line 1263 "check_hlds.simplify.common.c"
  {
#line 1265 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1268 "check_hlds.simplify.common.c"
    {
#line 1270 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____call_args_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1273 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1275 "check_hlds.simplify.common.c"
  }
#line 1277 "check_hlds.simplify.common.c"
}

#line 1280 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
#line 1283 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1285 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1287 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1289 "check_hlds.simplify.common.c"
{
#line 1291 "check_hlds.simplify.common.c"
  {
#line 1293 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1296 "check_hlds.simplify.common.c"
    {
#line 1298 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____call_args_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1301 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1303 "check_hlds.simplify.common.c"
  }
#line 1305 "check_hlds.simplify.common.c"
}

#line 1308 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
#line 1311 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1313 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1315 "check_hlds.simplify.common.c"
{
#line 1317 "check_hlds.simplify.common.c"
  {
#line 1319 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1322 "check_hlds.simplify.common.c"
    {
#line 1324 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____common_info_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1327 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1329 "check_hlds.simplify.common.c"
  }
#line 1331 "check_hlds.simplify.common.c"
}

#line 1334 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
#line 1337 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1339 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1341 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1343 "check_hlds.simplify.common.c"
{
#line 1345 "check_hlds.simplify.common.c"
  {
#line 1347 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1350 "check_hlds.simplify.common.c"
    {
#line 1352 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____common_info_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1355 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1357 "check_hlds.simplify.common.c"
  }
#line 1359 "check_hlds.simplify.common.c"
}

#line 1362 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
#line 1365 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1367 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1369 "check_hlds.simplify.common.c"
{
#line 1371 "check_hlds.simplify.common.c"
  {
#line 1373 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1376 "check_hlds.simplify.common.c"
    {
#line 1378 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____cons_id_map_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1381 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1383 "check_hlds.simplify.common.c"
  }
#line 1385 "check_hlds.simplify.common.c"
}

#line 1388 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
#line 1391 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1393 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1395 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1397 "check_hlds.simplify.common.c"
{
#line 1399 "check_hlds.simplify.common.c"
  {
#line 1401 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1404 "check_hlds.simplify.common.c"
    {
#line 1406 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____cons_id_map_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1409 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1411 "check_hlds.simplify.common.c"
  }
#line 1413 "check_hlds.simplify.common.c"
}

#line 1416 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
#line 1419 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1421 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1423 "check_hlds.simplify.common.c"
{
#line 1425 "check_hlds.simplify.common.c"
  {
#line 1427 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1430 "check_hlds.simplify.common.c"
    {
#line 1432 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____seen_calls_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1435 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1437 "check_hlds.simplify.common.c"
  }
#line 1439 "check_hlds.simplify.common.c"
}

#line 1442 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
#line 1445 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1447 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1449 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1451 "check_hlds.simplify.common.c"
{
#line 1453 "check_hlds.simplify.common.c"
  {
#line 1455 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1458 "check_hlds.simplify.common.c"
    {
#line 1460 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____seen_calls_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1463 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1465 "check_hlds.simplify.common.c"
  }
#line 1467 "check_hlds.simplify.common.c"
}

#line 1470 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
#line 1473 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1475 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1477 "check_hlds.simplify.common.c"
{
#line 1479 "check_hlds.simplify.common.c"
  {
#line 1481 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1484 "check_hlds.simplify.common.c"
    {
#line 1486 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____struct_map_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1489 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1491 "check_hlds.simplify.common.c"
  }
#line 1493 "check_hlds.simplify.common.c"
}

#line 1496 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
#line 1499 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1501 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1503 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1505 "check_hlds.simplify.common.c"
{
#line 1507 "check_hlds.simplify.common.c"
  {
#line 1509 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1512 "check_hlds.simplify.common.c"
    {
#line 1514 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____struct_map_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1517 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1519 "check_hlds.simplify.common.c"
  }
#line 1521 "check_hlds.simplify.common.c"
}

#line 1524 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
#line 1527 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1529 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1531 "check_hlds.simplify.common.c"
{
#line 1533 "check_hlds.simplify.common.c"
  {
#line 1535 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1538 "check_hlds.simplify.common.c"
    {
#line 1540 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____structure_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1543 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1545 "check_hlds.simplify.common.c"
  }
#line 1547 "check_hlds.simplify.common.c"
}

#line 1550 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
#line 1553 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1555 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1557 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1559 "check_hlds.simplify.common.c"
{
#line 1561 "check_hlds.simplify.common.c"
  {
#line 1563 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1566 "check_hlds.simplify.common.c"
    {
#line 1568 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____structure_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1571 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1573 "check_hlds.simplify.common.c"
  }
#line 1575 "check_hlds.simplify.common.c"
}

#line 1578 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
#line 1581 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1583 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1585 "check_hlds.simplify.common.c"
{
#line 1587 "check_hlds.simplify.common.c"
  {
#line 1589 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1592 "check_hlds.simplify.common.c"
    {
#line 1594 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____structures_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1597 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1599 "check_hlds.simplify.common.c"
  }
#line 1601 "check_hlds.simplify.common.c"
}

#line 1604 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
#line 1607 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1609 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1611 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1613 "check_hlds.simplify.common.c"
{
#line 1615 "check_hlds.simplify.common.c"
  {
#line 1617 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1620 "check_hlds.simplify.common.c"
    {
#line 1622 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____structures_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1625 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1627 "check_hlds.simplify.common.c"
  }
#line 1629 "check_hlds.simplify.common.c"
}

#line 353 "common.m"
static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__353__1_4_p_0(
#line 353 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_72,
#line 353 "common.m"
  MR_Integer * check_hlds__simplify__common__HeadVar__2_73,
#line 353 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_74,
#line 353 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__4_75)
#line 353 "common.m"
{
#line 353 "common.m"
  {
#line 353 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 353 "common.m"
    {
#line 353 "common.m"
      mercury__eqvclass__ensure_element_partition_id_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__HeadVar__1_72)), check_hlds__simplify__common__HeadVar__2_73, check_hlds__simplify__common__HeadVar__3_74, check_hlds__simplify__common__HeadVar__4_75);
    }
#line 353 "common.m"
  }
#line 353 "common.m"
}

#line 275 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0(
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
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
#line 275 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

#line 275 "common.m"
    {
#line 275 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
    }
#line 275 "common.m"
  }
#line 275 "common.m"
}

#line 275 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0(
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
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
#line 275 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

#line 275 "common.m"
    {
#line 275 "common.m"
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 275 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 275 "common.m"
  }
#line 275 "common.m"
}

#line 276 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0(
#line 276 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 276 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 276 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 276 "common.m"
{
#line 276 "common.m"
  {
#line 276 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 276 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_9 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
#line 276 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_10 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

#line 276 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_9 == check_hlds__simplify__common__CastY_10);
#line 276 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 1744 "check_hlds.simplify.common.c"
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
#line 276 "common.m"
    else
#line 276 "common.m"
      {
#line 276 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
#line 276 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8;

#line 276 "common.m"
        {
#line 276 "common.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], &check_hlds__simplify__common__V_8_8, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_6_6)));
        }
#line 1766 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_8_8 == (MR_Integer) 0);
#line 276 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 276 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 276 "common.m"
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_8_8;
#line 276 "common.m"
        else
#line 276 "common.m"
          {
#line 276 "common.m"
            {
#line 276 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
            }
#line 276 "common.m"
          }
#line 276 "common.m"
      }
#line 276 "common.m"
  }
#line 276 "common.m"
}

#line 276 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0(
#line 276 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 276 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 276 "common.m"
{
#line 276 "common.m"
  {
#line 276 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 276 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_7 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
#line 276 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_8 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

#line 276 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_7 == check_hlds__simplify__common__CastY_8);
#line 276 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 276 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 276 "common.m"
    else
#line 276 "common.m"
      {
#line 276 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_10_10;
#line 276 "common.m"
        MR_Word check_hlds__simplify__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));

#line 1831 "check_hlds.simplify.common.c"
        {
#line 1833 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__V_3_3)), ((MR_Box) (check_hlds__simplify__common__V_5_5)));
        }
#line 276 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 276 "common.m"
          {
#line 1840 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_10_10 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 1842 "check_hlds.simplify.common.c"
            {
#line 1844 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_10_10, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_6_6)));
            }
#line 276 "common.m"
          }
#line 276 "common.m"
      }
#line 276 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 276 "common.m"
  }
#line 276 "common.m"
}

#line 268 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
    }
#line 268 "common.m"
  }
#line 268 "common.m"
}

#line 268 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0(
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
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 268 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 268 "common.m"
  }
#line 268 "common.m"
}

#line 279 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0(
#line 279 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 279 "common.m"
{
#line 279 "common.m"
  {
#line 279 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 279 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
#line 279 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

#line 279 "common.m"
    {
#line 279 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
    }
#line 279 "common.m"
  }
#line 279 "common.m"
}

#line 279 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0(
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 279 "common.m"
{
#line 279 "common.m"
  {
#line 279 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 279 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
#line 279 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

#line 279 "common.m"
    {
#line 279 "common.m"
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 279 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 279 "common.m"
  }
#line 279 "common.m"
}

#line 269 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0(
#line 269 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 269 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 269 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 269 "common.m"
{
#line 269 "common.m"
  {
#line 269 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 269 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
#line 269 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

#line 269 "common.m"
    {
#line 269 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
    }
#line 269 "common.m"
  }
#line 269 "common.m"
}

#line 269 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0(
#line 269 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 269 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 269 "common.m"
{
#line 269 "common.m"
  {
#line 269 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 269 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
#line 269 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

#line 269 "common.m"
    {
#line 269 "common.m"
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 269 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 269 "common.m"
  }
#line 269 "common.m"
}

#line 236 "common.m"
void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0(
#line 236 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 236 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 236 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 236 "common.m"
{
#line 236 "common.m"
  {
#line 236 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 236 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_15 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
#line 236 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_16 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

#line 236 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_15 == check_hlds__simplify__common__CastY_16);
#line 236 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 2062 "check_hlds.simplify.common.c"
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
#line 236 "common.m"
    else
#line 236 "common.m"
      {
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 2)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 3)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_12_12;

#line 236 "common.m"
        {
#line 236 "common.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[3], &check_hlds__simplify__common__V_12_12, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
        }
#line 2092 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_12_12 == (MR_Integer) 0);
#line 236 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 236 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 236 "common.m"
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_12_12;
#line 236 "common.m"
        else
#line 236 "common.m"
          {
#line 236 "common.m"
            MR_Word check_hlds__simplify__common__V_13_13;

#line 236 "common.m"
            {
#line 236 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], &check_hlds__simplify__common__V_13_13, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
            }
#line 2112 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_13_13 == (MR_Integer) 0);
#line 236 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 236 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 236 "common.m"
              *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_13_13;
#line 236 "common.m"
            else
#line 236 "common.m"
              {
#line 236 "common.m"
                MR_Word check_hlds__simplify__common__V_14_14;

#line 236 "common.m"
                {
#line 236 "common.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], &check_hlds__simplify__common__V_14_14, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_10_10)));
                }
#line 2132 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_14_14 == (MR_Integer) 0);
#line 236 "common.m"
                check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 236 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 236 "common.m"
                  *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_14_14;
#line 236 "common.m"
                else
#line 236 "common.m"
                  {
#line 236 "common.m"
                    {
#line 236 "common.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__V_7_7)), ((MR_Box) (check_hlds__simplify__common__V_11_11)));
                    }
#line 236 "common.m"
                  }
#line 236 "common.m"
              }
#line 236 "common.m"
          }
#line 236 "common.m"
      }
#line 236 "common.m"
  }
#line 236 "common.m"
}

#line 236 "common.m"
MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0(
#line 236 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 236 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 236 "common.m"
{
#line 236 "common.m"
  {
#line 236 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 236 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_11 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
#line 236 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_12 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

#line 236 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_11 == check_hlds__simplify__common__CastY_12);
#line 236 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 236 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 236 "common.m"
    else
#line 236 "common.m"
      {
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_14_14;
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_15_15;
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_16_16;
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 236 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));

#line 2213 "check_hlds.simplify.common.c"
        {
#line 2215 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[3], ((MR_Box) (check_hlds__simplify__common__V_3_3)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
        }
#line 236 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 236 "common.m"
          {
#line 2222 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[1];
#line 2224 "check_hlds.simplify.common.c"
            {
#line 2226 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_14_14, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
            }
#line 236 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 236 "common.m"
              {
#line 2233 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_15_15 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[1];
#line 2235 "check_hlds.simplify.common.c"
                {
#line 2237 "check_hlds.simplify.common.c"
                  check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_15_15, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
                }
#line 236 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 236 "common.m"
                  {
#line 2244 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[2];
#line 2246 "check_hlds.simplify.common.c"
                    {
#line 2248 "check_hlds.simplify.common.c"
                      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_16_16, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_10_10)));
                    }
#line 236 "common.m"
                  }
#line 236 "common.m"
              }
#line 236 "common.m"
          }
#line 236 "common.m"
      }
#line 236 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 236 "common.m"
  }
#line 236 "common.m"
}

#line 281 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0(
#line 281 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 281 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 281 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 281 "common.m"
{
#line 281 "common.m"
  {
#line 281 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 281 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_12 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
#line 281 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_13 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

#line 281 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_12 == check_hlds__simplify__common__CastY_13);
#line 281 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 2290 "check_hlds.simplify.common.c"
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
#line 281 "common.m"
    else
#line 281 "common.m"
      {
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 2)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10;

#line 281 "common.m"
        {
#line 281 "common.m"
          mercury__term____Compare____context_0_0(&check_hlds__simplify__common__V_10_10, check_hlds__simplify__common__V_4_4, check_hlds__simplify__common__V_7_7);
        }
#line 2316 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_10_10 == (MR_Integer) 0);
#line 281 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 281 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 281 "common.m"
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_10_10;
#line 281 "common.m"
        else
#line 281 "common.m"
          {
#line 281 "common.m"
            MR_Word check_hlds__simplify__common__V_11_11;

#line 281 "common.m"
            {
#line 281 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], &check_hlds__simplify__common__V_11_11, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
            }
#line 2336 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_11_11 == (MR_Integer) 0);
#line 281 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 281 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 281 "common.m"
              *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_11_11;
#line 281 "common.m"
            else
#line 281 "common.m"
              {
#line 281 "common.m"
                {
#line 281 "common.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
                }
#line 281 "common.m"
              }
#line 281 "common.m"
          }
#line 281 "common.m"
      }
#line 281 "common.m"
  }
#line 281 "common.m"
}

#line 281 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0(
#line 281 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 281 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 281 "common.m"
{
#line 281 "common.m"
  {
#line 281 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 281 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_9 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
#line 281 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_10 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

#line 281 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_9 == check_hlds__simplify__common__CastY_10);
#line 281 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 281 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 281 "common.m"
    else
#line 281 "common.m"
      {
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_12_12;
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_13_13;
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 281 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));

#line 2409 "check_hlds.simplify.common.c"
        {
#line 2411 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__common__V_3_3, check_hlds__simplify__common__V_6_6);
        }
#line 281 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 281 "common.m"
          {
#line 2418 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 2420 "check_hlds.simplify.common.c"
            {
#line 2422 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
            }
#line 281 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 281 "common.m"
              {
#line 2429 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_13_13 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 2431 "check_hlds.simplify.common.c"
                {
#line 2433 "check_hlds.simplify.common.c"
                  check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_13_13, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
                }
#line 281 "common.m"
              }
#line 281 "common.m"
          }
#line 281 "common.m"
      }
#line 281 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 281 "common.m"
  }
#line 281 "common.m"
}

#line 920 "common.m"
static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
#line 920 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_5,
#line 920 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_6,
#line 920 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_17,
#line 920 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_18)
#line 920 "common.m"
{
#line 923 "common.m"
  {
#line 923 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 923 "common.m"
    MR_Word check_hlds__simplify__common__RttiVarMaps0_8;
#line 923 "common.m"
    MR_Word check_hlds__simplify__common__FromVarRttiInfo_9;
#line 923 "common.m"
    MR_Word check_hlds__simplify__common__ToVarRttiInfo_10;
#line 927 "common.m"
    MR_Word check_hlds__simplify__common__TSubst_11;

#line 924 "common.m"
    {
#line 924 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, &check_hlds__simplify__common__RttiVarMaps0_8);
    }
#line 925 "common.m"
    {
#line 925 "common.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__simplify__common__RttiVarMaps0_8, check_hlds__simplify__common__FromVar_6, &check_hlds__simplify__common__FromVarRttiInfo_9);
    }
#line 926 "common.m"
    {
#line 926 "common.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__simplify__common__RttiVarMaps0_8, check_hlds__simplify__common__ToVar_5, &check_hlds__simplify__common__ToVarRttiInfo_10);
    }
#line 973 "common.m"
#line 973 "common.m"
    switch (MR_tag((MR_Word) check_hlds__simplify__common__ToVarRttiInfo_10)) {
#line 973 "common.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 973 "common.m"
      case (MR_Integer) 0:
#line 983 "common.m"
        {
#line 983 "common.m"
          MR_Word check_hlds__simplify__common__TypeInfo_14_40;
#line 983 "common.m"
          MR_Word check_hlds__simplify__common__TypeCtorInfo_15_41;

#line 983 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__FromVarRttiInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 983 "common.m"
            {
#line 2510 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__TypeInfo_14_40 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 2512 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__TypeCtorInfo_15_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 985 "common.m"
              {
#line 985 "common.m"
                mercury__map__init_1_p_0(check_hlds__simplify__common__TypeInfo_14_40, check_hlds__simplify__common__TypeCtorInfo_15_41, &check_hlds__simplify__common__TSubst_11);
              }
#line 985 "common.m"
              check_hlds__simplify__common__succeeded = MR_TRUE;
#line 983 "common.m"
            }
#line 983 "common.m"
        }
#line 973 "common.m"
        break;
#line 973 "common.m"
      case (MR_Integer) 1:
#line 973 "common.m"
        {
#line 973 "common.m"
          MR_Word check_hlds__simplify__common__FromVarTypeInfoType_33;
#line 973 "common.m"
          MR_Word check_hlds__simplify__common__ToVarTypeInfoType_34;

#line 973 "common.m"
          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 1)));
#line 973 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 973 "common.m"
            {
#line 973 "common.m"
              check_hlds__simplify__common__FromVarTypeInfoType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__FromVarRttiInfo_9, (MR_Integer) 0)));
#line 974 "common.m"
              check_hlds__simplify__common__ToVarTypeInfoType_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__ToVarRttiInfo_10, (MR_Integer) 0)));
#line 975 "common.m"
              {
#line 975 "common.m"
                check_hlds__simplify__common__succeeded = parse_tree__prog_type__type_subsumes_3_p_0(check_hlds__simplify__common__ToVarTypeInfoType_34, check_hlds__simplify__common__FromVarTypeInfoType_33, &check_hlds__simplify__common__TSubst_11);
              }
#line 973 "common.m"
            }
#line 973 "common.m"
        }
#line 973 "common.m"
        break;
#line 973 "common.m"
      case (MR_Integer) 2:
#line 977 "common.m"
        {
#line 977 "common.m"
          MR_Word check_hlds__simplify__common__FromVarConstraint_35;
#line 977 "common.m"
          MR_Word check_hlds__simplify__common__ToVarConstraint_36;
#line 977 "common.m"
          MR_Word check_hlds__simplify__common__Name_37;
#line 977 "common.m"
          MR_Word check_hlds__simplify__common__FromArgs_38;
#line 977 "common.m"
          MR_Word check_hlds__simplify__common__ToArgs_39;
#line 977 "common.m"
          MR_Word check_hlds__simplify__common__V_42_42;

#line 977 "common.m"
          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 2)));
#line 977 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 977 "common.m"
            {
#line 977 "common.m"
              check_hlds__simplify__common__FromVarConstraint_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__FromVarRttiInfo_9, (MR_Integer) 0)));
#line 978 "common.m"
              check_hlds__simplify__common__ToVarConstraint_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__ToVarRttiInfo_10, (MR_Integer) 0)));
#line 979 "common.m"
              check_hlds__simplify__common__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__FromVarConstraint_35, (MR_Integer) 0)));
#line 979 "common.m"
              check_hlds__simplify__common__FromArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__FromVarConstraint_35, (MR_Integer) 1)));
#line 980 "common.m"
              check_hlds__simplify__common__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarConstraint_36, (MR_Integer) 0)));
#line 980 "common.m"
              check_hlds__simplify__common__ToArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarConstraint_36, (MR_Integer) 1)));
#line 980 "common.m"
              {
#line 980 "common.m"
                check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_37, check_hlds__simplify__common__V_42_42);
              }
#line 977 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 981 "common.m"
                {
#line 981 "common.m"
                  check_hlds__simplify__common__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__simplify__common__ToArgs_39, check_hlds__simplify__common__FromArgs_38, &check_hlds__simplify__common__TSubst_11);
                }
#line 977 "common.m"
            }
#line 977 "common.m"
        }
#line 973 "common.m"
        break;
#line 973 "common.m"
    }
#line 927 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 928 "common.m"
      {
#line 928 "common.m"
        {
#line 928 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__simplify__common__TSubst_11);
        }
#line 928 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 928 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_Info_18 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_17;
#line 928 "common.m"
        else
#line 931 "common.m"
          {
#line 931 "common.m"
            check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__TSubst_11, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
          }
#line 928 "common.m"
      }
#line 927 "common.m"
    else
#line 944 "common.m"
#line 944 "common.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) {
#line 944 "common.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 944 "common.m"
        case (MR_Integer) 0:
#line 940 "common.m"
          {
#line 940 "common.m"
            MR_Word check_hlds__simplify__common__RttiVarMaps_12;

#line 941 "common.m"
            {
#line 941 "common.m"
              hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__RttiVarMaps0_8, &check_hlds__simplify__common__RttiVarMaps_12);
            }
#line 943 "common.m"
            {
#line 943 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__common__RttiVarMaps_12, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
            }
#line 940 "common.m"
          }
#line 944 "common.m"
          break;
#line 944 "common.m"
        case (MR_Integer) 1:
#line 944 "common.m"
        case (MR_Integer) 2:
#line 953 "common.m"
#line 953 "common.m"
          switch (MR_tag((MR_Word) check_hlds__simplify__common__ToVarRttiInfo_10)) {
#line 953 "common.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 953 "common.m"
            case (MR_Integer) 0:
#line 949 "common.m"
              {
#line 949 "common.m"
                MR_Word check_hlds__simplify__common__RttiVarMaps_25;

#line 950 "common.m"
                {
#line 950 "common.m"
                  hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__RttiVarMaps0_8, &check_hlds__simplify__common__RttiVarMaps_25);
                }
#line 952 "common.m"
                {
#line 952 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__common__RttiVarMaps_25, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
                }
#line 949 "common.m"
              }
#line 953 "common.m"
              break;
#line 953 "common.m"
            case (MR_Integer) 1:
#line 953 "common.m"
            case (MR_Integer) 2:
#line 956 "common.m"
              {
#line 960 "common.m"
                {
#line 960 "common.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.apply_induced_substitutions\'/4", (MR_String) "inconsistent info");
#line 960 "common.m"
                  return;
                }
#line 956 "common.m"
              }
#line 953 "common.m"
              break;
#line 953 "common.m"
          }
#line 944 "common.m"
          break;
#line 944 "common.m"
      }
#line 923 "common.m"
  }
#line 920 "common.m"
}

#line 894 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
#line 894 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 894 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 894 "common.m"
{
#line 897 "common.m"
  while (MR_TRUE)
#line 897 "common.m"
    {
#line 897 "common.m"
      /* tailcall optimized into a loop */
#line 897 "common.m"
      {
#line 897 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 897 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "common.m"
        else
#line 898 "common.m"
          {
#line 898 "common.m"
            MR_Word check_hlds__simplify__common__Type1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 898 "common.m"
            MR_Word check_hlds__simplify__common__Types1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 898 "common.m"
            MR_Word check_hlds__simplify__common__Type2_5;
#line 898 "common.m"
            MR_Word check_hlds__simplify__common__Types2_6;

#line 898 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 898 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 898 "common.m"
              {
#line 898 "common.m"
                check_hlds__simplify__common__Type2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 898 "common.m"
                check_hlds__simplify__common__Types2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 899 "common.m"
                {
#line 899 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(check_hlds__simplify__common__Type1_3, check_hlds__simplify__common__Type2_5);
                }
#line 898 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 900 "common.m"
                  {
#line 900 "common.m"
                    /* direct tailcall eliminated */
#line 900 "common.m"
                    {
#line 900 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Types1_4;
#line 900 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Types2_6;

#line 900 "common.m"
                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 900 "common.m"
                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 900 "common.m"
                    }
#line 900 "common.m"
                    continue;
#line 900 "common.m"
                  }
#line 898 "common.m"
              }
#line 898 "common.m"
          }
#line 897 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 897 "common.m"
      }
#line 897 "common.m"
      break;
#line 897 "common.m"
    }
#line 894 "common.m"
}

#line 870 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
#line 870 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 870 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 870 "common.m"
{
#line 872 "common.m"
  while (MR_TRUE)
#line 872 "common.m"
    {
#line 872 "common.m"
      /* tailcall optimized into a loop */
#line 872 "common.m"
      {
#line 872 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 872 "common.m"
#line 872 "common.m"
        switch (MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) {
#line 872 "common.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 872 "common.m"
          case (MR_Integer) 0:
#line 872 "common.m"
            {
#line 872 "common.m"
              MR_Word check_hlds__simplify__common__TypeInfo_43_43;
#line 872 "common.m"
              MR_Word check_hlds__simplify__common__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 872 "common.m"
              MR_Word check_hlds__simplify__common__V_35_35;
#line 872 "common.m"
              MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 872 "common.m"
              MR_Word check_hlds__simplify__common__V_5_5;

#line 872 "common.m"
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 872 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 872 "common.m"
                {
#line 872 "common.m"
                  check_hlds__simplify__common__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 872 "common.m"
                  check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 2860 "check_hlds.simplify.common.c"
                  check_hlds__simplify__common__TypeInfo_43_43 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 872 "common.m"
                  {
#line 872 "common.m"
                    check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_43_43, ((MR_Box) (check_hlds__simplify__common__TVar_3)), ((MR_Box) (check_hlds__simplify__common__V_35_35)));
                  }
#line 872 "common.m"
                }
#line 872 "common.m"
            }
#line 872 "common.m"
            break;
#line 872 "common.m"
          case (MR_Integer) 1:
#line 873 "common.m"
            {
#line 873 "common.m"
              MR_Word check_hlds__simplify__common__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 873 "common.m"
              MR_Word check_hlds__simplify__common__As_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 873 "common.m"
              MR_Word check_hlds__simplify__common__Bs_9;
#line 873 "common.m"
              MR_Word check_hlds__simplify__common__V_36_36;
#line 873 "common.m"
              MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 873 "common.m"
              MR_Word check_hlds__simplify__common__V_10_10;

#line 873 "common.m"
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 873 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 873 "common.m"
                {
#line 873 "common.m"
                  check_hlds__simplify__common__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 873 "common.m"
                  check_hlds__simplify__common__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 873 "common.m"
                  check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 873 "common.m"
                  {
#line 873 "common.m"
                    check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_6, check_hlds__simplify__common__V_36_36);
                  }
#line 873 "common.m"
                  if (check_hlds__simplify__common__succeeded)
#line 874 "common.m"
                    {
#line 874 "common.m"
                      check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_7, check_hlds__simplify__common__Bs_9);
                    }
#line 873 "common.m"
                }
#line 873 "common.m"
            }
#line 872 "common.m"
            break;
#line 872 "common.m"
          case (MR_Integer) 2:
#line 875 "common.m"
            {
#line 875 "common.m"
              MR_Word check_hlds__simplify__common__BuiltinType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 875 "common.m"
              MR_Word check_hlds__simplify__common__V_37_37;

#line 875 "common.m"
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 875 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 875 "common.m"
                {
#line 875 "common.m"
                  check_hlds__simplify__common__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 875 "common.m"
                  check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__BuiltinType_11 == check_hlds__simplify__common__V_37_37);
#line 875 "common.m"
                }
#line 875 "common.m"
            }
#line 872 "common.m"
            break;
#line 872 "common.m"
          case (MR_Integer) 3:
#line 872 "common.m"
#line 872 "common.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)))) {
#line 872 "common.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 872 "common.m"
              case (MR_Integer) 0:
#line 887 "common.m"
                {
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__As_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__Bs_22;
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__V_23_23;

#line 887 "common.m"
                  check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 887 "common.m"
                  if (check_hlds__simplify__common__succeeded)
#line 887 "common.m"
                    {
#line 887 "common.m"
                      check_hlds__simplify__common__Bs_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 887 "common.m"
                      check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 888 "common.m"
                      {
#line 888 "common.m"
                        check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_20, check_hlds__simplify__common__Bs_22);
                      }
#line 887 "common.m"
                    }
#line 887 "common.m"
                }
#line 872 "common.m"
                break;
#line 872 "common.m"
              case (MR_Integer) 1:
#line 877 "common.m"
                {
#line 877 "common.m"
                  MR_Word check_hlds__simplify__common__As_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 877 "common.m"
                  MR_Word check_hlds__simplify__common__AR_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 877 "common.m"
                  MR_Word check_hlds__simplify__common__P_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 877 "common.m"
                  MR_Word check_hlds__simplify__common__Bs_16;
#line 877 "common.m"
                  MR_Word check_hlds__simplify__common__BR_17;
#line 877 "common.m"
                  MR_Word check_hlds__simplify__common__V_38_38;

#line 877 "common.m"
                  check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 877 "common.m"
                  if (check_hlds__simplify__common__succeeded)
#line 877 "common.m"
                    {
#line 877 "common.m"
                      check_hlds__simplify__common__Bs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 877 "common.m"
                      check_hlds__simplify__common__BR_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 877 "common.m"
                      check_hlds__simplify__common__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 877 "common.m"
                      check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__P_14 == check_hlds__simplify__common__V_38_38);
#line 877 "common.m"
                      if (check_hlds__simplify__common__succeeded)
#line 877 "common.m"
                        {
#line 877 "common.m"
                          check_hlds__simplify__common__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 877 "common.m"
                          if (check_hlds__simplify__common__succeeded)
#line 877 "common.m"
                            {
#line 878 "common.m"
                              {
#line 878 "common.m"
                                check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_12, check_hlds__simplify__common__Bs_16);
                              }
#line 877 "common.m"
                              if (check_hlds__simplify__common__succeeded)
#line 883 "common.m"
                                {
#line 883 "common.m"
                                  if ((check_hlds__simplify__common__AR_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 885 "common.m"
                                    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__BR_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "common.m"
                                  else
#line 880 "common.m"
                                    {
#line 880 "common.m"
                                      MR_Word check_hlds__simplify__common__A_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AR_13, (MR_Integer) 0)));
#line 880 "common.m"
                                      MR_Word check_hlds__simplify__common__B_19;

#line 881 "common.m"
                                      check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__BR_17)) == (MR_mktag((MR_Integer) 1)));
#line 881 "common.m"
                                      if (check_hlds__simplify__common__succeeded)
#line 881 "common.m"
                                        {
#line 881 "common.m"
                                          check_hlds__simplify__common__B_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__BR_17, (MR_Integer) 0)));
#line 882 "common.m"
                                          /* direct tailcall eliminated */
#line 882 "common.m"
                                          {
#line 882 "common.m"
                                            MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__A_18;
#line 882 "common.m"
                                            MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__B_19;

#line 882 "common.m"
                                            check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 882 "common.m"
                                            check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 882 "common.m"
                                          }
#line 882 "common.m"
                                          continue;
#line 881 "common.m"
                                        }
#line 880 "common.m"
                                    }
#line 883 "common.m"
                                }
#line 877 "common.m"
                            }
#line 877 "common.m"
                        }
#line 877 "common.m"
                    }
#line 877 "common.m"
                }
#line 872 "common.m"
                break;
#line 872 "common.m"
              case (MR_Integer) 2:
#line 889 "common.m"
                {
#line 889 "common.m"
                  MR_Word check_hlds__simplify__common__TypeInfo_41_41;
#line 889 "common.m"
                  MR_Word check_hlds__simplify__common__TVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 889 "common.m"
                  MR_Word check_hlds__simplify__common__As_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 889 "common.m"
                  MR_Word check_hlds__simplify__common__Bs_27;
#line 889 "common.m"
                  MR_Word check_hlds__simplify__common__V_40_40;
#line 889 "common.m"
                  MR_Word check_hlds__simplify__common__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 889 "common.m"
                  MR_Word check_hlds__simplify__common__V_28_28;

#line 889 "common.m"
                  check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 889 "common.m"
                  if (check_hlds__simplify__common__succeeded)
#line 889 "common.m"
                    {
#line 889 "common.m"
                      check_hlds__simplify__common__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 889 "common.m"
                      check_hlds__simplify__common__Bs_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 889 "common.m"
                      check_hlds__simplify__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 3121 "check_hlds.simplify.common.c"
                      check_hlds__simplify__common__TypeInfo_41_41 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 889 "common.m"
                      {
#line 889 "common.m"
                        check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_41_41, ((MR_Box) (check_hlds__simplify__common__TVar_24)), ((MR_Box) (check_hlds__simplify__common__V_40_40)));
                      }
#line 889 "common.m"
                      if (check_hlds__simplify__common__succeeded)
#line 890 "common.m"
                        {
#line 890 "common.m"
                          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_25, check_hlds__simplify__common__Bs_27);
                        }
#line 889 "common.m"
                    }
#line 889 "common.m"
                }
#line 872 "common.m"
                break;
#line 872 "common.m"
              case (MR_Integer) 3:
#line 891 "common.m"
                {
#line 892 "common.m"
                  {
#line 892 "common.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.types_match_exactly\'/2", (MR_String) "kind annotation");
                  }
#line 891 "common.m"
                  check_hlds__simplify__common__succeeded = MR_TRUE;
#line 891 "common.m"
                }
#line 872 "common.m"
                break;
#line 872 "common.m"
            }
#line 872 "common.m"
            break;
#line 872 "common.m"
        }
#line 872 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 872 "common.m"
      }
#line 872 "common.m"
      break;
#line 872 "common.m"
    }
#line 870 "common.m"
}

#line 828 "common.m"
static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_11,
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_12,
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__UniMode_13,
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_14,
#line 828 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_15,
#line 828 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_33,
#line 828 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_34,
#line 828 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_35,
#line 828 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_36)
#line 828 "common.m"
{
#line 834 "common.m"
  {
#line 834 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_19;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__ToVarType_20;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__FromVarType_21;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__NonLocals_22;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__ToVarInst0_24;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__ToVarInst_26;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__InstMapDelta_30;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__GoalInfo0_31;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__Context_32;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__V_38_38;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__V_39_39;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__V_41_41;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__V_42_42;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__V_63_63;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__V_64_64;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv0_75;
#line 834 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv_76;
#line 841 "common.m"
    MR_Word check_hlds__simplify__common__V_23_23;
#line 841 "common.m"
    MR_Word check_hlds__simplify__common__V_25_25;
#line 547 "common.m"
    MR_Word check_hlds__simplify__common__V_78_78;
#line 547 "common.m"
    MR_Word check_hlds__simplify__common__V_79_79;
#line 547 "common.m"
    MR_Word check_hlds__simplify__common__V_80_80;
#line 549 "common.m"
    MR_Word check_hlds__simplify__common__V_82_82;
#line 549 "common.m"
    MR_Word check_hlds__simplify__common__V_83_83;
#line 549 "common.m"
    MR_Word check_hlds__simplify__common__V_84_84;
#line 549 "common.m"
    MR_Word check_hlds__simplify__common__V_81_81;

#line 835 "common.m"
    {
#line 835 "common.m"
      check_hlds__simplify__common__apply_induced_substitutions_4_p_0(check_hlds__simplify__common__ToVar_11, check_hlds__simplify__common__FromVar_12, check_hlds__simplify__common__STATE_VARIABLE_Info_0_35, check_hlds__simplify__common__STATE_VARIABLE_Info_36);
    }
#line 836 "common.m"
    {
#line 836 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(*check_hlds__simplify__common__STATE_VARIABLE_Info_36, &check_hlds__simplify__common__VarTypes_19);
    }
#line 837 "common.m"
    {
#line 837 "common.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_19, check_hlds__simplify__common__ToVar_11, &check_hlds__simplify__common__ToVarType_20);
    }
#line 838 "common.m"
    {
#line 838 "common.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_19, check_hlds__simplify__common__FromVar_12, &check_hlds__simplify__common__FromVarType_21);
    }
#line 840 "common.m"
    {
#line 840 "common.m"
      check_hlds__simplify__common__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_39_39, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 840 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "common.m"
    }
#line 840 "common.m"
    {
#line 840 "common.m"
      check_hlds__simplify__common__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_38_38, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 840 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_38_38, 1) = ((MR_Box) (check_hlds__simplify__common__V_39_39));
#line 840 "common.m"
    }
#line 840 "common.m"
    {
#line 840 "common.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__common__V_38_38, &check_hlds__simplify__common__NonLocals_22);
    }
#line 841 "common.m"
    check_hlds__simplify__common__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_13, (MR_Integer) 0)));
#line 841 "common.m"
    check_hlds__simplify__common__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_13, (MR_Integer) 1)));
#line 841 "common.m"
    check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_41_41, (MR_Integer) 0)));
#line 841 "common.m"
    check_hlds__simplify__common__ToVarInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_41_41, (MR_Integer) 1)));
#line 841 "common.m"
    check_hlds__simplify__common__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_42_42, (MR_Integer) 0)));
#line 841 "common.m"
    check_hlds__simplify__common__ToVarInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_42_42, (MR_Integer) 1)));
#line 842 "common.m"
    {
#line 842 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(check_hlds__simplify__common__ToVarType_20, check_hlds__simplify__common__FromVarType_21);
    }
#line 842 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 843 "common.m"
      {
#line 843 "common.m"
        MR_Word check_hlds__simplify__common__UnifyMode_27;
#line 843 "common.m"
        MR_Word check_hlds__simplify__common__V_43_43;
#line 843 "common.m"
        MR_Word check_hlds__simplify__common__V_44_44;
#line 843 "common.m"
        MR_Word check_hlds__simplify__common__V_48_48;
#line 843 "common.m"
        MR_Word check_hlds__simplify__common__V_49_49;

#line 843 "common.m"
        {
#line 843 "common.m"
          check_hlds__simplify__common__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst0_24));
#line 843 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_43_43, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 843 "common.m"
        }
#line 843 "common.m"
        {
#line 843 "common.m"
          check_hlds__simplify__common__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_44_44, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 843 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_44_44, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 843 "common.m"
        }
#line 843 "common.m"
        {
#line 843 "common.m"
          check_hlds__simplify__common__UnifyMode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_27, 0) = ((MR_Box) (check_hlds__simplify__common__V_43_43));
#line 843 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_27, 1) = ((MR_Box) (check_hlds__simplify__common__V_44_44));
#line 843 "common.m"
        }
#line 845 "common.m"
        {
#line 845 "common.m"
          check_hlds__simplify__common__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 845 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_48_48, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 845 "common.m"
        }
#line 846 "common.m"
        {
#line 846 "common.m"
          check_hlds__simplify__common__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "common.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__common__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 846 "common.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__common__V_49_49, 1) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 846 "common.m"
        }
#line 845 "common.m"
        {
#line 845 "common.m"
          MR_Word base;
#line 845 "common.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 845 "common.m"
          *check_hlds__simplify__common__GoalExpr_15 = base;
#line 845 "common.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 845 "common.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_48_48));
#line 845 "common.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__common__UnifyMode_27));
#line 845 "common.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_49_49));
#line 845 "common.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[10]));
#line 845 "common.m"
        }
#line 843 "common.m"
      }
#line 842 "common.m"
    else
#line 854 "common.m"
      {
#line 854 "common.m"
        MR_Word check_hlds__simplify__common__Modes_29;
#line 854 "common.m"
        MR_Word check_hlds__simplify__common__V_50_50;
#line 854 "common.m"
        MR_Word check_hlds__simplify__common__V_52_52;
#line 854 "common.m"
        MR_Word check_hlds__simplify__common__V_53_53;
#line 854 "common.m"
        MR_Word check_hlds__simplify__common__V_58_58;
#line 854 "common.m"
        MR_Word check_hlds__simplify__common__V_59_59;

#line 854 "common.m"
        {
#line 854 "common.m"
          check_hlds__simplify__common__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 854 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_50_50, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 854 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 854 "common.m"
        }
#line 854 "common.m"
        {
#line 854 "common.m"
          check_hlds__simplify__common__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 854 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_53_53, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 854 "common.m"
        }
#line 854 "common.m"
        {
#line 854 "common.m"
          check_hlds__simplify__common__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__V_53_53));
#line 854 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "common.m"
        }
#line 854 "common.m"
        {
#line 854 "common.m"
          check_hlds__simplify__common__Modes_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Modes_29, 0) = ((MR_Box) (check_hlds__simplify__common__V_50_50));
#line 854 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Modes_29, 1) = ((MR_Box) (check_hlds__simplify__common__V_52_52));
#line 854 "common.m"
        }
#line 855 "common.m"
        {
#line 855 "common.m"
          check_hlds__simplify__common__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 855 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "common.m"
        }
#line 855 "common.m"
        {
#line 855 "common.m"
          check_hlds__simplify__common__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_58_58, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 855 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_58_58, 1) = ((MR_Box) (check_hlds__simplify__common__V_59_59));
#line 855 "common.m"
        }
#line 855 "common.m"
        {
#line 855 "common.m"
          MR_Word base;
#line 855 "common.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 855 "common.m"
          *check_hlds__simplify__common__GoalExpr_15 = base;
#line 855 "common.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 855 "common.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_5[1])));
#line 855 "common.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_58_58));
#line 855 "common.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__common__Modes_29));
#line 855 "common.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "common.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 855 "common.m"
        }
#line 854 "common.m"
      }
#line 861 "common.m"
    {
#line 861 "common.m"
      check_hlds__simplify__common__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 861 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 861 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 861 "common.m"
    }
#line 861 "common.m"
    {
#line 861 "common.m"
      check_hlds__simplify__common__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__common__V_64_64));
#line 861 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "common.m"
    }
#line 861 "common.m"
    {
#line 861 "common.m"
      check_hlds__simplify__common__InstMapDelta_30 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__common__V_63_63);
    }
#line 863 "common.m"
    {
#line 863 "common.m"
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__common__NonLocals_22, check_hlds__simplify__common__InstMapDelta_30, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__common__GoalInfo0_31);
    }
#line 865 "common.m"
    {
#line 865 "common.m"
      check_hlds__simplify__common__Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__OldGoalInfo_14);
    }
#line 866 "common.m"
    {
#line 866 "common.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__simplify__common__Context_32, check_hlds__simplify__common__GoalInfo0_31, check_hlds__simplify__common__GoalInfo_16);
    }
#line 547 "common.m"
    check_hlds__simplify__common__VarEqv0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 0)));
#line 547 "common.m"
    check_hlds__simplify__common__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 1)));
#line 547 "common.m"
    check_hlds__simplify__common__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 2)));
#line 547 "common.m"
    check_hlds__simplify__common__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 3)));
#line 548 "common.m"
    {
#line 548 "common.m"
      mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__ToVar_11)), ((MR_Box) (check_hlds__simplify__common__FromVar_12)), check_hlds__simplify__common__VarEqv0_75, &check_hlds__simplify__common__VarEqv_76);
    }
#line 549 "common.m"
    check_hlds__simplify__common__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 0)));
#line 549 "common.m"
    check_hlds__simplify__common__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 1)));
#line 549 "common.m"
    check_hlds__simplify__common__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 2)));
#line 549 "common.m"
    check_hlds__simplify__common__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 3)));
#line 549 "common.m"
    {
#line 549 "common.m"
      MR_Word base;
#line 549 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 549 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Common_34 = base;
#line 549 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_76));
#line 549 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_82_82));
#line 549 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_83_83));
#line 549 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_84_84));
#line 549 "common.m"
    }
#line 834 "common.m"
  }
#line 828 "common.m"
}

#line 788 "common.m"
static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_10,
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_11,
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__OldOutputArgs_12,
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_13,
#line 788 "common.m"
  MR_Word * check_hlds__simplify__common__AssignGoals_14,
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_27,
#line 788 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_28,
#line 788 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_29,
#line 788 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_30)
#line 788 "common.m"
{
#line 795 "common.m"
  while (MR_TRUE)
#line 795 "common.m"
    {
#line 795 "common.m"
      /* tailcall optimized into a loop */
#line 795 "common.m"
      {
#line 795 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__OutputArgs_11)) == (MR_mktag((MR_Integer) 1)));
#line 795 "common.m"
        MR_Word check_hlds__simplify__common__HeadOutputArg_17;
#line 795 "common.m"
        MR_Word check_hlds__simplify__common__TailOutputArgs_18;
#line 795 "common.m"
        MR_Word check_hlds__simplify__common__HeadOldOutputArg_19;
#line 795 "common.m"
        MR_Word check_hlds__simplify__common__TailOldOutputArgs_20;
#line 795 "common.m"
        MR_Word check_hlds__simplify__common__HeadUniMode_21;
#line 795 "common.m"
        MR_Word check_hlds__simplify__common__TailUniModes_22;

#line 796 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 796 "common.m"
          {
#line 796 "common.m"
            check_hlds__simplify__common__HeadOutputArg_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OutputArgs_11, (MR_Integer) 0)));
#line 796 "common.m"
            check_hlds__simplify__common__TailOutputArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OutputArgs_11, (MR_Integer) 1)));
#line 797 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__OldOutputArgs_12)) == (MR_mktag((MR_Integer) 1)));
#line 797 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 797 "common.m"
              {
#line 797 "common.m"
                check_hlds__simplify__common__HeadOldOutputArg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OldOutputArgs_12, (MR_Integer) 0)));
#line 797 "common.m"
                check_hlds__simplify__common__TailOldOutputArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OldOutputArgs_12, (MR_Integer) 1)));
#line 798 "common.m"
                check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__UniModes_13)) == (MR_mktag((MR_Integer) 1)));
#line 798 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 798 "common.m"
                  {
#line 798 "common.m"
                    check_hlds__simplify__common__HeadUniMode_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__UniModes_13, (MR_Integer) 0)));
#line 798 "common.m"
                    check_hlds__simplify__common__TailUniModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__UniModes_13, (MR_Integer) 1)));
#line 798 "common.m"
                  }
#line 797 "common.m"
              }
#line 796 "common.m"
          }
#line 795 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 800 "common.m"
          {
#line 800 "common.m"
            {
#line 800 "common.m"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__HeadOutputArg_17)), ((MR_Box) (check_hlds__simplify__common__HeadOldOutputArg_19)));
            }
#line 800 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 803 "common.m"
              {
#line 803 "common.m"
                /* direct tailcall eliminated */
#line 803 "common.m"
                {
#line 803 "common.m"
                  MR_Word check_hlds__simplify__common__OutputArgs__tmp_copy_11 = check_hlds__simplify__common__TailOutputArgs_18;
#line 803 "common.m"
                  MR_Word check_hlds__simplify__common__OldOutputArgs__tmp_copy_12 = check_hlds__simplify__common__TailOldOutputArgs_20;
#line 803 "common.m"
                  MR_Word check_hlds__simplify__common__UniModes__tmp_copy_13 = check_hlds__simplify__common__TailUniModes_22;

#line 803 "common.m"
                  check_hlds__simplify__common__UniModes_13 = check_hlds__simplify__common__UniModes__tmp_copy_13;
#line 803 "common.m"
                  check_hlds__simplify__common__OldOutputArgs_12 = check_hlds__simplify__common__OldOutputArgs__tmp_copy_12;
#line 803 "common.m"
                  check_hlds__simplify__common__OutputArgs_11 = check_hlds__simplify__common__OutputArgs__tmp_copy_11;
#line 803 "common.m"
                }
#line 803 "common.m"
                continue;
#line 803 "common.m"
              }
#line 800 "common.m"
            else
#line 809 "common.m"
              {
#line 809 "common.m"
                MR_Word check_hlds__simplify__common__HeadAssignGoalExpr_23;
#line 809 "common.m"
                MR_Word check_hlds__simplify__common__HeadAssignGoalInfo_24;
#line 809 "common.m"
                MR_Word check_hlds__simplify__common__HeadAssignGoal_25;
#line 809 "common.m"
                MR_Word check_hlds__simplify__common__TailAssignGoals_26;
#line 809 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_33_33;
#line 809 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_34_34;

#line 807 "common.m"
                {
#line 807 "common.m"
                  check_hlds__simplify__common__generate_assign_10_p_0(check_hlds__simplify__common__HeadOutputArg_17, check_hlds__simplify__common__HeadOldOutputArg_19, check_hlds__simplify__common__HeadUniMode_21, check_hlds__simplify__common__OldGoalInfo_10, &check_hlds__simplify__common__HeadAssignGoalExpr_23, &check_hlds__simplify__common__HeadAssignGoalInfo_24, check_hlds__simplify__common__STATE_VARIABLE_Common_0_27, &check_hlds__simplify__common__STATE_VARIABLE_Common_33_33, check_hlds__simplify__common__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__common__STATE_VARIABLE_Info_34_34);
                }
#line 810 "common.m"
                {
#line 810 "common.m"
                  check_hlds__simplify__common__HeadAssignGoal_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 810 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadAssignGoal_25, 0) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoalExpr_23));
#line 810 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadAssignGoal_25, 1) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoalInfo_24));
#line 810 "common.m"
                }
#line 811 "common.m"
                {
#line 811 "common.m"
                  check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__OldGoalInfo_10, check_hlds__simplify__common__TailOutputArgs_18, check_hlds__simplify__common__TailOldOutputArgs_20, check_hlds__simplify__common__TailUniModes_22, &check_hlds__simplify__common__TailAssignGoals_26, check_hlds__simplify__common__STATE_VARIABLE_Common_33_33, check_hlds__simplify__common__STATE_VARIABLE_Common_28, check_hlds__simplify__common__STATE_VARIABLE_Info_34_34, check_hlds__simplify__common__STATE_VARIABLE_Info_30);
                }
#line 814 "common.m"
                {
#line 814 "common.m"
                  MR_Word base;
#line 814 "common.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "common.m"
                  *check_hlds__simplify__common__AssignGoals_14 = base;
#line 814 "common.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoal_25));
#line 814 "common.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__TailAssignGoals_26));
#line 814 "common.m"
                }
#line 809 "common.m"
              }
#line 800 "common.m"
          }
#line 795 "common.m"
        else
#line 816 "common.m"
          {
#line 817 "common.m"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__OutputArgs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 817 "common.m"
              {
#line 818 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__OldOutputArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 819 "common.m"
                  check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__UniModes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "common.m"
              }
#line 816 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 821 "common.m"
              *check_hlds__simplify__common__AssignGoals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 816 "common.m"
            else
#line 823 "common.m"
              {
#line 823 "common.m"
                {
#line 823 "common.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.create_output_unifications\'/9", (MR_String) "mode mismatch");
#line 823 "common.m"
                  return;
                }
#line 823 "common.m"
              }
#line 816 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_30 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_29;
#line 816 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Common_28 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_27;
#line 816 "common.m"
          }
#line 795 "common.m"
      }
#line 795 "common.m"
      break;
#line 795 "common.m"
    }
#line 788 "common.m"
}

#line 754 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
#line 754 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 754 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 754 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 754 "common.m"
{
#line 757 "common.m"
  while (MR_TRUE)
#line 757 "common.m"
    {
#line 757 "common.m"
      /* tailcall optimized into a loop */
#line 757 "common.m"
      {
#line 757 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 757 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 757 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 757 "common.m"
        else
#line 758 "common.m"
          {
#line 758 "common.m"
            MR_Word check_hlds__simplify__common__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 758 "common.m"
            MR_Word check_hlds__simplify__common__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 758 "common.m"
            MR_Word check_hlds__simplify__common__Y_7;
#line 758 "common.m"
            MR_Word check_hlds__simplify__common__Ys_8;

#line 758 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 758 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 758 "common.m"
              {
#line 758 "common.m"
                check_hlds__simplify__common__Y_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 758 "common.m"
                check_hlds__simplify__common__Ys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 774 "common.m"
                {
#line 774 "common.m"
                  {
#line 774 "common.m"
                    check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__X_5)), ((MR_Box) (check_hlds__simplify__common__Y_7)));
                  }
#line 774 "common.m"
                }
#line 774 "common.m"
                if (!(check_hlds__simplify__common__succeeded))
#line 776 "common.m"
                  {
#line 776 "common.m"
                    MR_Word check_hlds__simplify__common__TypeInfo_8_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 776 "common.m"
                    MR_Integer check_hlds__simplify__common__Id_13;
#line 776 "common.m"
                    MR_Integer check_hlds__simplify__common__V_15_15;

#line 776 "common.m"
                    {
#line 776 "common.m"
                      check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__X_5)), &check_hlds__simplify__common__Id_13);
                    }
#line 776 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 776 "common.m"
                      {
#line 777 "common.m"
                        {
#line 777 "common.m"
                          check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__Y_7)), &check_hlds__simplify__common__V_15_15);
                        }
#line 776 "common.m"
                        if (check_hlds__simplify__common__succeeded)
#line 777 "common.m"
                          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_13 == check_hlds__simplify__common__V_15_15);
#line 776 "common.m"
                      }
#line 776 "common.m"
                  }
#line 758 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 760 "common.m"
                  {
#line 760 "common.m"
                    /* direct tailcall eliminated */
#line 760 "common.m"
                    {
#line 760 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Xs_6;
#line 760 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Ys_8;

#line 760 "common.m"
                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 760 "common.m"
                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 760 "common.m"
                    }
#line 760 "common.m"
                    continue;
#line 760 "common.m"
                  }
#line 758 "common.m"
              }
#line 758 "common.m"
          }
#line 757 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 757 "common.m"
      }
#line 757 "common.m"
      break;
#line 757 "common.m"
    }
#line 754 "common.m"
}

#line 736 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
#line 736 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 736 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_8,
#line 736 "common.m"
  MR_Word check_hlds__simplify__common__Eqv_9,
#line 736 "common.m"
  MR_Word * check_hlds__simplify__common__OutputArgs_10,
#line 736 "common.m"
  MR_Word * check_hlds__simplify__common__PrevContext_11)
#line 736 "common.m"
{
#line 741 "common.m"
  {
#line 741 "common.m"
    MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 741 "common.m"
    MR_Word check_hlds__simplify__common__SeenCall_6;
#line 741 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls_7;
#line 741 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs1_12;
#line 741 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs1_13;

#line 740 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 740 "common.m"
      {
#line 740 "common.m"
        check_hlds__simplify__common__SeenCall_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 740 "common.m"
        check_hlds__simplify__common__SeenCalls_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 742 "common.m"
        *check_hlds__simplify__common__PrevContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 0)));
#line 742 "common.m"
        check_hlds__simplify__common__InputArgs1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 1)));
#line 742 "common.m"
        check_hlds__simplify__common__OutputArgs1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 2)));
#line 743 "common.m"
        {
#line 743 "common.m"
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(check_hlds__simplify__common__InputArgs_8, check_hlds__simplify__common__InputArgs1_12, check_hlds__simplify__common__Eqv_9);
        }
#line 743 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 744 "common.m"
          {
#line 744 "common.m"
            *check_hlds__simplify__common__OutputArgs_10 = check_hlds__simplify__common__OutputArgs1_13;
#line 744 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 744 "common.m"
          }
#line 743 "common.m"
        else
#line 746 "common.m"
          {
#line 746 "common.m"
            MR_Word check_hlds__simplify__common__V_14_14;

#line 746 "common.m"
            {
#line 746 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(check_hlds__simplify__common__SeenCalls_7, check_hlds__simplify__common__InputArgs_8, check_hlds__simplify__common__Eqv_9, check_hlds__simplify__common__OutputArgs_10, &check_hlds__simplify__common__V_14_14);
            }
#line 746 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 746 "common.m"
              {
#line 746 "common.m"
                check_hlds__simplify__common__succeeded = mercury__term____Unify____context_0_0(*check_hlds__simplify__common__PrevContext_11, check_hlds__simplify__common__V_14_14);
              }
#line 746 "common.m"
          }
#line 740 "common.m"
      }
#line 741 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 741 "common.m"
  }
#line 736 "common.m"
}

#line 694 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
#line 694 "common.m"
  MR_Word check_hlds__simplify__common__VarTypes_1,
#line 694 "common.m"
  MR_Word check_hlds__simplify__common__ModuleInfo_2,
#line 694 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3,
#line 694 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__4_4,
#line 694 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__5_5,
#line 694 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__6_6,
#line 694 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__7_7)
#line 694 "common.m"
{
#line 698 "common.m"
  {
#line 698 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 698 "common.m"
    if ((check_hlds__simplify__common__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "common.m"
      {
#line 698 "common.m"
        if ((check_hlds__simplify__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "common.m"
          {
#line 698 "common.m"
            *check_hlds__simplify__common__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 698 "common.m"
            *check_hlds__simplify__common__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 698 "common.m"
            *check_hlds__simplify__common__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 698 "common.m"
          }
#line 698 "common.m"
        else
#line 699 "common.m"
          {
#line 700 "common.m"
            {
#line 700 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (1)");
            }
#line 699 "common.m"
          }
#line 698 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 698 "common.m"
      }
#line 698 "common.m"
    else
#line 698 "common.m"
      {
#line 698 "common.m"
        MR_Word check_hlds__simplify__common__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 698 "common.m"
        MR_Word check_hlds__simplify__common__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));

#line 698 "common.m"
        if ((check_hlds__simplify__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "common.m"
          {
#line 702 "common.m"
            {
#line 702 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (2)");
            }
#line 701 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 701 "common.m"
          }
#line 698 "common.m"
        else
#line 704 "common.m"
          {
#line 704 "common.m"
            MR_Word check_hlds__simplify__common__Arg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__4_4, (MR_Integer) 0)));
#line 704 "common.m"
            MR_Word check_hlds__simplify__common__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__4_4, (MR_Integer) 1)));
#line 704 "common.m"
            MR_Word check_hlds__simplify__common__InputArgs1_39;
#line 704 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgs1_40;
#line 704 "common.m"
            MR_Word check_hlds__simplify__common__OutputModes1_41;
#line 704 "common.m"
            MR_Word check_hlds__simplify__common__InitialInst_42;
#line 704 "common.m"
            MR_Word check_hlds__simplify__common__FinalInst_43;
#line 704 "common.m"
            MR_Word check_hlds__simplify__common__Type_44;

#line 705 "common.m"
            {
#line 705 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_1, check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__V_46_46, check_hlds__simplify__common__Args_35, &check_hlds__simplify__common__InputArgs1_39, &check_hlds__simplify__common__OutputArgs1_40, &check_hlds__simplify__common__OutputModes1_41);
            }
#line 704 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 704 "common.m"
              {
#line 707 "common.m"
                {
#line 707 "common.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__V_47_47, &check_hlds__simplify__common__InitialInst_42, &check_hlds__simplify__common__FinalInst_43);
                }
#line 708 "common.m"
                {
#line 708 "common.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_1, check_hlds__simplify__common__Arg_34, &check_hlds__simplify__common__Type_44);
                }
#line 709 "common.m"
                {
#line 709 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__simplify__common__InitialInst_42, check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__Type_44, check_hlds__simplify__common__ModuleInfo_2);
                }
#line 709 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 710 "common.m"
                  {
#line 710 "common.m"
                    {
#line 710 "common.m"
                      MR_Word base;
#line 710 "common.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "common.m"
                      *check_hlds__simplify__common__HeadVar__5_5 = base;
#line 710 "common.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Arg_34));
#line 710 "common.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs1_39));
#line 710 "common.m"
                    }
#line 711 "common.m"
                    *check_hlds__simplify__common__HeadVar__6_6 = check_hlds__simplify__common__OutputArgs1_40;
#line 712 "common.m"
                    *check_hlds__simplify__common__HeadVar__7_7 = check_hlds__simplify__common__OutputModes1_41;
#line 710 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 710 "common.m"
                  }
#line 709 "common.m"
                else
#line 716 "common.m"
                  {
#line 716 "common.m"
                    {
#line 716 "common.m"
                      check_hlds__simplify__common__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__FinalInst_43);
                    }
#line 716 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 716 "common.m"
                      {
#line 722 "common.m"
                        {
#line 722 "common.m"
                          check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__Type_44, check_hlds__simplify__common__ModuleInfo_2);
                        }
#line 716 "common.m"
                        if (check_hlds__simplify__common__succeeded)
#line 716 "common.m"
                          {
#line 727 "common.m"
                            {
#line 727 "common.m"
                              check_hlds__simplify__common__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__InitialInst_42);
                            }
#line 716 "common.m"
                            if (check_hlds__simplify__common__succeeded)
#line 716 "common.m"
                              {
#line 729 "common.m"
                                *check_hlds__simplify__common__HeadVar__5_5 = check_hlds__simplify__common__InputArgs1_39;
#line 730 "common.m"
                                {
#line 730 "common.m"
                                  MR_Word base;
#line 730 "common.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "common.m"
                                  *check_hlds__simplify__common__HeadVar__6_6 = base;
#line 730 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Arg_34));
#line 730 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__OutputArgs1_40));
#line 730 "common.m"
                                }
#line 731 "common.m"
                                {
#line 731 "common.m"
                                  MR_Word base;
#line 731 "common.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "common.m"
                                  *check_hlds__simplify__common__HeadVar__7_7 = base;
#line 731 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_47_47));
#line 731 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__OutputModes1_41));
#line 731 "common.m"
                                }
#line 731 "common.m"
                                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 716 "common.m"
                              }
#line 716 "common.m"
                          }
#line 716 "common.m"
                      }
#line 716 "common.m"
                  }
#line 704 "common.m"
              }
#line 704 "common.m"
          }
#line 698 "common.m"
      }
#line 698 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 698 "common.m"
  }
#line 694 "common.m"
}

#line 600 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__SeenCall_12,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_13,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_14,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__Modes_15,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 600 "common.m"
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__Common0_19,
#line 600 "common.m"
  MR_Word * check_hlds__simplify__common__Common_20,
#line 600 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 600 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 600 "common.m"
{
#line 607 "common.m"
  {
#line 607 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 607 "common.m"
    MR_Word check_hlds__simplify__common__Eqv0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 607 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 608 "common.m"
    MR_Word check_hlds__simplify__common__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 608 "common.m"
    MR_Word check_hlds__simplify__common__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 610 "common.m"
    MR_Word check_hlds__simplify__common__SeenCallsList0_24;
#line 610 "common.m"
    MR_Box check_hlds__simplify__common__conv0_SeenCallsList0_24;

#line 610 "common.m"
    {
#line 610 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], check_hlds__simplify__common__SeenCalls0_23, ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), &check_hlds__simplify__common__conv0_SeenCallsList0_24);
    }
#line 610 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 610 "common.m"
      {
#line 610 "common.m"
        check_hlds__simplify__common__SeenCallsList0_24 = ((MR_Word) check_hlds__simplify__common__conv0_SeenCallsList0_24);
#line 610 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 610 "common.m"
      }
#line 610 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 611 "common.m"
      {
#line 611 "common.m"
        MR_Word check_hlds__simplify__common__OutputArgs2_25;
#line 611 "common.m"
        MR_Word check_hlds__simplify__common__PrevContext_26;

#line 612 "common.m"
        {
#line 612 "common.m"
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(check_hlds__simplify__common__SeenCallsList0_24, check_hlds__simplify__common__InputArgs_13, check_hlds__simplify__common__Eqv0_22, &check_hlds__simplify__common__OutputArgs2_25, &check_hlds__simplify__common__PrevContext_26);
        }
#line 611 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 615 "common.m"
          {
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__ModuleInfo_27;
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__UniModes_28;
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__AssignGoals_29;
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__AssignsGoalExpr_32;
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__VarTypes_33;
#line 615 "common.m"
            MR_Integer check_hlds__simplify__common__Cost_44;
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__Detism0_45;
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_51_51;
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_97_97;
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__V_98_98;
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_99_99;
#line 615 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_100_100;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__OnlyGoalExpr_30;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__V_52_52;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__V_53_53;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common___OnlyGoalInfo_31;
#line 627 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgTypes1_34;
#line 627 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgTypes2_35;

#line 615 "common.m"
            {
#line 615 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_27);
            }
#line 616 "common.m"
            {
#line 616 "common.m"
              check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__Modes_15, check_hlds__simplify__common__Modes_15, &check_hlds__simplify__common__UniModes_28);
            }
#line 617 "common.m"
            {
#line 617 "common.m"
              check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__OutputArgs_14, check_hlds__simplify__common__OutputArgs2_25, check_hlds__simplify__common__UniModes_28, &check_hlds__simplify__common__AssignGoals_29, check_hlds__simplify__common__Common0_19, check_hlds__simplify__common__Common_20, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_51_51);
            }
#line 619 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__AssignGoals_29)) == (MR_mktag((MR_Integer) 1)));
#line 619 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 619 "common.m"
              {
#line 619 "common.m"
                check_hlds__simplify__common__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AssignGoals_29, (MR_Integer) 0)));
#line 619 "common.m"
                check_hlds__simplify__common__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AssignGoals_29, (MR_Integer) 1)));
#line 619 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 619 "common.m"
                  {
#line 619 "common.m"
                    check_hlds__simplify__common__OnlyGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, (MR_Integer) 0)));
#line 619 "common.m"
                    check_hlds__simplify__common___OnlyGoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, (MR_Integer) 1)));
#line 619 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 619 "common.m"
                  }
#line 619 "common.m"
              }
#line 619 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 620 "common.m"
              check_hlds__simplify__common__AssignsGoalExpr_32 = check_hlds__simplify__common__OnlyGoalExpr_30;
#line 619 "common.m"
            else
#line 622 "common.m"
              {
#line 622 "common.m"
                {
#line 622 "common.m"
                  check_hlds__simplify__common__AssignsGoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 622 "common.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 622 "common.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 622 "common.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__common__AssignGoals_29));
#line 622 "common.m"
                }
#line 622 "common.m"
              }
#line 624 "common.m"
            {
#line 624 "common.m"
              MR_Word base;
#line 624 "common.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 624 "common.m"
              *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = base;
#line 624 "common.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__AssignsGoalExpr_32));
#line 624 "common.m"
            }
#line 625 "common.m"
            {
#line 625 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_51_51, &check_hlds__simplify__common__VarTypes_33);
            }
#line 627 "common.m"
            {
#line 627 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_51_51);
            }
#line 627 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 627 "common.m"
              {
#line 631 "common.m"
                {
#line 631 "common.m"
                  hlds__vartypes__lookup_var_types_3_p_0(check_hlds__simplify__common__VarTypes_33, check_hlds__simplify__common__OutputArgs_14, &check_hlds__simplify__common__OutputArgTypes1_34);
                }
#line 632 "common.m"
                {
#line 632 "common.m"
                  hlds__vartypes__lookup_var_types_3_p_0(check_hlds__simplify__common__VarTypes_33, check_hlds__simplify__common__OutputArgs2_25, &check_hlds__simplify__common__OutputArgTypes2_35);
                }
#line 633 "common.m"
                {
#line 633 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__OutputArgTypes1_34, check_hlds__simplify__common__OutputArgTypes2_35);
                }
#line 627 "common.m"
              }
#line 626 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 635 "common.m"
              {
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__TypeCtorInfo_125_125;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__Context_36;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__CallPieces_37;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__CurPieces_38;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__PrevPieces_39;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__Msg_41;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__PrevMsg_42;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__Spec_43;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_55_55;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_58_58;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_62_62;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_73_73;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_74_74;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_77_77;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_78_78;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_81_81;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_84_84;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_85_85;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_88_88;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_89_89;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_94_94;
#line 635 "common.m"
                MR_Word check_hlds__simplify__common__V_95_95;

#line 635 "common.m"
                {
#line 635 "common.m"
                  check_hlds__simplify__common__Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
                }
#line 636 "common.m"
                {
#line 636 "common.m"
                  check_hlds__simplify__common__CallPieces_37 = check_hlds__det_report__det_report_seen_call_id_2_f_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__SeenCall_12);
                }
#line 4535 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 637 "common.m"
                {
#line 637 "common.m"
                  check_hlds__simplify__common__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[6])));
#line 637 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_55_55, 1) = ((MR_Box) (check_hlds__simplify__common__CallPieces_37));
#line 637 "common.m"
                }
#line 638 "common.m"
                check_hlds__simplify__common__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_1[8]);
#line 638 "common.m"
                {
#line 638 "common.m"
                  check_hlds__simplify__common__CurPieces_38 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__common__TypeCtorInfo_125_125, check_hlds__simplify__common__V_55_55, check_hlds__simplify__common__V_58_58);
                }
#line 639 "common.m"
                {
#line 639 "common.m"
                  check_hlds__simplify__common__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[9])));
#line 639 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_62_62, 1) = ((MR_Box) (check_hlds__simplify__common__CallPieces_37));
#line 639 "common.m"
                }
#line 640 "common.m"
                {
#line 640 "common.m"
                  check_hlds__simplify__common__PrevPieces_39 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__common__TypeCtorInfo_125_125, check_hlds__simplify__common__V_62_62, check_hlds__simplify__common__V_58_58);
                }
#line 645 "common.m"
                {
#line 645 "common.m"
                  check_hlds__simplify__common__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 645 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_78_78, 0) = ((MR_Box) (check_hlds__simplify__common__CurPieces_38));
#line 645 "common.m"
                }
#line 645 "common.m"
                {
#line 645 "common.m"
                  check_hlds__simplify__common__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__common__V_78_78));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "common.m"
                }
#line 644 "common.m"
                {
#line 644 "common.m"
                  check_hlds__simplify__common__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_74_74, 0) = ((MR_Box) (((MR_Integer) 21 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_74_74, 1) = ((MR_Box) (check_hlds__simplify__common__V_77_77));
#line 644 "common.m"
                }
#line 645 "common.m"
                {
#line 645 "common.m"
                  check_hlds__simplify__common__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_73_73, 0) = ((MR_Box) (check_hlds__simplify__common__V_74_74));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "common.m"
                }
#line 643 "common.m"
                {
#line 643 "common.m"
                  check_hlds__simplify__common__Msg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 643 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Msg_41, 0) = ((MR_Box) (check_hlds__simplify__common__Context_36));
#line 643 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Msg_41, 1) = ((MR_Box) (check_hlds__simplify__common__V_73_73));
#line 643 "common.m"
                }
#line 646 "common.m"
                {
#line 646 "common.m"
                  check_hlds__simplify__common__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_81_81, 0) = ((MR_Box) (check_hlds__simplify__common__PrevContext_26));
#line 646 "common.m"
                }
#line 648 "common.m"
                {
#line 648 "common.m"
                  check_hlds__simplify__common__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 648 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_89_89, 0) = ((MR_Box) (check_hlds__simplify__common__PrevPieces_39));
#line 648 "common.m"
                }
#line 648 "common.m"
                {
#line 648 "common.m"
                  check_hlds__simplify__common__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_88_88, 0) = ((MR_Box) (check_hlds__simplify__common__V_89_89));
#line 648 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "common.m"
                }
#line 647 "common.m"
                {
#line 647 "common.m"
                  check_hlds__simplify__common__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_85_85, 0) = ((MR_Box) (((MR_Integer) 21 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 647 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_85_85, 1) = ((MR_Box) (check_hlds__simplify__common__V_88_88));
#line 647 "common.m"
                }
#line 648 "common.m"
                {
#line 648 "common.m"
                  check_hlds__simplify__common__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_84_84, 0) = ((MR_Box) (check_hlds__simplify__common__V_85_85));
#line 648 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "common.m"
                }
#line 646 "common.m"
                {
#line 646 "common.m"
                  check_hlds__simplify__common__PrevMsg_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 0) = ((MR_Box) (check_hlds__simplify__common__V_81_81));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 3) = ((MR_Box) (check_hlds__simplify__common__V_84_84));
#line 646 "common.m"
                }
#line 650 "common.m"
                {
#line 650 "common.m"
                  check_hlds__simplify__common__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_95_95, 0) = ((MR_Box) (check_hlds__simplify__common__PrevMsg_42));
#line 650 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 650 "common.m"
                }
#line 650 "common.m"
                {
#line 650 "common.m"
                  check_hlds__simplify__common__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_94_94, 0) = ((MR_Box) (check_hlds__simplify__common__Msg_41));
#line 650 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_94_94, 1) = ((MR_Box) (check_hlds__simplify__common__V_95_95));
#line 650 "common.m"
                }
#line 649 "common.m"
                {
#line 649 "common.m"
                  check_hlds__simplify__common__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 649 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_3[0])));
#line 649 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__common_scalar_common_5[0])));
#line 649 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 2) = ((MR_Box) (check_hlds__simplify__common__V_94_94));
#line 649 "common.m"
                }
#line 651 "common.m"
                {
#line 651 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_add_error_spec_3_p_0(check_hlds__simplify__common__Spec_43, check_hlds__simplify__common__STATE_VARIABLE_Info_51_51, &check_hlds__simplify__common__STATE_VARIABLE_Info_97_97);
                }
#line 635 "common.m"
              }
#line 626 "common.m"
            else
#line 626 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Info_97_97 = check_hlds__simplify__common__STATE_VARIABLE_Info_51_51;
#line 655 "common.m"
            {
#line 655 "common.m"
              check_hlds__simplify__common__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_98_98, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_17));
#line 655 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_98_98, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo_16));
#line 655 "common.m"
            }
#line 655 "common.m"
            {
#line 655 "common.m"
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_98_98, &check_hlds__simplify__common__Cost_44);
            }
#line 656 "common.m"
            {
#line 656 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_97_97, &check_hlds__simplify__common__STATE_VARIABLE_Info_99_99);
            }
#line 657 "common.m"
            {
#line 657 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_99_99, &check_hlds__simplify__common__STATE_VARIABLE_Info_100_100);
            }
#line 658 "common.m"
            {
#line 658 "common.m"
              check_hlds__simplify__common__Detism0_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__common__GoalInfo_16);
            }
#line 661 "common.m"
#line 661 "common.m"
            switch (check_hlds__simplify__common__Detism0_45) {
#line 661 "common.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 661 "common.m"
              case (MR_Integer) 4:
#line 661 "common.m"
              case (MR_Integer) 5:
#line 661 "common.m"
              case (MR_Integer) 6:
#line 661 "common.m"
              case (MR_Integer) 7:
#line 661 "common.m"
              case (MR_Integer) 2:
#line 661 "common.m"
              case (MR_Integer) 3:
#line 661 "common.m"
              case (MR_Integer) 1:
#line 670 "common.m"
                {
#line 670 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_100_100, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
                }
#line 661 "common.m"
                break;
#line 661 "common.m"
              case (MR_Integer) 0:
#line 660 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_100_100;
#line 661 "common.m"
                break;
#line 661 "common.m"
            }
#line 615 "common.m"
          }
#line 611 "common.m"
        else
#line 673 "common.m"
          {
#line 673 "common.m"
            MR_Word check_hlds__simplify__common__ThisCall_46;
#line 673 "common.m"
            MR_Word check_hlds__simplify__common__SeenCalls_47;
#line 673 "common.m"
            MR_Word check_hlds__simplify__common__V_102_102;
#line 673 "common.m"
            MR_Word check_hlds__simplify__common__Context_105;
#line 677 "common.m"
            MR_Word check_hlds__simplify__common__V_115_115;
#line 677 "common.m"
            MR_Word check_hlds__simplify__common__V_116_116;
#line 677 "common.m"
            MR_Word check_hlds__simplify__common__V_117_117;
#line 677 "common.m"
            MR_Word check_hlds__simplify__common__V_118_118;

#line 673 "common.m"
            {
#line 673 "common.m"
              check_hlds__simplify__common__Context_105 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
            }
#line 674 "common.m"
            {
#line 674 "common.m"
              check_hlds__simplify__common__ThisCall_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 674 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 0) = ((MR_Box) (check_hlds__simplify__common__Context_105));
#line 674 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_13));
#line 674 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 2) = ((MR_Box) (check_hlds__simplify__common__OutputArgs_14));
#line 674 "common.m"
            }
#line 675 "common.m"
            {
#line 675 "common.m"
              check_hlds__simplify__common__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_102_102, 0) = ((MR_Box) (check_hlds__simplify__common__ThisCall_46));
#line 675 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_102_102, 1) = ((MR_Box) (check_hlds__simplify__common__SeenCallsList0_24));
#line 675 "common.m"
            }
#line 675 "common.m"
            {
#line 675 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), ((MR_Box) (check_hlds__simplify__common__V_102_102)), check_hlds__simplify__common__SeenCalls0_23, &check_hlds__simplify__common__SeenCalls_47);
            }
#line 677 "common.m"
            check_hlds__simplify__common__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 677 "common.m"
            check_hlds__simplify__common__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 677 "common.m"
            check_hlds__simplify__common__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 677 "common.m"
            check_hlds__simplify__common__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 677 "common.m"
            {
#line 677 "common.m"
              MR_Word base;
#line 677 "common.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 677 "common.m"
              *check_hlds__simplify__common__Common_20 = base;
#line 677 "common.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_115_115));
#line 677 "common.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_116_116));
#line 677 "common.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_117_117));
#line 677 "common.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls_47));
#line 677 "common.m"
            }
#line 678 "common.m"
            *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 673 "common.m"
          }
#line 611 "common.m"
      }
#line 610 "common.m"
    else
#line 681 "common.m"
      {
#line 681 "common.m"
        MR_Word check_hlds__simplify__common__V_103_103;
#line 681 "common.m"
        MR_Word check_hlds__simplify__common__Context_106;
#line 681 "common.m"
        MR_Word check_hlds__simplify__common__ThisCall_107;
#line 681 "common.m"
        MR_Word check_hlds__simplify__common__SeenCalls_108;
#line 684 "common.m"
        MR_Word check_hlds__simplify__common__V_119_119;
#line 684 "common.m"
        MR_Word check_hlds__simplify__common__V_120_120;
#line 684 "common.m"
        MR_Word check_hlds__simplify__common__V_121_121;
#line 684 "common.m"
        MR_Word check_hlds__simplify__common__V_122_122;

#line 681 "common.m"
        {
#line 681 "common.m"
          check_hlds__simplify__common__Context_106 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
        }
#line 682 "common.m"
        {
#line 682 "common.m"
          check_hlds__simplify__common__ThisCall_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 682 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 0) = ((MR_Box) (check_hlds__simplify__common__Context_106));
#line 682 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_13));
#line 682 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 2) = ((MR_Box) (check_hlds__simplify__common__OutputArgs_14));
#line 682 "common.m"
        }
#line 683 "common.m"
        {
#line 683 "common.m"
          check_hlds__simplify__common__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_103_103, 0) = ((MR_Box) (check_hlds__simplify__common__ThisCall_107));
#line 683 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "common.m"
        }
#line 683 "common.m"
        {
#line 683 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), ((MR_Box) (check_hlds__simplify__common__V_103_103)), check_hlds__simplify__common__SeenCalls0_23, &check_hlds__simplify__common__SeenCalls_108);
        }
#line 684 "common.m"
        check_hlds__simplify__common__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 684 "common.m"
        check_hlds__simplify__common__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 684 "common.m"
        check_hlds__simplify__common__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 684 "common.m"
        check_hlds__simplify__common__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 684 "common.m"
        {
#line 684 "common.m"
          MR_Word base;
#line 684 "common.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 684 "common.m"
          *check_hlds__simplify__common__Common_20 = base;
#line 684 "common.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_119_119));
#line 684 "common.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_120_120));
#line 684 "common.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_121_121));
#line 684 "common.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls_108));
#line 684 "common.m"
        }
#line 685 "common.m"
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 681 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 681 "common.m"
      }
#line 607 "common.m"
  }
#line 600 "common.m"
}

#line 524 "common.m"
static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
#line 524 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_6,
#line 524 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_7,
#line 524 "common.m"
  MR_Word check_hlds__simplify__common__Struct_8,
#line 524 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14,
#line 524 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_StructMap_15)
#line 524 "common.m"
{
#line 528 "common.m"
  {
#line 528 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 528 "common.m"
    MR_Word check_hlds__simplify__common__ConsIdMap0_10;
#line 528 "common.m"
    MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_10;

#line 528 "common.m"
    {
#line 528 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), &check_hlds__simplify__common__conv0_ConsIdMap0_10);
    }
#line 528 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 528 "common.m"
      {
#line 528 "common.m"
        check_hlds__simplify__common__ConsIdMap0_10 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_10);
#line 528 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 528 "common.m"
      }
#line 528 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 534 "common.m"
      {
#line 534 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_13;
#line 529 "common.m"
        MR_Word check_hlds__simplify__common__Structs0_11;
#line 529 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs0_11;

#line 529 "common.m"
        {
#line 529 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__ConsIdMap0_10, ((MR_Box) (check_hlds__simplify__common__ConsId_7)), &check_hlds__simplify__common__conv1_Structs0_11);
        }
#line 529 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 529 "common.m"
          {
#line 529 "common.m"
            check_hlds__simplify__common__Structs0_11 = ((MR_Word) check_hlds__simplify__common__conv1_Structs0_11);
#line 529 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 529 "common.m"
          }
#line 529 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 530 "common.m"
          {
#line 530 "common.m"
            MR_Word check_hlds__simplify__common__Structs_12;

#line 530 "common.m"
            {
#line 530 "common.m"
              check_hlds__simplify__common__Structs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_12, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 530 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_12, 1) = ((MR_Box) (check_hlds__simplify__common__Structs0_11));
#line 530 "common.m"
            }
#line 531 "common.m"
            {
#line 531 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__Structs_12)), check_hlds__simplify__common__ConsIdMap0_10, &check_hlds__simplify__common__ConsIdMap_13);
            }
#line 530 "common.m"
          }
#line 529 "common.m"
        else
#line 533 "common.m"
          {
#line 533 "common.m"
            MR_Word check_hlds__simplify__common__V_16_16;

#line 533 "common.m"
            {
#line 533 "common.m"
              check_hlds__simplify__common__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_16_16, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 533 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "common.m"
            }
#line 533 "common.m"
            {
#line 533 "common.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__V_16_16)), check_hlds__simplify__common__ConsIdMap0_10, &check_hlds__simplify__common__ConsIdMap_13);
            }
#line 533 "common.m"
          }
#line 535 "common.m"
        {
#line 535 "common.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_13)), check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);
        }
#line 534 "common.m"
      }
#line 528 "common.m"
    else
#line 537 "common.m"
      {
#line 537 "common.m"
        MR_Word check_hlds__simplify__common__V_19_19;
#line 537 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_22;

#line 537 "common.m"
        {
#line 537 "common.m"
          check_hlds__simplify__common__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_19_19, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 537 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "common.m"
        }
#line 537 "common.m"
        {
#line 537 "common.m"
          check_hlds__simplify__common__ConsIdMap_22 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__V_19_19)));
        }
#line 538 "common.m"
        {
#line 538 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_22)), check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);
        }
#line 537 "common.m"
      }
#line 528 "common.m"
  }
#line 524 "common.m"
}

#line 510 "common.m"
static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
#line 510 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_7,
#line 510 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_8,
#line 510 "common.m"
  MR_Word check_hlds__simplify__common__Struct_9,
#line 510 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_10,
#line 510 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_16,
#line 510 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_17)
#line 510 "common.m"
{
#line 513 "common.m"
  {
#line 513 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 513 "common.m"
    MR_Word check_hlds__simplify__common__AllStructMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 1)));
#line 513 "common.m"
    MR_Word check_hlds__simplify__common__SinceCallStructMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 2)));
#line 513 "common.m"
    MR_Word check_hlds__simplify__common__AllStructMap_14;
#line 513 "common.m"
    MR_Word check_hlds__simplify__common__SinceCallStructMap_15;
#line 513 "common.m"
    MR_Word check_hlds__simplify__common__V_30_30;
#line 513 "common.m"
    MR_Word check_hlds__simplify__common__V_31_31;
#line 513 "common.m"
    MR_Word check_hlds__simplify__common__V_34_34;
#line 514 "common.m"
    MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 0)));
#line 514 "common.m"
    MR_Word check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 3)));
#line 528 "common.m"
    MR_Word check_hlds__simplify__common__ConsIdMap0_45;
#line 528 "common.m"
    MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_45;
#line 520 "common.m"
    MR_Word check_hlds__simplify__common__V_27_27;
#line 520 "common.m"
    MR_Word check_hlds__simplify__common__V_28_28;
#line 520 "common.m"
    MR_Word check_hlds__simplify__common__V_29_29;

#line 528 "common.m"
    {
#line 528 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__AllStructMap0_12, ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), &check_hlds__simplify__common__conv0_ConsIdMap0_45);
    }
#line 528 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 528 "common.m"
      {
#line 528 "common.m"
        check_hlds__simplify__common__ConsIdMap0_45 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_45);
#line 528 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 528 "common.m"
      }
#line 528 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 534 "common.m"
      {
#line 534 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_48;
#line 529 "common.m"
        MR_Word check_hlds__simplify__common__Structs0_46;
#line 529 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs0_46;

#line 529 "common.m"
        {
#line 529 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__ConsIdMap0_45, ((MR_Box) (check_hlds__simplify__common__ConsId_8)), &check_hlds__simplify__common__conv1_Structs0_46);
        }
#line 529 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 529 "common.m"
          {
#line 529 "common.m"
            check_hlds__simplify__common__Structs0_46 = ((MR_Word) check_hlds__simplify__common__conv1_Structs0_46);
#line 529 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 529 "common.m"
          }
#line 529 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 530 "common.m"
          {
#line 530 "common.m"
            MR_Word check_hlds__simplify__common__Structs_47;

#line 530 "common.m"
            {
#line 530 "common.m"
              check_hlds__simplify__common__Structs_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_47, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 530 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_47, 1) = ((MR_Box) (check_hlds__simplify__common__Structs0_46));
#line 530 "common.m"
            }
#line 531 "common.m"
            {
#line 531 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__Structs_47)), check_hlds__simplify__common__ConsIdMap0_45, &check_hlds__simplify__common__ConsIdMap_48);
            }
#line 530 "common.m"
          }
#line 529 "common.m"
        else
#line 533 "common.m"
          {
#line 533 "common.m"
            MR_Word check_hlds__simplify__common__V_49_49;

#line 533 "common.m"
            {
#line 533 "common.m"
              check_hlds__simplify__common__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 533 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "common.m"
            }
#line 533 "common.m"
            {
#line 533 "common.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__V_49_49)), check_hlds__simplify__common__ConsIdMap0_45, &check_hlds__simplify__common__ConsIdMap_48);
            }
#line 533 "common.m"
          }
#line 535 "common.m"
        {
#line 535 "common.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_48)), check_hlds__simplify__common__AllStructMap0_12, &check_hlds__simplify__common__AllStructMap_14);
        }
#line 534 "common.m"
      }
#line 528 "common.m"
    else
#line 537 "common.m"
      {
#line 537 "common.m"
        MR_Word check_hlds__simplify__common__V_52_52;
#line 537 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_55;

#line 537 "common.m"
        {
#line 537 "common.m"
          check_hlds__simplify__common__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 537 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "common.m"
        }
#line 537 "common.m"
        {
#line 537 "common.m"
          check_hlds__simplify__common__ConsIdMap_55 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__V_52_52)));
        }
#line 538 "common.m"
        {
#line 538 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_55)), check_hlds__simplify__common__AllStructMap0_12, &check_hlds__simplify__common__AllStructMap_14);
        }
#line 537 "common.m"
      }
#line 518 "common.m"
    {
#line 518 "common.m"
      check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(check_hlds__simplify__common__TypeCtor_7, check_hlds__simplify__common__ConsId_8, check_hlds__simplify__common__Struct_9, check_hlds__simplify__common__SinceCallStructMap0_13, &check_hlds__simplify__common__SinceCallStructMap_15);
    }
#line 520 "common.m"
    check_hlds__simplify__common__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 0)));
#line 520 "common.m"
    check_hlds__simplify__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 1)));
#line 520 "common.m"
    check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 2)));
#line 520 "common.m"
    check_hlds__simplify__common__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 3)));
#line 521 "common.m"
    check_hlds__simplify__common__V_31_31 = check_hlds__simplify__common__VarEqv_10;
#line 521 "common.m"
    check_hlds__simplify__common__V_34_34 = check_hlds__simplify__common__V_30_30;
#line 522 "common.m"
    {
#line 522 "common.m"
      MR_Word base;
#line 522 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 522 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Common_17 = base;
#line 522 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_31_31));
#line 522 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__AllStructMap_14));
#line 522 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__SinceCallStructMap_15));
#line 522 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_34_34));
#line 522 "common.m"
    }
#line 513 "common.m"
  }
#line 510 "common.m"
}

#line 492 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
#line 492 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 492 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 492 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 492 "common.m"
{
#line 495 "common.m"
  while (MR_TRUE)
#line 495 "common.m"
    {
#line 495 "common.m"
      /* tailcall optimized into a loop */
#line 495 "common.m"
      {
#line 495 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 495 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "common.m"
        else
#line 496 "common.m"
          {
#line 496 "common.m"
            MR_Word check_hlds__simplify__common__TypeInfo_8_14;
#line 496 "common.m"
            MR_Integer check_hlds__simplify__common__Id_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 496 "common.m"
            MR_Word check_hlds__simplify__common__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 496 "common.m"
            MR_Word check_hlds__simplify__common__Var_7;
#line 496 "common.m"
            MR_Word check_hlds__simplify__common__Vars_8;
#line 496 "common.m"
            MR_Integer check_hlds__simplify__common__VarId_13;

#line 496 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 496 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 496 "common.m"
              {
#line 496 "common.m"
                check_hlds__simplify__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 496 "common.m"
                check_hlds__simplify__common__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 5389 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_8_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 505 "common.m"
                {
#line 505 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__Var_7)), &check_hlds__simplify__common__VarId_13);
                }
#line 496 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 496 "common.m"
                  {
#line 506 "common.m"
                    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_5 == check_hlds__simplify__common__VarId_13);
#line 496 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 498 "common.m"
                      {
#line 498 "common.m"
                        /* direct tailcall eliminated */
#line 498 "common.m"
                        {
#line 498 "common.m"
                          MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Ids_6;
#line 498 "common.m"
                          MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Vars_8;

#line 498 "common.m"
                          check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 498 "common.m"
                          check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 498 "common.m"
                        }
#line 498 "common.m"
                        continue;
#line 498 "common.m"
                      }
#line 496 "common.m"
                  }
#line 496 "common.m"
              }
#line 496 "common.m"
          }
#line 495 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 495 "common.m"
      }
#line 495 "common.m"
      break;
#line 495 "common.m"
    }
#line 492 "common.m"
}

#line 481 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
#line 481 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 481 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 481 "common.m"
  MR_Integer check_hlds__simplify__common__VarId_8,
#line 481 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9)
#line 481 "common.m"
{
#line 484 "common.m"
  while (MR_TRUE)
#line 484 "common.m"
    {
#line 484 "common.m"
      /* tailcall optimized into a loop */
#line 484 "common.m"
      {
#line 484 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 484 "common.m"
        MR_Word check_hlds__simplify__common__Struct_5;
#line 484 "common.m"
        MR_Word check_hlds__simplify__common__Structs_6;
#line 484 "common.m"
        MR_Word check_hlds__simplify__common__Var_10;
#line 485 "common.m"
        MR_Word check_hlds__simplify__common___Vars_11;
#line 504 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_8_16;
#line 504 "common.m"
        MR_Integer check_hlds__simplify__common__VarId_15;

#line 484 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 484 "common.m"
          {
#line 484 "common.m"
            check_hlds__simplify__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 484 "common.m"
            check_hlds__simplify__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 485 "common.m"
            check_hlds__simplify__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 0)));
#line 485 "common.m"
            check_hlds__simplify__common___Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 1)));
#line 5490 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_8_16 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 505 "common.m"
            {
#line 505 "common.m"
              check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_16, check_hlds__simplify__common__VarEqv_7, ((MR_Box) (check_hlds__simplify__common__Var_10)), &check_hlds__simplify__common__VarId_15);
            }
#line 504 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 506 "common.m"
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__VarId_8 == check_hlds__simplify__common__VarId_15);
#line 486 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 487 "common.m"
              {
#line 487 "common.m"
                *check_hlds__simplify__common__Match_9 = check_hlds__simplify__common__Struct_5;
#line 487 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 487 "common.m"
              }
#line 486 "common.m"
            else
#line 489 "common.m"
              {
#line 489 "common.m"
                /* direct tailcall eliminated */
#line 489 "common.m"
                {
#line 489 "common.m"
                  MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Structs_6;

#line 489 "common.m"
                  check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 489 "common.m"
                }
#line 489 "common.m"
                continue;
#line 489 "common.m"
              }
#line 484 "common.m"
          }
#line 484 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 484 "common.m"
      }
#line 484 "common.m"
      break;
#line 484 "common.m"
    }
#line 481 "common.m"
}

#line 470 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
#line 470 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 470 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 470 "common.m"
  MR_Word check_hlds__simplify__common__ArgVarIds_8,
#line 470 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9)
#line 470 "common.m"
{
#line 473 "common.m"
  while (MR_TRUE)
#line 473 "common.m"
    {
#line 473 "common.m"
      /* tailcall optimized into a loop */
#line 473 "common.m"
      {
#line 473 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 473 "common.m"
        MR_Word check_hlds__simplify__common__Struct_5;
#line 473 "common.m"
        MR_Word check_hlds__simplify__common__Structs_6;
#line 473 "common.m"
        MR_Word check_hlds__simplify__common__Vars_11;
#line 474 "common.m"
        MR_Word check_hlds__simplify__common___Var_10;

#line 473 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 473 "common.m"
          {
#line 473 "common.m"
            check_hlds__simplify__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 473 "common.m"
            check_hlds__simplify__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 474 "common.m"
            check_hlds__simplify__common___Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 0)));
#line 474 "common.m"
            check_hlds__simplify__common__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 1)));
#line 475 "common.m"
            {
#line 475 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__ids_vars_match_3_p_0(check_hlds__simplify__common__ArgVarIds_8, check_hlds__simplify__common__Vars_11, check_hlds__simplify__common__VarEqv_7);
            }
#line 475 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 476 "common.m"
              {
#line 476 "common.m"
                *check_hlds__simplify__common__Match_9 = check_hlds__simplify__common__Struct_5;
#line 476 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 476 "common.m"
              }
#line 475 "common.m"
            else
#line 478 "common.m"
              {
#line 478 "common.m"
                /* direct tailcall eliminated */
#line 478 "common.m"
                {
#line 478 "common.m"
                  MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Structs_6;

#line 478 "common.m"
                  check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 478 "common.m"
                }
#line 478 "common.m"
                continue;
#line 478 "common.m"
              }
#line 473 "common.m"
          }
#line 473 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 473 "common.m"
      }
#line 473 "common.m"
      break;
#line 473 "common.m"
    }
#line 470 "common.m"
}

#line 399 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__Var_15,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_16,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_17,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_18,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__CanFail_19,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__Mode_20,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_21,
#line 399 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_22,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_23,
#line 399 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_24,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 399 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 399 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 399 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 399 "common.m"
{
#line 407 "common.m"
  {
#line 407 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 407 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_27;
#line 414 "common.m"
    MR_Word check_hlds__simplify__common__LVarMode_28;
#line 414 "common.m"
    MR_Word check_hlds__simplify__common__Inst0_30;
#line 414 "common.m"
    MR_Word check_hlds__simplify__common__V_29_29;
#line 415 "common.m"
    MR_Word check_hlds__simplify__common__V_31_31;

#line 408 "common.m"
    {
#line 408 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_27);
    }
#line 457 "common.m"
    *check_hlds__simplify__common__GoalInfo_24 = check_hlds__simplify__common__GoalInfo0_23;
#line 414 "common.m"
    check_hlds__simplify__common__LVarMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_20, (MR_Integer) 0)));
#line 414 "common.m"
    check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_20, (MR_Integer) 1)));
#line 415 "common.m"
    {
#line 415 "common.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__LVarMode_28, &check_hlds__simplify__common__Inst0_30, &check_hlds__simplify__common__V_31_31);
    }
#line 416 "common.m"
    {
#line 416 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__Inst0_30);
    }
#line 416 "common.m"
    check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 409 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 418 "common.m"
      {
#line 418 "common.m"
        *check_hlds__simplify__common__GoalExpr_22 = check_hlds__simplify__common__GoalExpr0_21;
#line 418 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 418 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_46;
#line 418 "common.m"
      }
#line 409 "common.m"
    else
#line 420 "common.m"
      {
#line 420 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_71_71;
#line 420 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtor_32;
#line 420 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_33;
#line 420 "common.m"
        MR_Integer check_hlds__simplify__common__VarId_34;
#line 420 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv1_35;
#line 420 "common.m"
        MR_Word check_hlds__simplify__common__SinceCallStructMap0_36;
#line 420 "common.m"
        MR_Word check_hlds__simplify__common__VarTypes_79;
#line 420 "common.m"
        MR_Word check_hlds__simplify__common__Type_80;
#line 421 "common.m"
        MR_Word check_hlds__simplify__common__V_61_61;
#line 421 "common.m"
        MR_Word check_hlds__simplify__common__V_62_62;
#line 421 "common.m"
        MR_Word check_hlds__simplify__common__V_63_63;
#line 423 "common.m"
        MR_Word check_hlds__simplify__common__V_64_64;
#line 423 "common.m"
        MR_Word check_hlds__simplify__common__V_65_65;
#line 423 "common.m"
        MR_Word check_hlds__simplify__common__V_66_66;
#line 424 "common.m"
        MR_Word check_hlds__simplify__common__OldStruct_39;
#line 428 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_72_72;
#line 428 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_73_73;
#line 428 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_74_74;
#line 428 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_75_75;
#line 428 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap0_37;
#line 428 "common.m"
        MR_Word check_hlds__simplify__common__Structs_38;
#line 429 "common.m"
        MR_Word check_hlds__simplify__common__V_51_51;
#line 431 "common.m"
        MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_37;
#line 432 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs_38;

#line 462 "common.m"
        {
#line 462 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__VarTypes_79);
        }
#line 463 "common.m"
        {
#line 463 "common.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_79, check_hlds__simplify__common__Var_15, &check_hlds__simplify__common__Type_80);
        }
#line 466 "common.m"
        {
#line 466 "common.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__common__Type_80, &check_hlds__simplify__common__TypeCtor_32);
        }
#line 421 "common.m"
        check_hlds__simplify__common__VarEqv0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 421 "common.m"
        check_hlds__simplify__common__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 421 "common.m"
        check_hlds__simplify__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 421 "common.m"
        check_hlds__simplify__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 5793 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__TypeInfo_71_71 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 422 "common.m"
        {
#line 422 "common.m"
          mercury__eqvclass__ensure_element_partition_id_4_p_0(check_hlds__simplify__common__TypeInfo_71_71, ((MR_Box) (check_hlds__simplify__common__Var_15)), &check_hlds__simplify__common__VarId_34, check_hlds__simplify__common__VarEqv0_33, &check_hlds__simplify__common__VarEqv1_35);
        }
#line 423 "common.m"
        check_hlds__simplify__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 423 "common.m"
        check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 423 "common.m"
        check_hlds__simplify__common__SinceCallStructMap0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 423 "common.m"
        check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 428 "common.m"
        {
#line 428 "common.m"
          check_hlds__simplify__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__simplify__common__GoalInfo_24, (MR_Integer) 3);
        }
#line 428 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 428 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 428 "common.m"
          {
#line 429 "common.m"
            check_hlds__simplify__common__V_51_51 = (MR_Integer) 4;
#line 429 "common.m"
            {
#line 429 "common.m"
              check_hlds__simplify__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__simplify__common__GoalInfo_24, check_hlds__simplify__common__V_51_51);
            }
#line 429 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 428 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 428 "common.m"
              {
#line 5832 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 5834 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_73_73 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[0];
#line 431 "common.m"
                {
#line 431 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_72_72, check_hlds__simplify__common__TypeInfo_73_73, check_hlds__simplify__common__SinceCallStructMap0_36, ((MR_Box) (check_hlds__simplify__common__TypeCtor_32)), &check_hlds__simplify__common__conv0_ConsIdMap0_37);
                }
#line 431 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 431 "common.m"
                  {
#line 431 "common.m"
                    check_hlds__simplify__common__ConsIdMap0_37 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_37);
#line 431 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 431 "common.m"
                  }
#line 428 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 428 "common.m"
                  {
#line 5855 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 5857 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeInfo_75_75 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[1];
#line 432 "common.m"
                    {
#line 432 "common.m"
                      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_74_74, check_hlds__simplify__common__TypeInfo_75_75, check_hlds__simplify__common__ConsIdMap0_37, ((MR_Box) (check_hlds__simplify__common__ConsId_16)), &check_hlds__simplify__common__conv1_Structs_38);
                    }
#line 432 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 432 "common.m"
                      {
#line 432 "common.m"
                        check_hlds__simplify__common__Structs_38 = ((MR_Word) check_hlds__simplify__common__conv1_Structs_38);
#line 432 "common.m"
                        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 432 "common.m"
                      }
#line 428 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 433 "common.m"
                      {
#line 433 "common.m"
                        check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(check_hlds__simplify__common__Structs_38, check_hlds__simplify__common__VarEqv1_35, check_hlds__simplify__common__VarId_34, &check_hlds__simplify__common__OldStruct_39);
                      }
#line 428 "common.m"
                  }
#line 428 "common.m"
              }
#line 428 "common.m"
          }
#line 424 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 435 "common.m"
          {
#line 435 "common.m"
            MR_Word check_hlds__simplify__common__OldArgVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_39, (MR_Integer) 1)));
#line 435 "common.m"
            MR_Word check_hlds__simplify__common__VarEqv_42;
#line 435 "common.m"
            MR_Word check_hlds__simplify__common__Goals_43;
#line 435 "common.m"
            MR_Integer check_hlds__simplify__common__Cost_44;
#line 435 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_52_52;
#line 435 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_54_54;
#line 435 "common.m"
            MR_Word check_hlds__simplify__common__V_56_56;
#line 435 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_57_57;
#line 435 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 435 "common.m"
            MR_Word check_hlds__simplify__common__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_39, (MR_Integer) 0)));
#line 438 "common.m"
            MR_Word check_hlds__simplify__common__V_68_68;
#line 438 "common.m"
            MR_Word check_hlds__simplify__common__V_69_69;
#line 438 "common.m"
            MR_Word check_hlds__simplify__common__V_70_70;
#line 438 "common.m"
            MR_Word check_hlds__simplify__common__V_67_67;

#line 436 "common.m"
            {
#line 436 "common.m"
              mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(check_hlds__simplify__common__TypeInfo_71_71, check_hlds__simplify__common__ArgVars_17, check_hlds__simplify__common__OldArgVars_41, check_hlds__simplify__common__VarEqv1_35, &check_hlds__simplify__common__VarEqv_42);
            }
#line 438 "common.m"
            check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 438 "common.m"
            check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 438 "common.m"
            check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 438 "common.m"
            check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 438 "common.m"
            {
#line 438 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Common_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 438 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_42));
#line 438 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 1) = ((MR_Box) (check_hlds__simplify__common__V_68_68));
#line 438 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 2) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 438 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 3) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 438 "common.m"
            }
#line 439 "common.m"
            {
#line 439 "common.m"
              check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__GoalInfo0_23, check_hlds__simplify__common__ArgVars_17, check_hlds__simplify__common__OldArgVars_41, check_hlds__simplify__common__UniModes_18, &check_hlds__simplify__common__Goals_43, check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, check_hlds__simplify__common__STATE_VARIABLE_Common_47, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_54_54);
            }
#line 441 "common.m"
            {
#line 441 "common.m"
              MR_Word base;
#line 441 "common.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 441 "common.m"
              *check_hlds__simplify__common__GoalExpr_22 = base;
#line 441 "common.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 441 "common.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 441 "common.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__Goals_43));
#line 441 "common.m"
            }
#line 442 "common.m"
            {
#line 442 "common.m"
              check_hlds__simplify__common__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 442 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_56_56, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_21));
#line 442 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_56_56, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo0_23));
#line 442 "common.m"
            }
#line 442 "common.m"
            {
#line 442 "common.m"
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_56_56, &check_hlds__simplify__common__Cost_44);
            }
#line 443 "common.m"
            {
#line 443 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__common__STATE_VARIABLE_Info_57_57);
            }
#line 444 "common.m"
            {
#line 444 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_57_57, &check_hlds__simplify__common__STATE_VARIABLE_Info_58_58);
            }
#line 448 "common.m"
#line 448 "common.m"
            switch (check_hlds__simplify__common__CanFail_19) {
#line 448 "common.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 448 "common.m"
              case (MR_Integer) 0:
#line 447 "common.m"
                {
#line 447 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_58_58, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
                }
#line 448 "common.m"
                break;
#line 448 "common.m"
              case (MR_Integer) 1:
#line 449 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 448 "common.m"
                break;
#line 448 "common.m"
            }
#line 435 "common.m"
          }
#line 424 "common.m"
        else
#line 452 "common.m"
          {
#line 452 "common.m"
            MR_Word check_hlds__simplify__common__Struct_45;

#line 452 "common.m"
            *check_hlds__simplify__common__GoalExpr_22 = check_hlds__simplify__common__GoalExpr0_21;
#line 453 "common.m"
            {
#line 453 "common.m"
              check_hlds__simplify__common__Struct_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 453 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 0) = ((MR_Box) (check_hlds__simplify__common__Var_15));
#line 453 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 1) = ((MR_Box) (check_hlds__simplify__common__ArgVars_17));
#line 453 "common.m"
            }
#line 454 "common.m"
            {
#line 454 "common.m"
              check_hlds__simplify__common__record_cell_in_maps_6_p_0(check_hlds__simplify__common__TypeCtor_32, check_hlds__simplify__common__ConsId_16, check_hlds__simplify__common__Struct_45, check_hlds__simplify__common__VarEqv1_35, check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, check_hlds__simplify__common__STATE_VARIABLE_Common_47);
            }
#line 452 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 452 "common.m"
          }
#line 420 "common.m"
      }
#line 407 "common.m"
  }
#line 399 "common.m"
}

#line 353 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
#line 353 "common.m"
  MR_Box check_hlds__simplify__common__closure_arg,
#line 353 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 353 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_2,
#line 353 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_3,
#line 353 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_4)
#line 353 "common.m"
{
#line 353 "common.m"
  {
#line 353 "common.m"
    MR_Box check_hlds__simplify__common__closure = check_hlds__simplify__common__closure_arg;
#line 353 "common.m"
    MR_Integer check_hlds__simplify__common__conv1_HeadVar__2_73;
#line 353 "common.m"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__4_75;

#line 353 "common.m"
    {
#line 353 "common.m"
      check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__353__1_4_p_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), &check_hlds__simplify__common__conv1_HeadVar__2_73, ((MR_Word) check_hlds__simplify__common__wrapper_arg_3), &check_hlds__simplify__common__conv0_HeadVar__4_75);
    }
#line 353 "common.m"
    *check_hlds__simplify__common__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__common__conv1_HeadVar__2_73));
#line 353 "common.m"
    *check_hlds__simplify__common__wrapper_arg_4 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__4_75));
#line 353 "common.m"
  }
#line 353 "common.m"
}

#line 334 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__Var_13,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_14,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_15,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__Mode_16,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 334 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_19,
#line 334 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_20,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 334 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 334 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 334 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 334 "common.m"
{
#line 342 "common.m"
  {
#line 342 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 342 "common.m"
    MR_Word check_hlds__simplify__common__LVarMode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_16, (MR_Integer) 0)));
#line 342 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_25;
#line 342 "common.m"
    MR_Word check_hlds__simplify__common__Inst_27;
#line 343 "common.m"
    MR_Word check_hlds__simplify__common__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_16, (MR_Integer) 1)));
#line 345 "common.m"
    MR_Word check_hlds__simplify__common__V_26_26;

#line 344 "common.m"
    {
#line 344 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_25);
    }
#line 345 "common.m"
    {
#line 345 "common.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_25, check_hlds__simplify__common__LVarMode_23, &check_hlds__simplify__common__V_26_26, &check_hlds__simplify__common__Inst_27);
    }
#line 350 "common.m"
    {
#line 350 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__simplify__common__ModuleInfo_25, check_hlds__simplify__common__Inst_27);
    }
#line 350 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 351 "common.m"
      {
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_77_77;
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtor_28;
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_29;
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__ArgVarIds_30;
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv1_31;
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__AllStructMap0_32;
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__VarTypes_87;
#line 351 "common.m"
        MR_Word check_hlds__simplify__common__Type_88;
#line 352 "common.m"
        MR_Word check_hlds__simplify__common__V_62_62;
#line 352 "common.m"
        MR_Word check_hlds__simplify__common__V_63_63;
#line 352 "common.m"
        MR_Word check_hlds__simplify__common__V_64_64;
#line 353 "common.m"
        MR_Box check_hlds__simplify__common__conv2_VarEqv1_31;
#line 355 "common.m"
        MR_Word check_hlds__simplify__common__V_65_65;
#line 355 "common.m"
        MR_Word check_hlds__simplify__common__V_66_66;
#line 355 "common.m"
        MR_Word check_hlds__simplify__common__V_67_67;
#line 356 "common.m"
        MR_Word check_hlds__simplify__common__OldStruct_37;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_80_80;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_81_81;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_82_82;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_83_83;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__InstMapDelta_33;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap0_35;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__Structs_36;
#line 362 "common.m"
        MR_Word check_hlds__simplify__common__V_34_34;
#line 364 "common.m"
        MR_Box check_hlds__simplify__common__conv3_ConsIdMap0_35;
#line 365 "common.m"
        MR_Box check_hlds__simplify__common__conv4_Structs_36;

#line 462 "common.m"
        {
#line 462 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__VarTypes_87);
        }
#line 463 "common.m"
        {
#line 463 "common.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_87, check_hlds__simplify__common__Var_13, &check_hlds__simplify__common__Type_88);
        }
#line 466 "common.m"
        {
#line 466 "common.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__common__Type_88, &check_hlds__simplify__common__TypeCtor_28);
        }
#line 352 "common.m"
        check_hlds__simplify__common__VarEqv0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 352 "common.m"
        check_hlds__simplify__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 352 "common.m"
        check_hlds__simplify__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 352 "common.m"
        check_hlds__simplify__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 6229 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__TypeInfo_77_77 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 353 "common.m"
        {
#line 353 "common.m"
          mercury__list__map_foldl_5_p_0(check_hlds__simplify__common__TypeInfo_77_77, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[3], (MR_Word) &check_hlds__simplify__common_scalar_common_2[3], check_hlds__simplify__common__ArgVars_15, &check_hlds__simplify__common__ArgVarIds_30, ((MR_Box) (check_hlds__simplify__common__VarEqv0_29)), &check_hlds__simplify__common__conv2_VarEqv1_31);
        }
#line 353 "common.m"
        check_hlds__simplify__common__VarEqv1_31 = ((MR_Word) check_hlds__simplify__common__conv2_VarEqv1_31);
#line 355 "common.m"
        check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 355 "common.m"
        check_hlds__simplify__common__AllStructMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 355 "common.m"
        check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 355 "common.m"
        check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 361 "common.m"
        {
#line 361 "common.m"
          check_hlds__simplify__common__InstMapDelta_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__common__GoalInfo0_19);
        }
#line 362 "common.m"
        {
#line 362 "common.m"
          check_hlds__simplify__common__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__simplify__common__InstMapDelta_33, check_hlds__simplify__common__Var_13, &check_hlds__simplify__common__V_34_34);
        }
#line 361 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 361 "common.m"
          {
#line 6260 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeCtorInfo_80_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 6262 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_81_81 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[0];
#line 364 "common.m"
            {
#line 364 "common.m"
              check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_80_80, check_hlds__simplify__common__TypeInfo_81_81, check_hlds__simplify__common__AllStructMap0_32, ((MR_Box) (check_hlds__simplify__common__TypeCtor_28)), &check_hlds__simplify__common__conv3_ConsIdMap0_35);
            }
#line 364 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 364 "common.m"
              {
#line 364 "common.m"
                check_hlds__simplify__common__ConsIdMap0_35 = ((MR_Word) check_hlds__simplify__common__conv3_ConsIdMap0_35);
#line 364 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 364 "common.m"
              }
#line 361 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 361 "common.m"
              {
#line 6283 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 6285 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_83_83 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[1];
#line 365 "common.m"
                {
#line 365 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_82_82, check_hlds__simplify__common__TypeInfo_83_83, check_hlds__simplify__common__ConsIdMap0_35, ((MR_Box) (check_hlds__simplify__common__ConsId_14)), &check_hlds__simplify__common__conv4_Structs_36);
                }
#line 365 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 365 "common.m"
                  {
#line 365 "common.m"
                    check_hlds__simplify__common__Structs_36 = ((MR_Word) check_hlds__simplify__common__conv4_Structs_36);
#line 365 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 365 "common.m"
                  }
#line 361 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 366 "common.m"
                  {
#line 366 "common.m"
                    check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_matching_cell_construct_4_p_0(check_hlds__simplify__common__Structs_36, check_hlds__simplify__common__VarEqv1_31, check_hlds__simplify__common__ArgVarIds_30, &check_hlds__simplify__common__OldStruct_37);
                  }
#line 361 "common.m"
              }
#line 361 "common.m"
          }
#line 356 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 369 "common.m"
          {
#line 369 "common.m"
            MR_Word check_hlds__simplify__common__OldVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_37, (MR_Integer) 0)));
#line 369 "common.m"
            MR_Word check_hlds__simplify__common__VarEqv_40;
#line 369 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_51_51;
#line 369 "common.m"
            MR_Word check_hlds__simplify__common__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_37, (MR_Integer) 1)));
#line 371 "common.m"
            MR_Word check_hlds__simplify__common__V_69_69;
#line 371 "common.m"
            MR_Word check_hlds__simplify__common__V_70_70;
#line 371 "common.m"
            MR_Word check_hlds__simplify__common__V_71_71;
#line 371 "common.m"
            MR_Word check_hlds__simplify__common__V_68_68;

#line 370 "common.m"
            {
#line 370 "common.m"
              mercury__eqvclass__ensure_equivalence_4_p_0(check_hlds__simplify__common__TypeInfo_77_77, ((MR_Box) (check_hlds__simplify__common__Var_13)), ((MR_Box) (check_hlds__simplify__common__OldVar_38)), check_hlds__simplify__common__VarEqv1_31, &check_hlds__simplify__common__VarEqv_40);
            }
#line 371 "common.m"
            check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 371 "common.m"
            check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 371 "common.m"
            check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 371 "common.m"
            check_hlds__simplify__common__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 371 "common.m"
            {
#line 371 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Common_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 371 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_40));
#line 371 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 1) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 371 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 2) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 371 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 3) = ((MR_Box) (check_hlds__simplify__common__V_71_71));
#line 371 "common.m"
            }
#line 379 "common.m"
            if ((check_hlds__simplify__common__ArgVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "common.m"
              {
#line 377 "common.m"
                *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 378 "common.m"
                *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 373 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_51_51;
#line 373 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 373 "common.m"
              }
#line 379 "common.m"
            else
#line 380 "common.m"
              {
#line 380 "common.m"
                MR_Word check_hlds__simplify__common__UniMode_43;
#line 380 "common.m"
                MR_Integer check_hlds__simplify__common__Cost_44;
#line 380 "common.m"
                MR_Word check_hlds__simplify__common__V_52_52;
#line 380 "common.m"
                MR_Word check_hlds__simplify__common__V_54_54;
#line 380 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_57_57;
#line 380 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 380 "common.m"
                MR_Word check_hlds__simplify__common__V_59_59;

#line 381 "common.m"
                {
#line 381 "common.m"
                  check_hlds__simplify__common__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 381 "common.m"
                }
#line 381 "common.m"
                {
#line 381 "common.m"
                  check_hlds__simplify__common__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_54_54, 0) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 381 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_54_54, 1) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 381 "common.m"
                }
#line 381 "common.m"
                {
#line 381 "common.m"
                  check_hlds__simplify__common__UniMode_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_43, 0) = ((MR_Box) (check_hlds__simplify__common__V_52_52));
#line 381 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_43, 1) = ((MR_Box) (check_hlds__simplify__common__V_54_54));
#line 381 "common.m"
                }
#line 382 "common.m"
                {
#line 382 "common.m"
                  check_hlds__simplify__common__generate_assign_10_p_0(check_hlds__simplify__common__Var_13, check_hlds__simplify__common__OldVar_38, check_hlds__simplify__common__UniMode_43, check_hlds__simplify__common__GoalInfo0_19, check_hlds__simplify__common__GoalExpr_18, check_hlds__simplify__common__GoalInfo_20, check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, check_hlds__simplify__common__STATE_VARIABLE_Common_47, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_57_57);
                }
#line 384 "common.m"
                {
#line 384 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_57_57, &check_hlds__simplify__common__STATE_VARIABLE_Info_58_58);
                }
#line 385 "common.m"
                {
#line 385 "common.m"
                  check_hlds__simplify__common__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_17));
#line 385 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_59_59, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo0_19));
#line 385 "common.m"
                }
#line 385 "common.m"
                {
#line 385 "common.m"
                  transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_59_59, &check_hlds__simplify__common__Cost_44);
                }
#line 386 "common.m"
                {
#line 386 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_58_58, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
                }
#line 380 "common.m"
              }
#line 369 "common.m"
          }
#line 356 "common.m"
        else
#line 389 "common.m"
          {
#line 389 "common.m"
            MR_Word check_hlds__simplify__common__Struct_45;

#line 389 "common.m"
            *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 390 "common.m"
            *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 391 "common.m"
            {
#line 391 "common.m"
              check_hlds__simplify__common__Struct_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 0) = ((MR_Box) (check_hlds__simplify__common__Var_13));
#line 391 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 1) = ((MR_Box) (check_hlds__simplify__common__ArgVars_15));
#line 391 "common.m"
            }
#line 392 "common.m"
            {
#line 392 "common.m"
              check_hlds__simplify__common__record_cell_in_maps_6_p_0(check_hlds__simplify__common__TypeCtor_28, check_hlds__simplify__common__ConsId_14, check_hlds__simplify__common__Struct_45, check_hlds__simplify__common__VarEqv1_31, check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, check_hlds__simplify__common__STATE_VARIABLE_Common_47);
            }
#line 389 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 389 "common.m"
          }
#line 351 "common.m"
      }
#line 350 "common.m"
    else
#line 395 "common.m"
      {
#line 395 "common.m"
        *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 396 "common.m"
        *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 395 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 395 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_46;
#line 395 "common.m"
      }
#line 342 "common.m"
  }
#line 334 "common.m"
}

#line 156 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_info_clear_structs_2_p_0(
#line 156 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_4,
#line 156 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_5)
#line 156 "common.m"
{
#line 303 "common.m"
  {
#line 303 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 303 "common.m"
    MR_Word check_hlds__simplify__common__V_7_7;
#line 304 "common.m"
    MR_Word check_hlds__simplify__common__V_8_8;
#line 304 "common.m"
    MR_Word check_hlds__simplify__common__V_9_9;
#line 304 "common.m"
    MR_Word check_hlds__simplify__common__V_11_11;
#line 304 "common.m"
    MR_Word check_hlds__simplify__common__V_10_10;

#line 304 "common.m"
    {
#line 304 "common.m"
      check_hlds__simplify__common__V_7_7 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0]);
    }
#line 304 "common.m"
    check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 304 "common.m"
    check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 304 "common.m"
    check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 304 "common.m"
    check_hlds__simplify__common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 304 "common.m"
    {
#line 304 "common.m"
      MR_Word base;
#line 304 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 304 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Info_5 = base;
#line 304 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_8_8));
#line 304 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_9_9));
#line 304 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_7_7));
#line 304 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_11_11));
#line 304 "common.m"
    }
#line 303 "common.m"
  }
#line 156 "common.m"
}

#line 152 "common.m"
MR_Word MR_CALL 
check_hlds__simplify__common__common_info_init_0_f_0(void)
#line 152 "common.m"
{
#line 297 "common.m"
  {
#line 297 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 297 "common.m"
    MR_Word check_hlds__simplify__common__CommonInfo_2;
#line 297 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv0_3;
#line 297 "common.m"
    MR_Word check_hlds__simplify__common__StructMap0_4;
#line 297 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls0_5;

#line 298 "common.m"
    {
#line 298 "common.m"
      mercury__eqvclass__init_1_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], &check_hlds__simplify__common__VarEqv0_3);
    }
#line 299 "common.m"
    {
#line 299 "common.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], &check_hlds__simplify__common__StructMap0_4);
    }
#line 300 "common.m"
    {
#line 300 "common.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], &check_hlds__simplify__common__SeenCalls0_5);
    }
#line 301 "common.m"
    {
#line 301 "common.m"
      check_hlds__simplify__common__CommonInfo_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 301 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv0_3));
#line 301 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 1) = ((MR_Box) (check_hlds__simplify__common__StructMap0_4));
#line 301 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 2) = ((MR_Box) (check_hlds__simplify__common__StructMap0_4));
#line 301 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls0_5));
#line 301 "common.m"
    }
#line 297 "common.m"
    return check_hlds__simplify__common__CommonInfo_2;
#line 297 "common.m"
  }
#line 152 "common.m"
}

#line 145 "common.m"
MR_bool MR_CALL 
check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(
#line 145 "common.m"
  MR_Word check_hlds__simplify__common__X_4,
#line 145 "common.m"
  MR_Word check_hlds__simplify__common__Y_5,
#line 145 "common.m"
  MR_Word check_hlds__simplify__common__CommonInfo_6)
#line 145 "common.m"
{
#line 762 "common.m"
  {
#line 762 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 762 "common.m"
    MR_Word check_hlds__simplify__common__EqvVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 0)));
#line 763 "common.m"
    MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 1)));
#line 763 "common.m"
    MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 2)));
#line 763 "common.m"
    MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 3)));

#line 774 "common.m"
    {
#line 774 "common.m"
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__X_4)), ((MR_Box) (check_hlds__simplify__common__Y_5)));
    }
#line 774 "common.m"
    if (!(check_hlds__simplify__common__succeeded))
#line 776 "common.m"
      {
#line 776 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_8_15 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 776 "common.m"
        MR_Integer check_hlds__simplify__common__Id_14;
#line 776 "common.m"
        MR_Integer check_hlds__simplify__common__V_16_16;

#line 776 "common.m"
        {
#line 776 "common.m"
          check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_15, check_hlds__simplify__common__EqvVars_7, ((MR_Box) (check_hlds__simplify__common__X_4)), &check_hlds__simplify__common__Id_14);
        }
#line 776 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 776 "common.m"
          {
#line 777 "common.m"
            {
#line 777 "common.m"
              check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_15, check_hlds__simplify__common__EqvVars_7, ((MR_Box) (check_hlds__simplify__common__Y_5)), &check_hlds__simplify__common__V_16_16);
            }
#line 776 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 777 "common.m"
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_14 == check_hlds__simplify__common__V_16_16);
#line 776 "common.m"
          }
#line 776 "common.m"
      }
#line 762 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 762 "common.m"
  }
#line 145 "common.m"
}

#line 136 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(
#line 136 "common.m"
  MR_Word check_hlds__simplify__common__Closure_13,
#line 136 "common.m"
  MR_Word check_hlds__simplify__common__Args_14,
#line 136 "common.m"
  MR_Word check_hlds__simplify__common__Modes_15,
#line 136 "common.m"
  MR_Word check_hlds__simplify__common__Det_16,
#line 136 "common.m"
  MR_Word check_hlds__simplify__common__Purity_17,
#line 136 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_18,
#line 136 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_19,
#line 136 "common.m"
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_20,
#line 136 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_28,
#line 136 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_29,
#line 136 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_30,
#line 136 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_31)
#line 136 "common.m"
{
#line 576 "common.m"
  {
#line 576 "common.m"
    MR_bool check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Purity_17 == (MR_Integer) 0);
#line 576 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs_25;
#line 576 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs_26;
#line 576 "common.m"
    MR_Word check_hlds__simplify__common__OutputModes_27;
#line 577 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_23;
#line 577 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_24;
#line 577 "common.m"
    MR_Word check_hlds__simplify__common__SolnCount_38;
#line 594 "common.m"
    MR_Word check_hlds__simplify__common__V_37_37;

#line 577 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 577 "common.m"
      {
#line 594 "common.m"
        {
#line 594 "common.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__common__Det_16, &check_hlds__simplify__common__V_37_37, &check_hlds__simplify__common__SolnCount_38);
        }
#line 597 "common.m"
#line 597 "common.m"
        switch (check_hlds__simplify__common__SolnCount_38) {
#line 597 "common.m"
          default:
#line 597 "common.m"
            check_hlds__simplify__common__succeeded = MR_FALSE;
#line 597 "common.m"
            break;
#line 597 "common.m"
          case (MR_Integer) 2:
#line 597 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 597 "common.m"
            break;
#line 597 "common.m"
          case (MR_Integer) 1:
#line 596 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 597 "common.m"
            break;
#line 597 "common.m"
        }
#line 577 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 577 "common.m"
          {
#line 579 "common.m"
            {
#line 579 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__common__VarTypes_23);
            }
#line 580 "common.m"
            {
#line 580 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__common__ModuleInfo_24);
            }
#line 581 "common.m"
            {
#line 581 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_23, check_hlds__simplify__common__ModuleInfo_24, check_hlds__simplify__common__Modes_15, check_hlds__simplify__common__Args_14, &check_hlds__simplify__common__InputArgs_25, &check_hlds__simplify__common__OutputArgs_26, &check_hlds__simplify__common__OutputModes_27);
            }
#line 577 "common.m"
          }
#line 577 "common.m"
      }
#line 576 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 584 "common.m"
      {
#line 584 "common.m"
        MR_Word check_hlds__simplify__common__V_33_33;

#line 584 "common.m"
        {
#line 584 "common.m"
          check_hlds__simplify__common__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_33_33, 0) = ((MR_Box) (check_hlds__simplify__common__Closure_13));
#line 584 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_33_33, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_25));
#line 584 "common.m"
        }
#line 584 "common.m"
        {
#line 584 "common.m"
          check_hlds__simplify__common__common_optimise_call_2_11_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__common__V_33_33, check_hlds__simplify__common__OutputArgs_26, check_hlds__simplify__common__OutputModes_27, check_hlds__simplify__common__GoalInfo_18, check_hlds__simplify__common__GoalExpr0_19, check_hlds__simplify__common__MaybeAssignsGoalExpr_20, check_hlds__simplify__common__STATE_VARIABLE_Common_0_28, check_hlds__simplify__common__STATE_VARIABLE_Common_29, check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, check_hlds__simplify__common__STATE_VARIABLE_Info_31);
        }
#line 584 "common.m"
      }
#line 576 "common.m"
    else
#line 588 "common.m"
      {
#line 588 "common.m"
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 588 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_31 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_30;
#line 588 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_29 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_28;
#line 588 "common.m"
      }
#line 576 "common.m"
  }
#line 136 "common.m"
}

#line 130 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_optimise_call_11_p_0(
#line 130 "common.m"
  MR_Word check_hlds__simplify__common__PredId_12,
#line 130 "common.m"
  MR_Integer check_hlds__simplify__common__ProcId_13,
#line 130 "common.m"
  MR_Word check_hlds__simplify__common__Args_14,
#line 130 "common.m"
  MR_Word check_hlds__simplify__common__Purity_15,
#line 130 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 130 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 130 "common.m"
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
#line 130 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_30,
#line 130 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_31,
#line 130 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_32,
#line 130 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_33)
#line 130 "common.m"
{
#line 556 "common.m"
  {
#line 556 "common.m"
    MR_bool check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Purity_15 == (MR_Integer) 0);
#line 556 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs_27;
#line 556 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs_28;
#line 556 "common.m"
    MR_Word check_hlds__simplify__common__OutputModes_29;
#line 557 "common.m"
    MR_Word check_hlds__simplify__common__Det_21;
#line 557 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_22;
#line 557 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_23;
#line 557 "common.m"
    MR_Word check_hlds__simplify__common__ProcInfo_25;
#line 557 "common.m"
    MR_Word check_hlds__simplify__common__ArgModes_26;
#line 557 "common.m"
    MR_Word check_hlds__simplify__common__SolnCount_39;
#line 594 "common.m"
    MR_Word check_hlds__simplify__common__V_38_38;
#line 562 "common.m"
    MR_Word check_hlds__simplify__common__V_24_24;

#line 557 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 557 "common.m"
      {
#line 558 "common.m"
        {
#line 558 "common.m"
          check_hlds__simplify__common__Det_21 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__common__GoalInfo_16);
        }
#line 594 "common.m"
        {
#line 594 "common.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__common__Det_21, &check_hlds__simplify__common__V_38_38, &check_hlds__simplify__common__SolnCount_39);
        }
#line 597 "common.m"
#line 597 "common.m"
        switch (check_hlds__simplify__common__SolnCount_39) {
#line 597 "common.m"
          default:
#line 597 "common.m"
            check_hlds__simplify__common__succeeded = MR_FALSE;
#line 597 "common.m"
            break;
#line 597 "common.m"
          case (MR_Integer) 2:
#line 597 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 597 "common.m"
            break;
#line 597 "common.m"
          case (MR_Integer) 1:
#line 596 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 597 "common.m"
            break;
#line 597 "common.m"
        }
#line 557 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 557 "common.m"
          {
#line 560 "common.m"
            {
#line 560 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, &check_hlds__simplify__common__VarTypes_22);
            }
#line 561 "common.m"
            {
#line 561 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, &check_hlds__simplify__common__ModuleInfo_23);
            }
#line 562 "common.m"
            {
#line 562 "common.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__common__ModuleInfo_23, check_hlds__simplify__common__PredId_12, check_hlds__simplify__common__ProcId_13, &check_hlds__simplify__common__V_24_24, &check_hlds__simplify__common__ProcInfo_25);
            }
#line 563 "common.m"
            {
#line 563 "common.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__common__ProcInfo_25, &check_hlds__simplify__common__ArgModes_26);
            }
#line 564 "common.m"
            {
#line 564 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_22, check_hlds__simplify__common__ModuleInfo_23, check_hlds__simplify__common__ArgModes_26, check_hlds__simplify__common__Args_14, &check_hlds__simplify__common__InputArgs_27, &check_hlds__simplify__common__OutputArgs_28, &check_hlds__simplify__common__OutputModes_29);
            }
#line 557 "common.m"
          }
#line 557 "common.m"
      }
#line 556 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 567 "common.m"
      {
#line 567 "common.m"
        MR_Word check_hlds__simplify__common__V_34_34;

#line 567 "common.m"
        {
#line 567 "common.m"
          check_hlds__simplify__common__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_34_34, 0) = ((MR_Box) (check_hlds__simplify__common__PredId_12));
#line 567 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_34_34, 1) = ((MR_Box) (check_hlds__simplify__common__ProcId_13));
#line 567 "common.m"
        }
#line 567 "common.m"
        {
#line 567 "common.m"
          check_hlds__simplify__common__common_optimise_call_2_11_p_0(check_hlds__simplify__common__V_34_34, check_hlds__simplify__common__InputArgs_27, check_hlds__simplify__common__OutputArgs_28, check_hlds__simplify__common__OutputModes_29, check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__GoalExpr0_17, check_hlds__simplify__common__MaybeAssignsGoalExpr_18, check_hlds__simplify__common__STATE_VARIABLE_Common_0_30, check_hlds__simplify__common__STATE_VARIABLE_Common_31, check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, check_hlds__simplify__common__STATE_VARIABLE_Info_33);
        }
#line 567 "common.m"
      }
#line 556 "common.m"
    else
#line 571 "common.m"
      {
#line 571 "common.m"
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 571 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_33 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_32;
#line 571 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_31 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_30;
#line 571 "common.m"
      }
#line 556 "common.m"
  }
#line 130 "common.m"
}

#line 116 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_optimise_unification_10_p_0(
#line 116 "common.m"
  MR_Word check_hlds__simplify__common__Unification0_11,
#line 116 "common.m"
  MR_Word check_hlds__simplify__common__Mode_12,
#line 116 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35,
#line 116 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36,
#line 116 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37,
#line 116 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38,
#line 116 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_39,
#line 116 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_40,
#line 116 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_41,
#line 116 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_42)
#line 116 "common.m"
{
#line 311 "common.m"
  {
#line 311 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 311 "common.m"
#line 311 "common.m"
    switch (MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) {
#line 311 "common.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 311 "common.m"
      case (MR_Integer) 0:
#line 311 "common.m"
        {
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__SubInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 6)));
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 3)));
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 4)));
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 5)));
#line 313 "common.m"
          MR_Word check_hlds__simplify__common__MaybeTakeAddr_24;
#line 313 "common.m"
          MR_Word check_hlds__simplify__common__V_25_25;
#line 314 "common.m"
          MR_Word check_hlds__simplify__common__V_26_26;

#line 313 "common.m"
          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__SubInfo_23)) == (MR_mktag((MR_Integer) 1)));
#line 313 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 313 "common.m"
            {
#line 313 "common.m"
              check_hlds__simplify__common__MaybeTakeAddr_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__SubInfo_23, (MR_Integer) 0)));
#line 313 "common.m"
              check_hlds__simplify__common__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__SubInfo_23, (MR_Integer) 1)));
#line 314 "common.m"
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__MaybeTakeAddr_24)) == (MR_mktag((MR_Integer) 1)));
#line 314 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 314 "common.m"
                check_hlds__simplify__common__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__MaybeTakeAddr_24, (MR_Integer) 0)));
#line 313 "common.m"
            }
#line 312 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 316 "common.m"
            {
#line 316 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 316 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_39;
#line 316 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 316 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 316 "common.m"
            }
#line 312 "common.m"
          else
#line 318 "common.m"
            {
#line 318 "common.m"
              check_hlds__simplify__common__common_optimise_construct_12_p_0(check_hlds__simplify__common__Var_17, check_hlds__simplify__common__ConsId_18, check_hlds__simplify__common__ArgVars_19, check_hlds__simplify__common__Mode_12, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38, check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, check_hlds__simplify__common__STATE_VARIABLE_Common_40, check_hlds__simplify__common__STATE_VARIABLE_Info_0_41, check_hlds__simplify__common__STATE_VARIABLE_Info_42);
            }
#line 311 "common.m"
        }
#line 311 "common.m"
        break;
#line 311 "common.m"
      case (MR_Integer) 1:
#line 322 "common.m"
        {
#line 322 "common.m"
          MR_Word check_hlds__simplify__common__UniModes_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 3)));
#line 322 "common.m"
          MR_Word check_hlds__simplify__common__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 4)));
#line 322 "common.m"
          MR_Word check_hlds__simplify__common__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 322 "common.m"
          MR_Word check_hlds__simplify__common__ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 322 "common.m"
          MR_Word check_hlds__simplify__common__ArgVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 322 "common.m"
          MR_Word check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 5)));

#line 323 "common.m"
          {
#line 323 "common.m"
            check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(check_hlds__simplify__common__Var_52, check_hlds__simplify__common__ConsId_53, check_hlds__simplify__common__ArgVars_54, check_hlds__simplify__common__UniModes_27, check_hlds__simplify__common__CanFail_28, check_hlds__simplify__common__Mode_12, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38, check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, check_hlds__simplify__common__STATE_VARIABLE_Common_40, check_hlds__simplify__common__STATE_VARIABLE_Info_0_41, check_hlds__simplify__common__STATE_VARIABLE_Info_42);
          }
#line 322 "common.m"
        }
#line 311 "common.m"
        break;
#line 311 "common.m"
      case (MR_Integer) 2:
#line 328 "common.m"
        {
#line 328 "common.m"
          MR_Word check_hlds__simplify__common__Var1_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 328 "common.m"
          MR_Word check_hlds__simplify__common__Var2_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 328 "common.m"
          MR_Word check_hlds__simplify__common__VarEqv0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 328 "common.m"
          MR_Word check_hlds__simplify__common__VarEqv_63;
#line 547 "common.m"
          MR_Word check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 547 "common.m"
          MR_Word check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 547 "common.m"
          MR_Word check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 549 "common.m"
          MR_Word check_hlds__simplify__common__V_69_69;
#line 549 "common.m"
          MR_Word check_hlds__simplify__common__V_70_70;
#line 549 "common.m"
          MR_Word check_hlds__simplify__common__V_71_71;
#line 549 "common.m"
          MR_Word check_hlds__simplify__common__V_68_68;

#line 548 "common.m"
          {
#line 548 "common.m"
            mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var1_30)), ((MR_Box) (check_hlds__simplify__common__Var2_31)), check_hlds__simplify__common__VarEqv0_62, &check_hlds__simplify__common__VarEqv_63);
          }
#line 549 "common.m"
          check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 549 "common.m"
          check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 549 "common.m"
          check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 549 "common.m"
          check_hlds__simplify__common__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 549 "common.m"
          {
#line 549 "common.m"
            MR_Word base;
#line 549 "common.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 549 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = base;
#line 549 "common.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_63));
#line 549 "common.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 549 "common.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 549 "common.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_71_71));
#line 549 "common.m"
          }
#line 328 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 328 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 328 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 328 "common.m"
        }
#line 311 "common.m"
        break;
#line 311 "common.m"
      case (MR_Integer) 3:
#line 311 "common.m"
#line 311 "common.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)))) {
#line 311 "common.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 311 "common.m"
          case (MR_Integer) 0:
#line 328 "common.m"
            {
#line 328 "common.m"
              MR_Word check_hlds__simplify__common__Var1_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 328 "common.m"
              MR_Word check_hlds__simplify__common__Var2_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 328 "common.m"
              MR_Word check_hlds__simplify__common__VarEqv0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 328 "common.m"
              MR_Word check_hlds__simplify__common__VarEqv_79;
#line 547 "common.m"
              MR_Word check_hlds__simplify__common__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 547 "common.m"
              MR_Word check_hlds__simplify__common__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 547 "common.m"
              MR_Word check_hlds__simplify__common__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 549 "common.m"
              MR_Word check_hlds__simplify__common__V_85_85;
#line 549 "common.m"
              MR_Word check_hlds__simplify__common__V_86_86;
#line 549 "common.m"
              MR_Word check_hlds__simplify__common__V_87_87;
#line 549 "common.m"
              MR_Word check_hlds__simplify__common__V_84_84;

#line 548 "common.m"
              {
#line 548 "common.m"
                mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var1_55)), ((MR_Box) (check_hlds__simplify__common__Var2_56)), check_hlds__simplify__common__VarEqv0_78, &check_hlds__simplify__common__VarEqv_79);
              }
#line 549 "common.m"
              check_hlds__simplify__common__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 549 "common.m"
              check_hlds__simplify__common__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 549 "common.m"
              check_hlds__simplify__common__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 549 "common.m"
              check_hlds__simplify__common__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 549 "common.m"
              {
#line 549 "common.m"
                MR_Word base;
#line 549 "common.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 549 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = base;
#line 549 "common.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_79));
#line 549 "common.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_85_85));
#line 549 "common.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_86_86));
#line 549 "common.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_87_87));
#line 549 "common.m"
              }
#line 328 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 328 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 328 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 328 "common.m"
            }
#line 311 "common.m"
            break;
#line 311 "common.m"
          case (MR_Integer) 1:
#line 331 "common.m"
            {
#line 331 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 331 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 331 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_39;
#line 331 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 331 "common.m"
            }
#line 311 "common.m"
            break;
#line 311 "common.m"
        }
#line 311 "common.m"
        break;
#line 311 "common.m"
    }
#line 311 "common.m"
  }
#line 116 "common.m"
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
