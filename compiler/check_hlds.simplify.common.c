/*
** Automatically generated from `common.m'
** by the Mercury compiler,
** version 2015-10-27
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




#line 149 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3];

#line 164 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0;

#line 167 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1];

#line 170 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1];

#line 173 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0[1];

#line 176 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0[1];

#line 179 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 182 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 185 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 188 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

#line 191 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

#line 194 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

#line 197 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[4];

#line 200 "check_hlds.simplify.common.c"
static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[4];

#line 203 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0;

#line 206 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1];

#line 209 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1];

#line 212 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1];

#line 215 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1];

#line 218 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2];

#line 221 "check_hlds.simplify.common.c"
static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0;

#line 224 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1];

#line 227 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1];

#line 230 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1];

#line 233 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1];

#line 236 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
#line 239 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 241 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 244 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
#line 247 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 249 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 251 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 254 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
#line 257 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 259 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 262 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
#line 265 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 267 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 269 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 272 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
#line 275 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 277 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 280 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
#line 283 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 285 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 287 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 290 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
#line 293 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 295 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 298 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
#line 301 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 303 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 305 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 308 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
#line 311 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 313 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 316 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
#line 319 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 321 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 323 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 326 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
#line 329 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 331 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 334 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
#line 337 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 339 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 341 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 344 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
#line 347 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 349 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

#line 352 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
#line 355 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 357 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 359 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

#line 351 "common.m"
static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__351__1_4_p_0(
#line 351 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_72,
#line 351 "common.m"
  MR_Integer * check_hlds__simplify__common__HeadVar__2_73,
#line 351 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_74,
#line 351 "common.m"
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

#line 918 "common.m"
static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
#line 918 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_5,
#line 918 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_6,
#line 918 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_17,
#line 918 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_18);

#line 892 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
#line 892 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 892 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 868 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
#line 868 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 868 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

#line 826 "common.m"
static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_11,
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_12,
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__UniMode_13,
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_14,
#line 826 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_15,
#line 826 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_33,
#line 826 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_34,
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_35,
#line 826 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_36);

#line 786 "common.m"
static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_10,
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_11,
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__OldOutputArgs_12,
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_13,
#line 786 "common.m"
  MR_Word * check_hlds__simplify__common__AssignGoals_14,
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_27,
#line 786 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_28,
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_29,
#line 786 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_30);

#line 752 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
#line 752 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 752 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 752 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 734 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
#line 734 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 734 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_8,
#line 734 "common.m"
  MR_Word check_hlds__simplify__common__Eqv_9,
#line 734 "common.m"
  MR_Word * check_hlds__simplify__common__OutputArgs_10,
#line 734 "common.m"
  MR_Word * check_hlds__simplify__common__PrevContext_11);

#line 692 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
#line 692 "common.m"
  MR_Word check_hlds__simplify__common__VarTypes_1,
#line 692 "common.m"
  MR_Word check_hlds__simplify__common__ModuleInfo_2,
#line 692 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3,
#line 692 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__4_4,
#line 692 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__5_5,
#line 692 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__6_6,
#line 692 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__7_7);

#line 598 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__SeenCall_12,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_13,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_14,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__Modes_15,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 598 "common.m"
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__Common0_19,
#line 598 "common.m"
  MR_Word * check_hlds__simplify__common__Common_20,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 598 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49);

#line 522 "common.m"
static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
#line 522 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_6,
#line 522 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_7,
#line 522 "common.m"
  MR_Word check_hlds__simplify__common__Struct_8,
#line 522 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14,
#line 522 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);

#line 508 "common.m"
static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
#line 508 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_7,
#line 508 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_8,
#line 508 "common.m"
  MR_Word check_hlds__simplify__common__Struct_9,
#line 508 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_10,
#line 508 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_16,
#line 508 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_17);

#line 490 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
#line 490 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 490 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 490 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

#line 479 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
#line 479 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 479 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 479 "common.m"
  MR_Integer check_hlds__simplify__common__VarId_8,
#line 479 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9);

#line 468 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
#line 468 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 468 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 468 "common.m"
  MR_Word check_hlds__simplify__common__ArgVarIds_8,
#line 468 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9);

#line 397 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__Var_15,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_16,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_17,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_18,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__CanFail_19,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__Mode_20,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_21,
#line 397 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_22,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_23,
#line 397 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_24,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 397 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 397 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49);

#line 351 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
#line 351 "common.m"
  MR_Box check_hlds__simplify__common__closure_arg,
#line 351 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 351 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_2,
#line 351 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_3,
#line 351 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_4);

#line 332 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__Var_13,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_14,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_15,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__Mode_16,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 332 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_19,
#line 332 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_20,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 332 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 332 "common.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 904 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 912 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 920 "check_hlds.simplify.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 928 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 936 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 943 "check_hlds.simplify.common.c"
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

#line 958 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

#line 963 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0
  }
};

#line 972 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

#line 977 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0[1] = {
  (MR_Integer) 0
};

#line 982 "check_hlds.simplify.common.c"
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

#line 999 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1007 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1015 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1024 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

#line 1033 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0
  }
};

#line 1041 "check_hlds.simplify.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0,
    (MR_TypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
  }
};

#line 1050 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
};

#line 1058 "check_hlds.simplify.common.c"
static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[4] = {
  (MR_String) "var_eqv",
  (MR_String) "all_structs",
  (MR_String) "since_call_structs",
  (MR_String) "seen_calls"
};

#line 1066 "check_hlds.simplify.common.c"
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

#line 1081 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

#line 1086 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0
  }
};

#line 1095 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

#line 1100 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1] = {
  (MR_Integer) 0
};

#line 1105 "check_hlds.simplify.common.c"
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

#line 1122 "check_hlds.simplify.common.c"
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

#line 1139 "check_hlds.simplify.common.c"
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

#line 1156 "check_hlds.simplify.common.c"
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

#line 1173 "check_hlds.simplify.common.c"
static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1179 "check_hlds.simplify.common.c"
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

#line 1194 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

#line 1199 "check_hlds.simplify.common.c"
static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0
  }
};

#line 1208 "check_hlds.simplify.common.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

#line 1213 "check_hlds.simplify.common.c"
static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1] = {
  (MR_Integer) 0
};

#line 1218 "check_hlds.simplify.common.c"
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

#line 1235 "check_hlds.simplify.common.c"
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

#line 1252 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
#line 1255 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1257 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1259 "check_hlds.simplify.common.c"
{
#line 1261 "check_hlds.simplify.common.c"
  {
#line 1263 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1266 "check_hlds.simplify.common.c"
    {
#line 1268 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____call_args_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1271 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1273 "check_hlds.simplify.common.c"
  }
#line 1275 "check_hlds.simplify.common.c"
}

#line 1278 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
#line 1281 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1283 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1285 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1287 "check_hlds.simplify.common.c"
{
#line 1289 "check_hlds.simplify.common.c"
  {
#line 1291 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1294 "check_hlds.simplify.common.c"
    {
#line 1296 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____call_args_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1299 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1301 "check_hlds.simplify.common.c"
  }
#line 1303 "check_hlds.simplify.common.c"
}

#line 1306 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
#line 1309 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1311 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1313 "check_hlds.simplify.common.c"
{
#line 1315 "check_hlds.simplify.common.c"
  {
#line 1317 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1320 "check_hlds.simplify.common.c"
    {
#line 1322 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____common_info_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1325 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1327 "check_hlds.simplify.common.c"
  }
#line 1329 "check_hlds.simplify.common.c"
}

#line 1332 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
#line 1335 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1337 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1339 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1341 "check_hlds.simplify.common.c"
{
#line 1343 "check_hlds.simplify.common.c"
  {
#line 1345 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1348 "check_hlds.simplify.common.c"
    {
#line 1350 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____common_info_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1353 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1355 "check_hlds.simplify.common.c"
  }
#line 1357 "check_hlds.simplify.common.c"
}

#line 1360 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
#line 1363 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1365 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1367 "check_hlds.simplify.common.c"
{
#line 1369 "check_hlds.simplify.common.c"
  {
#line 1371 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1374 "check_hlds.simplify.common.c"
    {
#line 1376 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____cons_id_map_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1379 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1381 "check_hlds.simplify.common.c"
  }
#line 1383 "check_hlds.simplify.common.c"
}

#line 1386 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
#line 1389 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1391 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1393 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1395 "check_hlds.simplify.common.c"
{
#line 1397 "check_hlds.simplify.common.c"
  {
#line 1399 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1402 "check_hlds.simplify.common.c"
    {
#line 1404 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____cons_id_map_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1407 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1409 "check_hlds.simplify.common.c"
  }
#line 1411 "check_hlds.simplify.common.c"
}

#line 1414 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
#line 1417 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1419 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1421 "check_hlds.simplify.common.c"
{
#line 1423 "check_hlds.simplify.common.c"
  {
#line 1425 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1428 "check_hlds.simplify.common.c"
    {
#line 1430 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____seen_calls_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1433 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1435 "check_hlds.simplify.common.c"
  }
#line 1437 "check_hlds.simplify.common.c"
}

#line 1440 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
#line 1443 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1445 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1447 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1449 "check_hlds.simplify.common.c"
{
#line 1451 "check_hlds.simplify.common.c"
  {
#line 1453 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1456 "check_hlds.simplify.common.c"
    {
#line 1458 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____seen_calls_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1461 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1463 "check_hlds.simplify.common.c"
  }
#line 1465 "check_hlds.simplify.common.c"
}

#line 1468 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
#line 1471 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1473 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1475 "check_hlds.simplify.common.c"
{
#line 1477 "check_hlds.simplify.common.c"
  {
#line 1479 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1482 "check_hlds.simplify.common.c"
    {
#line 1484 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____struct_map_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1487 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1489 "check_hlds.simplify.common.c"
  }
#line 1491 "check_hlds.simplify.common.c"
}

#line 1494 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
#line 1497 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1499 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1501 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1503 "check_hlds.simplify.common.c"
{
#line 1505 "check_hlds.simplify.common.c"
  {
#line 1507 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1510 "check_hlds.simplify.common.c"
    {
#line 1512 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____struct_map_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1515 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1517 "check_hlds.simplify.common.c"
  }
#line 1519 "check_hlds.simplify.common.c"
}

#line 1522 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
#line 1525 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1527 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1529 "check_hlds.simplify.common.c"
{
#line 1531 "check_hlds.simplify.common.c"
  {
#line 1533 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1536 "check_hlds.simplify.common.c"
    {
#line 1538 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____structure_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1541 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1543 "check_hlds.simplify.common.c"
  }
#line 1545 "check_hlds.simplify.common.c"
}

#line 1548 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
#line 1551 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1553 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1555 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1557 "check_hlds.simplify.common.c"
{
#line 1559 "check_hlds.simplify.common.c"
  {
#line 1561 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1564 "check_hlds.simplify.common.c"
    {
#line 1566 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____structure_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1569 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1571 "check_hlds.simplify.common.c"
  }
#line 1573 "check_hlds.simplify.common.c"
}

#line 1576 "check_hlds.simplify.common.c"
static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
#line 1579 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 1581 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
#line 1583 "check_hlds.simplify.common.c"
{
#line 1585 "check_hlds.simplify.common.c"
  {
#line 1587 "check_hlds.simplify.common.c"
    MR_bool check_hlds__simplify__common__succeeded;

#line 1590 "check_hlds.simplify.common.c"
    {
#line 1592 "check_hlds.simplify.common.c"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____structures_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
#line 1595 "check_hlds.simplify.common.c"
    return check_hlds__simplify__common__succeeded;
#line 1597 "check_hlds.simplify.common.c"
  }
#line 1599 "check_hlds.simplify.common.c"
}

#line 1602 "check_hlds.simplify.common.c"
static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
#line 1605 "check_hlds.simplify.common.c"
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
#line 1607 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
#line 1609 "check_hlds.simplify.common.c"
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
#line 1611 "check_hlds.simplify.common.c"
{
#line 1613 "check_hlds.simplify.common.c"
  {
#line 1615 "check_hlds.simplify.common.c"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

#line 1618 "check_hlds.simplify.common.c"
    {
#line 1620 "check_hlds.simplify.common.c"
      check_hlds__simplify__common____Compare____structures_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
#line 1623 "check_hlds.simplify.common.c"
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
#line 1625 "check_hlds.simplify.common.c"
  }
#line 1627 "check_hlds.simplify.common.c"
}

#line 351 "common.m"
static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__351__1_4_p_0(
#line 351 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_72,
#line 351 "common.m"
  MR_Integer * check_hlds__simplify__common__HeadVar__2_73,
#line 351 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_74,
#line 351 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__4_75)
#line 351 "common.m"
{
#line 351 "common.m"
  {
#line 351 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 351 "common.m"
    {
#line 351 "common.m"
      mercury__eqvclass__ensure_element_partition_id_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__HeadVar__1_72)), check_hlds__simplify__common__HeadVar__2_73, check_hlds__simplify__common__HeadVar__3_74, check_hlds__simplify__common__HeadVar__4_75);
#line 351 "common.m"
      return;
    }
#line 351 "common.m"
  }
#line 351 "common.m"
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
#line 1746 "check_hlds.simplify.common.c"
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
#line 1768 "check_hlds.simplify.common.c"
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

#line 1835 "check_hlds.simplify.common.c"
        {
#line 1837 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__V_3_3)), ((MR_Box) (check_hlds__simplify__common__V_5_5)));
        }
#line 274 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 274 "common.m"
          {
#line 1844 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_10_10 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 1846 "check_hlds.simplify.common.c"
            {
#line 1848 "check_hlds.simplify.common.c"
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

#line 234 "common.m"
void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0(
#line 234 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
#line 234 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 234 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 234 "common.m"
{
#line 234 "common.m"
  {
#line 234 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 234 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_15 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
#line 234 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_16 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

#line 234 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_15 == check_hlds__simplify__common__CastY_16);
#line 234 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 2072 "check_hlds.simplify.common.c"
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
#line 234 "common.m"
    else
#line 234 "common.m"
      {
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 2)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 3)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_12_12;

#line 234 "common.m"
        {
#line 234 "common.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[3], &check_hlds__simplify__common__V_12_12, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
        }
#line 2102 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_12_12 == (MR_Integer) 0);
#line 234 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 234 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 234 "common.m"
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_12_12;
#line 234 "common.m"
        else
#line 234 "common.m"
          {
#line 234 "common.m"
            MR_Word check_hlds__simplify__common__V_13_13;

#line 234 "common.m"
            {
#line 234 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], &check_hlds__simplify__common__V_13_13, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
            }
#line 2122 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_13_13 == (MR_Integer) 0);
#line 234 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 234 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 234 "common.m"
              *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_13_13;
#line 234 "common.m"
            else
#line 234 "common.m"
              {
#line 234 "common.m"
                MR_Word check_hlds__simplify__common__V_14_14;

#line 234 "common.m"
                {
#line 234 "common.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], &check_hlds__simplify__common__V_14_14, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_10_10)));
                }
#line 2142 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_14_14 == (MR_Integer) 0);
#line 234 "common.m"
                check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 234 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 234 "common.m"
                  *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__V_14_14;
#line 234 "common.m"
                else
#line 234 "common.m"
                  {
#line 234 "common.m"
                    {
#line 234 "common.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__V_7_7)), ((MR_Box) (check_hlds__simplify__common__V_11_11)));
#line 234 "common.m"
                      return;
                    }
#line 234 "common.m"
                  }
#line 234 "common.m"
              }
#line 234 "common.m"
          }
#line 234 "common.m"
      }
#line 234 "common.m"
  }
#line 234 "common.m"
}

#line 234 "common.m"
MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0(
#line 234 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 234 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 234 "common.m"
{
#line 234 "common.m"
  {
#line 234 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 234 "common.m"
    MR_Integer check_hlds__simplify__common__CastX_11 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
#line 234 "common.m"
    MR_Integer check_hlds__simplify__common__CastY_12 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

#line 234 "common.m"
    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_11 == check_hlds__simplify__common__CastY_12);
#line 234 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 234 "common.m"
      check_hlds__simplify__common__succeeded = MR_TRUE;
#line 234 "common.m"
    else
#line 234 "common.m"
      {
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_14_14;
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_15_15;
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_16_16;
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 234 "common.m"
        MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));

#line 2225 "check_hlds.simplify.common.c"
        {
#line 2227 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[3], ((MR_Box) (check_hlds__simplify__common__V_3_3)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
        }
#line 234 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 234 "common.m"
          {
#line 2234 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[1];
#line 2236 "check_hlds.simplify.common.c"
            {
#line 2238 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_14_14, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_8_8)));
            }
#line 234 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 234 "common.m"
              {
#line 2245 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_15_15 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[1];
#line 2247 "check_hlds.simplify.common.c"
                {
#line 2249 "check_hlds.simplify.common.c"
                  check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_15_15, ((MR_Box) (check_hlds__simplify__common__V_5_5)), ((MR_Box) (check_hlds__simplify__common__V_9_9)));
                }
#line 234 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 234 "common.m"
                  {
#line 2256 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[2];
#line 2258 "check_hlds.simplify.common.c"
                    {
#line 2260 "check_hlds.simplify.common.c"
                      return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_16_16, ((MR_Box) (check_hlds__simplify__common__V_6_6)), ((MR_Box) (check_hlds__simplify__common__V_10_10)));
                    }
#line 234 "common.m"
                  }
#line 234 "common.m"
              }
#line 234 "common.m"
          }
#line 234 "common.m"
      }
#line 234 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 234 "common.m"
  }
#line 234 "common.m"
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
#line 2302 "check_hlds.simplify.common.c"
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
#line 2328 "check_hlds.simplify.common.c"
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
#line 2348 "check_hlds.simplify.common.c"
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

#line 2423 "check_hlds.simplify.common.c"
        {
#line 2425 "check_hlds.simplify.common.c"
          check_hlds__simplify__common__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__common__V_3_3, check_hlds__simplify__common__V_6_6);
        }
#line 279 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 279 "common.m"
          {
#line 2432 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 2434 "check_hlds.simplify.common.c"
            {
#line 2436 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__common__V_4_4)), ((MR_Box) (check_hlds__simplify__common__V_7_7)));
            }
#line 279 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 279 "common.m"
              {
#line 2443 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_13_13 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
#line 2445 "check_hlds.simplify.common.c"
                {
#line 2447 "check_hlds.simplify.common.c"
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

#line 918 "common.m"
static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
#line 918 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_5,
#line 918 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_6,
#line 918 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_17,
#line 918 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_18)
#line 918 "common.m"
{
#line 921 "common.m"
  {
#line 921 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 921 "common.m"
    MR_Word check_hlds__simplify__common__RttiVarMaps0_8;
#line 921 "common.m"
    MR_Word check_hlds__simplify__common__FromVarRttiInfo_9;
#line 921 "common.m"
    MR_Word check_hlds__simplify__common__ToVarRttiInfo_10;
#line 932 "common.m"
    MR_Word check_hlds__simplify__common__TSubst_11;

#line 922 "common.m"
    {
#line 922 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, &check_hlds__simplify__common__RttiVarMaps0_8);
    }
#line 923 "common.m"
    {
#line 923 "common.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__simplify__common__RttiVarMaps0_8, check_hlds__simplify__common__FromVar_6, &check_hlds__simplify__common__FromVarRttiInfo_9);
    }
#line 924 "common.m"
    {
#line 924 "common.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__simplify__common__RttiVarMaps0_8, check_hlds__simplify__common__ToVar_5, &check_hlds__simplify__common__ToVarRttiInfo_10);
    }
#line 971 "common.m"
#line 971 "common.m"
    switch (MR_tag((MR_Word) check_hlds__simplify__common__ToVarRttiInfo_10)) {
#line 971 "common.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 971 "common.m"
      case (MR_Integer) 0:
#line 981 "common.m"
        {
#line 981 "common.m"
          MR_Word check_hlds__simplify__common__TypeInfo_14_40;
#line 981 "common.m"
          MR_Word check_hlds__simplify__common__TypeCtorInfo_15_41;

#line 981 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__FromVarRttiInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 981 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 981 "common.m"
            {
#line 2524 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__TypeInfo_14_40 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 2526 "check_hlds.simplify.common.c"
              check_hlds__simplify__common__TypeCtorInfo_15_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 983 "common.m"
              {
#line 983 "common.m"
                mercury__map__init_1_p_0(check_hlds__simplify__common__TypeInfo_14_40, check_hlds__simplify__common__TypeCtorInfo_15_41, &check_hlds__simplify__common__TSubst_11);
              }
#line 983 "common.m"
              check_hlds__simplify__common__succeeded = MR_TRUE;
#line 981 "common.m"
            }
#line 981 "common.m"
        }
#line 971 "common.m"
        break;
#line 971 "common.m"
      case (MR_Integer) 1:
#line 971 "common.m"
        {
#line 971 "common.m"
          MR_Word check_hlds__simplify__common__FromVarTypeInfoType_33;
#line 971 "common.m"
          MR_Word check_hlds__simplify__common__ToVarTypeInfoType_34;

#line 971 "common.m"
          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 1)));
#line 971 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 971 "common.m"
            {
#line 971 "common.m"
              check_hlds__simplify__common__FromVarTypeInfoType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__FromVarRttiInfo_9, (MR_Integer) 0)));
#line 972 "common.m"
              check_hlds__simplify__common__ToVarTypeInfoType_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__ToVarRttiInfo_10, (MR_Integer) 0)));
#line 973 "common.m"
              {
#line 973 "common.m"
                check_hlds__simplify__common__succeeded = parse_tree__prog_type__type_subsumes_3_p_0(check_hlds__simplify__common__ToVarTypeInfoType_34, check_hlds__simplify__common__FromVarTypeInfoType_33, &check_hlds__simplify__common__TSubst_11);
              }
#line 971 "common.m"
            }
#line 971 "common.m"
        }
#line 971 "common.m"
        break;
#line 971 "common.m"
      case (MR_Integer) 2:
#line 975 "common.m"
        {
#line 975 "common.m"
          MR_Word check_hlds__simplify__common__FromVarConstraint_35;
#line 975 "common.m"
          MR_Word check_hlds__simplify__common__ToVarConstraint_36;
#line 975 "common.m"
          MR_Word check_hlds__simplify__common__Name_37;
#line 975 "common.m"
          MR_Word check_hlds__simplify__common__FromArgs_38;
#line 975 "common.m"
          MR_Word check_hlds__simplify__common__ToArgs_39;
#line 975 "common.m"
          MR_Word check_hlds__simplify__common__V_42_42;

#line 975 "common.m"
          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 2)));
#line 975 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 975 "common.m"
            {
#line 975 "common.m"
              check_hlds__simplify__common__FromVarConstraint_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__FromVarRttiInfo_9, (MR_Integer) 0)));
#line 976 "common.m"
              check_hlds__simplify__common__ToVarConstraint_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__ToVarRttiInfo_10, (MR_Integer) 0)));
#line 977 "common.m"
              check_hlds__simplify__common__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__FromVarConstraint_35, (MR_Integer) 0)));
#line 977 "common.m"
              check_hlds__simplify__common__FromArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__FromVarConstraint_35, (MR_Integer) 1)));
#line 978 "common.m"
              check_hlds__simplify__common__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarConstraint_36, (MR_Integer) 0)));
#line 978 "common.m"
              check_hlds__simplify__common__ToArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarConstraint_36, (MR_Integer) 1)));
#line 978 "common.m"
              {
#line 978 "common.m"
                check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_37, check_hlds__simplify__common__V_42_42);
              }
#line 975 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 979 "common.m"
                {
#line 979 "common.m"
                  check_hlds__simplify__common__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__simplify__common__ToArgs_39, check_hlds__simplify__common__FromArgs_38, &check_hlds__simplify__common__TSubst_11);
                }
#line 975 "common.m"
            }
#line 975 "common.m"
        }
#line 971 "common.m"
        break;
#line 971 "common.m"
    }
#line 932 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 928 "common.m"
      {
#line 926 "common.m"
        {
#line 926 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__simplify__common__TSubst_11);
        }
#line 928 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 928 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_Info_18 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_17;
#line 928 "common.m"
        else
#line 929 "common.m"
          {
#line 929 "common.m"
            check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__TSubst_11, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
#line 929 "common.m"
            return;
          }
#line 928 "common.m"
      }
#line 932 "common.m"
    else
#line 942 "common.m"
#line 942 "common.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) {
#line 942 "common.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 942 "common.m"
        case (MR_Integer) 0:
#line 938 "common.m"
          {
#line 938 "common.m"
            MR_Word check_hlds__simplify__common__RttiVarMaps_12;

#line 939 "common.m"
            {
#line 939 "common.m"
              hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__RttiVarMaps0_8, &check_hlds__simplify__common__RttiVarMaps_12);
            }
#line 941 "common.m"
            {
#line 941 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__common__RttiVarMaps_12, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
#line 941 "common.m"
              return;
            }
#line 938 "common.m"
          }
#line 942 "common.m"
          break;
#line 942 "common.m"
        case (MR_Integer) 1:
#line 942 "common.m"
        case (MR_Integer) 2:
#line 951 "common.m"
#line 951 "common.m"
          switch (MR_tag((MR_Word) check_hlds__simplify__common__ToVarRttiInfo_10)) {
#line 951 "common.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 951 "common.m"
            case (MR_Integer) 0:
#line 947 "common.m"
              {
#line 947 "common.m"
                MR_Word check_hlds__simplify__common__RttiVarMaps_25;

#line 948 "common.m"
                {
#line 948 "common.m"
                  hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__RttiVarMaps0_8, &check_hlds__simplify__common__RttiVarMaps_25);
                }
#line 950 "common.m"
                {
#line 950 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__common__RttiVarMaps_25, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
#line 950 "common.m"
                  return;
                }
#line 947 "common.m"
              }
#line 951 "common.m"
              break;
#line 951 "common.m"
            case (MR_Integer) 1:
#line 951 "common.m"
            case (MR_Integer) 2:
#line 954 "common.m"
              {
#line 958 "common.m"
                {
#line 958 "common.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.apply_induced_substitutions\'/4", (MR_String) "inconsistent info");
#line 958 "common.m"
                  return;
                }
#line 954 "common.m"
              }
#line 951 "common.m"
              break;
#line 951 "common.m"
          }
#line 942 "common.m"
          break;
#line 942 "common.m"
      }
#line 921 "common.m"
  }
#line 918 "common.m"
}

#line 892 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
#line 892 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 892 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 892 "common.m"
{
#line 895 "common.m"
  while (MR_TRUE)
#line 895 "common.m"
    {
#line 895 "common.m"
      /* tailcall optimized into a loop */
#line 895 "common.m"
      {
#line 895 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 895 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "common.m"
        else
#line 896 "common.m"
          {
#line 896 "common.m"
            MR_Word check_hlds__simplify__common__Type1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 896 "common.m"
            MR_Word check_hlds__simplify__common__Types1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 896 "common.m"
            MR_Word check_hlds__simplify__common__Type2_5;
#line 896 "common.m"
            MR_Word check_hlds__simplify__common__Types2_6;

#line 896 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 896 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 896 "common.m"
              {
#line 896 "common.m"
                check_hlds__simplify__common__Type2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 896 "common.m"
                check_hlds__simplify__common__Types2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 897 "common.m"
                {
#line 897 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(check_hlds__simplify__common__Type1_3, check_hlds__simplify__common__Type2_5);
                }
#line 896 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 898 "common.m"
                  {
#line 898 "common.m"
                    /* direct tailcall eliminated */
#line 898 "common.m"
                    {
#line 898 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Types1_4;
#line 898 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Types2_6;

#line 898 "common.m"
                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 898 "common.m"
                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 898 "common.m"
                    }
#line 898 "common.m"
                    continue;
#line 898 "common.m"
                  }
#line 896 "common.m"
              }
#line 896 "common.m"
          }
#line 895 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 895 "common.m"
      }
#line 895 "common.m"
      break;
#line 895 "common.m"
    }
#line 892 "common.m"
}

#line 868 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
#line 868 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 868 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
#line 868 "common.m"
{
#line 870 "common.m"
  while (MR_TRUE)
#line 870 "common.m"
    {
#line 870 "common.m"
      /* tailcall optimized into a loop */
#line 870 "common.m"
      {
#line 870 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 870 "common.m"
#line 870 "common.m"
        switch (MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) {
#line 870 "common.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 870 "common.m"
          case (MR_Integer) 0:
#line 870 "common.m"
            {
#line 870 "common.m"
              MR_Word check_hlds__simplify__common__TypeInfo_43_43;
#line 870 "common.m"
              MR_Word check_hlds__simplify__common__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 870 "common.m"
              MR_Word check_hlds__simplify__common__V_35_35;
#line 870 "common.m"
              MR_Word check_hlds__simplify__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 870 "common.m"
              MR_Word check_hlds__simplify__common__V_5_5;

#line 870 "common.m"
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 870 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 870 "common.m"
                {
#line 870 "common.m"
                  check_hlds__simplify__common__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 870 "common.m"
                  check_hlds__simplify__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 2880 "check_hlds.simplify.common.c"
                  check_hlds__simplify__common__TypeInfo_43_43 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 870 "common.m"
                  {
#line 870 "common.m"
                    return check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_43_43, ((MR_Box) (check_hlds__simplify__common__TVar_3)), ((MR_Box) (check_hlds__simplify__common__V_35_35)));
                  }
#line 870 "common.m"
                }
#line 870 "common.m"
            }
#line 870 "common.m"
            break;
#line 870 "common.m"
          case (MR_Integer) 1:
#line 871 "common.m"
            {
#line 871 "common.m"
              MR_Word check_hlds__simplify__common__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 871 "common.m"
              MR_Word check_hlds__simplify__common__As_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 871 "common.m"
              MR_Word check_hlds__simplify__common__Bs_9;
#line 871 "common.m"
              MR_Word check_hlds__simplify__common__V_36_36;
#line 871 "common.m"
              MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 871 "common.m"
              MR_Word check_hlds__simplify__common__V_10_10;

#line 871 "common.m"
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 871 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 871 "common.m"
                {
#line 871 "common.m"
                  check_hlds__simplify__common__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 871 "common.m"
                  check_hlds__simplify__common__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 871 "common.m"
                  check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 871 "common.m"
                  {
#line 871 "common.m"
                    check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_6, check_hlds__simplify__common__V_36_36);
                  }
#line 871 "common.m"
                  if (check_hlds__simplify__common__succeeded)
#line 872 "common.m"
                    {
#line 872 "common.m"
                      return check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_7, check_hlds__simplify__common__Bs_9);
                    }
#line 871 "common.m"
                }
#line 871 "common.m"
            }
#line 870 "common.m"
            break;
#line 870 "common.m"
          case (MR_Integer) 2:
#line 873 "common.m"
            {
#line 873 "common.m"
              MR_Word check_hlds__simplify__common__BuiltinType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 873 "common.m"
              MR_Word check_hlds__simplify__common__V_37_37;

#line 873 "common.m"
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 873 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 873 "common.m"
                {
#line 873 "common.m"
                  check_hlds__simplify__common__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 873 "common.m"
                  check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__BuiltinType_11 == check_hlds__simplify__common__V_37_37);
#line 873 "common.m"
                }
#line 873 "common.m"
            }
#line 870 "common.m"
            break;
#line 870 "common.m"
          case (MR_Integer) 3:
#line 870 "common.m"
#line 870 "common.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)))) {
#line 870 "common.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 870 "common.m"
              case (MR_Integer) 0:
#line 885 "common.m"
                {
#line 885 "common.m"
                  MR_Word check_hlds__simplify__common__As_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 885 "common.m"
                  MR_Word check_hlds__simplify__common__Bs_22;
#line 885 "common.m"
                  MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 885 "common.m"
                  MR_Word check_hlds__simplify__common__V_23_23;

#line 885 "common.m"
                  check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 885 "common.m"
                  if (check_hlds__simplify__common__succeeded)
#line 885 "common.m"
                    {
#line 885 "common.m"
                      check_hlds__simplify__common__Bs_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 885 "common.m"
                      check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 886 "common.m"
                      {
#line 886 "common.m"
                        return check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_20, check_hlds__simplify__common__Bs_22);
                      }
#line 885 "common.m"
                    }
#line 885 "common.m"
                }
#line 870 "common.m"
                break;
#line 870 "common.m"
              case (MR_Integer) 1:
#line 875 "common.m"
                {
#line 875 "common.m"
                  MR_Word check_hlds__simplify__common__As_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 875 "common.m"
                  MR_Word check_hlds__simplify__common__AR_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 875 "common.m"
                  MR_Word check_hlds__simplify__common__P_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 875 "common.m"
                  MR_Word check_hlds__simplify__common__Bs_16;
#line 875 "common.m"
                  MR_Word check_hlds__simplify__common__BR_17;
#line 875 "common.m"
                  MR_Word check_hlds__simplify__common__V_38_38;

#line 875 "common.m"
                  check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 875 "common.m"
                  if (check_hlds__simplify__common__succeeded)
#line 875 "common.m"
                    {
#line 875 "common.m"
                      check_hlds__simplify__common__Bs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 875 "common.m"
                      check_hlds__simplify__common__BR_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 875 "common.m"
                      check_hlds__simplify__common__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 875 "common.m"
                      check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__P_14 == check_hlds__simplify__common__V_38_38);
#line 875 "common.m"
                      if (check_hlds__simplify__common__succeeded)
#line 875 "common.m"
                        {
#line 875 "common.m"
                          check_hlds__simplify__common__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 875 "common.m"
                          if (check_hlds__simplify__common__succeeded)
#line 875 "common.m"
                            {
#line 876 "common.m"
                              {
#line 876 "common.m"
                                check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_12, check_hlds__simplify__common__Bs_16);
                              }
#line 875 "common.m"
                              if (check_hlds__simplify__common__succeeded)
#line 881 "common.m"
                                {
#line 881 "common.m"
                                  if ((check_hlds__simplify__common__AR_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "common.m"
                                    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__BR_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "common.m"
                                  else
#line 878 "common.m"
                                    {
#line 878 "common.m"
                                      MR_Word check_hlds__simplify__common__A_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AR_13, (MR_Integer) 0)));
#line 878 "common.m"
                                      MR_Word check_hlds__simplify__common__B_19;

#line 879 "common.m"
                                      check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__BR_17)) == (MR_mktag((MR_Integer) 1)));
#line 879 "common.m"
                                      if (check_hlds__simplify__common__succeeded)
#line 879 "common.m"
                                        {
#line 879 "common.m"
                                          check_hlds__simplify__common__B_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__BR_17, (MR_Integer) 0)));
#line 880 "common.m"
                                          /* direct tailcall eliminated */
#line 880 "common.m"
                                          {
#line 880 "common.m"
                                            MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__A_18;
#line 880 "common.m"
                                            MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__B_19;

#line 880 "common.m"
                                            check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 880 "common.m"
                                            check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 880 "common.m"
                                          }
#line 880 "common.m"
                                          continue;
#line 879 "common.m"
                                        }
#line 878 "common.m"
                                    }
#line 881 "common.m"
                                }
#line 875 "common.m"
                            }
#line 875 "common.m"
                        }
#line 875 "common.m"
                    }
#line 875 "common.m"
                }
#line 870 "common.m"
                break;
#line 870 "common.m"
              case (MR_Integer) 2:
#line 887 "common.m"
                {
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__TypeInfo_41_41;
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__TVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__As_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__Bs_27;
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__V_40_40;
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
#line 887 "common.m"
                  MR_Word check_hlds__simplify__common__V_28_28;

#line 887 "common.m"
                  check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 887 "common.m"
                  if (check_hlds__simplify__common__succeeded)
#line 887 "common.m"
                    {
#line 887 "common.m"
                      check_hlds__simplify__common__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 887 "common.m"
                      check_hlds__simplify__common__Bs_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
#line 887 "common.m"
                      check_hlds__simplify__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
#line 3141 "check_hlds.simplify.common.c"
                      check_hlds__simplify__common__TypeInfo_41_41 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
#line 887 "common.m"
                      {
#line 887 "common.m"
                        check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_41_41, ((MR_Box) (check_hlds__simplify__common__TVar_24)), ((MR_Box) (check_hlds__simplify__common__V_40_40)));
                      }
#line 887 "common.m"
                      if (check_hlds__simplify__common__succeeded)
#line 888 "common.m"
                        {
#line 888 "common.m"
                          return check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_25, check_hlds__simplify__common__Bs_27);
                        }
#line 887 "common.m"
                    }
#line 887 "common.m"
                }
#line 870 "common.m"
                break;
#line 870 "common.m"
              case (MR_Integer) 3:
#line 889 "common.m"
                {
#line 890 "common.m"
                  {
#line 890 "common.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.types_match_exactly\'/2", (MR_String) "kind annotation");
                  }
#line 889 "common.m"
                  check_hlds__simplify__common__succeeded = MR_TRUE;
#line 889 "common.m"
                }
#line 870 "common.m"
                break;
#line 870 "common.m"
            }
#line 870 "common.m"
            break;
#line 870 "common.m"
        }
#line 870 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 870 "common.m"
      }
#line 870 "common.m"
      break;
#line 870 "common.m"
    }
#line 868 "common.m"
}

#line 826 "common.m"
static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__ToVar_11,
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__FromVar_12,
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__UniMode_13,
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_14,
#line 826 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_15,
#line 826 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_33,
#line 826 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_34,
#line 826 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_35,
#line 826 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_36)
#line 826 "common.m"
{
#line 832 "common.m"
  {
#line 832 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_19;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__ToVarType_20;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__FromVarType_21;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__NonLocals_22;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__ToVarInst0_24;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__ToVarInst_26;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__InstMapDelta_30;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__GoalInfo0_31;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__Context_32;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__V_38_38;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__V_39_39;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__V_41_41;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__V_42_42;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__V_63_63;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__V_64_64;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv0_75;
#line 832 "common.m"
    MR_Word check_hlds__simplify__common__VarEqv_76;
#line 839 "common.m"
    MR_Word check_hlds__simplify__common__V_23_23;
#line 839 "common.m"
    MR_Word check_hlds__simplify__common__V_25_25;
#line 545 "common.m"
    MR_Word check_hlds__simplify__common__V_78_78;
#line 545 "common.m"
    MR_Word check_hlds__simplify__common__V_79_79;
#line 545 "common.m"
    MR_Word check_hlds__simplify__common__V_80_80;
#line 547 "common.m"
    MR_Word check_hlds__simplify__common__V_82_82;
#line 547 "common.m"
    MR_Word check_hlds__simplify__common__V_83_83;
#line 547 "common.m"
    MR_Word check_hlds__simplify__common__V_84_84;
#line 547 "common.m"
    MR_Word check_hlds__simplify__common__V_81_81;

#line 833 "common.m"
    {
#line 833 "common.m"
      check_hlds__simplify__common__apply_induced_substitutions_4_p_0(check_hlds__simplify__common__ToVar_11, check_hlds__simplify__common__FromVar_12, check_hlds__simplify__common__STATE_VARIABLE_Info_0_35, check_hlds__simplify__common__STATE_VARIABLE_Info_36);
    }
#line 834 "common.m"
    {
#line 834 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(*check_hlds__simplify__common__STATE_VARIABLE_Info_36, &check_hlds__simplify__common__VarTypes_19);
    }
#line 835 "common.m"
    {
#line 835 "common.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_19, check_hlds__simplify__common__ToVar_11, &check_hlds__simplify__common__ToVarType_20);
    }
#line 836 "common.m"
    {
#line 836 "common.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_19, check_hlds__simplify__common__FromVar_12, &check_hlds__simplify__common__FromVarType_21);
    }
#line 838 "common.m"
    {
#line 838 "common.m"
      check_hlds__simplify__common__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_39_39, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 838 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 838 "common.m"
    }
#line 838 "common.m"
    {
#line 838 "common.m"
      check_hlds__simplify__common__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_38_38, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 838 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_38_38, 1) = ((MR_Box) (check_hlds__simplify__common__V_39_39));
#line 838 "common.m"
    }
#line 838 "common.m"
    {
#line 838 "common.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__common__V_38_38, &check_hlds__simplify__common__NonLocals_22);
    }
#line 839 "common.m"
    check_hlds__simplify__common__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_13, (MR_Integer) 0)));
#line 839 "common.m"
    check_hlds__simplify__common__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_13, (MR_Integer) 1)));
#line 839 "common.m"
    check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_41_41, (MR_Integer) 0)));
#line 839 "common.m"
    check_hlds__simplify__common__ToVarInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_41_41, (MR_Integer) 1)));
#line 839 "common.m"
    check_hlds__simplify__common__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_42_42, (MR_Integer) 0)));
#line 839 "common.m"
    check_hlds__simplify__common__ToVarInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_42_42, (MR_Integer) 1)));
#line 840 "common.m"
    {
#line 840 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(check_hlds__simplify__common__ToVarType_20, check_hlds__simplify__common__FromVarType_21);
    }
#line 845 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 841 "common.m"
      {
#line 841 "common.m"
        MR_Word check_hlds__simplify__common__UnifyMode_27;
#line 841 "common.m"
        MR_Word check_hlds__simplify__common__V_43_43;
#line 841 "common.m"
        MR_Word check_hlds__simplify__common__V_44_44;
#line 841 "common.m"
        MR_Word check_hlds__simplify__common__V_48_48;
#line 841 "common.m"
        MR_Word check_hlds__simplify__common__V_49_49;

#line 841 "common.m"
        {
#line 841 "common.m"
          check_hlds__simplify__common__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst0_24));
#line 841 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_43_43, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 841 "common.m"
        }
#line 841 "common.m"
        {
#line 841 "common.m"
          check_hlds__simplify__common__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_44_44, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 841 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_44_44, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 841 "common.m"
        }
#line 841 "common.m"
        {
#line 841 "common.m"
          check_hlds__simplify__common__UnifyMode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_27, 0) = ((MR_Box) (check_hlds__simplify__common__V_43_43));
#line 841 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_27, 1) = ((MR_Box) (check_hlds__simplify__common__V_44_44));
#line 841 "common.m"
        }
#line 843 "common.m"
        {
#line 843 "common.m"
          check_hlds__simplify__common__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 843 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_48_48, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 843 "common.m"
        }
#line 844 "common.m"
        {
#line 844 "common.m"
          check_hlds__simplify__common__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "common.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__common__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 844 "common.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__common__V_49_49, 1) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 844 "common.m"
        }
#line 843 "common.m"
        {
#line 843 "common.m"
          MR_Word base;
#line 843 "common.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 843 "common.m"
          *check_hlds__simplify__common__GoalExpr_15 = base;
#line 843 "common.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 843 "common.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_48_48));
#line 843 "common.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__common__UnifyMode_27));
#line 843 "common.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_49_49));
#line 843 "common.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[10]));
#line 843 "common.m"
        }
#line 841 "common.m"
      }
#line 845 "common.m"
    else
#line 852 "common.m"
      {
#line 852 "common.m"
        MR_Word check_hlds__simplify__common__Modes_29;
#line 852 "common.m"
        MR_Word check_hlds__simplify__common__V_50_50;
#line 852 "common.m"
        MR_Word check_hlds__simplify__common__V_52_52;
#line 852 "common.m"
        MR_Word check_hlds__simplify__common__V_53_53;
#line 852 "common.m"
        MR_Word check_hlds__simplify__common__V_58_58;
#line 852 "common.m"
        MR_Word check_hlds__simplify__common__V_59_59;

#line 852 "common.m"
        {
#line 852 "common.m"
          check_hlds__simplify__common__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 852 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_50_50, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 852 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 852 "common.m"
        }
#line 852 "common.m"
        {
#line 852 "common.m"
          check_hlds__simplify__common__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 852 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_53_53, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 852 "common.m"
        }
#line 852 "common.m"
        {
#line 852 "common.m"
          check_hlds__simplify__common__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__V_53_53));
#line 852 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "common.m"
        }
#line 852 "common.m"
        {
#line 852 "common.m"
          check_hlds__simplify__common__Modes_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Modes_29, 0) = ((MR_Box) (check_hlds__simplify__common__V_50_50));
#line 852 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Modes_29, 1) = ((MR_Box) (check_hlds__simplify__common__V_52_52));
#line 852 "common.m"
        }
#line 853 "common.m"
        {
#line 853 "common.m"
          check_hlds__simplify__common__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "common.m"
        }
#line 853 "common.m"
        {
#line 853 "common.m"
          check_hlds__simplify__common__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_58_58, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
#line 853 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_58_58, 1) = ((MR_Box) (check_hlds__simplify__common__V_59_59));
#line 853 "common.m"
        }
#line 853 "common.m"
        {
#line 853 "common.m"
          MR_Word base;
#line 853 "common.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 853 "common.m"
          *check_hlds__simplify__common__GoalExpr_15 = base;
#line 853 "common.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 853 "common.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_5[1])));
#line 853 "common.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_58_58));
#line 853 "common.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__common__Modes_29));
#line 853 "common.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "common.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 853 "common.m"
        }
#line 852 "common.m"
      }
#line 859 "common.m"
    {
#line 859 "common.m"
      check_hlds__simplify__common__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 859 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
#line 859 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarInst_26));
#line 859 "common.m"
    }
#line 859 "common.m"
    {
#line 859 "common.m"
      check_hlds__simplify__common__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__common__V_64_64));
#line 859 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 859 "common.m"
    }
#line 859 "common.m"
    {
#line 859 "common.m"
      check_hlds__simplify__common__InstMapDelta_30 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__common__V_63_63);
    }
#line 861 "common.m"
    {
#line 861 "common.m"
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__common__NonLocals_22, check_hlds__simplify__common__InstMapDelta_30, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__common__GoalInfo0_31);
    }
#line 863 "common.m"
    {
#line 863 "common.m"
      check_hlds__simplify__common__Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__OldGoalInfo_14);
    }
#line 864 "common.m"
    {
#line 864 "common.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__simplify__common__Context_32, check_hlds__simplify__common__GoalInfo0_31, check_hlds__simplify__common__GoalInfo_16);
    }
#line 545 "common.m"
    check_hlds__simplify__common__VarEqv0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 0)));
#line 545 "common.m"
    check_hlds__simplify__common__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 1)));
#line 545 "common.m"
    check_hlds__simplify__common__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 2)));
#line 545 "common.m"
    check_hlds__simplify__common__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 3)));
#line 546 "common.m"
    {
#line 546 "common.m"
      mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__ToVar_11)), ((MR_Box) (check_hlds__simplify__common__FromVar_12)), check_hlds__simplify__common__VarEqv0_75, &check_hlds__simplify__common__VarEqv_76);
    }
#line 547 "common.m"
    check_hlds__simplify__common__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 0)));
#line 547 "common.m"
    check_hlds__simplify__common__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 1)));
#line 547 "common.m"
    check_hlds__simplify__common__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 2)));
#line 547 "common.m"
    check_hlds__simplify__common__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_33, (MR_Integer) 3)));
#line 547 "common.m"
    {
#line 547 "common.m"
      MR_Word base;
#line 547 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 547 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Common_34 = base;
#line 547 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_76));
#line 547 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_82_82));
#line 547 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_83_83));
#line 547 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_84_84));
#line 547 "common.m"
    }
#line 832 "common.m"
  }
#line 826 "common.m"
}

#line 786 "common.m"
static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__OldGoalInfo_10,
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_11,
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__OldOutputArgs_12,
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_13,
#line 786 "common.m"
  MR_Word * check_hlds__simplify__common__AssignGoals_14,
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_27,
#line 786 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_28,
#line 786 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_29,
#line 786 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_30)
#line 786 "common.m"
{
#line 814 "common.m"
  while (MR_TRUE)
#line 814 "common.m"
    {
#line 814 "common.m"
      /* tailcall optimized into a loop */
#line 814 "common.m"
      {
#line 814 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__OutputArgs_11)) == (MR_mktag((MR_Integer) 1)));
#line 814 "common.m"
        MR_Word check_hlds__simplify__common__HeadOutputArg_17;
#line 814 "common.m"
        MR_Word check_hlds__simplify__common__TailOutputArgs_18;
#line 814 "common.m"
        MR_Word check_hlds__simplify__common__HeadOldOutputArg_19;
#line 814 "common.m"
        MR_Word check_hlds__simplify__common__TailOldOutputArgs_20;
#line 814 "common.m"
        MR_Word check_hlds__simplify__common__HeadUniMode_21;
#line 814 "common.m"
        MR_Word check_hlds__simplify__common__TailUniModes_22;

#line 794 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 794 "common.m"
          {
#line 794 "common.m"
            check_hlds__simplify__common__HeadOutputArg_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OutputArgs_11, (MR_Integer) 0)));
#line 794 "common.m"
            check_hlds__simplify__common__TailOutputArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OutputArgs_11, (MR_Integer) 1)));
#line 795 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__OldOutputArgs_12)) == (MR_mktag((MR_Integer) 1)));
#line 795 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 795 "common.m"
              {
#line 795 "common.m"
                check_hlds__simplify__common__HeadOldOutputArg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OldOutputArgs_12, (MR_Integer) 0)));
#line 795 "common.m"
                check_hlds__simplify__common__TailOldOutputArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OldOutputArgs_12, (MR_Integer) 1)));
#line 796 "common.m"
                check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__UniModes_13)) == (MR_mktag((MR_Integer) 1)));
#line 796 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 796 "common.m"
                  {
#line 796 "common.m"
                    check_hlds__simplify__common__HeadUniMode_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__UniModes_13, (MR_Integer) 0)));
#line 796 "common.m"
                    check_hlds__simplify__common__TailUniModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__UniModes_13, (MR_Integer) 1)));
#line 796 "common.m"
                  }
#line 795 "common.m"
              }
#line 794 "common.m"
          }
#line 814 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 804 "common.m"
          {
#line 798 "common.m"
            {
#line 798 "common.m"
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__HeadOutputArg_17)), ((MR_Box) (check_hlds__simplify__common__HeadOldOutputArg_19)));
            }
#line 804 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 801 "common.m"
              {
#line 801 "common.m"
                /* direct tailcall eliminated */
#line 801 "common.m"
                {
#line 801 "common.m"
                  MR_Word check_hlds__simplify__common__OutputArgs__tmp_copy_11 = check_hlds__simplify__common__TailOutputArgs_18;
#line 801 "common.m"
                  MR_Word check_hlds__simplify__common__OldOutputArgs__tmp_copy_12 = check_hlds__simplify__common__TailOldOutputArgs_20;
#line 801 "common.m"
                  MR_Word check_hlds__simplify__common__UniModes__tmp_copy_13 = check_hlds__simplify__common__TailUniModes_22;

#line 801 "common.m"
                  check_hlds__simplify__common__UniModes_13 = check_hlds__simplify__common__UniModes__tmp_copy_13;
#line 801 "common.m"
                  check_hlds__simplify__common__OldOutputArgs_12 = check_hlds__simplify__common__OldOutputArgs__tmp_copy_12;
#line 801 "common.m"
                  check_hlds__simplify__common__OutputArgs_11 = check_hlds__simplify__common__OutputArgs__tmp_copy_11;
#line 801 "common.m"
                }
#line 801 "common.m"
                continue;
#line 801 "common.m"
              }
#line 804 "common.m"
            else
#line 807 "common.m"
              {
#line 807 "common.m"
                MR_Word check_hlds__simplify__common__HeadAssignGoalExpr_23;
#line 807 "common.m"
                MR_Word check_hlds__simplify__common__HeadAssignGoalInfo_24;
#line 807 "common.m"
                MR_Word check_hlds__simplify__common__HeadAssignGoal_25;
#line 807 "common.m"
                MR_Word check_hlds__simplify__common__TailAssignGoals_26;
#line 807 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_33_33;
#line 807 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_34_34;

#line 805 "common.m"
                {
#line 805 "common.m"
                  check_hlds__simplify__common__generate_assign_10_p_0(check_hlds__simplify__common__HeadOutputArg_17, check_hlds__simplify__common__HeadOldOutputArg_19, check_hlds__simplify__common__HeadUniMode_21, check_hlds__simplify__common__OldGoalInfo_10, &check_hlds__simplify__common__HeadAssignGoalExpr_23, &check_hlds__simplify__common__HeadAssignGoalInfo_24, check_hlds__simplify__common__STATE_VARIABLE_Common_0_27, &check_hlds__simplify__common__STATE_VARIABLE_Common_33_33, check_hlds__simplify__common__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__common__STATE_VARIABLE_Info_34_34);
                }
#line 808 "common.m"
                {
#line 808 "common.m"
                  check_hlds__simplify__common__HeadAssignGoal_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 808 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadAssignGoal_25, 0) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoalExpr_23));
#line 808 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadAssignGoal_25, 1) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoalInfo_24));
#line 808 "common.m"
                }
#line 809 "common.m"
                {
#line 809 "common.m"
                  check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__OldGoalInfo_10, check_hlds__simplify__common__TailOutputArgs_18, check_hlds__simplify__common__TailOldOutputArgs_20, check_hlds__simplify__common__TailUniModes_22, &check_hlds__simplify__common__TailAssignGoals_26, check_hlds__simplify__common__STATE_VARIABLE_Common_33_33, check_hlds__simplify__common__STATE_VARIABLE_Common_28, check_hlds__simplify__common__STATE_VARIABLE_Info_34_34, check_hlds__simplify__common__STATE_VARIABLE_Info_30);
                }
#line 812 "common.m"
                {
#line 812 "common.m"
                  MR_Word base;
#line 812 "common.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "common.m"
                  *check_hlds__simplify__common__AssignGoals_14 = base;
#line 812 "common.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoal_25));
#line 812 "common.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__TailAssignGoals_26));
#line 812 "common.m"
                }
#line 807 "common.m"
              }
#line 804 "common.m"
          }
#line 814 "common.m"
        else
#line 820 "common.m"
          {
#line 815 "common.m"
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__OutputArgs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 815 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 815 "common.m"
              {
#line 816 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__OldOutputArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 815 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 817 "common.m"
                  check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__UniModes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 815 "common.m"
              }
#line 820 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 819 "common.m"
              *check_hlds__simplify__common__AssignGoals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "common.m"
            else
#line 821 "common.m"
              {
#line 821 "common.m"
                {
#line 821 "common.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.create_output_unifications\'/9", (MR_String) "mode mismatch");
#line 821 "common.m"
                  return;
                }
#line 821 "common.m"
              }
#line 820 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_30 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_29;
#line 820 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Common_28 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_27;
#line 820 "common.m"
          }
#line 814 "common.m"
      }
#line 814 "common.m"
      break;
#line 814 "common.m"
    }
#line 786 "common.m"
}

#line 752 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
#line 752 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 752 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 752 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 752 "common.m"
{
#line 755 "common.m"
  while (MR_TRUE)
#line 755 "common.m"
    {
#line 755 "common.m"
      /* tailcall optimized into a loop */
#line 755 "common.m"
      {
#line 755 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 755 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 755 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "common.m"
        else
#line 756 "common.m"
          {
#line 756 "common.m"
            MR_Word check_hlds__simplify__common__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 756 "common.m"
            MR_Word check_hlds__simplify__common__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 756 "common.m"
            MR_Word check_hlds__simplify__common__Y_7;
#line 756 "common.m"
            MR_Word check_hlds__simplify__common__Ys_8;

#line 756 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 756 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 756 "common.m"
              {
#line 756 "common.m"
                check_hlds__simplify__common__Y_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 756 "common.m"
                check_hlds__simplify__common__Ys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 772 "common.m"
                {
#line 772 "common.m"
                  {
#line 772 "common.m"
                    check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__X_5)), ((MR_Box) (check_hlds__simplify__common__Y_7)));
                  }
#line 772 "common.m"
                }
#line 772 "common.m"
                if (!(check_hlds__simplify__common__succeeded))
#line 774 "common.m"
                  {
#line 774 "common.m"
                    MR_Word check_hlds__simplify__common__TypeInfo_8_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 774 "common.m"
                    MR_Integer check_hlds__simplify__common__Id_13;
#line 774 "common.m"
                    MR_Integer check_hlds__simplify__common__V_15_15;

#line 774 "common.m"
                    {
#line 774 "common.m"
                      check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__X_5)), &check_hlds__simplify__common__Id_13);
                    }
#line 774 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 774 "common.m"
                      {
#line 775 "common.m"
                        {
#line 775 "common.m"
                          check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__Y_7)), &check_hlds__simplify__common__V_15_15);
                        }
#line 774 "common.m"
                        if (check_hlds__simplify__common__succeeded)
#line 775 "common.m"
                          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_13 == check_hlds__simplify__common__V_15_15);
#line 774 "common.m"
                      }
#line 774 "common.m"
                  }
#line 756 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 758 "common.m"
                  {
#line 758 "common.m"
                    /* direct tailcall eliminated */
#line 758 "common.m"
                    {
#line 758 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Xs_6;
#line 758 "common.m"
                      MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Ys_8;

#line 758 "common.m"
                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 758 "common.m"
                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 758 "common.m"
                    }
#line 758 "common.m"
                    continue;
#line 758 "common.m"
                  }
#line 756 "common.m"
              }
#line 756 "common.m"
          }
#line 755 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 755 "common.m"
      }
#line 755 "common.m"
      break;
#line 755 "common.m"
    }
#line 752 "common.m"
}

#line 734 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
#line 734 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 734 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_8,
#line 734 "common.m"
  MR_Word check_hlds__simplify__common__Eqv_9,
#line 734 "common.m"
  MR_Word * check_hlds__simplify__common__OutputArgs_10,
#line 734 "common.m"
  MR_Word * check_hlds__simplify__common__PrevContext_11)
#line 734 "common.m"
{
#line 739 "common.m"
  {
#line 739 "common.m"
    MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 739 "common.m"
    MR_Word check_hlds__simplify__common__SeenCall_6;
#line 739 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls_7;
#line 739 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs1_12;
#line 739 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs1_13;

#line 738 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 738 "common.m"
      {
#line 738 "common.m"
        check_hlds__simplify__common__SeenCall_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 738 "common.m"
        check_hlds__simplify__common__SeenCalls_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 740 "common.m"
        *check_hlds__simplify__common__PrevContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 0)));
#line 740 "common.m"
        check_hlds__simplify__common__InputArgs1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 1)));
#line 740 "common.m"
        check_hlds__simplify__common__OutputArgs1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 2)));
#line 741 "common.m"
        {
#line 741 "common.m"
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(check_hlds__simplify__common__InputArgs_8, check_hlds__simplify__common__InputArgs1_12, check_hlds__simplify__common__Eqv_9);
        }
#line 743 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 742 "common.m"
          {
#line 742 "common.m"
            *check_hlds__simplify__common__OutputArgs_10 = check_hlds__simplify__common__OutputArgs1_13;
#line 742 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 742 "common.m"
          }
#line 743 "common.m"
        else
#line 744 "common.m"
          {
#line 744 "common.m"
            MR_Word check_hlds__simplify__common__V_14_14;

#line 744 "common.m"
            {
#line 744 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(check_hlds__simplify__common__SeenCalls_7, check_hlds__simplify__common__InputArgs_8, check_hlds__simplify__common__Eqv_9, check_hlds__simplify__common__OutputArgs_10, &check_hlds__simplify__common__V_14_14);
            }
#line 744 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 744 "common.m"
              {
#line 744 "common.m"
                return check_hlds__simplify__common__succeeded = mercury__term____Unify____context_0_0(*check_hlds__simplify__common__PrevContext_11, check_hlds__simplify__common__V_14_14);
              }
#line 744 "common.m"
          }
#line 738 "common.m"
      }
#line 739 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 739 "common.m"
  }
#line 734 "common.m"
}

#line 692 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
#line 692 "common.m"
  MR_Word check_hlds__simplify__common__VarTypes_1,
#line 692 "common.m"
  MR_Word check_hlds__simplify__common__ModuleInfo_2,
#line 692 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3,
#line 692 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__4_4,
#line 692 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__5_5,
#line 692 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__6_6,
#line 692 "common.m"
  MR_Word * check_hlds__simplify__common__HeadVar__7_7)
#line 692 "common.m"
{
#line 696 "common.m"
  {
#line 696 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 696 "common.m"
    if ((check_hlds__simplify__common__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "common.m"
      {
#line 696 "common.m"
        if ((check_hlds__simplify__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "common.m"
          {
#line 696 "common.m"
            *check_hlds__simplify__common__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "common.m"
            *check_hlds__simplify__common__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "common.m"
            *check_hlds__simplify__common__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "common.m"
          }
#line 696 "common.m"
        else
#line 697 "common.m"
          {
#line 698 "common.m"
            {
#line 698 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (1)");
            }
#line 697 "common.m"
          }
#line 696 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 696 "common.m"
      }
#line 696 "common.m"
    else
#line 696 "common.m"
      {
#line 696 "common.m"
        MR_Word check_hlds__simplify__common__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
#line 696 "common.m"
        MR_Word check_hlds__simplify__common__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));

#line 696 "common.m"
        if ((check_hlds__simplify__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "common.m"
          {
#line 700 "common.m"
            {
#line 700 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (2)");
            }
#line 699 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 699 "common.m"
          }
#line 696 "common.m"
        else
#line 702 "common.m"
          {
#line 702 "common.m"
            MR_Word check_hlds__simplify__common__Arg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__4_4, (MR_Integer) 0)));
#line 702 "common.m"
            MR_Word check_hlds__simplify__common__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__4_4, (MR_Integer) 1)));
#line 702 "common.m"
            MR_Word check_hlds__simplify__common__InputArgs1_39;
#line 702 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgs1_40;
#line 702 "common.m"
            MR_Word check_hlds__simplify__common__OutputModes1_41;
#line 702 "common.m"
            MR_Word check_hlds__simplify__common__InitialInst_42;
#line 702 "common.m"
            MR_Word check_hlds__simplify__common__FinalInst_43;
#line 702 "common.m"
            MR_Word check_hlds__simplify__common__Type_44;

#line 703 "common.m"
            {
#line 703 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_1, check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__V_46_46, check_hlds__simplify__common__Args_35, &check_hlds__simplify__common__InputArgs1_39, &check_hlds__simplify__common__OutputArgs1_40, &check_hlds__simplify__common__OutputModes1_41);
            }
#line 702 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 702 "common.m"
              {
#line 705 "common.m"
                {
#line 705 "common.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__V_47_47, &check_hlds__simplify__common__InitialInst_42, &check_hlds__simplify__common__FinalInst_43);
                }
#line 706 "common.m"
                {
#line 706 "common.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_1, check_hlds__simplify__common__Arg_34, &check_hlds__simplify__common__Type_44);
                }
#line 707 "common.m"
                {
#line 707 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__simplify__common__InitialInst_42, check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__Type_44, check_hlds__simplify__common__ModuleInfo_2);
                }
#line 711 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 708 "common.m"
                  {
#line 708 "common.m"
                    {
#line 708 "common.m"
                      MR_Word base;
#line 708 "common.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "common.m"
                      *check_hlds__simplify__common__HeadVar__5_5 = base;
#line 708 "common.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Arg_34));
#line 708 "common.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs1_39));
#line 708 "common.m"
                    }
#line 709 "common.m"
                    *check_hlds__simplify__common__HeadVar__6_6 = check_hlds__simplify__common__OutputArgs1_40;
#line 710 "common.m"
                    *check_hlds__simplify__common__HeadVar__7_7 = check_hlds__simplify__common__OutputModes1_41;
#line 708 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 708 "common.m"
                  }
#line 711 "common.m"
                else
#line 714 "common.m"
                  {
#line 714 "common.m"
                    {
#line 714 "common.m"
                      check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__FinalInst_43);
                    }
#line 714 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 714 "common.m"
                      {
#line 720 "common.m"
                        {
#line 720 "common.m"
                          check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__Type_44, check_hlds__simplify__common__ModuleInfo_2);
                        }
#line 714 "common.m"
                        if (check_hlds__simplify__common__succeeded)
#line 714 "common.m"
                          {
#line 725 "common.m"
                            {
#line 725 "common.m"
                              check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__InitialInst_42);
                            }
#line 714 "common.m"
                            if (check_hlds__simplify__common__succeeded)
#line 714 "common.m"
                              {
#line 727 "common.m"
                                *check_hlds__simplify__common__HeadVar__5_5 = check_hlds__simplify__common__InputArgs1_39;
#line 728 "common.m"
                                {
#line 728 "common.m"
                                  MR_Word base;
#line 728 "common.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "common.m"
                                  *check_hlds__simplify__common__HeadVar__6_6 = base;
#line 728 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Arg_34));
#line 728 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__OutputArgs1_40));
#line 728 "common.m"
                                }
#line 729 "common.m"
                                {
#line 729 "common.m"
                                  MR_Word base;
#line 729 "common.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "common.m"
                                  *check_hlds__simplify__common__HeadVar__7_7 = base;
#line 729 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_47_47));
#line 729 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__OutputModes1_41));
#line 729 "common.m"
                                }
#line 729 "common.m"
                                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 714 "common.m"
                              }
#line 714 "common.m"
                          }
#line 714 "common.m"
                      }
#line 714 "common.m"
                  }
#line 702 "common.m"
              }
#line 702 "common.m"
          }
#line 696 "common.m"
      }
#line 696 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 696 "common.m"
  }
#line 692 "common.m"
}

#line 598 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__SeenCall_12,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__InputArgs_13,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__OutputArgs_14,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__Modes_15,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo_16,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 598 "common.m"
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__Common0_19,
#line 598 "common.m"
  MR_Word * check_hlds__simplify__common__Common_20,
#line 598 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 598 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 598 "common.m"
{
#line 605 "common.m"
  {
#line 605 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 605 "common.m"
    MR_Word check_hlds__simplify__common__Eqv0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 605 "common.m"
    MR_Word check_hlds__simplify__common__SeenCalls0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 606 "common.m"
    MR_Word check_hlds__simplify__common__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 606 "common.m"
    MR_Word check_hlds__simplify__common__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 678 "common.m"
    MR_Word check_hlds__simplify__common__SeenCallsList0_24;
#line 608 "common.m"
    MR_Box check_hlds__simplify__common__conv0_SeenCallsList0_24;

#line 608 "common.m"
    {
#line 608 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], check_hlds__simplify__common__SeenCalls0_23, ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), &check_hlds__simplify__common__conv0_SeenCallsList0_24);
    }
#line 608 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 608 "common.m"
      {
#line 608 "common.m"
        check_hlds__simplify__common__SeenCallsList0_24 = ((MR_Word) check_hlds__simplify__common__conv0_SeenCallsList0_24);
#line 608 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 608 "common.m"
      }
#line 678 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 670 "common.m"
      {
#line 670 "common.m"
        MR_Word check_hlds__simplify__common__OutputArgs2_25;
#line 670 "common.m"
        MR_Word check_hlds__simplify__common__PrevContext_26;

#line 610 "common.m"
        {
#line 610 "common.m"
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(check_hlds__simplify__common__SeenCallsList0_24, check_hlds__simplify__common__InputArgs_13, check_hlds__simplify__common__Eqv0_22, &check_hlds__simplify__common__OutputArgs2_25, &check_hlds__simplify__common__PrevContext_26);
        }
#line 670 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 613 "common.m"
          {
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__ModuleInfo_27;
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__UniModes_28;
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__AssignGoals_29;
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__AssignsGoalExpr_32;
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__VarTypes_33;
#line 613 "common.m"
            MR_Integer check_hlds__simplify__common__Cost_44;
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__Detism0_45;
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_51_51;
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_97_97;
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__V_98_98;
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_99_99;
#line 613 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_100_100;
#line 619 "common.m"
            MR_Word check_hlds__simplify__common__OnlyGoalExpr_30;
#line 617 "common.m"
            MR_Word check_hlds__simplify__common__V_52_52;
#line 617 "common.m"
            MR_Word check_hlds__simplify__common__V_53_53;
#line 617 "common.m"
            MR_Word check_hlds__simplify__common___OnlyGoalInfo_31;
#line 625 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgTypes1_34;
#line 625 "common.m"
            MR_Word check_hlds__simplify__common__OutputArgTypes2_35;

#line 613 "common.m"
            {
#line 613 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_27);
            }
#line 614 "common.m"
            {
#line 614 "common.m"
              check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__Modes_15, check_hlds__simplify__common__Modes_15, &check_hlds__simplify__common__UniModes_28);
            }
#line 615 "common.m"
            {
#line 615 "common.m"
              check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__OutputArgs_14, check_hlds__simplify__common__OutputArgs2_25, check_hlds__simplify__common__UniModes_28, &check_hlds__simplify__common__AssignGoals_29, check_hlds__simplify__common__Common0_19, check_hlds__simplify__common__Common_20, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_51_51);
            }
#line 617 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__AssignGoals_29)) == (MR_mktag((MR_Integer) 1)));
#line 617 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 617 "common.m"
              {
#line 617 "common.m"
                check_hlds__simplify__common__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AssignGoals_29, (MR_Integer) 0)));
#line 617 "common.m"
                check_hlds__simplify__common__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AssignGoals_29, (MR_Integer) 1)));
#line 617 "common.m"
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 617 "common.m"
                  {
#line 617 "common.m"
                    check_hlds__simplify__common__OnlyGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, (MR_Integer) 0)));
#line 617 "common.m"
                    check_hlds__simplify__common___OnlyGoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, (MR_Integer) 1)));
#line 617 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 617 "common.m"
                  }
#line 617 "common.m"
              }
#line 619 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 618 "common.m"
              check_hlds__simplify__common__AssignsGoalExpr_32 = check_hlds__simplify__common__OnlyGoalExpr_30;
#line 619 "common.m"
            else
#line 620 "common.m"
              {
#line 620 "common.m"
                {
#line 620 "common.m"
                  check_hlds__simplify__common__AssignsGoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 620 "common.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 620 "common.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 620 "common.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__common__AssignGoals_29));
#line 620 "common.m"
                }
#line 620 "common.m"
              }
#line 622 "common.m"
            {
#line 622 "common.m"
              MR_Word base;
#line 622 "common.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 622 "common.m"
              *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = base;
#line 622 "common.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__AssignsGoalExpr_32));
#line 622 "common.m"
            }
#line 623 "common.m"
            {
#line 623 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_51_51, &check_hlds__simplify__common__VarTypes_33);
            }
#line 625 "common.m"
            {
#line 625 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_51_51);
            }
#line 625 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 625 "common.m"
              {
#line 629 "common.m"
                {
#line 629 "common.m"
                  hlds__vartypes__lookup_var_types_3_p_0(check_hlds__simplify__common__VarTypes_33, check_hlds__simplify__common__OutputArgs_14, &check_hlds__simplify__common__OutputArgTypes1_34);
                }
#line 630 "common.m"
                {
#line 630 "common.m"
                  hlds__vartypes__lookup_var_types_3_p_0(check_hlds__simplify__common__VarTypes_33, check_hlds__simplify__common__OutputArgs2_25, &check_hlds__simplify__common__OutputArgTypes2_35);
                }
#line 631 "common.m"
                {
#line 631 "common.m"
                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__OutputArgTypes1_34, check_hlds__simplify__common__OutputArgTypes2_35);
                }
#line 625 "common.m"
              }
#line 650 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 633 "common.m"
              {
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__TypeCtorInfo_125_125;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__Context_36;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__CallPieces_37;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__CurPieces_38;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__PrevPieces_39;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__Msg_41;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__PrevMsg_42;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__Spec_43;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_55_55;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_58_58;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_62_62;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_73_73;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_74_74;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_77_77;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_78_78;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_81_81;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_84_84;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_85_85;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_88_88;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_89_89;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_94_94;
#line 633 "common.m"
                MR_Word check_hlds__simplify__common__V_95_95;

#line 633 "common.m"
                {
#line 633 "common.m"
                  check_hlds__simplify__common__Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
                }
#line 634 "common.m"
                {
#line 634 "common.m"
                  check_hlds__simplify__common__CallPieces_37 = check_hlds__det_report__det_report_seen_call_id_2_f_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__SeenCall_12);
                }
#line 4555 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 635 "common.m"
                {
#line 635 "common.m"
                  check_hlds__simplify__common__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[6])));
#line 635 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_55_55, 1) = ((MR_Box) (check_hlds__simplify__common__CallPieces_37));
#line 635 "common.m"
                }
#line 636 "common.m"
                check_hlds__simplify__common__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_1[8]);
#line 636 "common.m"
                {
#line 636 "common.m"
                  check_hlds__simplify__common__CurPieces_38 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__common__TypeCtorInfo_125_125, check_hlds__simplify__common__V_55_55, check_hlds__simplify__common__V_58_58);
                }
#line 637 "common.m"
                {
#line 637 "common.m"
                  check_hlds__simplify__common__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[9])));
#line 637 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_62_62, 1) = ((MR_Box) (check_hlds__simplify__common__CallPieces_37));
#line 637 "common.m"
                }
#line 638 "common.m"
                {
#line 638 "common.m"
                  check_hlds__simplify__common__PrevPieces_39 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__common__TypeCtorInfo_125_125, check_hlds__simplify__common__V_62_62, check_hlds__simplify__common__V_58_58);
                }
#line 643 "common.m"
                {
#line 643 "common.m"
                  check_hlds__simplify__common__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 643 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_78_78, 0) = ((MR_Box) (check_hlds__simplify__common__CurPieces_38));
#line 643 "common.m"
                }
#line 643 "common.m"
                {
#line 643 "common.m"
                  check_hlds__simplify__common__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__common__V_78_78));
#line 643 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "common.m"
                }
#line 642 "common.m"
                {
#line 642 "common.m"
                  check_hlds__simplify__common__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_74_74, 0) = ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 642 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_74_74, 1) = ((MR_Box) (check_hlds__simplify__common__V_77_77));
#line 642 "common.m"
                }
#line 643 "common.m"
                {
#line 643 "common.m"
                  check_hlds__simplify__common__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_73_73, 0) = ((MR_Box) (check_hlds__simplify__common__V_74_74));
#line 643 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "common.m"
                }
#line 641 "common.m"
                {
#line 641 "common.m"
                  check_hlds__simplify__common__Msg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Msg_41, 0) = ((MR_Box) (check_hlds__simplify__common__Context_36));
#line 641 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Msg_41, 1) = ((MR_Box) (check_hlds__simplify__common__V_73_73));
#line 641 "common.m"
                }
#line 644 "common.m"
                {
#line 644 "common.m"
                  check_hlds__simplify__common__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_81_81, 0) = ((MR_Box) (check_hlds__simplify__common__PrevContext_26));
#line 644 "common.m"
                }
#line 646 "common.m"
                {
#line 646 "common.m"
                  check_hlds__simplify__common__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 646 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_89_89, 0) = ((MR_Box) (check_hlds__simplify__common__PrevPieces_39));
#line 646 "common.m"
                }
#line 646 "common.m"
                {
#line 646 "common.m"
                  check_hlds__simplify__common__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_88_88, 0) = ((MR_Box) (check_hlds__simplify__common__V_89_89));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "common.m"
                }
#line 645 "common.m"
                {
#line 645 "common.m"
                  check_hlds__simplify__common__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_85_85, 0) = ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 645 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_85_85, 1) = ((MR_Box) (check_hlds__simplify__common__V_88_88));
#line 645 "common.m"
                }
#line 646 "common.m"
                {
#line 646 "common.m"
                  check_hlds__simplify__common__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_84_84, 0) = ((MR_Box) (check_hlds__simplify__common__V_85_85));
#line 646 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "common.m"
                }
#line 644 "common.m"
                {
#line 644 "common.m"
                  check_hlds__simplify__common__PrevMsg_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 0) = ((MR_Box) (check_hlds__simplify__common__V_81_81));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
#line 644 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 3) = ((MR_Box) (check_hlds__simplify__common__V_84_84));
#line 644 "common.m"
                }
#line 648 "common.m"
                {
#line 648 "common.m"
                  check_hlds__simplify__common__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_95_95, 0) = ((MR_Box) (check_hlds__simplify__common__PrevMsg_42));
#line 648 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "common.m"
                }
#line 648 "common.m"
                {
#line 648 "common.m"
                  check_hlds__simplify__common__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_94_94, 0) = ((MR_Box) (check_hlds__simplify__common__Msg_41));
#line 648 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_94_94, 1) = ((MR_Box) (check_hlds__simplify__common__V_95_95));
#line 648 "common.m"
                }
#line 647 "common.m"
                {
#line 647 "common.m"
                  check_hlds__simplify__common__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 647 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_3[0])));
#line 647 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__common_scalar_common_5[0])));
#line 647 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 2) = ((MR_Box) (check_hlds__simplify__common__V_94_94));
#line 647 "common.m"
                }
#line 649 "common.m"
                {
#line 649 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_add_error_spec_3_p_0(check_hlds__simplify__common__Spec_43, check_hlds__simplify__common__STATE_VARIABLE_Info_51_51, &check_hlds__simplify__common__STATE_VARIABLE_Info_97_97);
                }
#line 633 "common.m"
              }
#line 650 "common.m"
            else
#line 650 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Info_97_97 = check_hlds__simplify__common__STATE_VARIABLE_Info_51_51;
#line 653 "common.m"
            {
#line 653 "common.m"
              check_hlds__simplify__common__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 653 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_98_98, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_17));
#line 653 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_98_98, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo_16));
#line 653 "common.m"
            }
#line 653 "common.m"
            {
#line 653 "common.m"
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_98_98, &check_hlds__simplify__common__Cost_44);
            }
#line 654 "common.m"
            {
#line 654 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_97_97, &check_hlds__simplify__common__STATE_VARIABLE_Info_99_99);
            }
#line 655 "common.m"
            {
#line 655 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_99_99, &check_hlds__simplify__common__STATE_VARIABLE_Info_100_100);
            }
#line 656 "common.m"
            {
#line 656 "common.m"
              check_hlds__simplify__common__Detism0_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__common__GoalInfo_16);
            }
#line 659 "common.m"
#line 659 "common.m"
            switch (check_hlds__simplify__common__Detism0_45) {
#line 659 "common.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 659 "common.m"
              case (MR_Integer) 4:
#line 659 "common.m"
              case (MR_Integer) 5:
#line 659 "common.m"
              case (MR_Integer) 6:
#line 659 "common.m"
              case (MR_Integer) 7:
#line 659 "common.m"
              case (MR_Integer) 2:
#line 659 "common.m"
              case (MR_Integer) 3:
#line 659 "common.m"
              case (MR_Integer) 1:
#line 668 "common.m"
                {
#line 668 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_100_100, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
#line 668 "common.m"
                  return;
                }
#line 659 "common.m"
                break;
#line 659 "common.m"
              case (MR_Integer) 0:
#line 658 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_100_100;
#line 659 "common.m"
                break;
#line 659 "common.m"
            }
#line 613 "common.m"
          }
#line 670 "common.m"
        else
#line 671 "common.m"
          {
#line 671 "common.m"
            MR_Word check_hlds__simplify__common__ThisCall_46;
#line 671 "common.m"
            MR_Word check_hlds__simplify__common__SeenCalls_47;
#line 671 "common.m"
            MR_Word check_hlds__simplify__common__V_102_102;
#line 671 "common.m"
            MR_Word check_hlds__simplify__common__Context_105;
#line 675 "common.m"
            MR_Word check_hlds__simplify__common__V_115_115;
#line 675 "common.m"
            MR_Word check_hlds__simplify__common__V_116_116;
#line 675 "common.m"
            MR_Word check_hlds__simplify__common__V_117_117;
#line 675 "common.m"
            MR_Word check_hlds__simplify__common__V_118_118;

#line 671 "common.m"
            {
#line 671 "common.m"
              check_hlds__simplify__common__Context_105 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
            }
#line 672 "common.m"
            {
#line 672 "common.m"
              check_hlds__simplify__common__ThisCall_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 672 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 0) = ((MR_Box) (check_hlds__simplify__common__Context_105));
#line 672 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_13));
#line 672 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 2) = ((MR_Box) (check_hlds__simplify__common__OutputArgs_14));
#line 672 "common.m"
            }
#line 673 "common.m"
            {
#line 673 "common.m"
              check_hlds__simplify__common__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_102_102, 0) = ((MR_Box) (check_hlds__simplify__common__ThisCall_46));
#line 673 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_102_102, 1) = ((MR_Box) (check_hlds__simplify__common__SeenCallsList0_24));
#line 673 "common.m"
            }
#line 673 "common.m"
            {
#line 673 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), ((MR_Box) (check_hlds__simplify__common__V_102_102)), check_hlds__simplify__common__SeenCalls0_23, &check_hlds__simplify__common__SeenCalls_47);
            }
#line 675 "common.m"
            check_hlds__simplify__common__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 675 "common.m"
            check_hlds__simplify__common__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 675 "common.m"
            check_hlds__simplify__common__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 675 "common.m"
            check_hlds__simplify__common__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 675 "common.m"
            {
#line 675 "common.m"
              MR_Word base;
#line 675 "common.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 675 "common.m"
              *check_hlds__simplify__common__Common_20 = base;
#line 675 "common.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_115_115));
#line 675 "common.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_116_116));
#line 675 "common.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_117_117));
#line 675 "common.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls_47));
#line 675 "common.m"
            }
#line 676 "common.m"
            *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 671 "common.m"
          }
#line 670 "common.m"
      }
#line 678 "common.m"
    else
#line 679 "common.m"
      {
#line 679 "common.m"
        MR_Word check_hlds__simplify__common__V_103_103;
#line 679 "common.m"
        MR_Word check_hlds__simplify__common__Context_106;
#line 679 "common.m"
        MR_Word check_hlds__simplify__common__ThisCall_107;
#line 679 "common.m"
        MR_Word check_hlds__simplify__common__SeenCalls_108;
#line 682 "common.m"
        MR_Word check_hlds__simplify__common__V_119_119;
#line 682 "common.m"
        MR_Word check_hlds__simplify__common__V_120_120;
#line 682 "common.m"
        MR_Word check_hlds__simplify__common__V_121_121;
#line 682 "common.m"
        MR_Word check_hlds__simplify__common__V_122_122;

#line 679 "common.m"
        {
#line 679 "common.m"
          check_hlds__simplify__common__Context_106 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
        }
#line 680 "common.m"
        {
#line 680 "common.m"
          check_hlds__simplify__common__ThisCall_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 680 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 0) = ((MR_Box) (check_hlds__simplify__common__Context_106));
#line 680 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_13));
#line 680 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 2) = ((MR_Box) (check_hlds__simplify__common__OutputArgs_14));
#line 680 "common.m"
        }
#line 681 "common.m"
        {
#line 681 "common.m"
          check_hlds__simplify__common__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_103_103, 0) = ((MR_Box) (check_hlds__simplify__common__ThisCall_107));
#line 681 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "common.m"
        }
#line 681 "common.m"
        {
#line 681 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), ((MR_Box) (check_hlds__simplify__common__V_103_103)), check_hlds__simplify__common__SeenCalls0_23, &check_hlds__simplify__common__SeenCalls_108);
        }
#line 682 "common.m"
        check_hlds__simplify__common__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
#line 682 "common.m"
        check_hlds__simplify__common__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
#line 682 "common.m"
        check_hlds__simplify__common__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
#line 682 "common.m"
        check_hlds__simplify__common__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
#line 682 "common.m"
        {
#line 682 "common.m"
          MR_Word base;
#line 682 "common.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 682 "common.m"
          *check_hlds__simplify__common__Common_20 = base;
#line 682 "common.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_119_119));
#line 682 "common.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_120_120));
#line 682 "common.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_121_121));
#line 682 "common.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls_108));
#line 682 "common.m"
        }
#line 683 "common.m"
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 679 "common.m"
      }
#line 605 "common.m"
  }
#line 598 "common.m"
}

#line 522 "common.m"
static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
#line 522 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_6,
#line 522 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_7,
#line 522 "common.m"
  MR_Word check_hlds__simplify__common__Struct_8,
#line 522 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14,
#line 522 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_StructMap_15)
#line 522 "common.m"
{
#line 534 "common.m"
  {
#line 534 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 534 "common.m"
    MR_Word check_hlds__simplify__common__ConsIdMap0_10;
#line 526 "common.m"
    MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_10;

#line 526 "common.m"
    {
#line 526 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), &check_hlds__simplify__common__conv0_ConsIdMap0_10);
    }
#line 526 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 526 "common.m"
      {
#line 526 "common.m"
        check_hlds__simplify__common__ConsIdMap0_10 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_10);
#line 526 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 526 "common.m"
      }
#line 534 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 532 "common.m"
      {
#line 532 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_13;
#line 530 "common.m"
        MR_Word check_hlds__simplify__common__Structs0_11;
#line 527 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs0_11;

#line 527 "common.m"
        {
#line 527 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__ConsIdMap0_10, ((MR_Box) (check_hlds__simplify__common__ConsId_7)), &check_hlds__simplify__common__conv1_Structs0_11);
        }
#line 527 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 527 "common.m"
          {
#line 527 "common.m"
            check_hlds__simplify__common__Structs0_11 = ((MR_Word) check_hlds__simplify__common__conv1_Structs0_11);
#line 527 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 527 "common.m"
          }
#line 530 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 528 "common.m"
          {
#line 528 "common.m"
            MR_Word check_hlds__simplify__common__Structs_12;

#line 528 "common.m"
            {
#line 528 "common.m"
              check_hlds__simplify__common__Structs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_12, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 528 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_12, 1) = ((MR_Box) (check_hlds__simplify__common__Structs0_11));
#line 528 "common.m"
            }
#line 529 "common.m"
            {
#line 529 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__Structs_12)), check_hlds__simplify__common__ConsIdMap0_10, &check_hlds__simplify__common__ConsIdMap_13);
            }
#line 528 "common.m"
          }
#line 530 "common.m"
        else
#line 531 "common.m"
          {
#line 531 "common.m"
            MR_Word check_hlds__simplify__common__V_16_16;

#line 531 "common.m"
            {
#line 531 "common.m"
              check_hlds__simplify__common__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_16_16, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 531 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "common.m"
            }
#line 531 "common.m"
            {
#line 531 "common.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__V_16_16)), check_hlds__simplify__common__ConsIdMap0_10, &check_hlds__simplify__common__ConsIdMap_13);
            }
#line 531 "common.m"
          }
#line 533 "common.m"
        {
#line 533 "common.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_13)), check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);
#line 533 "common.m"
          return;
        }
#line 532 "common.m"
      }
#line 534 "common.m"
    else
#line 535 "common.m"
      {
#line 535 "common.m"
        MR_Word check_hlds__simplify__common__V_19_19;
#line 535 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_22;

#line 535 "common.m"
        {
#line 535 "common.m"
          check_hlds__simplify__common__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_19_19, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
#line 535 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "common.m"
        }
#line 535 "common.m"
        {
#line 535 "common.m"
          check_hlds__simplify__common__ConsIdMap_22 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__V_19_19)));
        }
#line 536 "common.m"
        {
#line 536 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_22)), check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);
#line 536 "common.m"
          return;
        }
#line 535 "common.m"
      }
#line 534 "common.m"
  }
#line 522 "common.m"
}

#line 508 "common.m"
static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
#line 508 "common.m"
  MR_Word check_hlds__simplify__common__TypeCtor_7,
#line 508 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_8,
#line 508 "common.m"
  MR_Word check_hlds__simplify__common__Struct_9,
#line 508 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_10,
#line 508 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_16,
#line 508 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_17)
#line 508 "common.m"
{
#line 511 "common.m"
  {
#line 511 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 511 "common.m"
    MR_Word check_hlds__simplify__common__AllStructMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 1)));
#line 511 "common.m"
    MR_Word check_hlds__simplify__common__SinceCallStructMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 2)));
#line 511 "common.m"
    MR_Word check_hlds__simplify__common__AllStructMap_14;
#line 511 "common.m"
    MR_Word check_hlds__simplify__common__SinceCallStructMap_15;
#line 511 "common.m"
    MR_Word check_hlds__simplify__common__V_30_30;
#line 511 "common.m"
    MR_Word check_hlds__simplify__common__V_31_31;
#line 511 "common.m"
    MR_Word check_hlds__simplify__common__V_34_34;
#line 512 "common.m"
    MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 0)));
#line 512 "common.m"
    MR_Word check_hlds__simplify__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 3)));
#line 534 "common.m"
    MR_Word check_hlds__simplify__common__ConsIdMap0_45;
#line 526 "common.m"
    MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_45;
#line 518 "common.m"
    MR_Word check_hlds__simplify__common__V_27_27;
#line 518 "common.m"
    MR_Word check_hlds__simplify__common__V_28_28;
#line 518 "common.m"
    MR_Word check_hlds__simplify__common__V_29_29;

#line 526 "common.m"
    {
#line 526 "common.m"
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__AllStructMap0_12, ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), &check_hlds__simplify__common__conv0_ConsIdMap0_45);
    }
#line 526 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 526 "common.m"
      {
#line 526 "common.m"
        check_hlds__simplify__common__ConsIdMap0_45 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_45);
#line 526 "common.m"
        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 526 "common.m"
      }
#line 534 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 532 "common.m"
      {
#line 532 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_48;
#line 530 "common.m"
        MR_Word check_hlds__simplify__common__Structs0_46;
#line 527 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs0_46;

#line 527 "common.m"
        {
#line 527 "common.m"
          check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__ConsIdMap0_45, ((MR_Box) (check_hlds__simplify__common__ConsId_8)), &check_hlds__simplify__common__conv1_Structs0_46);
        }
#line 527 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 527 "common.m"
          {
#line 527 "common.m"
            check_hlds__simplify__common__Structs0_46 = ((MR_Word) check_hlds__simplify__common__conv1_Structs0_46);
#line 527 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 527 "common.m"
          }
#line 530 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 528 "common.m"
          {
#line 528 "common.m"
            MR_Word check_hlds__simplify__common__Structs_47;

#line 528 "common.m"
            {
#line 528 "common.m"
              check_hlds__simplify__common__Structs_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_47, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 528 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_47, 1) = ((MR_Box) (check_hlds__simplify__common__Structs0_46));
#line 528 "common.m"
            }
#line 529 "common.m"
            {
#line 529 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__Structs_47)), check_hlds__simplify__common__ConsIdMap0_45, &check_hlds__simplify__common__ConsIdMap_48);
            }
#line 528 "common.m"
          }
#line 530 "common.m"
        else
#line 531 "common.m"
          {
#line 531 "common.m"
            MR_Word check_hlds__simplify__common__V_49_49;

#line 531 "common.m"
            {
#line 531 "common.m"
              check_hlds__simplify__common__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 531 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "common.m"
            }
#line 531 "common.m"
            {
#line 531 "common.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__V_49_49)), check_hlds__simplify__common__ConsIdMap0_45, &check_hlds__simplify__common__ConsIdMap_48);
            }
#line 531 "common.m"
          }
#line 533 "common.m"
        {
#line 533 "common.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_48)), check_hlds__simplify__common__AllStructMap0_12, &check_hlds__simplify__common__AllStructMap_14);
        }
#line 532 "common.m"
      }
#line 534 "common.m"
    else
#line 535 "common.m"
      {
#line 535 "common.m"
        MR_Word check_hlds__simplify__common__V_52_52;
#line 535 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap_55;

#line 535 "common.m"
        {
#line 535 "common.m"
          check_hlds__simplify__common__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
#line 535 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "common.m"
        }
#line 535 "common.m"
        {
#line 535 "common.m"
          check_hlds__simplify__common__ConsIdMap_55 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__V_52_52)));
        }
#line 536 "common.m"
        {
#line 536 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_55)), check_hlds__simplify__common__AllStructMap0_12, &check_hlds__simplify__common__AllStructMap_14);
        }
#line 535 "common.m"
      }
#line 516 "common.m"
    {
#line 516 "common.m"
      check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(check_hlds__simplify__common__TypeCtor_7, check_hlds__simplify__common__ConsId_8, check_hlds__simplify__common__Struct_9, check_hlds__simplify__common__SinceCallStructMap0_13, &check_hlds__simplify__common__SinceCallStructMap_15);
    }
#line 518 "common.m"
    check_hlds__simplify__common__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 0)));
#line 518 "common.m"
    check_hlds__simplify__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 1)));
#line 518 "common.m"
    check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 2)));
#line 518 "common.m"
    check_hlds__simplify__common__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 3)));
#line 519 "common.m"
    check_hlds__simplify__common__V_31_31 = check_hlds__simplify__common__VarEqv_10;
#line 519 "common.m"
    check_hlds__simplify__common__V_34_34 = check_hlds__simplify__common__V_30_30;
#line 520 "common.m"
    {
#line 520 "common.m"
      MR_Word base;
#line 520 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 520 "common.m"
      *check_hlds__simplify__common__STATE_VARIABLE_Common_17 = base;
#line 520 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__V_31_31));
#line 520 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__AllStructMap_14));
#line 520 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__SinceCallStructMap_15));
#line 520 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_34_34));
#line 520 "common.m"
    }
#line 511 "common.m"
  }
#line 508 "common.m"
}

#line 490 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
#line 490 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 490 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
#line 490 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
#line 490 "common.m"
{
#line 493 "common.m"
  while (MR_TRUE)
#line 493 "common.m"
    {
#line 493 "common.m"
      /* tailcall optimized into a loop */
#line 493 "common.m"
      {
#line 493 "common.m"
        MR_bool check_hlds__simplify__common__succeeded;

#line 493 "common.m"
        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "common.m"
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "common.m"
        else
#line 494 "common.m"
          {
#line 494 "common.m"
            MR_Word check_hlds__simplify__common__TypeInfo_8_14;
#line 494 "common.m"
            MR_Integer check_hlds__simplify__common__Id_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 494 "common.m"
            MR_Word check_hlds__simplify__common__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 494 "common.m"
            MR_Word check_hlds__simplify__common__Var_7;
#line 494 "common.m"
            MR_Word check_hlds__simplify__common__Vars_8;
#line 494 "common.m"
            MR_Integer check_hlds__simplify__common__VarId_13;

#line 494 "common.m"
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 494 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 494 "common.m"
              {
#line 494 "common.m"
                check_hlds__simplify__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
#line 494 "common.m"
                check_hlds__simplify__common__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
#line 5415 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_8_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 503 "common.m"
                {
#line 503 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__Var_7)), &check_hlds__simplify__common__VarId_13);
                }
#line 494 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 494 "common.m"
                  {
#line 504 "common.m"
                    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_5 == check_hlds__simplify__common__VarId_13);
#line 494 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 496 "common.m"
                      {
#line 496 "common.m"
                        /* direct tailcall eliminated */
#line 496 "common.m"
                        {
#line 496 "common.m"
                          MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Ids_6;
#line 496 "common.m"
                          MR_Word check_hlds__simplify__common__HeadVar__2__tmp_copy_2 = check_hlds__simplify__common__Vars_8;

#line 496 "common.m"
                          check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__HeadVar__2__tmp_copy_2;
#line 496 "common.m"
                          check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 496 "common.m"
                        }
#line 496 "common.m"
                        continue;
#line 496 "common.m"
                      }
#line 494 "common.m"
                  }
#line 494 "common.m"
              }
#line 494 "common.m"
          }
#line 493 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 493 "common.m"
      }
#line 493 "common.m"
      break;
#line 493 "common.m"
    }
#line 490 "common.m"
}

#line 479 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
#line 479 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 479 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 479 "common.m"
  MR_Integer check_hlds__simplify__common__VarId_8,
#line 479 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9)
#line 479 "common.m"
{
#line 482 "common.m"
  while (MR_TRUE)
#line 482 "common.m"
    {
#line 482 "common.m"
      /* tailcall optimized into a loop */
#line 482 "common.m"
      {
#line 482 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 482 "common.m"
        MR_Word check_hlds__simplify__common__Struct_5;
#line 482 "common.m"
        MR_Word check_hlds__simplify__common__Structs_6;
#line 482 "common.m"
        MR_Word check_hlds__simplify__common__Var_10;
#line 483 "common.m"
        MR_Word check_hlds__simplify__common___Vars_11;
#line 502 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_8_16;
#line 502 "common.m"
        MR_Integer check_hlds__simplify__common__VarId_15;

#line 482 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 482 "common.m"
          {
#line 482 "common.m"
            check_hlds__simplify__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 482 "common.m"
            check_hlds__simplify__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "common.m"
            check_hlds__simplify__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 0)));
#line 483 "common.m"
            check_hlds__simplify__common___Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 1)));
#line 5516 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_8_16 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 503 "common.m"
            {
#line 503 "common.m"
              check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_16, check_hlds__simplify__common__VarEqv_7, ((MR_Box) (check_hlds__simplify__common__Var_10)), &check_hlds__simplify__common__VarId_15);
            }
#line 502 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 504 "common.m"
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__VarId_8 == check_hlds__simplify__common__VarId_15);
#line 486 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 485 "common.m"
              {
#line 485 "common.m"
                *check_hlds__simplify__common__Match_9 = check_hlds__simplify__common__Struct_5;
#line 485 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 485 "common.m"
              }
#line 486 "common.m"
            else
#line 487 "common.m"
              {
#line 487 "common.m"
                /* direct tailcall eliminated */
#line 487 "common.m"
                {
#line 487 "common.m"
                  MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Structs_6;

#line 487 "common.m"
                  check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 487 "common.m"
                }
#line 487 "common.m"
                continue;
#line 487 "common.m"
              }
#line 482 "common.m"
          }
#line 482 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 482 "common.m"
      }
#line 482 "common.m"
      break;
#line 482 "common.m"
    }
#line 479 "common.m"
}

#line 468 "common.m"
static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
#line 468 "common.m"
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
#line 468 "common.m"
  MR_Word check_hlds__simplify__common__VarEqv_7,
#line 468 "common.m"
  MR_Word check_hlds__simplify__common__ArgVarIds_8,
#line 468 "common.m"
  MR_Word * check_hlds__simplify__common__Match_9)
#line 468 "common.m"
{
#line 471 "common.m"
  while (MR_TRUE)
#line 471 "common.m"
    {
#line 471 "common.m"
      /* tailcall optimized into a loop */
#line 471 "common.m"
      {
#line 471 "common.m"
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 471 "common.m"
        MR_Word check_hlds__simplify__common__Struct_5;
#line 471 "common.m"
        MR_Word check_hlds__simplify__common__Structs_6;
#line 471 "common.m"
        MR_Word check_hlds__simplify__common__Vars_11;
#line 472 "common.m"
        MR_Word check_hlds__simplify__common___Var_10;

#line 471 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 471 "common.m"
          {
#line 471 "common.m"
            check_hlds__simplify__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
#line 471 "common.m"
            check_hlds__simplify__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
#line 472 "common.m"
            check_hlds__simplify__common___Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 0)));
#line 472 "common.m"
            check_hlds__simplify__common__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 1)));
#line 473 "common.m"
            {
#line 473 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__ids_vars_match_3_p_0(check_hlds__simplify__common__ArgVarIds_8, check_hlds__simplify__common__Vars_11, check_hlds__simplify__common__VarEqv_7);
            }
#line 475 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 474 "common.m"
              {
#line 474 "common.m"
                *check_hlds__simplify__common__Match_9 = check_hlds__simplify__common__Struct_5;
#line 474 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 474 "common.m"
              }
#line 475 "common.m"
            else
#line 476 "common.m"
              {
#line 476 "common.m"
                /* direct tailcall eliminated */
#line 476 "common.m"
                {
#line 476 "common.m"
                  MR_Word check_hlds__simplify__common__HeadVar__1__tmp_copy_1 = check_hlds__simplify__common__Structs_6;

#line 476 "common.m"
                  check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__HeadVar__1__tmp_copy_1;
#line 476 "common.m"
                }
#line 476 "common.m"
                continue;
#line 476 "common.m"
              }
#line 471 "common.m"
          }
#line 471 "common.m"
        return check_hlds__simplify__common__succeeded;
#line 471 "common.m"
      }
#line 471 "common.m"
      break;
#line 471 "common.m"
    }
#line 468 "common.m"
}

#line 397 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__Var_15,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_16,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_17,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__UniModes_18,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__CanFail_19,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__Mode_20,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_21,
#line 397 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_22,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_23,
#line 397 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_24,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 397 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 397 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 397 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 397 "common.m"
{
#line 405 "common.m"
  {
#line 405 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 405 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_27;
#line 412 "common.m"
    MR_Word check_hlds__simplify__common__LVarMode_28;
#line 412 "common.m"
    MR_Word check_hlds__simplify__common__Inst0_30;
#line 412 "common.m"
    MR_Word check_hlds__simplify__common__V_29_29;
#line 413 "common.m"
    MR_Word check_hlds__simplify__common__V_31_31;

#line 406 "common.m"
    {
#line 406 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_27);
    }
#line 455 "common.m"
    *check_hlds__simplify__common__GoalInfo_24 = check_hlds__simplify__common__GoalInfo0_23;
#line 412 "common.m"
    check_hlds__simplify__common__LVarMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_20, (MR_Integer) 0)));
#line 412 "common.m"
    check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_20, (MR_Integer) 1)));
#line 413 "common.m"
    {
#line 413 "common.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__LVarMode_28, &check_hlds__simplify__common__Inst0_30, &check_hlds__simplify__common__V_31_31);
    }
#line 414 "common.m"
    {
#line 414 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__Inst0_30);
    }
#line 414 "common.m"
    check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 417 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 416 "common.m"
      {
#line 416 "common.m"
        *check_hlds__simplify__common__GoalExpr_22 = check_hlds__simplify__common__GoalExpr0_21;
#line 416 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 416 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_46;
#line 416 "common.m"
      }
#line 417 "common.m"
    else
#line 418 "common.m"
      {
#line 418 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_71_71;
#line 418 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtor_32;
#line 418 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_33;
#line 418 "common.m"
        MR_Integer check_hlds__simplify__common__VarId_34;
#line 418 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv1_35;
#line 418 "common.m"
        MR_Word check_hlds__simplify__common__SinceCallStructMap0_36;
#line 418 "common.m"
        MR_Word check_hlds__simplify__common__VarTypes_79;
#line 418 "common.m"
        MR_Word check_hlds__simplify__common__Type_80;
#line 419 "common.m"
        MR_Word check_hlds__simplify__common__V_61_61;
#line 419 "common.m"
        MR_Word check_hlds__simplify__common__V_62_62;
#line 419 "common.m"
        MR_Word check_hlds__simplify__common__V_63_63;
#line 421 "common.m"
        MR_Word check_hlds__simplify__common__V_64_64;
#line 421 "common.m"
        MR_Word check_hlds__simplify__common__V_65_65;
#line 421 "common.m"
        MR_Word check_hlds__simplify__common__V_66_66;
#line 449 "common.m"
        MR_Word check_hlds__simplify__common__OldStruct_39;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_72_72;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_73_73;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_74_74;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_75_75;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap0_37;
#line 426 "common.m"
        MR_Word check_hlds__simplify__common__Structs_38;
#line 427 "common.m"
        MR_Word check_hlds__simplify__common__V_51_51;
#line 429 "common.m"
        MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_37;
#line 430 "common.m"
        MR_Box check_hlds__simplify__common__conv1_Structs_38;

#line 460 "common.m"
        {
#line 460 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__VarTypes_79);
        }
#line 461 "common.m"
        {
#line 461 "common.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_79, check_hlds__simplify__common__Var_15, &check_hlds__simplify__common__Type_80);
        }
#line 464 "common.m"
        {
#line 464 "common.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__common__Type_80, &check_hlds__simplify__common__TypeCtor_32);
        }
#line 419 "common.m"
        check_hlds__simplify__common__VarEqv0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 419 "common.m"
        check_hlds__simplify__common__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 419 "common.m"
        check_hlds__simplify__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 419 "common.m"
        check_hlds__simplify__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 5819 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__TypeInfo_71_71 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 420 "common.m"
        {
#line 420 "common.m"
          mercury__eqvclass__ensure_element_partition_id_4_p_0(check_hlds__simplify__common__TypeInfo_71_71, ((MR_Box) (check_hlds__simplify__common__Var_15)), &check_hlds__simplify__common__VarId_34, check_hlds__simplify__common__VarEqv0_33, &check_hlds__simplify__common__VarEqv1_35);
        }
#line 421 "common.m"
        check_hlds__simplify__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 421 "common.m"
        check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 421 "common.m"
        check_hlds__simplify__common__SinceCallStructMap0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 421 "common.m"
        check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 426 "common.m"
        {
#line 426 "common.m"
          check_hlds__simplify__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__simplify__common__GoalInfo_24, (MR_Integer) 3);
        }
#line 426 "common.m"
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 426 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 426 "common.m"
          {
#line 427 "common.m"
            check_hlds__simplify__common__V_51_51 = (MR_Integer) 4;
#line 427 "common.m"
            {
#line 427 "common.m"
              check_hlds__simplify__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__simplify__common__GoalInfo_24, check_hlds__simplify__common__V_51_51);
            }
#line 427 "common.m"
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
#line 426 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 426 "common.m"
              {
#line 5858 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 5860 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_73_73 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[0];
#line 429 "common.m"
                {
#line 429 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_72_72, check_hlds__simplify__common__TypeInfo_73_73, check_hlds__simplify__common__SinceCallStructMap0_36, ((MR_Box) (check_hlds__simplify__common__TypeCtor_32)), &check_hlds__simplify__common__conv0_ConsIdMap0_37);
                }
#line 429 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 429 "common.m"
                  {
#line 429 "common.m"
                    check_hlds__simplify__common__ConsIdMap0_37 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_37);
#line 429 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 429 "common.m"
                  }
#line 426 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 426 "common.m"
                  {
#line 5881 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 5883 "check_hlds.simplify.common.c"
                    check_hlds__simplify__common__TypeInfo_75_75 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[1];
#line 430 "common.m"
                    {
#line 430 "common.m"
                      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_74_74, check_hlds__simplify__common__TypeInfo_75_75, check_hlds__simplify__common__ConsIdMap0_37, ((MR_Box) (check_hlds__simplify__common__ConsId_16)), &check_hlds__simplify__common__conv1_Structs_38);
                    }
#line 430 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 430 "common.m"
                      {
#line 430 "common.m"
                        check_hlds__simplify__common__Structs_38 = ((MR_Word) check_hlds__simplify__common__conv1_Structs_38);
#line 430 "common.m"
                        check_hlds__simplify__common__succeeded = MR_TRUE;
#line 430 "common.m"
                      }
#line 426 "common.m"
                    if (check_hlds__simplify__common__succeeded)
#line 431 "common.m"
                      {
#line 431 "common.m"
                        check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(check_hlds__simplify__common__Structs_38, check_hlds__simplify__common__VarEqv1_35, check_hlds__simplify__common__VarId_34, &check_hlds__simplify__common__OldStruct_39);
                      }
#line 426 "common.m"
                  }
#line 426 "common.m"
              }
#line 426 "common.m"
          }
#line 449 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 433 "common.m"
          {
#line 433 "common.m"
            MR_Word check_hlds__simplify__common__OldArgVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_39, (MR_Integer) 1)));
#line 433 "common.m"
            MR_Word check_hlds__simplify__common__VarEqv_42;
#line 433 "common.m"
            MR_Word check_hlds__simplify__common__Goals_43;
#line 433 "common.m"
            MR_Integer check_hlds__simplify__common__Cost_44;
#line 433 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_52_52;
#line 433 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_54_54;
#line 433 "common.m"
            MR_Word check_hlds__simplify__common__V_56_56;
#line 433 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_57_57;
#line 433 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 433 "common.m"
            MR_Word check_hlds__simplify__common__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_39, (MR_Integer) 0)));
#line 436 "common.m"
            MR_Word check_hlds__simplify__common__V_68_68;
#line 436 "common.m"
            MR_Word check_hlds__simplify__common__V_69_69;
#line 436 "common.m"
            MR_Word check_hlds__simplify__common__V_70_70;
#line 436 "common.m"
            MR_Word check_hlds__simplify__common__V_67_67;

#line 434 "common.m"
            {
#line 434 "common.m"
              mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(check_hlds__simplify__common__TypeInfo_71_71, check_hlds__simplify__common__ArgVars_17, check_hlds__simplify__common__OldArgVars_41, check_hlds__simplify__common__VarEqv1_35, &check_hlds__simplify__common__VarEqv_42);
            }
#line 436 "common.m"
            check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 436 "common.m"
            check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 436 "common.m"
            check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 436 "common.m"
            check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 436 "common.m"
            {
#line 436 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Common_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 436 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_42));
#line 436 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 1) = ((MR_Box) (check_hlds__simplify__common__V_68_68));
#line 436 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 2) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 436 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, 3) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 436 "common.m"
            }
#line 437 "common.m"
            {
#line 437 "common.m"
              check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__GoalInfo0_23, check_hlds__simplify__common__ArgVars_17, check_hlds__simplify__common__OldArgVars_41, check_hlds__simplify__common__UniModes_18, &check_hlds__simplify__common__Goals_43, check_hlds__simplify__common__STATE_VARIABLE_Common_52_52, check_hlds__simplify__common__STATE_VARIABLE_Common_47, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_54_54);
            }
#line 439 "common.m"
            {
#line 439 "common.m"
              MR_Word base;
#line 439 "common.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 439 "common.m"
              *check_hlds__simplify__common__GoalExpr_22 = base;
#line 439 "common.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 439 "common.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 439 "common.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__Goals_43));
#line 439 "common.m"
            }
#line 440 "common.m"
            {
#line 440 "common.m"
              check_hlds__simplify__common__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_56_56, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_21));
#line 440 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_56_56, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo0_23));
#line 440 "common.m"
            }
#line 440 "common.m"
            {
#line 440 "common.m"
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_56_56, &check_hlds__simplify__common__Cost_44);
            }
#line 441 "common.m"
            {
#line 441 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__common__STATE_VARIABLE_Info_57_57);
            }
#line 442 "common.m"
            {
#line 442 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_57_57, &check_hlds__simplify__common__STATE_VARIABLE_Info_58_58);
            }
#line 446 "common.m"
#line 446 "common.m"
            switch (check_hlds__simplify__common__CanFail_19) {
#line 446 "common.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 446 "common.m"
              case (MR_Integer) 0:
#line 445 "common.m"
                {
#line 445 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_58_58, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
#line 445 "common.m"
                  return;
                }
#line 446 "common.m"
                break;
#line 446 "common.m"
              case (MR_Integer) 1:
#line 447 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 446 "common.m"
                break;
#line 446 "common.m"
            }
#line 433 "common.m"
          }
#line 449 "common.m"
        else
#line 450 "common.m"
          {
#line 450 "common.m"
            MR_Word check_hlds__simplify__common__Struct_45;

#line 450 "common.m"
            *check_hlds__simplify__common__GoalExpr_22 = check_hlds__simplify__common__GoalExpr0_21;
#line 451 "common.m"
            {
#line 451 "common.m"
              check_hlds__simplify__common__Struct_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 451 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 0) = ((MR_Box) (check_hlds__simplify__common__Var_15));
#line 451 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 1) = ((MR_Box) (check_hlds__simplify__common__ArgVars_17));
#line 451 "common.m"
            }
#line 452 "common.m"
            {
#line 452 "common.m"
              check_hlds__simplify__common__record_cell_in_maps_6_p_0(check_hlds__simplify__common__TypeCtor_32, check_hlds__simplify__common__ConsId_16, check_hlds__simplify__common__Struct_45, check_hlds__simplify__common__VarEqv1_35, check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, check_hlds__simplify__common__STATE_VARIABLE_Common_47);
            }
#line 450 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 450 "common.m"
          }
#line 418 "common.m"
      }
#line 405 "common.m"
  }
#line 397 "common.m"
}

#line 351 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
#line 351 "common.m"
  MR_Box check_hlds__simplify__common__closure_arg,
#line 351 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
#line 351 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_2,
#line 351 "common.m"
  MR_Box check_hlds__simplify__common__wrapper_arg_3,
#line 351 "common.m"
  MR_Box * check_hlds__simplify__common__wrapper_arg_4)
#line 351 "common.m"
{
#line 351 "common.m"
  {
#line 351 "common.m"
    MR_Box check_hlds__simplify__common__closure = check_hlds__simplify__common__closure_arg;
#line 351 "common.m"
    MR_Integer check_hlds__simplify__common__conv1_HeadVar__2_73;
#line 351 "common.m"
    MR_Word check_hlds__simplify__common__conv0_HeadVar__4_75;

#line 351 "common.m"
    {
#line 351 "common.m"
      check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__351__1_4_p_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), &check_hlds__simplify__common__conv1_HeadVar__2_73, ((MR_Word) check_hlds__simplify__common__wrapper_arg_3), &check_hlds__simplify__common__conv0_HeadVar__4_75);
    }
#line 351 "common.m"
    *check_hlds__simplify__common__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__common__conv1_HeadVar__2_73));
#line 351 "common.m"
    *check_hlds__simplify__common__wrapper_arg_4 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__4_75));
#line 351 "common.m"
  }
#line 351 "common.m"
}

#line 332 "common.m"
static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__Var_13,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__ConsId_14,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__ArgVars_15,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__Mode_16,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
#line 332 "common.m"
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__GoalInfo0_19,
#line 332 "common.m"
  MR_Word * check_hlds__simplify__common__GoalInfo_20,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
#line 332 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
#line 332 "common.m"
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
#line 332 "common.m"
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
#line 332 "common.m"
{
#line 340 "common.m"
  {
#line 340 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 340 "common.m"
    MR_Word check_hlds__simplify__common__LVarMode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_16, (MR_Integer) 0)));
#line 340 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_25;
#line 340 "common.m"
    MR_Word check_hlds__simplify__common__Inst_27;
#line 341 "common.m"
    MR_Word check_hlds__simplify__common__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Mode_16, (MR_Integer) 1)));
#line 343 "common.m"
    MR_Word check_hlds__simplify__common__V_26_26;

#line 342 "common.m"
    {
#line 342 "common.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_25);
    }
#line 343 "common.m"
    {
#line 343 "common.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_25, check_hlds__simplify__common__LVarMode_23, &check_hlds__simplify__common__V_26_26, &check_hlds__simplify__common__Inst_27);
    }
#line 348 "common.m"
    {
#line 348 "common.m"
      check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__simplify__common__ModuleInfo_25, check_hlds__simplify__common__Inst_27);
    }
#line 392 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 349 "common.m"
      {
#line 349 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_77_77;
#line 349 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtor_28;
#line 349 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv0_29;
#line 349 "common.m"
        MR_Word check_hlds__simplify__common__ArgVarIds_30;
#line 349 "common.m"
        MR_Word check_hlds__simplify__common__VarEqv1_31;
#line 349 "common.m"
        MR_Word check_hlds__simplify__common__AllStructMap0_32;
#line 349 "common.m"
        MR_Word check_hlds__simplify__common__VarTypes_87;
#line 349 "common.m"
        MR_Word check_hlds__simplify__common__Type_88;
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__V_62_62;
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__V_63_63;
#line 350 "common.m"
        MR_Word check_hlds__simplify__common__V_64_64;
#line 351 "common.m"
        MR_Box check_hlds__simplify__common__conv2_VarEqv1_31;
#line 353 "common.m"
        MR_Word check_hlds__simplify__common__V_65_65;
#line 353 "common.m"
        MR_Word check_hlds__simplify__common__V_66_66;
#line 353 "common.m"
        MR_Word check_hlds__simplify__common__V_67_67;
#line 386 "common.m"
        MR_Word check_hlds__simplify__common__OldStruct_37;
#line 359 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_80_80;
#line 359 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_81_81;
#line 359 "common.m"
        MR_Word check_hlds__simplify__common__TypeCtorInfo_82_82;
#line 359 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_83_83;
#line 359 "common.m"
        MR_Word check_hlds__simplify__common__InstMapDelta_33;
#line 359 "common.m"
        MR_Word check_hlds__simplify__common__ConsIdMap0_35;
#line 359 "common.m"
        MR_Word check_hlds__simplify__common__Structs_36;
#line 360 "common.m"
        MR_Word check_hlds__simplify__common__V_34_34;
#line 362 "common.m"
        MR_Box check_hlds__simplify__common__conv3_ConsIdMap0_35;
#line 363 "common.m"
        MR_Box check_hlds__simplify__common__conv4_Structs_36;

#line 460 "common.m"
        {
#line 460 "common.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__VarTypes_87);
        }
#line 461 "common.m"
        {
#line 461 "common.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_87, check_hlds__simplify__common__Var_13, &check_hlds__simplify__common__Type_88);
        }
#line 464 "common.m"
        {
#line 464 "common.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__common__Type_88, &check_hlds__simplify__common__TypeCtor_28);
        }
#line 350 "common.m"
        check_hlds__simplify__common__VarEqv0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 350 "common.m"
        check_hlds__simplify__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 350 "common.m"
        check_hlds__simplify__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 350 "common.m"
        check_hlds__simplify__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 6257 "check_hlds.simplify.common.c"
        check_hlds__simplify__common__TypeInfo_77_77 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 351 "common.m"
        {
#line 351 "common.m"
          mercury__list__map_foldl_5_p_0(check_hlds__simplify__common__TypeInfo_77_77, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[3], (MR_Word) &check_hlds__simplify__common_scalar_common_2[3], check_hlds__simplify__common__ArgVars_15, &check_hlds__simplify__common__ArgVarIds_30, ((MR_Box) (check_hlds__simplify__common__VarEqv0_29)), &check_hlds__simplify__common__conv2_VarEqv1_31);
        }
#line 351 "common.m"
        check_hlds__simplify__common__VarEqv1_31 = ((MR_Word) check_hlds__simplify__common__conv2_VarEqv1_31);
#line 353 "common.m"
        check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 353 "common.m"
        check_hlds__simplify__common__AllStructMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 353 "common.m"
        check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 353 "common.m"
        check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 359 "common.m"
        {
#line 359 "common.m"
          check_hlds__simplify__common__InstMapDelta_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__common__GoalInfo0_19);
        }
#line 360 "common.m"
        {
#line 360 "common.m"
          check_hlds__simplify__common__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__simplify__common__InstMapDelta_33, check_hlds__simplify__common__Var_13, &check_hlds__simplify__common__V_34_34);
        }
#line 359 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 359 "common.m"
          {
#line 6288 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeCtorInfo_80_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 6290 "check_hlds.simplify.common.c"
            check_hlds__simplify__common__TypeInfo_81_81 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[0];
#line 362 "common.m"
            {
#line 362 "common.m"
              check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_80_80, check_hlds__simplify__common__TypeInfo_81_81, check_hlds__simplify__common__AllStructMap0_32, ((MR_Box) (check_hlds__simplify__common__TypeCtor_28)), &check_hlds__simplify__common__conv3_ConsIdMap0_35);
            }
#line 362 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 362 "common.m"
              {
#line 362 "common.m"
                check_hlds__simplify__common__ConsIdMap0_35 = ((MR_Word) check_hlds__simplify__common__conv3_ConsIdMap0_35);
#line 362 "common.m"
                check_hlds__simplify__common__succeeded = MR_TRUE;
#line 362 "common.m"
              }
#line 359 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 359 "common.m"
              {
#line 6311 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 6313 "check_hlds.simplify.common.c"
                check_hlds__simplify__common__TypeInfo_83_83 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[1];
#line 363 "common.m"
                {
#line 363 "common.m"
                  check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_82_82, check_hlds__simplify__common__TypeInfo_83_83, check_hlds__simplify__common__ConsIdMap0_35, ((MR_Box) (check_hlds__simplify__common__ConsId_14)), &check_hlds__simplify__common__conv4_Structs_36);
                }
#line 363 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 363 "common.m"
                  {
#line 363 "common.m"
                    check_hlds__simplify__common__Structs_36 = ((MR_Word) check_hlds__simplify__common__conv4_Structs_36);
#line 363 "common.m"
                    check_hlds__simplify__common__succeeded = MR_TRUE;
#line 363 "common.m"
                  }
#line 359 "common.m"
                if (check_hlds__simplify__common__succeeded)
#line 364 "common.m"
                  {
#line 364 "common.m"
                    check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_matching_cell_construct_4_p_0(check_hlds__simplify__common__Structs_36, check_hlds__simplify__common__VarEqv1_31, check_hlds__simplify__common__ArgVarIds_30, &check_hlds__simplify__common__OldStruct_37);
                  }
#line 359 "common.m"
              }
#line 359 "common.m"
          }
#line 386 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 367 "common.m"
          {
#line 367 "common.m"
            MR_Word check_hlds__simplify__common__OldVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_37, (MR_Integer) 0)));
#line 367 "common.m"
            MR_Word check_hlds__simplify__common__VarEqv_40;
#line 367 "common.m"
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_51_51;
#line 367 "common.m"
            MR_Word check_hlds__simplify__common__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_37, (MR_Integer) 1)));
#line 369 "common.m"
            MR_Word check_hlds__simplify__common__V_69_69;
#line 369 "common.m"
            MR_Word check_hlds__simplify__common__V_70_70;
#line 369 "common.m"
            MR_Word check_hlds__simplify__common__V_71_71;
#line 369 "common.m"
            MR_Word check_hlds__simplify__common__V_68_68;

#line 368 "common.m"
            {
#line 368 "common.m"
              mercury__eqvclass__ensure_equivalence_4_p_0(check_hlds__simplify__common__TypeInfo_77_77, ((MR_Box) (check_hlds__simplify__common__Var_13)), ((MR_Box) (check_hlds__simplify__common__OldVar_38)), check_hlds__simplify__common__VarEqv1_31, &check_hlds__simplify__common__VarEqv_40);
            }
#line 369 "common.m"
            check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
#line 369 "common.m"
            check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
#line 369 "common.m"
            check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
#line 369 "common.m"
            check_hlds__simplify__common__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
#line 369 "common.m"
            {
#line 369 "common.m"
              check_hlds__simplify__common__STATE_VARIABLE_Common_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 369 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_40));
#line 369 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 1) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 369 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 2) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 369 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 3) = ((MR_Box) (check_hlds__simplify__common__V_71_71));
#line 369 "common.m"
            }
#line 377 "common.m"
            if ((check_hlds__simplify__common__ArgVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "common.m"
              {
#line 375 "common.m"
                *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 376 "common.m"
                *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 371 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_51_51;
#line 371 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 371 "common.m"
              }
#line 377 "common.m"
            else
#line 378 "common.m"
              {
#line 378 "common.m"
                MR_Word check_hlds__simplify__common__UniMode_43;
#line 378 "common.m"
                MR_Integer check_hlds__simplify__common__Cost_44;
#line 378 "common.m"
                MR_Word check_hlds__simplify__common__V_52_52;
#line 378 "common.m"
                MR_Word check_hlds__simplify__common__V_54_54;
#line 378 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_57_57;
#line 378 "common.m"
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_58_58;
#line 378 "common.m"
                MR_Word check_hlds__simplify__common__V_59_59;

#line 379 "common.m"
                {
#line 379 "common.m"
                  check_hlds__simplify__common__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_52_52, 1) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 379 "common.m"
                }
#line 379 "common.m"
                {
#line 379 "common.m"
                  check_hlds__simplify__common__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_54_54, 0) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 379 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_54_54, 1) = ((MR_Box) (check_hlds__simplify__common__Inst_27));
#line 379 "common.m"
                }
#line 379 "common.m"
                {
#line 379 "common.m"
                  check_hlds__simplify__common__UniMode_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_43, 0) = ((MR_Box) (check_hlds__simplify__common__V_52_52));
#line 379 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UniMode_43, 1) = ((MR_Box) (check_hlds__simplify__common__V_54_54));
#line 379 "common.m"
                }
#line 380 "common.m"
                {
#line 380 "common.m"
                  check_hlds__simplify__common__generate_assign_10_p_0(check_hlds__simplify__common__Var_13, check_hlds__simplify__common__OldVar_38, check_hlds__simplify__common__UniMode_43, check_hlds__simplify__common__GoalInfo0_19, check_hlds__simplify__common__GoalExpr_18, check_hlds__simplify__common__GoalInfo_20, check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, check_hlds__simplify__common__STATE_VARIABLE_Common_47, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_57_57);
                }
#line 382 "common.m"
                {
#line 382 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_57_57, &check_hlds__simplify__common__STATE_VARIABLE_Info_58_58);
                }
#line 383 "common.m"
                {
#line 383 "common.m"
                  check_hlds__simplify__common__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 383 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_17));
#line 383 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__V_59_59, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo0_19));
#line 383 "common.m"
                }
#line 383 "common.m"
                {
#line 383 "common.m"
                  transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__V_59_59, &check_hlds__simplify__common__Cost_44);
                }
#line 384 "common.m"
                {
#line 384 "common.m"
                  check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_58_58, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
#line 384 "common.m"
                  return;
                }
#line 378 "common.m"
              }
#line 367 "common.m"
          }
#line 386 "common.m"
        else
#line 387 "common.m"
          {
#line 387 "common.m"
            MR_Word check_hlds__simplify__common__Struct_45;

#line 387 "common.m"
            *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 388 "common.m"
            *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 389 "common.m"
            {
#line 389 "common.m"
              check_hlds__simplify__common__Struct_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 0) = ((MR_Box) (check_hlds__simplify__common__Var_13));
#line 389 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 1) = ((MR_Box) (check_hlds__simplify__common__ArgVars_15));
#line 389 "common.m"
            }
#line 390 "common.m"
            {
#line 390 "common.m"
              check_hlds__simplify__common__record_cell_in_maps_6_p_0(check_hlds__simplify__common__TypeCtor_28, check_hlds__simplify__common__ConsId_14, check_hlds__simplify__common__Struct_45, check_hlds__simplify__common__VarEqv1_31, check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, check_hlds__simplify__common__STATE_VARIABLE_Common_47);
            }
#line 387 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 387 "common.m"
          }
#line 349 "common.m"
      }
#line 392 "common.m"
    else
#line 393 "common.m"
      {
#line 393 "common.m"
        *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
#line 394 "common.m"
        *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
#line 393 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
#line 393 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_46;
#line 393 "common.m"
      }
#line 340 "common.m"
  }
#line 332 "common.m"
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
#line 155 "common.m"
}

#line 151 "common.m"
MR_Word MR_CALL 
check_hlds__simplify__common__common_info_init_0_f_0(void)
#line 151 "common.m"
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
#line 760 "common.m"
  {
#line 760 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;
#line 760 "common.m"
    MR_Word check_hlds__simplify__common__EqvVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 0)));
#line 761 "common.m"
    MR_Word check_hlds__simplify__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 1)));
#line 761 "common.m"
    MR_Word check_hlds__simplify__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 2)));
#line 761 "common.m"
    MR_Word check_hlds__simplify__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 3)));

#line 772 "common.m"
    {
#line 772 "common.m"
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__X_4)), ((MR_Box) (check_hlds__simplify__common__Y_5)));
    }
#line 772 "common.m"
    if (!(check_hlds__simplify__common__succeeded))
#line 774 "common.m"
      {
#line 774 "common.m"
        MR_Word check_hlds__simplify__common__TypeInfo_8_15 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
#line 774 "common.m"
        MR_Integer check_hlds__simplify__common__Id_14;
#line 774 "common.m"
        MR_Integer check_hlds__simplify__common__V_16_16;

#line 774 "common.m"
        {
#line 774 "common.m"
          check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_15, check_hlds__simplify__common__EqvVars_7, ((MR_Box) (check_hlds__simplify__common__X_4)), &check_hlds__simplify__common__Id_14);
        }
#line 774 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 774 "common.m"
          {
#line 775 "common.m"
            {
#line 775 "common.m"
              check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_15, check_hlds__simplify__common__EqvVars_7, ((MR_Box) (check_hlds__simplify__common__Y_5)), &check_hlds__simplify__common__V_16_16);
            }
#line 774 "common.m"
            if (check_hlds__simplify__common__succeeded)
#line 775 "common.m"
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_14 == check_hlds__simplify__common__V_16_16);
#line 774 "common.m"
          }
#line 774 "common.m"
      }
#line 760 "common.m"
    return check_hlds__simplify__common__succeeded;
#line 760 "common.m"
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
#line 585 "common.m"
  {
#line 585 "common.m"
    MR_bool check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Purity_17 == (MR_Integer) 0);
#line 585 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs_25;
#line 585 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs_26;
#line 585 "common.m"
    MR_Word check_hlds__simplify__common__OutputModes_27;
#line 575 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_23;
#line 575 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_24;
#line 575 "common.m"
    MR_Word check_hlds__simplify__common__SolnCount_38;
#line 592 "common.m"
    MR_Word check_hlds__simplify__common__V_37_37;

#line 575 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 575 "common.m"
      {
#line 592 "common.m"
        {
#line 592 "common.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__common__Det_16, &check_hlds__simplify__common__V_37_37, &check_hlds__simplify__common__SolnCount_38);
        }
#line 595 "common.m"
#line 595 "common.m"
        switch (check_hlds__simplify__common__SolnCount_38) {
#line 595 "common.m"
          default:
#line 595 "common.m"
            check_hlds__simplify__common__succeeded = MR_FALSE;
#line 595 "common.m"
            break;
#line 595 "common.m"
          case (MR_Integer) 2:
#line 595 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 595 "common.m"
            break;
#line 595 "common.m"
          case (MR_Integer) 1:
#line 594 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 595 "common.m"
            break;
#line 595 "common.m"
        }
#line 575 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 575 "common.m"
          {
#line 577 "common.m"
            {
#line 577 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__common__VarTypes_23);
            }
#line 578 "common.m"
            {
#line 578 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__common__ModuleInfo_24);
            }
#line 579 "common.m"
            {
#line 579 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_23, check_hlds__simplify__common__ModuleInfo_24, check_hlds__simplify__common__Modes_15, check_hlds__simplify__common__Args_14, &check_hlds__simplify__common__InputArgs_25, &check_hlds__simplify__common__OutputArgs_26, &check_hlds__simplify__common__OutputModes_27);
            }
#line 575 "common.m"
          }
#line 575 "common.m"
      }
#line 585 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 582 "common.m"
      {
#line 582 "common.m"
        MR_Word check_hlds__simplify__common__V_33_33;

#line 582 "common.m"
        {
#line 582 "common.m"
          check_hlds__simplify__common__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_33_33, 0) = ((MR_Box) (check_hlds__simplify__common__Closure_13));
#line 582 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_33_33, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_25));
#line 582 "common.m"
        }
#line 582 "common.m"
        {
#line 582 "common.m"
          check_hlds__simplify__common__common_optimise_call_2_11_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__common__V_33_33, check_hlds__simplify__common__OutputArgs_26, check_hlds__simplify__common__OutputModes_27, check_hlds__simplify__common__GoalInfo_18, check_hlds__simplify__common__GoalExpr0_19, check_hlds__simplify__common__MaybeAssignsGoalExpr_20, check_hlds__simplify__common__STATE_VARIABLE_Common_0_28, check_hlds__simplify__common__STATE_VARIABLE_Common_29, check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, check_hlds__simplify__common__STATE_VARIABLE_Info_31);
#line 582 "common.m"
          return;
        }
#line 582 "common.m"
      }
#line 585 "common.m"
    else
#line 586 "common.m"
      {
#line 586 "common.m"
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 586 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_31 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_30;
#line 586 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_29 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_28;
#line 586 "common.m"
      }
#line 585 "common.m"
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
#line 568 "common.m"
  {
#line 568 "common.m"
    MR_bool check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Purity_15 == (MR_Integer) 0);
#line 568 "common.m"
    MR_Word check_hlds__simplify__common__InputArgs_27;
#line 568 "common.m"
    MR_Word check_hlds__simplify__common__OutputArgs_28;
#line 568 "common.m"
    MR_Word check_hlds__simplify__common__OutputModes_29;
#line 555 "common.m"
    MR_Word check_hlds__simplify__common__Det_21;
#line 555 "common.m"
    MR_Word check_hlds__simplify__common__VarTypes_22;
#line 555 "common.m"
    MR_Word check_hlds__simplify__common__ModuleInfo_23;
#line 555 "common.m"
    MR_Word check_hlds__simplify__common__ProcInfo_25;
#line 555 "common.m"
    MR_Word check_hlds__simplify__common__ArgModes_26;
#line 555 "common.m"
    MR_Word check_hlds__simplify__common__SolnCount_39;
#line 592 "common.m"
    MR_Word check_hlds__simplify__common__V_38_38;
#line 560 "common.m"
    MR_Word check_hlds__simplify__common__V_24_24;

#line 555 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 555 "common.m"
      {
#line 556 "common.m"
        {
#line 556 "common.m"
          check_hlds__simplify__common__Det_21 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__common__GoalInfo_16);
        }
#line 592 "common.m"
        {
#line 592 "common.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__common__Det_21, &check_hlds__simplify__common__V_38_38, &check_hlds__simplify__common__SolnCount_39);
        }
#line 595 "common.m"
#line 595 "common.m"
        switch (check_hlds__simplify__common__SolnCount_39) {
#line 595 "common.m"
          default:
#line 595 "common.m"
            check_hlds__simplify__common__succeeded = MR_FALSE;
#line 595 "common.m"
            break;
#line 595 "common.m"
          case (MR_Integer) 2:
#line 595 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 595 "common.m"
            break;
#line 595 "common.m"
          case (MR_Integer) 1:
#line 594 "common.m"
            check_hlds__simplify__common__succeeded = MR_TRUE;
#line 595 "common.m"
            break;
#line 595 "common.m"
        }
#line 555 "common.m"
        if (check_hlds__simplify__common__succeeded)
#line 555 "common.m"
          {
#line 558 "common.m"
            {
#line 558 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, &check_hlds__simplify__common__VarTypes_22);
            }
#line 559 "common.m"
            {
#line 559 "common.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, &check_hlds__simplify__common__ModuleInfo_23);
            }
#line 560 "common.m"
            {
#line 560 "common.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__common__ModuleInfo_23, check_hlds__simplify__common__PredId_12, check_hlds__simplify__common__ProcId_13, &check_hlds__simplify__common__V_24_24, &check_hlds__simplify__common__ProcInfo_25);
            }
#line 561 "common.m"
            {
#line 561 "common.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__common__ProcInfo_25, &check_hlds__simplify__common__ArgModes_26);
            }
#line 562 "common.m"
            {
#line 562 "common.m"
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_22, check_hlds__simplify__common__ModuleInfo_23, check_hlds__simplify__common__ArgModes_26, check_hlds__simplify__common__Args_14, &check_hlds__simplify__common__InputArgs_27, &check_hlds__simplify__common__OutputArgs_28, &check_hlds__simplify__common__OutputModes_29);
            }
#line 555 "common.m"
          }
#line 555 "common.m"
      }
#line 568 "common.m"
    if (check_hlds__simplify__common__succeeded)
#line 565 "common.m"
      {
#line 565 "common.m"
        MR_Word check_hlds__simplify__common__V_34_34;

#line 565 "common.m"
        {
#line 565 "common.m"
          check_hlds__simplify__common__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_34_34, 0) = ((MR_Box) (check_hlds__simplify__common__PredId_12));
#line 565 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__V_34_34, 1) = ((MR_Box) (check_hlds__simplify__common__ProcId_13));
#line 565 "common.m"
        }
#line 565 "common.m"
        {
#line 565 "common.m"
          check_hlds__simplify__common__common_optimise_call_2_11_p_0(check_hlds__simplify__common__V_34_34, check_hlds__simplify__common__InputArgs_27, check_hlds__simplify__common__OutputArgs_28, check_hlds__simplify__common__OutputModes_29, check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__GoalExpr0_17, check_hlds__simplify__common__MaybeAssignsGoalExpr_18, check_hlds__simplify__common__STATE_VARIABLE_Common_0_30, check_hlds__simplify__common__STATE_VARIABLE_Common_31, check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, check_hlds__simplify__common__STATE_VARIABLE_Info_33);
#line 565 "common.m"
          return;
        }
#line 565 "common.m"
      }
#line 568 "common.m"
    else
#line 569 "common.m"
      {
#line 569 "common.m"
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Info_33 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_32;
#line 569 "common.m"
        *check_hlds__simplify__common__STATE_VARIABLE_Common_31 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_30;
#line 569 "common.m"
      }
#line 568 "common.m"
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
#line 309 "common.m"
  {
#line 309 "common.m"
    MR_bool check_hlds__simplify__common__succeeded;

#line 309 "common.m"
#line 309 "common.m"
    switch (MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) {
#line 309 "common.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 309 "common.m"
      case (MR_Integer) 0:
#line 309 "common.m"
        {
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__SubInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 6)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 3)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 4)));
#line 309 "common.m"
          MR_Word check_hlds__simplify__common__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 5)));
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__MaybeTakeAddr_24;
#line 311 "common.m"
          MR_Word check_hlds__simplify__common__V_25_25;
#line 312 "common.m"
          MR_Word check_hlds__simplify__common__V_26_26;

#line 311 "common.m"
          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__SubInfo_23)) == (MR_mktag((MR_Integer) 1)));
#line 311 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 311 "common.m"
            {
#line 311 "common.m"
              check_hlds__simplify__common__MaybeTakeAddr_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__SubInfo_23, (MR_Integer) 0)));
#line 311 "common.m"
              check_hlds__simplify__common__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__SubInfo_23, (MR_Integer) 1)));
#line 312 "common.m"
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__MaybeTakeAddr_24)) == (MR_mktag((MR_Integer) 1)));
#line 312 "common.m"
              if (check_hlds__simplify__common__succeeded)
#line 312 "common.m"
                check_hlds__simplify__common__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__MaybeTakeAddr_24, (MR_Integer) 0)));
#line 311 "common.m"
            }
#line 315 "common.m"
          if (check_hlds__simplify__common__succeeded)
#line 314 "common.m"
            {
#line 314 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 314 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_39;
#line 314 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 314 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 314 "common.m"
            }
#line 315 "common.m"
          else
#line 316 "common.m"
            {
#line 316 "common.m"
              check_hlds__simplify__common__common_optimise_construct_12_p_0(check_hlds__simplify__common__Var_17, check_hlds__simplify__common__ConsId_18, check_hlds__simplify__common__ArgVars_19, check_hlds__simplify__common__Mode_12, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38, check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, check_hlds__simplify__common__STATE_VARIABLE_Common_40, check_hlds__simplify__common__STATE_VARIABLE_Info_0_41, check_hlds__simplify__common__STATE_VARIABLE_Info_42);
#line 316 "common.m"
              return;
            }
#line 309 "common.m"
        }
#line 309 "common.m"
        break;
#line 309 "common.m"
      case (MR_Integer) 1:
#line 320 "common.m"
        {
#line 320 "common.m"
          MR_Word check_hlds__simplify__common__UniModes_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 3)));
#line 320 "common.m"
          MR_Word check_hlds__simplify__common__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 4)));
#line 320 "common.m"
          MR_Word check_hlds__simplify__common__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 320 "common.m"
          MR_Word check_hlds__simplify__common__ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 320 "common.m"
          MR_Word check_hlds__simplify__common__ArgVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 320 "common.m"
          MR_Word check_hlds__simplify__common__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 5)));

#line 321 "common.m"
          {
#line 321 "common.m"
            check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(check_hlds__simplify__common__Var_52, check_hlds__simplify__common__ConsId_53, check_hlds__simplify__common__ArgVars_54, check_hlds__simplify__common__UniModes_27, check_hlds__simplify__common__CanFail_28, check_hlds__simplify__common__Mode_12, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38, check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, check_hlds__simplify__common__STATE_VARIABLE_Common_40, check_hlds__simplify__common__STATE_VARIABLE_Info_0_41, check_hlds__simplify__common__STATE_VARIABLE_Info_42);
#line 321 "common.m"
            return;
          }
#line 320 "common.m"
        }
#line 309 "common.m"
        break;
#line 309 "common.m"
      case (MR_Integer) 2:
#line 326 "common.m"
        {
#line 326 "common.m"
          MR_Word check_hlds__simplify__common__Var1_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
#line 326 "common.m"
          MR_Word check_hlds__simplify__common__Var2_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 326 "common.m"
          MR_Word check_hlds__simplify__common__VarEqv0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 326 "common.m"
          MR_Word check_hlds__simplify__common__VarEqv_63;
#line 545 "common.m"
          MR_Word check_hlds__simplify__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 545 "common.m"
          MR_Word check_hlds__simplify__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 545 "common.m"
          MR_Word check_hlds__simplify__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 547 "common.m"
          MR_Word check_hlds__simplify__common__V_69_69;
#line 547 "common.m"
          MR_Word check_hlds__simplify__common__V_70_70;
#line 547 "common.m"
          MR_Word check_hlds__simplify__common__V_71_71;
#line 547 "common.m"
          MR_Word check_hlds__simplify__common__V_68_68;

#line 546 "common.m"
          {
#line 546 "common.m"
            mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var1_30)), ((MR_Box) (check_hlds__simplify__common__Var2_31)), check_hlds__simplify__common__VarEqv0_62, &check_hlds__simplify__common__VarEqv_63);
          }
#line 547 "common.m"
          check_hlds__simplify__common__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 547 "common.m"
          check_hlds__simplify__common__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 547 "common.m"
          check_hlds__simplify__common__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 547 "common.m"
          check_hlds__simplify__common__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 547 "common.m"
          {
#line 547 "common.m"
            MR_Word base;
#line 547 "common.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 547 "common.m"
            *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = base;
#line 547 "common.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_63));
#line 547 "common.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_69_69));
#line 547 "common.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_70_70));
#line 547 "common.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_71_71));
#line 547 "common.m"
          }
#line 326 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 326 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 326 "common.m"
          *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 326 "common.m"
        }
#line 309 "common.m"
        break;
#line 309 "common.m"
      case (MR_Integer) 3:
#line 309 "common.m"
#line 309 "common.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)))) {
#line 309 "common.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 309 "common.m"
          case (MR_Integer) 0:
#line 326 "common.m"
            {
#line 326 "common.m"
              MR_Word check_hlds__simplify__common__Var1_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
#line 326 "common.m"
              MR_Word check_hlds__simplify__common__Var2_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
#line 326 "common.m"
              MR_Word check_hlds__simplify__common__VarEqv0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 326 "common.m"
              MR_Word check_hlds__simplify__common__VarEqv_79;
#line 545 "common.m"
              MR_Word check_hlds__simplify__common__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 545 "common.m"
              MR_Word check_hlds__simplify__common__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 545 "common.m"
              MR_Word check_hlds__simplify__common__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 547 "common.m"
              MR_Word check_hlds__simplify__common__V_85_85;
#line 547 "common.m"
              MR_Word check_hlds__simplify__common__V_86_86;
#line 547 "common.m"
              MR_Word check_hlds__simplify__common__V_87_87;
#line 547 "common.m"
              MR_Word check_hlds__simplify__common__V_84_84;

#line 546 "common.m"
              {
#line 546 "common.m"
                mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var1_55)), ((MR_Box) (check_hlds__simplify__common__Var2_56)), check_hlds__simplify__common__VarEqv0_78, &check_hlds__simplify__common__VarEqv_79);
              }
#line 547 "common.m"
              check_hlds__simplify__common__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
#line 547 "common.m"
              check_hlds__simplify__common__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
#line 547 "common.m"
              check_hlds__simplify__common__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
#line 547 "common.m"
              check_hlds__simplify__common__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
#line 547 "common.m"
              {
#line 547 "common.m"
                MR_Word base;
#line 547 "common.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 547 "common.m"
                *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = base;
#line 547 "common.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_79));
#line 547 "common.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__V_85_85));
#line 547 "common.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__V_86_86));
#line 547 "common.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__V_87_87));
#line 547 "common.m"
              }
#line 326 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 326 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 326 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 326 "common.m"
            }
#line 309 "common.m"
            break;
#line 309 "common.m"
          case (MR_Integer) 1:
#line 329 "common.m"
            {
#line 329 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
#line 329 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
#line 329 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_39;
#line 329 "common.m"
              *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
#line 329 "common.m"
            }
#line 309 "common.m"
            break;
#line 309 "common.m"
        }
#line 309 "common.m"
        break;
#line 309 "common.m"
    }
#line 309 "common.m"
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
