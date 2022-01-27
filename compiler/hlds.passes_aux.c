/*
** Automatically generated from `passes_aux.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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


/* :- module hlds.passes_aux. */
/* :- implementation. */

/*
INIT mercury__hlds__passes_aux__init
ENDINIT
*/

#include "hlds.passes_aux.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "benchmarking.mih"
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
#include "libs.file_util.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
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
#include "hlds.hlds_out.hlds_out_module.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 187 "passes_aux.m"
struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s {
#line 187 "passes_aux.m"
  MR_Integer hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNum_5;
#line 187 "passes_aux.m"
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6;
#line 187 "passes_aux.m"
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageName_7;
#line 187 "passes_aux.m"
  MR_Word hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStages_8;
#line 533 "passes_aux.m"
  MR_bool hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded;
#line 533 "passes_aux.m"
  jmp_buf hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_0;
#line 533 "passes_aux.m"
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15;
#line 533 "passes_aux.m"
  MR_Box hlds__passes_aux__should_dump_stage_4_p_0_env_0__conv0_DumpStage_15;
#line 547 "passes_aux.m"
  jmp_buf hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_1;
#line 547 "passes_aux.m"
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__From_10;
#line 547 "passes_aux.m"
  MR_Integer hlds__passes_aux__should_dump_stage_4_p_0_env_0__FromInt_11;
#line 547 "passes_aux.m"
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_12_12;
#line 547 "passes_aux.m"
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_17_17;
#line 187 "passes_aux.m"
};


#line 177 "hlds.passes_aux.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 180 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0;

#line 183 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_dump_info_0_1[2];

#line 186 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1;

#line 189 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_0[1];

#line 192 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_1[1];

#line 195 "hlds.passes_aux.c"
static const MR_DuPtagLayout hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_dump_info_0[2];

#line 198 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_name_ordered_dump_info_0[2];

#line 201 "hlds.passes_aux.c"
static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_dump_info_0[2];

#line 204 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0;

#line 207 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct8 hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0;

#line 210 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct6 hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0;

#line 213 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct5 hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0;

#line 216 "hlds.passes_aux.c"
static const MR_FA_TypeInfo_Struct1 hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 219 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 222 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct5 hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 225 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct4 hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 228 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct3 hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 231 "hlds.passes_aux.c"
static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_update_pred_task_0[1];

#line 234 "hlds.passes_aux.c"
static const MR_NotagFunctorDesc hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0;

#line 237 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_0[1];

#line 240 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_0;

#line 243 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_1[1];

#line 246 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_1;

#line 249 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_2[1];

#line 252 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_2;

#line 255 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_3[1];

#line 258 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_3;

#line 261 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_4[1];

#line 264 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_4;

#line 267 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_5[2];

#line 270 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_5;

#line 273 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_6[2];

#line 276 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_6;

#line 279 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_0[1];

#line 282 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_1[1];

#line 285 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_2[1];

#line 288 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_3[4];

#line 291 "hlds.passes_aux.c"
static const MR_DuPtagLayout hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_update_proc_task_0[4];

#line 294 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_name_ordered_update_proc_task_0[7];

#line 297 "hlds.passes_aux.c"
static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_update_proc_task_0[7];

#line 300 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____dump_info_0_0_10001(
#line 303 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 305 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 308 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____dump_info_0_0_10001(
#line 311 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 313 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 315 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 318 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_cookie_task_0_0_10001(
#line 321 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 323 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 326 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____module_cookie_task_0_0_10001(
#line 329 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 331 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 333 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 336 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_cookie_task_0_0_10001(
#line 339 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 341 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 344 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____module_pred_cookie_task_0_0_10001(
#line 347 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 349 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 351 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 354 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_task_0_0_10001(
#line 357 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 359 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 362 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____module_pred_task_0_0_10001(
#line 365 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 367 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 369 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 372 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_task_0_0_10001(
#line 375 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 377 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 380 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____module_task_0_0_10001(
#line 383 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 385 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 387 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 390 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____pred_error_task_0_0_10001(
#line 393 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 395 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 398 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____pred_error_task_0_0_10001(
#line 401 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 403 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 405 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 408 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_pred_task_0_0_10001(
#line 411 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 413 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 416 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_pred_task_0_0_10001(
#line 419 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 421 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 423 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 426 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_task_0_0_10001(
#line 429 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 431 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 434 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_task_0_0_10001(
#line 437 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 439 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 441 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 444 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_task_0_0_10001(
#line 447 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 449 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 452 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____proc_task_0_0_10001(
#line 455 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 457 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 459 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 462 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_pred_task_0_0_10001(
#line 465 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 467 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 470 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____update_pred_task_0_0_10001(
#line 473 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 475 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 477 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 480 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_proc_task_0_0_10001(
#line 483 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 485 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2);

#line 488 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____update_proc_task_0_0_10001(
#line 491 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 493 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 495 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3);

#line 633 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__dump_hlds_4_p_0(
#line 633 "passes_aux.m"
  MR_String hlds__passes_aux__DumpFile_5,
#line 633 "passes_aux.m"
  MR_Word hlds__passes_aux__HLDS_6);

#line 369 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__seq_process_nonimported_procs_6_p_0(
#line 369 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 369 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 369 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0_3,
#line 369 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Task_4,
#line 369 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5,
#line 369 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_6);

#line 356 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__seq_process_nonimported_procs_in_preds_5_p_0(
#line 356 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 356 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0_2,
#line 356 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Task_3,
#line 356 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4,
#line 356 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_5);

#line 326 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__par_process_nonimported_procs_6_p_0(
#line 326 "passes_aux.m"
  MR_Word hlds__passes_aux__ModuleInfo_1,
#line 326 "passes_aux.m"
  MR_Word hlds__passes_aux__Task_2,
#line 326 "passes_aux.m"
  MR_Word hlds__passes_aux__PredId_3,
#line 326 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__4_4,
#line 326 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5,
#line 326 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_PredInfo_6);

#line 300 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__par_process_nonimported_procs_in_preds_5_p_0(
#line 300 "passes_aux.m"
  MR_Word hlds__passes_aux__ModuleInfo_1,
#line 300 "passes_aux.m"
  MR_Word hlds__passes_aux__Task_2,
#line 300 "passes_aux.m"
  MR_Word hlds__passes_aux__ValidPredIdSet_3,
#line 300 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__4_4,
#line 300 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__5_5);

#line 236 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__process_nonimported_pred_6_p_0(
#line 236 "passes_aux.m"
  MR_Word hlds__passes_aux__Task_7,
#line 236 "passes_aux.m"
  MR_Word hlds__passes_aux__PredId_8,
#line 236 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_14,
#line 236 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_15,
#line 236 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_Specs_0_16,
#line 236 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Specs_17);

#line 533 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_1(
#line 533 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg);

#line 533 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_3(
#line 533 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg);

#line 547 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_4(
#line 547 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg);

#line 547 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_5(
#line 547 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg);

#line 547 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_6(
#line 547 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg);

#line 533 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_2(
#line 533 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg);

#line 533 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_7(
#line 533 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg);

#line 234 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0_1(
#line 234 "passes_aux.m"
  MR_Box hlds__passes_aux__closure_arg,
#line 234 "passes_aux.m"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 234 "passes_aux.m"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 234 "passes_aux.m"
  MR_Box * hlds__passes_aux__wrapper_arg_3,
#line 234 "passes_aux.m"
  MR_Box hlds__passes_aux__wrapper_arg_4,
#line 234 "passes_aux.m"
  MR_Box * hlds__passes_aux__wrapper_arg_5);


static /* final */ const MR_Box hlds__passes_aux_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_3[3][9];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_4[1][10];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_6[2][7];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_7[1][6];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_8[1][5];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_9[2][1];




static /* final */ const MR_Box hlds__passes_aux_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_3[3][9] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__passes_aux_scalar_common_1[0])),
    ((MR_Box) (&hlds__passes_aux_scalar_common_1[0]))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_pred_task_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_4[1][10] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_5[1][8] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_6[2][7] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_7[1][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_8[1][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_9[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



#line 828 "hlds.passes_aux.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 836 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0 = {
  (MR_String) "no_prev_dump",
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

#line 851 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_dump_info_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 857 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1 = {
  (MR_String) "prev_dumped_hlds",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__passes_aux__hlds__passes_aux__field_types_dump_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 872 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_0[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0
};

#line 877 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_1[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1
};

#line 882 "hlds.passes_aux.c"
static const MR_DuPtagLayout hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_dump_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_1
  }
};

#line 896 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_name_ordered_dump_info_0[2] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1
};

#line 902 "hlds.passes_aux.c"
static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_dump_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 908 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__passes_aux____Unify____dump_info_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____dump_info_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "dump_info",
  {     hlds__passes_aux__hlds__passes_aux__du_name_ordered_dump_info_0 },
  {     hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_dump_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__passes_aux__hlds__passes_aux__functor_number_map_dump_info_0
};

#line 925 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 940 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_cookie_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_cookie_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_cookie_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_cookie_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 957 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct8 hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 973 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_pred_cookie_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_pred_cookie_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_pred_cookie_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_pred_cookie_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 990 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct6 hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
  }
};

#line 1004 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_pred_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_pred_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_pred_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_pred_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1021 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct5 hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
  }
};

#line 1034 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1051 "hlds.passes_aux.c"
static const MR_FA_TypeInfo_Struct1 hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1059 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1074 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_pred_error_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____pred_error_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____pred_error_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "pred_error_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1091 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct5 hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1104 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_ids_pred_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____proc_ids_pred_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____proc_ids_pred_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "proc_ids_pred_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1121 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct4 hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1133 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_ids_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____proc_ids_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____proc_ids_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "proc_ids_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1150 "hlds.passes_aux.c"
static const MR_VA_TypeInfo_Struct3 hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1161 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____proc_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____proc_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "proc_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1178 "hlds.passes_aux.c"
static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_update_pred_task_0[1] = {
  (MR_Integer) 0
};

#line 1183 "hlds.passes_aux.c"
static const MR_NotagFunctorDesc hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0 = {
  (MR_String) "update_pred_error",
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  NULL
};

#line 1190 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_pred_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____update_pred_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____update_pred_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "update_pred_task",
  {     &hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0 },
  {     &hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__passes_aux__hlds__passes_aux__functor_number_map_update_pred_task_0
};

#line 1207 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0
};

#line 1212 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_0 = {
  (MR_String) "update_proc",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_0,
  NULL,
  NULL,
  NULL
};

#line 1227 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0
};

#line 1232 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_1 = {
  (MR_String) "update_proc_ids",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_1,
  NULL,
  NULL,
  NULL
};

#line 1247 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0
};

#line 1252 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_2 = {
  (MR_String) "update_proc_ids_pred",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_2,
  NULL,
  NULL,
  NULL
};

#line 1267 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_3[1] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1272 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_3 = {
  (MR_String) "update_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_3,
  NULL,
  NULL,
  NULL
};

#line 1287 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_4[1] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1292 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_4 = {
  (MR_String) "update_module_pred",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_4,
  NULL,
  NULL,
  NULL
};

#line 1307 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_5[2] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 1313 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_5 = {
  (MR_String) "update_module_cookie",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_5,
  NULL,
  NULL,
  NULL
};

#line 1328 "hlds.passes_aux.c"
static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_6[2] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 1334 "hlds.passes_aux.c"
static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_6 = {
  (MR_String) "update_module_pred_cookie",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_6,
  NULL,
  NULL,
  NULL
};

#line 1349 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_0[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_0
};

#line 1354 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_1[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_1
};

#line 1359 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_2[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_2
};

#line 1364 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_3[4] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_3,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_4,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_5,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_6
};

#line 1372 "hlds.passes_aux.c"
static const MR_DuPtagLayout hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_update_proc_task_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_3
  }
};

#line 1396 "hlds.passes_aux.c"
static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_name_ordered_update_proc_task_0[7] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_3,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_5,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_4,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_6,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_0,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_1,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_2
};

#line 1407 "hlds.passes_aux.c"
static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_update_proc_task_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3
};

#line 1418 "hlds.passes_aux.c"
const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_proc_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__passes_aux____Unify____update_proc_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____update_proc_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "update_proc_task",
  {     hlds__passes_aux__hlds__passes_aux__du_name_ordered_update_proc_task_0 },
  {     hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_update_proc_task_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  hlds__passes_aux__hlds__passes_aux__functor_number_map_update_proc_task_0
};

#line 1435 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____dump_info_0_0_10001(
#line 1438 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1440 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1442 "hlds.passes_aux.c"
{
#line 1444 "hlds.passes_aux.c"
  {
#line 1446 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1449 "hlds.passes_aux.c"
    {
#line 1451 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____dump_info_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1454 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1456 "hlds.passes_aux.c"
  }
#line 1458 "hlds.passes_aux.c"
}

#line 1461 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____dump_info_0_0_10001(
#line 1464 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 1466 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 1468 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 1470 "hlds.passes_aux.c"
{
#line 1472 "hlds.passes_aux.c"
  {
#line 1474 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 1477 "hlds.passes_aux.c"
    {
#line 1479 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____dump_info_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 1482 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 1484 "hlds.passes_aux.c"
  }
#line 1486 "hlds.passes_aux.c"
}

#line 1489 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_cookie_task_0_0_10001(
#line 1492 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1494 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1496 "hlds.passes_aux.c"
{
#line 1498 "hlds.passes_aux.c"
  {
#line 1500 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1503 "hlds.passes_aux.c"
    {
#line 1505 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____module_cookie_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1508 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1510 "hlds.passes_aux.c"
  }
#line 1512 "hlds.passes_aux.c"
}

#line 1515 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____module_cookie_task_0_0_10001(
#line 1518 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 1520 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 1522 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 1524 "hlds.passes_aux.c"
{
#line 1526 "hlds.passes_aux.c"
  {
#line 1528 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 1531 "hlds.passes_aux.c"
    {
#line 1533 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____module_cookie_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 1536 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 1538 "hlds.passes_aux.c"
  }
#line 1540 "hlds.passes_aux.c"
}

#line 1543 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_cookie_task_0_0_10001(
#line 1546 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1548 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1550 "hlds.passes_aux.c"
{
#line 1552 "hlds.passes_aux.c"
  {
#line 1554 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1557 "hlds.passes_aux.c"
    {
#line 1559 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____module_pred_cookie_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1562 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1564 "hlds.passes_aux.c"
  }
#line 1566 "hlds.passes_aux.c"
}

#line 1569 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____module_pred_cookie_task_0_0_10001(
#line 1572 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 1574 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 1576 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 1578 "hlds.passes_aux.c"
{
#line 1580 "hlds.passes_aux.c"
  {
#line 1582 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 1585 "hlds.passes_aux.c"
    {
#line 1587 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____module_pred_cookie_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 1590 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 1592 "hlds.passes_aux.c"
  }
#line 1594 "hlds.passes_aux.c"
}

#line 1597 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_task_0_0_10001(
#line 1600 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1602 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1604 "hlds.passes_aux.c"
{
#line 1606 "hlds.passes_aux.c"
  {
#line 1608 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1611 "hlds.passes_aux.c"
    {
#line 1613 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____module_pred_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1616 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1618 "hlds.passes_aux.c"
  }
#line 1620 "hlds.passes_aux.c"
}

#line 1623 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____module_pred_task_0_0_10001(
#line 1626 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 1628 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 1630 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 1632 "hlds.passes_aux.c"
{
#line 1634 "hlds.passes_aux.c"
  {
#line 1636 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 1639 "hlds.passes_aux.c"
    {
#line 1641 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____module_pred_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 1644 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 1646 "hlds.passes_aux.c"
  }
#line 1648 "hlds.passes_aux.c"
}

#line 1651 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_task_0_0_10001(
#line 1654 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1656 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1658 "hlds.passes_aux.c"
{
#line 1660 "hlds.passes_aux.c"
  {
#line 1662 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1665 "hlds.passes_aux.c"
    {
#line 1667 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____module_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1670 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1672 "hlds.passes_aux.c"
  }
#line 1674 "hlds.passes_aux.c"
}

#line 1677 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____module_task_0_0_10001(
#line 1680 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 1682 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 1684 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 1686 "hlds.passes_aux.c"
{
#line 1688 "hlds.passes_aux.c"
  {
#line 1690 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 1693 "hlds.passes_aux.c"
    {
#line 1695 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____module_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 1698 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 1700 "hlds.passes_aux.c"
  }
#line 1702 "hlds.passes_aux.c"
}

#line 1705 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____pred_error_task_0_0_10001(
#line 1708 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1710 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1712 "hlds.passes_aux.c"
{
#line 1714 "hlds.passes_aux.c"
  {
#line 1716 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1719 "hlds.passes_aux.c"
    {
#line 1721 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____pred_error_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1724 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1726 "hlds.passes_aux.c"
  }
#line 1728 "hlds.passes_aux.c"
}

#line 1731 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____pred_error_task_0_0_10001(
#line 1734 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 1736 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 1738 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 1740 "hlds.passes_aux.c"
{
#line 1742 "hlds.passes_aux.c"
  {
#line 1744 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 1747 "hlds.passes_aux.c"
    {
#line 1749 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____pred_error_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 1752 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 1754 "hlds.passes_aux.c"
  }
#line 1756 "hlds.passes_aux.c"
}

#line 1759 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_pred_task_0_0_10001(
#line 1762 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1764 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1766 "hlds.passes_aux.c"
{
#line 1768 "hlds.passes_aux.c"
  {
#line 1770 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1773 "hlds.passes_aux.c"
    {
#line 1775 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____proc_ids_pred_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1778 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1780 "hlds.passes_aux.c"
  }
#line 1782 "hlds.passes_aux.c"
}

#line 1785 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_pred_task_0_0_10001(
#line 1788 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 1790 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 1792 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 1794 "hlds.passes_aux.c"
{
#line 1796 "hlds.passes_aux.c"
  {
#line 1798 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 1801 "hlds.passes_aux.c"
    {
#line 1803 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____proc_ids_pred_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 1806 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 1808 "hlds.passes_aux.c"
  }
#line 1810 "hlds.passes_aux.c"
}

#line 1813 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_task_0_0_10001(
#line 1816 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1818 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1820 "hlds.passes_aux.c"
{
#line 1822 "hlds.passes_aux.c"
  {
#line 1824 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1827 "hlds.passes_aux.c"
    {
#line 1829 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____proc_ids_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1832 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1834 "hlds.passes_aux.c"
  }
#line 1836 "hlds.passes_aux.c"
}

#line 1839 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_task_0_0_10001(
#line 1842 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 1844 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 1846 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 1848 "hlds.passes_aux.c"
{
#line 1850 "hlds.passes_aux.c"
  {
#line 1852 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 1855 "hlds.passes_aux.c"
    {
#line 1857 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____proc_ids_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 1860 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 1862 "hlds.passes_aux.c"
  }
#line 1864 "hlds.passes_aux.c"
}

#line 1867 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_task_0_0_10001(
#line 1870 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1872 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1874 "hlds.passes_aux.c"
{
#line 1876 "hlds.passes_aux.c"
  {
#line 1878 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1881 "hlds.passes_aux.c"
    {
#line 1883 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____proc_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1886 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1888 "hlds.passes_aux.c"
  }
#line 1890 "hlds.passes_aux.c"
}

#line 1893 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____proc_task_0_0_10001(
#line 1896 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 1898 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 1900 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 1902 "hlds.passes_aux.c"
{
#line 1904 "hlds.passes_aux.c"
  {
#line 1906 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 1909 "hlds.passes_aux.c"
    {
#line 1911 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____proc_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 1914 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 1916 "hlds.passes_aux.c"
  }
#line 1918 "hlds.passes_aux.c"
}

#line 1921 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_pred_task_0_0_10001(
#line 1924 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1926 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1928 "hlds.passes_aux.c"
{
#line 1930 "hlds.passes_aux.c"
  {
#line 1932 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1935 "hlds.passes_aux.c"
    {
#line 1937 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____update_pred_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1940 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1942 "hlds.passes_aux.c"
  }
#line 1944 "hlds.passes_aux.c"
}

#line 1947 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____update_pred_task_0_0_10001(
#line 1950 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 1952 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 1954 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 1956 "hlds.passes_aux.c"
{
#line 1958 "hlds.passes_aux.c"
  {
#line 1960 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 1963 "hlds.passes_aux.c"
    {
#line 1965 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____update_pred_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 1968 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 1970 "hlds.passes_aux.c"
  }
#line 1972 "hlds.passes_aux.c"
}

#line 1975 "hlds.passes_aux.c"
static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_proc_task_0_0_10001(
#line 1978 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 1980 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2)
#line 1982 "hlds.passes_aux.c"
{
#line 1984 "hlds.passes_aux.c"
  {
#line 1986 "hlds.passes_aux.c"
    MR_bool hlds__passes_aux__succeeded;

#line 1989 "hlds.passes_aux.c"
    {
#line 1991 "hlds.passes_aux.c"
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____update_proc_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
#line 1994 "hlds.passes_aux.c"
    return hlds__passes_aux__succeeded;
#line 1996 "hlds.passes_aux.c"
  }
#line 1998 "hlds.passes_aux.c"
}

#line 2001 "hlds.passes_aux.c"
static void MR_CALL 
hlds__passes_aux____Compare____update_proc_task_0_0_10001(
#line 2004 "hlds.passes_aux.c"
  MR_Box * hlds__passes_aux__wrapper_arg_1,
#line 2006 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 2008 "hlds.passes_aux.c"
  MR_Box hlds__passes_aux__wrapper_arg_3)
#line 2010 "hlds.passes_aux.c"
{
#line 2012 "hlds.passes_aux.c"
  {
#line 2014 "hlds.passes_aux.c"
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

#line 2017 "hlds.passes_aux.c"
    {
#line 2019 "hlds.passes_aux.c"
      hlds__passes_aux____Compare____update_proc_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
#line 2022 "hlds.passes_aux.c"
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
#line 2024 "hlds.passes_aux.c"
  }
#line 2026 "hlds.passes_aux.c"
}

#line 118 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____update_proc_task_0_0(
#line 118 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 118 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 118 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 118 "passes_aux.m"
{
#line 118 "passes_aux.m"
  {
#line 118 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 118 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastX_132 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;
#line 118 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastY_133 = (MR_Integer) hlds__passes_aux__HeadVar__3_3;

#line 118 "passes_aux.m"
    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_132 == hlds__passes_aux__CastY_133);
#line 118 "passes_aux.m"
    if (hlds__passes_aux__succeeded)
#line 2053 "hlds.passes_aux.c"
      *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 0;
#line 118 "passes_aux.m"
    else
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
      switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) {
#line 118 "passes_aux.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
        case (MR_Integer) 0:
#line 118 "passes_aux.m"
          {
#line 118 "passes_aux.m"
            MR_Word hlds__passes_aux__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));

#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
            switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
#line 118 "passes_aux.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
              case (MR_Integer) 0:
#line 118 "passes_aux.m"
                {
#line 118 "passes_aux.m"
                  MR_Word hlds__passes_aux__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)));

#line 118 "passes_aux.m"
                  {
#line 118 "passes_aux.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_8[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_149_149)), ((MR_Box) (hlds__passes_aux__V_5_5)));
#line 118 "passes_aux.m"
                    return;
                  }
#line 118 "passes_aux.m"
                }
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
              case (MR_Integer) 1:
#line 2094 "hlds.passes_aux.c"
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
              case (MR_Integer) 2:
#line 2100 "hlds.passes_aux.c"
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
              case (MR_Integer) 3:
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
#line 118 "passes_aux.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                  case (MR_Integer) 0:
#line 2113 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 1:
#line 2119 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 2:
#line 2125 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 3:
#line 2131 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                }
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
            }
#line 118 "passes_aux.m"
          }
#line 118 "passes_aux.m"
          break;
#line 118 "passes_aux.m"
        case (MR_Integer) 1:
#line 118 "passes_aux.m"
          {
#line 118 "passes_aux.m"
            MR_Word hlds__passes_aux__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));

#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
            switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
#line 118 "passes_aux.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
              case (MR_Integer) 0:
#line 2159 "hlds.passes_aux.c"
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
              case (MR_Integer) 1:
#line 118 "passes_aux.m"
                {
#line 118 "passes_aux.m"
                  MR_Word hlds__passes_aux__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)));

#line 118 "passes_aux.m"
                  {
#line 118 "passes_aux.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_7[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_150_150)), ((MR_Box) (hlds__passes_aux__V_23_23)));
#line 118 "passes_aux.m"
                    return;
                  }
#line 118 "passes_aux.m"
                }
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
              case (MR_Integer) 2:
#line 2183 "hlds.passes_aux.c"
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
              case (MR_Integer) 3:
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
#line 118 "passes_aux.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                  case (MR_Integer) 0:
#line 2196 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 1:
#line 2202 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 2:
#line 2208 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 3:
#line 2214 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                }
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
            }
#line 118 "passes_aux.m"
          }
#line 118 "passes_aux.m"
          break;
#line 118 "passes_aux.m"
        case (MR_Integer) 2:
#line 118 "passes_aux.m"
          {
#line 118 "passes_aux.m"
            MR_Word hlds__passes_aux__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));

#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
            switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
#line 118 "passes_aux.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
              case (MR_Integer) 0:
#line 2242 "hlds.passes_aux.c"
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
              case (MR_Integer) 1:
#line 2248 "hlds.passes_aux.c"
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
              case (MR_Integer) 2:
#line 118 "passes_aux.m"
                {
#line 118 "passes_aux.m"
                  MR_Word hlds__passes_aux__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)));

#line 118 "passes_aux.m"
                  {
#line 118 "passes_aux.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_6[1], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_151_151)), ((MR_Box) (hlds__passes_aux__V_41_41)));
#line 118 "passes_aux.m"
                    return;
                  }
#line 118 "passes_aux.m"
                }
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
              case (MR_Integer) 3:
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
#line 118 "passes_aux.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                  case (MR_Integer) 0:
#line 2279 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 1:
#line 2285 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 2:
#line 2291 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 3:
#line 2297 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                }
#line 118 "passes_aux.m"
                break;
#line 118 "passes_aux.m"
            }
#line 118 "passes_aux.m"
          }
#line 118 "passes_aux.m"
          break;
#line 118 "passes_aux.m"
        case (MR_Integer) 3:
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)))) {
#line 118 "passes_aux.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
            case (MR_Integer) 0:
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));

#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
#line 118 "passes_aux.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                  case (MR_Integer) 0:
#line 2332 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 1:
#line 2338 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 2:
#line 2344 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 3:
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
#line 118 "passes_aux.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                      case (MR_Integer) 0:
#line 118 "passes_aux.m"
                        {
#line 118 "passes_aux.m"
                          MR_Word hlds__passes_aux__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 1)));

#line 118 "passes_aux.m"
                          {
#line 118 "passes_aux.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_6[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_143_143)), ((MR_Box) (hlds__passes_aux__V_59_59)));
#line 118 "passes_aux.m"
                            return;
                          }
#line 118 "passes_aux.m"
                        }
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 1:
#line 2375 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 2:
#line 2381 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 3:
#line 2387 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                    }
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
              break;
#line 118 "passes_aux.m"
            case (MR_Integer) 1:
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));

#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
#line 118 "passes_aux.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                  case (MR_Integer) 0:
#line 2415 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 1:
#line 2421 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 2:
#line 2427 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 3:
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
#line 118 "passes_aux.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                      case (MR_Integer) 0:
#line 2440 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 1:
#line 118 "passes_aux.m"
                        {
#line 118 "passes_aux.m"
                          MR_Word hlds__passes_aux__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 1)));

#line 118 "passes_aux.m"
                          {
#line 118 "passes_aux.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_5[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_146_146)), ((MR_Box) (hlds__passes_aux__V_77_77)));
#line 118 "passes_aux.m"
                            return;
                          }
#line 118 "passes_aux.m"
                        }
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 2:
#line 2464 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 3:
#line 2470 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                    }
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
              break;
#line 118 "passes_aux.m"
            case (MR_Integer) 2:
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 2)));
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));

#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
#line 118 "passes_aux.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                  case (MR_Integer) 0:
#line 2500 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 1:
#line 2506 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 2:
#line 2512 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 3:
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
#line 118 "passes_aux.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                      case (MR_Integer) 0:
#line 2525 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 1:
#line 2531 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 2:
#line 118 "passes_aux.m"
                        {
#line 118 "passes_aux.m"
                          MR_Word hlds__passes_aux__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 1)));
#line 118 "passes_aux.m"
                          MR_Word hlds__passes_aux__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 2)));
#line 118 "passes_aux.m"
                          MR_Word hlds__passes_aux__V_103_103;

#line 118 "passes_aux.m"
                          {
#line 118 "passes_aux.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_3[0], &hlds__passes_aux__V_103_103, ((MR_Box) (hlds__passes_aux__V_145_145)), ((MR_Box) (hlds__passes_aux__V_101_101)));
                          }
#line 2551 "hlds.passes_aux.c"
                          hlds__passes_aux__succeeded = (hlds__passes_aux__V_103_103 == (MR_Integer) 0);
#line 118 "passes_aux.m"
                          hlds__passes_aux__succeeded = !(hlds__passes_aux__succeeded);
#line 118 "passes_aux.m"
                          if (hlds__passes_aux__succeeded)
#line 118 "passes_aux.m"
                            *hlds__passes_aux__HeadVar__1_1 = hlds__passes_aux__V_103_103;
#line 118 "passes_aux.m"
                          else
#line 118 "passes_aux.m"
                            {
#line 118 "passes_aux.m"
                              mercury__univ____Compare____univ_0_0(hlds__passes_aux__HeadVar__1_1, hlds__passes_aux__V_144_144, hlds__passes_aux__V_102_102);
#line 118 "passes_aux.m"
                              return;
                            }
#line 118 "passes_aux.m"
                        }
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 3:
#line 2574 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                    }
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
              break;
#line 118 "passes_aux.m"
            case (MR_Integer) 3:
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 2)));
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));

#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
#line 118 "passes_aux.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                  case (MR_Integer) 0:
#line 2604 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 1:
#line 2610 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 2:
#line 2616 "hlds.passes_aux.c"
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                  case (MR_Integer) 3:
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
#line 118 "passes_aux.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
                      case (MR_Integer) 0:
#line 2629 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 1:
#line 2635 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 2:
#line 2641 "hlds.passes_aux.c"
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                      case (MR_Integer) 3:
#line 118 "passes_aux.m"
                        {
#line 118 "passes_aux.m"
                          MR_Word hlds__passes_aux__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 1)));
#line 118 "passes_aux.m"
                          MR_Word hlds__passes_aux__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 2)));
#line 118 "passes_aux.m"
                          MR_Word hlds__passes_aux__V_131_131;

#line 118 "passes_aux.m"
                          {
#line 118 "passes_aux.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_4[0], &hlds__passes_aux__V_131_131, ((MR_Box) (hlds__passes_aux__V_148_148)), ((MR_Box) (hlds__passes_aux__V_129_129)));
                          }
#line 2661 "hlds.passes_aux.c"
                          hlds__passes_aux__succeeded = (hlds__passes_aux__V_131_131 == (MR_Integer) 0);
#line 118 "passes_aux.m"
                          hlds__passes_aux__succeeded = !(hlds__passes_aux__succeeded);
#line 118 "passes_aux.m"
                          if (hlds__passes_aux__succeeded)
#line 118 "passes_aux.m"
                            *hlds__passes_aux__HeadVar__1_1 = hlds__passes_aux__V_131_131;
#line 118 "passes_aux.m"
                          else
#line 118 "passes_aux.m"
                            {
#line 118 "passes_aux.m"
                              mercury__univ____Compare____univ_0_0(hlds__passes_aux__HeadVar__1_1, hlds__passes_aux__V_147_147, hlds__passes_aux__V_130_130);
#line 118 "passes_aux.m"
                              return;
                            }
#line 118 "passes_aux.m"
                        }
#line 118 "passes_aux.m"
                        break;
#line 118 "passes_aux.m"
                    }
#line 118 "passes_aux.m"
                    break;
#line 118 "passes_aux.m"
                }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
              break;
#line 118 "passes_aux.m"
          }
#line 118 "passes_aux.m"
          break;
#line 118 "passes_aux.m"
      }
#line 118 "passes_aux.m"
  }
#line 118 "passes_aux.m"
}

#line 118 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____update_proc_task_0_0(
#line 118 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 118 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 118 "passes_aux.m"
{
#line 118 "passes_aux.m"
  {
#line 118 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 118 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastX_21 = (MR_Integer) hlds__passes_aux__HeadVar__1_1;
#line 118 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastY_22 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;

#line 118 "passes_aux.m"
    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_21 == hlds__passes_aux__CastY_22);
#line 118 "passes_aux.m"
    if (hlds__passes_aux__succeeded)
#line 118 "passes_aux.m"
      hlds__passes_aux__succeeded = MR_TRUE;
#line 118 "passes_aux.m"
    else
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
      switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__1_1)) {
#line 118 "passes_aux.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
        case (MR_Integer) 0:
#line 118 "passes_aux.m"
          {
#line 118 "passes_aux.m"
            MR_Word hlds__passes_aux__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 118 "passes_aux.m"
            MR_Word hlds__passes_aux__V_4_4;

#line 118 "passes_aux.m"
            hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 118 "passes_aux.m"
            if (hlds__passes_aux__succeeded)
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                hlds__passes_aux__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
#line 2751 "hlds.passes_aux.c"
                {
#line 2753 "hlds.passes_aux.c"
                  return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_3_3, (MR_Word) hlds__passes_aux__V_4_4);
                }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
          }
#line 118 "passes_aux.m"
          break;
#line 118 "passes_aux.m"
        case (MR_Integer) 1:
#line 118 "passes_aux.m"
          {
#line 118 "passes_aux.m"
            MR_Word hlds__passes_aux__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 118 "passes_aux.m"
            MR_Word hlds__passes_aux__V_6_6;

#line 118 "passes_aux.m"
            hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 118 "passes_aux.m"
            if (hlds__passes_aux__succeeded)
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                hlds__passes_aux__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
#line 2779 "hlds.passes_aux.c"
                {
#line 2781 "hlds.passes_aux.c"
                  return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_5_5, (MR_Word) hlds__passes_aux__V_6_6);
                }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
          }
#line 118 "passes_aux.m"
          break;
#line 118 "passes_aux.m"
        case (MR_Integer) 2:
#line 118 "passes_aux.m"
          {
#line 118 "passes_aux.m"
            MR_Word hlds__passes_aux__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 118 "passes_aux.m"
            MR_Word hlds__passes_aux__V_8_8;

#line 118 "passes_aux.m"
            hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 118 "passes_aux.m"
            if (hlds__passes_aux__succeeded)
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                hlds__passes_aux__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
#line 2807 "hlds.passes_aux.c"
                {
#line 2809 "hlds.passes_aux.c"
                  return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_7_7, (MR_Word) hlds__passes_aux__V_8_8);
                }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
          }
#line 118 "passes_aux.m"
          break;
#line 118 "passes_aux.m"
        case (MR_Integer) 3:
#line 118 "passes_aux.m"
#line 118 "passes_aux.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)))) {
#line 118 "passes_aux.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 118 "passes_aux.m"
            case (MR_Integer) 0:
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_10_10;

#line 118 "passes_aux.m"
                hlds__passes_aux__succeeded = ((((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 118 "passes_aux.m"
                if (hlds__passes_aux__succeeded)
#line 118 "passes_aux.m"
                  {
#line 118 "passes_aux.m"
                    hlds__passes_aux__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
#line 2842 "hlds.passes_aux.c"
                    {
#line 2844 "hlds.passes_aux.c"
                      return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_9_9, (MR_Word) hlds__passes_aux__V_10_10);
                    }
#line 118 "passes_aux.m"
                  }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
              break;
#line 118 "passes_aux.m"
            case (MR_Integer) 1:
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_12_12;

#line 118 "passes_aux.m"
                hlds__passes_aux__succeeded = ((((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 118 "passes_aux.m"
                if (hlds__passes_aux__succeeded)
#line 118 "passes_aux.m"
                  {
#line 118 "passes_aux.m"
                    hlds__passes_aux__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
#line 2870 "hlds.passes_aux.c"
                    {
#line 2872 "hlds.passes_aux.c"
                      return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_11_11, (MR_Word) hlds__passes_aux__V_12_12);
                    }
#line 118 "passes_aux.m"
                  }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
              break;
#line 118 "passes_aux.m"
            case (MR_Integer) 2:
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 2)));
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_15_15;
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_16_16;

#line 118 "passes_aux.m"
                hlds__passes_aux__succeeded = ((((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 118 "passes_aux.m"
                if (hlds__passes_aux__succeeded)
#line 118 "passes_aux.m"
                  {
#line 118 "passes_aux.m"
                    hlds__passes_aux__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
#line 118 "passes_aux.m"
                    hlds__passes_aux__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 2)));
#line 2904 "hlds.passes_aux.c"
                    {
#line 2906 "hlds.passes_aux.c"
                      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_13_13, (MR_Word) hlds__passes_aux__V_15_15);
                    }
#line 118 "passes_aux.m"
                    if (hlds__passes_aux__succeeded)
#line 2911 "hlds.passes_aux.c"
                      {
#line 2913 "hlds.passes_aux.c"
                        return hlds__passes_aux__succeeded = mercury__univ____Unify____univ_0_0(hlds__passes_aux__V_14_14, hlds__passes_aux__V_16_16);
                      }
#line 118 "passes_aux.m"
                  }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
              break;
#line 118 "passes_aux.m"
            case (MR_Integer) 3:
#line 118 "passes_aux.m"
              {
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 2)));
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_19_19;
#line 118 "passes_aux.m"
                MR_Word hlds__passes_aux__V_20_20;

#line 118 "passes_aux.m"
                hlds__passes_aux__succeeded = ((((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 118 "passes_aux.m"
                if (hlds__passes_aux__succeeded)
#line 118 "passes_aux.m"
                  {
#line 118 "passes_aux.m"
                    hlds__passes_aux__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
#line 118 "passes_aux.m"
                    hlds__passes_aux__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 2)));
#line 2945 "hlds.passes_aux.c"
                    {
#line 2947 "hlds.passes_aux.c"
                      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_17_17, (MR_Word) hlds__passes_aux__V_19_19);
                    }
#line 118 "passes_aux.m"
                    if (hlds__passes_aux__succeeded)
#line 2952 "hlds.passes_aux.c"
                      {
#line 2954 "hlds.passes_aux.c"
                        return hlds__passes_aux__succeeded = mercury__univ____Unify____univ_0_0(hlds__passes_aux__V_18_18, hlds__passes_aux__V_20_20);
                      }
#line 118 "passes_aux.m"
                  }
#line 118 "passes_aux.m"
              }
#line 118 "passes_aux.m"
              break;
#line 118 "passes_aux.m"
          }
#line 118 "passes_aux.m"
          break;
#line 118 "passes_aux.m"
      }
#line 118 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 118 "passes_aux.m"
  }
#line 118 "passes_aux.m"
}

#line 39 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____update_pred_task_0_0(
#line 39 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 39 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 39 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 39 "passes_aux.m"
{
#line 39 "passes_aux.m"
  {
#line 39 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 39 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastX_6 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;
#line 39 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastY_7 = (MR_Integer) hlds__passes_aux__HeadVar__3_3;

#line 39 "passes_aux.m"
    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_6 == hlds__passes_aux__CastY_7);
#line 39 "passes_aux.m"
    if (hlds__passes_aux__succeeded)
#line 3000 "hlds.passes_aux.c"
      *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "passes_aux.m"
    else
#line 39 "passes_aux.m"
      {
#line 39 "passes_aux.m"
        MR_Word hlds__passes_aux__V_4_4 = (MR_Word) hlds__passes_aux__HeadVar__2_2;
#line 39 "passes_aux.m"
        MR_Word hlds__passes_aux__V_5_5 = (MR_Word) hlds__passes_aux__HeadVar__3_3;

#line 39 "passes_aux.m"
        {
#line 39 "passes_aux.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_3[1], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_4_4)), ((MR_Box) (hlds__passes_aux__V_5_5)));
#line 39 "passes_aux.m"
          return;
        }
#line 39 "passes_aux.m"
      }
#line 39 "passes_aux.m"
  }
#line 39 "passes_aux.m"
}

#line 39 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____update_pred_task_0_0(
#line 39 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 39 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 39 "passes_aux.m"
{
#line 39 "passes_aux.m"
  {
#line 39 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 39 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastX_5 = (MR_Integer) hlds__passes_aux__HeadVar__1_1;
#line 39 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastY_6 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;

#line 39 "passes_aux.m"
    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_5 == hlds__passes_aux__CastY_6);
#line 39 "passes_aux.m"
    if (hlds__passes_aux__succeeded)
#line 39 "passes_aux.m"
      hlds__passes_aux__succeeded = MR_TRUE;
#line 39 "passes_aux.m"
    else
#line 39 "passes_aux.m"
      {
#line 39 "passes_aux.m"
        MR_Word hlds__passes_aux__V_3_3 = (MR_Word) hlds__passes_aux__HeadVar__1_1;
#line 39 "passes_aux.m"
        MR_Word hlds__passes_aux__V_4_4 = (MR_Word) hlds__passes_aux__HeadVar__2_2;

#line 3058 "hlds.passes_aux.c"
        {
#line 3060 "hlds.passes_aux.c"
          return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_3_3, (MR_Word) hlds__passes_aux__V_4_4);
        }
#line 39 "passes_aux.m"
      }
#line 39 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 39 "passes_aux.m"
  }
#line 39 "passes_aux.m"
}

#line 77 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____proc_task_0_0(
#line 77 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 77 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 77 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 77 "passes_aux.m"
{
#line 77 "passes_aux.m"
  {
#line 77 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 77 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
#line 77 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

#line 77 "passes_aux.m"
    {
#line 77 "passes_aux.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_8[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
#line 77 "passes_aux.m"
      return;
    }
#line 77 "passes_aux.m"
  }
#line 77 "passes_aux.m"
}

#line 77 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_task_0_0(
#line 77 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 77 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 77 "passes_aux.m"
{
#line 77 "passes_aux.m"
  {
#line 77 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 77 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
#line 77 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

#line 77 "passes_aux.m"
    {
#line 77 "passes_aux.m"
      return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
#line 77 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 77 "passes_aux.m"
  }
#line 77 "passes_aux.m"
}

#line 82 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____proc_ids_task_0_0(
#line 82 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 82 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 82 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 82 "passes_aux.m"
{
#line 82 "passes_aux.m"
  {
#line 82 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 82 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
#line 82 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

#line 82 "passes_aux.m"
    {
#line 82 "passes_aux.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_7[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
#line 82 "passes_aux.m"
      return;
    }
#line 82 "passes_aux.m"
  }
#line 82 "passes_aux.m"
}

#line 82 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_task_0_0(
#line 82 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 82 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 82 "passes_aux.m"
{
#line 82 "passes_aux.m"
  {
#line 82 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 82 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
#line 82 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

#line 82 "passes_aux.m"
    {
#line 82 "passes_aux.m"
      return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
#line 82 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 82 "passes_aux.m"
  }
#line 82 "passes_aux.m"
}

#line 87 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____proc_ids_pred_task_0_0(
#line 87 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 87 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 87 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 87 "passes_aux.m"
{
#line 87 "passes_aux.m"
  {
#line 87 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 87 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
#line 87 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

#line 87 "passes_aux.m"
    {
#line 87 "passes_aux.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_6[1], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
#line 87 "passes_aux.m"
      return;
    }
#line 87 "passes_aux.m"
  }
#line 87 "passes_aux.m"
}

#line 87 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_pred_task_0_0(
#line 87 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 87 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 87 "passes_aux.m"
{
#line 87 "passes_aux.m"
  {
#line 87 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 87 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
#line 87 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

#line 87 "passes_aux.m"
    {
#line 87 "passes_aux.m"
      return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
#line 87 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 87 "passes_aux.m"
  }
#line 87 "passes_aux.m"
}

#line 33 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____pred_error_task_0_0(
#line 33 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 33 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 33 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 33 "passes_aux.m"
{
#line 33 "passes_aux.m"
  {
#line 33 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 33 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
#line 33 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

#line 33 "passes_aux.m"
    {
#line 33 "passes_aux.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_3[1], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
#line 33 "passes_aux.m"
      return;
    }
#line 33 "passes_aux.m"
  }
#line 33 "passes_aux.m"
}

#line 33 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____pred_error_task_0_0(
#line 33 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 33 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 33 "passes_aux.m"
{
#line 33 "passes_aux.m"
  {
#line 33 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 33 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
#line 33 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

#line 33 "passes_aux.m"
    {
#line 33 "passes_aux.m"
      return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
#line 33 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 33 "passes_aux.m"
  }
#line 33 "passes_aux.m"
}

#line 92 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____module_task_0_0(
#line 92 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 92 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 92 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 92 "passes_aux.m"
{
#line 92 "passes_aux.m"
  {
#line 92 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 92 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
#line 92 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

#line 92 "passes_aux.m"
    {
#line 92 "passes_aux.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_6[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
#line 92 "passes_aux.m"
      return;
    }
#line 92 "passes_aux.m"
  }
#line 92 "passes_aux.m"
}

#line 92 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____module_task_0_0(
#line 92 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 92 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 92 "passes_aux.m"
{
#line 92 "passes_aux.m"
  {
#line 92 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 92 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
#line 92 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

#line 92 "passes_aux.m"
    {
#line 92 "passes_aux.m"
      return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
#line 92 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 92 "passes_aux.m"
  }
#line 92 "passes_aux.m"
}

#line 98 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____module_pred_task_0_0(
#line 98 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 98 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 98 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 98 "passes_aux.m"
{
#line 98 "passes_aux.m"
  {
#line 98 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 98 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
#line 98 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

#line 98 "passes_aux.m"
    {
#line 98 "passes_aux.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_5[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
#line 98 "passes_aux.m"
      return;
    }
#line 98 "passes_aux.m"
  }
#line 98 "passes_aux.m"
}

#line 98 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_task_0_0(
#line 98 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 98 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 98 "passes_aux.m"
{
#line 98 "passes_aux.m"
  {
#line 98 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 98 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
#line 98 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

#line 98 "passes_aux.m"
    {
#line 98 "passes_aux.m"
      return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
#line 98 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 98 "passes_aux.m"
  }
#line 98 "passes_aux.m"
}

#line 110 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____module_pred_cookie_task_0_0(
#line 110 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 110 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 110 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 110 "passes_aux.m"
{
#line 110 "passes_aux.m"
  {
#line 110 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 110 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
#line 110 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

#line 110 "passes_aux.m"
    {
#line 110 "passes_aux.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_4[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
#line 110 "passes_aux.m"
      return;
    }
#line 110 "passes_aux.m"
  }
#line 110 "passes_aux.m"
}

#line 110 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_cookie_task_0_0(
#line 110 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 110 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 110 "passes_aux.m"
{
#line 110 "passes_aux.m"
  {
#line 110 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 110 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
#line 110 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

#line 110 "passes_aux.m"
    {
#line 110 "passes_aux.m"
      return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
#line 110 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 110 "passes_aux.m"
  }
#line 110 "passes_aux.m"
}

#line 104 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____module_cookie_task_0_0(
#line 104 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 104 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 104 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 104 "passes_aux.m"
{
#line 104 "passes_aux.m"
  {
#line 104 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 104 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
#line 104 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

#line 104 "passes_aux.m"
    {
#line 104 "passes_aux.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_3[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
#line 104 "passes_aux.m"
      return;
    }
#line 104 "passes_aux.m"
  }
#line 104 "passes_aux.m"
}

#line 104 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____module_cookie_task_0_0(
#line 104 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 104 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 104 "passes_aux.m"
{
#line 104 "passes_aux.m"
  {
#line 104 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 104 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
#line 104 "passes_aux.m"
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

#line 104 "passes_aux.m"
    {
#line 104 "passes_aux.m"
      return hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
#line 104 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 104 "passes_aux.m"
  }
#line 104 "passes_aux.m"
}

#line 190 "passes_aux.m"
void MR_CALL 
hlds__passes_aux____Compare____dump_info_0_0(
#line 190 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__1_1,
#line 190 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 190 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__3_3)
#line 190 "passes_aux.m"
{
#line 190 "passes_aux.m"
  {
#line 190 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 190 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastX_13 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;
#line 190 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastY_14 = (MR_Integer) hlds__passes_aux__HeadVar__3_3;

#line 190 "passes_aux.m"
    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_13 == hlds__passes_aux__CastY_14);
#line 190 "passes_aux.m"
    if (hlds__passes_aux__succeeded)
#line 3592 "hlds.passes_aux.c"
      *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 0;
#line 190 "passes_aux.m"
    else
#line 190 "passes_aux.m"
    if ((hlds__passes_aux__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "passes_aux.m"
      if ((hlds__passes_aux__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "passes_aux.m"
        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 0;
#line 190 "passes_aux.m"
      else
#line 3604 "hlds.passes_aux.c"
        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
#line 190 "passes_aux.m"
    else
#line 190 "passes_aux.m"
      {
#line 190 "passes_aux.m"
        MR_Word hlds__passes_aux__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
#line 190 "passes_aux.m"
        MR_String hlds__passes_aux__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));

#line 190 "passes_aux.m"
        if ((hlds__passes_aux__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3617 "hlds.passes_aux.c"
          *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
#line 190 "passes_aux.m"
        else
#line 190 "passes_aux.m"
          {
#line 190 "passes_aux.m"
            MR_String hlds__passes_aux__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)));
#line 190 "passes_aux.m"
            MR_Word hlds__passes_aux__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 1)));
#line 190 "passes_aux.m"
            MR_Word hlds__passes_aux__V_12_12;

#line 190 "passes_aux.m"
            {
#line 190 "passes_aux.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__passes_aux__V_12_12, hlds__passes_aux__V_18_18, hlds__passes_aux__V_10_10);
            }
#line 3635 "hlds.passes_aux.c"
            hlds__passes_aux__succeeded = (hlds__passes_aux__V_12_12 == (MR_Integer) 0);
#line 190 "passes_aux.m"
            hlds__passes_aux__succeeded = !(hlds__passes_aux__succeeded);
#line 190 "passes_aux.m"
            if (hlds__passes_aux__succeeded)
#line 190 "passes_aux.m"
              *hlds__passes_aux__HeadVar__1_1 = hlds__passes_aux__V_12_12;
#line 190 "passes_aux.m"
            else
#line 190 "passes_aux.m"
              {
#line 190 "passes_aux.m"
                hlds__hlds_module____Compare____module_info_0_0(hlds__passes_aux__HeadVar__1_1, hlds__passes_aux__V_17_17, hlds__passes_aux__V_11_11);
#line 190 "passes_aux.m"
                return;
              }
#line 190 "passes_aux.m"
          }
#line 190 "passes_aux.m"
      }
#line 190 "passes_aux.m"
  }
#line 190 "passes_aux.m"
}

#line 190 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux____Unify____dump_info_0_0(
#line 190 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 190 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2)
#line 190 "passes_aux.m"
{
#line 190 "passes_aux.m"
  {
#line 190 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 190 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastX_9 = (MR_Integer) hlds__passes_aux__HeadVar__1_1;
#line 190 "passes_aux.m"
    MR_Integer hlds__passes_aux__CastY_10 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;

#line 190 "passes_aux.m"
    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_9 == hlds__passes_aux__CastY_10);
#line 190 "passes_aux.m"
    if (hlds__passes_aux__succeeded)
#line 190 "passes_aux.m"
      hlds__passes_aux__succeeded = MR_TRUE;
#line 190 "passes_aux.m"
    else
#line 190 "passes_aux.m"
    if ((hlds__passes_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "passes_aux.m"
      {
#line 190 "passes_aux.m"
        MR_Integer hlds__passes_aux__CastX_3 = (MR_Integer) hlds__passes_aux__HeadVar__1_1;
#line 190 "passes_aux.m"
        MR_Integer hlds__passes_aux__CastY_4 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;

#line 190 "passes_aux.m"
        hlds__passes_aux__succeeded = (hlds__passes_aux__CastY_4 == hlds__passes_aux__CastX_3);
#line 190 "passes_aux.m"
      }
#line 190 "passes_aux.m"
    else
#line 190 "passes_aux.m"
      {
#line 190 "passes_aux.m"
        MR_String hlds__passes_aux__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 190 "passes_aux.m"
        MR_Word hlds__passes_aux__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 190 "passes_aux.m"
        MR_String hlds__passes_aux__V_7_7;
#line 190 "passes_aux.m"
        MR_Word hlds__passes_aux__V_8_8;

#line 190 "passes_aux.m"
        hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 190 "passes_aux.m"
        if (hlds__passes_aux__succeeded)
#line 190 "passes_aux.m"
          {
#line 190 "passes_aux.m"
            hlds__passes_aux__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
#line 190 "passes_aux.m"
            hlds__passes_aux__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
#line 3723 "hlds.passes_aux.c"
            hlds__passes_aux__succeeded = (strcmp(hlds__passes_aux__V_5_5, hlds__passes_aux__V_7_7) == 0);
#line 190 "passes_aux.m"
            if (hlds__passes_aux__succeeded)
#line 3727 "hlds.passes_aux.c"
              {
#line 3729 "hlds.passes_aux.c"
                return hlds__passes_aux__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__passes_aux__V_6_6, hlds__passes_aux__V_8_8);
              }
#line 190 "passes_aux.m"
          }
#line 190 "passes_aux.m"
      }
#line 190 "passes_aux.m"
    return hlds__passes_aux__succeeded;
#line 190 "passes_aux.m"
  }
#line 190 "passes_aux.m"
}

#line 633 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__dump_hlds_4_p_0(
#line 633 "passes_aux.m"
  MR_String hlds__passes_aux__DumpFile_5,
#line 633 "passes_aux.m"
  MR_Word hlds__passes_aux__HLDS_6)
#line 633 "passes_aux.m"
{
#line 635 "passes_aux.m"
  {
#line 635 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 635 "passes_aux.m"
    MR_Word hlds__passes_aux__Globals_8;
#line 635 "passes_aux.m"
    MR_Word hlds__passes_aux__Verbose_9;
#line 635 "passes_aux.m"
    MR_Word hlds__passes_aux__Stats_10;
#line 635 "passes_aux.m"
    MR_Word hlds__passes_aux__Res_11;

#line 636 "passes_aux.m"
    {
#line 636 "passes_aux.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__passes_aux__HLDS_6, &hlds__passes_aux__Globals_8);
    }
#line 637 "passes_aux.m"
    {
#line 637 "passes_aux.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_8, (MR_Integer) 45, &hlds__passes_aux__Verbose_9);
    }
#line 638 "passes_aux.m"
    {
#line 638 "passes_aux.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_8, (MR_Integer) 55, &hlds__passes_aux__Stats_10);
    }
#line 639 "passes_aux.m"
    {
#line 639 "passes_aux.m"
      libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_9, (MR_String) "% Dumping out HLDS to \140");
    }
#line 640 "passes_aux.m"
    {
#line 640 "passes_aux.m"
      libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_9, hlds__passes_aux__DumpFile_5);
    }
#line 641 "passes_aux.m"
    {
#line 641 "passes_aux.m"
      libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_9, (MR_String) "\'...");
    }
#line 642 "passes_aux.m"
    {
#line 642 "passes_aux.m"
      libs__file_util__maybe_flush_output_3_p_0(hlds__passes_aux__Verbose_9);
    }
#line 643 "passes_aux.m"
    {
#line 643 "passes_aux.m"
      mercury__io__open_output_4_p_0(hlds__passes_aux__DumpFile_5, &hlds__passes_aux__Res_11);
    }
#line 652 "passes_aux.m"
    if (((MR_tag((MR_Word) hlds__passes_aux__Res_11)) == (MR_mktag((MR_Integer) 1))))
#line 653 "passes_aux.m"
      {
#line 653 "passes_aux.m"
        MR_Word hlds__passes_aux__IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__Res_11, (MR_Integer) 0)));
#line 653 "passes_aux.m"
        MR_String hlds__passes_aux__Msg_16;
#line 653 "passes_aux.m"
        MR_String hlds__passes_aux__V_31_31;
#line 653 "passes_aux.m"
        MR_String hlds__passes_aux__V_32_32;
#line 653 "passes_aux.m"
        MR_String hlds__passes_aux__V_34_34;

#line 654 "passes_aux.m"
        {
#line 654 "passes_aux.m"
          libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_9, (MR_String) "\n");
        }
#line 656 "passes_aux.m"
        {
#line 656 "passes_aux.m"
          hlds__passes_aux__V_34_34 = mercury__io__error_message_1_f_0(hlds__passes_aux__IOError_15);
        }
#line 655 "passes_aux.m"
        {
#line 655 "passes_aux.m"
          hlds__passes_aux__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", hlds__passes_aux__V_34_34);
        }
#line 655 "passes_aux.m"
        {
#line 655 "passes_aux.m"
          hlds__passes_aux__V_31_31 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__DumpFile_5, hlds__passes_aux__V_32_32);
        }
#line 655 "passes_aux.m"
        {
#line 655 "passes_aux.m"
          hlds__passes_aux__Msg_16 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", hlds__passes_aux__V_31_31);
        }
#line 657 "passes_aux.m"
        {
#line 657 "passes_aux.m"
          libs__file_util__report_error_3_p_0(hlds__passes_aux__Msg_16);
#line 657 "passes_aux.m"
          return;
        }
#line 653 "passes_aux.m"
      }
#line 652 "passes_aux.m"
    else
#line 645 "passes_aux.m"
      {
#line 645 "passes_aux.m"
        MR_Word hlds__passes_aux__FileStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Res_11, (MR_Integer) 0)));
#line 645 "passes_aux.m"
        MR_Word hlds__passes_aux__OutputStream_13;
#line 648 "passes_aux.m"
        MR_Word hlds__passes_aux__V_14_14;

#line 646 "passes_aux.m"
        {
#line 646 "passes_aux.m"
          mercury__io__set_output_stream_4_p_0(hlds__passes_aux__FileStream_12, &hlds__passes_aux__OutputStream_13);
        }
#line 647 "passes_aux.m"
        {
#line 647 "passes_aux.m"
          hlds__hlds_out__hlds_out_module__write_hlds_4_p_0((MR_Integer) 0, hlds__passes_aux__HLDS_6);
        }
#line 648 "passes_aux.m"
        {
#line 648 "passes_aux.m"
          mercury__io__set_output_stream_4_p_0(hlds__passes_aux__OutputStream_13, &hlds__passes_aux__V_14_14);
        }
#line 649 "passes_aux.m"
        {
#line 649 "passes_aux.m"
          mercury__io__close_output_3_p_0(hlds__passes_aux__FileStream_12);
        }
#line 650 "passes_aux.m"
        {
#line 650 "passes_aux.m"
          libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_9, (MR_String) " done.\n");
        }
#line 651 "passes_aux.m"
        {
#line 651 "passes_aux.m"
          libs__file_util__maybe_report_stats_3_p_0(hlds__passes_aux__Stats_10);
#line 651 "passes_aux.m"
          return;
        }
#line 645 "passes_aux.m"
      }
#line 635 "passes_aux.m"
  }
#line 633 "passes_aux.m"
}

#line 369 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__seq_process_nonimported_procs_6_p_0(
#line 369 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 369 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 369 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0_3,
#line 369 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Task_4,
#line 369 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5,
#line 369 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_6)
#line 369 "passes_aux.m"
{
#line 373 "passes_aux.m"
  while (MR_TRUE)
#line 373 "passes_aux.m"
    {
#line 373 "passes_aux.m"
      /* tailcall optimized into a loop */
#line 373 "passes_aux.m"
      {
#line 373 "passes_aux.m"
        MR_bool hlds__passes_aux__succeeded;

#line 373 "passes_aux.m"
        if ((hlds__passes_aux__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "passes_aux.m"
          {
#line 373 "passes_aux.m"
            *hlds__passes_aux__STATE_VARIABLE_ModuleInfo_6 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5;
#line 373 "passes_aux.m"
            *hlds__passes_aux__STATE_VARIABLE_Task_4 = hlds__passes_aux__STATE_VARIABLE_Task_0_3;
#line 373 "passes_aux.m"
          }
#line 373 "passes_aux.m"
        else
#line 375 "passes_aux.m"
          {
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__TypeCtorInfo_52_52;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__TypeCtorInfo_53_53;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__TypeCtorInfo_54_54;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__TypeCtorInfo_55_55;
#line 375 "passes_aux.m"
            MR_Integer hlds__passes_aux__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Preds0_19;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Pred0_20;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Procs0_21;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Proc0_22;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__PredProcId_23;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Proc_25;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Preds8_28;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Pred8_29;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Procs8_30;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Procs_31;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Pred_32;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__Preds_33;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__STATE_VARIABLE_Task_41_41;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43;
#line 375 "passes_aux.m"
            MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_44_44;
#line 377 "passes_aux.m"
            MR_Box hlds__passes_aux__conv0_Pred0_20;
#line 379 "passes_aux.m"
            MR_Box hlds__passes_aux__conv1_Proc0_22;
#line 402 "passes_aux.m"
            MR_Box hlds__passes_aux__conv16_Pred8_29;

#line 376 "passes_aux.m"
            {
#line 376 "passes_aux.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5, &hlds__passes_aux__Preds0_19);
            }
#line 4000 "hlds.passes_aux.c"
            hlds__passes_aux__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4002 "hlds.passes_aux.c"
            hlds__passes_aux__TypeCtorInfo_53_53 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 377 "passes_aux.m"
            {
#line 377 "passes_aux.m"
              mercury__map__lookup_3_p_0(hlds__passes_aux__TypeCtorInfo_52_52, hlds__passes_aux__TypeCtorInfo_53_53, hlds__passes_aux__Preds0_19, ((MR_Box) (hlds__passes_aux__HeadVar__1_1)), &hlds__passes_aux__conv0_Pred0_20);
            }
#line 377 "passes_aux.m"
            hlds__passes_aux__Pred0_20 = ((MR_Word) hlds__passes_aux__conv0_Pred0_20);
#line 378 "passes_aux.m"
            {
#line 378 "passes_aux.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__passes_aux__Pred0_20, &hlds__passes_aux__Procs0_21);
            }
#line 4016 "hlds.passes_aux.c"
            hlds__passes_aux__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4018 "hlds.passes_aux.c"
            hlds__passes_aux__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 379 "passes_aux.m"
            {
#line 379 "passes_aux.m"
              mercury__map__lookup_3_p_0(hlds__passes_aux__TypeCtorInfo_54_54, hlds__passes_aux__TypeCtorInfo_55_55, hlds__passes_aux__Procs0_21, ((MR_Box) (hlds__passes_aux__ProcId_15)), &hlds__passes_aux__conv1_Proc0_22);
            }
#line 379 "passes_aux.m"
            hlds__passes_aux__Proc0_22 = ((MR_Word) hlds__passes_aux__conv1_Proc0_22);
#line 381 "passes_aux.m"
            {
#line 381 "passes_aux.m"
              hlds__passes_aux__PredProcId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "passes_aux.m"
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredProcId_23, 0) = ((MR_Box) (hlds__passes_aux__HeadVar__1_1));
#line 381 "passes_aux.m"
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredProcId_23, 1) = ((MR_Box) (hlds__passes_aux__ProcId_15));
#line 381 "passes_aux.m"
            }
#line 385 "passes_aux.m"
#line 385 "passes_aux.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 0)))) {
#line 385 "passes_aux.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 385 "passes_aux.m"
              case (MR_Integer) 0:
#line 383 "passes_aux.m"
                {
#line 383 "passes_aux.m"
                  MR_Word hlds__passes_aux__Closure_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 1)));
#line 384 "passes_aux.m"
                  void MR_CALL (* hlds__passes_aux__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_24, (MR_Integer) 1)));
#line 384 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv4_Proc_25;
#line 384 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_43_43;

#line 384 "passes_aux.m"
                  {
#line 384 "passes_aux.m"
                    hlds__passes_aux__func_2(((MR_Box) hlds__passes_aux__Closure_24), ((MR_Box) (hlds__passes_aux__PredProcId_23)), ((MR_Box) (hlds__passes_aux__Proc0_22)), &hlds__passes_aux__conv4_Proc_25, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_43_43);
                  }
#line 384 "passes_aux.m"
                  hlds__passes_aux__Proc_25 = ((MR_Word) hlds__passes_aux__conv4_Proc_25);
#line 384 "passes_aux.m"
                  hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43 = ((MR_Word) hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_43_43);
#line 383 "passes_aux.m"
                  hlds__passes_aux__STATE_VARIABLE_Task_41_41 = hlds__passes_aux__STATE_VARIABLE_Task_0_3;
#line 383 "passes_aux.m"
                }
#line 385 "passes_aux.m"
                break;
#line 385 "passes_aux.m"
              case (MR_Integer) 1:
#line 386 "passes_aux.m"
                {
#line 386 "passes_aux.m"
                  MR_Word hlds__passes_aux__Closure_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 1)));
#line 387 "passes_aux.m"
                  void MR_CALL (* hlds__passes_aux__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_47, (MR_Integer) 1)));
#line 387 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv11_Proc_25;
#line 387 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv10_STATE_VARIABLE_ModuleInfo_43_43;

#line 387 "passes_aux.m"
                  {
#line 387 "passes_aux.m"
                    hlds__passes_aux__func_9(((MR_Box) hlds__passes_aux__Closure_47), ((MR_Box) (hlds__passes_aux__PredProcId_23)), ((MR_Box) (hlds__passes_aux__Pred0_20)), ((MR_Box) (hlds__passes_aux__Proc0_22)), &hlds__passes_aux__conv11_Proc_25, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__passes_aux__conv10_STATE_VARIABLE_ModuleInfo_43_43);
                  }
#line 387 "passes_aux.m"
                  hlds__passes_aux__Proc_25 = ((MR_Word) hlds__passes_aux__conv11_Proc_25);
#line 387 "passes_aux.m"
                  hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43 = ((MR_Word) hlds__passes_aux__conv10_STATE_VARIABLE_ModuleInfo_43_43);
#line 386 "passes_aux.m"
                  hlds__passes_aux__STATE_VARIABLE_Task_41_41 = hlds__passes_aux__STATE_VARIABLE_Task_0_3;
#line 386 "passes_aux.m"
                }
#line 385 "passes_aux.m"
                break;
#line 385 "passes_aux.m"
              case (MR_Integer) 2:
#line 389 "passes_aux.m"
                {
#line 389 "passes_aux.m"
                  MR_Word hlds__passes_aux__Cookie0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 2)));
#line 389 "passes_aux.m"
                  MR_Word hlds__passes_aux__Cookie_27;
#line 389 "passes_aux.m"
                  MR_Word hlds__passes_aux__Closure_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 1)));
#line 390 "passes_aux.m"
                  void MR_CALL (* hlds__passes_aux__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_48, (MR_Integer) 1)));
#line 390 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv8_Proc_25;
#line 390 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv7_STATE_VARIABLE_ModuleInfo_43_43;
#line 390 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv6_Cookie_27;

#line 390 "passes_aux.m"
                  {
#line 390 "passes_aux.m"
                    hlds__passes_aux__func_5(((MR_Box) hlds__passes_aux__Closure_48), ((MR_Box) (hlds__passes_aux__PredProcId_23)), ((MR_Box) (hlds__passes_aux__Proc0_22)), &hlds__passes_aux__conv8_Proc_25, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__passes_aux__conv7_STATE_VARIABLE_ModuleInfo_43_43, ((MR_Box) (hlds__passes_aux__Cookie0_26)), &hlds__passes_aux__conv6_Cookie_27);
                  }
#line 390 "passes_aux.m"
                  hlds__passes_aux__Proc_25 = ((MR_Word) hlds__passes_aux__conv8_Proc_25);
#line 390 "passes_aux.m"
                  hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43 = ((MR_Word) hlds__passes_aux__conv7_STATE_VARIABLE_ModuleInfo_43_43);
#line 390 "passes_aux.m"
                  hlds__passes_aux__Cookie_27 = ((MR_Word) hlds__passes_aux__conv6_Cookie_27);
#line 391 "passes_aux.m"
                  {
#line 391 "passes_aux.m"
                    hlds__passes_aux__STATE_VARIABLE_Task_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 391 "passes_aux.m"
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 391 "passes_aux.m"
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 1) = ((MR_Box) (hlds__passes_aux__Closure_48));
#line 391 "passes_aux.m"
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 2) = ((MR_Box) (hlds__passes_aux__Cookie_27));
#line 391 "passes_aux.m"
                  }
#line 389 "passes_aux.m"
                }
#line 385 "passes_aux.m"
                break;
#line 385 "passes_aux.m"
              case (MR_Integer) 3:
#line 393 "passes_aux.m"
                {
#line 393 "passes_aux.m"
                  MR_Word hlds__passes_aux__Closure_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 1)));
#line 393 "passes_aux.m"
                  MR_Word hlds__passes_aux__Cookie0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 2)));
#line 393 "passes_aux.m"
                  MR_Word hlds__passes_aux__Cookie_51;
#line 394 "passes_aux.m"
                  void MR_CALL (* hlds__passes_aux__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_49, (MR_Integer) 1)));
#line 394 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv15_Proc_25;
#line 394 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv14_STATE_VARIABLE_ModuleInfo_43_43;
#line 394 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv13_Cookie_51;

#line 394 "passes_aux.m"
                  {
#line 394 "passes_aux.m"
                    hlds__passes_aux__func_12(((MR_Box) hlds__passes_aux__Closure_49), ((MR_Box) (hlds__passes_aux__PredProcId_23)), ((MR_Box) (hlds__passes_aux__Pred0_20)), ((MR_Box) (hlds__passes_aux__Proc0_22)), &hlds__passes_aux__conv15_Proc_25, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__passes_aux__conv14_STATE_VARIABLE_ModuleInfo_43_43, ((MR_Box) (hlds__passes_aux__Cookie0_50)), &hlds__passes_aux__conv13_Cookie_51);
                  }
#line 394 "passes_aux.m"
                  hlds__passes_aux__Proc_25 = ((MR_Word) hlds__passes_aux__conv15_Proc_25);
#line 394 "passes_aux.m"
                  hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43 = ((MR_Word) hlds__passes_aux__conv14_STATE_VARIABLE_ModuleInfo_43_43);
#line 394 "passes_aux.m"
                  hlds__passes_aux__Cookie_51 = ((MR_Word) hlds__passes_aux__conv13_Cookie_51);
#line 395 "passes_aux.m"
                  {
#line 395 "passes_aux.m"
                    hlds__passes_aux__STATE_VARIABLE_Task_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 395 "passes_aux.m"
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 395 "passes_aux.m"
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 1) = ((MR_Box) (hlds__passes_aux__Closure_49));
#line 395 "passes_aux.m"
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 2) = ((MR_Box) (hlds__passes_aux__Cookie_51));
#line 395 "passes_aux.m"
                  }
#line 393 "passes_aux.m"
                }
#line 385 "passes_aux.m"
                break;
#line 385 "passes_aux.m"
            }
#line 401 "passes_aux.m"
            {
#line 401 "passes_aux.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43, &hlds__passes_aux__Preds8_28);
            }
#line 402 "passes_aux.m"
            {
#line 402 "passes_aux.m"
              mercury__map__lookup_3_p_0(hlds__passes_aux__TypeCtorInfo_52_52, hlds__passes_aux__TypeCtorInfo_53_53, hlds__passes_aux__Preds8_28, ((MR_Box) (hlds__passes_aux__HeadVar__1_1)), &hlds__passes_aux__conv16_Pred8_29);
            }
#line 402 "passes_aux.m"
            hlds__passes_aux__Pred8_29 = ((MR_Word) hlds__passes_aux__conv16_Pred8_29);
#line 403 "passes_aux.m"
            {
#line 403 "passes_aux.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__passes_aux__Pred8_29, &hlds__passes_aux__Procs8_30);
            }
#line 405 "passes_aux.m"
            {
#line 405 "passes_aux.m"
              mercury__map__det_update_4_p_0(hlds__passes_aux__TypeCtorInfo_54_54, hlds__passes_aux__TypeCtorInfo_55_55, ((MR_Box) (hlds__passes_aux__ProcId_15)), ((MR_Box) (hlds__passes_aux__Proc_25)), hlds__passes_aux__Procs8_30, &hlds__passes_aux__Procs_31);
            }
#line 406 "passes_aux.m"
            {
#line 406 "passes_aux.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__passes_aux__Procs_31, hlds__passes_aux__Pred8_29, &hlds__passes_aux__Pred_32);
            }
#line 407 "passes_aux.m"
            {
#line 407 "passes_aux.m"
              mercury__map__det_update_4_p_0(hlds__passes_aux__TypeCtorInfo_52_52, hlds__passes_aux__TypeCtorInfo_53_53, ((MR_Box) (hlds__passes_aux__HeadVar__1_1)), ((MR_Box) (hlds__passes_aux__Pred_32)), hlds__passes_aux__Preds8_28, &hlds__passes_aux__Preds_33);
            }
#line 408 "passes_aux.m"
            {
#line 408 "passes_aux.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(hlds__passes_aux__Preds_33, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43, &hlds__passes_aux__STATE_VARIABLE_ModuleInfo_44_44);
            }
#line 410 "passes_aux.m"
            /* direct tailcall eliminated */
#line 410 "passes_aux.m"
            {
#line 410 "passes_aux.m"
              MR_Word hlds__passes_aux__HeadVar__2__tmp_copy_2 = hlds__passes_aux__ProcIds_16;
#line 410 "passes_aux.m"
              MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0__tmp_copy_3 = hlds__passes_aux__STATE_VARIABLE_Task_41_41;
#line 410 "passes_aux.m"
              MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_44_44;

#line 410 "passes_aux.m"
              hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 410 "passes_aux.m"
              hlds__passes_aux__STATE_VARIABLE_Task_0_3 = hlds__passes_aux__STATE_VARIABLE_Task_0__tmp_copy_3;
#line 410 "passes_aux.m"
              hlds__passes_aux__HeadVar__2_2 = hlds__passes_aux__HeadVar__2__tmp_copy_2;
#line 410 "passes_aux.m"
            }
#line 410 "passes_aux.m"
            continue;
#line 375 "passes_aux.m"
          }
#line 373 "passes_aux.m"
      }
#line 373 "passes_aux.m"
      break;
#line 373 "passes_aux.m"
    }
#line 369 "passes_aux.m"
}

#line 356 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__seq_process_nonimported_procs_in_preds_5_p_0(
#line 356 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 356 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0_2,
#line 356 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Task_3,
#line 356 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4,
#line 356 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_5)
#line 356 "passes_aux.m"
{
#line 360 "passes_aux.m"
  while (MR_TRUE)
#line 360 "passes_aux.m"
    {
#line 360 "passes_aux.m"
      /* tailcall optimized into a loop */
#line 360 "passes_aux.m"
      {
#line 360 "passes_aux.m"
        MR_bool hlds__passes_aux__succeeded;

#line 360 "passes_aux.m"
        if ((hlds__passes_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 360 "passes_aux.m"
          {
#line 360 "passes_aux.m"
            *hlds__passes_aux__STATE_VARIABLE_ModuleInfo_5 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4;
#line 360 "passes_aux.m"
            *hlds__passes_aux__STATE_VARIABLE_Task_3 = hlds__passes_aux__STATE_VARIABLE_Task_0_2;
#line 360 "passes_aux.m"
          }
#line 360 "passes_aux.m"
        else
#line 362 "passes_aux.m"
          {
#line 362 "passes_aux.m"
            MR_Word hlds__passes_aux__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 362 "passes_aux.m"
            MR_Word hlds__passes_aux__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 362 "passes_aux.m"
            MR_Word hlds__passes_aux__PredTable_16;
#line 362 "passes_aux.m"
            MR_Word hlds__passes_aux__PredInfo_17;
#line 362 "passes_aux.m"
            MR_Word hlds__passes_aux__ProcIds_18;
#line 362 "passes_aux.m"
            MR_Word hlds__passes_aux__STATE_VARIABLE_Task_23_23;
#line 362 "passes_aux.m"
            MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_24_24;
#line 364 "passes_aux.m"
            MR_Box hlds__passes_aux__conv0_PredInfo_17;

#line 363 "passes_aux.m"
            {
#line 363 "passes_aux.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4, &hlds__passes_aux__PredTable_16);
            }
#line 364 "passes_aux.m"
            {
#line 364 "passes_aux.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__passes_aux__PredTable_16, ((MR_Box) (hlds__passes_aux__PredId_12)), &hlds__passes_aux__conv0_PredInfo_17);
            }
#line 364 "passes_aux.m"
            hlds__passes_aux__PredInfo_17 = ((MR_Word) hlds__passes_aux__conv0_PredInfo_17);
#line 365 "passes_aux.m"
            {
#line 365 "passes_aux.m"
              hlds__passes_aux__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(hlds__passes_aux__PredInfo_17);
            }
#line 366 "passes_aux.m"
            {
#line 366 "passes_aux.m"
              hlds__passes_aux__seq_process_nonimported_procs_6_p_0(hlds__passes_aux__PredId_12, hlds__passes_aux__ProcIds_18, hlds__passes_aux__STATE_VARIABLE_Task_0_2, &hlds__passes_aux__STATE_VARIABLE_Task_23_23, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4, &hlds__passes_aux__STATE_VARIABLE_ModuleInfo_24_24);
            }
#line 367 "passes_aux.m"
            /* direct tailcall eliminated */
#line 367 "passes_aux.m"
            {
#line 367 "passes_aux.m"
              MR_Word hlds__passes_aux__HeadVar__1__tmp_copy_1 = hlds__passes_aux__PredIds_13;
#line 367 "passes_aux.m"
              MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0__tmp_copy_2 = hlds__passes_aux__STATE_VARIABLE_Task_23_23;
#line 367 "passes_aux.m"
              MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_24_24;

#line 367 "passes_aux.m"
              hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4;
#line 367 "passes_aux.m"
              hlds__passes_aux__STATE_VARIABLE_Task_0_2 = hlds__passes_aux__STATE_VARIABLE_Task_0__tmp_copy_2;
#line 367 "passes_aux.m"
              hlds__passes_aux__HeadVar__1_1 = hlds__passes_aux__HeadVar__1__tmp_copy_1;
#line 367 "passes_aux.m"
            }
#line 367 "passes_aux.m"
            continue;
#line 362 "passes_aux.m"
          }
#line 360 "passes_aux.m"
      }
#line 360 "passes_aux.m"
      break;
#line 360 "passes_aux.m"
    }
#line 356 "passes_aux.m"
}

#line 326 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__par_process_nonimported_procs_6_p_0(
#line 326 "passes_aux.m"
  MR_Word hlds__passes_aux__ModuleInfo_1,
#line 326 "passes_aux.m"
  MR_Word hlds__passes_aux__Task_2,
#line 326 "passes_aux.m"
  MR_Word hlds__passes_aux__PredId_3,
#line 326 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__4_4,
#line 326 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5,
#line 326 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_PredInfo_6)
#line 326 "passes_aux.m"
{
#line 330 "passes_aux.m"
  while (MR_TRUE)
#line 330 "passes_aux.m"
    {
#line 330 "passes_aux.m"
      /* tailcall optimized into a loop */
#line 330 "passes_aux.m"
      {
#line 330 "passes_aux.m"
        MR_bool hlds__passes_aux__succeeded;

#line 330 "passes_aux.m"
        if ((hlds__passes_aux__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "passes_aux.m"
          *hlds__passes_aux__STATE_VARIABLE_PredInfo_6 = hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5;
#line 330 "passes_aux.m"
        else
#line 332 "passes_aux.m"
          {
#line 332 "passes_aux.m"
            MR_Word hlds__passes_aux__TypeCtorInfo_31_31;
#line 332 "passes_aux.m"
            MR_Word hlds__passes_aux__TypeCtorInfo_32_32;
#line 332 "passes_aux.m"
            MR_Integer hlds__passes_aux__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__4_4, (MR_Integer) 0)));
#line 332 "passes_aux.m"
            MR_Word hlds__passes_aux__ProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__4_4, (MR_Integer) 1)));
#line 332 "passes_aux.m"
            MR_Word hlds__passes_aux__ProcMap0_19;
#line 332 "passes_aux.m"
            MR_Word hlds__passes_aux__Proc0_20;
#line 332 "passes_aux.m"
            MR_Word hlds__passes_aux__PredProcId_21;
#line 332 "passes_aux.m"
            MR_Word hlds__passes_aux__Proc_23;
#line 332 "passes_aux.m"
            MR_Word hlds__passes_aux__ProcMap_24;
#line 332 "passes_aux.m"
            MR_Word hlds__passes_aux__STATE_VARIABLE_PredInfo_27_27;
#line 334 "passes_aux.m"
            MR_Box hlds__passes_aux__conv0_Proc0_20;

#line 333 "passes_aux.m"
            {
#line 333 "passes_aux.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5, &hlds__passes_aux__ProcMap0_19);
            }
#line 4436 "hlds.passes_aux.c"
            hlds__passes_aux__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4438 "hlds.passes_aux.c"
            hlds__passes_aux__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 334 "passes_aux.m"
            {
#line 334 "passes_aux.m"
              mercury__map__lookup_3_p_0(hlds__passes_aux__TypeCtorInfo_31_31, hlds__passes_aux__TypeCtorInfo_32_32, hlds__passes_aux__ProcMap0_19, ((MR_Box) (hlds__passes_aux__ProcId_16)), &hlds__passes_aux__conv0_Proc0_20);
            }
#line 334 "passes_aux.m"
            hlds__passes_aux__Proc0_20 = ((MR_Word) hlds__passes_aux__conv0_Proc0_20);
#line 336 "passes_aux.m"
            {
#line 336 "passes_aux.m"
              hlds__passes_aux__PredProcId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "passes_aux.m"
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredProcId_21, 0) = ((MR_Box) (hlds__passes_aux__PredId_3));
#line 336 "passes_aux.m"
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredProcId_21, 1) = ((MR_Box) (hlds__passes_aux__ProcId_16));
#line 336 "passes_aux.m"
            }
#line 340 "passes_aux.m"
#line 340 "passes_aux.m"
            switch (MR_tag((MR_Word) hlds__passes_aux__Task_2)) {
#line 340 "passes_aux.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 340 "passes_aux.m"
              case (MR_Integer) 0:
#line 338 "passes_aux.m"
                {
#line 338 "passes_aux.m"
                  MR_Word hlds__passes_aux__Closure_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Task_2, (MR_Integer) 0)));
#line 339 "passes_aux.m"
                  void MR_CALL (* hlds__passes_aux__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_22, (MR_Integer) 1)));
#line 339 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv2_Proc_23;

#line 339 "passes_aux.m"
                  {
#line 339 "passes_aux.m"
                    hlds__passes_aux__func_1(((MR_Box) hlds__passes_aux__Closure_22), ((MR_Box) (hlds__passes_aux__ModuleInfo_1)), ((MR_Box) (hlds__passes_aux__Proc0_20)), &hlds__passes_aux__conv2_Proc_23);
                  }
#line 339 "passes_aux.m"
                  hlds__passes_aux__Proc_23 = ((MR_Word) hlds__passes_aux__conv2_Proc_23);
#line 338 "passes_aux.m"
                }
#line 340 "passes_aux.m"
                break;
#line 340 "passes_aux.m"
              case (MR_Integer) 1:
#line 341 "passes_aux.m"
                {
#line 341 "passes_aux.m"
                  MR_Word hlds__passes_aux__Closure_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__Task_2, (MR_Integer) 0)));
#line 342 "passes_aux.m"
                  void MR_CALL (* hlds__passes_aux__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_29, (MR_Integer) 1)));
#line 342 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv4_Proc_23;

#line 342 "passes_aux.m"
                  {
#line 342 "passes_aux.m"
                    hlds__passes_aux__func_3(((MR_Box) hlds__passes_aux__Closure_29), ((MR_Box) (hlds__passes_aux__ModuleInfo_1)), ((MR_Box) (hlds__passes_aux__PredProcId_21)), ((MR_Box) (hlds__passes_aux__Proc0_20)), &hlds__passes_aux__conv4_Proc_23);
                  }
#line 342 "passes_aux.m"
                  hlds__passes_aux__Proc_23 = ((MR_Word) hlds__passes_aux__conv4_Proc_23);
#line 341 "passes_aux.m"
                }
#line 340 "passes_aux.m"
                break;
#line 340 "passes_aux.m"
              case (MR_Integer) 2:
#line 344 "passes_aux.m"
                {
#line 344 "passes_aux.m"
                  MR_Word hlds__passes_aux__Closure_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__passes_aux__Task_2, (MR_Integer) 0)));
#line 345 "passes_aux.m"
                  void MR_CALL (* hlds__passes_aux__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_30, (MR_Integer) 1)));
#line 345 "passes_aux.m"
                  MR_Box hlds__passes_aux__conv6_Proc_23;

#line 345 "passes_aux.m"
                  {
#line 345 "passes_aux.m"
                    hlds__passes_aux__func_5(((MR_Box) hlds__passes_aux__Closure_30), ((MR_Box) (hlds__passes_aux__ModuleInfo_1)), ((MR_Box) (hlds__passes_aux__PredProcId_21)), ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5)), ((MR_Box) (hlds__passes_aux__Proc0_20)), &hlds__passes_aux__conv6_Proc_23);
                  }
#line 345 "passes_aux.m"
                  hlds__passes_aux__Proc_23 = ((MR_Word) hlds__passes_aux__conv6_Proc_23);
#line 344 "passes_aux.m"
                }
#line 340 "passes_aux.m"
                break;
#line 340 "passes_aux.m"
            }
#line 348 "passes_aux.m"
            {
#line 348 "passes_aux.m"
              mercury__map__det_update_4_p_0(hlds__passes_aux__TypeCtorInfo_31_31, hlds__passes_aux__TypeCtorInfo_32_32, ((MR_Box) (hlds__passes_aux__ProcId_16)), ((MR_Box) (hlds__passes_aux__Proc_23)), hlds__passes_aux__ProcMap0_19, &hlds__passes_aux__ProcMap_24);
            }
#line 349 "passes_aux.m"
            {
#line 349 "passes_aux.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__passes_aux__ProcMap_24, hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5, &hlds__passes_aux__STATE_VARIABLE_PredInfo_27_27);
            }
#line 351 "passes_aux.m"
            /* direct tailcall eliminated */
#line 351 "passes_aux.m"
            {
#line 351 "passes_aux.m"
              MR_Word hlds__passes_aux__HeadVar__4__tmp_copy_4 = hlds__passes_aux__ProcIds_17;
#line 351 "passes_aux.m"
              MR_Word hlds__passes_aux__STATE_VARIABLE_PredInfo_0__tmp_copy_5 = hlds__passes_aux__STATE_VARIABLE_PredInfo_27_27;

#line 351 "passes_aux.m"
              hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5 = hlds__passes_aux__STATE_VARIABLE_PredInfo_0__tmp_copy_5;
#line 351 "passes_aux.m"
              hlds__passes_aux__HeadVar__4_4 = hlds__passes_aux__HeadVar__4__tmp_copy_4;
#line 351 "passes_aux.m"
            }
#line 351 "passes_aux.m"
            continue;
#line 332 "passes_aux.m"
          }
#line 330 "passes_aux.m"
      }
#line 330 "passes_aux.m"
      break;
#line 330 "passes_aux.m"
    }
#line 326 "passes_aux.m"
}

#line 300 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__par_process_nonimported_procs_in_preds_5_p_0(
#line 300 "passes_aux.m"
  MR_Word hlds__passes_aux__ModuleInfo_1,
#line 300 "passes_aux.m"
  MR_Word hlds__passes_aux__Task_2,
#line 300 "passes_aux.m"
  MR_Word hlds__passes_aux__ValidPredIdSet_3,
#line 300 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__4_4,
#line 300 "passes_aux.m"
  MR_Word * hlds__passes_aux__HeadVar__5_5)
#line 300 "passes_aux.m"
{
#line 305 "passes_aux.m"
  {
#line 305 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;

#line 305 "passes_aux.m"
    if ((hlds__passes_aux__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "passes_aux.m"
      *hlds__passes_aux__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 305 "passes_aux.m"
    else
#line 307 "passes_aux.m"
      {
#line 307 "passes_aux.m"
        MR_Word hlds__passes_aux__PredIdInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__4_4, (MR_Integer) 0)));
#line 307 "passes_aux.m"
        MR_Word hlds__passes_aux__PredIdsInfos0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__4_4, (MR_Integer) 1)));
#line 307 "passes_aux.m"
        MR_Word hlds__passes_aux__PredIdInfo_14;
#line 307 "passes_aux.m"
        MR_Word hlds__passes_aux__PredIdsInfos_15;
#line 307 "passes_aux.m"
        MR_Word hlds__passes_aux__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__PredIdInfo0_12, (MR_Integer) 0)));
#line 307 "passes_aux.m"
        MR_Word hlds__passes_aux__PredInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__PredIdInfo0_12, (MR_Integer) 1)));
#line 320 "passes_aux.m"
        MR_Word hlds__passes_aux__ProcIds_18;
#line 312 "passes_aux.m"
        MR_Integer hlds__passes_aux__V_19_19;
#line 312 "passes_aux.m"
        MR_Word hlds__passes_aux__V_20_20;

#line 310 "passes_aux.m"
        {
#line 310 "passes_aux.m"
          hlds__passes_aux__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__passes_aux__ValidPredIdSet_3, ((MR_Box) (hlds__passes_aux__PredId_16)));
        }
#line 310 "passes_aux.m"
        if (hlds__passes_aux__succeeded)
#line 310 "passes_aux.m"
          {
#line 311 "passes_aux.m"
            {
#line 311 "passes_aux.m"
              hlds__passes_aux__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(hlds__passes_aux__PredInfo0_17);
            }
#line 312 "passes_aux.m"
            hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__ProcIds_18)) == (MR_mktag((MR_Integer) 1)));
#line 312 "passes_aux.m"
            if (hlds__passes_aux__succeeded)
#line 312 "passes_aux.m"
              {
#line 312 "passes_aux.m"
                hlds__passes_aux__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__passes_aux__ProcIds_18, (MR_Integer) 0)));
#line 312 "passes_aux.m"
                hlds__passes_aux__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__ProcIds_18, (MR_Integer) 1)));
#line 312 "passes_aux.m"
              }
#line 310 "passes_aux.m"
          }
#line 320 "passes_aux.m"
        if (hlds__passes_aux__succeeded)
#line 316 "passes_aux.m"
          {
#line 316 "passes_aux.m"
            MR_Word hlds__passes_aux__PredInfo_21;

#line 315 "passes_aux.m"
            {
#line 315 "passes_aux.m"
              hlds__passes_aux__par_process_nonimported_procs_6_p_0(hlds__passes_aux__ModuleInfo_1, hlds__passes_aux__Task_2, hlds__passes_aux__PredId_16, hlds__passes_aux__ProcIds_18, hlds__passes_aux__PredInfo0_17, &hlds__passes_aux__PredInfo_21);
            }
#line 317 "passes_aux.m"
            {
#line 317 "passes_aux.m"
              hlds__passes_aux__PredIdInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "passes_aux.m"
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredIdInfo_14, 0) = ((MR_Box) (hlds__passes_aux__PredId_16));
#line 317 "passes_aux.m"
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredIdInfo_14, 1) = ((MR_Box) (hlds__passes_aux__PredInfo_21));
#line 317 "passes_aux.m"
            }
#line 318 "passes_aux.m"
            {
#line 318 "passes_aux.m"
              hlds__passes_aux__par_process_nonimported_procs_in_preds_5_p_0(hlds__passes_aux__ModuleInfo_1, hlds__passes_aux__Task_2, hlds__passes_aux__ValidPredIdSet_3, hlds__passes_aux__PredIdsInfos0_13, &hlds__passes_aux__PredIdsInfos_15);
            }
#line 316 "passes_aux.m"
          }
#line 320 "passes_aux.m"
        else
#line 321 "passes_aux.m"
          {
#line 321 "passes_aux.m"
            hlds__passes_aux__PredIdInfo_14 = hlds__passes_aux__PredIdInfo0_12;
#line 322 "passes_aux.m"
            {
#line 322 "passes_aux.m"
              hlds__passes_aux__par_process_nonimported_procs_in_preds_5_p_0(hlds__passes_aux__ModuleInfo_1, hlds__passes_aux__Task_2, hlds__passes_aux__ValidPredIdSet_3, hlds__passes_aux__PredIdsInfos0_13, &hlds__passes_aux__PredIdsInfos_15);
            }
#line 321 "passes_aux.m"
          }
#line 307 "passes_aux.m"
        {
#line 307 "passes_aux.m"
          MR_Word base;
#line 307 "passes_aux.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "passes_aux.m"
          *hlds__passes_aux__HeadVar__5_5 = base;
#line 307 "passes_aux.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__passes_aux__PredIdInfo_14));
#line 307 "passes_aux.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__passes_aux__PredIdsInfos_15));
#line 307 "passes_aux.m"
        }
#line 307 "passes_aux.m"
      }
#line 305 "passes_aux.m"
  }
#line 300 "passes_aux.m"
}

#line 236 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__process_nonimported_pred_6_p_0(
#line 236 "passes_aux.m"
  MR_Word hlds__passes_aux__Task_7,
#line 236 "passes_aux.m"
  MR_Word hlds__passes_aux__PredId_8,
#line 236 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_14,
#line 236 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_15,
#line 236 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_Specs_0_16,
#line 236 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Specs_17)
#line 236 "passes_aux.m"
{
#line 240 "passes_aux.m"
  {
#line 240 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 240 "passes_aux.m"
    MR_Word hlds__passes_aux__PredInfo0_11;

#line 241 "passes_aux.m"
    {
#line 241 "passes_aux.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_14, hlds__passes_aux__PredId_8, &hlds__passes_aux__PredInfo0_11);
    }
#line 242 "passes_aux.m"
    {
#line 242 "passes_aux.m"
      hlds__passes_aux__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__passes_aux__PredInfo0_11);
    }
#line 244 "passes_aux.m"
    if (hlds__passes_aux__succeeded)
#line 243 "passes_aux.m"
      {
#line 243 "passes_aux.m"
        *hlds__passes_aux__STATE_VARIABLE_Specs_17 = hlds__passes_aux__STATE_VARIABLE_Specs_0_16;
#line 243 "passes_aux.m"
        *hlds__passes_aux__STATE_VARIABLE_ModuleInfo_15 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_14;
#line 243 "passes_aux.m"
      }
#line 244 "passes_aux.m"
    else
#line 248 "passes_aux.m"
      {
#line 248 "passes_aux.m"
        MR_Word hlds__passes_aux__Closure_12 = (MR_Word) hlds__passes_aux__Task_7;
#line 248 "passes_aux.m"
        MR_Word hlds__passes_aux__PredInfo_13;
#line 248 "passes_aux.m"
        MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_18_18;
#line 247 "passes_aux.m"
        void MR_CALL (* hlds__passes_aux__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_12, (MR_Integer) 1)));
#line 247 "passes_aux.m"
        MR_Box hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_18_18;
#line 247 "passes_aux.m"
        MR_Box hlds__passes_aux__conv2_PredInfo_13;
#line 247 "passes_aux.m"
        MR_Box hlds__passes_aux__conv1_STATE_VARIABLE_Specs_17;

#line 247 "passes_aux.m"
        {
#line 247 "passes_aux.m"
          hlds__passes_aux__func_0(((MR_Box) hlds__passes_aux__Closure_12), ((MR_Box) (hlds__passes_aux__PredId_8)), ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_14)), &hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_18_18, ((MR_Box) (hlds__passes_aux__PredInfo0_11)), &hlds__passes_aux__conv2_PredInfo_13, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_Specs_0_16)), &hlds__passes_aux__conv1_STATE_VARIABLE_Specs_17);
        }
#line 247 "passes_aux.m"
        hlds__passes_aux__STATE_VARIABLE_ModuleInfo_18_18 = ((MR_Word) hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_18_18);
#line 247 "passes_aux.m"
        hlds__passes_aux__PredInfo_13 = ((MR_Word) hlds__passes_aux__conv2_PredInfo_13);
#line 247 "passes_aux.m"
        *hlds__passes_aux__STATE_VARIABLE_Specs_17 = ((MR_Word) hlds__passes_aux__conv1_STATE_VARIABLE_Specs_17);
#line 249 "passes_aux.m"
        {
#line 249 "passes_aux.m"
          hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__passes_aux__PredId_8, hlds__passes_aux__PredInfo_13, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_18_18, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_15);
#line 249 "passes_aux.m"
          return;
        }
#line 248 "passes_aux.m"
      }
#line 240 "passes_aux.m"
  }
#line 236 "passes_aux.m"
}

#line 199 "passes_aux.m"
void MR_CALL 
hlds__passes_aux__maybe_dump_hlds_7_p_0(
#line 199 "passes_aux.m"
  MR_Word hlds__passes_aux__HLDS_8,
#line 199 "passes_aux.m"
  MR_Integer hlds__passes_aux__StageNum_9,
#line 199 "passes_aux.m"
  MR_String hlds__passes_aux__StageName_10,
#line 199 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32,
#line 199 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_DumpInfo_33)
#line 199 "passes_aux.m"
{
#line 555 "passes_aux.m"
  {
#line 555 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 555 "passes_aux.m"
    MR_Word hlds__passes_aux__Globals_13;
#line 555 "passes_aux.m"
    MR_Word hlds__passes_aux__Verbose_14;
#line 555 "passes_aux.m"
    MR_Word hlds__passes_aux__DumpHLDSStages_15;
#line 555 "passes_aux.m"
    MR_Word hlds__passes_aux__DumpTraceStages_16;
#line 555 "passes_aux.m"
    MR_String hlds__passes_aux__UserFileSuffix_17;
#line 555 "passes_aux.m"
    MR_String hlds__passes_aux__StageNumStr_18;

#line 556 "passes_aux.m"
    {
#line 556 "passes_aux.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__passes_aux__HLDS_8, &hlds__passes_aux__Globals_13);
    }
#line 557 "passes_aux.m"
    {
#line 557 "passes_aux.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_13, (MR_Integer) 45, &hlds__passes_aux__Verbose_14);
    }
#line 558 "passes_aux.m"
    {
#line 558 "passes_aux.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__passes_aux__Globals_13, (MR_Integer) 146, &hlds__passes_aux__DumpHLDSStages_15);
    }
#line 559 "passes_aux.m"
    {
#line 559 "passes_aux.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__passes_aux__Globals_13, (MR_Integer) 145, &hlds__passes_aux__DumpTraceStages_16);
    }
#line 561 "passes_aux.m"
    {
#line 561 "passes_aux.m"
      libs__globals__lookup_string_option_3_p_0(hlds__passes_aux__Globals_13, (MR_Integer) 153, &hlds__passes_aux__UserFileSuffix_17);
    }
#line 563 "passes_aux.m"
    {
#line 563 "passes_aux.m"
      hlds__passes_aux__StageNumStr_18 = hlds__passes_aux__stage_num_str_1_f_0(hlds__passes_aux__StageNum_9);
    }
#line 564 "passes_aux.m"
    {
#line 564 "passes_aux.m"
      hlds__passes_aux__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(hlds__passes_aux__StageNum_9, hlds__passes_aux__StageNumStr_18, hlds__passes_aux__StageName_10, hlds__passes_aux__DumpHLDSStages_15);
    }
#line 610 "passes_aux.m"
    if (hlds__passes_aux__succeeded)
#line 565 "passes_aux.m"
      {
#line 565 "passes_aux.m"
        MR_String hlds__passes_aux__BaseFileName_19;
#line 565 "passes_aux.m"
        MR_String hlds__passes_aux__DumpFileName_20;
#line 565 "passes_aux.m"
        MR_String hlds__passes_aux__V_40_40;
#line 565 "passes_aux.m"
        MR_String hlds__passes_aux__V_42_42;
#line 565 "passes_aux.m"
        MR_String hlds__passes_aux__V_43_43;
#line 565 "passes_aux.m"
        MR_String hlds__passes_aux__V_45_45;
#line 605 "passes_aux.m"
        MR_String hlds__passes_aux__PrevDumpFileName_21;
#line 569 "passes_aux.m"
        MR_Word hlds__passes_aux__PrevHLDS_22;

#line 565 "passes_aux.m"
        {
#line 565 "passes_aux.m"
          hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_p_0(hlds__passes_aux__HLDS_8, &hlds__passes_aux__BaseFileName_19);
        }
#line 567 "passes_aux.m"
        {
#line 567 "passes_aux.m"
          hlds__passes_aux__V_45_45 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__StageName_10, hlds__passes_aux__UserFileSuffix_17);
        }
#line 566 "passes_aux.m"
        {
#line 566 "passes_aux.m"
          hlds__passes_aux__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "-", hlds__passes_aux__V_45_45);
        }
#line 566 "passes_aux.m"
        {
#line 566 "passes_aux.m"
          hlds__passes_aux__V_42_42 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__StageNumStr_18, hlds__passes_aux__V_43_43);
        }
#line 566 "passes_aux.m"
        {
#line 566 "passes_aux.m"
          hlds__passes_aux__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__passes_aux__V_42_42);
        }
#line 566 "passes_aux.m"
        {
#line 566 "passes_aux.m"
          hlds__passes_aux__DumpFileName_20 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__BaseFileName_19, hlds__passes_aux__V_40_40);
        }
#line 569 "passes_aux.m"
        hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32)) == (MR_mktag((MR_Integer) 1)));
#line 569 "passes_aux.m"
        if (hlds__passes_aux__succeeded)
#line 569 "passes_aux.m"
          {
#line 569 "passes_aux.m"
            hlds__passes_aux__PrevDumpFileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32, (MR_Integer) 0)));
#line 569 "passes_aux.m"
            hlds__passes_aux__PrevHLDS_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32, (MR_Integer) 1)));
#line 570 "passes_aux.m"
            {
#line 570 "passes_aux.m"
              hlds__passes_aux__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__passes_aux__HLDS_8, hlds__passes_aux__PrevHLDS_22);
            }
#line 569 "passes_aux.m"
          }
#line 605 "passes_aux.m"
        if (hlds__passes_aux__succeeded)
#line 572 "passes_aux.m"
          {
#line 572 "passes_aux.m"
            MR_Word hlds__passes_aux__DumpSameHLDS_23;

#line 572 "passes_aux.m"
            {
#line 572 "passes_aux.m"
              libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_13, (MR_Integer) 154, &hlds__passes_aux__DumpSameHLDS_23);
            }
#line 587 "passes_aux.m"
#line 587 "passes_aux.m"
            switch (hlds__passes_aux__DumpSameHLDS_23) {
#line 587 "passes_aux.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 587 "passes_aux.m"
              case (MR_Integer) 0:
#line 574 "passes_aux.m"
                {
#line 586 "passes_aux.m"
                  MR_Word hlds__passes_aux___Result_24;

#line 578 "passes_aux.m"
                  {
#line 578 "passes_aux.m"
                    libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "% HLDS dump \140");
                  }
#line 579 "passes_aux.m"
                  {
#line 579 "passes_aux.m"
                    libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, hlds__passes_aux__DumpFileName_20);
                  }
#line 580 "passes_aux.m"
                  {
#line 580 "passes_aux.m"
                    libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "\' would be identical ");
                  }
#line 581 "passes_aux.m"
                  {
#line 581 "passes_aux.m"
                    libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "to previous dump.\n");
                  }
#line 586 "passes_aux.m"
                  {
#line 586 "passes_aux.m"
                    mercury__io__remove_file_4_p_0(hlds__passes_aux__DumpFileName_20, &hlds__passes_aux___Result_24);
                  }
#line 574 "passes_aux.m"
                  *hlds__passes_aux__STATE_VARIABLE_DumpInfo_33 = hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32;
#line 574 "passes_aux.m"
                }
#line 587 "passes_aux.m"
                break;
#line 587 "passes_aux.m"
              case (MR_Integer) 1:
#line 588 "passes_aux.m"
                {
#line 588 "passes_aux.m"
                  MR_Word hlds__passes_aux__Res_26;

#line 590 "passes_aux.m"
                  {
#line 590 "passes_aux.m"
                    mercury__io__open_output_4_p_0(hlds__passes_aux__DumpFileName_20, &hlds__passes_aux__Res_26);
                  }
#line 596 "passes_aux.m"
                  if (((MR_tag((MR_Word) hlds__passes_aux__Res_26)) == (MR_mktag((MR_Integer) 1))))
#line 597 "passes_aux.m"
                    {
#line 597 "passes_aux.m"
                      MR_Word hlds__passes_aux__IOError_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__Res_26, (MR_Integer) 0)));
#line 597 "passes_aux.m"
                      MR_String hlds__passes_aux__Msg_29;
#line 597 "passes_aux.m"
                      MR_String hlds__passes_aux__V_51_51;
#line 597 "passes_aux.m"
                      MR_String hlds__passes_aux__V_52_52;
#line 597 "passes_aux.m"
                      MR_String hlds__passes_aux__V_54_54;

#line 598 "passes_aux.m"
                      {
#line 598 "passes_aux.m"
                        libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "\n");
                      }
#line 600 "passes_aux.m"
                      {
#line 600 "passes_aux.m"
                        hlds__passes_aux__V_54_54 = mercury__io__error_message_1_f_0(hlds__passes_aux__IOError_28);
                      }
#line 600 "passes_aux.m"
                      {
#line 600 "passes_aux.m"
                        hlds__passes_aux__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", hlds__passes_aux__V_54_54);
                      }
#line 599 "passes_aux.m"
                      {
#line 599 "passes_aux.m"
                        hlds__passes_aux__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__DumpFileName_20, hlds__passes_aux__V_52_52);
                      }
#line 599 "passes_aux.m"
                      {
#line 599 "passes_aux.m"
                        hlds__passes_aux__Msg_29 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", hlds__passes_aux__V_51_51);
                      }
#line 601 "passes_aux.m"
                      {
#line 601 "passes_aux.m"
                        libs__file_util__report_error_3_p_0(hlds__passes_aux__Msg_29);
                      }
#line 597 "passes_aux.m"
                    }
#line 596 "passes_aux.m"
                  else
#line 592 "passes_aux.m"
                    {
#line 592 "passes_aux.m"
                      MR_Word hlds__passes_aux__FileStream_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Res_26, (MR_Integer) 0)));
#line 592 "passes_aux.m"
                      MR_String hlds__passes_aux__V_56_56;
#line 592 "passes_aux.m"
                      MR_String hlds__passes_aux__V_59_59;
#line 592 "passes_aux.m"
                      MR_String hlds__passes_aux__V_61_61;

#line 594 "passes_aux.m"
                      {
#line 594 "passes_aux.m"
                        hlds__passes_aux__V_61_61 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__PrevDumpFileName_21, (MR_String) ".\n");
                      }
#line 594 "passes_aux.m"
                      {
#line 594 "passes_aux.m"
                        hlds__passes_aux__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "to the stage in ", hlds__passes_aux__V_61_61);
                      }
#line 593 "passes_aux.m"
                      {
#line 593 "passes_aux.m"
                        hlds__passes_aux__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "This stage is identical ", hlds__passes_aux__V_59_59);
                      }
#line 593 "passes_aux.m"
                      {
#line 593 "passes_aux.m"
                        mercury__io__write_string_4_p_0(hlds__passes_aux__FileStream_27, hlds__passes_aux__V_56_56);
                      }
#line 595 "passes_aux.m"
                      {
#line 595 "passes_aux.m"
                        mercury__io__close_output_3_p_0(hlds__passes_aux__FileStream_27);
                      }
#line 592 "passes_aux.m"
                    }
#line 603 "passes_aux.m"
                  {
#line 603 "passes_aux.m"
                    MR_Word base;
#line 603 "passes_aux.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "passes_aux.m"
                    *hlds__passes_aux__STATE_VARIABLE_DumpInfo_33 = base;
#line 603 "passes_aux.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__passes_aux__PrevDumpFileName_21));
#line 603 "passes_aux.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__passes_aux__HLDS_8));
#line 603 "passes_aux.m"
                  }
#line 588 "passes_aux.m"
                }
#line 587 "passes_aux.m"
                break;
#line 587 "passes_aux.m"
            }
#line 572 "passes_aux.m"
          }
#line 605 "passes_aux.m"
        else
#line 606 "passes_aux.m"
          {
#line 606 "passes_aux.m"
            {
#line 606 "passes_aux.m"
              hlds__passes_aux__dump_hlds_4_p_0(hlds__passes_aux__DumpFileName_20, hlds__passes_aux__HLDS_8);
            }
#line 608 "passes_aux.m"
            {
#line 608 "passes_aux.m"
              MR_Word base;
#line 608 "passes_aux.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "passes_aux.m"
              *hlds__passes_aux__STATE_VARIABLE_DumpInfo_33 = base;
#line 608 "passes_aux.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__passes_aux__DumpFileName_20));
#line 608 "passes_aux.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__passes_aux__HLDS_8));
#line 608 "passes_aux.m"
            }
#line 606 "passes_aux.m"
          }
#line 565 "passes_aux.m"
      }
#line 610 "passes_aux.m"
    else
#line 629 "passes_aux.m"
      {
#line 610 "passes_aux.m"
        {
#line 610 "passes_aux.m"
          hlds__passes_aux__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(hlds__passes_aux__StageNum_9, hlds__passes_aux__StageNumStr_18, hlds__passes_aux__StageName_10, hlds__passes_aux__DumpTraceStages_16);
        }
#line 629 "passes_aux.m"
        if (hlds__passes_aux__succeeded)
#line 611 "passes_aux.m"
          {
#line 611 "passes_aux.m"
            MR_Word hlds__passes_aux__MaybeTraceCountsError_30;
#line 611 "passes_aux.m"
            MR_String hlds__passes_aux__V_75_75;
#line 611 "passes_aux.m"
            MR_String hlds__passes_aux__V_77_77;
#line 611 "passes_aux.m"
            MR_String hlds__passes_aux__V_79_79;
#line 611 "passes_aux.m"
            MR_String hlds__passes_aux__V_80_80;
#line 611 "passes_aux.m"
            MR_String hlds__passes_aux__V_82_82;
#line 611 "passes_aux.m"
            MR_String hlds__passes_aux__BaseFileName_96;
#line 611 "passes_aux.m"
            MR_String hlds__passes_aux__DumpFileName_97;

#line 611 "passes_aux.m"
            {
#line 611 "passes_aux.m"
              hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_p_0(hlds__passes_aux__HLDS_8, &hlds__passes_aux__BaseFileName_96);
            }
#line 612 "passes_aux.m"
            {
#line 612 "passes_aux.m"
              hlds__passes_aux__V_75_75 = mercury__string__det_remove_suffix_2_f_0(hlds__passes_aux__BaseFileName_96, (MR_String) ".hlds_dump");
            }
#line 613 "passes_aux.m"
            {
#line 613 "passes_aux.m"
              hlds__passes_aux__V_82_82 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__StageName_10, hlds__passes_aux__UserFileSuffix_17);
            }
#line 613 "passes_aux.m"
            {
#line 613 "passes_aux.m"
              hlds__passes_aux__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "-", hlds__passes_aux__V_82_82);
            }
#line 613 "passes_aux.m"
            {
#line 613 "passes_aux.m"
              hlds__passes_aux__V_79_79 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__StageNumStr_18, hlds__passes_aux__V_80_80);
            }
#line 613 "passes_aux.m"
            {
#line 613 "passes_aux.m"
              hlds__passes_aux__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) ".trace_counts.", hlds__passes_aux__V_79_79);
            }
#line 612 "passes_aux.m"
            {
#line 612 "passes_aux.m"
              hlds__passes_aux__DumpFileName_97 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__V_75_75, hlds__passes_aux__V_77_77);
            }
#line 615 "passes_aux.m"
            {
#line 615 "passes_aux.m"
              mercury__benchmarking__write_out_trace_counts_4_p_0(hlds__passes_aux__DumpFileName_97, &hlds__passes_aux__MaybeTraceCountsError_30);
            }
#line 622 "passes_aux.m"
            if ((hlds__passes_aux__MaybeTraceCountsError_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 617 "passes_aux.m"
              {
#line 618 "passes_aux.m"
                {
#line 618 "passes_aux.m"
                  libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "% Dumped trace counts to \140");
                }
#line 619 "passes_aux.m"
                {
#line 619 "passes_aux.m"
                  libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, hlds__passes_aux__DumpFileName_97);
                }
#line 620 "passes_aux.m"
                {
#line 620 "passes_aux.m"
                  libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "\'\n");
                }
#line 621 "passes_aux.m"
                {
#line 621 "passes_aux.m"
                  libs__file_util__maybe_flush_output_3_p_0(hlds__passes_aux__Verbose_14);
                }
#line 617 "passes_aux.m"
              }
#line 622 "passes_aux.m"
            else
#line 623 "passes_aux.m"
              {
#line 623 "passes_aux.m"
                MR_String hlds__passes_aux__TraceCountsError_31 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__MaybeTraceCountsError_30, (MR_Integer) 0)));

#line 624 "passes_aux.m"
                {
#line 624 "passes_aux.m"
                  mercury__io__write_string_3_p_0((MR_String) "% ");
                }
#line 625 "passes_aux.m"
                {
#line 625 "passes_aux.m"
                  mercury__io__write_string_3_p_0(hlds__passes_aux__TraceCountsError_31);
                }
#line 626 "passes_aux.m"
                {
#line 626 "passes_aux.m"
                  mercury__io__nl_2_p_0();
                }
#line 627 "passes_aux.m"
                {
#line 627 "passes_aux.m"
                  mercury__io__flush_output_2_p_0();
                }
#line 623 "passes_aux.m"
              }
#line 611 "passes_aux.m"
          }
#line 629 "passes_aux.m"
        else
#line 629 "passes_aux.m"
          {
#line 629 "passes_aux.m"
          }
#line 629 "passes_aux.m"
        *hlds__passes_aux__STATE_VARIABLE_DumpInfo_33 = hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32;
#line 629 "passes_aux.m"
      }
#line 555 "passes_aux.m"
  }
#line 199 "passes_aux.m"
}

#line 533 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_1(
#line 533 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg)
#line 533 "passes_aux.m"
{
#line 533 "passes_aux.m"
  {
#line 533 "passes_aux.m"
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

#line 533 "passes_aux.m"
    MR_builtin_longjmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_0, 1);
#line 533 "passes_aux.m"
  }
#line 533 "passes_aux.m"
}

#line 533 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_3(
#line 533 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg)
#line 533 "passes_aux.m"
{
#line 533 "passes_aux.m"
  {
#line 533 "passes_aux.m"
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

#line 533 "passes_aux.m"
    (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15 = ((MR_String) (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__conv0_DumpStage_15);
#line 533 "passes_aux.m"
    {
#line 533 "passes_aux.m"
      hlds__passes_aux__should_dump_stage_4_p_0_2(hlds__passes_aux__env_ptr);
#line 533 "passes_aux.m"
      return;
    }
#line 533 "passes_aux.m"
  }
#line 533 "passes_aux.m"
}

#line 547 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_4(
#line 547 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg)
#line 547 "passes_aux.m"
{
#line 547 "passes_aux.m"
  {
#line 547 "passes_aux.m"
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

#line 547 "passes_aux.m"
    MR_builtin_longjmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_1, 1);
#line 547 "passes_aux.m"
  }
#line 547 "passes_aux.m"
}

#line 547 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_5(
#line 547 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg)
#line 547 "passes_aux.m"
{
#line 547 "passes_aux.m"
  {
#line 547 "passes_aux.m"
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

#line 547 "passes_aux.m"
    (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_12_12, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_17_17) == 0);
#line 547 "passes_aux.m"
    if ((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
#line 547 "passes_aux.m"
      {
#line 548 "passes_aux.m"
        {
#line 548 "passes_aux.m"
          (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__From_10, &(hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__FromInt_11);
        }
#line 547 "passes_aux.m"
        if ((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
#line 547 "passes_aux.m"
          {
#line 549 "passes_aux.m"
            (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = ((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNum_5 >= (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__FromInt_11);
#line 549 "passes_aux.m"
            if ((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
#line 549 "passes_aux.m"
              {
#line 549 "passes_aux.m"
                hlds__passes_aux__should_dump_stage_4_p_0_4(hlds__passes_aux__env_ptr);
#line 549 "passes_aux.m"
                return;
              }
#line 547 "passes_aux.m"
          }
#line 547 "passes_aux.m"
      }
#line 547 "passes_aux.m"
  }
#line 547 "passes_aux.m"
}

#line 547 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_6(
#line 547 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg)
#line 547 "passes_aux.m"
{
#line 547 "passes_aux.m"
  {
#line 547 "passes_aux.m"
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

#line 547 "passes_aux.m"
    if (MR_builtin_setjmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_1) == 0)
#line 547 "passes_aux.m"
      {
#line 547 "passes_aux.m"
        (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_12_12 = (MR_String) "+";
#line 547 "passes_aux.m"
        {
#line 547 "passes_aux.m"
          mercury__string__append_3_p_3(&(hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__From_10, &(hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_17_17, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, hlds__passes_aux__should_dump_stage_4_p_0_5, hlds__passes_aux__env_ptr);
        }
#line 547 "passes_aux.m"
        (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = MR_FALSE;
#line 547 "passes_aux.m"
      }
#line 547 "passes_aux.m"
    else
#line 547 "passes_aux.m"
      (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = MR_TRUE;
#line 547 "passes_aux.m"
  }
#line 547 "passes_aux.m"
}

#line 533 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_2(
#line 533 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg)
#line 533 "passes_aux.m"
{
#line 533 "passes_aux.m"
  {
#line 533 "passes_aux.m"
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

#line 535 "passes_aux.m"
    (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageName_7, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15) == 0);
#line 536 "passes_aux.m"
    if (!((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
#line 536 "passes_aux.m"
      {
#line 537 "passes_aux.m"
        (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (MR_String) "all") == 0);
#line 536 "passes_aux.m"
        if (!((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
#line 536 "passes_aux.m"
          {
#line 540 "passes_aux.m"
            (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6) == 0);
#line 536 "passes_aux.m"
            if (!((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
#line 536 "passes_aux.m"
              {
#line 542 "passes_aux.m"
                {
#line 542 "passes_aux.m"
                  {
#line 542 "passes_aux.m"
                    (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = mercury__string__append_3_p_0((MR_String) "0", (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6);
                  }
#line 542 "passes_aux.m"
                }
#line 536 "passes_aux.m"
                if (!((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
#line 536 "passes_aux.m"
                  {
#line 544 "passes_aux.m"
                    {
#line 544 "passes_aux.m"
                      {
#line 544 "passes_aux.m"
                        (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = mercury__string__append_3_p_0((MR_String) "00", (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6);
                      }
#line 544 "passes_aux.m"
                    }
#line 536 "passes_aux.m"
                    if (!((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
#line 547 "passes_aux.m"
                      {
#line 547 "passes_aux.m"
                        {
#line 547 "passes_aux.m"
                          hlds__passes_aux__should_dump_stage_4_p_0_6(hlds__passes_aux__env_ptr);
                        }
#line 547 "passes_aux.m"
                      }
#line 536 "passes_aux.m"
                  }
#line 536 "passes_aux.m"
              }
#line 536 "passes_aux.m"
          }
#line 536 "passes_aux.m"
      }
#line 536 "passes_aux.m"
    if ((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
#line 536 "passes_aux.m"
      {
#line 536 "passes_aux.m"
        hlds__passes_aux__should_dump_stage_4_p_0_1(hlds__passes_aux__env_ptr);
#line 536 "passes_aux.m"
        return;
      }
#line 533 "passes_aux.m"
  }
#line 533 "passes_aux.m"
}

#line 533 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_7(
#line 533 "passes_aux.m"
  void * hlds__passes_aux__env_ptr_arg)
#line 533 "passes_aux.m"
{
#line 533 "passes_aux.m"
  {
#line 533 "passes_aux.m"
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

#line 533 "passes_aux.m"
    if (MR_builtin_setjmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_0) == 0)
#line 533 "passes_aux.m"
      {
#line 533 "passes_aux.m"
        {
#line 533 "passes_aux.m"
          {
#line 533 "passes_aux.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__conv0_DumpStage_15, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStages_8, hlds__passes_aux__should_dump_stage_4_p_0_3, hlds__passes_aux__env_ptr);
          }
#line 533 "passes_aux.m"
        }
#line 533 "passes_aux.m"
        (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = MR_FALSE;
#line 533 "passes_aux.m"
      }
#line 533 "passes_aux.m"
    else
#line 533 "passes_aux.m"
      (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = MR_TRUE;
#line 533 "passes_aux.m"
  }
#line 533 "passes_aux.m"
}

#line 187 "passes_aux.m"
MR_bool MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0(
#line 187 "passes_aux.m"
  MR_Integer hlds__passes_aux__StageNum_5,
#line 187 "passes_aux.m"
  MR_String hlds__passes_aux__StageNumStr_6,
#line 187 "passes_aux.m"
  MR_String hlds__passes_aux__StageName_7,
#line 187 "passes_aux.m"
  MR_Word hlds__passes_aux__DumpStages_8)
#line 187 "passes_aux.m"
{
#line 187 "passes_aux.m"
  {
#line 187 "passes_aux.m"
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s hlds__passes_aux__env;

#line 187 "passes_aux.m"
    (hlds__passes_aux__env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNum_5 = hlds__passes_aux__StageNum_5;
#line 187 "passes_aux.m"
    (hlds__passes_aux__env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6 = hlds__passes_aux__StageNumStr_6;
#line 187 "passes_aux.m"
    (hlds__passes_aux__env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageName_7 = hlds__passes_aux__StageName_7;
#line 187 "passes_aux.m"
    (hlds__passes_aux__env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStages_8 = hlds__passes_aux__DumpStages_8;
#line 533 "passes_aux.m"
    {
#line 533 "passes_aux.m"
      hlds__passes_aux__should_dump_stage_4_p_0_7(&hlds__passes_aux__env);
    }
#line 533 "passes_aux.m"
    return (hlds__passes_aux__env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded;
#line 187 "passes_aux.m"
  }
#line 187 "passes_aux.m"
}

#line 180 "passes_aux.m"
MR_String MR_CALL 
hlds__passes_aux__stage_num_str_1_f_0(
#line 180 "passes_aux.m"
  MR_Integer hlds__passes_aux__StageNum_3)
#line 180 "passes_aux.m"
{
#line 553 "passes_aux.m"
  {
#line 553 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 553 "passes_aux.m"
    MR_String hlds__passes_aux__HeadVar__2_2;

#line 553 "passes_aux.m"
    {
#line 553 "passes_aux.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) &hlds__passes_aux_scalar_common_9[1], (MR_Integer) 3, hlds__passes_aux__StageNum_3, &hlds__passes_aux__HeadVar__2_2);
    }
#line 553 "passes_aux.m"
    return hlds__passes_aux__HeadVar__2_2;
#line 553 "passes_aux.m"
  }
#line 180 "passes_aux.m"
}

#line 175 "passes_aux.m"
void MR_CALL 
hlds__passes_aux__report_pred_name_mode_5_p_0(
#line 175 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__1_1,
#line 175 "passes_aux.m"
  MR_String hlds__passes_aux__HeadVar__2_2,
#line 175 "passes_aux.m"
  MR_Word hlds__passes_aux__ArgModes_3)
#line 175 "passes_aux.m"
{
#line 499 "passes_aux.m"
  {
#line 499 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;

#line 499 "passes_aux.m"
#line 499 "passes_aux.m"
    switch (hlds__passes_aux__HeadVar__1_1) {
#line 499 "passes_aux.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 499 "passes_aux.m"
      case (MR_Integer) 1:
#line 513 "passes_aux.m"
        {
#line 513 "passes_aux.m"
          MR_Word hlds__passes_aux__InstVarSet_25;
#line 513 "passes_aux.m"
          MR_Word hlds__passes_aux__StrippedArgModes_26;
#line 513 "passes_aux.m"
          MR_Word hlds__passes_aux__FuncArgModes_27;
#line 513 "passes_aux.m"
          MR_Word hlds__passes_aux__FuncRetMode_28;
#line 516 "passes_aux.m"
          MR_Box hlds__passes_aux__conv0_FuncRetMode_28;

#line 514 "passes_aux.m"
          {
#line 514 "passes_aux.m"
            mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__passes_aux__InstVarSet_25);
          }
#line 515 "passes_aux.m"
          {
#line 515 "passes_aux.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(hlds__passes_aux__ArgModes_3, &hlds__passes_aux__StrippedArgModes_26);
          }
#line 516 "passes_aux.m"
          {
#line 516 "passes_aux.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__passes_aux__StrippedArgModes_26, &hlds__passes_aux__FuncArgModes_27, &hlds__passes_aux__conv0_FuncRetMode_28);
          }
#line 516 "passes_aux.m"
          hlds__passes_aux__FuncRetMode_28 = ((MR_Word) hlds__passes_aux__conv0_FuncRetMode_28);
#line 517 "passes_aux.m"
          {
#line 517 "passes_aux.m"
            mercury__io__write_string_3_p_0(hlds__passes_aux__HeadVar__2_2);
          }
#line 523 "passes_aux.m"
          if ((hlds__passes_aux__FuncArgModes_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 524 "passes_aux.m"
            {
#line 524 "passes_aux.m"
            }
#line 523 "passes_aux.m"
          else
#line 519 "passes_aux.m"
            {
#line 520 "passes_aux.m"
              {
#line 520 "passes_aux.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 521 "passes_aux.m"
              {
#line 521 "passes_aux.m"
                parse_tree__mercury_to_mercury__mercury_output_mode_list_5_p_0((MR_Integer) 1, hlds__passes_aux__InstVarSet_25, hlds__passes_aux__FuncArgModes_27);
              }
#line 522 "passes_aux.m"
              {
#line 522 "passes_aux.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 519 "passes_aux.m"
            }
#line 526 "passes_aux.m"
          {
#line 526 "passes_aux.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 527 "passes_aux.m"
          {
#line 527 "passes_aux.m"
            parse_tree__mercury_to_mercury__mercury_output_mode_5_p_0((MR_Integer) 1, hlds__passes_aux__InstVarSet_25, hlds__passes_aux__FuncRetMode_28);
#line 527 "passes_aux.m"
            return;
          }
#line 513 "passes_aux.m"
        }
#line 499 "passes_aux.m"
        break;
#line 499 "passes_aux.m"
      case (MR_Integer) 0:
#line 499 "passes_aux.m"
        {
#line 500 "passes_aux.m"
          {
#line 500 "passes_aux.m"
            mercury__io__write_string_3_p_0(hlds__passes_aux__HeadVar__2_2);
          }
#line 509 "passes_aux.m"
          if ((hlds__passes_aux__ArgModes_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "passes_aux.m"
            {
#line 510 "passes_aux.m"
            }
#line 509 "passes_aux.m"
          else
#line 502 "passes_aux.m"
            {
#line 502 "passes_aux.m"
              MR_Word hlds__passes_aux__InstVarSet_11;
#line 502 "passes_aux.m"
              MR_Word hlds__passes_aux__StrippedArgModes_12;

#line 503 "passes_aux.m"
              {
#line 503 "passes_aux.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__passes_aux__InstVarSet_11);
              }
#line 504 "passes_aux.m"
              {
#line 504 "passes_aux.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 505 "passes_aux.m"
              {
#line 505 "passes_aux.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(hlds__passes_aux__ArgModes_3, &hlds__passes_aux__StrippedArgModes_12);
              }
#line 506 "passes_aux.m"
              {
#line 506 "passes_aux.m"
                parse_tree__mercury_to_mercury__mercury_output_mode_list_5_p_0((MR_Integer) 1, hlds__passes_aux__InstVarSet_11, hlds__passes_aux__StrippedArgModes_12);
              }
#line 508 "passes_aux.m"
              {
#line 508 "passes_aux.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
#line 508 "passes_aux.m"
                return;
              }
#line 502 "passes_aux.m"
            }
#line 499 "passes_aux.m"
        }
#line 499 "passes_aux.m"
        break;
#line 499 "passes_aux.m"
    }
#line 499 "passes_aux.m"
  }
#line 175 "passes_aux.m"
}

#line 165 "passes_aux.m"
void MR_CALL 
hlds__passes_aux__report_pred_proc_id_7_p_0(
#line 165 "passes_aux.m"
  MR_Word hlds__passes_aux__ModuleInfo_8,
#line 165 "passes_aux.m"
  MR_Word hlds__passes_aux__PredId_9,
#line 165 "passes_aux.m"
  MR_Integer hlds__passes_aux__ProcId_10,
#line 165 "passes_aux.m"
  MR_Word hlds__passes_aux__MaybeContext_11,
#line 165 "passes_aux.m"
  MR_Word * hlds__passes_aux__Context_12)
#line 165 "passes_aux.m"
{
#line 470 "passes_aux.m"
  {
#line 470 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 470 "passes_aux.m"
    MR_Word hlds__passes_aux__TypeCtorInfo_36_36;
#line 470 "passes_aux.m"
    MR_Word hlds__passes_aux__PredInfo_14;
#line 470 "passes_aux.m"
    MR_Word hlds__passes_aux__ProcInfo_15;
#line 470 "passes_aux.m"
    MR_String hlds__passes_aux__PredName_16;
#line 470 "passes_aux.m"
    MR_Integer hlds__passes_aux__Arity_17;
#line 470 "passes_aux.m"
    MR_Word hlds__passes_aux__PredOrFunc_18;
#line 470 "passes_aux.m"
    MR_Word hlds__passes_aux__ArgModes0_19;
#line 470 "passes_aux.m"
    MR_Integer hlds__passes_aux__NumArgModes_20;
#line 470 "passes_aux.m"
    MR_Integer hlds__passes_aux__NumToDrop_21;
#line 470 "passes_aux.m"
    MR_Word hlds__passes_aux__ArgModes_23;
#line 470 "passes_aux.m"
    MR_Word hlds__passes_aux__OutContext_24;
#line 485 "passes_aux.m"
    MR_Word hlds__passes_aux__ArgModes1_22;

#line 471 "passes_aux.m"
    {
#line 471 "passes_aux.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__passes_aux__ModuleInfo_8, hlds__passes_aux__PredId_9, hlds__passes_aux__ProcId_10, &hlds__passes_aux__PredInfo_14, &hlds__passes_aux__ProcInfo_15);
    }
#line 473 "passes_aux.m"
    {
#line 473 "passes_aux.m"
      hlds__passes_aux__PredName_16 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__passes_aux__PredInfo_14);
    }
#line 474 "passes_aux.m"
    {
#line 474 "passes_aux.m"
      hlds__passes_aux__Arity_17 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__passes_aux__PredInfo_14);
    }
#line 475 "passes_aux.m"
    {
#line 475 "passes_aux.m"
      hlds__passes_aux__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__passes_aux__PredInfo_14);
    }
#line 476 "passes_aux.m"
    {
#line 476 "passes_aux.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(hlds__passes_aux__ProcInfo_15, hlds__passes_aux__Context_12);
    }
#line 477 "passes_aux.m"
    {
#line 477 "passes_aux.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__passes_aux__ProcInfo_15, &hlds__passes_aux__ArgModes0_19);
    }
#line 5847 "hlds.passes_aux.c"
    hlds__passes_aux__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 481 "passes_aux.m"
    {
#line 481 "passes_aux.m"
      mercury__list__length_2_p_0(hlds__passes_aux__TypeCtorInfo_36_36, hlds__passes_aux__ArgModes0_19, &hlds__passes_aux__NumArgModes_20);
    }
#line 482 "passes_aux.m"
    hlds__passes_aux__NumToDrop_21 = (hlds__passes_aux__NumArgModes_20 - hlds__passes_aux__Arity_17);
#line 483 "passes_aux.m"
    {
#line 483 "passes_aux.m"
      hlds__passes_aux__succeeded = mercury__list__drop_3_p_0(hlds__passes_aux__TypeCtorInfo_36_36, hlds__passes_aux__NumToDrop_21, hlds__passes_aux__ArgModes0_19, &hlds__passes_aux__ArgModes1_22);
    }
#line 485 "passes_aux.m"
    if (hlds__passes_aux__succeeded)
#line 484 "passes_aux.m"
      hlds__passes_aux__ArgModes_23 = hlds__passes_aux__ArgModes1_22;
#line 485 "passes_aux.m"
    else
#line 486 "passes_aux.m"
      {
#line 486 "passes_aux.m"
        {
#line 486 "passes_aux.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.passes_aux", (MR_String) "predicate \140hlds.passes_aux.report_pred_proc_id\'/7", (MR_String) "list.drop failed");
#line 486 "passes_aux.m"
          return;
        }
#line 486 "passes_aux.m"
      }
#line 490 "passes_aux.m"
    if ((hlds__passes_aux__MaybeContext_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "passes_aux.m"
      hlds__passes_aux__OutContext_24 = *hlds__passes_aux__Context_12;
#line 490 "passes_aux.m"
    else
#line 489 "passes_aux.m"
      hlds__passes_aux__OutContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__MaybeContext_11, (MR_Integer) 0)));
#line 494 "passes_aux.m"
    {
#line 494 "passes_aux.m"
      parse_tree__prog_out__write_context_3_p_0(hlds__passes_aux__OutContext_24);
    }
#line 495 "passes_aux.m"
    {
#line 495 "passes_aux.m"
      mercury__io__write_string_3_p_0((MR_String) "In \140");
    }
#line 496 "passes_aux.m"
    {
#line 496 "passes_aux.m"
      hlds__passes_aux__report_pred_name_mode_5_p_0(hlds__passes_aux__PredOrFunc_18, hlds__passes_aux__PredName_16, hlds__passes_aux__ArgModes_23);
    }
#line 497 "passes_aux.m"
    {
#line 497 "passes_aux.m"
      mercury__io__write_string_3_p_0((MR_String) "\':\n");
#line 497 "passes_aux.m"
      return;
    }
#line 470 "passes_aux.m"
  }
#line 165 "passes_aux.m"
}

#line 159 "passes_aux.m"
void MR_CALL 
hlds__passes_aux__maybe_report_sizes_3_p_0(
#line 159 "passes_aux.m"
  MR_Word hlds__passes_aux__HLDS_4)
#line 159 "passes_aux.m"
{
#line 443 "passes_aux.m"
  {
#line 443 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 443 "passes_aux.m"
    MR_Word hlds__passes_aux__Globals_6;
#line 443 "passes_aux.m"
    MR_Word hlds__passes_aux__Statistics_7;

#line 444 "passes_aux.m"
    {
#line 444 "passes_aux.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__passes_aux__HLDS_4, &hlds__passes_aux__Globals_6);
    }
#line 445 "passes_aux.m"
    {
#line 445 "passes_aux.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_6, (MR_Integer) 55, &hlds__passes_aux__Statistics_7);
    }
#line 449 "passes_aux.m"
#line 449 "passes_aux.m"
    switch (hlds__passes_aux__Statistics_7) {
#line 449 "passes_aux.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 449 "passes_aux.m"
      case (MR_Integer) 0:
#line 450 "passes_aux.m"
        {
#line 450 "passes_aux.m"
        }
#line 449 "passes_aux.m"
        break;
#line 449 "passes_aux.m"
      case (MR_Integer) 1:
#line 455 "passes_aux.m"
        {
#line 455 "passes_aux.m"
          MR_Word hlds__passes_aux__PredTable_16;
#line 455 "passes_aux.m"
          MR_Word hlds__passes_aux__TypeTable_17;
#line 455 "passes_aux.m"
          MR_Word hlds__passes_aux__TypeCtorDefns_18;
#line 455 "passes_aux.m"
          MR_Word hlds__passes_aux__CtorTable_19;
#line 455 "passes_aux.m"
          MR_Word hlds__passes_aux__CtorDefns_20;
#line 455 "passes_aux.m"
          MR_Integer hlds__passes_aux__V_25_25;
#line 455 "passes_aux.m"
          MR_Integer hlds__passes_aux__V_31_31;
#line 455 "passes_aux.m"
          MR_Integer hlds__passes_aux__V_37_37;
#line 455 "passes_aux.m"
          MR_String hlds__passes_aux__V_46_46;
#line 455 "passes_aux.m"
          MR_Word hlds__passes_aux__V_52_52;
#line 455 "passes_aux.m"
          MR_String hlds__passes_aux__V_57_57;
#line 455 "passes_aux.m"
          MR_String hlds__passes_aux__V_68_68;

#line 456 "passes_aux.m"
          {
#line 456 "passes_aux.m"
            hlds__hlds_module__module_info_get_preds_2_p_0(hlds__passes_aux__HLDS_4, &hlds__passes_aux__PredTable_16);
          }
#line 457 "passes_aux.m"
          {
#line 457 "passes_aux.m"
            hlds__passes_aux__V_25_25 = mercury__map__count_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__passes_aux__PredTable_16);
          }
#line 457 "passes_aux.m"
          {
#line 457 "passes_aux.m"
            mercury__io__write_string_3_p_0((MR_String) "Pred table size = ");
          }
#line 5996 "hlds.passes_aux.c"
          hlds__passes_aux__V_52_52 = (MR_Word) &hlds__passes_aux_scalar_common_9[0];
#line 457 "passes_aux.m"
          {
#line 457 "passes_aux.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__passes_aux__V_52_52, hlds__passes_aux__V_25_25, &hlds__passes_aux__V_46_46);
          }
#line 457 "passes_aux.m"
          {
#line 457 "passes_aux.m"
            mercury__io__write_string_3_p_0(hlds__passes_aux__V_46_46);
          }
#line 457 "passes_aux.m"
          {
#line 457 "passes_aux.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 459 "passes_aux.m"
          {
#line 459 "passes_aux.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__passes_aux__HLDS_4, &hlds__passes_aux__TypeTable_17);
          }
#line 460 "passes_aux.m"
          {
#line 460 "passes_aux.m"
            hlds__hlds_data__get_all_type_ctor_defns_2_p_0(hlds__passes_aux__TypeTable_17, &hlds__passes_aux__TypeCtorDefns_18);
          }
#line 461 "passes_aux.m"
          {
#line 461 "passes_aux.m"
            hlds__passes_aux__V_31_31 = mercury__list__length_1_f_0((MR_Word) &hlds__passes_aux_scalar_common_2[0], hlds__passes_aux__TypeCtorDefns_18);
          }
#line 461 "passes_aux.m"
          {
#line 461 "passes_aux.m"
            mercury__io__write_string_3_p_0((MR_String) "Type table size = ");
          }
#line 461 "passes_aux.m"
          {
#line 461 "passes_aux.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__passes_aux__V_52_52, hlds__passes_aux__V_31_31, &hlds__passes_aux__V_57_57);
          }
#line 461 "passes_aux.m"
          {
#line 461 "passes_aux.m"
            mercury__io__write_string_3_p_0(hlds__passes_aux__V_57_57);
          }
#line 461 "passes_aux.m"
          {
#line 461 "passes_aux.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 463 "passes_aux.m"
          {
#line 463 "passes_aux.m"
            hlds__hlds_module__module_info_get_cons_table_2_p_0(hlds__passes_aux__HLDS_4, &hlds__passes_aux__CtorTable_19);
          }
#line 464 "passes_aux.m"
          {
#line 464 "passes_aux.m"
            hlds__hlds_data__get_all_cons_defns_2_p_0(hlds__passes_aux__CtorTable_19, &hlds__passes_aux__CtorDefns_20);
          }
#line 466 "passes_aux.m"
          {
#line 466 "passes_aux.m"
            hlds__passes_aux__V_37_37 = mercury__list__length_1_f_0((MR_Word) &hlds__passes_aux_scalar_common_2[1], hlds__passes_aux__CtorDefns_20);
          }
#line 465 "passes_aux.m"
          {
#line 465 "passes_aux.m"
            mercury__io__write_string_3_p_0((MR_String) "Constructor table size = ");
          }
#line 466 "passes_aux.m"
          {
#line 466 "passes_aux.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__passes_aux__V_52_52, hlds__passes_aux__V_37_37, &hlds__passes_aux__V_68_68);
          }
#line 466 "passes_aux.m"
          {
#line 466 "passes_aux.m"
            mercury__io__write_string_3_p_0(hlds__passes_aux__V_68_68);
          }
#line 465 "passes_aux.m"
          {
#line 465 "passes_aux.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
#line 465 "passes_aux.m"
            return;
          }
#line 455 "passes_aux.m"
        }
#line 449 "passes_aux.m"
        break;
#line 449 "passes_aux.m"
    }
#line 443 "passes_aux.m"
  }
#line 159 "passes_aux.m"
}

#line 156 "passes_aux.m"
void MR_CALL 
hlds__passes_aux__write_proc_progress_message_6_p_0(
#line 156 "passes_aux.m"
  MR_String hlds__passes_aux__Message_7,
#line 156 "passes_aux.m"
  MR_Word hlds__passes_aux__PredId_8,
#line 156 "passes_aux.m"
  MR_Integer hlds__passes_aux__ProcId_9,
#line 156 "passes_aux.m"
  MR_Word hlds__passes_aux__ModuleInfo_10)
#line 156 "passes_aux.m"
{
#line 429 "passes_aux.m"
  {
#line 429 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 429 "passes_aux.m"
    MR_Word hlds__passes_aux__Globals_12;
#line 429 "passes_aux.m"
    MR_Word hlds__passes_aux__VeryVerbose_13;

#line 430 "passes_aux.m"
    {
#line 430 "passes_aux.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__passes_aux__ModuleInfo_10, &hlds__passes_aux__Globals_12);
    }
#line 431 "passes_aux.m"
    {
#line 431 "passes_aux.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_12, (MR_Integer) 46, &hlds__passes_aux__VeryVerbose_13);
    }
#line 437 "passes_aux.m"
#line 437 "passes_aux.m"
    switch (hlds__passes_aux__VeryVerbose_13) {
#line 437 "passes_aux.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 437 "passes_aux.m"
      case (MR_Integer) 0:
#line 438 "passes_aux.m"
        {
#line 438 "passes_aux.m"
        }
#line 437 "passes_aux.m"
        break;
#line 437 "passes_aux.m"
      case (MR_Integer) 1:
#line 433 "passes_aux.m"
        {
#line 434 "passes_aux.m"
          {
#line 434 "passes_aux.m"
            mercury__io__write_string_3_p_0(hlds__passes_aux__Message_7);
          }
#line 435 "passes_aux.m"
          {
#line 435 "passes_aux.m"
            hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(hlds__passes_aux__ModuleInfo_10, hlds__passes_aux__PredId_8, hlds__passes_aux__ProcId_9);
          }
#line 436 "passes_aux.m"
          {
#line 436 "passes_aux.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
#line 436 "passes_aux.m"
            return;
          }
#line 433 "passes_aux.m"
        }
#line 437 "passes_aux.m"
        break;
#line 437 "passes_aux.m"
    }
#line 429 "passes_aux.m"
  }
#line 156 "passes_aux.m"
}

#line 153 "passes_aux.m"
void MR_CALL 
hlds__passes_aux__write_proc_progress_message_5_p_0(
#line 153 "passes_aux.m"
  MR_String hlds__passes_aux__Message_6,
#line 153 "passes_aux.m"
  MR_Word hlds__passes_aux__HeadVar__2_2,
#line 153 "passes_aux.m"
  MR_Word hlds__passes_aux__ModuleInfo_9)
#line 153 "passes_aux.m"
{
#line 426 "passes_aux.m"
  {
#line 426 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 426 "passes_aux.m"
    MR_Word hlds__passes_aux__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
#line 426 "passes_aux.m"
    MR_Integer hlds__passes_aux__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));

#line 427 "passes_aux.m"
    {
#line 427 "passes_aux.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0(hlds__passes_aux__Message_6, hlds__passes_aux__PredId_7, hlds__passes_aux__ProcId_8, hlds__passes_aux__ModuleInfo_9);
#line 427 "passes_aux.m"
      return;
    }
#line 426 "passes_aux.m"
  }
#line 153 "passes_aux.m"
}

#line 150 "passes_aux.m"
void MR_CALL 
hlds__passes_aux__write_pred_progress_message_5_p_0(
#line 150 "passes_aux.m"
  MR_String hlds__passes_aux__Message_6,
#line 150 "passes_aux.m"
  MR_Word hlds__passes_aux__PredId_7,
#line 150 "passes_aux.m"
  MR_Word hlds__passes_aux__ModuleInfo_8)
#line 150 "passes_aux.m"
{
#line 414 "passes_aux.m"
  {
#line 414 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 414 "passes_aux.m"
    MR_Word hlds__passes_aux__Globals_10;
#line 414 "passes_aux.m"
    MR_Word hlds__passes_aux__VeryVerbose_11;

#line 415 "passes_aux.m"
    {
#line 415 "passes_aux.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__passes_aux__ModuleInfo_8, &hlds__passes_aux__Globals_10);
    }
#line 416 "passes_aux.m"
    {
#line 416 "passes_aux.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_10, (MR_Integer) 46, &hlds__passes_aux__VeryVerbose_11);
    }
#line 422 "passes_aux.m"
#line 422 "passes_aux.m"
    switch (hlds__passes_aux__VeryVerbose_11) {
#line 422 "passes_aux.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 422 "passes_aux.m"
      case (MR_Integer) 0:
#line 423 "passes_aux.m"
        {
#line 423 "passes_aux.m"
        }
#line 422 "passes_aux.m"
        break;
#line 422 "passes_aux.m"
      case (MR_Integer) 1:
#line 418 "passes_aux.m"
        {
#line 419 "passes_aux.m"
          {
#line 419 "passes_aux.m"
            mercury__io__write_string_3_p_0(hlds__passes_aux__Message_6);
          }
#line 420 "passes_aux.m"
          {
#line 420 "passes_aux.m"
            hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__passes_aux__ModuleInfo_8, hlds__passes_aux__PredId_7);
          }
#line 421 "passes_aux.m"
          {
#line 421 "passes_aux.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
#line 421 "passes_aux.m"
            return;
          }
#line 418 "passes_aux.m"
        }
#line 422 "passes_aux.m"
        break;
#line 422 "passes_aux.m"
    }
#line 414 "passes_aux.m"
  }
#line 150 "passes_aux.m"
}

#line 143 "passes_aux.m"
void MR_CALL 
hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(
#line 143 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0_22,
#line 143 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Task_23,
#line 143 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24,
#line 143 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_25)
#line 143 "passes_aux.m"
{
#line 274 "passes_aux.m"
  {
#line 274 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 274 "passes_aux.m"
    MR_Word hlds__passes_aux__ValidPredIds_7;

#line 275 "passes_aux.m"
    {
#line 275 "passes_aux.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24, &hlds__passes_aux__ValidPredIds_7);
    }
#line 288 "passes_aux.m"
#line 288 "passes_aux.m"
    switch (MR_tag((MR_Word) hlds__passes_aux__STATE_VARIABLE_Task_0_22)) {
#line 288 "passes_aux.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 288 "passes_aux.m"
      case (MR_Integer) 0:
#line 288 "passes_aux.m"
      case (MR_Integer) 1:
#line 288 "passes_aux.m"
      case (MR_Integer) 2:
#line 280 "passes_aux.m"
        {
#line 280 "passes_aux.m"
          MR_Word hlds__passes_aux__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 280 "passes_aux.m"
          MR_Word hlds__passes_aux__TypeCtorInfo_30_30;
#line 280 "passes_aux.m"
          MR_Word hlds__passes_aux__ValidPredIdSet_11;
#line 280 "passes_aux.m"
          MR_Word hlds__passes_aux__PredMap0_12;
#line 280 "passes_aux.m"
          MR_Word hlds__passes_aux__PredIdsInfos0_13;
#line 280 "passes_aux.m"
          MR_Word hlds__passes_aux__PredIdsInfos_14;
#line 280 "passes_aux.m"
          MR_Word hlds__passes_aux__PredMap_15;

#line 281 "passes_aux.m"
          {
#line 281 "passes_aux.m"
            hlds__passes_aux__ValidPredIdSet_11 = mercury__set_tree234__list_to_set_1_f_0(hlds__passes_aux__TypeCtorInfo_29_29, hlds__passes_aux__ValidPredIds_7);
          }
#line 282 "passes_aux.m"
          {
#line 282 "passes_aux.m"
            hlds__hlds_module__module_info_get_preds_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24, &hlds__passes_aux__PredMap0_12);
          }
#line 6343 "hlds.passes_aux.c"
          hlds__passes_aux__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 283 "passes_aux.m"
          {
#line 283 "passes_aux.m"
            mercury__map__to_assoc_list_2_p_0(hlds__passes_aux__TypeCtorInfo_29_29, hlds__passes_aux__TypeCtorInfo_30_30, hlds__passes_aux__PredMap0_12, &hlds__passes_aux__PredIdsInfos0_13);
          }
#line 284 "passes_aux.m"
          {
#line 284 "passes_aux.m"
            hlds__passes_aux__par_process_nonimported_procs_in_preds_5_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24, hlds__passes_aux__STATE_VARIABLE_Task_0_22, hlds__passes_aux__ValidPredIdSet_11, hlds__passes_aux__PredIdsInfos0_13, &hlds__passes_aux__PredIdsInfos_14);
          }
#line 286 "passes_aux.m"
          {
#line 286 "passes_aux.m"
            mercury__map__from_sorted_assoc_list_2_p_0(hlds__passes_aux__TypeCtorInfo_29_29, hlds__passes_aux__TypeCtorInfo_30_30, hlds__passes_aux__PredIdsInfos_14, &hlds__passes_aux__PredMap_15);
          }
#line 287 "passes_aux.m"
          {
#line 287 "passes_aux.m"
            hlds__hlds_module__module_info_set_preds_3_p_0(hlds__passes_aux__PredMap_15, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_25);
          }
#line 280 "passes_aux.m"
          *hlds__passes_aux__STATE_VARIABLE_Task_23 = hlds__passes_aux__STATE_VARIABLE_Task_0_22;
#line 280 "passes_aux.m"
        }
#line 288 "passes_aux.m"
        break;
#line 288 "passes_aux.m"
      case (MR_Integer) 3:
#line 294 "passes_aux.m"
        {
#line 294 "passes_aux.m"
          hlds__passes_aux__seq_process_nonimported_procs_in_preds_5_p_0(hlds__passes_aux__ValidPredIds_7, hlds__passes_aux__STATE_VARIABLE_Task_0_22, hlds__passes_aux__STATE_VARIABLE_Task_23, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_25);
#line 294 "passes_aux.m"
          return;
        }
#line 288 "passes_aux.m"
        break;
#line 288 "passes_aux.m"
    }
#line 274 "passes_aux.m"
  }
#line 143 "passes_aux.m"
}

#line 140 "passes_aux.m"
void MR_CALL 
hlds__passes_aux__process_all_nonimported_procs_3_p_0(
#line 140 "passes_aux.m"
  MR_Word hlds__passes_aux__Task_4,
#line 140 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_7,
#line 140 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_8)
#line 140 "passes_aux.m"
{
#line 272 "passes_aux.m"
  {
#line 272 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 272 "passes_aux.m"
    MR_Word hlds__passes_aux__V_6_6;

#line 272 "passes_aux.m"
    {
#line 272 "passes_aux.m"
      hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(hlds__passes_aux__Task_4, &hlds__passes_aux__V_6_6, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_7, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_8);
    }
#line 272 "passes_aux.m"
  }
#line 140 "passes_aux.m"
}

#line 234 "passes_aux.m"
static void MR_CALL 
hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0_1(
#line 234 "passes_aux.m"
  MR_Box hlds__passes_aux__closure_arg,
#line 234 "passes_aux.m"
  MR_Box hlds__passes_aux__wrapper_arg_1,
#line 234 "passes_aux.m"
  MR_Box hlds__passes_aux__wrapper_arg_2,
#line 234 "passes_aux.m"
  MR_Box * hlds__passes_aux__wrapper_arg_3,
#line 234 "passes_aux.m"
  MR_Box hlds__passes_aux__wrapper_arg_4,
#line 234 "passes_aux.m"
  MR_Box * hlds__passes_aux__wrapper_arg_5)
#line 234 "passes_aux.m"
{
#line 234 "passes_aux.m"
  {
#line 234 "passes_aux.m"
    MR_Box hlds__passes_aux__closure = hlds__passes_aux__closure_arg;
#line 234 "passes_aux.m"
    MR_Word hlds__passes_aux__conv1_STATE_VARIABLE_ModuleInfo_15;
#line 234 "passes_aux.m"
    MR_Word hlds__passes_aux__conv0_STATE_VARIABLE_Specs_17;

#line 234 "passes_aux.m"
    {
#line 234 "passes_aux.m"
      hlds__passes_aux__process_nonimported_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__closure, (MR_Integer) 3))), ((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2), &hlds__passes_aux__conv1_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) hlds__passes_aux__wrapper_arg_4), &hlds__passes_aux__conv0_STATE_VARIABLE_Specs_17);
    }
#line 234 "passes_aux.m"
    *hlds__passes_aux__wrapper_arg_3 = ((MR_Box) (hlds__passes_aux__conv1_STATE_VARIABLE_ModuleInfo_15));
#line 234 "passes_aux.m"
    *hlds__passes_aux__wrapper_arg_5 = ((MR_Box) (hlds__passes_aux__conv0_STATE_VARIABLE_Specs_17));
#line 234 "passes_aux.m"
  }
#line 234 "passes_aux.m"
}

#line 47 "passes_aux.m"
void MR_CALL 
hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0(
#line 47 "passes_aux.m"
  MR_Word hlds__passes_aux__Task_8,
#line 47 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_13,
#line 47 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_14,
#line 47 "passes_aux.m"
  MR_Word hlds__passes_aux__STATE_VARIABLE_Specs_0_15,
#line 47 "passes_aux.m"
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Specs_16)
#line 47 "passes_aux.m"
{
#line 232 "passes_aux.m"
  {
#line 232 "passes_aux.m"
    MR_bool hlds__passes_aux__succeeded;
#line 232 "passes_aux.m"
    MR_Word hlds__passes_aux__PredIds_12;
#line 232 "passes_aux.m"
    MR_Word hlds__passes_aux__V_19_19;
#line 234 "passes_aux.m"
    MR_Box hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_14;
#line 234 "passes_aux.m"
    MR_Box hlds__passes_aux__conv2_STATE_VARIABLE_Specs_16;

#line 233 "passes_aux.m"
    {
#line 233 "passes_aux.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_13, &hlds__passes_aux__PredIds_12);
    }
#line 234 "passes_aux.m"
    {
#line 234 "passes_aux.m"
      hlds__passes_aux__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 234 "passes_aux.m"
      MR_hl_field(MR_mktag(0), hlds__passes_aux__V_19_19, 0) = ((MR_Box) (&hlds__passes_aux_scalar_common_3[2]));
#line 234 "passes_aux.m"
      MR_hl_field(MR_mktag(0), hlds__passes_aux__V_19_19, 1) = ((MR_Box) (hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0_1));
#line 234 "passes_aux.m"
      MR_hl_field(MR_mktag(0), hlds__passes_aux__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 234 "passes_aux.m"
      MR_hl_field(MR_mktag(0), hlds__passes_aux__V_19_19, 3) = ((MR_Box) (hlds__passes_aux__Task_8));
#line 234 "passes_aux.m"
    }
#line 234 "passes_aux.m"
    {
#line 234 "passes_aux.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__passes_aux_scalar_common_1[0], hlds__passes_aux__V_19_19, hlds__passes_aux__PredIds_12, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_13)), &hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_14, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_Specs_0_15)), &hlds__passes_aux__conv2_STATE_VARIABLE_Specs_16);
    }
#line 234 "passes_aux.m"
    *hlds__passes_aux__STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_14);
#line 234 "passes_aux.m"
    *hlds__passes_aux__STATE_VARIABLE_Specs_16 = ((MR_Word) hlds__passes_aux__conv2_STATE_VARIABLE_Specs_16);
#line 232 "passes_aux.m"
  }
#line 47 "passes_aux.m"
}

void mercury__hlds__passes_aux__init(void)
{
}

void mercury__hlds__passes_aux__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_dump_info_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_cookie_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_pred_cookie_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_pred_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_pred_error_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_ids_pred_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_ids_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_pred_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_proc_task_0);
}

void mercury__hlds__passes_aux__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.passes_aux. */
