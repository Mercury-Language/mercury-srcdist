/*
** Automatically generated from `common.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "eqvclass.mih"
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




#line 142 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 145 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3];

#line 157 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0;

#line 160 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1];

#line 163 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1];

#line 166 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0[1];

#line 169 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0[1];

#line 172 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 178 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 181 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 184 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

#line 187 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

#line 190 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[4];

#line 193 "check_hlds.simplify.common.c"
static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[4];

#line 196 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0;

#line 199 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1];

#line 202 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1];

#line 205 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1];

#line 208 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1];

#line 211 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2];

#line 214 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0;

#line 217 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1];

#line 220 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1];

#line 223 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1];

#line 226 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1];

#line 229 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
#line 232 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 234 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 237 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
#line 240 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 242 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 244 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 247 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
#line 250 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 252 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 255 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
#line 258 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 260 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 262 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 265 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
#line 268 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 270 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 273 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
#line 276 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 278 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 280 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 283 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
#line 286 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 288 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 291 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
#line 294 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 296 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 298 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 301 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
#line 304 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 306 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 309 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
#line 312 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 314 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 316 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 319 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
#line 322 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 324 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 327 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
#line 330 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 332 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 334 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 337 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
#line 340 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 342 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 345 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
#line 348 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 350 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 352 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 359 "common.m"
static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__359__1_4_p_0(
#line 359 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_72,
#line 359 "common.m"
  MR_Integer * check_hlds__simplify__common__HeadVar__2_73,
#line 359 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_74,
#line 359 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__4_75);

#line 273 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0(
#line 273 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 273 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 273 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 273 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0(
#line 273 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 273 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 274 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0(
#line 274 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 274 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0(
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 274 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 266 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0(
#line 266 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 266 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 266 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 266 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0(
#line 266 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 266 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 277 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0(
#line 277 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 277 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 277 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 277 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0(
#line 277 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 277 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 267 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0(
#line 267 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 267 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0(
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 267 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 279 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0(
#line 279 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 279 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0(
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 279 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 928 "common.m"
static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
#line 928 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_5,
#line 928 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_6,
#line 928 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_17,
#line 928 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_18);

#line 902 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
#line 902 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 902 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 878 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
#line 878 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 878 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 836 "common.m"
static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_11,
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_12,
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__UniMode_13,
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_14,
#line 836 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_15,
#line 836 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_33,
#line 836 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_34,
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_35,
#line 836 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_36);

#line 795 "common.m"
static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_10,
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_11,
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__OldOutputArgs_12,
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_13,
#line 795 "common.m"
  MR_Word * check_hlds__simplify__common__Goals_14,
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_27,
#line 795 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_28,
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_29,
#line 795 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_30);

#line 761 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
#line 761 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 761 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 761 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 743 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
#line 743 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 743 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_8,
#line 743 "common.m"
  MR_Word check_hlds__simplify__common__Eqv_9,
#line 743 "common.m"
  MR_Word * check_hlds__simplify__common__OutputArgs_10,
#line 743 "common.m"
  MR_Word * check_hlds__simplify__common__PrevContext_11);

#line 701 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
#line 701 "common.m"
  MR_Word check_hlds__simplify__common__VarTypes_1,
#line 701 "common.m"
  MR_Word check_hlds__simplify__common__ModuleInfo_2,
#line 701 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3,
#line 701 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__4_4,
#line 701 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__5_5,
#line 701 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__6_6,
#line 701 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__7_7);

#line 604 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__SeenCall_12,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_13,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_14,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__Modes_15,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 604 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__Common0_19,
#line 604 "common.m"
  MR_Word * check_hlds__simplify__common__Common_20,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_47,
#line 604 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_48);

#line 530 "common.m"
static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
#line 530 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_6,
#line 530 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_7,
#line 530 "common.m"
  MR_Word check_hlds__simplify__common__Struct_8,
#line 530 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14,
#line 530 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);

#line 516 "common.m"
static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
#line 516 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_7,
#line 516 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_8,
#line 516 "common.m"
  MR_Word check_hlds__simplify__common__Struct_9,
#line 516 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_10,
#line 516 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_16,
#line 516 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_17);

#line 498 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
#line 498 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 498 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 498 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 487 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
#line 487 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 487 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 487 "common.m"
  MR_Integer check_hlds__simplify__common__VarId_8,
#line 487 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9);

#line 476 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
#line 476 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 476 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 476 "common.m"
  MR_Word check_hlds__simplify__common__ArgVarIds_8,
#line 476 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9);

#line 405 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__Var_15,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_16,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_17,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_18,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__CanFail_19,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__Mode_20,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_21,
#line 405 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_22,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_23,
#line 405 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_24,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 405 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 405 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49);

#line 359 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
#line 359 "common.m"
  MR_Box check_hlds__simplify__common__closure_arg,
#line 359 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 359 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_2,
#line 359 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_3,
#line 359 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_4);

#line 340 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__Var_13,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_14,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_15,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__Mode_16,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 340 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_19,
#line 340 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_20,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 340 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 340 "common.m"
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



#line 905 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 913 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 921 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 929 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 937 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 944 "check_hlds.simplify.common.c"
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

#line 959 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

#line 964 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0
  }
};

#line 973 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

#line 978 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0[1] = {
  (MR_Integer) 0
};

#line 983 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____call_args_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____call_args_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "call_args",
  {
    check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0
  },
  {
    check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0
};

#line 1004 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1012 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1020 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1029 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1038 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0
  }
};

#line 1046 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0,
    (MR_TypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
  }
};

#line 1055 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
};

#line 1063 "check_hlds.simplify.common.c"
static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[4] = {
  (MR_String) "var_eqv",
  (MR_String) "all_structs",
  (MR_String) "since_call_structs",
  (MR_String) "seen_calls"
};

#line 1071 "check_hlds.simplify.common.c"
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

#line 1086 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

#line 1091 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0
  }
};

#line 1100 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

#line 1105 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1] = {
  (MR_Integer) 0
};

#line 1110 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____common_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____common_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "common_info",
  {
    check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0
  },
  {
    check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0
};

#line 1131 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_cons_id_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____cons_id_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____cons_id_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "cons_id_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1152 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_seen_calls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____seen_calls_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____seen_calls_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "seen_calls",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1173 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_struct_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____struct_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____struct_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "struct_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1194 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1200 "check_hlds.simplify.common.c"
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

#line 1215 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

#line 1220 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0
  }
};

#line 1229 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

#line 1234 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1] = {
  (MR_Integer) 0
};

#line 1239 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____structure_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____structure_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "structure",
  {
    check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0
  },
  {
    check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0
};

#line 1260 "check_hlds.simplify.common.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structures_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____structures_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____structures_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "structures",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1281 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
#line 1284 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1286 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1288 "check_hlds.simplify.common.c"
{
#line 1290 "check_hlds.simplify.common.c"
  {
#line 1292 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1295 "check_hlds.simplify.common.c"
    {
#line 1297 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____call_args_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1300 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1302 "check_hlds.simplify.common.c"
  }
#line 1304 "check_hlds.simplify.common.c"
}

#line 1307 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
#line 1310 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1312 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1314 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1316 "check_hlds.simplify.common.c"
{
#line 1318 "check_hlds.simplify.common.c"
  {
#line 1320 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1323 "check_hlds.simplify.common.c"
    {
#line 1325 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____call_args_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1328 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1330 "check_hlds.simplify.common.c"
  }
#line 1332 "check_hlds.simplify.common.c"
}

#line 1335 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
#line 1338 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1340 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1342 "check_hlds.simplify.common.c"
{
#line 1344 "check_hlds.simplify.common.c"
  {
#line 1346 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1349 "check_hlds.simplify.common.c"
    {
#line 1351 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____common_info_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1354 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1356 "check_hlds.simplify.common.c"
  }
#line 1358 "check_hlds.simplify.common.c"
}

#line 1361 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
#line 1364 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1366 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1368 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1370 "check_hlds.simplify.common.c"
{
#line 1372 "check_hlds.simplify.common.c"
  {
#line 1374 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1377 "check_hlds.simplify.common.c"
    {
#line 1379 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____common_info_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1382 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1384 "check_hlds.simplify.common.c"
  }
#line 1386 "check_hlds.simplify.common.c"
}

#line 1389 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
#line 1392 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1394 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1396 "check_hlds.simplify.common.c"
{
#line 1398 "check_hlds.simplify.common.c"
  {
#line 1400 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1403 "check_hlds.simplify.common.c"
    {
#line 1405 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____cons_id_map_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1408 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1410 "check_hlds.simplify.common.c"
  }
#line 1412 "check_hlds.simplify.common.c"
}

#line 1415 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
#line 1418 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1420 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1422 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1424 "check_hlds.simplify.common.c"
{
#line 1426 "check_hlds.simplify.common.c"
  {
#line 1428 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1431 "check_hlds.simplify.common.c"
    {
#line 1433 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____cons_id_map_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1436 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1438 "check_hlds.simplify.common.c"
  }
#line 1440 "check_hlds.simplify.common.c"
}

#line 1443 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
#line 1446 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1448 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1450 "check_hlds.simplify.common.c"
{
#line 1452 "check_hlds.simplify.common.c"
  {
#line 1454 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1457 "check_hlds.simplify.common.c"
    {
#line 1459 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____seen_calls_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1462 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1464 "check_hlds.simplify.common.c"
  }
#line 1466 "check_hlds.simplify.common.c"
}

#line 1469 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
#line 1472 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1474 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1476 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1478 "check_hlds.simplify.common.c"
{
#line 1480 "check_hlds.simplify.common.c"
  {
#line 1482 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1485 "check_hlds.simplify.common.c"
    {
#line 1487 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____seen_calls_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1490 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1492 "check_hlds.simplify.common.c"
  }
#line 1494 "check_hlds.simplify.common.c"
}

#line 1497 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
#line 1500 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1502 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1504 "check_hlds.simplify.common.c"
{
#line 1506 "check_hlds.simplify.common.c"
  {
#line 1508 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1511 "check_hlds.simplify.common.c"
    {
#line 1513 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____struct_map_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1516 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1518 "check_hlds.simplify.common.c"
  }
#line 1520 "check_hlds.simplify.common.c"
}

#line 1523 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
#line 1526 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1528 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1530 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1532 "check_hlds.simplify.common.c"
{
#line 1534 "check_hlds.simplify.common.c"
  {
#line 1536 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1539 "check_hlds.simplify.common.c"
    {
#line 1541 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____struct_map_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1544 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1546 "check_hlds.simplify.common.c"
  }
#line 1548 "check_hlds.simplify.common.c"
}

#line 1551 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
#line 1554 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1556 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1558 "check_hlds.simplify.common.c"
{
#line 1560 "check_hlds.simplify.common.c"
  {
#line 1562 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1565 "check_hlds.simplify.common.c"
    {
#line 1567 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____structure_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1570 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1572 "check_hlds.simplify.common.c"
  }
#line 1574 "check_hlds.simplify.common.c"
}

#line 1577 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
#line 1580 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1582 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1584 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1586 "check_hlds.simplify.common.c"
{
#line 1588 "check_hlds.simplify.common.c"
  {
#line 1590 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1593 "check_hlds.simplify.common.c"
    {
#line 1595 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____structure_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1598 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1600 "check_hlds.simplify.common.c"
  }
#line 1602 "check_hlds.simplify.common.c"
}

#line 1605 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
#line 1608 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1610 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1612 "check_hlds.simplify.common.c"
{
#line 1614 "check_hlds.simplify.common.c"
  {
#line 1616 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1619 "check_hlds.simplify.common.c"
    {
#line 1621 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____structures_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1624 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1626 "check_hlds.simplify.common.c"
  }
#line 1628 "check_hlds.simplify.common.c"
}

#line 1631 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
#line 1634 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1636 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1638 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1640 "check_hlds.simplify.common.c"
{
#line 1642 "check_hlds.simplify.common.c"
  {
#line 1644 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1647 "check_hlds.simplify.common.c"
    {
#line 1649 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____structures_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1652 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1654 "check_hlds.simplify.common.c"
  }
#line 1656 "check_hlds.simplify.common.c"
}

#line 359 "common.m"
static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__359__1_4_p_0(
#line 359 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_72,
#line 359 "common.m"
  MR_Integer * check_hlds__simplify__common__HeadVar__2_73,
#line 359 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_74,
#line 359 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__4_75)
#line 359 "common.m"
{
#line 359 "common.m"
  {
#line 359 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 359 "common.m"
    {
#line 359 "common.m"
      mercury__eqvclass__ensure_element_partition_id_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__HeadVar__1_72)), check_hlds__simplify__common__HeadVar__2_73, check_hlds__simplify__common__HeadVar__3_74, check_hlds__simplify__common__HeadVar__4_75);
#line 359 "common.m"
      return;
    }
#line 359 "common.m"
  }
#line 359 "common.m"
}

#line 273 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0(
#line 273 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 273 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 273 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 273 "common.m"
{
#line 273 "common.m"
  {
#line 273 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 273 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
#line 273 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

#line 273 "common.m"
    {
#line 273 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
#line 273 "common.m"
      return;
    }
#line 273 "common.m"
  }
#line 273 "common.m"
}

#line 273 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0(
#line 273 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 273 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 273 "common.m"
{
#line 273 "common.m"
  {
#line 273 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 273 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
#line 273 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

#line 273 "common.m"
    {
#line 273 "common.m"
      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 273 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 273 "common.m"
  }
#line 273 "common.m"
}

#line 274 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0(
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
    MR_Integer check_hlds__simplify__common__CastX_9 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
#line 274 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_10 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

#line 274 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_9 == check_hlds__simplify__common__CastY_10);
#line 274 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 1775 "check_hlds.simplify.common.c"
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
#line 274 "common.m"
    else
#line 274 "common.m"
      {
#line 274 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
#line 274 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8;

#line 274 "common.m"
        {
#line 274 "common.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], &check_hlds__simplify__common__V_8_8, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_6_6)));
        }
#line 1797 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_8_8 == (MR_Integer) 0);
#line 274 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 274 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 274 "common.m"
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_8_8;
#line 274 "common.m"
        else
#line 274 "common.m"
          {
#line 274 "common.m"
            {
#line 274 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
#line 274 "common.m"
              return;
            }
#line 274 "common.m"
          }
#line 274 "common.m"
      }
#line 274 "common.m"
  }
#line 274 "common.m"
}

#line 274 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0(
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
    MR_Integer check_hlds__simplify__common__CastX_7 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
#line 274 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_8 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

#line 274 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_7 == check_hlds__simplify__common__CastY_8);
#line 274 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 274 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 274 "common.m"
    else
#line 274 "common.m"
      {
#line 274 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_10_10;
#line 274 "common.m"
        MR_Word check_hlds__simplify__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 274 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));

#line 1864 "check_hlds.simplify.common.c"
        {
#line 1866 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__V_3_3)), ((MR_Box) (check_hlds__simplify__common__V_5_5)));
        }
#line 274 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 274 "common.m"
          {
#line 1873 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_10_10 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 1875 "check_hlds.simplify.common.c"
            {
#line 1877 "check_hlds.simplify.common.c"
              return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_10_10, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_6_6)));
            }
#line 274 "common.m"
          }
#line 274 "common.m"
      }
#line 274 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 274 "common.m"
  }
#line 274 "common.m"
}

#line 266 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0(
#line 266 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 266 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 266 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 266 "common.m"
{
#line 266 "common.m"
  {
#line 266 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 266 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
#line 266 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

#line 266 "common.m"
    {
#line 266 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
#line 266 "common.m"
      return;
    }
#line 266 "common.m"
  }
#line 266 "common.m"
}

#line 266 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0(
#line 266 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 266 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 266 "common.m"
{
#line 266 "common.m"
  {
#line 266 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 266 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
#line 266 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

#line 266 "common.m"
    {
#line 266 "common.m"
      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 266 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 266 "common.m"
  }
#line 266 "common.m"
}

#line 277 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0(
#line 277 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 277 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 277 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 277 "common.m"
{
#line 277 "common.m"
  {
#line 277 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 277 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
#line 277 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

#line 277 "common.m"
    {
#line 277 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
#line 277 "common.m"
      return;
    }
#line 277 "common.m"
  }
#line 277 "common.m"
}

#line 277 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0(
#line 277 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 277 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 277 "common.m"
{
#line 277 "common.m"
  {
#line 277 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 277 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
#line 277 "common.m"
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

#line 277 "common.m"
    {
#line 277 "common.m"
      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 277 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 277 "common.m"
  }
#line 277 "common.m"
}

#line 267 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
#line 267 "common.m"
      return;
    }
#line 267 "common.m"
  }
#line 267 "common.m"
}

#line 267 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0(
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
      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
#line 267 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 267 "common.m"
  }
#line 267 "common.m"
}

#line 233 "common.m"
void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0(
#line 233 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 233 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 233 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 233 "common.m"
{
#line 233 "common.m"
  {
#line 233 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 233 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_15 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
#line 233 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_16 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

#line 233 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_15 == check_hlds__simplify__common__CastY_16);
#line 233 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 2101 "check_hlds.simplify.common.c"
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
#line 233 "common.m"
    else
#line 233 "common.m"
      {
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 2)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 3)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_12_12;

#line 233 "common.m"
        {
#line 233 "common.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[3], &check_hlds__simplify__common__V_12_12, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
        }
#line 2131 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_12_12 == (MR_Integer) 0);
#line 233 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 233 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 233 "common.m"
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_12_12;
#line 233 "common.m"
        else
#line 233 "common.m"
          {
#line 233 "common.m"
            MR_Word check_hlds__simplify__common__V_13_13;

#line 233 "common.m"
            {
#line 233 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], &check_hlds__simplify__common__V_13_13, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
            }
#line 2151 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_13_13 == (MR_Integer) 0);
#line 233 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 233 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 233 "common.m"
              *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_13_13;
#line 233 "common.m"
            else
#line 233 "common.m"
              {
#line 233 "common.m"
                MR_Word check_hlds__simplify__common__V_14_14;

#line 233 "common.m"
                {
#line 233 "common.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], &check_hlds__simplify__common__V_14_14, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_10_10)));
                }
#line 2171 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_14_14 == (MR_Integer) 0);
#line 233 "common.m"
                check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 233 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 233 "common.m"
                  *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_14_14;
#line 233 "common.m"
                else
#line 233 "common.m"
                  {
#line 233 "common.m"
                    {
#line 233 "common.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__V_7_7)), ((MR_Box) (check_hlds__simplify__common__V_11_11)));
#line 233 "common.m"
                      return;
                    }
#line 233 "common.m"
                  }
#line 233 "common.m"
              }
#line 233 "common.m"
          }
#line 233 "common.m"
      }
#line 233 "common.m"
  }
#line 233 "common.m"
}

#line 233 "common.m"
MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0(
#line 233 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 233 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 233 "common.m"
{
#line 233 "common.m"
  {
#line 233 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 233 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_11 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
#line 233 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_12 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

#line 233 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_11 == check_hlds__simplify__common__CastY_12);
#line 233 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 233 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 233 "common.m"
    else
#line 233 "common.m"
      {
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_14_14;
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_15_15;
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_16_16;
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 233 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));

#line 2254 "check_hlds.simplify.common.c"
        {
#line 2256 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[3], ((MR_Box) (check_hlds__simplify__common__V_3_3)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
        }
#line 233 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 233 "common.m"
          {
#line 2263 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[1];
#line 2265 "check_hlds.simplify.common.c"
            {
#line 2267 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_14_14, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
            }
#line 233 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 233 "common.m"
              {
#line 2274 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_15_15 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[1];
#line 2276 "check_hlds.simplify.common.c"
                {
#line 2278 "check_hlds.simplify.common.c"
                  check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_15_15, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
                }
#line 233 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 233 "common.m"
                  {
#line 2285 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[2];
#line 2287 "check_hlds.simplify.common.c"
                    {
#line 2289 "check_hlds.simplify.common.c"
                      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_16_16, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_10_10)));
                    }
#line 233 "common.m"
                  }
#line 233 "common.m"
              }
#line 233 "common.m"
          }
#line 233 "common.m"
      }
#line 233 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 233 "common.m"
  }
#line 233 "common.m"
}

#line 279 "common.m"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0(
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
    MR_Integer check_hlds__simplify__common__CastX_12 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
#line 279 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_13 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

#line 279 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_12 == check_hlds__simplify__common__CastY_13);
#line 279 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 2331 "check_hlds.simplify.common.c"
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
#line 279 "common.m"
    else
#line 279 "common.m"
      {
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 2)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10;

#line 279 "common.m"
        {
#line 279 "common.m"
          mercury__term____Compare____context_0_0(&check_hlds__simplify__common__V_10_10, check_hlds__simplify__common__V_4_4, check_hlds__simplify__common__V_7_7);
        }
#line 2357 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_10_10 == (MR_Integer) 0);
#line 279 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 279 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 279 "common.m"
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_10_10;
#line 279 "common.m"
        else
#line 279 "common.m"
          {
#line 279 "common.m"
            MR_Word check_hlds__simplify__common__V_11_11;

#line 279 "common.m"
            {
#line 279 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], &check_hlds__simplify__common__V_11_11, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
            }
#line 2377 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_11_11 == (MR_Integer) 0);
#line 279 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 279 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 279 "common.m"
              *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_11_11;
#line 279 "common.m"
            else
#line 279 "common.m"
              {
#line 279 "common.m"
                {
#line 279 "common.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
#line 279 "common.m"
                  return;
                }
#line 279 "common.m"
              }
#line 279 "common.m"
          }
#line 279 "common.m"
      }
#line 279 "common.m"
  }
#line 279 "common.m"
}

#line 279 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0(
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
    MR_Integer check_hlds__simplify__common__CastX_9 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
#line 279 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_10 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

#line 279 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_9 == check_hlds__simplify__common__CastY_10);
#line 279 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 279 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 279 "common.m"
    else
#line 279 "common.m"
      {
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_12_12;
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_13_13;
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 279 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));

#line 2452 "check_hlds.simplify.common.c"
        {
#line 2454 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__common__V_3_3, check_hlds__simplify__common__V_6_6);
        }
#line 279 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 279 "common.m"
          {
#line 2461 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 2463 "check_hlds.simplify.common.c"
            {
#line 2465 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
            }
#line 279 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 279 "common.m"
              {
#line 2472 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_13_13 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 2474 "check_hlds.simplify.common.c"
                {
#line 2476 "check_hlds.simplify.common.c"
                  return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_13_13, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
                }
#line 279 "common.m"
              }
#line 279 "common.m"
          }
#line 279 "common.m"
      }
#line 279 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 279 "common.m"
  }
#line 279 "common.m"
}

#line 928 "common.m"
static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
#line 928 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_5,
#line 928 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_6,
#line 928 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_17,
#line 928 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_18)
#line 928 "common.m"
{
#line 931 "common.m"
  {
#line 931 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 931 "common.m"
    MR_Word check_hlds__simplify__common__RttiVarMaps0_8;
#line 931 "common.m"
    MR_Word check_hlds__simplify__common__FromVarRttiInfo_9;
#line 931 "common.m"
    MR_Word check_hlds__simplify__common__ToVarRttiInfo_10;
#line 942 "common.m"
    MR_Word check_hlds__simplify__common__TSubst_11;

#line 932 "common.m"
    {
#line 932 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, &check_hlds__simplify__common__RttiVarMaps0_8);
    }
#line 933 "common.m"
    {
#line 933 "common.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__simplify__common__RttiVarMaps0_8, check_hlds__simplify__common__FromVar_6, &check_hlds__simplify__common__FromVarRttiInfo_9);
    }
#line 934 "common.m"
    {
#line 934 "common.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__simplify__common__RttiVarMaps0_8, check_hlds__simplify__common__ToVar_5, &check_hlds__simplify__common__ToVarRttiInfo_10);
    }
#line 981 "common.m"
    if ((check_hlds__simplify__common__ToVarRttiInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 991 "common.m"
      {
#line 991 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_18_44;
#line 991 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_19_45;

#line 991 "common.m"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__FromVarRttiInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 991 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 991 "common.m"
          {
#line 2548 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_18_44 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 2550 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeCtorInfo_19_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 993 "common.m"
            {
#line 993 "common.m"
              mercury__map__init_1_p_0(check_hlds__simplify__common__TypeInfo_18_44, check_hlds__simplify__common__TypeCtorInfo_19_45, &check_hlds__simplify__common__TSubst_11);
            }
#line 993 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 991 "common.m"
          }
#line 991 "common.m"
      }
#line 981 "common.m"
    else
#line 981 "common.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__common__ToVarRttiInfo_10)) == (MR_mktag((MR_Integer) 1))))
#line 981 "common.m"
        {
#line 981 "common.m"
          MR_Word check_hlds__simplify__common__FromVarTypeInfoType_33;
#line 981 "common.m"
          MR_Word check_hlds__simplify__common__ToVarTypeInfoType_34;
#line 981 "common.m"
          MR_Word check_hlds__simplify__common__V_40_40;
#line 981 "common.m"
          MR_Word check_hlds__simplify__common__V_41_41;
#line 981 "common.m"
          MR_Word check_hlds__simplify__common__V_42_42;
#line 981 "common.m"
          MR_Word check_hlds__simplify__common__V_43_43;

#line 981 "common.m"
          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 1)));
#line 981 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 981 "common.m"
            {
#line 981 "common.m"
              check_hlds__simplify__common__FromVarTypeInfoType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__FromVarRttiInfo_9, (MR_Integer) 0)));
#line 982 "common.m"
              check_hlds__simplify__common__ToVarTypeInfoType_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__ToVarRttiInfo_10, (MR_Integer) 0)));
#line 983 "common.m"
              check_hlds__simplify__common__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 983 "common.m"
              check_hlds__simplify__common__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 983 "common.m"
              {
#line 983 "common.m"
                check_hlds__simplify__common__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "common.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_40_40, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarTypeInfoType_34));
#line 983 "common.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_40_40, 1) = ((MR_Box) (check_hlds__simplify__common__V_42_42));
#line 983 "common.m"
              }
#line 983 "common.m"
              {
#line 983 "common.m"
                check_hlds__simplify__common__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "common.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_41_41, 0) = ((MR_Box) (check_hlds__simplify__common__FromVarTypeInfoType_33));
#line 983 "common.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_41_41, 1) = ((MR_Box) (check_hlds__simplify__common__V_43_43));
#line 983 "common.m"
              }
#line 983 "common.m"
              {
#line 983 "common.m"
                check_hlds__simplify__common__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__simplify__common__V_40_40, check_hlds__simplify__common__V_41_41, &check_hlds__simplify__common__TSubst_11);
              }
#line 981 "common.m"
            }
#line 981 "common.m"
        }
#line 981 "common.m"
      else
#line 985 "common.m"
        {
#line 985 "common.m"
          MR_Word check_hlds__simplify__common__FromVarConstraint_35;
#line 985 "common.m"
          MR_Word check_hlds__simplify__common__ToVarConstraint_36;
#line 985 "common.m"
          MR_Word check_hlds__simplify__common__Name_37;
#line 985 "common.m"
          MR_Word check_hlds__simplify__common__FromArgs_38;
#line 985 "common.m"
          MR_Word check_hlds__simplify__common__ToArgs_39;
#line 985 "common.m"
          MR_Word check_hlds__simplify__common__V_46_46;

#line 985 "common.m"
          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 2)));
#line 985 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 985 "common.m"
            {
#line 985 "common.m"
              check_hlds__simplify__common__FromVarConstraint_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__FromVarRttiInfo_9, (MR_Integer) 0)));
#line 986 "common.m"
              check_hlds__simplify__common__ToVarConstraint_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__ToVarRttiInfo_10, (MR_Integer) 0)));
#line 987 "common.m"
              check_hlds__simplify__common__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__FromVarConstraint_35, (MR_Integer) 0)));
#line 987 "common.m"
              check_hlds__simplify__common__FromArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__FromVarConstraint_35, (MR_Integer) 1)));
#line 988 "common.m"
              check_hlds__simplify__common__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarConstraint_36, (MR_Integer) 0)));
#line 988 "common.m"
              check_hlds__simplify__common__ToArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarConstraint_36, (MR_Integer) 1)));
#line 988 "common.m"
              {
#line 988 "common.m"
                check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_37, check_hlds__simplify__common__V_46_46);
              }
#line 985 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 989 "common.m"
                {
#line 989 "common.m"
                  check_hlds__simplify__common__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__simplify__common__ToArgs_39, check_hlds__simplify__common__FromArgs_38, &check_hlds__simplify__common__TSubst_11);
                }
#line 985 "common.m"
            }
#line 985 "common.m"
        }
#line 942 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 938 "common.m"
      {
#line 936 "common.m"
        {
#line 936 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__simplify__common__TSubst_11);
        }
#line 938 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 936 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_Info_18 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_17;
#line 938 "common.m"
        else
#line 939 "common.m"
          {
#line 939 "common.m"
            check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__TSubst_11, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
#line 939 "common.m"
            return;
          }
#line 938 "common.m"
      }
#line 942 "common.m"
    else
#line 952 "common.m"
      if ((check_hlds__simplify__common__FromVarRttiInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "common.m"
        {
#line 948 "common.m"
          MR_Word check_hlds__simplify__common__RttiVarMaps_12;

#line 949 "common.m"
          {
#line 949 "common.m"
            hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__RttiVarMaps0_8, &check_hlds__simplify__common__RttiVarMaps_12);
          }
#line 951 "common.m"
          {
#line 951 "common.m"
            check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__common__RttiVarMaps_12, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
#line 951 "common.m"
            return;
          }
#line 948 "common.m"
        }
#line 952 "common.m"
      else
#line 961 "common.m"
        if ((check_hlds__simplify__common__ToVarRttiInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "common.m"
          {
#line 957 "common.m"
            MR_Word check_hlds__simplify__common__RttiVarMaps_25;

#line 958 "common.m"
            {
#line 958 "common.m"
              hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__RttiVarMaps0_8, &check_hlds__simplify__common__RttiVarMaps_25);
            }
#line 960 "common.m"
            {
#line 960 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__common__RttiVarMaps_25, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
#line 960 "common.m"
              return;
            }
#line 957 "common.m"
          }
#line 961 "common.m"
        else
#line 964 "common.m"
          {
#line 968 "common.m"
            {
#line 968 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.apply_induced_substitutions\'/4", (MR_String) "inconsistent info");
#line 968 "common.m"
              return;
            }
#line 964 "common.m"
          }
#line 931 "common.m"
  }
#line 928 "common.m"
}

#line 902 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
#line 902 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 902 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 902 "common.m"
{
#line 905 "common.m"
  while (MR_TRUE)
#line 905 "common.m"
    {
#line 905 "common.m"
      /* tailcall optimized into a loop */
#line 905 "common.m"
      {
#line 905 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 905 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "common.m"
        else
#line 906 "common.m"
          {
#line 906 "common.m"
            MR_Word check_hlds__simplify__common__Type1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 906 "common.m"
            MR_Word check_hlds__simplify__common__Types1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 906 "common.m"
            MR_Word check_hlds__simplify__common__Type2_5;
#line 906 "common.m"
            MR_Word check_hlds__simplify__common__Types2_6;

#line 906 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 906 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 906 "common.m"
              {
#line 906 "common.m"
                check_hlds__simplify__common__Type2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 906 "common.m"
                check_hlds__simplify__common__Types2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 907 "common.m"
                {
#line 907 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(check_hlds__simplify__common__Type1_3, check_hlds__simplify__common__Type2_5);
                }
#line 906 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 908 "common.m"
                  {
#line 908 "common.m"
                    /* direct tailcall eliminated */
#line 908 "common.m"
                    {
#line 908 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Types1_4;
#line 908 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Types2_6;

#line 908 "common.m"
                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 908 "common.m"
                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 908 "common.m"
                    }
#line 908 "common.m"
                    continue;
#line 908 "common.m"
                  }
#line 906 "common.m"
              }
#line 906 "common.m"
          }
#line 905 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 905 "common.m"
      }
#line 905 "common.m"
      break;
#line 905 "common.m"
    }
#line 902 "common.m"
}

#line 878 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
#line 878 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 878 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 878 "common.m"
{
#line 880 "common.m"
  while (MR_TRUE)
#line 880 "common.m"
    {
#line 880 "common.m"
      /* tailcall optimized into a loop */
#line 880 "common.m"
      {
#line 880 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 880 "common.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 883 "common.m"
          {
#line 883 "common.m"
            MR_Word check_hlds__simplify__common__BuiltinType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 883 "common.m"
            MR_Word check_hlds__simplify__common__V_37_37;

#line 883 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 883 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 883 "common.m"
              {
#line 883 "common.m"
                check_hlds__simplify__common__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 883 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__BuiltinType_11 == check_hlds__simplify__common__V_37_37);
#line 883 "common.m"
              }
#line 883 "common.m"
          }
#line 880 "common.m"
        else
#line 880 "common.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 881 "common.m"
            {
#line 881 "common.m"
              MR_Word check_hlds__simplify__common__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 881 "common.m"
              MR_Word check_hlds__simplify__common__As_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 881 "common.m"
              MR_Word check_hlds__simplify__common__Bs_9;
#line 881 "common.m"
              MR_Word check_hlds__simplify__common__V_36_36;
#line 881 "common.m"
              MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 881 "common.m"
              MR_Word check_hlds__simplify__common__V_10_10;

#line 881 "common.m"
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 881 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 881 "common.m"
                {
#line 881 "common.m"
                  check_hlds__simplify__common__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 881 "common.m"
                  check_hlds__simplify__common__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 881 "common.m"
                  check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 881 "common.m"
                  {
#line 881 "common.m"
                    check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_6, check_hlds__simplify__common__V_36_36);
                  }
#line 881 "common.m"
                  if (check_hlds__simplify__common__succeeded)
#line 882 "common.m"
                    {
#line 882 "common.m"
                      return check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_7, check_hlds__simplify__common__Bs_9);
                    }
#line 881 "common.m"
                }
#line 881 "common.m"
            }
#line 880 "common.m"
          else
#line 880 "common.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 880 "common.m"
              {
#line 880 "common.m"
                MR_Word check_hlds__simplify__common__TypeInfo_43_43;
#line 880 "common.m"
                MR_Word check_hlds__simplify__common__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 880 "common.m"
                MR_Word check_hlds__simplify__common__V_35_35;
#line 880 "common.m"
                MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 880 "common.m"
                MR_Word check_hlds__simplify__common__V_5_5;

#line 880 "common.m"
                check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 880 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 880 "common.m"
                  {
#line 880 "common.m"
                    check_hlds__simplify__common__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 880 "common.m"
                    check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 2971 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeInfo_43_43 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 880 "common.m"
                    {
#line 880 "common.m"
                      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_43_43, ((MR_Box) (check_hlds__simplify__common__TVar_3)), ((MR_Box) (check_hlds__simplify__common__V_35_35)));
                    }
#line 880 "common.m"
                  }
#line 880 "common.m"
              }
#line 880 "common.m"
            else
#line 880 "common.m"
              if (((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 897 "common.m"
                {
#line 897 "common.m"
                  MR_Word check_hlds__simplify__common__TypeInfo_41_41;
#line 897 "common.m"
                  MR_Word check_hlds__simplify__common__TVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 897 "common.m"
                  MR_Word check_hlds__simplify__common__As_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 897 "common.m"
                  MR_Word check_hlds__simplify__common__Bs_27;
#line 897 "common.m"
                  MR_Word check_hlds__simplify__common__V_40_40;
#line 897 "common.m"
                  MR_Word check_hlds__simplify__common__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 897 "common.m"
                  MR_Word check_hlds__simplify__common__V_28_28;

#line 897 "common.m"
                  check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 897 "common.m"
                  if (check_hlds__simplify__common__succeeded)
#line 897 "common.m"
                    {
#line 897 "common.m"
                      check_hlds__simplify__common__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 897 "common.m"
                      check_hlds__simplify__common__Bs_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 897 "common.m"
                      check_hlds__simplify__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 3015 "check_hlds.simplify.common.c"
                      check_hlds__simplify__common__TypeInfo_41_41 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 897 "common.m"
                      {
#line 897 "common.m"
                        check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_41_41, ((MR_Box) (check_hlds__simplify__common__TVar_24)), ((MR_Box) (check_hlds__simplify__common__V_40_40)));
                      }
#line 897 "common.m"
                      if (check_hlds__simplify__common__succeeded)
#line 898 "common.m"
                        {
#line 898 "common.m"
                          return check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_25, check_hlds__simplify__common__Bs_27);
                        }
#line 897 "common.m"
                    }
#line 897 "common.m"
                }
#line 880 "common.m"
              else
#line 880 "common.m"
                if (((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 885 "common.m"
                  {
#line 885 "common.m"
                    MR_Word check_hlds__simplify__common__As_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 885 "common.m"
                    MR_Word check_hlds__simplify__common__AR_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 885 "common.m"
                    MR_Word check_hlds__simplify__common__P_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 885 "common.m"
                    MR_Word check_hlds__simplify__common__Bs_16;
#line 885 "common.m"
                    MR_Word check_hlds__simplify__common__BR_17;
#line 885 "common.m"
                    MR_Word check_hlds__simplify__common__V_38_38;

#line 885 "common.m"
                    check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 885 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 885 "common.m"
                      {
#line 885 "common.m"
                        check_hlds__simplify__common__Bs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 885 "common.m"
                        check_hlds__simplify__common__BR_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 885 "common.m"
                        check_hlds__simplify__common__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 885 "common.m"
                        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__P_14 == check_hlds__simplify__common__V_38_38);
#line 885 "common.m"
                        if (check_hlds__simplify__common__succeeded)
#line 885 "common.m"
                          {
#line 885 "common.m"
                            check_hlds__simplify__common__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 885 "common.m"
                            if (check_hlds__simplify__common__succeeded)
#line 885 "common.m"
                              {
#line 886 "common.m"
                                {
#line 886 "common.m"
                                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_12, check_hlds__simplify__common__Bs_16);
                                }
#line 885 "common.m"
                                if (check_hlds__simplify__common__succeeded)
#line 891 "common.m"
                                  {
#line 891 "common.m"
                                    if ((check_hlds__simplify__common__AR_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 893 "common.m"
                                      check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__BR_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 891 "common.m"
                                    else
#line 888 "common.m"
                                      {
#line 888 "common.m"
                                        MR_Word check_hlds__simplify__common__A_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AR_13, (MR_Integer) 0)));
#line 888 "common.m"
                                        MR_Word check_hlds__simplify__common__B_19;

#line 889 "common.m"
                                        check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__BR_17)) == (MR_mktag((MR_Integer) 1)));
#line 889 "common.m"
                                        if (check_hlds__simplify__common__succeeded)
#line 889 "common.m"
                                          {
#line 889 "common.m"
                                            check_hlds__simplify__common__B_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__BR_17, (MR_Integer) 0)));
#line 890 "common.m"
                                            /* direct tailcall eliminated */
#line 890 "common.m"
                                            {
#line 890 "common.m"
                                              MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__A_18;
#line 890 "common.m"
                                              MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__B_19;

#line 890 "common.m"
                                              check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 890 "common.m"
                                              check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 890 "common.m"
                                            }
#line 890 "common.m"
                                            continue;
#line 889 "common.m"
                                          }
#line 888 "common.m"
                                      }
#line 891 "common.m"
                                  }
#line 885 "common.m"
                              }
#line 885 "common.m"
                          }
#line 885 "common.m"
                      }
#line 885 "common.m"
                  }
#line 880 "common.m"
                else
#line 880 "common.m"
                  if (((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 899 "common.m"
                    {
#line 900 "common.m"
                      {
#line 900 "common.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.types_match_exactly\'/2", (MR_String) "kind annotation");
                      }
#line 899 "common.m"
                      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 899 "common.m"
                    }
#line 880 "common.m"
                  else
#line 895 "common.m"
                    {
#line 895 "common.m"
                      MR_Word check_hlds__simplify__common__As_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 895 "common.m"
                      MR_Word check_hlds__simplify__common__Bs_22;
#line 895 "common.m"
                      MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 895 "common.m"
                      MR_Word check_hlds__simplify__common__V_23_23;

#line 895 "common.m"
                      check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 895 "common.m"
                      if (check_hlds__simplify__common__succeeded)
#line 895 "common.m"
                        {
#line 895 "common.m"
                          check_hlds__simplify__common__Bs_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 895 "common.m"
                          check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 896 "common.m"
                          {
#line 896 "common.m"
                            return check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_20, check_hlds__simplify__common__Bs_22);
                          }
#line 895 "common.m"
                        }
#line 895 "common.m"
                    }
#line 880 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 880 "common.m"
      }
#line 880 "common.m"
      break;
#line 880 "common.m"
    }
#line 878 "common.m"
}

#line 836 "common.m"
static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_11,
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_12,
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__UniMode_13,
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_14,
#line 836 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_15,
#line 836 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_33,
#line 836 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_34,
#line 836 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_35,
#line 836 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_36)
#line 836 "common.m"
{
#line 842 "common.m"
  {
#line 842 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_19;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__ToVarType_20;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__FromVarType_21;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__NonLocals_22;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__ToVarInst0_24;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__ToVarInst_26;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__InstMapDelta_30;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__GoalInfo0_31;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__Context_32;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__V_38_38;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__V_39_39;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__V_41_41;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__V_42_42;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__V_63_63;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__V_64_64;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv0_75;
#line 842 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv_76;
#line 849 "common.m"
    MR_Word check_hlds__simplify__common__V_23_23;
#line 849 "common.m"
    MR_Word check_hlds__simplify__common__V_25_25;
#line 553 "common.m"
    MR_Word check_hlds__simplify__common__V_78_78;
#line 553 "common.m"
    MR_Word check_hlds__simplify__common__V_79_79;
#line 553 "common.m"
    MR_Word check_hlds__simplify__common__V_80_80;
#line 555 "common.m"
    MR_Word check_hlds__simplify__common__V_82_82;
#line 555 "common.m"
    MR_Word check_hlds__simplify__common__V_83_83;
#line 555 "common.m"
    MR_Word check_hlds__simplify__common__V_84_84;
#line 555 "common.m"
    MR_Word check_hlds__simplify__common__V_81_81;

#line 843 "common.m"
    {
#line 843 "common.m"
      check_hlds__simplify__common__apply_induced_substitutions_4_p_0(check_hlds__simplify__common__ToVar_11, check_hlds__simplify__common__FromVar_12, check_hlds__simplify__common__STATE_VARIABLE_Info_0_35, check_hlds__simplify__common__STATE_VARIABLE_Info_36);
    }
#line 844 "common.m"
    {
#line 844 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(*check_hlds__simplify__common__STATE_VARIABLE_Info_36, &check_hlds__simplify__common__VarTypes_19);
    }
#line 845 "common.m"
    {
#line 845 "common.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_19, check_hlds__simplify__common__ToVar_11, &check_hlds__simplify__common__ToVarType_20);
    }
#line 846 "common.m"
    {
#line 846 "common.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_19, check_hlds__simplify__common__FromVar_12, &check_hlds__simplify__common__FromVarType_21);
    }
#line 848 "common.m"
    {
#line 848 "common.m"
      check_hlds__simplify__common__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_39_39, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 848 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "common.m"
    }
#line 848 "common.m"
    {
#line 848 "common.m"
      check_hlds__simplify__common__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_38_38, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 848 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_38_38, 1) = ((MR_Box) (check_hlds__simplify__common__V_39_39));
#line 848 "common.m"
    }
#line 848 "common.m"
    {
#line 848 "common.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__common__V_38_38, &check_hlds__simplify__common__NonLocals_22);
    }
#line 849 "common.m"
    check_hlds__simplify__common__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_13, (MR_Integer) 0)));
#line 849 "common.m"
    check_hlds__simplify__common__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_13, (MR_Integer) 1)));
#line 849 "common.m"
    check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_41_41, (MR_Integer) 0)));
#line 849 "common.m"
    check_hlds__simplify__common__ToVarInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_41_41, (MR_Integer) 1)));
#line 849 "common.m"
    check_hlds__simplify__common__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_42_42, (MR_Integer) 0)));
#line 849 "common.m"
    check_hlds__simplify__common__ToVarInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_42_42, (MR_Integer) 1)));
#line 850 "common.m"
    {
#line 850 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(check_hlds__simplify__common__ToVarType_20, check_hlds__simplify__common__FromVarType_21);
    }
#line 855 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 851 "common.m"
      {
#line 851 "common.m"
        MR_Word check_hlds__simplify__common__UnifyMode_27;
#line 851 "common.m"
        MR_Word check_hlds__simplify__common__V_43_43;
#line 851 "common.m"
        MR_Word check_hlds__simplify__common__V_44_44;
#line 851 "common.m"
        MR_Word check_hlds__simplify__common__V_48_48;
#line 851 "common.m"
        MR_Word check_hlds__simplify__common__V_49_49;

#line 851 "common.m"
        {
#line 851 "common.m"
          check_hlds__simplify__common__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst0_24));
#line 851 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_43_43, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 851 "common.m"
        }
#line 851 "common.m"
        {
#line 851 "common.m"
          check_hlds__simplify__common__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_44_44, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 851 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_44_44, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 851 "common.m"
        }
#line 851 "common.m"
        {
#line 851 "common.m"
          check_hlds__simplify__common__UnifyMode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_27, 0) = ((MR_Box) (check_hlds__simplify__common__V_43_43));
#line 851 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_27, 1) = ((MR_Box) (check_hlds__simplify__common__V_44_44));
#line 851 "common.m"
        }
#line 853 "common.m"
        {
#line 853 "common.m"
          check_hlds__simplify__common__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 853 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_48_48, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 853 "common.m"
        }
#line 854 "common.m"
        {
#line 854 "common.m"
          check_hlds__simplify__common__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "common.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__common__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 854 "common.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__common__V_49_49, 1) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 854 "common.m"
        }
#line 853 "common.m"
        {
#line 853 "common.m"
          MR_Word base;
#line 853 "common.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 853 "common.m"
          *check_hlds__simplify__common__GoalExpr_15 = base;
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_48_48));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__common__UnifyMode_27));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_49_49));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[10]));
#line 853 "common.m"
        }
#line 851 "common.m"
      }
#line 855 "common.m"
    else
#line 862 "common.m"
      {
#line 862 "common.m"
        MR_Word check_hlds__simplify__common__Modes_29;
#line 862 "common.m"
        MR_Word check_hlds__simplify__common__V_50_50;
#line 862 "common.m"
        MR_Word check_hlds__simplify__common__V_52_52;
#line 862 "common.m"
        MR_Word check_hlds__simplify__common__V_53_53;
#line 862 "common.m"
        MR_Word check_hlds__simplify__common__V_58_58;
#line 862 "common.m"
        MR_Word check_hlds__simplify__common__V_59_59;

#line 862 "common.m"
        {
#line 862 "common.m"
          check_hlds__simplify__common__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 862 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_50_50, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 862 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 862 "common.m"
        }
#line 862 "common.m"
        {
#line 862 "common.m"
          check_hlds__simplify__common__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 862 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 862 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_53_53, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 862 "common.m"
        }
#line 862 "common.m"
        {
#line 862 "common.m"
          check_hlds__simplify__common__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__V_53_53));
#line 862 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 862 "common.m"
        }
#line 862 "common.m"
        {
#line 862 "common.m"
          check_hlds__simplify__common__Modes_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Modes_29, 0) = ((MR_Box) (check_hlds__simplify__common__V_50_50));
#line 862 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Modes_29, 1) = ((MR_Box) (check_hlds__simplify__common__V_52_52));
#line 862 "common.m"
        }
#line 863 "common.m"
        {
#line 863 "common.m"
          check_hlds__simplify__common__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 863 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "common.m"
        }
#line 863 "common.m"
        {
#line 863 "common.m"
          check_hlds__simplify__common__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_58_58, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 863 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_58_58, 1) = ((MR_Box) (check_hlds__simplify__common__V_59_59));
#line 863 "common.m"
        }
#line 863 "common.m"
        {
#line 863 "common.m"
          MR_Word base;
#line 863 "common.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 863 "common.m"
          *check_hlds__simplify__common__GoalExpr_15 = base;
#line 863 "common.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 863 "common.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_5[1])));
#line 863 "common.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_58_58));
#line 863 "common.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__common__Modes_29));
#line 863 "common.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "common.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 863 "common.m"
        }
#line 862 "common.m"
      }
#line 869 "common.m"
    {
#line 869 "common.m"
      check_hlds__simplify__common__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 869 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 869 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 869 "common.m"
    }
#line 869 "common.m"
    {
#line 869 "common.m"
      check_hlds__simplify__common__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__common__V_64_64));
#line 869 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 869 "common.m"
    }
#line 869 "common.m"
    {
#line 869 "common.m"
      check_hlds__simplify__common__InstMapDelta_30 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__common__V_63_63);
    }
#line 871 "common.m"
    {
#line 871 "common.m"
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__common__NonLocals_22, check_hlds__simplify__common__InstMapDelta_30, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__common__GoalInfo0_31);
    }
#line 873 "common.m"
    {
#line 873 "common.m"
      check_hlds__simplify__common__Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__OldGoalInfo_14);
    }
#line 874 "common.m"
    {
#line 874 "common.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__simplify__common__Context_32, check_hlds__simplify__common__GoalInfo0_31, check_hlds__simplify__common__GoalInfo_16);
    }
#line 553 "common.m"
    check_hlds__simplify__common__VarEqv0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 0)));
#line 553 "common.m"
    check_hlds__simplify__common__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 1)));
#line 553 "common.m"
    check_hlds__simplify__common__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 2)));
#line 553 "common.m"
    check_hlds__simplify__common__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 3)));
#line 554 "common.m"
    {
#line 554 "common.m"
      mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__ToVar_11)), ((MR_Box) (check_hlds__simplify__common__FromVar_12)), check_hlds__simplify__common__VarEqv0_75, &check_hlds__simplify__common__VarEqv_76);
    }
#line 555 "common.m"
    check_hlds__simplify__common__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 0)));
#line 555 "common.m"
    check_hlds__simplify__common__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 1)));
#line 555 "common.m"
    check_hlds__simplify__common__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 2)));
#line 555 "common.m"
    check_hlds__simplify__common__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 3)));
#line 555 "common.m"
    {
#line 555 "common.m"
      MR_Word base;
#line 555 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 555 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Common_34 = base;
#line 555 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_76));
#line 555 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_82_82));
#line 555 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_83_83));
#line 555 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_84_84));
#line 555 "common.m"
    }
#line 842 "common.m"
  }
#line 836 "common.m"
}

#line 795 "common.m"
static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_10,
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_11,
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__OldOutputArgs_12,
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_13,
#line 795 "common.m"
  MR_Word * check_hlds__simplify__common__Goals_14,
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_27,
#line 795 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_28,
#line 795 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_29,
#line 795 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_30)
#line 795 "common.m"
{
#line 824 "common.m"
  while (MR_TRUE)
#line 824 "common.m"
    {
#line 824 "common.m"
      /* tailcall optimized into a loop */
#line 824 "common.m"
      {
#line 824 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__OutputArgs_11)) == (MR_mktag((MR_Integer) 1)));
#line 824 "common.m"
        MR_Word check_hlds__simplify__common__OutputArg_17;
#line 824 "common.m"
        MR_Word check_hlds__simplify__common__OutputArgsTail_18;
#line 824 "common.m"
        MR_Word check_hlds__simplify__common__OldOutputArg_19;
#line 824 "common.m"
        MR_Word check_hlds__simplify__common__OldOutputArgsTail_20;
#line 824 "common.m"
        MR_Word check_hlds__simplify__common__UniMode_21;
#line 824 "common.m"
        MR_Word check_hlds__simplify__common__UniModesTail_22;

#line 803 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 803 "common.m"
          {
#line 803 "common.m"
            check_hlds__simplify__common__OutputArg_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OutputArgs_11, (MR_Integer) 0)));
#line 803 "common.m"
            check_hlds__simplify__common__OutputArgsTail_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OutputArgs_11, (MR_Integer) 1)));
#line 804 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__OldOutputArgs_12)) == (MR_mktag((MR_Integer) 1)));
#line 804 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 804 "common.m"
              {
#line 804 "common.m"
                check_hlds__simplify__common__OldOutputArg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OldOutputArgs_12, (MR_Integer) 0)));
#line 804 "common.m"
                check_hlds__simplify__common__OldOutputArgsTail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OldOutputArgs_12, (MR_Integer) 1)));
#line 805 "common.m"
                check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__UniModes_13)) == (MR_mktag((MR_Integer) 1)));
#line 805 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 805 "common.m"
                  {
#line 805 "common.m"
                    check_hlds__simplify__common__UniMode_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__UniModes_13, (MR_Integer) 0)));
#line 805 "common.m"
                    check_hlds__simplify__common__UniModesTail_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__UniModes_13, (MR_Integer) 1)));
#line 805 "common.m"
                  }
#line 804 "common.m"
              }
#line 803 "common.m"
          }
#line 824 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 819 "common.m"
          {
#line 810 "common.m"
            {
#line 810 "common.m"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__OutputArg_17)), ((MR_Box) (check_hlds__simplify__common__OldOutputArg_19)));
            }
#line 810 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 819 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 813 "common.m"
              {
#line 813 "common.m"
                MR_Word check_hlds__simplify__common__GoalExpr_23;
#line 813 "common.m"
                MR_Word check_hlds__simplify__common__GoalInfo_24;
#line 813 "common.m"
                MR_Word check_hlds__simplify__common__Goal_25;
#line 813 "common.m"
                MR_Word check_hlds__simplify__common__GoalsTail_26;
#line 813 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_31_31;
#line 813 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_32_32;

#line 812 "common.m"
                {
#line 812 "common.m"
                  check_hlds__simplify__common__generate_assign_10_p_0(check_hlds__simplify__common__OutputArg_17, check_hlds__simplify__common__OldOutputArg_19, check_hlds__simplify__common__UniMode_21, check_hlds__simplify__common__OldGoalInfo_10, &check_hlds__simplify__common__GoalExpr_23, &check_hlds__simplify__common__GoalInfo_24, check_hlds__simplify__common__STATE_VARIABLE_Common_0_27, &check_hlds__simplify__common__STATE_VARIABLE_Common_31_31, check_hlds__simplify__common__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__common__STATE_VARIABLE_Info_32_32);
                }
#line 814 "common.m"
                {
#line 814 "common.m"
                  check_hlds__simplify__common__Goal_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 814 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Goal_25, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr_23));
#line 814 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Goal_25, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo_24));
#line 814 "common.m"
                }
#line 815 "common.m"
                {
#line 815 "common.m"
                  check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__OldGoalInfo_10, check_hlds__simplify__common__OutputArgsTail_18, check_hlds__simplify__common__OldOutputArgsTail_20, check_hlds__simplify__common__UniModesTail_22, &check_hlds__simplify__common__GoalsTail_26, check_hlds__simplify__common__STATE_VARIABLE_Common_31_31, check_hlds__simplify__common__STATE_VARIABLE_Common_28, check_hlds__simplify__common__STATE_VARIABLE_Info_32_32, check_hlds__simplify__common__STATE_VARIABLE_Info_30);
                }
#line 818 "common.m"
                {
#line 818 "common.m"
                  MR_Word base;
#line 818 "common.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "common.m"
                  *check_hlds__simplify__common__Goals_14 = base;
#line 818 "common.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Goal_25));
#line 818 "common.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__GoalsTail_26));
#line 818 "common.m"
                }
#line 813 "common.m"
              }
#line 819 "common.m"
            else
#line 820 "common.m"
              {
#line 820 "common.m"
                /* direct tailcall eliminated */
#line 820 "common.m"
                {
#line 820 "common.m"
                  MR_Word check_hlds__simplify__common__OutputArgs__tmp_copy_11 = check_hlds__simplify__common__OutputArgsTail_18;
#line 820 "common.m"
                  MR_Word check_hlds__simplify__common__OldOutputArgs__tmp_copy_12 = check_hlds__simplify__common__OldOutputArgsTail_20;
#line 820 "common.m"
                  MR_Word check_hlds__simplify__common__UniModes__tmp_copy_13 = check_hlds__simplify__common__UniModesTail_22;

#line 820 "common.m"
                  check_hlds__simplify__common__UniModes_13 = check_hlds__simplify__common__UniModes__tmp_copy_13;
#line 820 "common.m"
                  check_hlds__simplify__common__OldOutputArgs_12 = check_hlds__simplify__common__OldOutputArgs__tmp_copy_12;
#line 820 "common.m"
                  check_hlds__simplify__common__OutputArgs_11 = check_hlds__simplify__common__OutputArgs__tmp_copy_11;
#line 820 "common.m"
                }
#line 820 "common.m"
                continue;
#line 820 "common.m"
              }
#line 819 "common.m"
          }
#line 824 "common.m"
        else
#line 830 "common.m"
          {
#line 825 "common.m"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__OutputArgs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 825 "common.m"
              {
#line 826 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__OldOutputArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 827 "common.m"
                  check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__UniModes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "common.m"
              }
#line 830 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 829 "common.m"
              *check_hlds__simplify__common__Goals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 830 "common.m"
            else
#line 831 "common.m"
              {
#line 831 "common.m"
                {
#line 831 "common.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.create_output_unifications\'/9", (MR_String) "mode mismatch");
#line 831 "common.m"
                  return;
                }
#line 831 "common.m"
              }
#line 831 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_30 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_29;
#line 831 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Common_28 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_27;
#line 830 "common.m"
          }
#line 824 "common.m"
      }
#line 824 "common.m"
      break;
#line 824 "common.m"
    }
#line 795 "common.m"
}

#line 761 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
#line 761 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 761 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 761 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 761 "common.m"
{
#line 764 "common.m"
  while (MR_TRUE)
#line 764 "common.m"
    {
#line 764 "common.m"
      /* tailcall optimized into a loop */
#line 764 "common.m"
      {
#line 764 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 764 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "common.m"
        else
#line 765 "common.m"
          {
#line 765 "common.m"
            MR_Word check_hlds__simplify__common__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 765 "common.m"
            MR_Word check_hlds__simplify__common__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 765 "common.m"
            MR_Word check_hlds__simplify__common__Y_7;
#line 765 "common.m"
            MR_Word check_hlds__simplify__common__Ys_8;

#line 765 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 765 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 765 "common.m"
              {
#line 765 "common.m"
                check_hlds__simplify__common__Y_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 765 "common.m"
                check_hlds__simplify__common__Ys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 781 "common.m"
                {
#line 781 "common.m"
                  {
#line 781 "common.m"
                    check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__X_5)), ((MR_Box) (check_hlds__simplify__common__Y_7)));
                  }
#line 781 "common.m"
                }
#line 781 "common.m"
                if (!(check_hlds__simplify__common__succeeded))
#line 783 "common.m"
                  {
#line 783 "common.m"
                    MR_Word check_hlds__simplify__common__TypeInfo_8_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 783 "common.m"
                    MR_Integer check_hlds__simplify__common__Id_13;
#line 783 "common.m"
                    MR_Integer check_hlds__simplify__common__V_15_15;

#line 783 "common.m"
                    {
#line 783 "common.m"
                      check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__X_5)), &check_hlds__simplify__common__Id_13);
                    }
#line 783 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 783 "common.m"
                      {
#line 784 "common.m"
                        {
#line 784 "common.m"
                          check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__Y_7)), &check_hlds__simplify__common__V_15_15);
                        }
#line 783 "common.m"
                        if (check_hlds__simplify__common__succeeded)
#line 784 "common.m"
                          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_13 == check_hlds__simplify__common__V_15_15);
#line 783 "common.m"
                      }
#line 783 "common.m"
                  }
#line 765 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 767 "common.m"
                  {
#line 767 "common.m"
                    /* direct tailcall eliminated */
#line 767 "common.m"
                    {
#line 767 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Xs_6;
#line 767 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Ys_8;

#line 767 "common.m"
                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 767 "common.m"
                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 767 "common.m"
                    }
#line 767 "common.m"
                    continue;
#line 767 "common.m"
                  }
#line 765 "common.m"
              }
#line 765 "common.m"
          }
#line 764 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 764 "common.m"
      }
#line 764 "common.m"
      break;
#line 764 "common.m"
    }
#line 761 "common.m"
}

#line 743 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
#line 743 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 743 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_8,
#line 743 "common.m"
  MR_Word check_hlds__simplify__common__Eqv_9,
#line 743 "common.m"
  MR_Word * check_hlds__simplify__common__OutputArgs_10,
#line 743 "common.m"
  MR_Word * check_hlds__simplify__common__PrevContext_11)
#line 743 "common.m"
{
#line 748 "common.m"
  {
#line 748 "common.m"
    MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 748 "common.m"
    MR_Word check_hlds__simplify__common__SeenCall_6;
#line 748 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls_7;
#line 748 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs1_12;
#line 748 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs1_13;

#line 747 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 747 "common.m"
      {
#line 747 "common.m"
        check_hlds__simplify__common__SeenCall_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 747 "common.m"
        check_hlds__simplify__common__SeenCalls_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 749 "common.m"
        *check_hlds__simplify__common__PrevContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 0)));
#line 749 "common.m"
        check_hlds__simplify__common__InputArgs1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 1)));
#line 749 "common.m"
        check_hlds__simplify__common__OutputArgs1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 2)));
#line 750 "common.m"
        {
#line 750 "common.m"
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(check_hlds__simplify__common__InputArgs_8, check_hlds__simplify__common__InputArgs1_12, check_hlds__simplify__common__Eqv_9);
        }
#line 752 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 751 "common.m"
          {
#line 751 "common.m"
            *check_hlds__simplify__common__OutputArgs_10 = check_hlds__simplify__common__OutputArgs1_13;
#line 751 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 751 "common.m"
          }
#line 752 "common.m"
        else
#line 753 "common.m"
          {
#line 753 "common.m"
            MR_Word check_hlds__simplify__common__V_14_14;

#line 753 "common.m"
            {
#line 753 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(check_hlds__simplify__common__SeenCalls_7, check_hlds__simplify__common__InputArgs_8, check_hlds__simplify__common__Eqv_9, check_hlds__simplify__common__OutputArgs_10, &check_hlds__simplify__common__V_14_14);
            }
#line 753 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 753 "common.m"
              {
#line 753 "common.m"
                return check_hlds__simplify__common__succeeded = mercury__term____Unify____context_0_0(*check_hlds__simplify__common__PrevContext_11, check_hlds__simplify__common__V_14_14);
              }
#line 753 "common.m"
          }
#line 747 "common.m"
      }
#line 748 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 748 "common.m"
  }
#line 743 "common.m"
}

#line 701 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
#line 701 "common.m"
  MR_Word check_hlds__simplify__common__VarTypes_1,
#line 701 "common.m"
  MR_Word check_hlds__simplify__common__ModuleInfo_2,
#line 701 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3,
#line 701 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__4_4,
#line 701 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__5_5,
#line 701 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__6_6,
#line 701 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__7_7)
#line 701 "common.m"
{
#line 705 "common.m"
  {
#line 705 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 705 "common.m"
    if ((check_hlds__simplify__common__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "common.m"
      {
#line 705 "common.m"
        if ((check_hlds__simplify__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "common.m"
          {
#line 705 "common.m"
            *check_hlds__simplify__common__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 705 "common.m"
            *check_hlds__simplify__common__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 705 "common.m"
            *check_hlds__simplify__common__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 705 "common.m"
          }
#line 705 "common.m"
        else
#line 706 "common.m"
          {
#line 707 "common.m"
            {
#line 707 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (1)");
            }
#line 706 "common.m"
          }
#line 705 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 705 "common.m"
      }
#line 705 "common.m"
    else
#line 705 "common.m"
      {
#line 705 "common.m"
        MR_Word check_hlds__simplify__common__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 705 "common.m"
        MR_Word check_hlds__simplify__common__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));

#line 705 "common.m"
        if ((check_hlds__simplify__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 708 "common.m"
          {
#line 709 "common.m"
            {
#line 709 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (2)");
            }
#line 708 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 708 "common.m"
          }
#line 705 "common.m"
        else
#line 711 "common.m"
          {
#line 711 "common.m"
            MR_Word check_hlds__simplify__common__Arg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__4_4, (MR_Integer) 0)));
#line 711 "common.m"
            MR_Word check_hlds__simplify__common__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__4_4, (MR_Integer) 1)));
#line 711 "common.m"
            MR_Word check_hlds__simplify__common__InputArgs1_39;
#line 711 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgs1_40;
#line 711 "common.m"
            MR_Word check_hlds__simplify__common__OutputModes1_41;
#line 711 "common.m"
            MR_Word check_hlds__simplify__common__InitialInst_42;
#line 711 "common.m"
            MR_Word check_hlds__simplify__common__FinalInst_43;
#line 711 "common.m"
            MR_Word check_hlds__simplify__common__Type_44;

#line 712 "common.m"
            {
#line 712 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_1, check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__V_46_46, check_hlds__simplify__common__Args_35, &check_hlds__simplify__common__InputArgs1_39, &check_hlds__simplify__common__OutputArgs1_40, &check_hlds__simplify__common__OutputModes1_41);
            }
#line 711 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 711 "common.m"
              {
#line 714 "common.m"
                {
#line 714 "common.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__V_47_47, &check_hlds__simplify__common__InitialInst_42, &check_hlds__simplify__common__FinalInst_43);
                }
#line 715 "common.m"
                {
#line 715 "common.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_1, check_hlds__simplify__common__Arg_34, &check_hlds__simplify__common__Type_44);
                }
#line 716 "common.m"
                {
#line 716 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__simplify__common__InitialInst_42, check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__Type_44, check_hlds__simplify__common__ModuleInfo_2);
                }
#line 720 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 717 "common.m"
                  {
#line 717 "common.m"
                    {
#line 717 "common.m"
                      MR_Word base;
#line 717 "common.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "common.m"
                      *check_hlds__simplify__common__HeadVar__5_5 = base;
#line 717 "common.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Arg_34));
#line 717 "common.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs1_39));
#line 717 "common.m"
                    }
#line 718 "common.m"
                    *check_hlds__simplify__common__HeadVar__6_6 = check_hlds__simplify__common__OutputArgs1_40;
#line 719 "common.m"
                    *check_hlds__simplify__common__HeadVar__7_7 = check_hlds__simplify__common__OutputModes1_41;
#line 717 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 717 "common.m"
                  }
#line 720 "common.m"
                else
#line 723 "common.m"
                  {
#line 723 "common.m"
                    {
#line 723 "common.m"
                      check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__FinalInst_43);
                    }
#line 723 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 723 "common.m"
                      {
#line 729 "common.m"
                        {
#line 729 "common.m"
                          check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__Type_44, check_hlds__simplify__common__ModuleInfo_2);
                        }
#line 723 "common.m"
                        if (check_hlds__simplify__common__succeeded)
#line 723 "common.m"
                          {
#line 734 "common.m"
                            {
#line 734 "common.m"
                              check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__InitialInst_42);
                            }
#line 723 "common.m"
                            if (check_hlds__simplify__common__succeeded)
#line 723 "common.m"
                              {
#line 736 "common.m"
                                *check_hlds__simplify__common__HeadVar__5_5 = check_hlds__simplify__common__InputArgs1_39;
#line 737 "common.m"
                                {
#line 737 "common.m"
                                  MR_Word base;
#line 737 "common.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "common.m"
                                  *check_hlds__simplify__common__HeadVar__6_6 = base;
#line 737 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Arg_34));
#line 737 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__OutputArgs1_40));
#line 737 "common.m"
                                }
#line 738 "common.m"
                                {
#line 738 "common.m"
                                  MR_Word base;
#line 738 "common.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "common.m"
                                  *check_hlds__simplify__common__HeadVar__7_7 = base;
#line 738 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_47_47));
#line 738 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__OutputModes1_41));
#line 738 "common.m"
                                }
#line 738 "common.m"
                                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 723 "common.m"
                              }
#line 723 "common.m"
                          }
#line 723 "common.m"
                      }
#line 723 "common.m"
                  }
#line 711 "common.m"
              }
#line 711 "common.m"
          }
#line 705 "common.m"
      }
#line 705 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 705 "common.m"
  }
#line 701 "common.m"
}

#line 604 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__SeenCall_12,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_13,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_14,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__Modes_15,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 604 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__Common0_19,
#line 604 "common.m"
  MR_Word * check_hlds__simplify__common__Common_20,
#line 604 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_47,
#line 604 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_48)
#line 604 "common.m"
{
#line 611 "common.m"
  {
#line 611 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 611 "common.m"
    MR_Word check_hlds__simplify__common__Eqv0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 611 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 612 "common.m"
    MR_Word check_hlds__simplify__common__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 612 "common.m"
    MR_Word check_hlds__simplify__common__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 687 "common.m"
    MR_Word check_hlds__simplify__common__SeenCallsList0_24;
#line 614 "common.m"
    MR_Box check_hlds__simplify__common__conv0_SeenCallsList0_24;

#line 614 "common.m"
    {
#line 614 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], check_hlds__simplify__common__SeenCalls0_23, ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), &check_hlds__simplify__common__conv0_SeenCallsList0_24);
    }
#line 614 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 614 "common.m"
      {
#line 614 "common.m"
        check_hlds__simplify__common__SeenCallsList0_24 = ((MR_Word) check_hlds__simplify__common__conv0_SeenCallsList0_24);
#line 614 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 614 "common.m"
      }
#line 687 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 679 "common.m"
      {
#line 679 "common.m"
        MR_Word check_hlds__simplify__common__OutputArgs2_25;
#line 679 "common.m"
        MR_Word check_hlds__simplify__common__PrevContext_26;

#line 616 "common.m"
        {
#line 616 "common.m"
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(check_hlds__simplify__common__SeenCallsList0_24, check_hlds__simplify__common__InputArgs_13, check_hlds__simplify__common__Eqv0_22, &check_hlds__simplify__common__OutputArgs2_25, &check_hlds__simplify__common__PrevContext_26);
        }
#line 679 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 619 "common.m"
          {
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__ModuleInfo_27;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__UniModes_28;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__Goals_29;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__VarTypes_32;
#line 619 "common.m"
            MR_Integer check_hlds__simplify__common__Cost_43;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__Detism0_44;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_50_50;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_96_96;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__V_97_97;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_98_98;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_99_99;
#line 629 "common.m"
            MR_Word check_hlds__simplify__common__OnlyGoalExpr_30;
#line 627 "common.m"
            MR_Word check_hlds__simplify__common__V_51_51;
#line 627 "common.m"
            MR_Word check_hlds__simplify__common__V_52_52;
#line 627 "common.m"
            MR_Word check_hlds__simplify__common___OnlyGoalInfo_31;
#line 634 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgTypes1_33;
#line 634 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgTypes2_34;

#line 619 "common.m"
            {
#line 619 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_47, &check_hlds__simplify__common__ModuleInfo_27);
            }
#line 620 "common.m"
            {
#line 620 "common.m"
              check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__Modes_15, check_hlds__simplify__common__Modes_15, &check_hlds__simplify__common__UniModes_28);
            }
#line 621 "common.m"
            {
#line 621 "common.m"
              check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__OutputArgs_14, check_hlds__simplify__common__OutputArgs2_25, check_hlds__simplify__common__UniModes_28, &check_hlds__simplify__common__Goals_29, check_hlds__simplify__common__Common0_19, check_hlds__simplify__common__Common_20, check_hlds__simplify__common__STATE_VARIABLE_Info_0_47, &check_hlds__simplify__common__STATE_VARIABLE_Info_50_50);
            }
#line 627 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__Goals_29)) == (MR_mktag((MR_Integer) 1)));
#line 627 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 627 "common.m"
              {
#line 627 "common.m"
                check_hlds__simplify__common__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Goals_29, (MR_Integer) 0)));
#line 627 "common.m"
                check_hlds__simplify__common__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Goals_29, (MR_Integer) 1)));
#line 627 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 627 "common.m"
                  {
#line 627 "common.m"
                    check_hlds__simplify__common__OnlyGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_51_51, (MR_Integer) 0)));
#line 627 "common.m"
                    check_hlds__simplify__common___OnlyGoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_51_51, (MR_Integer) 1)));
#line 627 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 627 "common.m"
                  }
#line 627 "common.m"
              }
#line 629 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 628 "common.m"
              *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__OnlyGoalExpr_30;
#line 629 "common.m"
            else
#line 630 "common.m"
              {
#line 630 "common.m"
                {
#line 630 "common.m"
                  MR_Word base;
#line 630 "common.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 630 "common.m"
                  *check_hlds__simplify__common__GoalExpr_18 = base;
#line 630 "common.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 630 "common.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 630 "common.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__Goals_29));
#line 630 "common.m"
                }
#line 630 "common.m"
              }
#line 632 "common.m"
            {
#line 632 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_50_50, &check_hlds__simplify__common__VarTypes_32);
            }
#line 634 "common.m"
            {
#line 634 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_50_50);
            }
#line 634 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 634 "common.m"
              {
#line 638 "common.m"
                {
#line 638 "common.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__simplify__common__VarTypes_32, check_hlds__simplify__common__OutputArgs_14, &check_hlds__simplify__common__OutputArgTypes1_33);
                }
#line 639 "common.m"
                {
#line 639 "common.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__simplify__common__VarTypes_32, check_hlds__simplify__common__OutputArgs2_25, &check_hlds__simplify__common__OutputArgTypes2_34);
                }
#line 640 "common.m"
                {
#line 640 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__OutputArgTypes1_33, check_hlds__simplify__common__OutputArgTypes2_34);
                }
#line 634 "common.m"
              }
#line 659 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 642 "common.m"
              {
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__TypeCtorInfo_124_124;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__Context_35;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__CallPieces_36;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__CurPieces_37;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__PrevPieces_38;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__Msg_40;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__PrevMsg_41;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__Spec_42;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_54_54;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_57_57;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_61_61;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_72_72;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_73_73;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_76_76;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_77_77;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_80_80;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_83_83;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_84_84;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_87_87;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_88_88;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_93_93;
#line 642 "common.m"
                MR_Word check_hlds__simplify__common__V_94_94;

#line 642 "common.m"
                {
#line 642 "common.m"
                  check_hlds__simplify__common__Context_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
                }
#line 643 "common.m"
                {
#line 643 "common.m"
                  check_hlds__simplify__common__CallPieces_36 = check_hlds__det_report__det_report_seen_call_id_2_f_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__SeenCall_12);
                }
#line 4549 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_124_124 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 644 "common.m"
                {
#line 644 "common.m"
                  check_hlds__simplify__common__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[6])));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_54_54, 1) = ((MR_Box) (check_hlds__simplify__common__CallPieces_36));
#line 644 "common.m"
                }
#line 645 "common.m"
                check_hlds__simplify__common__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_1[8]);
#line 645 "common.m"
                {
#line 645 "common.m"
                  check_hlds__simplify__common__CurPieces_37 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__common__TypeCtorInfo_124_124, check_hlds__simplify__common__V_54_54, check_hlds__simplify__common__V_57_57);
                }
#line 646 "common.m"
                {
#line 646 "common.m"
                  check_hlds__simplify__common__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[9])));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_61_61, 1) = ((MR_Box) (check_hlds__simplify__common__CallPieces_36));
#line 646 "common.m"
                }
#line 647 "common.m"
                {
#line 647 "common.m"
                  check_hlds__simplify__common__PrevPieces_38 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__common__TypeCtorInfo_124_124, check_hlds__simplify__common__V_61_61, check_hlds__simplify__common__V_57_57);
                }
#line 652 "common.m"
                {
#line 652 "common.m"
                  check_hlds__simplify__common__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 652 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__common__CurPieces_37));
#line 652 "common.m"
                }
#line 652 "common.m"
                {
#line 652 "common.m"
                  check_hlds__simplify__common__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__common__V_77_77));
#line 652 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "common.m"
                }
#line 651 "common.m"
                {
#line 651 "common.m"
                  check_hlds__simplify__common__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_73_73, 0) = ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 651 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_73_73, 1) = ((MR_Box) (check_hlds__simplify__common__V_76_76));
#line 651 "common.m"
                }
#line 652 "common.m"
                {
#line 652 "common.m"
                  check_hlds__simplify__common__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_72_72, 0) = ((MR_Box) (check_hlds__simplify__common__V_73_73));
#line 652 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "common.m"
                }
#line 650 "common.m"
                {
#line 650 "common.m"
                  check_hlds__simplify__common__Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 650 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Msg_40, 0) = ((MR_Box) (check_hlds__simplify__common__Context_35));
#line 650 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Msg_40, 1) = ((MR_Box) (check_hlds__simplify__common__V_72_72));
#line 650 "common.m"
                }
#line 653 "common.m"
                {
#line 653 "common.m"
                  check_hlds__simplify__common__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 653 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_80_80, 0) = ((MR_Box) (check_hlds__simplify__common__PrevContext_26));
#line 653 "common.m"
                }
#line 655 "common.m"
                {
#line 655 "common.m"
                  check_hlds__simplify__common__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 655 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_88_88, 0) = ((MR_Box) (check_hlds__simplify__common__PrevPieces_38));
#line 655 "common.m"
                }
#line 655 "common.m"
                {
#line 655 "common.m"
                  check_hlds__simplify__common__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_87_87, 0) = ((MR_Box) (check_hlds__simplify__common__V_88_88));
#line 655 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "common.m"
                }
#line 654 "common.m"
                {
#line 654 "common.m"
                  check_hlds__simplify__common__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_84_84, 0) = ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 654 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_84_84, 1) = ((MR_Box) (check_hlds__simplify__common__V_87_87));
#line 654 "common.m"
                }
#line 655 "common.m"
                {
#line 655 "common.m"
                  check_hlds__simplify__common__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_83_83, 0) = ((MR_Box) (check_hlds__simplify__common__V_84_84));
#line 655 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "common.m"
                }
#line 653 "common.m"
                {
#line 653 "common.m"
                  check_hlds__simplify__common__PrevMsg_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 653 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_41, 0) = ((MR_Box) (check_hlds__simplify__common__V_80_80));
#line 653 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 653 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_41, 2) = ((MR_Box) ((MR_Integer) 0));
#line 653 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_41, 3) = ((MR_Box) (check_hlds__simplify__common__V_83_83));
#line 653 "common.m"
                }
#line 657 "common.m"
                {
#line 657 "common.m"
                  check_hlds__simplify__common__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_94_94, 0) = ((MR_Box) (check_hlds__simplify__common__PrevMsg_41));
#line 657 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "common.m"
                }
#line 657 "common.m"
                {
#line 657 "common.m"
                  check_hlds__simplify__common__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_93_93, 0) = ((MR_Box) (check_hlds__simplify__common__Msg_40));
#line 657 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_93_93, 1) = ((MR_Box) (check_hlds__simplify__common__V_94_94));
#line 657 "common.m"
                }
#line 656 "common.m"
                {
#line 656 "common.m"
                  check_hlds__simplify__common__Spec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 656 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_3[0])));
#line 656 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__common_scalar_common_5[0])));
#line 656 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_42, 2) = ((MR_Box) (check_hlds__simplify__common__V_93_93));
#line 656 "common.m"
                }
#line 658 "common.m"
                {
#line 658 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_add_error_spec_3_p_0(check_hlds__simplify__common__Spec_42, check_hlds__simplify__common__STATE_VARIABLE_Info_50_50, &check_hlds__simplify__common__STATE_VARIABLE_Info_96_96);
                }
#line 642 "common.m"
              }
#line 659 "common.m"
            else
#line 658 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Info_96_96 = check_hlds__simplify__common__STATE_VARIABLE_Info_50_50;
#line 662 "common.m"
            {
#line 662 "common.m"
              check_hlds__simplify__common__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 662 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_97_97, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_17));
#line 662 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_97_97, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo_16));
#line 662 "common.m"
            }
#line 662 "common.m"
            {
#line 662 "common.m"
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_97_97, &check_hlds__simplify__common__Cost_43);
            }
#line 663 "common.m"
            {
#line 663 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_43, check_hlds__simplify__common__STATE_VARIABLE_Info_96_96, &check_hlds__simplify__common__STATE_VARIABLE_Info_98_98);
            }
#line 664 "common.m"
            {
#line 664 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_98_98, &check_hlds__simplify__common__STATE_VARIABLE_Info_99_99);
            }
#line 665 "common.m"
            {
#line 665 "common.m"
              check_hlds__simplify__common__Detism0_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__common__GoalInfo_16);
            }
#line 668 "common.m"
            if ((check_hlds__simplify__common__Detism0_44 == (MR_Integer) 0))
#line 667 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_48 = check_hlds__simplify__common__STATE_VARIABLE_Info_99_99;
#line 668 "common.m"
            else
#line 677 "common.m"
              {
#line 677 "common.m"
                check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_99_99, check_hlds__simplify__common__STATE_VARIABLE_Info_48);
#line 677 "common.m"
                return;
              }
#line 619 "common.m"
          }
#line 679 "common.m"
        else
#line 680 "common.m"
          {
#line 680 "common.m"
            MR_Word check_hlds__simplify__common__ThisCall_45;
#line 680 "common.m"
            MR_Word check_hlds__simplify__common__SeenCalls_46;
#line 680 "common.m"
            MR_Word check_hlds__simplify__common__V_101_101;
#line 680 "common.m"
            MR_Word check_hlds__simplify__common__Context_104;
#line 684 "common.m"
            MR_Word check_hlds__simplify__common__V_114_114;
#line 684 "common.m"
            MR_Word check_hlds__simplify__common__V_115_115;
#line 684 "common.m"
            MR_Word check_hlds__simplify__common__V_116_116;
#line 684 "common.m"
            MR_Word check_hlds__simplify__common__V_117_117;

#line 680 "common.m"
            {
#line 680 "common.m"
              check_hlds__simplify__common__Context_104 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
            }
#line 681 "common.m"
            {
#line 681 "common.m"
              check_hlds__simplify__common__ThisCall_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 681 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_45, 0) = ((MR_Box) (check_hlds__simplify__common__Context_104));
#line 681 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_45, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_13));
#line 681 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_45, 2) = ((MR_Box) (check_hlds__simplify__common__OutputArgs_14));
#line 681 "common.m"
            }
#line 682 "common.m"
            {
#line 682 "common.m"
              check_hlds__simplify__common__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_101_101, 0) = ((MR_Box) (check_hlds__simplify__common__ThisCall_45));
#line 682 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_101_101, 1) = ((MR_Box) (check_hlds__simplify__common__SeenCallsList0_24));
#line 682 "common.m"
            }
#line 682 "common.m"
            {
#line 682 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), ((MR_Box) (check_hlds__simplify__common__V_101_101)), check_hlds__simplify__common__SeenCalls0_23, &check_hlds__simplify__common__SeenCalls_46);
            }
#line 684 "common.m"
            check_hlds__simplify__common__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 684 "common.m"
            check_hlds__simplify__common__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 684 "common.m"
            check_hlds__simplify__common__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 684 "common.m"
            check_hlds__simplify__common__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 684 "common.m"
            {
#line 684 "common.m"
              MR_Word base;
#line 684 "common.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 684 "common.m"
              *check_hlds__simplify__common__Common_20 = base;
#line 684 "common.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_114_114));
#line 684 "common.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_115_115));
#line 684 "common.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_116_116));
#line 684 "common.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls_46));
#line 684 "common.m"
            }
#line 685 "common.m"
            *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 685 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_48 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_47;
#line 680 "common.m"
          }
#line 679 "common.m"
      }
#line 687 "common.m"
    else
#line 688 "common.m"
      {
#line 688 "common.m"
        MR_Word check_hlds__simplify__common__V_102_102;
#line 688 "common.m"
        MR_Word check_hlds__simplify__common__Context_105;
#line 688 "common.m"
        MR_Word check_hlds__simplify__common__ThisCall_106;
#line 688 "common.m"
        MR_Word check_hlds__simplify__common__SeenCalls_107;
#line 691 "common.m"
        MR_Word check_hlds__simplify__common__V_118_118;
#line 691 "common.m"
        MR_Word check_hlds__simplify__common__V_119_119;
#line 691 "common.m"
        MR_Word check_hlds__simplify__common__V_120_120;
#line 691 "common.m"
        MR_Word check_hlds__simplify__common__V_121_121;

#line 688 "common.m"
        {
#line 688 "common.m"
          check_hlds__simplify__common__Context_105 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
        }
#line 689 "common.m"
        {
#line 689 "common.m"
          check_hlds__simplify__common__ThisCall_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 689 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_106, 0) = ((MR_Box) (check_hlds__simplify__common__Context_105));
#line 689 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_106, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_13));
#line 689 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_106, 2) = ((MR_Box) (check_hlds__simplify__common__OutputArgs_14));
#line 689 "common.m"
        }
#line 690 "common.m"
        {
#line 690 "common.m"
          check_hlds__simplify__common__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_102_102, 0) = ((MR_Box) (check_hlds__simplify__common__ThisCall_106));
#line 690 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "common.m"
        }
#line 690 "common.m"
        {
#line 690 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), ((MR_Box) (check_hlds__simplify__common__V_102_102)), check_hlds__simplify__common__SeenCalls0_23, &check_hlds__simplify__common__SeenCalls_107);
        }
#line 691 "common.m"
        check_hlds__simplify__common__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 691 "common.m"
        check_hlds__simplify__common__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 691 "common.m"
        check_hlds__simplify__common__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 691 "common.m"
        check_hlds__simplify__common__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 691 "common.m"
        {
#line 691 "common.m"
          MR_Word base;
#line 691 "common.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 691 "common.m"
          *check_hlds__simplify__common__Common_20 = base;
#line 691 "common.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_118_118));
#line 691 "common.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_119_119));
#line 691 "common.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_120_120));
#line 691 "common.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls_107));
#line 691 "common.m"
        }
#line 692 "common.m"
        *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 692 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_48 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_47;
#line 688 "common.m"
      }
#line 611 "common.m"
  }
#line 604 "common.m"
}

#line 530 "common.m"
static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
#line 530 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_6,
#line 530 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_7,
#line 530 "common.m"
  MR_Word check_hlds__simplify__common__Struct_8,
#line 530 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14,
#line 530 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_StructMap_15)
#line 530 "common.m"
{
#line 542 "common.m"
  {
#line 542 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 542 "common.m"
    MR_Word check_hlds__simplify__common__ConsIdMap0_10;
#line 534 "common.m"
    MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_10;

#line 534 "common.m"
    {
#line 534 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), &check_hlds__simplify__common__conv0_ConsIdMap0_10);
    }
#line 534 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 534 "common.m"
      {
#line 534 "common.m"
        check_hlds__simplify__common__ConsIdMap0_10 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_10);
#line 534 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 534 "common.m"
      }
#line 542 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 540 "common.m"
      {
#line 540 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_13;
#line 538 "common.m"
        MR_Word check_hlds__simplify__common__Structs0_11;
#line 535 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs0_11;

#line 535 "common.m"
        {
#line 535 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__ConsIdMap0_10, ((MR_Box) (check_hlds__simplify__common__ConsId_7)), &check_hlds__simplify__common__conv1_Structs0_11);
        }
#line 535 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 535 "common.m"
          {
#line 535 "common.m"
            check_hlds__simplify__common__Structs0_11 = ((MR_Word) check_hlds__simplify__common__conv1_Structs0_11);
#line 535 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 535 "common.m"
          }
#line 538 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 536 "common.m"
          {
#line 536 "common.m"
            MR_Word check_hlds__simplify__common__Structs_12;

#line 536 "common.m"
            {
#line 536 "common.m"
              check_hlds__simplify__common__Structs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_12, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 536 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_12, 1) = ((MR_Box) (check_hlds__simplify__common__Structs0_11));
#line 536 "common.m"
            }
#line 537 "common.m"
            {
#line 537 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__Structs_12)), check_hlds__simplify__common__ConsIdMap0_10, &check_hlds__simplify__common__ConsIdMap_13);
            }
#line 536 "common.m"
          }
#line 538 "common.m"
        else
#line 539 "common.m"
          {
#line 539 "common.m"
            MR_Word check_hlds__simplify__common__V_16_16;

#line 539 "common.m"
            {
#line 539 "common.m"
              check_hlds__simplify__common__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_16_16, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 539 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "common.m"
            }
#line 539 "common.m"
            {
#line 539 "common.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__V_16_16)), check_hlds__simplify__common__ConsIdMap0_10, &check_hlds__simplify__common__ConsIdMap_13);
            }
#line 539 "common.m"
          }
#line 541 "common.m"
        {
#line 541 "common.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_13)), check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);
#line 541 "common.m"
          return;
        }
#line 540 "common.m"
      }
#line 542 "common.m"
    else
#line 543 "common.m"
      {
#line 543 "common.m"
        MR_Word check_hlds__simplify__common__V_19_19;
#line 543 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_22;

#line 543 "common.m"
        {
#line 543 "common.m"
          check_hlds__simplify__common__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_19_19, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 543 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "common.m"
        }
#line 543 "common.m"
        {
#line 543 "common.m"
          check_hlds__simplify__common__ConsIdMap_22 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__V_19_19)));
        }
#line 544 "common.m"
        {
#line 544 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_22)), check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);
#line 544 "common.m"
          return;
        }
#line 543 "common.m"
      }
#line 542 "common.m"
  }
#line 530 "common.m"
}

#line 516 "common.m"
static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
#line 516 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_7,
#line 516 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_8,
#line 516 "common.m"
  MR_Word check_hlds__simplify__common__Struct_9,
#line 516 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_10,
#line 516 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_16,
#line 516 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_17)
#line 516 "common.m"
{
#line 519 "common.m"
  {
#line 519 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 519 "common.m"
    MR_Word check_hlds__simplify__common__AllStructMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 1)));
#line 519 "common.m"
    MR_Word check_hlds__simplify__common__SinceCallStructMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 2)));
#line 519 "common.m"
    MR_Word check_hlds__simplify__common__AllStructMap_14;
#line 519 "common.m"
    MR_Word check_hlds__simplify__common__SinceCallStructMap_15;
#line 519 "common.m"
    MR_Word check_hlds__simplify__common__V_30_30;
#line 519 "common.m"
    MR_Word check_hlds__simplify__common__V_31_31;
#line 519 "common.m"
    MR_Word check_hlds__simplify__common__V_34_34;
#line 520 "common.m"
    MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 0)));
#line 520 "common.m"
    MR_Word check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 3)));
#line 542 "common.m"
    MR_Word check_hlds__simplify__common__ConsIdMap0_45;
#line 534 "common.m"
    MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_45;
#line 526 "common.m"
    MR_Word check_hlds__simplify__common__V_27_27;
#line 526 "common.m"
    MR_Word check_hlds__simplify__common__V_28_28;
#line 526 "common.m"
    MR_Word check_hlds__simplify__common__V_29_29;

#line 534 "common.m"
    {
#line 534 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__AllStructMap0_12, ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), &check_hlds__simplify__common__conv0_ConsIdMap0_45);
    }
#line 534 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 534 "common.m"
      {
#line 534 "common.m"
        check_hlds__simplify__common__ConsIdMap0_45 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_45);
#line 534 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 534 "common.m"
      }
#line 542 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 540 "common.m"
      {
#line 540 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_48;
#line 538 "common.m"
        MR_Word check_hlds__simplify__common__Structs0_46;
#line 535 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs0_46;

#line 535 "common.m"
        {
#line 535 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__ConsIdMap0_45, ((MR_Box) (check_hlds__simplify__common__ConsId_8)), &check_hlds__simplify__common__conv1_Structs0_46);
        }
#line 535 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 535 "common.m"
          {
#line 535 "common.m"
            check_hlds__simplify__common__Structs0_46 = ((MR_Word) check_hlds__simplify__common__conv1_Structs0_46);
#line 535 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 535 "common.m"
          }
#line 538 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 536 "common.m"
          {
#line 536 "common.m"
            MR_Word check_hlds__simplify__common__Structs_47;

#line 536 "common.m"
            {
#line 536 "common.m"
              check_hlds__simplify__common__Structs_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_47, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 536 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_47, 1) = ((MR_Box) (check_hlds__simplify__common__Structs0_46));
#line 536 "common.m"
            }
#line 537 "common.m"
            {
#line 537 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__Structs_47)), check_hlds__simplify__common__ConsIdMap0_45, &check_hlds__simplify__common__ConsIdMap_48);
            }
#line 536 "common.m"
          }
#line 538 "common.m"
        else
#line 539 "common.m"
          {
#line 539 "common.m"
            MR_Word check_hlds__simplify__common__V_49_49;

#line 539 "common.m"
            {
#line 539 "common.m"
              check_hlds__simplify__common__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 539 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "common.m"
            }
#line 539 "common.m"
            {
#line 539 "common.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__V_49_49)), check_hlds__simplify__common__ConsIdMap0_45, &check_hlds__simplify__common__ConsIdMap_48);
            }
#line 539 "common.m"
          }
#line 541 "common.m"
        {
#line 541 "common.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_48)), check_hlds__simplify__common__AllStructMap0_12, &check_hlds__simplify__common__AllStructMap_14);
        }
#line 540 "common.m"
      }
#line 542 "common.m"
    else
#line 543 "common.m"
      {
#line 543 "common.m"
        MR_Word check_hlds__simplify__common__V_52_52;
#line 543 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_55;

#line 543 "common.m"
        {
#line 543 "common.m"
          check_hlds__simplify__common__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 543 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "common.m"
        }
#line 543 "common.m"
        {
#line 543 "common.m"
          check_hlds__simplify__common__ConsIdMap_55 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__V_52_52)));
        }
#line 544 "common.m"
        {
#line 544 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_55)), check_hlds__simplify__common__AllStructMap0_12, &check_hlds__simplify__common__AllStructMap_14);
        }
#line 543 "common.m"
      }
#line 524 "common.m"
    {
#line 524 "common.m"
      check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(check_hlds__simplify__common__TypeCtor_7, check_hlds__simplify__common__ConsId_8, check_hlds__simplify__common__Struct_9, check_hlds__simplify__common__SinceCallStructMap0_13, &check_hlds__simplify__common__SinceCallStructMap_15);
    }
#line 526 "common.m"
    check_hlds__simplify__common__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 0)));
#line 526 "common.m"
    check_hlds__simplify__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 1)));
#line 526 "common.m"
    check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 2)));
#line 526 "common.m"
    check_hlds__simplify__common__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 3)));
#line 527 "common.m"
    check_hlds__simplify__common__V_31_31 = check_hlds__simplify__common__VarEqv_10;
#line 527 "common.m"
    check_hlds__simplify__common__V_34_34 = check_hlds__simplify__common__V_30_30;
#line 528 "common.m"
    {
#line 528 "common.m"
      MR_Word base;
#line 528 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 528 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Common_17 = base;
#line 528 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_31_31));
#line 528 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__AllStructMap_14));
#line 528 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__SinceCallStructMap_15));
#line 528 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_34_34));
#line 528 "common.m"
    }
#line 519 "common.m"
  }
#line 516 "common.m"
}

#line 498 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
#line 498 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 498 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 498 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 498 "common.m"
{
#line 501 "common.m"
  while (MR_TRUE)
#line 501 "common.m"
    {
#line 501 "common.m"
      /* tailcall optimized into a loop */
#line 501 "common.m"
      {
#line 501 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 501 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 501 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "common.m"
        else
#line 502 "common.m"
          {
#line 502 "common.m"
            MR_Word check_hlds__simplify__common__TypeInfo_8_14;
#line 502 "common.m"
            MR_Integer check_hlds__simplify__common__Id_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 502 "common.m"
            MR_Word check_hlds__simplify__common__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 502 "common.m"
            MR_Word check_hlds__simplify__common__Var_7;
#line 502 "common.m"
            MR_Word check_hlds__simplify__common__Vars_8;
#line 502 "common.m"
            MR_Integer check_hlds__simplify__common__VarId_13;

#line 502 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 502 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 502 "common.m"
              {
#line 502 "common.m"
                check_hlds__simplify__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 502 "common.m"
                check_hlds__simplify__common__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 5386 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_8_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 511 "common.m"
                {
#line 511 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__Var_7)), &check_hlds__simplify__common__VarId_13);
                }
#line 502 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 502 "common.m"
                  {
#line 512 "common.m"
                    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_5 == check_hlds__simplify__common__VarId_13);
#line 502 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 504 "common.m"
                      {
#line 504 "common.m"
                        /* direct tailcall eliminated */
#line 504 "common.m"
                        {
#line 504 "common.m"
                          MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Ids_6;
#line 504 "common.m"
                          MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Vars_8;

#line 504 "common.m"
                          check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 504 "common.m"
                          check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 504 "common.m"
                        }
#line 504 "common.m"
                        continue;
#line 504 "common.m"
                      }
#line 502 "common.m"
                  }
#line 502 "common.m"
              }
#line 502 "common.m"
          }
#line 501 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 501 "common.m"
      }
#line 501 "common.m"
      break;
#line 501 "common.m"
    }
#line 498 "common.m"
}

#line 487 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
#line 487 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 487 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 487 "common.m"
  MR_Integer check_hlds__simplify__common__VarId_8,
#line 487 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9)
#line 487 "common.m"
{
#line 490 "common.m"
  while (MR_TRUE)
#line 490 "common.m"
    {
#line 490 "common.m"
      /* tailcall optimized into a loop */
#line 490 "common.m"
      {
#line 490 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 490 "common.m"
        MR_Word check_hlds__simplify__common__Struct_5;
#line 490 "common.m"
        MR_Word check_hlds__simplify__common__Structs_6;
#line 490 "common.m"
        MR_Word check_hlds__simplify__common__Var_10;
#line 491 "common.m"
        MR_Word check_hlds__simplify__common___Vars_11;
#line 510 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_8_16;
#line 510 "common.m"
        MR_Integer check_hlds__simplify__common__VarId_15;

#line 490 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 490 "common.m"
          {
#line 490 "common.m"
            check_hlds__simplify__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 490 "common.m"
            check_hlds__simplify__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 491 "common.m"
            check_hlds__simplify__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 0)));
#line 491 "common.m"
            check_hlds__simplify__common___Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 1)));
#line 5487 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_8_16 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 511 "common.m"
            {
#line 511 "common.m"
              check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_16, check_hlds__simplify__common__VarEqv_7, ((MR_Box) (check_hlds__simplify__common__Var_10)), &check_hlds__simplify__common__VarId_15);
            }
#line 510 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 512 "common.m"
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__VarId_8 == check_hlds__simplify__common__VarId_15);
#line 494 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 493 "common.m"
              {
#line 493 "common.m"
                *check_hlds__simplify__common__Match_9 = check_hlds__simplify__common__Struct_5;
#line 493 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 493 "common.m"
              }
#line 494 "common.m"
            else
#line 495 "common.m"
              {
#line 495 "common.m"
                /* direct tailcall eliminated */
#line 495 "common.m"
                {
#line 495 "common.m"
                  MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Structs_6;

#line 495 "common.m"
                  check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 495 "common.m"
                }
#line 495 "common.m"
                continue;
#line 495 "common.m"
              }
#line 490 "common.m"
          }
#line 490 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 490 "common.m"
      }
#line 490 "common.m"
      break;
#line 490 "common.m"
    }
#line 487 "common.m"
}

#line 476 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
#line 476 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 476 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 476 "common.m"
  MR_Word check_hlds__simplify__common__ArgVarIds_8,
#line 476 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9)
#line 476 "common.m"
{
#line 479 "common.m"
  while (MR_TRUE)
#line 479 "common.m"
    {
#line 479 "common.m"
      /* tailcall optimized into a loop */
#line 479 "common.m"
      {
#line 479 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 479 "common.m"
        MR_Word check_hlds__simplify__common__Struct_5;
#line 479 "common.m"
        MR_Word check_hlds__simplify__common__Structs_6;
#line 479 "common.m"
        MR_Word check_hlds__simplify__common__Vars_11;
#line 480 "common.m"
        MR_Word check_hlds__simplify__common___Var_10;

#line 479 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 479 "common.m"
          {
#line 479 "common.m"
            check_hlds__simplify__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 479 "common.m"
            check_hlds__simplify__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 480 "common.m"
            check_hlds__simplify__common___Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 0)));
#line 480 "common.m"
            check_hlds__simplify__common__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 1)));
#line 481 "common.m"
            {
#line 481 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__ids_vars_match_3_p_0(check_hlds__simplify__common__ArgVarIds_8, check_hlds__simplify__common__Vars_11, check_hlds__simplify__common__VarEqv_7);
            }
#line 483 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 482 "common.m"
              {
#line 482 "common.m"
                *check_hlds__simplify__common__Match_9 = check_hlds__simplify__common__Struct_5;
#line 482 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 482 "common.m"
              }
#line 483 "common.m"
            else
#line 484 "common.m"
              {
#line 484 "common.m"
                /* direct tailcall eliminated */
#line 484 "common.m"
                {
#line 484 "common.m"
                  MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Structs_6;

#line 484 "common.m"
                  check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 484 "common.m"
                }
#line 484 "common.m"
                continue;
#line 484 "common.m"
              }
#line 479 "common.m"
          }
#line 479 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 479 "common.m"
      }
#line 479 "common.m"
      break;
#line 479 "common.m"
    }
#line 476 "common.m"
}

#line 405 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__Var_15,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_16,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_17,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_18,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__CanFail_19,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__Mode_20,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_21,
#line 405 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_22,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_23,
#line 405 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_24,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 405 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 405 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 405 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 405 "common.m"
{
#line 413 "common.m"
  {
#line 413 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 413 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_27;
#line 420 "common.m"
    MR_Word check_hlds__simplify__common__LVarMode_28;
#line 420 "common.m"
    MR_Word check_hlds__simplify__common__Inst0_30;
#line 420 "common.m"
    MR_Word check_hlds__simplify__common__V_29_29;
#line 421 "common.m"
    MR_Word check_hlds__simplify__common__V_31_31;

#line 414 "common.m"
    {
#line 414 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_27);
    }
#line 463 "common.m"
    *check_hlds__simplify__common__GoalInfo_24 = check_hlds__simplify__common__GoalInfo0_23;
#line 420 "common.m"
    check_hlds__simplify__common__LVarMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_20, (MR_Integer) 0)));
#line 420 "common.m"
    check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_20, (MR_Integer) 1)));
#line 421 "common.m"
    {
#line 421 "common.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__LVarMode_28, &check_hlds__simplify__common__Inst0_30, &check_hlds__simplify__common__V_31_31);
    }
#line 422 "common.m"
    {
#line 422 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__Inst0_30);
    }
#line 422 "common.m"
    check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 425 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 424 "common.m"
      {
#line 424 "common.m"
        *check_hlds__simplify__common__GoalExpr_22 = check_hlds__simplify__common__GoalExpr0_21;
#line 424 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 424 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_46;
#line 424 "common.m"
      }
#line 425 "common.m"
    else
#line 426 "common.m"
      {
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_71_71;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtor_32;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_33;
#line 426 "common.m"
        MR_Integer check_hlds__simplify__common__VarId_34;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv1_35;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__SinceCallStructMap0_36;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__VarTypes_79;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__Type_80;
#line 427 "common.m"
        MR_Word check_hlds__simplify__common__V_61_61;
#line 427 "common.m"
        MR_Word check_hlds__simplify__common__V_62_62;
#line 427 "common.m"
        MR_Word check_hlds__simplify__common__V_63_63;
#line 429 "common.m"
        MR_Word check_hlds__simplify__common__V_64_64;
#line 429 "common.m"
        MR_Word check_hlds__simplify__common__V_65_65;
#line 429 "common.m"
        MR_Word check_hlds__simplify__common__V_66_66;
#line 457 "common.m"
        MR_Word check_hlds__simplify__common__OldStruct_39;
#line 434 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_72_72;
#line 434 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_73_73;
#line 434 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_74_74;
#line 434 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_75_75;
#line 434 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap0_37;
#line 434 "common.m"
        MR_Word check_hlds__simplify__common__Structs_38;
#line 435 "common.m"
        MR_Word check_hlds__simplify__common__V_51_51;
#line 437 "common.m"
        MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_37;
#line 438 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs_38;

#line 468 "common.m"
        {
#line 468 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__VarTypes_79);
        }
#line 469 "common.m"
        {
#line 469 "common.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_79, check_hlds__simplify__common__Var_15, &check_hlds__simplify__common__Type_80);
        }
#line 472 "common.m"
        {
#line 472 "common.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__common__Type_80, &check_hlds__simplify__common__TypeCtor_32);
        }
#line 427 "common.m"
        check_hlds__simplify__common__VarEqv0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 427 "common.m"
        check_hlds__simplify__common__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 427 "common.m"
        check_hlds__simplify__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 427 "common.m"
        check_hlds__simplify__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 5790 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__TypeInfo_71_71 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 428 "common.m"
        {
#line 428 "common.m"
          mercury__eqvclass__ensure_element_partition_id_4_p_0(check_hlds__simplify__common__TypeInfo_71_71, ((MR_Box) (check_hlds__simplify__common__Var_15)), &check_hlds__simplify__common__VarId_34, check_hlds__simplify__common__VarEqv0_33, &check_hlds__simplify__common__VarEqv1_35);
        }
#line 429 "common.m"
        check_hlds__simplify__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 429 "common.m"
        check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 429 "common.m"
        check_hlds__simplify__common__SinceCallStructMap0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 429 "common.m"
        check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 434 "common.m"
        {
#line 434 "common.m"
          check_hlds__simplify__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__simplify__common__GoalInfo_24, (MR_Integer) 3);
        }
#line 434 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 434 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 434 "common.m"
          {
#line 435 "common.m"
            check_hlds__simplify__common__V_51_51 = (MR_Integer) 4;
#line 435 "common.m"
            {
#line 435 "common.m"
              check_hlds__simplify__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__simplify__common__GoalInfo_24, check_hlds__simplify__common__V_51_51);
            }
#line 435 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 434 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 434 "common.m"
              {
#line 5829 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 5831 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_73_73 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[0];
#line 437 "common.m"
                {
#line 437 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_72_72, check_hlds__simplify__common__TypeInfo_73_73, check_hlds__simplify__common__SinceCallStructMap0_36, ((MR_Box) (check_hlds__simplify__common__TypeCtor_32)), &check_hlds__simplify__common__conv0_ConsIdMap0_37);
                }
#line 437 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 437 "common.m"
                  {
#line 437 "common.m"
                    check_hlds__simplify__common__ConsIdMap0_37 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_37);
#line 437 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 437 "common.m"
                  }
#line 434 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 434 "common.m"
                  {
#line 5852 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 5854 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeInfo_75_75 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[1];
#line 438 "common.m"
                    {
#line 438 "common.m"
                      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_74_74, check_hlds__simplify__common__TypeInfo_75_75, check_hlds__simplify__common__ConsIdMap0_37, ((MR_Box) (check_hlds__simplify__common__ConsId_16)), &check_hlds__simplify__common__conv1_Structs_38);
                    }
#line 438 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 438 "common.m"
                      {
#line 438 "common.m"
                        check_hlds__simplify__common__Structs_38 = ((MR_Word) check_hlds__simplify__common__conv1_Structs_38);
#line 438 "common.m"
                        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 438 "common.m"
                      }
#line 434 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 439 "common.m"
                      {
#line 439 "common.m"
                        check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(check_hlds__simplify__common__Structs_38, check_hlds__simplify__common__VarEqv1_35, check_hlds__simplify__common__VarId_34, &check_hlds__simplify__common__OldStruct_39);
                      }
#line 434 "common.m"
                  }
#line 434 "common.m"
              }
#line 434 "common.m"
          }
#line 457 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 441 "common.m"
          {
#line 441 "common.m"
            MR_Word check_hlds__simplify__common__OldArgVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_39, (MR_Integer) 1)));
#line 441 "common.m"
            MR_Word check_hlds__simplify__common__VarEqv_42;
#line 441 "common.m"
            MR_Word check_hlds__simplify__common__Goals_43;
#line 441 "common.m"
            MR_Integer check_hlds__simplify__common__Cost_44;
#line 441 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_52_52;
#line 441 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_54_54;
#line 441 "common.m"
            MR_Word check_hlds__simplify__common__V_56_56;
#line 441 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_57_57;
#line 441 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 441 "common.m"
            MR_Word check_hlds__simplify__common__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_39, (MR_Integer) 0)));
#line 444 "common.m"
            MR_Word check_hlds__simplify__common__V_68_68;
#line 444 "common.m"
            MR_Word check_hlds__simplify__common__V_69_69;
#line 444 "common.m"
            MR_Word check_hlds__simplify__common__V_70_70;
#line 444 "common.m"
            MR_Word check_hlds__simplify__common__V_67_67;

#line 442 "common.m"
            {
#line 442 "common.m"
              mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(check_hlds__simplify__common__TypeInfo_71_71, check_hlds__simplify__common__ArgVars_17, check_hlds__simplify__common__OldArgVars_41, check_hlds__simplify__common__VarEqv1_35, &check_hlds__simplify__common__VarEqv_42);
            }
#line 444 "common.m"
            check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 444 "common.m"
            check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 444 "common.m"
            check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 444 "common.m"
            check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 444 "common.m"
            {
#line 444 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Common_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 444 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_42));
#line 444 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 1) = ((MR_Box) (check_hlds__simplify__common__V_68_68));
#line 444 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 2) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 444 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 3) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 444 "common.m"
            }
#line 445 "common.m"
            {
#line 445 "common.m"
              check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__GoalInfo0_23, check_hlds__simplify__common__ArgVars_17, check_hlds__simplify__common__OldArgVars_41, check_hlds__simplify__common__UniModes_18, &check_hlds__simplify__common__Goals_43, check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, check_hlds__simplify__common__STATE_VARIABLE_Common_47, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_54_54);
            }
#line 447 "common.m"
            {
#line 447 "common.m"
              MR_Word base;
#line 447 "common.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 447 "common.m"
              *check_hlds__simplify__common__GoalExpr_22 = base;
#line 447 "common.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 447 "common.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 447 "common.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__Goals_43));
#line 447 "common.m"
            }
#line 448 "common.m"
            {
#line 448 "common.m"
              check_hlds__simplify__common__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 448 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_56_56, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_21));
#line 448 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_56_56, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo0_23));
#line 448 "common.m"
            }
#line 448 "common.m"
            {
#line 448 "common.m"
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_56_56, &check_hlds__simplify__common__Cost_44);
            }
#line 449 "common.m"
            {
#line 449 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__common__STATE_VARIABLE_Info_57_57);
            }
#line 450 "common.m"
            {
#line 450 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_57_57, &check_hlds__simplify__common__STATE_VARIABLE_Info_58_58);
            }
#line 454 "common.m"
            if ((check_hlds__simplify__common__CanFail_19 == (MR_Integer) 0))
#line 453 "common.m"
              {
#line 453 "common.m"
                check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_58_58, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
#line 453 "common.m"
                return;
              }
#line 454 "common.m"
            else
#line 455 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 441 "common.m"
          }
#line 457 "common.m"
        else
#line 458 "common.m"
          {
#line 458 "common.m"
            MR_Word check_hlds__simplify__common__Struct_45;

#line 458 "common.m"
            *check_hlds__simplify__common__GoalExpr_22 = check_hlds__simplify__common__GoalExpr0_21;
#line 459 "common.m"
            {
#line 459 "common.m"
              check_hlds__simplify__common__Struct_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 0) = ((MR_Box) (check_hlds__simplify__common__Var_15));
#line 459 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 1) = ((MR_Box) (check_hlds__simplify__common__ArgVars_17));
#line 459 "common.m"
            }
#line 460 "common.m"
            {
#line 460 "common.m"
              check_hlds__simplify__common__record_cell_in_maps_6_p_0(check_hlds__simplify__common__TypeCtor_32, check_hlds__simplify__common__ConsId_16, check_hlds__simplify__common__Struct_45, check_hlds__simplify__common__VarEqv1_35, check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, check_hlds__simplify__common__STATE_VARIABLE_Common_47);
            }
#line 460 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 458 "common.m"
          }
#line 426 "common.m"
      }
#line 413 "common.m"
  }
#line 405 "common.m"
}

#line 359 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
#line 359 "common.m"
  MR_Box check_hlds__simplify__common__closure_arg,
#line 359 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 359 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_2,
#line 359 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_3,
#line 359 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_4)
#line 359 "common.m"
{
#line 359 "common.m"
  {
#line 359 "common.m"
    MR_Box check_hlds__simplify__common__closure = check_hlds__simplify__common__closure_arg;
#line 359 "common.m"
    MR_Integer check_hlds__simplify__common__conv1_HeadVar__2_73;
#line 359 "common.m"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__4_75;

#line 359 "common.m"
    {
#line 359 "common.m"
      check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__359__1_4_p_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), &check_hlds__simplify__common__conv1_HeadVar__2_73, ((MR_Word) check_hlds__simplify__common__wrapper_arg_3), &check_hlds__simplify__common__conv0_HeadVar__4_75);
    }
#line 359 "common.m"
    *check_hlds__simplify__common__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__common__conv1_HeadVar__2_73));
#line 359 "common.m"
    *check_hlds__simplify__common__wrapper_arg_4 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__4_75));
#line 359 "common.m"
  }
#line 359 "common.m"
}

#line 340 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__Var_13,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_14,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_15,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__Mode_16,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 340 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_19,
#line 340 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_20,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 340 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 340 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 340 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 340 "common.m"
{
#line 348 "common.m"
  {
#line 348 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 348 "common.m"
    MR_Word check_hlds__simplify__common__LVarMode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_16, (MR_Integer) 0)));
#line 348 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_25;
#line 348 "common.m"
    MR_Word check_hlds__simplify__common__Inst_27;
#line 349 "common.m"
    MR_Word check_hlds__simplify__common__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_16, (MR_Integer) 1)));
#line 351 "common.m"
    MR_Word check_hlds__simplify__common__V_26_26;

#line 350 "common.m"
    {
#line 350 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_25);
    }
#line 351 "common.m"
    {
#line 351 "common.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_25, check_hlds__simplify__common__LVarMode_23, &check_hlds__simplify__common__V_26_26, &check_hlds__simplify__common__Inst_27);
    }
#line 356 "common.m"
    {
#line 356 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__simplify__common__ModuleInfo_25, check_hlds__simplify__common__Inst_27);
    }
#line 400 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 357 "common.m"
      {
#line 357 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_77_77;
#line 357 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtor_28;
#line 357 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_29;
#line 357 "common.m"
        MR_Word check_hlds__simplify__common__ArgVarIds_30;
#line 357 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv1_31;
#line 357 "common.m"
        MR_Word check_hlds__simplify__common__AllStructMap0_32;
#line 357 "common.m"
        MR_Word check_hlds__simplify__common__VarTypes_87;
#line 357 "common.m"
        MR_Word check_hlds__simplify__common__Type_88;
#line 358 "common.m"
        MR_Word check_hlds__simplify__common__V_62_62;
#line 358 "common.m"
        MR_Word check_hlds__simplify__common__V_63_63;
#line 358 "common.m"
        MR_Word check_hlds__simplify__common__V_64_64;
#line 359 "common.m"
        MR_Box check_hlds__simplify__common__conv2_VarEqv1_31;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__V_65_65;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__V_66_66;
#line 361 "common.m"
        MR_Word check_hlds__simplify__common__V_67_67;
#line 394 "common.m"
        MR_Word check_hlds__simplify__common__OldStruct_37;
#line 367 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_80_80;
#line 367 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_81_81;
#line 367 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_82_82;
#line 367 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_83_83;
#line 367 "common.m"
        MR_Word check_hlds__simplify__common__InstMapDelta_33;
#line 367 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap0_35;
#line 367 "common.m"
        MR_Word check_hlds__simplify__common__Structs_36;
#line 368 "common.m"
        MR_Word check_hlds__simplify__common__V_34_34;
#line 370 "common.m"
        MR_Box check_hlds__simplify__common__conv3_ConsIdMap0_35;
#line 371 "common.m"
        MR_Box check_hlds__simplify__common__conv4_Structs_36;

#line 468 "common.m"
        {
#line 468 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__VarTypes_87);
        }
#line 469 "common.m"
        {
#line 469 "common.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_87, check_hlds__simplify__common__Var_13, &check_hlds__simplify__common__Type_88);
        }
#line 472 "common.m"
        {
#line 472 "common.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__common__Type_88, &check_hlds__simplify__common__TypeCtor_28);
        }
#line 358 "common.m"
        check_hlds__simplify__common__VarEqv0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 358 "common.m"
        check_hlds__simplify__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 358 "common.m"
        check_hlds__simplify__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 358 "common.m"
        check_hlds__simplify__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 6217 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__TypeInfo_77_77 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 359 "common.m"
        {
#line 359 "common.m"
          mercury__list__map_foldl_5_p_0(check_hlds__simplify__common__TypeInfo_77_77, (MR_Word) &mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[3], (MR_Word) &check_hlds__simplify__common_scalar_common_2[3], check_hlds__simplify__common__ArgVars_15, &check_hlds__simplify__common__ArgVarIds_30, ((MR_Box) (check_hlds__simplify__common__VarEqv0_29)), &check_hlds__simplify__common__conv2_VarEqv1_31);
        }
#line 359 "common.m"
        check_hlds__simplify__common__VarEqv1_31 = ((MR_Word) check_hlds__simplify__common__conv2_VarEqv1_31);
#line 361 "common.m"
        check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 361 "common.m"
        check_hlds__simplify__common__AllStructMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 361 "common.m"
        check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 361 "common.m"
        check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 367 "common.m"
        {
#line 367 "common.m"
          check_hlds__simplify__common__InstMapDelta_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__common__GoalInfo0_19);
        }
#line 368 "common.m"
        {
#line 368 "common.m"
          check_hlds__simplify__common__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__simplify__common__InstMapDelta_33, check_hlds__simplify__common__Var_13, &check_hlds__simplify__common__V_34_34);
        }
#line 367 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 367 "common.m"
          {
#line 6248 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeCtorInfo_80_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 6250 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_81_81 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[0];
#line 370 "common.m"
            {
#line 370 "common.m"
              check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_80_80, check_hlds__simplify__common__TypeInfo_81_81, check_hlds__simplify__common__AllStructMap0_32, ((MR_Box) (check_hlds__simplify__common__TypeCtor_28)), &check_hlds__simplify__common__conv3_ConsIdMap0_35);
            }
#line 370 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 370 "common.m"
              {
#line 370 "common.m"
                check_hlds__simplify__common__ConsIdMap0_35 = ((MR_Word) check_hlds__simplify__common__conv3_ConsIdMap0_35);
#line 370 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 370 "common.m"
              }
#line 367 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 367 "common.m"
              {
#line 6271 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 6273 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_83_83 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[1];
#line 371 "common.m"
                {
#line 371 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_82_82, check_hlds__simplify__common__TypeInfo_83_83, check_hlds__simplify__common__ConsIdMap0_35, ((MR_Box) (check_hlds__simplify__common__ConsId_14)), &check_hlds__simplify__common__conv4_Structs_36);
                }
#line 371 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 371 "common.m"
                  {
#line 371 "common.m"
                    check_hlds__simplify__common__Structs_36 = ((MR_Word) check_hlds__simplify__common__conv4_Structs_36);
#line 371 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 371 "common.m"
                  }
#line 367 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 372 "common.m"
                  {
#line 372 "common.m"
                    check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_matching_cell_construct_4_p_0(check_hlds__simplify__common__Structs_36, check_hlds__simplify__common__VarEqv1_31, check_hlds__simplify__common__ArgVarIds_30, &check_hlds__simplify__common__OldStruct_37);
                  }
#line 367 "common.m"
              }
#line 367 "common.m"
          }
#line 394 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 375 "common.m"
          {
#line 375 "common.m"
            MR_Word check_hlds__simplify__common__OldVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_37, (MR_Integer) 0)));
#line 375 "common.m"
            MR_Word check_hlds__simplify__common__VarEqv_40;
#line 375 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_51_51;
#line 375 "common.m"
            MR_Word check_hlds__simplify__common__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_37, (MR_Integer) 1)));
#line 377 "common.m"
            MR_Word check_hlds__simplify__common__V_69_69;
#line 377 "common.m"
            MR_Word check_hlds__simplify__common__V_70_70;
#line 377 "common.m"
            MR_Word check_hlds__simplify__common__V_71_71;
#line 377 "common.m"
            MR_Word check_hlds__simplify__common__V_68_68;

#line 376 "common.m"
            {
#line 376 "common.m"
              mercury__eqvclass__ensure_equivalence_4_p_0(check_hlds__simplify__common__TypeInfo_77_77, ((MR_Box) (check_hlds__simplify__common__Var_13)), ((MR_Box) (check_hlds__simplify__common__OldVar_38)), check_hlds__simplify__common__VarEqv1_31, &check_hlds__simplify__common__VarEqv_40);
            }
#line 377 "common.m"
            check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 377 "common.m"
            check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 377 "common.m"
            check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 377 "common.m"
            check_hlds__simplify__common__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 377 "common.m"
            {
#line 377 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Common_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 377 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_40));
#line 377 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 1) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 377 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 2) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 377 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 3) = ((MR_Box) (check_hlds__simplify__common__V_71_71));
#line 377 "common.m"
            }
#line 385 "common.m"
            if ((check_hlds__simplify__common__ArgVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "common.m"
              {
#line 383 "common.m"
                *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 384 "common.m"
                *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 384 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_51_51;
#line 384 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 379 "common.m"
              }
#line 385 "common.m"
            else
#line 386 "common.m"
              {
#line 386 "common.m"
                MR_Word check_hlds__simplify__common__UniMode_43;
#line 386 "common.m"
                MR_Integer check_hlds__simplify__common__Cost_44;
#line 386 "common.m"
                MR_Word check_hlds__simplify__common__V_52_52;
#line 386 "common.m"
                MR_Word check_hlds__simplify__common__V_54_54;
#line 386 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_57_57;
#line 386 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 386 "common.m"
                MR_Word check_hlds__simplify__common__V_59_59;

#line 387 "common.m"
                {
#line 387 "common.m"
                  check_hlds__simplify__common__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 387 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 387 "common.m"
                }
#line 387 "common.m"
                {
#line 387 "common.m"
                  check_hlds__simplify__common__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 387 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_54_54, 0) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 387 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_54_54, 1) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 387 "common.m"
                }
#line 387 "common.m"
                {
#line 387 "common.m"
                  check_hlds__simplify__common__UniMode_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 387 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_43, 0) = ((MR_Box) (check_hlds__simplify__common__V_52_52));
#line 387 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_43, 1) = ((MR_Box) (check_hlds__simplify__common__V_54_54));
#line 387 "common.m"
                }
#line 388 "common.m"
                {
#line 388 "common.m"
                  check_hlds__simplify__common__generate_assign_10_p_0(check_hlds__simplify__common__Var_13, check_hlds__simplify__common__OldVar_38, check_hlds__simplify__common__UniMode_43, check_hlds__simplify__common__GoalInfo0_19, check_hlds__simplify__common__GoalExpr_18, check_hlds__simplify__common__GoalInfo_20, check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, check_hlds__simplify__common__STATE_VARIABLE_Common_47, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_57_57);
                }
#line 390 "common.m"
                {
#line 390 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_57_57, &check_hlds__simplify__common__STATE_VARIABLE_Info_58_58);
                }
#line 391 "common.m"
                {
#line 391 "common.m"
                  check_hlds__simplify__common__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_17));
#line 391 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_59_59, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo0_19));
#line 391 "common.m"
                }
#line 391 "common.m"
                {
#line 391 "common.m"
                  transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_59_59, &check_hlds__simplify__common__Cost_44);
                }
#line 392 "common.m"
                {
#line 392 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_58_58, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
#line 392 "common.m"
                  return;
                }
#line 386 "common.m"
              }
#line 375 "common.m"
          }
#line 394 "common.m"
        else
#line 395 "common.m"
          {
#line 395 "common.m"
            MR_Word check_hlds__simplify__common__Struct_45;

#line 395 "common.m"
            *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 396 "common.m"
            *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 397 "common.m"
            {
#line 397 "common.m"
              check_hlds__simplify__common__Struct_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 0) = ((MR_Box) (check_hlds__simplify__common__Var_13));
#line 397 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 1) = ((MR_Box) (check_hlds__simplify__common__ArgVars_15));
#line 397 "common.m"
            }
#line 398 "common.m"
            {
#line 398 "common.m"
              check_hlds__simplify__common__record_cell_in_maps_6_p_0(check_hlds__simplify__common__TypeCtor_28, check_hlds__simplify__common__ConsId_14, check_hlds__simplify__common__Struct_45, check_hlds__simplify__common__VarEqv1_31, check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, check_hlds__simplify__common__STATE_VARIABLE_Common_47);
            }
#line 398 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 395 "common.m"
          }
#line 357 "common.m"
      }
#line 400 "common.m"
    else
#line 401 "common.m"
      {
#line 401 "common.m"
        *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 402 "common.m"
        *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 402 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 402 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_46;
#line 401 "common.m"
      }
#line 348 "common.m"
  }
#line 340 "common.m"
}

#line 153 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_info_clear_structs_2_p_0(
#line 153 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_4,
#line 153 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_5)
#line 153 "common.m"
{
#line 301 "common.m"
  {
#line 301 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 301 "common.m"
    MR_Word check_hlds__simplify__common__V_7_7;
#line 302 "common.m"
    MR_Word check_hlds__simplify__common__V_8_8;
#line 302 "common.m"
    MR_Word check_hlds__simplify__common__V_9_9;
#line 302 "common.m"
    MR_Word check_hlds__simplify__common__V_11_11;
#line 302 "common.m"
    MR_Word check_hlds__simplify__common__V_10_10;

#line 302 "common.m"
    {
#line 302 "common.m"
      check_hlds__simplify__common__V_7_7 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0]);
    }
#line 302 "common.m"
    check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 302 "common.m"
    check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 302 "common.m"
    check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 302 "common.m"
    check_hlds__simplify__common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 302 "common.m"
    {
#line 302 "common.m"
      MR_Word base;
#line 302 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 302 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Info_5 = base;
#line 302 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_8_8));
#line 302 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_9_9));
#line 302 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_7_7));
#line 302 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_11_11));
#line 302 "common.m"
    }
#line 301 "common.m"
  }
#line 153 "common.m"
}

#line 149 "common.m"
MR_Word MR_CALL 
check_hlds__simplify__common__common_info_init_0_f_0(void)
#line 149 "common.m"
{
#line 295 "common.m"
  {
#line 295 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 295 "common.m"
    MR_Word check_hlds__simplify__common__CommonInfo_2;
#line 295 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv0_3;
#line 295 "common.m"
    MR_Word check_hlds__simplify__common__StructMap0_4;
#line 295 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls0_5;

#line 296 "common.m"
    {
#line 296 "common.m"
      mercury__eqvclass__init_1_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], &check_hlds__simplify__common__VarEqv0_3);
    }
#line 297 "common.m"
    {
#line 297 "common.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], &check_hlds__simplify__common__StructMap0_4);
    }
#line 298 "common.m"
    {
#line 298 "common.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], &check_hlds__simplify__common__SeenCalls0_5);
    }
#line 299 "common.m"
    {
#line 299 "common.m"
      check_hlds__simplify__common__CommonInfo_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 299 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv0_3));
#line 299 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 1) = ((MR_Box) (check_hlds__simplify__common__StructMap0_4));
#line 299 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 2) = ((MR_Box) (check_hlds__simplify__common__StructMap0_4));
#line 299 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls0_5));
#line 299 "common.m"
    }
#line 295 "common.m"
    return check_hlds__simplify__common__CommonInfo_2;
#line 295 "common.m"
  }
#line 149 "common.m"
}

#line 142 "common.m"
MR_bool MR_CALL 
check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(
#line 142 "common.m"
  MR_Word check_hlds__simplify__common__X_4,
#line 142 "common.m"
  MR_Word check_hlds__simplify__common__Y_5,
#line 142 "common.m"
  MR_Word check_hlds__simplify__common__CommonInfo_6)
#line 142 "common.m"
{
#line 769 "common.m"
  {
#line 769 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 769 "common.m"
    MR_Word check_hlds__simplify__common__EqvVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 0)));
#line 770 "common.m"
    MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 1)));
#line 770 "common.m"
    MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 2)));
#line 770 "common.m"
    MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 3)));

#line 781 "common.m"
    {
#line 781 "common.m"
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__X_4)), ((MR_Box) (check_hlds__simplify__common__Y_5)));
    }
#line 781 "common.m"
    if (!(check_hlds__simplify__common__succeeded))
#line 783 "common.m"
      {
#line 783 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_8_15 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 783 "common.m"
        MR_Integer check_hlds__simplify__common__Id_14;
#line 783 "common.m"
        MR_Integer check_hlds__simplify__common__V_16_16;

#line 783 "common.m"
        {
#line 783 "common.m"
          check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_15, check_hlds__simplify__common__EqvVars_7, ((MR_Box) (check_hlds__simplify__common__X_4)), &check_hlds__simplify__common__Id_14);
        }
#line 783 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 783 "common.m"
          {
#line 784 "common.m"
            {
#line 784 "common.m"
              check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_15, check_hlds__simplify__common__EqvVars_7, ((MR_Box) (check_hlds__simplify__common__Y_5)), &check_hlds__simplify__common__V_16_16);
            }
#line 783 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 784 "common.m"
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_14 == check_hlds__simplify__common__V_16_16);
#line 783 "common.m"
          }
#line 783 "common.m"
      }
#line 769 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 769 "common.m"
  }
#line 142 "common.m"
}

#line 133 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_optimise_higher_order_call_11_p_0(
#line 133 "common.m"
  MR_Word check_hlds__simplify__common__Closure_12,
#line 133 "common.m"
  MR_Word check_hlds__simplify__common__Args_13,
#line 133 "common.m"
  MR_Word check_hlds__simplify__common__Modes_14,
#line 133 "common.m"
  MR_Word check_hlds__simplify__common__Det_15,
#line 133 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 133 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 133 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 133 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_26,
#line 133 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_27,
#line 133 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_28,
#line 133 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_29)
#line 133 "common.m"
{
#line 591 "common.m"
  {
#line 591 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 591 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs_23;
#line 591 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs_24;
#line 591 "common.m"
    MR_Word check_hlds__simplify__common__OutputModes_25;
#line 582 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_21;
#line 582 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_22;
#line 582 "common.m"
    MR_Word check_hlds__simplify__common__SolnCount_36;
#line 598 "common.m"
    MR_Word check_hlds__simplify__common__V_35_35;

#line 598 "common.m"
    {
#line 598 "common.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__common__Det_15, &check_hlds__simplify__common__V_35_35, &check_hlds__simplify__common__SolnCount_36);
    }
#line 601 "common.m"
    if ((check_hlds__simplify__common__SolnCount_36 == (MR_Integer) 2))
#line 601 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 601 "common.m"
    else
#line 601 "common.m"
      if ((check_hlds__simplify__common__SolnCount_36 == (MR_Integer) 1))
#line 600 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 601 "common.m"
      else
#line 601 "common.m"
        check_hlds__simplify__common__succeeded = MR_FALSE;
#line 582 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 582 "common.m"
      {
#line 583 "common.m"
        {
#line 583 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_28, &check_hlds__simplify__common__VarTypes_21);
        }
#line 584 "common.m"
        {
#line 584 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_28, &check_hlds__simplify__common__ModuleInfo_22);
        }
#line 585 "common.m"
        {
#line 585 "common.m"
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_21, check_hlds__simplify__common__ModuleInfo_22, check_hlds__simplify__common__Modes_14, check_hlds__simplify__common__Args_13, &check_hlds__simplify__common__InputArgs_23, &check_hlds__simplify__common__OutputArgs_24, &check_hlds__simplify__common__OutputModes_25);
        }
#line 582 "common.m"
      }
#line 591 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 588 "common.m"
      {
#line 588 "common.m"
        MR_Word check_hlds__simplify__common__V_31_31;

#line 588 "common.m"
        {
#line 588 "common.m"
          check_hlds__simplify__common__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_31_31, 0) = ((MR_Box) (check_hlds__simplify__common__Closure_12));
#line 588 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_31_31, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_23));
#line 588 "common.m"
        }
#line 588 "common.m"
        {
#line 588 "common.m"
          check_hlds__simplify__common__common_optimise_call_2_11_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__common__V_31_31, check_hlds__simplify__common__OutputArgs_24, check_hlds__simplify__common__OutputModes_25, check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__GoalExpr0_17, check_hlds__simplify__common__GoalExpr_18, check_hlds__simplify__common__STATE_VARIABLE_Common_0_26, check_hlds__simplify__common__STATE_VARIABLE_Common_27, check_hlds__simplify__common__STATE_VARIABLE_Info_0_28, check_hlds__simplify__common__STATE_VARIABLE_Info_29);
#line 588 "common.m"
          return;
        }
#line 588 "common.m"
      }
#line 591 "common.m"
    else
#line 592 "common.m"
      {
#line 592 "common.m"
        *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 592 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_29 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_28;
#line 592 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_27 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_26;
#line 592 "common.m"
      }
#line 591 "common.m"
  }
#line 133 "common.m"
}

#line 128 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_optimise_call_10_p_0(
#line 128 "common.m"
  MR_Word check_hlds__simplify__common__PredId_11,
#line 128 "common.m"
  MR_Integer check_hlds__simplify__common__ProcId_12,
#line 128 "common.m"
  MR_Word check_hlds__simplify__common__Args_13,
#line 128 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_14,
#line 128 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_15,
#line 128 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_16,
#line 128 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_28,
#line 128 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_29,
#line 128 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_30,
#line 128 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_31)
#line 128 "common.m"
{
#line 575 "common.m"
  {
#line 575 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 575 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs_25;
#line 575 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs_26;
#line 575 "common.m"
    MR_Word check_hlds__simplify__common__OutputModes_27;
#line 563 "common.m"
    MR_Word check_hlds__simplify__common__Det_19;
#line 563 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_20;
#line 563 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_21;
#line 563 "common.m"
    MR_Word check_hlds__simplify__common__ProcInfo_23;
#line 563 "common.m"
    MR_Word check_hlds__simplify__common__ArgModes_24;
#line 563 "common.m"
    MR_Word check_hlds__simplify__common__SolnCount_37;
#line 598 "common.m"
    MR_Word check_hlds__simplify__common__V_36_36;
#line 567 "common.m"
    MR_Word check_hlds__simplify__common__V_22_22;

#line 563 "common.m"
    {
#line 563 "common.m"
      check_hlds__simplify__common__Det_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__common__GoalInfo_14);
    }
#line 598 "common.m"
    {
#line 598 "common.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__common__Det_19, &check_hlds__simplify__common__V_36_36, &check_hlds__simplify__common__SolnCount_37);
    }
#line 601 "common.m"
    if ((check_hlds__simplify__common__SolnCount_37 == (MR_Integer) 2))
#line 601 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 601 "common.m"
    else
#line 601 "common.m"
      if ((check_hlds__simplify__common__SolnCount_37 == (MR_Integer) 1))
#line 600 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 601 "common.m"
      else
#line 601 "common.m"
        check_hlds__simplify__common__succeeded = MR_FALSE;
#line 563 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 563 "common.m"
      {
#line 565 "common.m"
        {
#line 565 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__common__VarTypes_20);
        }
#line 566 "common.m"
        {
#line 566 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__common__ModuleInfo_21);
        }
#line 567 "common.m"
        {
#line 567 "common.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__common__ModuleInfo_21, check_hlds__simplify__common__PredId_11, check_hlds__simplify__common__ProcId_12, &check_hlds__simplify__common__V_22_22, &check_hlds__simplify__common__ProcInfo_23);
        }
#line 568 "common.m"
        {
#line 568 "common.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__common__ProcInfo_23, &check_hlds__simplify__common__ArgModes_24);
        }
#line 569 "common.m"
        {
#line 569 "common.m"
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_20, check_hlds__simplify__common__ModuleInfo_21, check_hlds__simplify__common__ArgModes_24, check_hlds__simplify__common__Args_13, &check_hlds__simplify__common__InputArgs_25, &check_hlds__simplify__common__OutputArgs_26, &check_hlds__simplify__common__OutputModes_27);
        }
#line 563 "common.m"
      }
#line 575 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 572 "common.m"
      {
#line 572 "common.m"
        MR_Word check_hlds__simplify__common__V_32_32;

#line 572 "common.m"
        {
#line 572 "common.m"
          check_hlds__simplify__common__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_32_32, 0) = ((MR_Box) (check_hlds__simplify__common__PredId_11));
#line 572 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_32_32, 1) = ((MR_Box) (check_hlds__simplify__common__ProcId_12));
#line 572 "common.m"
        }
#line 572 "common.m"
        {
#line 572 "common.m"
          check_hlds__simplify__common__common_optimise_call_2_11_p_0(check_hlds__simplify__common__V_32_32, check_hlds__simplify__common__InputArgs_25, check_hlds__simplify__common__OutputArgs_26, check_hlds__simplify__common__OutputModes_27, check_hlds__simplify__common__GoalInfo_14, check_hlds__simplify__common__GoalExpr0_15, check_hlds__simplify__common__GoalExpr_16, check_hlds__simplify__common__STATE_VARIABLE_Common_0_28, check_hlds__simplify__common__STATE_VARIABLE_Common_29, check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, check_hlds__simplify__common__STATE_VARIABLE_Info_31);
#line 572 "common.m"
          return;
        }
#line 572 "common.m"
      }
#line 575 "common.m"
    else
#line 576 "common.m"
      {
#line 576 "common.m"
        *check_hlds__simplify__common__GoalExpr_16 = check_hlds__simplify__common__GoalExpr0_15;
#line 576 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_31 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_30;
#line 576 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_29 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_28;
#line 576 "common.m"
      }
#line 575 "common.m"
  }
#line 128 "common.m"
}

#line 113 "common.m"
void MR_CALL 
check_hlds__simplify__common__common_optimise_unification_10_p_0(
#line 113 "common.m"
  MR_Word check_hlds__simplify__common__Unification0_11,
#line 113 "common.m"
  MR_Word check_hlds__simplify__common__Mode_12,
#line 113 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_13,
#line 113 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_14,
#line 113 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_15,
#line 113 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
#line 113 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_37,
#line 113 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_38,
#line 113 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_39,
#line 113 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_40)
#line 113 "common.m"
{
#line 309 "common.m"
  {
#line 309 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 309 "common.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) == (MR_mktag((MR_Integer) 2))))
#line 325 "common.m"
      {
#line 325 "common.m"
        MR_Word check_hlds__simplify__common__Var1_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 325 "common.m"
        MR_Word check_hlds__simplify__common__Var2_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 325 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 0)));
#line 325 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv_58;
#line 553 "common.m"
        MR_Word check_hlds__simplify__common__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 1)));
#line 553 "common.m"
        MR_Word check_hlds__simplify__common__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 2)));
#line 553 "common.m"
        MR_Word check_hlds__simplify__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 3)));
#line 555 "common.m"
        MR_Word check_hlds__simplify__common__V_64_64;
#line 555 "common.m"
        MR_Word check_hlds__simplify__common__V_65_65;
#line 555 "common.m"
        MR_Word check_hlds__simplify__common__V_66_66;
#line 555 "common.m"
        MR_Word check_hlds__simplify__common__V_63_63;

#line 554 "common.m"
        {
#line 554 "common.m"
          mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var1_32)), ((MR_Box) (check_hlds__simplify__common__Var2_33)), check_hlds__simplify__common__VarEqv0_57, &check_hlds__simplify__common__VarEqv_58);
        }
#line 555 "common.m"
        check_hlds__simplify__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 0)));
#line 555 "common.m"
        check_hlds__simplify__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 1)));
#line 555 "common.m"
        check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 2)));
#line 555 "common.m"
        check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 3)));
#line 555 "common.m"
        {
#line 555 "common.m"
          MR_Word base;
#line 555 "common.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 555 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_Common_38 = base;
#line 555 "common.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_58));
#line 555 "common.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_64_64));
#line 555 "common.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_65_65));
#line 555 "common.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_66_66));
#line 555 "common.m"
        }
#line 327 "common.m"
        *check_hlds__simplify__common__GoalExpr_14 = check_hlds__simplify__common__GoalExpr0_13;
#line 328 "common.m"
        *check_hlds__simplify__common__GoalInfo_16 = check_hlds__simplify__common__GoalInfo0_15;
#line 328 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_40 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_39;
#line 325 "common.m"
      }
#line 309 "common.m"
    else
#line 309 "common.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) == (MR_mktag((MR_Integer) 0))))
#line 309 "common.m"
        {
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__ArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__SubInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 6)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 3)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 4)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 5)));
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__MaybeTakeAddr_26;
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__V_27_27;
#line 312 "common.m"
          MR_Word check_hlds__simplify__common__V_28_28;

#line 311 "common.m"
          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__SubInfo_25)) == (MR_mktag((MR_Integer) 1)));
#line 311 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 311 "common.m"
            {
#line 311 "common.m"
              check_hlds__simplify__common__MaybeTakeAddr_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__SubInfo_25, (MR_Integer) 0)));
#line 311 "common.m"
              check_hlds__simplify__common__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__SubInfo_25, (MR_Integer) 1)));
#line 312 "common.m"
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__MaybeTakeAddr_26)) == (MR_mktag((MR_Integer) 1)));
#line 312 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 312 "common.m"
                check_hlds__simplify__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__MaybeTakeAddr_26, (MR_Integer) 0)));
#line 311 "common.m"
            }
#line 316 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 314 "common.m"
            {
#line 314 "common.m"
              *check_hlds__simplify__common__GoalExpr_14 = check_hlds__simplify__common__GoalExpr0_13;
#line 315 "common.m"
              *check_hlds__simplify__common__GoalInfo_16 = check_hlds__simplify__common__GoalInfo0_15;
#line 315 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_40 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_39;
#line 315 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Common_38 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_37;
#line 314 "common.m"
            }
#line 316 "common.m"
          else
#line 317 "common.m"
            {
#line 317 "common.m"
              check_hlds__simplify__common__common_optimise_construct_12_p_0(check_hlds__simplify__common__Var_19, check_hlds__simplify__common__ConsId_20, check_hlds__simplify__common__ArgVars_21, check_hlds__simplify__common__Mode_12, check_hlds__simplify__common__GoalExpr0_13, check_hlds__simplify__common__GoalExpr_14, check_hlds__simplify__common__GoalInfo0_15, check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, check_hlds__simplify__common__STATE_VARIABLE_Common_38, check_hlds__simplify__common__STATE_VARIABLE_Info_0_39, check_hlds__simplify__common__STATE_VARIABLE_Info_40);
#line 317 "common.m"
              return;
            }
#line 309 "common.m"
        }
#line 309 "common.m"
      else
#line 309 "common.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) == (MR_mktag((MR_Integer) 1))))
#line 321 "common.m"
          {
#line 321 "common.m"
            MR_Word check_hlds__simplify__common__UniModes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 3)));
#line 321 "common.m"
            MR_Word check_hlds__simplify__common__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 4)));
#line 321 "common.m"
            MR_Word check_hlds__simplify__common__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 321 "common.m"
            MR_Word check_hlds__simplify__common__ConsId_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 321 "common.m"
            MR_Word check_hlds__simplify__common__ArgVars_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 321 "common.m"
            MR_Word check_hlds__simplify__common__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 5)));

#line 322 "common.m"
            {
#line 322 "common.m"
              check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(check_hlds__simplify__common__Var_47, check_hlds__simplify__common__ConsId_48, check_hlds__simplify__common__ArgVars_49, check_hlds__simplify__common__UniModes_29, check_hlds__simplify__common__CanFail_30, check_hlds__simplify__common__Mode_12, check_hlds__simplify__common__GoalExpr0_13, check_hlds__simplify__common__GoalExpr_14, check_hlds__simplify__common__GoalInfo0_15, check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, check_hlds__simplify__common__STATE_VARIABLE_Common_38, check_hlds__simplify__common__STATE_VARIABLE_Info_0_39, check_hlds__simplify__common__STATE_VARIABLE_Info_40);
#line 322 "common.m"
              return;
            }
#line 321 "common.m"
          }
#line 309 "common.m"
        else
#line 309 "common.m"
          if (((((MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 335 "common.m"
            {
#line 336 "common.m"
              *check_hlds__simplify__common__GoalExpr_14 = check_hlds__simplify__common__GoalExpr0_13;
#line 337 "common.m"
              *check_hlds__simplify__common__GoalInfo_16 = check_hlds__simplify__common__GoalInfo0_15;
#line 337 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Common_38 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_37;
#line 337 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_40 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_39;
#line 335 "common.m"
            }
#line 309 "common.m"
          else
#line 330 "common.m"
            {
#line 330 "common.m"
              MR_Word check_hlds__simplify__common__Var1_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 330 "common.m"
              MR_Word check_hlds__simplify__common__Var2_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 330 "common.m"
              MR_Word check_hlds__simplify__common__VarEqv0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 0)));
#line 330 "common.m"
              MR_Word check_hlds__simplify__common__VarEqv_74;
#line 553 "common.m"
              MR_Word check_hlds__simplify__common__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 1)));
#line 553 "common.m"
              MR_Word check_hlds__simplify__common__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 2)));
#line 553 "common.m"
              MR_Word check_hlds__simplify__common__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 3)));
#line 555 "common.m"
              MR_Word check_hlds__simplify__common__V_80_80;
#line 555 "common.m"
              MR_Word check_hlds__simplify__common__V_81_81;
#line 555 "common.m"
              MR_Word check_hlds__simplify__common__V_82_82;
#line 555 "common.m"
              MR_Word check_hlds__simplify__common__V_79_79;

#line 554 "common.m"
              {
#line 554 "common.m"
                mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var1_50)), ((MR_Box) (check_hlds__simplify__common__Var2_51)), check_hlds__simplify__common__VarEqv0_73, &check_hlds__simplify__common__VarEqv_74);
              }
#line 555 "common.m"
              check_hlds__simplify__common__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 0)));
#line 555 "common.m"
              check_hlds__simplify__common__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 1)));
#line 555 "common.m"
              check_hlds__simplify__common__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 2)));
#line 555 "common.m"
              check_hlds__simplify__common__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_37, (MR_Integer) 3)));
#line 555 "common.m"
              {
#line 555 "common.m"
                MR_Word base;
#line 555 "common.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 555 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Common_38 = base;
#line 555 "common.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_74));
#line 555 "common.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_80_80));
#line 555 "common.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_81_81));
#line 555 "common.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_82_82));
#line 555 "common.m"
              }
#line 332 "common.m"
              *check_hlds__simplify__common__GoalExpr_14 = check_hlds__simplify__common__GoalExpr0_13;
#line 333 "common.m"
              *check_hlds__simplify__common__GoalInfo_16 = check_hlds__simplify__common__GoalInfo0_15;
#line 333 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_40 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_39;
#line 330 "common.m"
            }
#line 309 "common.m"
  }
#line 113 "common.m"
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
